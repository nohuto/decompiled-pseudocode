/*
 * XREFs of SepQueueWorkItem @ 0x140349B84
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     SepInformLsaOfDeletedLogon @ 0x140AAB6E4 (SepInformLsaOfDeletedLogon.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PsGetServerSiloState @ 0x140349D3C (PsGetServerSiloState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall SepQueueWorkItem(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rcx
  char v7; // bp
  char v8; // r12
  _BYTE *v9; // r8
  unsigned __int8 CurrentIrql; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 56);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  v8 = 0;
  if ( (unsigned int)PsGetServerSiloState(v4) == 1 )
  {
    if ( v9 )
      *v9 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v14 = *(_QWORD *)(a1 + 200);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
      v14 = *(_QWORD *)(a1 + 192);
    }
    if ( v14 )
    {
      if ( a3 )
        *a3 = 1;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 208) )
      {
        v7 = 1;
        goto LABEL_9;
      }
      v7 = guard_dispatch_icall_no_overrides(a2, v11, v12, v13);
      if ( v7 )
      {
LABEL_9:
        *(_DWORD *)(a2 + 52) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
        if ( CurrentIrql == 2 )
        {
          v15 = *(_QWORD **)(a1 + 24);
          if ( *v15 != a1 + 16 )
            goto LABEL_11;
          *(_QWORD *)a2 = a1 + 16;
          *(_QWORD *)(a2 + 8) = v15;
          *v15 = a2;
          *(_QWORD *)(a1 + 24) = a2;
        }
        else
        {
          v17 = *(_QWORD **)(a1 + 8);
          if ( *v17 != a1 )
LABEL_11:
            __fastfail(3u);
          *(_QWORD *)a2 = a1;
          *(_QWORD *)(a2 + 8) = v17;
          *v17 = a2;
          *(_QWORD *)(a1 + 8) = a2;
        }
        if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 176)) == 1 )
          v8 = 1;
      }
    }
    if ( CurrentIrql == 2 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)(a1 + 32));
      KeLeaveCriticalRegion();
    }
    if ( v8 )
    {
      *(_QWORD *)(a1 + 144) = 0LL;
      *(_QWORD *)(a1 + 160) = SepRmCallLsa;
      *(_QWORD *)(a1 + 168) = a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 144), DelayedWorkQueue);
    }
    return v7;
  }
  if ( a3 )
    *v9 = 1;
  return 0;
}
