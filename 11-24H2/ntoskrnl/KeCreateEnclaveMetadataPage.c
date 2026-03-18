/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x1405BA7D0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406808E8 (MiPrepareEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x1406AAF00 (KiEncls.c)
 */

__int64 __fastcall KeCreateEnclaveMetadataPage(__int64 a1)
{
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  KiEncls(10LL, 3LL, a1, 0LL);
  return 0LL;
}
