/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAIIU?$less@X@std@@@std@@YAXPEAI_J1$$QEAIU?$less@X@0@@Z @ 0x1800F6884
 * Callers:
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800F6924 (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<unsigned int *,unsigned int,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // r11
  __int64 v5; // rdi
  __int64 i; // r10
  __int64 v7; // rax
  unsigned int v8; // r8d
  __int64 result; // rax

  v4 = (a3 - 1) >> 1;
  v5 = a2;
  for ( i = a2; i < v4; a2 = i )
  {
    i = 2 * i + 2LL - (*(_DWORD *)(a1 + 8 * i + 8) < *(_DWORD *)(a1 + 8 * i + 4));
    *(_DWORD *)(a1 + 4 * a2) = *(_DWORD *)(a1 + 4 * i);
  }
  if ( i == v4 && (a3 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4 * a2) = *(_DWORD *)(a1 + 4 * a3 - 4);
    a2 = a3 - 1;
  }
  if ( v5 < a2 )
  {
    do
    {
      v7 = (a2 - 1) >> 1;
      v8 = *(_DWORD *)(a1 + 4 * v7);
      if ( v8 >= *a4 )
        break;
      *(_DWORD *)(a1 + 4 * a2) = v8;
      a2 = (a2 - 1) >> 1;
    }
    while ( v5 < v7 );
  }
  result = *a4;
  *(_DWORD *)(a1 + 4 * a2) = result;
  return result;
}
