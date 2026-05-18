/*
 * XREFs of sub_18005DA40 @ 0x18005DA40
 * Callers:
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_18006C62C @ 0x18006C62C (sub_18006C62C.c)
 */

_QWORD *__fastcall sub_18005DA40(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  char v4; // si
  __int64 v5; // r14
  __int64 v6; // rbx
  char v8; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  _QWORD *v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+58h] [rbp-8h]
  void *v15; // [rsp+88h] [rbp+28h] BYREF

  v15 = &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor';
  sub_18006C62C(a1, &v12, &v15);
  if ( (v13 - (__int64)v12) >> 4 )
  {
    v3 = unknown_libname_81(&v10, v12);
    v4 = 1;
    v5 = *v3;
  }
  else
  {
    v9 = 0LL;
    v3 = (__int64 *)&v8;
    v5 = 0LL;
    v4 = 2;
  }
  v6 = v3[1];
  v3[1] = 0LL;
  *v3 = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v9 )
      sub_18001060C(v9);
  }
  if ( (v4 & 1) != 0 && v11 )
    sub_18001060C(v11);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *a2 = v5;
  a2[1] = v6;
  if ( v6 )
    sub_18001060C(v6);
  if ( v12 )
  {
    sub_180012140((__int64)v12, v13);
    sub_180010234(v12, (v14 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return a2;
}
