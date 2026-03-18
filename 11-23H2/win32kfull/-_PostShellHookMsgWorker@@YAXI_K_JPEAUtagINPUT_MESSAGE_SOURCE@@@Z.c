/*
 * XREFs of ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B2C58
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C0036950 (EditionHandleAndPostKeyEvent.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01F4804 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011EE90 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

void __fastcall _PostShellHookMsgWorker(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v4; // edi
  struct tagWND *v9; // rbx
  __int64 v10; // r14
  unsigned int *v11; // r9
  unsigned int v12; // eax
  unsigned __int64 v13; // r8

  v4 = 0;
  v9 = 0LL;
  v10 = *(_QWORD *)(gptiCurrent + 464LL);
  while ( 1 )
  {
    v11 = *(unsigned int **)(v10 + 240);
    if ( !v11 || v11[3] || v4 >= *v11 )
      break;
    v12 = v4 + 1;
    if ( *(struct tagWND **)&v11[4 * v4 + 6] != v9 )
      v12 = v4;
    v4 = v12;
    if ( v12 >= *v11 )
      break;
    v9 = *(struct tagWND **)&v11[4 * v12 + 6];
    if ( !v9 )
      break;
    if ( a1 == *(_DWORD *)(gpsi + 928LL) && v9 == *(struct tagWND **)(v10 + 200) )
    {
      if ( a2 == 1 )
      {
        v13 = (unsigned int)guiOtherWindowCreated;
LABEL_15:
        PostMessage(v9, a1, v13, a3);
      }
      else if ( a2 == 2 )
      {
        v13 = (unsigned int)guiOtherWindowDestroyed;
        goto LABEL_15;
      }
    }
    else
    {
      _PostTransformableMessageExtended(v9, a1, a2, a3, a4, 1);
    }
  }
}
