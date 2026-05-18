/*
 * XREFs of sub_180013CEC @ 0x180013CEC
 * Callers:
 *     sub_18001419C @ 0x18001419C (sub_18001419C.c)
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     sub_18008D330 @ 0x18008D330 (sub_18008D330.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012310 @ 0x180012310 (sub_180012310.c)
 *     sub_180013ED4 @ 0x180013ED4 (sub_180013ED4.c)
 *     sub_180013FD0 @ 0x180013FD0 (sub_180013FD0.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180039518 @ 0x180039518 (sub_180039518.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180013CEC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]

  sub_18003BE7C();
  v4 = *(_QWORD *)sub_180013ED4(a1, &v10);
  if ( v11 )
    sub_18001060C(v11);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = sub_180011D64(a1 + 8, &v10);
    v6 = sub_18001B1F8(208LL);
    v7 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 8) = 1;
      *(_DWORD *)(v6 + 12) = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance>::`vftable';
      sub_180013FD0(v6 + 16, v5);
    }
    else
    {
      v7 = 0LL;
    }
    v9 = 0LL;
    sub_180012310(&v9, v7 + 16, v7);
    if ( v11 )
      sub_18001060C(v11);
    unknown_libname_81(&v10, &v9);
    sub_180039518(a1, &v10);
    if ( v11 )
      sub_18001060C(v11);
    *(_OWORD *)a2 = v9;
  }
  return a2;
}
