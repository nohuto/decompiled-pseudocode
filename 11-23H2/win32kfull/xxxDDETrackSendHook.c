/*
 * XREFs of xxxDDETrackSendHook @ 0x1C01FAD14
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F8F78 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F90CC (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C01F91E0 (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 *     xxxMessageEvent @ 0x1C022ADA8 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackSendHook(struct tagWND *a1, int a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  struct tagWND *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagWND *v12; // rdi
  struct tagDDECONV *DdeConv; // rax
  struct tagDDECONV *v14; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h]
  __int128 v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-10h]
  struct tagDDECONV *v19; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  v14 = 0LL;
  if ( (MonitorFlags & 0x2000000) != 0 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v15[0] = (unsigned __int16)a4;
    v15[1] = HIWORD(a4);
    xxxMessageEvent((_DWORD)a1, a2, a3, a4, 0x2000000, (__int64)v15);
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    return 1LL;
  if ( a2 != 996 )
    return a2 == 992;
  v9 = (struct tagWND *)ValidateHwnd(a3);
  v12 = v9;
  if ( !v9 )
    return 0LL;
  DdeConv = FindDdeConv(v9, a1, v10, v11);
  v19 = DdeConv;
  if ( DdeConv )
  {
    AnticipatePost(
      DdeConv,
      (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxDupConvTerminate,
      0LL,
      0LL,
      0LL,
      0);
    PostMessage(v12, 0x3E1u, *(_QWORD *)a1, 0LL);
    return 0LL;
  }
  LOBYTE(v4) = (unsigned int)NewConversation(&v14, &v19, a1, v12) != 0;
  return v4;
}
