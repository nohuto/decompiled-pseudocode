/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x140046CE4
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x140108650 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x140046F28 (HMValidateSharedHandleNoRip.c)
 *     BuildHwndList @ 0x14004701C (BuildHwndList.c)
 *     FreeHwndList @ 0x140047064 (FreeHwndList.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  _QWORD *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 UserSessionState; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rbx
  int (*v19)(void); // rax
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, __int64); // rax
  __int64 v22; // [rsp+60h] [rbp+18h]

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3992LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v5 = BuildHwndList(a2);
      v7 = v5;
      if ( v5 )
      {
        v8 = (_QWORD *)(v5 + 32);
        v9 = *(_QWORD *)(v5 + 32);
        if ( v9 != 1 )
        {
          v22 = v5;
          do
          {
            W32GetCurrentThreadNonPaged(v6);
            v6 = *(_QWORD *)(W32GetUserSessionState(v10) + 19928);
            if ( (unsigned __int64)(unsigned __int16)v9 < *(_QWORD *)(v6 + 8) )
            {
              UserSessionState = W32GetUserSessionState(v6);
              v13 = *(_DWORD *)(W32GetUserSessionState(v12) + 19952) * (unsigned int)(unsigned __int16)v9;
              v14 = v13 + *(_QWORD *)(UserSessionState + 19944);
              v15 = W32GetUserSessionState(v13);
              LOWORD(v9) = WORD1(v9) & 0x7FFF;
              v16 = *(_QWORD *)(v15 + 19888);
              v6 = (unsigned int)((v14 - *(_QWORD *)(v15 + 19944)) >> 5);
              v17 = 5 * v6;
              if ( ((WORD1(v9) & 0x7FFF) == *(_WORD *)(v14 + 26)
                 || (_WORD)v9 == 0x7FFF
                 || !(_WORD)v9 && PsGetCurrentProcessWow64Process())
                && (*(_BYTE *)(v14 + 25) & 1) == 0
                && *(_BYTE *)(v14 + 24) == 1 )
              {
                v18 = *(_QWORD *)(v16 + 8 * v17);
                if ( v18 )
                {
                  v6 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
                  v19 = *(int (**)(void))(v6 + 4008);
                  if ( v19 )
                  {
                    if ( v19() >= 0 && *(struct tagPROCESSINFO **)(*(_QWORD *)(v18 + 16) + 464LL) == a1 )
                    {
                      *(_DWORD *)(*(_QWORD *)(v18 + 40) + 288LL) = *((_DWORD *)a1 + 67);
                      v20 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 256LL));
                      v21 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48)
                                                                    + 4016LL);
                      if ( v21 )
                        v21(v18, v20);
                    }
                  }
                }
              }
            }
            v9 = *++v8;
          }
          while ( *v8 != 1LL );
          v7 = v22;
        }
        FreeHwndList(v7);
      }
    }
  }
}
