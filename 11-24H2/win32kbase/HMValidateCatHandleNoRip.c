/*
 * XREFs of HMValidateCatHandleNoRip @ 0x140198C38
 * Callers:
 *     UserGetWindowThreadProcessId @ 0x140198B90 (UserGetWindowThreadProcessId.c)
 * Callees:
 *     ValidateHandleSecure @ 0x140099530 (ValidateHandleSecure.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateCatHandleNoRip(void *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 UserSessionState; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int16 v13; // ax
  struct tagTHREADINFO *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v18; // rdx
  __int16 v19; // ax
  _QWORD *v20; // rax
  __int64 v21; // rax

  v2 = 0LL;
  PtiCurrent((__int64)a1);
  v4 = *(_QWORD *)(W32GetUserSessionState(v3) + 19928);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v4 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v4);
    v7 = *(_DWORD *)(W32GetUserSessionState(v6) + 19952) * (unsigned int)(unsigned __int16)a1;
    v8 = v7 + *(_QWORD *)(UserSessionState + 19944);
    v9 = W32GetUserSessionState(v7);
    v10 = *(_QWORD *)(v9 + 19888);
    v11 = 0x7FFFLL;
    v12 = 5LL * (unsigned int)((v8 - *(_QWORD *)(v9 + 19944)) >> 5);
    v13 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *(_WORD *)(v8 + 26) || v13 == 0x7FFF || !v13 && PsGetCurrentProcessWow64Process() )
    {
      if ( *(_BYTE *)(v8 + 24) == 23 )
        v2 = *(_QWORD *)(v10 + 8 * v12);
      v14 = PtiCurrent(v11);
      v15 = 3;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v14 + 132, 0, 0) & 0x20000000) == 0 )
        v15 = 2;
      v16 = -(__int64)((unsigned int)ValidateHandleSecure(a1, v15) != 0);
      v2 &= v16;
      if ( *(char *)(v8 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v16);
        v18 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v19 = *((_WORD *)&unk_1402437BC + 12 * *(unsigned __int8 *)(v8 + 24));
            if ( (v19 & 2) != 0 )
            {
              v20 = *(_QWORD **)(v10 + 8 * v12 + 8);
            }
            else
            {
              if ( (v19 & 1) == 0 )
                return v2;
              v21 = *(_QWORD *)(v10 + 8 * v12 + 8);
              if ( !v21 )
                return v2;
              v20 = *(_QWORD **)(v21 + 464);
            }
            if ( v20 && v20 != v18 )
              return 0LL;
          }
        }
      }
    }
  }
  return v2;
}
