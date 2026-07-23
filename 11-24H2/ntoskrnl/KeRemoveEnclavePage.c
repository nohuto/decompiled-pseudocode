/*
 * XREFs of KeRemoveEnclavePage @ 0x14046D340
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B655BC (MiDeleteAllHardwareEnclaves.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B657F4 (MiReleaseEnclaveMetadataPage.c)
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x14046D4CC (KiEnclsStatus.c)
 *     KiEncls @ 0x1406ABEA0 (KiEncls.c)
 */

__int64 __fastcall KeRemoveEnclavePage(__int64 a1)
{
  unsigned int v1; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v1 = KiEncls(3LL, 0LL, a1, 0LL);
  return KiEnclsStatus(v1);
}
