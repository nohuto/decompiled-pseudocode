/*
 * XREFs of ?xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14007D9D8
 * Callers:
 *     xxxGetWindowText @ 0x14007D964 (xxxGetWindowText.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxDoSend(struct tagWND *a1, __int64 a2, HWND a3, struct tagDRAWITEMSTRUCT *a4)
{
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) == *((_QWORD *)PtiCurrent((__int64)a1, a2) + 58) )
    return xxxSendMessage(a1, 0xDu);
  else
    return xxxDefWindowProc(a1, 0xDu, a3, a4);
}
