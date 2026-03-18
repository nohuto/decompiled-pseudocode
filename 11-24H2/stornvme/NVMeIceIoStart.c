/*
 * XREFs of NVMeIceIoStart @ 0x140029150
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 *     NVMeSplitIoCommandCompletion @ 0x140024E70 (NVMeSplitIoCommandCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline @ 0x140017828 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall NVMeIceIoStart(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  __int64 SrbExtension; // rbx

  v6 = 0;
  SrbExtension = GetSrbExtension(a2);
  if ( *(_DWORD *)(SrbExtension + 4220) )
  {
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline() )
      return (unsigned int)StorPortExtendedFunction(134LL, a1, a2, a3);
    else
      return (unsigned int)StorPortExtendedFunction(
                             126LL,
                             a1,
                             a2,
                             (unsigned int)(unsigned __int16)*(_DWORD *)(SrbExtension + 4144) + 1);
  }
  return v6;
}
