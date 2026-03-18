/*
 * XREFs of CmInitSiloNamespace @ 0x1409E3058
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1409E30C0 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E3800 (CmpStartSiloRegistryNamespace.c)
 */

__int64 CmInitSiloNamespace()
{
  __int64 v0; // r8
  int v1; // eax
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  v1 = CmpGetOrCreateContextForSiloNoRef(v0, &v6);
  if ( v1 >= 0 )
    CmpStartSiloRegistryNamespace(v6, v2, (unsigned int)v1);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
