/*
 * XREFs of ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140066E58
 * Callers:
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x14021E1C0 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     _PostMessageExtended @ 0x14006649C (_PostMessageExtended.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x140066F4C (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 */

void __fastcall _PostShellHookMsgWorker(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v7; // edi
  struct tagTHREADINFO *v8; // rax
  unsigned __int64 v9; // rdx
  struct tagWND *v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagWND *v15; // rbx
  int v16; // r8d
  int v17; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-30h]
  unsigned int v19[10]; // [rsp+30h] [rbp-28h] BYREF

  v7 = a1;
  v8 = PtiCurrent(a1, a2);
  v19[0] = 0;
  v10 = 0LL;
  v11 = *((_QWORD *)v8 + 63);
  while ( 1 )
  {
    v15 = VWPLNextBase(*(struct tagVWPL **)(v11 + 224), v9, v10, v19, v17, v18);
    if ( !v15 )
      break;
    v12 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928);
    if ( v7 != *(_DWORD *)(v12 + 928) || v15 != *(struct tagWND **)(v11 + 192) )
    {
      PostMessageExtended(v15, v7, a2, a3, a4);
      goto LABEL_5;
    }
    if ( a2 == 1 )
    {
      v16 = *(_DWORD *)(W32GetUserSessionState(v12, v9) + 63448);
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_5;
      v16 = *(_DWORD *)(W32GetUserSessionState(v12, v9) + 63452);
    }
    PostMessage((int)v15, v7, v16, a3);
LABEL_5:
    v10 = v15;
  }
}
