/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x1405B7E00
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140681AE8 (MiPrepareEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x1406ABEA0 (KiEncls.c)
 */

__int64 __fastcall KeCreateEnclaveMetadataPage(__int64 a1)
{
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  KiEncls(10LL, 3LL, a1, 0LL);
  return 0LL;
}
