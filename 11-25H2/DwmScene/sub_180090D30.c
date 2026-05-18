/*
 * XREFs of sub_180090D30 @ 0x180090D30
 * Callers:
 *     sub_18008F900 @ 0x18008F900 (sub_18008F900.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_18008D78C @ 0x18008D78C (sub_18008D78C.c)
 */

__int64 __fastcall sub_180090D30(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r11
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v2 = sub_1800137F8(a2);
  v5 = sub_18001E480(v4, v2, *(_QWORD *)(v3 + 16));
  sub_18008D78C(v6, &v9, v7, v5);
  if ( !v10 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x180090D83LL);
  }
  return v10 + 48;
}
