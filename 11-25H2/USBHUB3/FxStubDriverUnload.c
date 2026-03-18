/*
 * XREFs of FxStubDriverUnload @ 0x1400422D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x14004200C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

void FxStubDriverUnload()
{
  if ( qword_14006FCB8 && qword_14006FCB8 != FxStubDriverUnload )
    qword_14006FCB8();
  FxStubDriverUnloadCommon();
}
