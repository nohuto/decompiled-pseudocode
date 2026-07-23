/*
 * XREFs of SepReleaseUnicodeStringArray @ 0x14088D350
 * Callers:
 *     SepCaptureUnicodeStringArray @ 0x14088CF60 (SepCaptureUnicodeStringArray.c)
 *     NtQuerySecurityPolicy @ 0x14088D400 (NtQuerySecurityPolicy.c)
 *     NtSetCachedSigningLevel2 @ 0x14088D710 (NtSetCachedSigningLevel2.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseUnicodeStringArray(void *a1, char a2)
{
  if ( a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
