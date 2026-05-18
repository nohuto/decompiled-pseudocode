/*
 * XREFs of sub_18005C7C4 @ 0x18005C7C4
 * Callers:
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012210 @ 0x180012210 (sub_180012210.c)
 *     sub_180015F50 @ 0x180015F50 (sub_180015F50.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_1800393B8 @ 0x1800393B8 (sub_1800393B8.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 *     sub_18004D668 @ 0x18004D668 (sub_18004D668.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18005C7C4(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int128 v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]

  sub_18003BD1C(a1);
  v4 = *sub_180015F50(a1, &v9);
  if ( v10 )
    sub_18001050C(v10);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180011C64(a1 + 8, &v9);
    v5 = sub_18001B098(552LL);
    v6 = v5;
    if ( v5 )
    {
      *(_OWORD *)v5 = 0LL;
      *(_DWORD *)(v5 + 8) = 1;
      *(_DWORD *)(v5 + 12) = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj2<Spectre::Engine::LightProbe>::`vftable';
      sub_18004D668();
    }
    else
    {
      v6 = 0LL;
    }
    v8 = 0LL;
    sub_180012210(&v8, v6 + 16, v6);
    if ( v10 )
      sub_18001050C(v10);
    unknown_libname_81(&v9, &v8);
    sub_1800393B8(a1, &v9);
    if ( v10 )
      sub_18001050C(v10);
    *(_OWORD *)a2 = v8;
  }
  return a2;
}
