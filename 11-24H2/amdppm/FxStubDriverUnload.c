/*
 * XREFs of FxStubDriverUnload @ 0x140005380
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140005188 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_140015548 && qword_140015548 != FxStubDriverUnload )
    qword_140015548();
  FxStubDriverUnloadCommon(a1);
}
