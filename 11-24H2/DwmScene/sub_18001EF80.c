/*
 * XREFs of sub_18001EF80 @ 0x18001EF80
 * Callers:
 *     sub_1800152E8 @ 0x1800152E8 (sub_1800152E8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001E9F8 @ 0x18001E9F8 (sub_18001E9F8.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18001EF80(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v2 = sub_18001B1F8(24LL);
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::ETWTraceProvider>::`vftable';
    *(_QWORD *)(v2 + 16) = &Spectre::Utils::ETWTraceProvider::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  v11 = v3 + 16;
  v12 = v3;
  v4 = sub_18001B1F8(24LL);
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Utils::DefaultTimeProvider>::`vftable';
    *(_QWORD *)(v4 + 16) = &Spectre::Utils::DefaultTimeProvider::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v13 = v5 + 16;
  v14 = v5;
  v6 = sub_18001B1F8(24LL);
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Utils::DefaultMemoryStatsProvider>::`vftable';
    *(_QWORD *)(v6 + 16) = &Spectre::Utils::DefaultMemoryStatsProvider::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v15 = v7 + 16;
  v16 = v7;
  v8 = sub_18001B1F8(64LL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Utils::PerformanceLogger>::`vftable';
    sub_18001E9F8(v8 + 16, &v11, &v13, &v15);
    v3 = v12;
    v5 = v14;
    v7 = v16;
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 16;
  a1[1] = v9;
  if ( v7 )
    sub_18001060C(v7);
  if ( v5 )
    sub_18001060C(v5);
  if ( v3 )
    sub_18001060C(v3);
  return a1;
}
