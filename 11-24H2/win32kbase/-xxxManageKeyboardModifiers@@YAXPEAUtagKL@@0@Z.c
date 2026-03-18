/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x140149C2C
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3F20 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x140149D7C (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall xxxManageKeyboardModifiers(struct tagKL *a1, struct tagKL *a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagTHREADINFO *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 v13[16]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v14; // [rsp+60h] [rbp-38h]

  v4 = PtiCurrent((__int64)a1);
  v6 = 0LL;
  v7 = v4;
  if ( *((_QWORD *)v4 + 59) )
  {
    if ( a1 )
    {
      *(_OWORD *)v13 = 0LL;
      v14 = 0LL;
      xxxAdjustPushStateForKL(v4, v13, a1, a1, a2);
      xxxAdjustPushStateForKL(v7, v13, a2, a1, a2);
      v8 = *((_QWORD *)a1 + 6);
      if ( v8 )
      {
        v9 = *(unsigned int *)(*(_QWORD *)(v8 + 32) + 80LL);
        if ( (v9 & 1) != 0 && (*(_BYTE *)(W32GetUserSessionState(v9) + 14404) & 4) == 0 )
          xxxKeyEventEx(32930, 541, 0, 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
      }
    }
    else
    {
      do
      {
        *(_BYTE *)(*((_QWORD *)v7 + 59) + v6 + 280) &= 0xAAu;
        UserSessionState = W32GetUserSessionState(v5);
        *(_BYTE *)(UserSessionState + v6 + 14336) &= 0xAAu;
        v12 = W32GetUserSessionState(v11);
        *(_BYTE *)(v12 + v6++ + 14400) &= 0xAAu;
      }
      while ( v6 < 64 );
    }
  }
}
