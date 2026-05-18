/*
 * XREFs of sub_180086E30 @ 0x180086E30
 * Callers:
 *     sub_180085F18 @ 0x180085F18 (sub_180085F18.c)
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

void __fastcall sub_180086E30(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = (_DWORD *)o__errno();
  v6 = sub_1800137F8(a1);
  v8 = 0LL;
  *v5 = 0;
  v7 = v6;
  o_strtol(v6, &v8, a3);
  if ( v7 == v8 )
  {
    std::_Xinvalid_argument("invalid stoi argument");
    __debugbreak();
  }
  if ( *v5 == 34 )
  {
    std::_Xout_of_range("stoi argument out of range");
    __debugbreak();
  }
}
