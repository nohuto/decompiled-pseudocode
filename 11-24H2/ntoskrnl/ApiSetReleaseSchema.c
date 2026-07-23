/*
 * XREFs of ApiSetReleaseSchema @ 0x14065E1E4
 * Callers:
 *     PspSiloLoadApiSets @ 0x140773808 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x1407C9D10 (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x1407C9EBC (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
