/*
 * XREFs of ?ReportPenKey@@YAXIE@Z @ 0x14021943C
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1402B65F8 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 */

void __fastcall ReportPenKey(unsigned int a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int CurrentWin32kSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( (a1 & 8) != 0 )
  {
    v2 = a2;
    if ( (unsigned __int8)(a2 + 127) <= 2u )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, &CurrentWin32kSessionId, 0, 0);
      TraceLoggingPenHotkey(a1, v2);
    }
  }
}
