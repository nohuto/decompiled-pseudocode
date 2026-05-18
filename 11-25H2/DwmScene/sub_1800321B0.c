/*
 * XREFs of sub_1800321B0 @ 0x1800321B0
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_18005F680 @ 0x18005F680 (sub_18005F680.c)
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_1800632D4 @ 0x1800632D4 (sub_1800632D4.c)
 *     sub_180063A84 @ 0x180063A84 (sub_180063A84.c)
 *     sub_180064748 @ 0x180064748 (sub_180064748.c)
 *     sub_180064FB4 @ 0x180064FB4 (sub_180064FB4.c)
 *     sub_180065264 @ 0x180065264 (sub_180065264.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180032424 @ 0x180032424 (sub_180032424.c)
 *     sub_1800368E4 @ 0x1800368E4 (sub_1800368E4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *sub_1800321B0(__int64 a1, _QWORD *a2, __int64 a3, ...)
{
  _QWORD *v3; // rdi
  __int64 *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-18h]
  _QWORD *v12; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD *);
  v3 = v12;
  if ( !*v12 )
  {
    v6 = (__int64 *)sub_180032424(a1, &v10);
    sub_180011010(v3, v6);
    if ( v11 )
      sub_18001050C((__int64)v11);
  }
  sub_180015174(&v10, v3);
  sub_1800368E4(a1 + 728, (_QWORD **)va, &v10);
  if ( v11 )
    sub_180010544(v11);
  if ( v12 == *(_QWORD **)(a1 + 728) || (v7 = (_QWORD *)v12[6], !((__int64)(v12[7] - (_QWORD)v7) >> 4)) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    unknown_libname_81(a2, v7);
  }
  v8 = v3[1];
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
