/*
 * XREFs of sub_1800C829C @ 0x1800C829C
 * Callers:
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 *     sub_1800C90A8 @ 0x1800C90A8 (sub_1800C90A8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C829C(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  v5 = *(_QWORD *)(a1 + 56);
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, int *, int *))(*(_QWORD *)v5 + 16LL))(v5, a2, &v8, &v9);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
