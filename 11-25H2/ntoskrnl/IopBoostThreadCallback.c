/*
 * XREFs of IopBoostThreadCallback @ 0x140464570
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopBoostThreadCallback(__int64 a1, PVOID *a2)
{
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), *a2);
  ObDereferenceObjectDeferDeleteWithTag(*a2, 0x746C6644u);
  ObDereferenceObjectDeferDeleteWithTag(a2[1], 0x746C6644u);
}
