/*
 * XREFs of CmpFreeSiloContextCallback @ 0x140A82C70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A82CB8 (CmpStopSiloKeyLockTracker.c)
 */

_KAFFINITY_EX *__fastcall CmpFreeSiloContextCallback(ULONG_PTR a1)
{
  void *v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  CmpStopSiloKeyLockTracker(a1);
  v2 = *(void **)(a1 + 32);
  if ( v2 )
    ObfDereferenceObject(v2);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
}
