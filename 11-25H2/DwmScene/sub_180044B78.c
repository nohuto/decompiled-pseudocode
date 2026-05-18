/*
 * XREFs of sub_180044B78 @ 0x180044B78
 * Callers:
 *     sub_180044514 @ 0x180044514 (sub_180044514.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180044A9C @ 0x180044A9C (sub_180044A9C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180044B78(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx

  v4 = sub_18001B098(168LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::VertexBuffer>::`vftable';
    sub_180044A9C(v4 + 16, a2);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 + 16;
  *a1 = v5 + 16;
  a1[1] = v5;
  if ( v5 != -16 )
  {
    v7 = *(_QWORD *)(v5 + 120);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v8 = a1[1];
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 )
      {
        v9 = v6;
        v10 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
      }
      *(_QWORD *)(v6 + 96) = v9;
      v11 = *(volatile signed __int32 **)(v6 + 104);
      *(_QWORD *)(v6 + 104) = v10;
      if ( v11 )
        sub_180010544(v11);
      if ( v8 )
        sub_18001050C(v8);
    }
  }
  return a1;
}
