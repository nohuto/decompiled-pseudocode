/*
 * XREFs of sub_18005A7CC @ 0x18005A7CC
 * Callers:
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180059E8C @ 0x180059E8C (sub_180059E8C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005A7CC(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rcx

  v2 = sub_18001B098(672LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPipeline>::`vftable';
    sub_180059E8C();
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (_QWORD *)(v3 + 16);
  *a1 = v3 + 16;
  a1[1] = v3;
  if ( v3 != -16 )
  {
    v5 = *(_QWORD *)(v3 + 24);
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
      *v4 = v7;
      v9 = (volatile signed __int32 *)v4[1];
      v4[1] = v8;
      if ( v9 )
        sub_180010544(v9);
      if ( v6 )
        sub_18001050C(v6);
    }
  }
  return a1;
}
