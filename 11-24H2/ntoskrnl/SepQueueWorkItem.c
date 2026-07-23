/*
 * XREFs of SepQueueWorkItem @ 0x1403C35C4
 * Callers:
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     SepInformLsaOfDeletedLogon @ 0x140AA6914 (SepInformLsaOfDeletedLogon.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetServerSiloState @ 0x1403C377C (PsGetServerSiloState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall SepQueueWorkItem(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rcx
  char v7; // bp
  char v8; // r12
  _BYTE *v9; // r8
  unsigned __int8 CurrentIrql; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v15; // rax
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
      v12 = *(_QWORD *)(a1 + 200);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
      v12 = *(_QWORD *)(a1 + 192);
    }
    if ( v12 )
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
      v7 = guard_dispatch_icall_no_overrides(a2, v11);
      if ( v7 )
      {
LABEL_9:
        *(_DWORD *)(a2 + 52) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
        if ( CurrentIrql == 2 )
        {
          v13 = *(_QWORD **)(a1 + 24);
          if ( *v13 != a1 + 16 )
            goto LABEL_11;
          *(_QWORD *)a2 = a1 + 16;
          *(_QWORD *)(a2 + 8) = v13;
          *v13 = a2;
          *(_QWORD *)(a1 + 24) = a2;
        }
        else
        {
          v15 = *(_QWORD **)(a1 + 8);
          if ( *v15 != a1 )
LABEL_11:
            __fastfail(3u);
          *(_QWORD *)a2 = a1;
          *(_QWORD *)(a2 + 8) = v15;
          *v15 = a2;
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
