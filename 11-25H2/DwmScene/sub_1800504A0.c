/*
 * XREFs of sub_1800504A0 @ 0x1800504A0
 * Callers:
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_18004FF90 @ 0x18004FF90 (sub_18004FF90.c)
 *     sub_18005069C @ 0x18005069C (sub_18005069C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800504A0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, _QWORD *); // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v13 = *(_DWORD *)(*a2 + 244);
    result = sub_18004099C(a1 + 128, (__int64)&v13);
    if ( result == *(_QWORD *)(a1 + 128) || !*(_QWORD *)(result + 40) )
    {
      sub_18004FF90(*a2, &v10);
      v5 = v10;
      v6 = sub_180027A8C(a1, (__int64)v12);
      sub_180027C24(v5, v6);
      v7 = unknown_libname_81(v12, (_QWORD *)(a1 + 112));
      v8(v9, v7);
      result = sub_18005069C(a1, &v10);
      if ( v11 )
        return sub_18001050C(v11);
    }
  }
  return result;
}
