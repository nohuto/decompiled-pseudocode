/*
 * XREFs of Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_IsEnabledDeviceUsageNoInline @ 0x140095064
 * Callers:
 *     SmmIoMmuReferenceMdl @ 0x14003B20C (SmmIoMmuReferenceMdl.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_IsEnabledFallback @ 0x14009509C (Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_featureState,
             3LL);
}
