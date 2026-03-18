/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline @ 0x140017828
 * Callers:
 *     SglToPrp @ 0x140005090 (SglToPrp.c)
 *     NVMeSplitIoCommand @ 0x140024CD0 (NVMeSplitIoCommand.c)
 *     NVMeSplitIoCommandCompletion @ 0x140024E70 (NVMeSplitIoCommandCompletion.c)
 *     NVMeIceIoStart @ 0x140029150 (NVMeIceIoStart.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x14001780C (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 */

__int64 Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 2) != 0 )
    return Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 1;
  else
    return Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(
             (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_featureState,
             0LL);
}
