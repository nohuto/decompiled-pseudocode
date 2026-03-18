/*
 * XREFs of ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400DA1A8
 * Callers:
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1400DA040 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiEngBitBlt @ 0x1400DB6D0 (NtGdiEngBitBlt.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1401E7A70 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1401F05A0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiEngFillPath @ 0x1402074A0 (NtGdiEngFillPath.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x14021B380 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140262710 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140262A80 (NtGdiEngTextOut.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x140338CD0 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiEngLineTo @ 0x140339840 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x140339AB0 (NtGdiEngPaint.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033A020 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 168) )
  {
    result = *(_QWORD *)(a1 + 160);
  }
  else if ( a2 == *(_QWORD *)(a1 + 184) )
  {
    result = *(_QWORD *)(a1 + 176);
  }
  else
  {
    result = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 444) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}
