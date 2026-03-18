/*
 * XREFs of ACPITableUnloadCallBack @ 0x140068510
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x14004B0FC (AMLIRestartContext.c)
 *     ACPIBuildIssueInvalidateRelations @ 0x1400587A0 (ACPIBuildIssueInvalidateRelations.c)
 */

__int64 __fastcall ACPITableUnloadCallBack(__int64 a1, __int64 a2)
{
  ACPIBuildIssueInvalidateRelations(a1, RootDeviceExtension);
  return AMLIRestartContext(a2);
}
