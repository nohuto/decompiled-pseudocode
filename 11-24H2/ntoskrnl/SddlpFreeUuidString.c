/*
 * XREFs of SddlpFreeUuidString @ 0x140796CE8
 * Callers:
 *     LocalConvertAclToString @ 0x140864F2C (LocalConvertAclToString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFreeUuidString(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
