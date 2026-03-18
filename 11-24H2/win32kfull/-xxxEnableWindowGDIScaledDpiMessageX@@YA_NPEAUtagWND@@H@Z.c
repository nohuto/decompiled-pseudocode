/*
 * XREFs of ?xxxEnableWindowGDIScaledDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1402C81B4
 * Callers:
 *     NtUserEnableWindowGDIScaledDpiMessage @ 0x140294660 (NtUserEnableWindowGDIScaledDpiMessage.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall xxxEnableWindowGDIScaledDpiMessageX(struct tagWND *a1, __int64 a2)
{
  int v2; // esi
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ecx

  v2 = a2;
  v4 = 0;
  if ( PtiCurrent((__int64)a1, a2) )
  {
    if ( *((_QWORD *)PtiCurrent(v6, v5) + 62) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v8, v7) + 62) + 8LL) + 64LL) & 1) != 0 )
      {
        v9 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (v9 & 0xF) == 0 && (v9 & 0x40000000) != 0 )
        {
          if ( v2 )
            *((_DWORD *)a1 + 95) |= 0x100000u;
          else
            *((_DWORD *)a1 + 95) &= ~0x100000u;
          return 1;
        }
      }
    }
  }
  return v4;
}
