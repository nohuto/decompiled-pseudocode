/*
 * XREFs of xxxRealizePalette @ 0x1C02145A8
 * Callers:
 *     NtUserRealizePalette @ 0x1C01546E0 (NtUserRealizePalette.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01FBF0C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01FC224 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     FreeAllSpbs @ 0x1C0072380 (FreeAllSpbs.c)
 *     WindowFromCacheDC @ 0x1C01BD6CC (WindowFromCacheDC.c)
 *     xxxBroadcastPaletteChanged @ 0x1C02144DC (xxxBroadcastPaletteChanged.c)
 *     GreRealizePalette @ 0x1C02D0D2C (GreRealizePalette.c)
 *     IsDCCurrentPalette @ 0x1C02D1AE0 (IsDCCurrentPalette.c)
 */

__int64 __fastcall xxxRealizePalette(__int64 *a1)
{
  int v2; // eax
  unsigned __int16 v3; // si
  __int64 v4; // rax
  unsigned __int64 *v5; // rdi
  __int64 i; // rdx
  __int64 j; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v2 = GreRealizePalette((HDC)a1);
  v3 = v2;
  if ( HIWORD(v2) )
  {
    if ( (unsigned int)IsDCCurrentPalette((HDC)a1) )
    {
      v4 = WindowFromCacheDC(a1);
      v5 = (unsigned __int64 *)v4;
      if ( v4 )
      {
        ThreadLockAlways(v4, &v12);
        xxxBroadcastPaletteChanged(v5);
        for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
        {
          for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
          {
            if ( j != v5[3] )
              *(_DWORD *)(j + 48) |= 1u;
          }
        }
        GreRealizePalette((HDC)a1);
        ThreadUnlock1(v9, v8, v10);
      }
    }
    FreeAllSpbs();
  }
  return v3;
}
