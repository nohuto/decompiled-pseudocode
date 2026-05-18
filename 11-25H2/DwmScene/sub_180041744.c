/*
 * XREFs of sub_180041744 @ 0x180041744
 * Callers:
 *     sub_180040FD0 @ 0x180040FD0 (sub_180040FD0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800409D8 @ 0x1800409D8 (sub_1800409D8.c)
 *     sub_18005B9C0 @ 0x18005B9C0 (sub_18005B9C0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180041744(__int64 a1, _QWORD *a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  unsigned __int16 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  v8 = sub_1800409D8(a1 + 200, (__int64)&v15);
  if ( *a2 )
  {
    *(_DWORD *)(v8 + 32) = 2;
    v9 = (_QWORD *)sub_18005B9C0(*(_QWORD *)(a1 + 136), v13);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)*v9 + 56LL))(*v9, a1, a2, a3);
  }
  else
  {
    *(_DWORD *)(v8 + 32) = 3;
    v11 = (_QWORD *)sub_18005B9C0(*(_QWORD *)(a1 + 136), v13);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)*v11 + 64LL))(*v11, a1, a4, a3);
  }
  if ( v14 )
    result = sub_18001050C(v14);
  v12 = a2[1];
  if ( v12 )
    return sub_18001050C(v12);
  return result;
}
