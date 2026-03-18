/*
 * XREFs of CmpFreeSiloContextCallback @ 0x140A871C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A87210 (CmpStopSiloKeyLockTracker.c)
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
