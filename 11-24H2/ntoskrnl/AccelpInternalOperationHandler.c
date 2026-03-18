/*
 * XREFs of AccelpInternalOperationHandler @ 0x14040A7AC
 * Callers:
 *     AccelGetStatusFromCompletionRecord @ 0x14040A548 (AccelGetStatusFromCompletionRecord.c)
 *     AccelBuildDescriptorMemoryFill @ 0x14040A6BC (AccelBuildDescriptorMemoryFill.c)
 *     AccelSubmitWorkAsync @ 0x14040ABE8 (AccelSubmitWorkAsync.c)
 *     AccelWaitForWorkCompletion @ 0x14040AC70 (AccelWaitForWorkCompletion.c)
 *     AccelBuildDescriptorMemoryCompress @ 0x1406653E8 (AccelBuildDescriptorMemoryCompress.c)
 *     AccelBuildDescriptorMemoryDecompress @ 0x14066551C (AccelBuildDescriptorMemoryDecompress.c)
 *     AccelBuildDescriptorNop @ 0x140665650 (AccelBuildDescriptorNop.c)
 *     AccelInitializeCompressionWorkspace @ 0x140665974 (AccelInitializeCompressionWorkspace.c)
 *     AccelQueryCompletionInformation @ 0x140665B48 (AccelQueryCompletionInformation.c)
 *     AccelQueryDescriptorSize @ 0x140665BF4 (AccelQueryDescriptorSize.c)
 *     AccelpBuildDescriptorComputeHistogram @ 0x140665CA8 (AccelpBuildDescriptorComputeHistogram.c)
 * Callees:
 *     AccelpSiovInternalOperationHandler @ 0x14040A7DC (AccelpSiovInternalOperationHandler.c)
 */

__int64 __fastcall AccelpInternalOperationHandler(__int64 a1)
{
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 184LL) == 1 )
    return AccelpSiovInternalOperationHandler();
  else
    return 3221225659LL;
}
