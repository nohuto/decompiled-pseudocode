/*
 * XREFs of PipFreeBindingId @ 0x140A9A2DC
 * Callers:
 *     PipDeleteDependencyNode @ 0x1406F35EC (PipDeleteDependencyNode.c)
 *     PipDeleteBindingId @ 0x14071C30C (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x140A9A298 (PipDeleteBindingIds.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
