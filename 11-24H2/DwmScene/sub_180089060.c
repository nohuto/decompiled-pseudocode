/*
 * XREFs of sub_180089060 @ 0x180089060
 * Callers:
 *     sub_180089340 @ 0x180089340 (sub_180089340.c)
 *     sub_18008B790 @ 0x18008B790 (sub_18008B790.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010BE8 @ 0x180010BE8 (sub_180010BE8.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180089144 @ 0x180089144 (sub_180089144.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180089060(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v4 = sub_18001B1F8(400LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBlur>::`vftable';
    sub_180089144(v4 + 16);
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5 + 16;
  a2[1] = v5;
  v6 = a1 + 152;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v9 = *a2;
  v10 = a2[1];
  v7 = *(_QWORD *)(a1 + 160);
  if ( v7 == *(_QWORD *)(a1 + 168) )
    sub_180089150(v6, v7, &v9);
  else
    sub_180010BE8(v6, &v9);
  if ( v10 )
    sub_18001060C(v10);
  return a2;
}
