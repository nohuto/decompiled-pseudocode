/*
 * XREFs of sub_180024874 @ 0x180024874
 * Callers:
 *     sub_180017A20 @ 0x180017A20 (sub_180017A20.c)
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 *     sub_1800B8860 @ 0x1800B8860 (sub_1800B8860.c)
 *     sub_1800D8E4F @ 0x1800D8E4F (sub_1800D8E4F.c)
 *     sub_1800E1D34 @ 0x1800E1D34 (sub_1800E1D34.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_1800173FC @ 0x1800173FC (sub_1800173FC.c)
 *     sub_180023944 @ 0x180023944 (sub_180023944.c)
 *     sub_180024730 @ 0x180024730 (sub_180024730.c)
 *     sub_1800247B0 @ 0x1800247B0 (sub_1800247B0.c)
 *     sub_180024840 @ 0x180024840 (sub_180024840.c)
 *     sub_180024A20 @ 0x180024A20 (sub_180024A20.c)
 *     sub_180025BE8 @ 0x180025BE8 (sub_180025BE8.c)
 *     sub_1800699BC @ 0x1800699BC (sub_1800699BC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180024874(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  volatile signed __int32 *v8; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  sub_180025BE8();
  sub_180024840(a1 + 3760);
  sub_180024730((_QWORD *)(a1 + 3656));
  v2 = *(_QWORD *)(a1 + 3520);
  if ( v2 )
  {
    sub_180023944(v2, *(_QWORD *)(a1 + 3528));
    sub_180010234(*(void **)(a1 + 3520), (*(_QWORD *)(a1 + 3536) - *(_QWORD *)(a1 + 3520)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 3520) = 0LL;
    *(_QWORD *)(a1 + 3528) = 0LL;
    *(_QWORD *)(a1 + 3536) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 3512);
  if ( v3 )
    sub_18001060C(v3);
  sub_18000B6A4(a1 + 944, 40LL, 64LL, (void (__fastcall *)(__int64))sub_180024720);
  sub_1800699BC(a1 + 816);
  sub_1800699BC(a1 + 688);
  sub_1800699BC(a1 + 560);
  v4 = *(_QWORD *)(a1 + 552);
  if ( v4 )
    sub_18001060C(v4);
  sub_180024A20(a1 + 496);
  sub_1800173FC(a1 + 288);
  v5 = *(_QWORD *)(a1 + 280);
  if ( v5 )
    sub_18001060C(v5);
  v6 = *(_QWORD *)(a1 + 248);
  if ( v6 )
  {
    sub_180012140(v6, *(_QWORD *)(a1 + 256));
    sub_180010234(*(void **)(a1 + 248), (*(_QWORD *)(a1 + 264) - *(_QWORD *)(a1 + 248)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  sub_180013228(a1 + 208);
  sub_180013228(a1 + 176);
  sub_180013228(a1 + 144);
  sub_180013228(a1 + 112);
  sub_180013228(a1 + 80);
  result = sub_1800247B0(a1 + 24);
  v8 = *(volatile signed __int32 **)(a1 + 16);
  if ( v8 )
    return sub_180010644(v8);
  return result;
}
