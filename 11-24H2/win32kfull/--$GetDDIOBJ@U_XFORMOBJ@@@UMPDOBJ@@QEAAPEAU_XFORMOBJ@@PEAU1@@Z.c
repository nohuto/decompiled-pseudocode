/*
 * XREFs of ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400DAA6C
 * Callers:
 *     NtGdiXFORMOBJ_iGetXform @ 0x1400DA200 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400DAEB0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiEngStrokePath @ 0x140262710 (NtGdiEngStrokePath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033A020 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 296) )
  {
    result = *(_QWORD *)(a1 + 288);
  }
  else if ( a2 == *(_QWORD *)(a1 + 312) )
  {
    result = *(_QWORD *)(a1 + 304);
  }
  else
  {
    result = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 444) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}
