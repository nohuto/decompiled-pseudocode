/*
 * XREFs of sub_180088F00 @ 0x180088F00
 * Callers:
 *     sub_1800891E0 @ 0x1800891E0 (sub_1800891E0.c)
 *     sub_18008B630 @ 0x18008B630 (sub_18008B630.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180088FE4 @ 0x180088FE4 (sub_180088FE4.c)
 *     sub_180088FF0 @ 0x180088FF0 (sub_180088FF0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180088F00(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v4 = sub_18001B098(400LL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBlur>::`vftable';
    sub_180088FE4(v4 + 16);
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
    sub_180088FF0(v6, v7, &v9);
  else
    sub_180010AE8(v6, &v9);
  if ( v10 )
    sub_18001050C(v10);
  return a2;
}
