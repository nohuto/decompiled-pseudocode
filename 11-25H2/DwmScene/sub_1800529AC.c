/*
 * XREFs of sub_1800529AC @ 0x1800529AC
 * Callers:
 *     sub_1800532B0 @ 0x1800532B0 (sub_1800532B0.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180052DBC @ 0x180052DBC (sub_180052DBC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800529AC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = (_QWORD *)sub_18001B098(16LL);
  v7 = v6;
  if ( v6 )
  {
    *v6 = *a3;
    v6[1] = *a2;
  }
  else
  {
    v7 = 0LL;
  }
  v10 = v7;
  v8 = o__beginthreadex(0LL, 0LL, sub_180052970);
  *(_QWORD *)a1 = v8;
  if ( !v8 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x180052A50LL);
  }
  v10 = 0LL;
  return sub_180052DBC(&v10);
}
