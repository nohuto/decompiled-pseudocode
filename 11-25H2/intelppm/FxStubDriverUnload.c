/*
 * XREFs of FxStubDriverUnload @ 0x140008480
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x14000827C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_140018F48 && qword_140018F48 != FxStubDriverUnload )
    qword_140018F48();
  FxStubDriverUnloadCommon(a1);
}
