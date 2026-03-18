/*
 * XREFs of CmGetRootKeyObjectForSilo @ 0x1409E2F4C
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpGetContextForSiloNoRef @ 0x1409E32A0 (CmpGetContextForSiloNoRef.c)
 */

__int64 CmGetRootKeyObjectForSilo()
{
  __int64 v0; // r8
  __int64 ContextForSiloNoRef; // rax
  void *v2; // rcx
  __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  ContextForSiloNoRef = CmpGetContextForSiloNoRef(v0);
  if ( ContextForSiloNoRef && (v2 = *(void **)(ContextForSiloNoRef + 32)) != 0LL )
    PsReferenceSiloContext(v2);
  else
    PsReferenceSiloContext(CmpRegistryRootObject);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
