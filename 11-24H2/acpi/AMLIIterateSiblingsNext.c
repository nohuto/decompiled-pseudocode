/*
 * XREFs of AMLIIterateSiblingsNext @ 0x140040EE4
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x140040B24 (ACPIGpeBuildEventMasks.c)
 *     EnableDisableCMOSRegions @ 0x140040CC0 (EnableDisableCMOSRegions.c)
 *     ACPIBuildMissingChildren @ 0x140040DF0 (ACPIBuildMissingChildren.c)
 *     EnableDisableIPMIRegions @ 0x14009EEB0 (EnableDisableIPMIRegions.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNextSibling @ 0x140040F18 (AMLIGetNextSibling.c)
 */

__int64 __fastcall AMLIIterateSiblingsNext(__int64 a1)
{
  __int64 Sibling; // rbx

  Sibling = AMLIGetNextSibling();
  AMLIDereferenceHandleEx(a1);
  return Sibling;
}
