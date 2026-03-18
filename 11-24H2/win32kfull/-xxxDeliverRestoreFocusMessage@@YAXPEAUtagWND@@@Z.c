/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14009A8C4
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140094C20 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall xxxDeliverRestoreFocusMessage(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v2; // rbx
  struct tagQ **v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a1;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) < 0 )
    v2 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1592LL);
  if ( v2 )
  {
    v3 = (struct tagQ **)*((_QWORD *)v2 + 2);
    if ( v3[59] == *(struct tagQ **)(W32GetUserSessionState(a1, a2) + 18944) )
    {
      if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(v2, v4) )
      {
        if ( v3 == (struct tagQ **)PtiCurrent(v6, v5) )
          xxxSendMessage(v2, 0x2FBu);
        else
          PostEventMessageEx((struct tagTHREADINFO *)v3, v3[59], 0x1Du, v2, 0, 0LL, 0LL, 0LL);
      }
    }
  }
}
