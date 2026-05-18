/*
 * XREFs of sub_180040D30 @ 0x180040D30
 * Callers:
 *     sub_180040998 @ 0x180040998 (sub_180040998.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180040A88 @ 0x180040A88 (sub_180040A88.c)
 */

_QWORD *__fastcall sub_180040D30(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rcx

  v2 = sub_18001B1F8(160LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::RenderState>::`vftable';
    sub_180040A88();
  }
  else
  {
    v3 = 0LL;
  }
  v4 = v3 + 16;
  *a1 = v3 + 16;
  a1[1] = v3;
  if ( v3 != -16 )
  {
    v5 = *(_QWORD *)(v3 + 120);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v6 = a1[1];
      v7 = 0LL;
      v8 = 0LL;
      if ( v6 )
      {
        v7 = v4;
        v8 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
      }
      *(_QWORD *)(v4 + 96) = v7;
      v9 = *(volatile signed __int32 **)(v4 + 104);
      *(_QWORD *)(v4 + 104) = v8;
      if ( v9 )
        sub_180010644(v9);
      if ( v6 )
        sub_18001060C(v6);
    }
  }
  return a1;
}
