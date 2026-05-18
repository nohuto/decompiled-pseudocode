/*
 * XREFs of sub_18004B0E8 @ 0x18004B0E8
 * Callers:
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18004A288 @ 0x18004A288 (sub_18004A288.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004B0E8(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rcx

  v8 = sub_18001B1F8(576LL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::ShaderFamily>::`vftable';
    sub_18004A288(v8 + 16, a2, a3, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (_QWORD *)(v9 + 16);
  *a1 = v9 + 16;
  a1[1] = v9;
  if ( v9 != -16 )
  {
    v11 = *(_QWORD *)(v9 + 24);
    if ( !v11 || !*(_DWORD *)(v11 + 8) )
    {
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v12 = a1[1];
      v13 = 0LL;
      v14 = 0LL;
      if ( v12 )
      {
        v13 = v10;
        v14 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
      }
      *v10 = v13;
      v15 = (volatile signed __int32 *)v10[1];
      v10[1] = v14;
      if ( v15 )
        sub_180010644(v15);
      if ( v12 )
        sub_18001060C(v12);
    }
  }
  return a1;
}
