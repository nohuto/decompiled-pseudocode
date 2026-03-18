/*
 * XREFs of ?bRecordSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400A118C
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x140009818 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1400A1650 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1400A3500 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bRecordSegment(XCLIPOBJ *this)
{
  struct _POINTL *v2; // r8
  int v3; // ecx
  int *v4; // rdx

  *((_DWORD *)this + 24) += *((_DWORD *)this + 25);
  v2 = (struct _POINTL *)*((_QWORD *)this + 18);
  v3 = *(_DWORD *)(*((_QWORD *)this + 10) + 4LL * *((int *)this + 24) + 12);
  if ( (((unsigned int)v2[3].x >> 22) & 1) == v3 > v2[18].x )
  {
    v4 = (int *)&v2[20];
  }
  else
  {
    XCLIPOBJ::bIntersectWall(this, v3, v2 + 17, 0LL, (int *)&v2[4]);
    v4 = (int *)(*((_QWORD *)this + 18) + 32LL);
  }
  return XCLIPOBJ::bRecordRun(this, v4);
}
