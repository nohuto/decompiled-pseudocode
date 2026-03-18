/*
 * XREFs of xxxEventWndProc @ 0x1402DBD80
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x14015FB8C (xxxChangeMonitorFlags.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ClientEventCallback @ 0x1402B85B8 (ClientEventCallback.c)
 */

__int64 __fastcall xxxEventWndProc(__int64 a1, __int64 a2, HWND a3, __int64 a4)
{
  unsigned int v6; // esi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int16 v12; // dx

  v6 = a2;
  if ( *(struct tagTHREADINFO **)(a1 + 16) != PtiCurrent(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 240);
  v9 = *(_QWORD *)(a1 + 40);
  if ( *(_WORD *)(v9 + 42) )
    return 0LL;
  v10 = *(__int64 **)(a1 + 280);
  if ( v10 )
  {
    if ( *(_DWORD *)(v9 + 248) >= 8u )
    {
      LOBYTE(v8) = 9;
      v11 = HMValidateHandleNoRip(*v10, v8);
      if ( v11 )
      {
        if ( v6 == 2 )
        {
          xxxChangeMonitorFlags(v11, 0LL);
          return 0LL;
        }
        if ( v6 == 60 )
        {
          v12 = *(_WORD *)(a4 + 4);
          if ( (*(_DWORD *)(v11 + 40) & *(_DWORD *)a4) != 0 )
          {
            if ( !v12 )
              return 0LL;
          }
          else if ( v12 )
          {
            return 0LL;
          }
          ClientEventCallback(*(_QWORD *)(v11 + 56), a4);
          return 0LL;
        }
      }
    }
  }
  return xxxDefWindowProc((struct tagTHREADINFO **)a1, v6, a3, (struct tagDRAWITEMSTRUCT *)a4);
}
