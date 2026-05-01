/*
 * XREFs of ??4SearchAppSizeAndBorderInfo@@QEAAAEAU0@$$QEAU0@@Z @ 0x1801B88A8
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1802458B4 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180050D8C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall SearchAppSizeAndBorderInfo::operator=(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rsi

  v2 = (_QWORD *)(a2 + 72);
  v4 = (_QWORD *)(a1 + 72);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  if ( a1 + 72 != a2 + 72 )
  {
    std::vector<Geometry::CRect>::_Tidy(a1 + 72);
    *v4 = *v2;
    v4[1] = v2[1];
    v4[2] = v2[2];
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
  }
  return a1;
}
