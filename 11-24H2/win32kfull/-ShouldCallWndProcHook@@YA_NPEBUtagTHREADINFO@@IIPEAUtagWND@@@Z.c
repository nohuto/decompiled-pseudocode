/*
 * XREFs of ?ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z @ 0x14011B890
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?SERVER_SIDE_WINDOW_MESSAGE_HAS_KM_POINTER@@YA_NIPEAUtagWND@@@Z @ 0x1402B16CC (-SERVER_SIDE_WINDOW_MESSAGE_HAS_KM_POINTER@@YA_NIPEAUtagWND@@@Z.c)
 */

bool __fastcall ShouldCallWndProcHook(const struct tagTHREADINFO *a1, int a2, unsigned int a3, struct tagWND *a4)
{
  __int64 v5; // rdi

  v5 = a3;
  if ( ((*((_DWORD *)a1 + 180) | *(_DWORD *)(**((_QWORD **)a1 + 63) + 16LL)) & a2) == 0
    || SERVER_SIDE_WINDOW_MESSAGE_HAS_KM_POINTER(a3, a4)
    || (unsigned int)v5 < 0x400 && _bittest16(&MessageTable[v5], 0xEu) )
  {
    return 0;
  }
  if ( a4 )
    return (*((_DWORD *)a4 + 96) & 0x40) == 0;
  return 1;
}
