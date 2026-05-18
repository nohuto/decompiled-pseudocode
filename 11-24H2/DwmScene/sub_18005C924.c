/*
 * XREFs of sub_18005C924 @ 0x18005C924
 * Callers:
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012310 @ 0x180012310 (sub_180012310.c)
 *     sub_180016050 @ 0x180016050 (sub_180016050.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180039518 @ 0x180039518 (sub_180039518.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 *     sub_18004D7C8 @ 0x18004D7C8 (sub_18004D7C8.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18005C924(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int128 v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]

  sub_18003BE7C(a1);
  v4 = *sub_180016050(a1, &v9);
  if ( v10 )
    sub_18001060C(v10);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180011D64(a1 + 8, &v9);
    v5 = sub_18001B1F8(552LL);
    v6 = v5;
    if ( v5 )
    {
      *(_OWORD *)v5 = 0LL;
      *(_DWORD *)(v5 + 8) = 1;
      *(_DWORD *)(v5 + 12) = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj2<Spectre::Engine::LightProbe>::`vftable';
      sub_18004D7C8();
    }
    else
    {
      v6 = 0LL;
    }
    v8 = 0LL;
    sub_180012310(&v8, v6 + 16, v6);
    if ( v10 )
      sub_18001060C(v10);
    unknown_libname_81(&v9, &v8);
    sub_180039518(a1, &v9);
    if ( v10 )
      sub_18001060C(v10);
    *(_OWORD *)a2 = v8;
  }
  return a2;
}
