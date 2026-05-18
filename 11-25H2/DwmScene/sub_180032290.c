/*
 * XREFs of sub_180032290 @ 0x180032290
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180032424 @ 0x180032424 (sub_180032424.c)
 *     sub_1800368E4 @ 0x1800368E4 (sub_1800368E4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *sub_180032290(__int64 a1, _QWORD *a2, __int64 a3, ...)
{
  _QWORD *v3; // rdi
  __int64 *v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // rsi
  _QWORD *v10; // rbp
  __int64 v11; // rdx
  const void *v12; // rax
  size_t v13; // r8
  const void *v14; // r9
  __int64 v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-28h]
  _QWORD *v19; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD *);
  v3 = v19;
  if ( !*v19 )
  {
    v7 = (__int64 *)sub_180032424(a1, &v17);
    sub_180011010(v3, v7);
    if ( v18 )
      sub_18001050C((__int64)v18);
  }
  sub_180015174(&v17, v3);
  v8 = *(_QWORD *)sub_1800368E4(a1 + 728, (_QWORD **)va, &v17);
  if ( v18 )
    sub_180010544(v18);
  v9 = *(_QWORD **)(v8 + 48);
  v10 = *(_QWORD **)(v8 + 56);
  while ( v9 != v10 )
  {
    sub_1800137F8(a3);
    v12 = (const void *)sub_1800137F8(v11 + 24);
    if ( v13 == *(_QWORD *)(a3 + 16) && !memcmp(v12, v14, v13) )
    {
      unknown_libname_81(a2, v9);
      goto LABEL_13;
    }
    v9 += 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_13:
  v15 = v3[1];
  if ( v15 )
    sub_18001050C(v15);
  return a2;
}
