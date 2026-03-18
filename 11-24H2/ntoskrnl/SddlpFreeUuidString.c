/*
 * XREFs of SddlpFreeUuidString @ 0x140796BD8
 * Callers:
 *     LocalConvertAclToString @ 0x140860920 (LocalConvertAclToString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFreeUuidString(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
