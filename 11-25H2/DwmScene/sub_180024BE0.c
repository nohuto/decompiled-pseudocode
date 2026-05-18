/*
 * XREFs of sub_180024BE0 @ 0x180024BE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800250E0 @ 0x1800250E0 (sub_1800250E0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180024BE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64, __int64); // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]
  _BYTE v15[8]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-10h]

  sub_1800250E0(a1, &v13);
  v4 = *(_QWORD *)(a1 + 272);
  v5 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 88LL);
  v6 = v13;
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 32LL))(v13, v15);
  v5(v4, v7, a2);
  if ( v16 )
    sub_18001050C(v16);
  v8 = *(_QWORD *)(a1 + 272);
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 104LL);
  v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 40LL))(v6, v15);
  LOBYTE(v11) = 1;
  result = v9(v8, v10, v11);
  if ( v16 )
    result = sub_18001050C(v16);
  if ( v14 )
    return sub_18001050C(v14);
  return result;
}
