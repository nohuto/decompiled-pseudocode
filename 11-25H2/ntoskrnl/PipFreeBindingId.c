/*
 * XREFs of PipFreeBindingId @ 0x140A99E1C
 * Callers:
 *     PipDeleteDependencyNode @ 0x1406E9BF8 (PipDeleteDependencyNode.c)
 *     PipDeleteBindingId @ 0x14071267C (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x140A99DD8 (PipDeleteBindingIds.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
