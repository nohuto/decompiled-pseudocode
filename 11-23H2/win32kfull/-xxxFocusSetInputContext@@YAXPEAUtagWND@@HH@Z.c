/*
 * XREFs of ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C0031910
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0031520 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A53AC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B4994 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     QueueNotifyMessage @ 0x1C01FB3F0 (QueueNotifyMessage.c)
 */

void __fastcall xxxFocusSetInputContext(struct tagWND *a1, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
  if ( (*(_BYTE *)(v6 + 10) & 1) == 0 && *(_WORD *)v6 != *(_WORD *)(gpsi + 898LL) )
  {
    v7 = *((_QWORD *)a1 + 2);
    v8 = *(_QWORD *)(v7 + 784);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v7 + 488) & 1) == 0 )
      {
        ThreadLockAlways(v8, &v13);
        v9 = *(_QWORD *)a1;
        if ( a3 )
          QueueNotifyMessage(v8, 647, 24 - (a2 != 0), v9, 0);
        else
          xxxSendMessage(v8, 647LL, 24LL - (a2 != 0), v9);
        ThreadUnlock1(v11, v10, v12);
      }
    }
  }
}
