/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00A65C0
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A53AC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B4994 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     BuildHwndList @ 0x1C00B1DD0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00B26E0 (FreeHwndList.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     QueueNotifyMessage @ 0x1C01FB3F0 (QueueNotifyMessage.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  char v18; // [rsp+80h] [rbp+8h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18);
  v2 = BuildHwndList(*(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL));
  v3 = v2;
  if ( v2 )
  {
    v4 = (_QWORD *)(v2 + 32);
    v5 = *(_QWORD *)(v2 + 32);
    if ( v5 != 1 )
    {
      do
      {
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v5 < *(_QWORD *)(gpsi + 8LL) )
        {
          v6 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v5;
          v10 = (__int64 *)HMPkheFromPhe(v6);
          LOWORD(v5) = WORD1(v5) & 0x7FFF;
          if ( ((WORD1(v5) & 0x7FFF) == *(_WORD *)(v6 + 26)
             || (_WORD)v5 == 0x7FFF
             || !(_WORD)v5 && PsGetCurrentProcessWow64Process(v8, v7, v9))
            && (*(_BYTE *)(v6 + 25) & 1) == 0
            && *(_BYTE *)(v6 + 24) == 1 )
          {
            v11 = *v10;
            if ( *v10 )
            {
              if ( *(_QWORD *)(v11 + 16) == *(_QWORD *)a1 )
              {
                v12 = *v10;
                if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
                {
                  QueueNotifyMessage(v12, 28, *((_DWORD *)a1 + 3) & 1, *((_DWORD *)a1 + 2), 0);
                }
                else
                {
                  v16 = 0LL;
                  v17 = 0LL;
                  ThreadLock(v12, &v16);
                  xxxSendMessage(v11, 28LL, *((_DWORD *)a1 + 3) & 1, *((unsigned int *)a1 + 2));
                  ThreadUnlock1(v14, v13, v15);
                }
              }
            }
          }
        }
        v5 = *++v4;
      }
      while ( *v4 != 1LL );
    }
    FreeHwndList(v3);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18);
}
