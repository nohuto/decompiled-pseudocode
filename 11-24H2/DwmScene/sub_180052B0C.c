/*
 * XREFs of sub_180052B0C @ 0x180052B0C
 * Callers:
 *     sub_180053410 @ 0x180053410 (sub_180053410.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180052F1C @ 0x180052F1C (sub_180052F1C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180052B0C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = (_QWORD *)sub_18001B1F8(16LL);
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
  v8 = o__beginthreadex(0LL, 0LL, sub_180052AD0);
  *(_QWORD *)a1 = v8;
  if ( !v8 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x180052BB0LL);
  }
  v10 = 0LL;
  return sub_180052F1C(&v10);
}
