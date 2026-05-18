/*
 * XREFs of sub_180068CE0 @ 0x180068CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_1800279D0 @ 0x1800279D0 (sub_1800279D0.c)
 *     sub_180027A8C @ 0x180027A8C (sub_180027A8C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_180057394 @ 0x180057394 (sub_180057394.c)
 *     sub_1800574F0 @ 0x1800574F0 (sub_1800574F0.c)
 *     sub_1800685E8 @ 0x1800685E8 (sub_1800685E8.c)
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_18006925C @ 0x18006925C (sub_18006925C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180068CE0(__int64 *a1, __int64 *a2)
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
    result = sub_18004099C((__int64)(a1 + 32), (__int64)&v15);
    if ( result == a1[32] )
    {
      sub_1800279D0((__int64)a1, (__int64)a2);
      sub_1800685E8(*a2, &v12);
      v6 = v12;
      v7 = sub_180027A8C((__int64)a1, (__int64)v14);
      sub_180027C24(v6, v7);
      v8 = *(_QWORD *)(a1[14] + 128);
      if ( v8 )
        v8 = *(unsigned int *)(v8 + 20);
      sub_18006925C(a1, v8);
      sub_180057394((__int64)a1);
      v9 = sub_1800574F0((__int64)a1);
      v11(v10, v9);
      sub_180068A3C(a1, &v12);
      v15 = v5;
      result = sub_18002755C(a1 + 10, (__int64)v14, &v15);
      *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
      if ( v13 )
        return sub_18001050C(v13);
    }
  }
  return result;
}
