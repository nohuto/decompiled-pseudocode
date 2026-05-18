/*
 * XREFs of sub_1800B854C @ 0x1800B854C
 * Callers:
 *     sub_1800B698C @ 0x1800B698C (sub_1800B698C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800B7E98 @ 0x1800B7E98 (sub_1800B7E98.c)
 */

_QWORD *__fastcall sub_1800B854C(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rcx

  v8 = sub_18001B1F8(1664LL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::RenderOutputD3D11Xaml>::`vftable';
    sub_1800B7E98(v8 + 16, a2, a3, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = v9 + 16;
  *a1 = v9 + 16;
  a1[1] = v9;
  if ( v9 != -16 )
  {
    v11 = *(_QWORD *)(v9 + 88);
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
      *(_QWORD *)(v10 + 64) = v13;
      v15 = *(volatile signed __int32 **)(v10 + 72);
      *(_QWORD *)(v10 + 72) = v14;
      if ( v15 )
        sub_180010644(v15);
      if ( v12 )
        sub_18001060C(v12);
    }
  }
  return a1;
}
