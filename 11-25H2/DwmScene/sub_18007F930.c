/*
 * XREFs of sub_18007F930 @ 0x18007F930
 * Callers:
 *     sub_18007F330 @ 0x18007F330 (sub_18007F330.c)
 *     sub_18007F47C @ 0x18007F47C (sub_18007F47C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007F930(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD **v5; // r15
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h]
  _BYTE v13[16]; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF

  sub_18002851C(a2 + 24, (__int64)v13);
  sub_1800287EC(a2 + 24, v4);
  v5 = *(_QWORD ***)(a2 + 272);
  v6 = a1[14];
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 12);
  else
    v7 = 0;
  v8 = a1[17];
  v9 = sub_1800407EC((__int64)(a1 + 12), &v11);
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*v5[12] + 8LL))(v5[12], v5);
  ((void (__fastcall *)(_QWORD **, _QWORD *, __int64, _QWORD))(*v5)[35])(v5, v9, v8, v7);
  ((void (__fastcall *)(_QWORD **))(*v5)[37])(v5);
  if ( v12 )
    sub_18001050C(v12);
  v14 = *(_DWORD *)(a2 + 244);
  *(_BYTE *)(*(_QWORD *)sub_18002755C(a1 + 10, (__int64)&v11, &v14) + 32LL) = 1;
  return sub_180010F44((__int64)v13);
}
