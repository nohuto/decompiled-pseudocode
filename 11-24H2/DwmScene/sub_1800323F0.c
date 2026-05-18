/*
 * XREFs of sub_1800323F0 @ 0x1800323F0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x18000CE3D (memcmp.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_180032584 @ 0x180032584 (sub_180032584.c)
 *     sub_180036A44 @ 0x180036A44 (sub_180036A44.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *sub_1800323F0(__int64 a1, _QWORD *a2, __int64 a3, ...)
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
    v7 = (__int64 *)sub_180032584(a1, &v17);
    sub_180011110(v3, v7);
    if ( v18 )
      sub_18001060C((__int64)v18);
  }
  sub_180015274(&v17, v3);
  v8 = *(_QWORD *)sub_180036A44(a1 + 728, (_QWORD **)va, &v17);
  if ( v18 )
    sub_180010644(v18);
  v9 = *(_QWORD **)(v8 + 48);
  v10 = *(_QWORD **)(v8 + 56);
  while ( v9 != v10 )
  {
    sub_1800138F8(a3);
    v12 = (const void *)sub_1800138F8(v11 + 24);
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
    sub_18001060C(v15);
  return a2;
}
