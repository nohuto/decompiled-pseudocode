/*
 * XREFs of ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00C3A20
 * Callers:
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C007A4FC (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00C33E0 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1C00C363C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _SurfaceAccessCheck(struct SURFACE *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 28);
  if ( (v1 & 0x800) != 0 )
    return UserSurfaceAccessCheck(*((_QWORD *)a1 + 81));
  if ( (v1 & 0x10000000) != 0 )
    return UserScreenAccessCheck();
  return 1LL;
}
