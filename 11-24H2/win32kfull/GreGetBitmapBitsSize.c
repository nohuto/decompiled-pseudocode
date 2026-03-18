/*
 * XREFs of GreGetBitmapBitsSize @ 0x14016305C
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x140155610 (NtGdiGetDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x140162CE0 (NtGdiCreateSessionMappedDIBSection.c)
 *     NtGdiCreateDIBSection @ 0x14025E4E0 (NtGdiCreateDIBSection.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402B2304 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x14033B334 (-GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     NtGdiIcmBrushInfo @ 0x14033C040 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ?noOverflowCJSCAN@@YAKKGGK@Z @ 0x1401631D8 (-noOverflowCJSCAN@@YAKKGGK@Z.c)
 */

unsigned int __fastcall GreGetBitmapBitsSize(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // r9d
  unsigned __int64 v5; // r8
  unsigned int result; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // r8

  if ( *(_DWORD *)a1 == 12 )
    return noOverflowCJSCAN(
             *(unsigned __int16 *)(a1 + 4),
             *(_WORD *)(a1 + 8),
             *(_WORD *)(a1 + 10),
             *(unsigned __int16 *)(a1 + 6));
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 > 0xA )
    return *(_DWORD *)(a1 + 20);
  v3 = 1033;
  if ( !_bittest(&v3, v2) )
    return *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = ((*(unsigned int *)(a1 + 4) * *(unsigned __int16 *)(a1 + 12) * (unsigned __int64)*(unsigned __int16 *)(a1 + 14)
       + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL;
  result = 0;
  if ( v5 <= 0xFFFFFFFF )
  {
    v7 = (unsigned int)-v4;
    if ( v4 >= 0 )
      v7 = (unsigned int)v4;
    v8 = v7 * v5;
    if ( v8 > 0xFFFFFFFF )
      LODWORD(v8) = 0;
    return v8;
  }
  return result;
}
