/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x1406B6100
 * Callers:
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x14039F2D4 (HvlpFastFlushAddressSpaceTb.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1406B6160 (HvcallpExtendedFastHypercallWithOutput.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x1404A7D70 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
