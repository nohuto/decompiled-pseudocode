/*
 * XREFs of MiDeleteSubsection @ 0x14043F528
 * Callers:
 *     MiDeleteControlArea @ 0x14043F354 (MiDeleteControlArea.c)
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSubsection(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
