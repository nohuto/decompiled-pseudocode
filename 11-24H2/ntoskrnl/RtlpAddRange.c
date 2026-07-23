/*
 * XREFs of RtlpAddRange @ 0x1406F9D60
 * Callers:
 *     RtlMergeRangeLists @ 0x14077D2E0 (RtlMergeRangeLists.c)
 *     RtlpDeleteFromMergedRange @ 0x14077D738 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x140A70BB0 (RtlAddRange.c)
 * Callees:
 *     RtlpAddIntersectingRanges @ 0x14077D3EC (RtlpAddIntersectingRanges.c)
 */

__int64 __fastcall RtlpAddRange(unsigned __int64 *a1, __int64 *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r11d
  unsigned __int64 v6; // r9
  unsigned __int64 *i; // rdx
  __int64 *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 **v10; // rdx
  unsigned __int64 **v11; // rax

  *((_BYTE *)a2 + 33) &= ~2u;
  v4 = a2[1];
  v5 = 0;
  v6 = *a2;
  if ( (unsigned __int64 *)*a1 != a1 && v6 <= *(_QWORD *)(a1[1] - 32) )
  {
    for ( i = (unsigned __int64 *)(*a1 - 40); a1 != i + 5; i = (unsigned __int64 *)(i[5] - 40) )
    {
      if ( v4 < *i )
      {
        v8 = (__int64 *)i[6];
        v9 = *v8;
        a2[5] = *v8;
        a2[6] = (__int64)v8;
        *(_QWORD *)(v9 + 8) = a2 + 5;
        *v8 = (__int64)(a2 + 5);
        return v5;
      }
      if ( *i >= v6 || i[1] >= v6 )
        return (unsigned int)RtlpAddIntersectingRanges(a1, i, a2, a3);
    }
  }
  v10 = (unsigned __int64 **)a1[1];
  v11 = (unsigned __int64 **)(a2 + 5);
  if ( *v10 != a1 )
    __fastfail(3u);
  *v11 = a1;
  a2[6] = (__int64)v10;
  *v10 = (unsigned __int64 *)v11;
  a1[1] = (unsigned __int64)v11;
  return v5;
}
