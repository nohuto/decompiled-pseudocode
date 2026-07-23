/*
 * XREFs of WmipFindISInDSByGuid @ 0x140AA3FE8
 * Callers:
 *     WmipUpdateModifyGuid @ 0x1407A5FF8 (WmipUpdateModifyGuid.c)
 *     WmipUpdateDataSource @ 0x1409AF500 (WmipUpdateDataSource.c)
 * Callees:
 *     WmipReferenceEntry @ 0x1409B4038 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindISInDSByGuid(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  _QWORD *i; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx

  v2 = (_QWORD *)(a1 + 40);
  for ( i = *(_QWORD **)(a1 + 40); i != v2; i = (_QWORD *)*i )
  {
    v5 = i - 5;
    v6 = i[2];
    if ( v6 )
    {
      v7 = *a2 - *(_QWORD *)(v6 + 72);
      if ( *a2 == *(_QWORD *)(v6 + 72) )
        v7 = a2[1] - *(_QWORD *)(v6 + 80);
      if ( !v7 )
      {
        WmipReferenceEntry((ULONG_PTR)(i - 5));
        return v5;
      }
    }
  }
  return 0LL;
}
