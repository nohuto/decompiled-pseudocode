/*
 * XREFs of FxStubDriverUnload @ 0x140042B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x14004284C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

void FxStubDriverUnload()
{
  if ( qword_14006FCA8 && qword_14006FCA8 != FxStubDriverUnload )
    qword_14006FCA8();
  FxStubDriverUnloadCommon();
}
