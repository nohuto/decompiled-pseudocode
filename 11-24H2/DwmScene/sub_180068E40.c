/*
 * XREFs of sub_180068E40 @ 0x180068E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 *     sub_180027B30 @ 0x180027B30 (sub_180027B30.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 *     sub_1800574F4 @ 0x1800574F4 (sub_1800574F4.c)
 *     sub_180057650 @ 0x180057650 (sub_180057650.c)
 *     sub_180068748 @ 0x180068748 (sub_180068748.c)
 *     sub_180068B9C @ 0x180068B9C (sub_180068B9C.c)
 *     sub_1800693BC @ 0x1800693BC (sub_1800693BC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180068E40(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  int v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r10
  void (__fastcall *v11)(__int64, _QWORD); // r11
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  _BYTE v14[32]; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+88h] [rbp+28h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v5 = *(_DWORD *)(*a2 + 244);
    v15 = v5;
    result = sub_180040AFC((__int64)(a1 + 32), (__int64)&v15);
    if ( result == a1[32] )
    {
      sub_180027B30((__int64)a1, (__int64)a2);
      sub_180068748(*a2, &v12);
      v6 = v12;
      v7 = sub_180027BEC((__int64)a1, (__int64)v14);
      sub_180027D84(v6, v7);
      v8 = *(_QWORD *)(a1[14] + 128);
      if ( v8 )
        v8 = *(unsigned int *)(v8 + 20);
      sub_1800693BC(a1, v8);
      sub_1800574F4((__int64)a1);
      v9 = sub_180057650((__int64)a1);
      v11(v10, v9);
      sub_180068B9C(a1, &v12);
      v15 = v5;
      result = sub_1800276BC(a1 + 10, (__int64)v14, &v15);
      *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
      if ( v13 )
        return sub_18001060C(v13);
    }
  }
  return result;
}
