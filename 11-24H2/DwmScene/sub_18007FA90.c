/*
 * XREFs of sub_18007FA90 @ 0x18007FA90
 * Callers:
 *     sub_18007F490 @ 0x18007F490 (sub_18007F490.c)
 *     sub_18007F5DC @ 0x18007F5DC (sub_18007F5DC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007FA90(__int64 *a1, __int64 a2)
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

  sub_18002867C(a2 + 24, (__int64)v13);
  sub_18002894C(a2 + 24, v4);
  v5 = *(_QWORD ***)(a2 + 272);
  v6 = a1[14];
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 12);
  else
    v7 = 0;
  v8 = a1[17];
  v9 = sub_18004094C((__int64)(a1 + 12), &v11);
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*v5[12] + 8LL))(v5[12], v5);
  ((void (__fastcall *)(_QWORD **, _QWORD *, __int64, _QWORD))(*v5)[35])(v5, v9, v8, v7);
  ((void (__fastcall *)(_QWORD **))(*v5)[37])(v5);
  if ( v12 )
    sub_18001060C(v12);
  v14 = *(_DWORD *)(a2 + 244);
  *(_BYTE *)(*(_QWORD *)sub_1800276BC(a1 + 10, (__int64)&v11, &v14) + 32LL) = 1;
  return sub_180011044((__int64)v13);
}
