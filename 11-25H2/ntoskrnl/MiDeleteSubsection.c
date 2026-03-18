/*
 * XREFs of MiDeleteSubsection @ 0x14043A5CC
 * Callers:
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSubsection(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
