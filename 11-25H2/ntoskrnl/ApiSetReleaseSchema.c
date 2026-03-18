/*
 * XREFs of ApiSetReleaseSchema @ 0x140653A84
 * Callers:
 *     PspSiloLoadApiSets @ 0x140763C18 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x1407BA050 (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x1407BA22C (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
