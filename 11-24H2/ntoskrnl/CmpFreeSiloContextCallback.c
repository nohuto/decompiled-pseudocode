/*
 * XREFs of CmpFreeSiloContextCallback @ 0x140A81F10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A81F60 (CmpStopSiloKeyLockTracker.c)
 */

_KAFFINITY_EX *__fastcall CmpFreeSiloContextCallback(ULONG_PTR a1)
{
  void *v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  CmpStopSiloKeyLockTracker(a1);
  v2 = *(void **)(a1 + 32);
  if ( v2 )
    ObfDereferenceObject(v2);
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v4);
}
