/*
 * XREFs of sub_180090E90 @ 0x180090E90
 * Callers:
 *     sub_18008FA60 @ 0x18008FA60 (sub_18008FA60.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18008D8EC @ 0x18008D8EC (sub_18008D8EC.c)
 */

__int64 __fastcall sub_180090E90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r11
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v2 = sub_1800138F8(a2);
  v5 = sub_18001E5E0(v4, v2, *(_QWORD *)(v3 + 16));
  sub_18008D8EC(v6, &v9, v7, v5);
  if ( !v10 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x180090EE3LL);
  }
  return v10 + 48;
}
