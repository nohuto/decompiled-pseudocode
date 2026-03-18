/*
 * XREFs of PsGetPermanentSiloContext @ 0x1403EA530
 * Callers:
 *     ObInitServerSilo @ 0x140736FFC (ObInitServerSilo.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408195FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x140819B1C (VrpHandleIoctlModifyFlags.c)
 *     ObGetSiloRootDirectoryPath @ 0x14081B1D4 (ObGetSiloRootDirectoryPath.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     VRegEnabledInJob @ 0x14094A6C0 (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14094A72C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14094ACCC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14094BD98 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     CmpGetContextForSiloNoRef @ 0x1409E32A0 (CmpGetContextForSiloNoRef.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1536);
  else
    v3 = qword_140FCEEB0;
  *a3 = 0LL;
  if ( a2 >= 0x20 )
  {
    a2 -= 32;
    if ( a2 >= 0x100 )
      return 3221225485LL;
    v3 = *(_QWORD *)(v3 + 512);
    if ( !v3 )
      return 3221226021LL;
  }
  v4 = *(_QWORD *)(v3 + 16LL * a2 + 8);
  if ( (v4 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return 3221226021LL;
  if ( (v4 & 1) == 0 )
    return 3221225659LL;
  *a3 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  return 0LL;
}
