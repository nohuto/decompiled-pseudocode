/*
 * XREFs of MiAllocateSecureImageActivePatch @ 0x1407F11D0
 * Callers:
 *     MmInsertSecureImageActivePatch @ 0x1407F67F4 (MmInsertSecureImageActivePatch.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 */

UNICODE_STRING *__fastcall MiAllocateSecureImageActivePatch(PCUNICODE_STRING SourceString)
{
  UNICODE_STRING *Pool; // rax
  UNICODE_STRING *v3; // rbx

  Pool = (UNICODE_STRING *)MiAllocatePool(0x100uLL, SourceString->Length + 64LL, 1934126413);
  v3 = Pool;
  if ( Pool )
  {
    Pool[3].Buffer = &Pool[4].Length;
    Pool[3].MaximumLength = SourceString->Length;
    RtlCopyUnicodeString(Pool + 3, SourceString);
  }
  return v3;
}
