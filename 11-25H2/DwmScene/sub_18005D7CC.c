/*
 * XREFs of sub_18005D7CC @ 0x18005D7CC
 * Callers:
 *     sub_18005F440 @ 0x18005F440 (sub_18005F440.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_18006C4CC @ 0x18006C4CC (sub_18006C4CC.c)
 */

_QWORD *__fastcall sub_18005D7CC(__int64 a1, _QWORD *a2)
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

  v15 = &Spectre::Engine::ImageProcessingEffectBloom `RTTI Type Descriptor';
  sub_18006C4CC(a1, &v12, &v15);
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
      sub_18001050C(v9);
  }
  if ( (v4 & 1) != 0 && v11 )
    sub_18001050C(v11);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *a2 = v5;
  a2[1] = v6;
  if ( v6 )
    sub_18001050C(v6);
  if ( v12 )
  {
    sub_180012040((__int64)v12, v13);
    sub_180010134(v12, (v14 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return a2;
}
