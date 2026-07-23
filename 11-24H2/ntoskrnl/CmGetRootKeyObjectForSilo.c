/*
 * XREFs of CmGetRootKeyObjectForSilo @ 0x1409DB944
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409F75EC (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpGetContextForSiloNoRef @ 0x1409DBCA0 (CmpGetContextForSiloNoRef.c)
 */

__int64 CmGetRootKeyObjectForSilo()
{
  __int64 v0; // r9
  __int64 ContextForSiloNoRef; // rax
  void *v2; // rcx
  __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  ContextForSiloNoRef = CmpGetContextForSiloNoRef(v0);
  if ( ContextForSiloNoRef && (v2 = *(void **)(ContextForSiloNoRef + 32)) != 0LL )
    PsReferenceSiloContext(v2);
  else
    PsReferenceSiloContext(CmpRegistryRootObject);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
