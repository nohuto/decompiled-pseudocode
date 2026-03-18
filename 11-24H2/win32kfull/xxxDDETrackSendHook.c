/*
 * XREFs of xxxDDETrackSendHook @ 0x14024EC24
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1401D3948 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402AF9BC (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1402AFC00 (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 *     xxxMessageEvent @ 0x1402DBE70 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackSendHook(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  int v7; // edi
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagWND *v13; // rax
  struct tagWND *v14; // rdi
  struct tagDDECONV *DdeConv; // rax
  struct tagDDECONV *v16; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v18; // [rsp+48h] [rbp-40h]
  __int128 v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+68h] [rbp-20h]
  struct tagDDECONV *v21; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0;
  v16 = 0LL;
  v7 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v11 = 0x2000000LL;
  if ( (*(_DWORD *)(UserSessionState + 66944) & 0x2000000) != 0 )
  {
    v20 = 0LL;
    v17[0] = (unsigned __int16)a4;
    v17[1] = HIWORD(a4);
    v18 = 0LL;
    v19 = 0LL;
    xxxMessageEvent((_DWORD)a1, v7, a3, a4, 0x2000000, (__int64)v17);
  }
  if ( *((_QWORD *)PtiCurrent(v11, v10) + 58) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) )
    return 1LL;
  if ( v7 != 996 )
    return v7 == 992;
  v13 = (struct tagWND *)ValidateHwnd(a3);
  v14 = v13;
  if ( !v13 )
    return 0LL;
  DdeConv = FindDdeConv(v13, a1);
  v21 = DdeConv;
  if ( DdeConv )
  {
    AnticipatePost(DdeConv, xxxDupConvTerminate, 0LL, 0LL, 0LL, 0);
    PostMessage((int)v14, 993, *(_QWORD *)a1, 0);
    return 0LL;
  }
  LOBYTE(v4) = NewConversation(&v16, &v21, a1, v14) != 0;
  return v4;
}
