/*
 * XREFs of NtUserSetCursor @ 0x1400757B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall NtUserSetCursor(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rcx
  char v18; // al
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagCURSOR *v23; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v26; // r8
  __int16 v27; // ax
  _QWORD *v28; // rax
  __int64 v29; // rax

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    W32GetCurrentThreadNonPaged(v3, v2);
    v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928);
    if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v9 + 8) )
      goto LABEL_22;
    UserSessionState = W32GetUserSessionState(v9, v8);
    v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19952) * (unsigned int)(unsigned __int16)a1
        + *(_QWORD *)(UserSessionState + 19944);
    v16 = HMPkheFromPhe(v13);
    v17 = a1 >> 16;
    LOWORD(v17) = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v13 + 26)
      && (_WORD)v17 != 0x7FFF
      && ((_WORD)v17 || !PsGetCurrentProcessWow64Process(v17, v14, v15)) )
    {
      goto LABEL_22;
    }
    v18 = *(_BYTE *)(v13 + 25);
    if ( (v18 & 1) == 0 && *(_BYTE *)(v13 + 24) == 3 )
    {
      v5 = *(_QWORD *)v16;
      if ( (v18 & 4) != 0 )
      {
        LOBYTE(v14) = 3;
        v17 = -(__int64)((unsigned int)HMSDCheck(a1, v14, 0LL) != 0);
        v5 &= v17;
      }
    }
    if ( (*(_BYTE *)(v13 + 25) & 4) == 0 )
    {
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v17, v14);
      if ( CurrentThreadNonPaged )
        v20 = *CurrentThreadNonPaged;
      else
        v20 = 0LL;
      v21 = 3LL;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 528), 0, 0) & 0x20000000) == 0 )
        v21 = 2LL;
      v22 = -(__int64)((unsigned int)ValidateHandleSecure(a1, v21) != 0);
      v5 &= v22;
      if ( *(char *)(v13 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v22);
        v26 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v27 = gahti[12 * *(unsigned __int8 *)(v13 + 24) + 6];
            if ( (v27 & 2) != 0 )
            {
              v28 = *(_QWORD **)(v16 + 8);
LABEL_30:
              if ( v28 && v28 != v26 )
                goto LABEL_22;
              goto LABEL_14;
            }
            if ( (v27 & 1) != 0 )
            {
              v29 = *(_QWORD *)(v16 + 8);
              if ( v29 )
              {
                v28 = *(_QWORD **)(v29 + 464);
                goto LABEL_30;
              }
            }
          }
        }
      }
    }
LABEL_14:
    if ( v5 )
      goto LABEL_15;
LABEL_22:
    UserSetLastError(1402);
    goto LABEL_17;
  }
LABEL_15:
  v23 = zzzSetCursor((struct tagCURSOR *)v5);
  if ( v23 )
    v4 = *(_QWORD *)v23;
LABEL_17:
  UserSessionSwitchLeaveCrit();
  return v4;
}
