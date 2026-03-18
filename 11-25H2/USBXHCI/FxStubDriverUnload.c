/*
 * XREFs of FxStubDriverUnload @ 0x140056890
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140056690 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_14006BC28 && qword_14006BC28 != FxStubDriverUnload )
    qword_14006BC28();
  FxStubDriverUnloadCommon(a1);
}
