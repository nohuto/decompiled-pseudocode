/*
 * XREFs of ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02C6580
 * Callers:
 *     NtGdiEngFillPath @ 0x1C02C9310 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CADE0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CB1B0 (NtGdiEngStrokePath.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02CC800 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02CC960 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02CCAF0 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CCB80 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02CCCC0 (NtGdiPATHOBJ_vGetBounds.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_PATHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 232) )
  {
    result = *(_QWORD *)(a1 + 224);
  }
  else if ( a2 == *(_QWORD *)(a1 + 248) )
  {
    result = *(_QWORD *)(a1 + 240);
  }
  else if ( a2 == *(_QWORD *)(a1 + 264) )
  {
    result = *(_QWORD *)(a1 + 256);
  }
  else
  {
    result = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 428) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}
