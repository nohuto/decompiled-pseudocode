/*
 * XREFs of KeRemoveEnclavePage @ 0x1403FC880
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B5339C (MiDeleteAllHardwareEnclaves.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B535D4 (MiReleaseEnclaveMetadataPage.c)
 *     MiDeleteEnclavePages @ 0x140B5F0CC (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403FCA0C (KiEnclsStatus.c)
 *     KiEncls @ 0x14069FC30 (KiEncls.c)
 */

__int64 __fastcall KeRemoveEnclavePage(__int64 a1)
{
  unsigned int v1; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v1 = KiEncls(3LL, 0LL, a1, 0LL);
  return KiEnclsStatus(v1);
}
