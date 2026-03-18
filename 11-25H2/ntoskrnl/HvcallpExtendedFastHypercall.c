/*
 * XREFs of HvcallpExtendedFastHypercall @ 0x1406A9E90
 * Callers:
 *     HvlpFastFlushAddressSpaceTb @ 0x14027015C (HvlpFastFlushAddressSpaceTb.c)
 *     HvcallFastExtended @ 0x14032C840 (HvcallFastExtended.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1406A9EF0 (HvcallpExtendedFastHypercallWithOutput.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x1404AC0A0 (HvcallpNoHypervisorPresent.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercall(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return HvcallCodeVa();
}
