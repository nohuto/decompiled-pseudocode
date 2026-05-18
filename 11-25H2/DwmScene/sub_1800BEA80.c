/*
 * XREFs of sub_1800BEA80 @ 0x1800BEA80
 * Callers:
 *     sub_1800BD88C @ 0x1800BD88C (sub_1800BD88C.c)
 * Callees:
 *     sub_180040A14 @ 0x180040A14 (sub_180040A14.c)
 */

__int64 __fastcall sub_1800BEA80(__int64 *a1, _DWORD *a2)
{
  _DWORD *v2; // r10
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_180040A14(a1, &v4, a2);
  if ( *(_BYTE *)(v5 + 25) || *v2 < *(_DWORD *)(v5 + 32) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1800BEAC7LL);
  }
  return v5 + 40;
}
