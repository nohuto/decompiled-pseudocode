/*
 * XREFs of ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C652C
 * Callers:
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02C7900 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02C79F0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02C7A60 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02C7AE0 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C02C7B50 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiEngBitBlt @ 0x1C02C8210 (NtGdiEngBitBlt.c)
 *     NtGdiEngFillPath @ 0x1C02C9310 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C02C9990 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02C9D40 (NtGdiEngPaint.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CA7D0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CADE0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CB1B0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CB520 (NtGdiEngTextOut.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 152) )
  {
    result = *(_QWORD *)(a1 + 144);
  }
  else if ( a2 == *(_QWORD *)(a1 + 168) )
  {
    result = *(_QWORD *)(a1 + 160);
  }
  else
  {
    result = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 428) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}
