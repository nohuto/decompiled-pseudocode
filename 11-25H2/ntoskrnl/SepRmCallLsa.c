/*
 * XREFs of SepRmCallLsa @ 0x1403D8550
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     SepRmDispatchDataToLsa @ 0x1403D831C (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     NtWaitForSingleObject @ 0x14084EFB0 (NtWaitForSingleObject.c)
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140AA6D34 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpWriteToEtw @ 0x140AD5F20 (AdtpWriteToEtw.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  struct _KTHREAD *v12; // rax
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v15; // eax
  signed __int32 v16; // r14d
  void *v17; // rcx
  __int64 result; // rax
  __int64 v19; // rax
  NTSTATUS v20; // ebx
  struct _KEVENT *v21; // rcx
  _BYTE v22[8]; // [rsp+20h] [rbp-60h] BYREF
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
    v20 = NtWaitForSingleObject(Handle, 1u, 0LL);
    NtClose(Handle);
    if ( v20 < 0 )
      return (unsigned int)v20;
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
      if ( *(_QWORD *)(v6 + 8) != a1 || (v19 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
LABEL_38:
        __fastfail(3u);
      *(_QWORD *)a1 = v19;
      *(_QWORD *)(v19 + 8) = a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 32));
    KeLeaveCriticalRegion();
    if ( !v4 )
    {
LABEL_45:
      if ( (*(_BYTE *)(a1 + 224) & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v9 = (_QWORD *)(a1 + 16);
      v10 = *(__int64 **)(a1 + 16);
      if ( v10 == (__int64 *)(a1 + 16) )
      {
        v21 = *(struct _KEVENT **)(a1 + 200);
        if ( v21 )
          KeSetEvent(v21, 0, 0);
      }
      else if ( *((_DWORD *)v10 + 13) == *(_DWORD *)(a1 + 184) + 1 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        if ( (_QWORD *)v10[1] != v9 )
          goto LABEL_38;
        v11 = *v10;
        if ( *(__int64 **)(*v10 + 8) != v10 )
          goto LABEL_38;
        *v9 = v11;
        *(_QWORD *)(v11 + 8) = v9;
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
      v12 = KeGetCurrentThread();
      v13 = *(struct _LIST_ENTRY **)(v4 + 56);
      v22[0] = 0;
      Blink = v12[1].WaitBlock[3].WaitListEntry.Blink;
      v12[1].WaitBlock[3].WaitListEntry.Blink = v13;
      v15 = AdtpWriteToEtw(*(_QWORD *)(v4 + 24), v22);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v15 < 0 )
      {
        SepAdtLastAuditFailStatus = v15;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v22[0] )
          SepAuditFailed((unsigned int)v15);
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 4) <= 1 )
        ExFreePoolWithTag(*(PVOID *)(v4 + 24), 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
    v16 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 0xFFFFFFFF);
    v17 = *(void **)(v4 + 56);
    v3 = v16 - 1;
    if ( v17 )
    {
      ObfDereferenceObjectWithTag(v17, 0x69416553u);
      *(_QWORD *)(v4 + 56) = 0LL;
    }
    guard_dispatch_icall_no_overrides(v4, v8);
  }
  while ( v3 );
  if ( v1 )
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  return 0LL;
}
