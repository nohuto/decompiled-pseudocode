/*
 * XREFs of ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x14018295C
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x140049F70 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x14018287C (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1400437F0 (CalcVisRgn.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreScaleRgnToDestLogPixel @ 0x14026BAB4 (GreScaleRgnToDestLogPixel.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GetWindowRgn(struct tagWND *a1, HRGN a2, char a3)
{
  char *v3; // rbx
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // r9d
  unsigned int RgnBox; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  HRGN v20; // [rsp+20h] [rbp-28h] BYREF
  __int128 v21; // [rsp+28h] [rbp-20h] BYREF

  v3 = (char *)a1 + 40;
  v20 = a2;
  if ( (a3 & 2) != 0 )
  {
    v7 = 2 * (a3 & 4 | 0x4800200);
    v8 = v7 | 0x10;
    v21 = 0LL;
    if ( (a3 & 8) == 0 )
      v8 = v7;
    v9 = v8 | 1;
    if ( (a3 & 0x10) != 0 )
      v9 = v8;
    CalcVisRgn(&v20, (__int64)a1, a1, v9);
    RgnBox = GreGetRgnBox(v20, &v21);
  }
  else
  {
    v15 = *(_QWORD *)(*(_QWORD *)v3 + 168LL);
    if ( !v15 )
      return 0LL;
    RgnBox = GreCombineRgn(a2, v15, 0LL, 5LL);
  }
  v12 = RgnBox;
  if ( !RgnBox )
    return 0LL;
  v13 = *(_QWORD *)v3;
  if ( (*(_WORD *)(*(_QWORD *)v3 + 42LL) & 0x2FFF) != 0x29D )
    v12 = GreOffsetRgn(v20, (unsigned int)-*(_DWORD *)(v13 + 88), (unsigned int)-*(_DWORD *)(v13 + 92));
  if ( (a3 & 0x20) != 0
    && PtiCurrent(v11, v13)
    && *((_QWORD *)PtiCurrent(v17, v16) + 62)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v19, v18) + 62) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)v3 + 288LL) & 0x4000000F) == 0x40000000 )
  {
    GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(*(_QWORD *)v3 + 284LL), v20);
  }
  return v12;
}
