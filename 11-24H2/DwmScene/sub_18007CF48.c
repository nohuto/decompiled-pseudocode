/*
 * XREFs of sub_18007CF48 @ 0x18007CF48
 * Callers:
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180031794 @ 0x180031794 (sub_180031794.c)
 *     sub_18007D06C @ 0x18007D06C (sub_18007D06C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_18007CF48(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int128 v10; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-18h] BYREF

  v4 = sub_18001B1F8(192LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::VertexLayout>::`vftable';
    sub_18007D06C(v4 + 16);
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5 + 16;
  a2[1] = v5;
  sub_18002867C(a1 + 808, (__int64)v11);
  v6 = (__int64 *)(a1 + 864);
  v10 = 0LL;
  v7 = a2[1];
  if ( v7 )
  {
    *(_QWORD *)&v10 = *a2;
    *((_QWORD *)&v10 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  }
  v8 = *(_QWORD *)(a1 + 872);
  if ( v8 == *(_QWORD *)(a1 + 880) )
    sub_180010C10(v6, v8, (__int64)&v10);
  else
    sub_180010BE8((__int64)v6, &v10);
  if ( *((_QWORD *)&v10 + 1) )
    sub_180010644(*((volatile signed __int32 **)&v10 + 1));
  sub_180011044((__int64)v11);
  sub_180031794(a1, *a2, 1);
  return a2;
}
