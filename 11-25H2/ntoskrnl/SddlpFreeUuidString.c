/*
 * XREFs of SddlpFreeUuidString @ 0x140787808
 * Callers:
 *     LocalConvertAclToString @ 0x1409E6840 (LocalConvertAclToString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFreeUuidString(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
