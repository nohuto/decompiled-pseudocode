/*
 * XREFs of ?RemoteSyncToggleKeys@@YAXK@Z @ 0x14015B30C
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     GetActiveHKL @ 0x1400489F0 (GetActiveHKL.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall RemoteSyncToggleKeys(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  unsigned int v7; // ecx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int16 ActiveHKL; // ax
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  unsigned int v21; // ecx
  _QWORD v22[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v23; // [rsp+40h] [rbp-20h]

  v22[0] = 0LL;
  v23 = 0LL;
  *(_DWORD *)(W32GetUserSessionState(a1) + 12924) = a1 | 0x8000;
  v22[1] = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v1) + 18944) )
  {
    v3 = *(_DWORD *)(W32GetUserSessionState(v2) + 12924) & 0x4000;
    v5 = *(_DWORD *)(W32GetUserSessionState(v4) + 12924);
    LOBYTE(v7) = ~*(_BYTE *)(W32GetUserSessionState(v6) + 14405);
    v8 = (v7 >> 1) & 1;
    if ( ((v5 & 4) == 0) != (_DWORD)v8 )
    {
      LOBYTE(v22[0]) = 58;
      WORD1(v22[0]) = 20;
      xxxProcessKeyEvent((unsigned __int16 *)v22, 0LL, v3 != 0, 0, 0LL, 0LL);
      WORD1(v22[0]) = -32748;
      LOBYTE(v22[0]) = 58;
      xxxProcessKeyEvent((unsigned __int16 *)v22, 0LL, v3 != 0, 0, 0LL, 0LL);
    }
    v9 = *(_DWORD *)(W32GetUserSessionState(v8) + 12924);
    LOBYTE(v11) = ~*(_BYTE *)(W32GetUserSessionState(v10) + 14436);
    v12 = (v11 >> 1) & 1;
    if ( ((v9 & 2) == 0) != (_DWORD)v12 )
    {
      LOBYTE(v22[0]) = 69;
      WORD1(v22[0]) = 144;
      xxxProcessKeyEvent((unsigned __int16 *)v22, 0LL, v3 != 0, 0, 0LL, 0LL);
      WORD1(v22[0]) = -32624;
      LOBYTE(v22[0]) = 69;
      xxxProcessKeyEvent((unsigned __int16 *)v22, 0LL, v3 != 0, 0, 0LL, 0LL);
    }
    v13 = *(_DWORD *)(W32GetUserSessionState(v12) + 12924) & 1;
    LOBYTE(v15) = ~*(_BYTE *)(W32GetUserSessionState(v14) + 14436);
    v16 = (v15 >> 3) & 1;
    if ( (v13 ^ 1) != (_DWORD)v16 )
    {
      LOBYTE(v22[0]) = 70;
      WORD1(v22[0]) = 145;
      xxxProcessKeyEvent((unsigned __int16 *)v22, 0LL, v3 != 0, 0, 0LL, 0LL);
      WORD1(v22[0]) = -32623;
      LOBYTE(v22[0]) = 70;
      xxxProcessKeyEvent((unsigned __int16 *)v22, 0LL, v3 != 0, 0, 0LL, 0LL);
    }
    ActiveHKL = GetActiveHKL(v16);
    v18 = 1023LL;
    if ( (ActiveHKL & 0x3FF) == 0x11 )
    {
      v19 = *(_DWORD *)(W32GetUserSessionState(1023LL) + 12924);
      LOBYTE(v21) = ~*(_BYTE *)(W32GetUserSessionState(v20) + 14405);
      v18 = (v21 >> 3) & 1;
      if ( ((v19 & 8) == 0) != (_DWORD)v18 )
      {
        LOBYTE(v22[0]) = 112;
        WORD1(v22[0]) = 21;
        xxxProcessKeyEvent((unsigned __int16 *)v22, 0LL, v3 != 0, 0, 0LL, 0LL);
        WORD1(v22[0]) = -32747;
        LOBYTE(v22[0]) = 112;
        xxxProcessKeyEvent((unsigned __int16 *)v22, 0LL, v3 != 0, 0, 0LL, 0LL);
      }
    }
    *(_DWORD *)(W32GetUserSessionState(v18) + 12924) = 0;
  }
}
