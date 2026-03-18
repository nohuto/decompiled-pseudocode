/*
 * XREFs of BCryptHashData @ 0x1408FAC64
 * Callers:
 *     sub_1408FADC4 @ 0x1408FADC4 (sub_1408FADC4.c)
 *     RtlGenerateClass5Guid @ 0x140AAC700 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptHashData(BCRYPT_HASH_HANDLE hHash, PUCHAR pbInput, ULONG cbInput, ULONG dwFlags)
{
  NTSTATUS v7; // ebx

  v7 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v7 = guard_dispatch_icall_no_overrides(hHash, pbInput, cbInput, 0LL);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v7;
}
