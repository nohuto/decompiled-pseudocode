/*
 * XREFs of bPolyPolygon @ 0x1400692C0
 * Callers:
 *     GreCreatePolyPolygonRgnInternal @ 0x14006AC5C (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x140069BA8 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140069D64 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x14006A7F0 (-bCloseFigure@EPATHOBJ@@QEAA_NXZ.c)
 */

__int64 __fastcall bPolyPolygon(
        EPATHOBJ *this,
        struct EXFORMOBJR *a2,
        struct _POINTL *a3,
        int *a4,
        unsigned int a5,
        int a6)
{
  int *v6; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rdi

  v6 = a4;
  if ( !a5 )
    return 1LL;
  v11 = (unsigned __int64)&a4[a5];
  while ( 1 )
  {
    v12 = *v6;
    a6 -= v12;
    if ( a6 < 0 || (int)v12 < 2 )
      break;
    if ( !EPATHOBJ::bMoveTo(this, a2, a3)
      || !EPATHOBJ::bPolyLineTo(this, a2, a3 + 1, v12 - 1)
      || !EPATHOBJ::bCloseFigure(this) )
    {
      return 0LL;
    }
    ++v6;
    a3 += v12;
    if ( (unsigned __int64)v6 >= v11 )
      return 1LL;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
