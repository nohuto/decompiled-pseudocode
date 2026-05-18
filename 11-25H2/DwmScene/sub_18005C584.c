/*
 * XREFs of sub_18005C584 @ 0x18005C584
 * Callers:
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012210 @ 0x180012210 (sub_180012210.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_1800393B8 @ 0x1800393B8 (sub_1800393B8.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 *     sub_18005D33C @ 0x18005D33C (sub_18005D33C.c)
 *     sub_18005DA3C @ 0x18005DA3C (sub_18005DA3C.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18005C584(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]

  sub_18003BD1C(a1);
  v4 = *(_QWORD *)sub_18005D33C(a1, &v10);
  if ( v11 )
    sub_18001050C(v11);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = sub_180011C64(a1 + 8, &v10);
    v6 = sub_18001B098(184LL);
    v7 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 8) = 1;
      *(_DWORD *)(v6 + 12) = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::Aimer>::`vftable';
      sub_18005DA3C(v6 + 16, v5);
    }
    else
    {
      v7 = 0LL;
    }
    v9 = 0LL;
    sub_180012210(&v9, v7 + 16, v7);
    if ( v11 )
      sub_18001050C(v11);
    unknown_libname_81(&v10, &v9);
    sub_1800393B8(a1, &v10);
    if ( v11 )
      sub_18001050C(v11);
    *(_OWORD *)a2 = v9;
  }
  return a2;
}
