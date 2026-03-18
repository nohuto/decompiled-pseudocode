/*
 * XREFs of CmGetRootKeyObjectForSilo @ 0x1409E1B94
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409FE37C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpGetContextForSiloNoRef @ 0x1409E1EF0 (CmpGetContextForSiloNoRef.c)
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
