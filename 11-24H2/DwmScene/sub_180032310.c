/*
 * XREFs of sub_180032310 @ 0x180032310
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_18005F7E0 @ 0x18005F7E0 (sub_18005F7E0.c)
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_180063434 @ 0x180063434 (sub_180063434.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     sub_1800648A8 @ 0x1800648A8 (sub_1800648A8.c)
 *     sub_180065114 @ 0x180065114 (sub_180065114.c)
 *     sub_1800653C4 @ 0x1800653C4 (sub_1800653C4.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_180032584 @ 0x180032584 (sub_180032584.c)
 *     sub_180036A44 @ 0x180036A44 (sub_180036A44.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *sub_180032310(__int64 a1, _QWORD *a2, __int64 a3, ...)
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
    v6 = (__int64 *)sub_180032584(a1, &v10);
    sub_180011110(v3, v6);
    if ( v11 )
      sub_18001060C((__int64)v11);
  }
  sub_180015274(&v10, v3);
  sub_180036A44(a1 + 728, (_QWORD **)va, &v10);
  if ( v11 )
    sub_180010644(v11);
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
    sub_18001060C(v8);
  return a2;
}
