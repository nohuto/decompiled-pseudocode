/*
 * XREFs of SepReleaseUnicodeStringArray @ 0x1408894A0
 * Callers:
 *     SepCaptureUnicodeStringArray @ 0x1408890B0 (SepCaptureUnicodeStringArray.c)
 *     NtQuerySecurityPolicy @ 0x140889550 (NtQuerySecurityPolicy.c)
 *     NtSetCachedSigningLevel2 @ 0x140889860 (NtSetCachedSigningLevel2.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseUnicodeStringArray(void *a1, char a2)
{
  if ( a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
