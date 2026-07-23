/*
 * XREFs of PsGetJobSilo @ 0x140407170
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140829C2C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14082A14C (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092B88C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14092BAE4 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092C3D8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409F75EC (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A5BD80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PspGetJobSilo @ 0x1404071B0 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetJobSilo(__int64 a1)
{
  __int64 JobSilo; // rax
  __int64 *v2; // rdx

  if ( !a1 )
    return 3221225485LL;
  JobSilo = PspGetJobSilo(a1);
  if ( !JobSilo )
    return 3221226761LL;
  *v2 = JobSilo;
  return 0LL;
}
