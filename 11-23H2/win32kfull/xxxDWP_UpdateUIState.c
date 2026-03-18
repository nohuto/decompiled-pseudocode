/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1C00AD604
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF38C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0033170 (xxxSendNotifyMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C00B1DD0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00B26E0 (FreeHwndList.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rax
  ShellWindowManagement *v9; // r10
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  _QWORD *i; // rbx
  __int64 v16; // rax
  struct tagWND *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 ThreadWin32Thread; // rax
  int v23; // edi
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h]

  v3 = a2;
  v4 = a2 >> 16;
  LOWORD(v6) = a2;
  if ( (a2 & 0xFFF80000) != 0 || (unsigned __int16)a2 > 3u || a3 )
    return 0LL;
  v7 = *gpsi;
  if ( (_WORD)a2 == 3 )
  {
    if ( (v7 & 0x80u) != 0 )
      return 0LL;
    if ( (*(_DWORD *)(gpsi + 7004LL) & 0x80000020) != 0x80000000 )
      return 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 2) != 0 )
      return 0LL;
    LOBYTE(v4) = 3;
    v6 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
    v3 = v6 | 0x30000;
LABEL_9:
    if ( (unsigned __int16)v6 == 1 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1LL, a1, 2880LL, 1LL);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(1LL, a1, 2944LL, 1LL);
      if ( (v4 & 4) == 0 )
        goto LABEL_15;
      v21 = 1LL;
    }
    else
    {
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          v23 = *gpsi & 0x40;
          SetOrClrWF(v23 == 0, a1, 2944LL, 1LL);
          SetOrClrWF(v23 == 0, a1, 2880LL, 1LL);
          v3 = (v23 != 0) + 196609LL;
        }
        goto LABEL_15;
      }
      if ( (v4 & 2) != 0 )
        SetOrClrWF(0LL, a1, 2880LL, 1LL);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(0LL, a1, 2944LL, 1LL);
      if ( (v4 & 4) == 0 )
      {
LABEL_15:
        v9 = *(ShellWindowManagement **)(a1 + 112);
        if ( v9 )
        {
          v25 = 0LL;
          v24 = 0LL;
          if ( gptiCurrent == gTermIO[2] || (v11 = 0LL, gptiCurrent == qword_1C035E750) )
            v11 = 1LL;
          v12 = BuildHwndList(v9);
          v14 = v12;
          if ( v12 )
          {
            for ( i = (_QWORD *)(v12 + 32); *i != 1LL; ++i )
            {
              LOBYTE(v13) = 1;
              v16 = HMValidateHandleNoSecure(*i, v13);
              v17 = (struct tagWND *)v16;
              if ( v16 )
              {
                ThreadLockAlways(v16, &v24);
                if ( v11 )
                  xxxSendNotifyMessage(v17, 0x128u, v3, 0LL, 1);
                else
                  xxxSendMessage(v17, 296LL, v3, 0LL);
                ThreadUnlock1(v19, v18, v20);
              }
            }
            FreeHwndList(v14);
          }
        }
        return 0LL;
      }
      v21 = 0LL;
    }
    SetOrClrWF(v21, a1, 2820LL, 1LL);
    goto LABEL_15;
  }
  if ( (v7 & 0x80u) != 0
    || (*(_DWORD *)(gpsi + 7004LL) & 0x80000020) != 0x80000000
    || (v8 = W32GetThreadWin32Thread(KeGetCurrentThread()), *(_DWORD *)(v8 + 632) <= 0x400u)
    && (*(_DWORD *)(v8 + 648) & 2) != 0 )
  {
    LOWORD(v4) = v4 & 0xFFFC;
  }
  if ( (_WORD)v4 )
    goto LABEL_9;
  return 0LL;
}
