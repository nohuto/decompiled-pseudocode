/*
 * XREFs of ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x140009818
 * Callers:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x140008A74 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x140009EDC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bRecordSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400A118C (-bRecordSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400A19F0 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400A2114 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1400A3378 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400A3588 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 */

__int64 __fastcall XCLIPOBJ::bEnumLine(XCLIPOBJ *this, unsigned int a2, struct _CLIPLINE *a3)
{
  ULONG *p_c; // r11
  POINTFIX v6; // rax
  _DWORD *v7; // r8
  __int64 v8; // rcx
  int i; // eax

  p_c = &a3->c;
  a3->ptfxA = *(POINTFIX *)(*((_QWORD *)this + 18) + 4LL);
  v6 = **(POINTFIX **)(*((_QWORD *)this + 18) + 16LL);
  a3->c = 0;
  a3->ptfxB = v6;
  v7 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (int)v7[45] > 0 )
    a3->lStyleState = (unsigned __int16)(v7[43] % v7[50]) | ((unsigned __int16)(v7[43] / v7[50]) << 16);
  v8 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v8 + 24) & 0x10000) != 0 )
    return 0LL;
  *(_DWORD *)(v8 + 36) = ((unsigned __int64)a2 - 24) >> 3;
  *(_QWORD *)(*((_QWORD *)this + 18) + 48LL) = a3->arun;
  *(_QWORD *)(*((_QWORD *)this + 18) + 40LL) = p_c;
  *(_DWORD *)(*((_QWORD *)this + 18) + 56LL) = 0x7FFFFFFF;
  if ( !*(_DWORD *)(*((_QWORD *)this + 18) + 36LL) )
    return 0LL;
  if ( !(unsigned int)XCLIPOBJ::bSetup(this) )
  {
LABEL_6:
    *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x10000u;
    return 0LL;
  }
  while ( (unsigned int)XCLIPOBJ::bRecordSegment(this) )
  {
    for ( i = XCLIPOBJ::bFindNextSegment(this); !i; i = XCLIPOBJ::bFindFirstSegment(this) )
    {
      if ( !(unsigned int)XCLIPOBJ::bFindNextScan(this) )
        goto LABEL_6;
    }
  }
  return 1LL;
}
