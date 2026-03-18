/*
 * XREFs of FxStubDriverUnload @ 0x140055CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140055AF0 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_14006BC18 && qword_14006BC18 != FxStubDriverUnload )
    qword_14006BC18();
  FxStubDriverUnloadCommon(a1);
}
