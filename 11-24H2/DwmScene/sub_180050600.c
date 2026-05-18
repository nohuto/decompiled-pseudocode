/*
 * XREFs of sub_180050600 @ 0x180050600
 * Callers:
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_18007B4FC @ 0x18007B4FC (sub_18007B4FC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 *     sub_1800500F0 @ 0x1800500F0 (sub_1800500F0.c)
 *     sub_1800507FC @ 0x1800507FC (sub_1800507FC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180050600(__int64 a1, __int64 *a2)
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
    result = sub_180040AFC(a1 + 128, (__int64)&v13);
    if ( result == *(_QWORD *)(a1 + 128) || !*(_QWORD *)(result + 40) )
    {
      sub_1800500F0(*a2, &v10);
      v5 = v10;
      v6 = sub_180027BEC(a1, (__int64)v12);
      sub_180027D84(v5, v6);
      v7 = unknown_libname_81(v12, (_QWORD *)(a1 + 112));
      v8(v9, v7);
      result = sub_1800507FC(a1, &v10);
      if ( v11 )
        return sub_18001060C(v11);
    }
  }
  return result;
}
