/*
 * XREFs of SepRmCallLsa @ 0x1403C17F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     SepRmDispatchDataToLsa @ 0x1403C1B1C (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     NtWaitForSingleObject @ 0x140847020 (NtWaitForSingleObject.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140AA732C (SepAdtOpenEtwReadyEvent.c)
 *     AdtpWriteToEtw @ 0x140AEB4C0 (AdtpWriteToEtw.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  int v6; // r14d
  __int64 *v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rcx
  struct _KEVENT *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  struct _KTHREAD *v15; // rax
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v18; // eax
  signed __int32 v19; // r14d
  void *v20; // rcx
  __int64 result; // rax
  __int64 *v22; // rax
  NTSTATUS v23; // ebx
  struct _KEVENT *v24; // rcx
  _BYTE v25[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  v4 = SepRmAuditingEnabled;
  memset(&ApcState, 0, sizeof(ApcState));
  v6 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( (int)result < 0 )
      return result;
    v23 = NtWaitForSingleObject(Handle, 1u, 0LL);
    NtClose(Handle);
    if ( v23 < 0 )
      return (unsigned int)v23;
  }
  if ( v4 )
    KeStackAttachProcess(SepRmLsaCallProcess, &ApcState);
  do
  {
    v7 = 0LL;
    if ( ((_BYTE)a1[28] & 1) == 0 )
      goto LABEL_45;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 4), 1u);
    v9 = *a1;
    if ( *a1 == (__int64 *)a1 )
    {
      v10 = (struct _KEVENT *)a1[24];
      if ( v10 )
        KeSetEvent(v10, 0, 0);
    }
    else if ( *((_DWORD *)v9 + 13) == *((_DWORD *)a1 + 46) + 1 )
    {
      v7 = *a1;
      if ( (__int64 **)v9[1] != a1 || (v22 = (__int64 *)*v9, *(__int64 **)(*v9 + 8) != v9) )
LABEL_38:
        __fastfail(3u);
      *a1 = v22;
      v22[1] = (__int64)a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 4));
    KeLeaveCriticalRegion();
    if ( !v7 )
    {
LABEL_45:
      if ( ((_BYTE)a1[28] & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 17, &LockHandle);
      v12 = a1 + 2;
      v13 = a1[2];
      if ( v13 == (__int64 *)(a1 + 2) )
      {
        v24 = (struct _KEVENT *)a1[25];
        if ( v24 )
          KeSetEvent(v24, 0, 0);
      }
      else if ( *((_DWORD *)v13 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v7 = a1[2];
        if ( (_QWORD *)v13[1] != v12 )
          goto LABEL_38;
        v14 = *v13;
        if ( *(__int64 **)(*v13 + 8) != v13 )
          goto LABEL_38;
        *v12 = v14;
        *(_QWORD *)(v14 + 8) = v12;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v7 )
        continue;
    }
    if ( *((_DWORD *)v7 + 8) != 1 || (*(_DWORD *)(v7[3] + 20) & 2) != 0 )
    {
      if ( v4 )
        SepRmDispatchDataToLsa(v7);
    }
    else
    {
      v15 = KeGetCurrentThread();
      v16 = (struct _LIST_ENTRY *)v7[7];
      v25[0] = 0;
      Blink = v15[1].WaitBlock[3].WaitListEntry.Blink;
      v15[1].WaitBlock[3].WaitListEntry.Blink = v16;
      v18 = AdtpWriteToEtw(v7[3], v25);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v18 < 0 )
      {
        SepAdtLastAuditFailStatus = v18;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v25[0] )
          SepAuditFailed((unsigned int)v18);
      }
      if ( (unsigned int)(*((_DWORD *)v7 + 4) - 4) <= 1 )
        ExFreePoolWithTag((PVOID)v7[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 46);
    v19 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 44, 0xFFFFFFFF);
    v20 = (void *)v7[7];
    v6 = v19 - 1;
    if ( v20 )
    {
      ObfDereferenceObjectWithTag(v20, 0x69416553u);
      v7[7] = 0LL;
    }
    guard_dispatch_icall_no_overrides(v7, v11);
  }
  while ( v6 );
  if ( v4 )
    KiUnstackDetachProcess((__int64)&ApcState, 0, a3, a4);
  return 0LL;
}
