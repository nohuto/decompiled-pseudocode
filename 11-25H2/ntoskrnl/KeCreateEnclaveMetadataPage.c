/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x1405B69AC
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406750C8 (MiPrepareEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x14069FC30 (KiEncls.c)
 */

__int64 __fastcall KeCreateEnclaveMetadataPage(__int64 a1)
{
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  KiEncls(10LL, 3LL, a1, 0LL);
  return 0LL;
}
