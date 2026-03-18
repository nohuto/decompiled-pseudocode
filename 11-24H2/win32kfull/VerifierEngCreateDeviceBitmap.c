/*
 * XREFs of VerifierEngCreateDeviceBitmap @ 0x14032FF10
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x14032FB80 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure((int)dhsurf, *(_QWORD *)&sizl) )
    return 0LL;
  else
    return EngCreateDeviceBitmap(dhsurf, sizl, iFormatCompat);
}
