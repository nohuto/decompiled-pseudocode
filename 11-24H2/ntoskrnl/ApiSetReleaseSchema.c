/*
 * XREFs of ApiSetReleaseSchema @ 0x14065FA14
 * Callers:
 *     PspSiloLoadApiSets @ 0x1407735E8 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x1407C9820 (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x1407C99CC (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
