/*
 * XREFs of DifObjTrkCompareNode @ 0x140616230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DifObjTrkCompareNode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax

  v3 = *(_QWORD *)(a2 + 8);
  v4 = 2;
  v5 = *(_QWORD *)(a3 + 8);
  if ( v3 != v5 )
  {
    if ( v3 >= v5 )
    {
      if ( *(_QWORD *)(a3 + 16) <= v3 )
        return 1;
    }
    else
    {
      return v5 < *(_QWORD *)(a2 + 16) ? 2 : 0;
    }
  }
  return v4;
}
