/*
 * XREFs of _PostTransformableMessage @ 0x1C003539C
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0005B40 (xxxSystemTimerProc.c)
 *     _PostTransformableMessageIL @ 0x1C00351FC (_PostTransformableMessageIL.c)
 *     ?DoPowerStateAndMonitor@@YAXXZ @ 0x1C0077BF0 (-DoPowerStateAndMonitor@@YAXXZ.c)
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B4CF0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01B6170 (PostMousePointerLeaveAndCleanup.c)
 *     xxxMNStartMenuState @ 0x1C01FF7EC (xxxMNStartMenuState.c)
 *     xxxMNCancel @ 0x1C0216554 (xxxMNCancel.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011EE90 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  struct tagQMSG *v6; // rcx

  v5 = 0;
  v6 = _PostTransformableMessageExtended(a1, a2, a3, a4, 0LL, a5);
  if ( v6 < MmSystemRangeStart )
    return (unsigned int)v6;
  LOBYTE(v5) = v6 != 0LL;
  return v5;
}
