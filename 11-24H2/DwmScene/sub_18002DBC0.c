/*
 * XREFs of sub_18002DBC0 @ 0x18002DBC0
 * Callers:
 *     sub_1800351F4 @ 0x1800351F4 (sub_1800351F4.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002FFEC @ 0x18002FFEC (sub_18002FFEC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002DBC0(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = sub_18001B1F8(24LL);
  if ( v6 )
  {
    *(_QWORD *)v6 = *a3;
    *(_OWORD *)(v6 + 8) = *a2;
  }
  else
  {
    v6 = 0LL;
  }
  v9 = v6;
  v7 = o__beginthreadex(0LL, 0LL, sub_18002DAF0);
  *(_QWORD *)a1 = v7;
  if ( !v7 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x18002DC66LL);
  }
  v9 = 0LL;
  return sub_18002FFEC(&v9);
}
