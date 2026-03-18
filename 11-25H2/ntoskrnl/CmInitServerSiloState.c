/*
 * XREFs of CmInitServerSiloState @ 0x1407C63E4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 *     CmpInitSiloSupport @ 0x1407C6460 (CmpInitSiloSupport.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1409E30C0 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E3800 (CmpStartSiloRegistryNamespace.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140A82D94 (CmpUnlockSiloKeyLockTracker.c)
 */

__int64 CmInitServerSiloState()
{
  __int64 v0; // r8
  int v1; // eax
  __int64 v2; // rdx
  ULONG_PTR v3; // rbx
  unsigned int v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
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
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
