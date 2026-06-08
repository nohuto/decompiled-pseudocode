/*
 * XREFs of FxStubDriverUnload @ 0x1400046E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1400044DC (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_140014518 && qword_140014518 != FxStubDriverUnload )
    qword_140014518();
  FxStubDriverUnloadCommon(a1);
}
