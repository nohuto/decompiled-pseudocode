/*
 * XREFs of IopBoostThreadCallback @ 0x140463B90
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopBoostThreadCallback(__int64 a1, PVOID *a2)
{
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), *a2, a2[1], *((unsigned int *)a2 + 4));
  ObDereferenceObjectDeferDeleteWithTag(*a2, 0x746C6644u);
  ObDereferenceObjectDeferDeleteWithTag(a2[1], 0x746C6644u);
}
