/*
 * XREFs of RtlAreBitsSetEx @ 0x140418330
 * Callers:
 *     MiPatchDataPagesCallback @ 0x1407F5A20 (MiPatchDataPagesCallback.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlAreBitsSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // rax

  if ( a2 >= *a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return _bittest64((const signed __int64 *)(a1[1] + 8 * (a2 >> 6)), a2 & 0x3F);
    return 0;
  }
  if ( *a1 - a2 < a3 )
    return 0;
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 8 * (a2 >> 6));
  v6 = v4 + 8 * (a2 >> 6);
  v7 = v4 + 8 * ((a2 + a3 - 1) >> 6);
  if ( v6 == v7 )
    return ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2) & v5) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2;
  if ( ((-1LL << a2) & v5) != -1LL << a2 )
    return 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v6 + 8);
    v6 += 8LL;
    if ( v6 == v7 )
      break;
    if ( v8 != -1 )
      return 0;
  }
  return ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)a2 + (unsigned __int8)a3 - 1)) & v8) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)a2 + (unsigned __int8)a3 - 1);
}
