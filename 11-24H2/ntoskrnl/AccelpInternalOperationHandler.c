/*
 * XREFs of AccelpInternalOperationHandler @ 0x140402C8C
 * Callers:
 *     AccelGetStatusFromCompletionRecord @ 0x140402A28 (AccelGetStatusFromCompletionRecord.c)
 *     AccelBuildDescriptorMemoryFill @ 0x140402B9C (AccelBuildDescriptorMemoryFill.c)
 *     AccelSubmitWorkAsync @ 0x1404030C8 (AccelSubmitWorkAsync.c)
 *     AccelWaitForWorkCompletion @ 0x140403150 (AccelWaitForWorkCompletion.c)
 *     AccelBuildDescriptorMemoryCompress @ 0x140663CD8 (AccelBuildDescriptorMemoryCompress.c)
 *     AccelBuildDescriptorMemoryDecompress @ 0x140663E0C (AccelBuildDescriptorMemoryDecompress.c)
 *     AccelBuildDescriptorNop @ 0x140663F40 (AccelBuildDescriptorNop.c)
 *     AccelInitializeCompressionWorkspace @ 0x140664264 (AccelInitializeCompressionWorkspace.c)
 *     AccelQueryCompletionInformation @ 0x140664438 (AccelQueryCompletionInformation.c)
 *     AccelQueryDescriptorSize @ 0x1406644E4 (AccelQueryDescriptorSize.c)
 *     AccelpBuildDescriptorComputeHistogram @ 0x140664598 (AccelpBuildDescriptorComputeHistogram.c)
 * Callees:
 *     AccelpSiovInternalOperationHandler @ 0x140402CBC (AccelpSiovInternalOperationHandler.c)
 */

__int64 __fastcall AccelpInternalOperationHandler(__int64 a1)
{
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 184LL) == 1 )
    return AccelpSiovInternalOperationHandler();
  else
    return 3221225659LL;
}
