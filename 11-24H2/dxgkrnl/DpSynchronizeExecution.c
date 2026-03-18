/*
 * XREFs of DpSynchronizeExecution @ 0x140026180
 * Callers:
 *     DxgNotifyDpcCB @ 0x14002A460 (DxgNotifyDpcCB.c)
 *     DpiMiracastChunkInfoCallbackDpc @ 0x14007EAF0 (DpiMiracastChunkInfoCallbackDpc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpSynchronizeExecution(__int64 a1, KSYNCHRONIZE_ROUTINE *a2, void *a3, unsigned int a4, BOOLEAN *a5)
{
  int v5; // esi
  char v6; // bp
  __int64 v8; // rbx
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  struct _KINTERRUPT *v12; // rcx
  int v13; // eax
  __int64 v14; // r9
  int v16; // ecx
  KIRQL v17; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v6 = 0;
  v8 = 0LL;
  v10 = a4;
  if ( !a1 || !a2 || !a5 )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2882;
    goto LABEL_21;
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_DWORD *)(v8 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2895;
    goto LABEL_21;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    v16 = *(_DWORD *)(v8 + 236);
    if ( v16 != 2 && (*(_DWORD *)(v8 + 240) != 2 || ((v16 - 3) & 0xFFFFFFFC) != 0 || v16 == 4) && v16 != 1 )
    {
      v5 = -1073741130;
      WdLogSingleEntry1(2LL, -1073741130LL);
      WdLogGlobalForLineNumber = 2924;
      goto LABEL_21;
    }
  }
  else
  {
    v11 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), &DpSynchronizeExecution, File, 1u, 0x20u);
    v5 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 2912;
      goto LABEL_21;
    }
    v6 = 1;
  }
  v12 = *(struct _KINTERRUPT **)(v8 + 1392);
  if ( !v12 )
  {
    v17 = KfRaiseIrql(3u);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1472), &LockHandle);
    *a5 = ((__int64 (__fastcall *)(void *))a2)(a3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v17);
LABEL_16:
    if ( v5 >= 0 )
      goto LABEL_17;
    goto LABEL_21;
  }
  v13 = *(_DWORD *)(v8 + 1384);
  if ( v13 == 2 )
  {
LABEL_15:
    *a5 = KeSynchronizeExecution(v12, a2, a3);
    goto LABEL_16;
  }
  if ( v13 != 3 )
    goto LABEL_16;
  v14 = *(_QWORD *)(v8 + 1400);
  if ( *(_DWORD *)(v14 + 4) > (unsigned int)v10 )
  {
    v12 = *(struct _KINTERRUPT **)(v14 + 48 * v10 + 24);
    goto LABEL_15;
  }
  v5 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 2986;
LABEL_21:
  WdLogSingleEntry1(2LL, v5);
  WdLogGlobalForLineNumber = 3003;
LABEL_17:
  if ( v6 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), &DpSynchronizeExecution, 0x20u);
  return (unsigned int)v5;
}
