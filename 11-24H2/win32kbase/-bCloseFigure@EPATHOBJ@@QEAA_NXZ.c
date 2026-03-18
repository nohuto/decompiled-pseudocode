/*
 * XREFs of ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x14006A7F0
 * Callers:
 *     bPolyPolygon @ 0x1400692C0 (bPolyPolygon.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140069384 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     PATHOBJ_bCloseFigure @ 0x14006C300 (PATHOBJ_bCloseFigure.c)
 * Callees:
 *     ?CloseFigure@PATH_CORE@@QEAA_NXZ @ 0x14006A830 (-CloseFigure@PATH_CORE@@QEAA_NXZ.c)
 */

char __fastcall EPATHOBJ::bCloseFigure(EPATHOBJ *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
    return 0;
  if ( PATH_CORE::CloseFigure((PATH_CORE *)(v2 + 24)) )
    ++*((_DWORD *)this + 1);
  return 1;
}
