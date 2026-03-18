/*
 * XREFs of ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x14010E948
 * Callers:
 *     xxxKELocaleProcs @ 0x14010E8AC (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 */

void __fastcall xxxAltGr(struct tagKE *a1)
{
  __int64 v2; // rcx
  char v3; // si
  char v4; // bp
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *((unsigned __int16 *)a1 + 1);
  if ( (_BYTE)v2 == 0xA5 )
  {
    if ( (unsigned __int16)(*((_WORD *)a1 + 8) + 3) <= 1u )
    {
      v3 = 1;
      v4 = 1;
    }
    else
    {
      v3 = 0;
      v4 = 0;
    }
    if ( (v2 & 0x8000u) != 0LL )
    {
      *(_DWORD *)(W32GetUserSessionState(v2) + 14256) = 0;
      if ( (*(_BYTE *)(W32GetUserSessionState(v6) + 14440) & 0x10) == 0 )
        xxxKeyEventEx(32930, 541, *((_DWORD *)a1 + 1), 0, *((_QWORD *)a1 + 1), (__int64)a1 + 16, v3, 0, 0LL, 0LL);
    }
    else if ( (*(_BYTE *)(W32GetUserSessionState(v2) + 14404) & 4) == 0 )
    {
      *(_DWORD *)(W32GetUserSessionState(v5) + 14256) = 1;
      xxxKeyEventEx(162, 541, *((_DWORD *)a1 + 1), 0, *((_QWORD *)a1 + 1), (__int64)a1 + 16, v4, 0, 0LL, 0LL);
    }
  }
}
