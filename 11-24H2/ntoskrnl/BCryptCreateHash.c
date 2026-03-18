/*
 * XREFs of BCryptCreateHash @ 0x1408FAD30
 * Callers:
 *     sub_1408FADC4 @ 0x1408FADC4 (sub_1408FADC4.c)
 *     RtlGenerateClass5Guid @ 0x140AAC700 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptCreateHash(
        BCRYPT_ALG_HANDLE hAlgorithm,
        BCRYPT_HASH_HANDLE *phHash,
        PUCHAR pbHashObject,
        ULONG cbHashObject,
        PUCHAR pbSecret,
        ULONG cbSecret,
        ULONG dwFlags)
{
  NTSTATUS v11; // ebx

  v11 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v11 = guard_dispatch_icall_no_overrides(hAlgorithm, phHash, pbHashObject, cbHashObject);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v11;
}
