/*
 * XREFs of CmInitServerSiloState @ 0x1407D6024
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 *     CmpInitSiloSupport @ 0x1407D60A4 (CmpInitSiloSupport.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1409DBAC4 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409DC200 (CmpStartSiloRegistryNamespace.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140A8203C (CmpUnlockSiloKeyLockTracker.c)
 */

__int64 CmInitServerSiloState()
{
  __int64 v0; // r9
  int v1; // eax
  __int64 v2; // rdx
  ULONG_PTR v3; // rbx
  unsigned int v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  v1 = CmpGetOrCreateContextForSiloNoRef(v0, &BugCheckParameter2);
  if ( v1 >= 0 )
  {
    v3 = BugCheckParameter2;
    if ( (int)CmpStartSiloRegistryNamespace(BugCheckParameter2, v2, (unsigned int)v1) >= 0 )
    {
      KsepCacheLock(v3);
      *(_DWORD *)(v3 + 8) |= 1u;
      CmpUnlockSiloKeyLockTracker(v3);
    }
  }
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
