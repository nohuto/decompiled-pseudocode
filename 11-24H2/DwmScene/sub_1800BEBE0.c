/*
 * XREFs of sub_1800BEBE0 @ 0x1800BEBE0
 * Callers:
 *     sub_1800BD9EC @ 0x1800BD9EC (sub_1800BD9EC.c)
 * Callees:
 *     sub_180040B74 @ 0x180040B74 (sub_180040B74.c)
 */

__int64 __fastcall sub_1800BEBE0(__int64 *a1, _DWORD *a2)
{
  _DWORD *v2; // r10
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_180040B74(a1, &v4, a2);
  if ( *(_BYTE *)(v5 + 25) || *v2 < *(_DWORD *)(v5 + 32) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1800BEC27LL);
  }
  return v5 + 40;
}
