/*
 * XREFs of AccelpInternalOperationHandler @ 0x140659FB0
 * Callers:
 *     AccelBuildDescriptorMemoryFill @ 0x140406878 (AccelBuildDescriptorMemoryFill.c)
 *     AccelBuildDescriptorMemoryCompress @ 0x140659128 (AccelBuildDescriptorMemoryCompress.c)
 *     AccelBuildDescriptorMemoryDecompress @ 0x14065925C (AccelBuildDescriptorMemoryDecompress.c)
 *     AccelBuildDescriptorNop @ 0x140659390 (AccelBuildDescriptorNop.c)
 *     AccelGetStatusFromCompletionRecord @ 0x1406596B4 (AccelGetStatusFromCompletionRecord.c)
 *     AccelInitializeCompressionWorkspace @ 0x140659730 (AccelInitializeCompressionWorkspace.c)
 *     AccelQueryCompletionInformation @ 0x140659904 (AccelQueryCompletionInformation.c)
 *     AccelQueryDescriptorSize @ 0x1406599B0 (AccelQueryDescriptorSize.c)
 *     AccelSubmitWorkAsync @ 0x140659A64 (AccelSubmitWorkAsync.c)
 *     AccelWaitForWorkCompletion @ 0x140659AEC (AccelWaitForWorkCompletion.c)
 *     AccelpBuildDescriptorComputeHistogram @ 0x140659BD0 (AccelpBuildDescriptorComputeHistogram.c)
 * Callees:
 *     AccelpSiovInternalOperationHandler @ 0x14065ABC4 (AccelpSiovInternalOperationHandler.c)
 */

__int64 __fastcall AccelpInternalOperationHandler(__int64 a1)
{
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 184LL) == 1 )
    return AccelpSiovInternalOperationHandler();
  else
    return 3221225659LL;
}
