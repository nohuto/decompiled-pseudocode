/*
 * XREFs of MiDeleteSubsection @ 0x14036F8BC
 * Callers:
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSubsection(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
