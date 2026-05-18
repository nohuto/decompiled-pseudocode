/*
 * XREFs of sub_1800BB770 @ 0x1800BB770
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800B7AE4 @ 0x1800B7AE4 (sub_1800B7AE4.c)
 */

_QWORD *__fastcall sub_1800BB770(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  v3 = sub_18001B1F8(176LL);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    *(_DWORD *)(v3 + 12) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::CommandListD3D11>::`vftable';
    sub_1800B7AE4(v3 + 16);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 == -16 )
  {
    v5 = 0LL;
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v5 = v4;
  }
  a2[1] = v5;
  *a2 = v4 + 16;
  if ( v4 )
    sub_18001060C(v4);
  return a2;
}
