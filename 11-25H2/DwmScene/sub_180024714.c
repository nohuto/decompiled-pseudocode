/*
 * XREFs of sub_180024714 @ 0x180024714
 * Callers:
 *     sub_180017960 @ 0x180017960 (sub_180017960.c)
 *     sub_180024A60 @ 0x180024A60 (sub_180024A60.c)
 *     sub_1800B8700 @ 0x1800B8700 (sub_1800B8700.c)
 *     sub_1800D8CEF @ 0x1800D8CEF (sub_1800D8CEF.c)
 *     sub_1800E1BD4 @ 0x1800E1BD4 (sub_1800E1BD4.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_1800172FC @ 0x1800172FC (sub_1800172FC.c)
 *     sub_1800237E4 @ 0x1800237E4 (sub_1800237E4.c)
 *     sub_1800245D0 @ 0x1800245D0 (sub_1800245D0.c)
 *     sub_180024650 @ 0x180024650 (sub_180024650.c)
 *     sub_1800246E0 @ 0x1800246E0 (sub_1800246E0.c)
 *     sub_1800248C0 @ 0x1800248C0 (sub_1800248C0.c)
 *     sub_180025A88 @ 0x180025A88 (sub_180025A88.c)
 *     sub_18006985C @ 0x18006985C (sub_18006985C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180024714(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  volatile signed __int32 *v8; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  sub_180025A88();
  sub_1800246E0(a1 + 3760);
  sub_1800245D0((_QWORD *)(a1 + 3656));
  v2 = *(_QWORD *)(a1 + 3520);
  if ( v2 )
  {
    sub_1800237E4(v2, *(_QWORD *)(a1 + 3528));
    sub_180010134(*(void **)(a1 + 3520), (*(_QWORD *)(a1 + 3536) - *(_QWORD *)(a1 + 3520)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 3520) = 0LL;
    *(_QWORD *)(a1 + 3528) = 0LL;
    *(_QWORD *)(a1 + 3536) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 3512);
  if ( v3 )
    sub_18001050C(v3);
  sub_18000B2D4(a1 + 944, 40LL, 64LL, (void (__fastcall *)(__int64))sub_1800245C0);
  sub_18006985C(a1 + 816);
  sub_18006985C(a1 + 688);
  sub_18006985C(a1 + 560);
  v4 = *(_QWORD *)(a1 + 552);
  if ( v4 )
    sub_18001050C(v4);
  sub_1800248C0(a1 + 496);
  sub_1800172FC(a1 + 288);
  v5 = *(_QWORD *)(a1 + 280);
  if ( v5 )
    sub_18001050C(v5);
  v6 = *(_QWORD *)(a1 + 248);
  if ( v6 )
  {
    sub_180012040(v6, *(_QWORD *)(a1 + 256));
    sub_180010134(*(void **)(a1 + 248), (*(_QWORD *)(a1 + 264) - *(_QWORD *)(a1 + 248)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  sub_180013128(a1 + 208);
  sub_180013128(a1 + 176);
  sub_180013128(a1 + 144);
  sub_180013128(a1 + 112);
  sub_180013128(a1 + 80);
  result = sub_180024650(a1 + 24);
  v8 = *(volatile signed __int32 **)(a1 + 16);
  if ( v8 )
    return sub_180010544(v8);
  return result;
}
