/*
 * XREFs of sub_180078140 @ 0x180078140
 * Callers:
 *     sub_1800480A0 @ 0x1800480A0 (sub_1800480A0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180078140(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rax
  void (__fastcall *v7)(__int64, _QWORD *); // r8
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h]

  v2 = sub_180078418(a1);
  sub_1800346A8(v2, &v13);
  v3 = 0;
  v4 = v13;
  if ( (v14 - v13) >> 4 )
  {
    v5 = 0LL;
    do
    {
      unknown_libname_81(&v9, (_QWORD *)(v4 + 16 * v5));
      sub_18002851C(v9 + 24, (__int64)v12);
      v6 = unknown_libname_81(&v11, &v9);
      v7(a1, v6);
      sub_180010F44((__int64)v12);
      if ( v10 )
        sub_18001050C(v10);
      ++v3;
      v4 = v13;
      v5 = v3;
    }
    while ( v3 < (unsigned __int64)((v14 - v13) >> 4) );
  }
  return sub_1800130E0((__int64)&v13);
}
