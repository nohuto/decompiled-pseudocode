/*
 * XREFs of sub_180047DDC @ 0x180047DDC
 * Callers:
 *     sub_180014160 @ 0x180014160 (sub_180014160.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 */

void **__fastcall sub_180047DDC(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::MeshInstance::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 160);
  if ( v2 )
    sub_180010644(v2);
  v3 = *(volatile signed __int32 **)(a1 + 144);
  if ( v3 )
    sub_180010644(v3);
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    sub_180047740(v4, *(_QWORD *)(a1 + 112));
    sub_180010234(*(void **)(a1 + 104), 8 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 3));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    sub_18001060C(v5);
  return sub_180040504((_QWORD *)a1);
}
