/*
 * XREFs of IopBoostThreadCallback @ 0x14045A2D0
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopBoostThreadCallback(__int64 a1, PVOID *a2)
{
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), *a2);
  ObDereferenceObjectDeferDeleteWithTag(*a2, 0x746C6644u);
  ObDereferenceObjectDeferDeleteWithTag(a2[1], 0x746C6644u);
}
