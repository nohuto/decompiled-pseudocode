/*
 * XREFs of KeRemoveEnclavePage @ 0x1403D1AF0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B634EC (MiDeleteAllHardwareEnclaves.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B63724 (MiReleaseEnclaveMetadataPage.c)
 *     MiDeleteEnclavePages @ 0x140B6E178 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403D1C7C (KiEnclsStatus.c)
 *     KiEncls @ 0x1406AAF00 (KiEncls.c)
 */

__int64 __fastcall KeRemoveEnclavePage(__int64 a1)
{
  unsigned int v1; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  v1 = KiEncls(3LL, 0LL, a1, 0LL);
  return KiEnclsStatus(v1);
}
