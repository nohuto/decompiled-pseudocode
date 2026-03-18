/*
 * XREFs of SepRmCallLsa @ 0x14034A120
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     SepRmDispatchDataToLsa @ 0x140349EEC (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     NtWaitForSingleObject @ 0x14084AD60 (NtWaitForSingleObject.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140AAC2F4 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpWriteToEtw @ 0x140AE821C (AdtpWriteToEtw.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 a1)
{
  char v1; // r15
  int v3; // r14d
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  struct _KEVENT *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  struct _KTHREAD *v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v17; // eax
  signed __int32 v18; // r14d
  void *v19; // rcx
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // ebx
  struct _KEVENT *v24; // rcx
  _BYTE v25[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  v1 = SepRmAuditingEnabled;
  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v22) = 1;
    v23 = NtWaitForSingleObject(Handle, v22, 0LL);
    NtClose(Handle);
    if ( v23 < 0 )
      return (unsigned int)v23;
  }
  if ( v1 )
    KeStackAttachProcess(SepRmLsaCallProcess, &ApcState);
  do
  {
    v4 = 0LL;
    if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
      goto LABEL_45;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
    v6 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 == a1 )
    {
      v7 = *(struct _KEVENT **)(a1 + 192);
      if ( v7 )
        KeSetEvent(v7, 0, 0);
    }
    else if ( *(_DWORD *)(v6 + 52) == *(_DWORD *)(a1 + 184) + 1 )
    {
      v4 = *(_QWORD *)a1;
      if ( *(_QWORD *)(v6 + 8) != a1 || (v21 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
LABEL_38:
        __fastfail(3u);
      *(_QWORD *)a1 = v21;
      *(_QWORD *)(v21 + 8) = a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 32));
    KeLeaveCriticalRegion();
    if ( !v4 )
    {
LABEL_45:
      if ( (*(_BYTE *)(a1 + 224) & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v11 = (_QWORD *)(a1 + 16);
      v12 = *(__int64 **)(a1 + 16);
      if ( v12 == (__int64 *)(a1 + 16) )
      {
        v24 = *(struct _KEVENT **)(a1 + 200);
        if ( v24 )
          KeSetEvent(v24, 0, 0);
      }
      else if ( *((_DWORD *)v12 + 13) == *(_DWORD *)(a1 + 184) + 1 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        if ( (_QWORD *)v12[1] != v11 )
          goto LABEL_38;
        v13 = *v12;
        if ( *(__int64 **)(*v12 + 8) != v12 )
          goto LABEL_38;
        *v11 = v13;
        *(_QWORD *)(v13 + 8) = v11;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v4 )
        continue;
    }
    if ( *(_DWORD *)(v4 + 32) != 1 || (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 20LL) & 2) != 0 )
    {
      if ( v1 )
        SepRmDispatchDataToLsa(v4);
    }
    else
    {
      v14 = KeGetCurrentThread();
      v15 = *(struct _LIST_ENTRY **)(v4 + 56);
      v25[0] = 0;
      Blink = v14[1].WaitBlock[3].WaitListEntry.Blink;
      v14[1].WaitBlock[3].WaitListEntry.Blink = v15;
      v17 = AdtpWriteToEtw(*(_QWORD *)(v4 + 24), v25);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v17 < 0 )
      {
        SepAdtLastAuditFailStatus = v17;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v25[0] )
          SepAuditFailed((unsigned int)v17);
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 4) <= 1 )
        ExFreePoolWithTag(*(PVOID *)(v4 + 24), 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
    v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 0xFFFFFFFF);
    v19 = *(void **)(v4 + 56);
    v3 = v18 - 1;
    if ( v19 )
    {
      ObfDereferenceObjectWithTag(v19, 0x69416553u);
      *(_QWORD *)(v4 + 56) = 0LL;
    }
    guard_dispatch_icall_no_overrides(v4, v8, v9, v10);
  }
  while ( v3 );
  if ( v1 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  return 0LL;
}
