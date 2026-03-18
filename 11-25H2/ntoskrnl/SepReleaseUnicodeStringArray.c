/*
 * XREFs of SepReleaseUnicodeStringArray @ 0x140867664
 * Callers:
 *     NtSetCachedSigningLevel2 @ 0x140865810 (NtSetCachedSigningLevel2.c)
 *     NtQuerySecurityPolicy @ 0x140867390 (NtQuerySecurityPolicy.c)
 *     SepCaptureUnicodeStringArray @ 0x140867B30 (SepCaptureUnicodeStringArray.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseUnicodeStringArray(void *a1, char a2)
{
  if ( a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
