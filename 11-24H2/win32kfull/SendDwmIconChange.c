/*
 * XREFs of SendDwmIconChange @ 0x140091358
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140090378 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018A400 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401DCE70 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x14021F460 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14007C108 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     DwmAsyncIconChange @ 0x1400913F8 (DwmAsyncIconChange.c)
 *     _HasCaptionIcon @ 0x1400B43E8 (_HasCaptionIcon.c)
 */

__int64 __fastcall SendDwmIconChange(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6);
  if ( (unsigned int)HasCaptionIcon(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && GetWindowSmIcon(a1) )
    GetWindowSmIcon(a1);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v6);
  v4 = (void *)ReferenceDwmApiPort(v3, v2);
  return DwmAsyncIconChange(v4);
}
