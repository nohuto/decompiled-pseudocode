/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAEEU?$less@X@std@@@std@@YAXPEAE_J1$$QEAEU?$less@X@0@@Z @ 0x1800E91D4
 * Callers:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E94C0 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v4; // r11
  __int64 v5; // rdi
  __int64 i; // r10
  __int64 v7; // rax
  unsigned __int8 v8; // r8
  unsigned __int8 result; // al

  v4 = (a3 - 1) >> 1;
  v5 = a2;
  for ( i = a2; i < v4; a2 = i )
  {
    i = 2 * i + 2LL - (*(_BYTE *)(2 * i + a1 + 2) < *(_BYTE *)(2 * i + a1 + 1));
    *(_BYTE *)(a1 + a2) = *(_BYTE *)(i + a1);
  }
  if ( i == v4 && (a3 & 1) == 0 )
  {
    *(_BYTE *)(a1 + a2) = *(_BYTE *)(a1 + a3 - 1);
    a2 = a3 - 1;
  }
  if ( v5 < a2 )
  {
    do
    {
      v7 = (a2 - 1) >> 1;
      v8 = *(_BYTE *)(v7 + a1);
      if ( v8 >= *a4 )
        break;
      *(_BYTE *)(a2 + a1) = v8;
      a2 = (a2 - 1) >> 1;
    }
    while ( v5 < v7 );
  }
  result = *a4;
  *(_BYTE *)(a2 + a1) = *a4;
  return result;
}
