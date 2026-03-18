/*
 * XREFs of PsGetPermanentSiloContext @ 0x1403F0070
 * Callers:
 *     ObInitServerSilo @ 0x14074301C (ObInitServerSilo.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408293FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14082991C (VrpHandleIoctlModifyFlags.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082AF14 (ObGetSiloRootDirectoryPath.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     VRegEnabledInJob @ 0x1409296E0 (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092974C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092A298 (VrpHandleIoctlLoadDifferencingHive.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x1409B2680 (CmpGetRegistryNamespaceRootForSilo.c)
 *     CmpGetContextForSiloNoRef @ 0x1409E1EF0 (CmpGetContextForSiloNoRef.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A63480 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
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
    v3 = qword_140FCEE30;
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
