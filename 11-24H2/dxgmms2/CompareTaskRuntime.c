/*
 * XREFs of CompareTaskRuntime @ 0x1400A62E4
 * Callers:
 *     ?EnqueueTask@VIDMM_SCHCLASS_PAGING@@UEAAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400A6420 (-EnqueueTask@VIDMM_SCHCLASS_PAGING@@UEAAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareTaskRuntime(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  v2 = *a1;
  v3 = *(_QWORD *)(a2 + 48);
  if ( v2 >= v3 )
    return v2 != v3;
  else
    return 0xFFFFFFFFLL;
}
