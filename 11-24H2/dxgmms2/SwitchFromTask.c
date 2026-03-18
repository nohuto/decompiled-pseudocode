/*
 * XREFs of SwitchFromTask @ 0x1400916E0
 * Callers:
 *     ?VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400915FC (-VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SwitchFromTask(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  if ( *(_QWORD *)(a1 + 5968) == a2 )
  {
    v3 = a1 + 5392;
    *(_BYTE *)(a1 + 5976) = 1;
    *(_QWORD *)(a1 + 5400) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 5392, 0LL);
    KeLeaveCriticalRegion();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
    *(_QWORD *)(a1 + 168) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0LL);
    *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
    *(_QWORD *)(a1 + 168) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 160, 0LL);
    KeLeaveCriticalRegion();
  }
}
