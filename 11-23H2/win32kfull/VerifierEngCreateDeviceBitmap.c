/*
 * XREFs of VerifierEngCreateDeviceBitmap @ 0x1C02A6650
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A62D0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure((__int64)dhsurf) )
    return 0LL;
  else
    return EngCreateDeviceBitmap(dhsurf, sizl, iFormatCompat);
}
