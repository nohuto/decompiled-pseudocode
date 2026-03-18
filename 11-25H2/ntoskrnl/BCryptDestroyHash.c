/*
 * XREFs of BCryptDestroyHash @ 0x140907208
 * Callers:
 *     sub_1409072F0 @ 0x1409072F0 (sub_1409072F0.c)
 *     RtlGenerateClass5Guid @ 0x140AA72C0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptDestroyHash(BCRYPT_HASH_HANDLE hHash)
{
  NTSTATUS v2; // ebx

  v2 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v2 = guard_dispatch_icall_no_overrides(hHash);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v2;
}
