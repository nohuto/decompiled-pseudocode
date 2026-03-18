/*
 * XREFs of ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026C524
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x140068228 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     xxxSetWindowPlacement @ 0x140086334 (xxxSetWindowPlacement.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x14019A6C4 (-ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x14026C4B0 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C1A28 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowActions::IsInterceptWindow(WindowActions *this, const struct tagWND *a2)
{
  return (*((_DWORD *)this + 96) & 0x10) != 0;
}
