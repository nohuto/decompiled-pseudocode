/*
 * XREFs of sub_18004F290 @ 0x18004F290
 * Callers:
 *     sub_180015880 @ 0x180015880 (sub_180015880.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001E6D4 @ 0x18001E6D4 (sub_18001E6D4.c)
 *     sub_1800240E4 @ 0x1800240E4 (sub_1800240E4.c)
 *     sub_18004F9B0 @ 0x18004F9B0 (sub_18004F9B0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004F290(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = *a3;
  v7[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_1800240E4(a1, a2, v7);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  *(_DWORD *)(a1 + 244) = 0;
  sub_18001E6D4(a1 + 112, L"RenderDeviceGeneric", 0x13uLL);
  sub_18001E6D4(a1 + 80, L"Universal", 9uLL);
  sub_18004F9B0(a1);
  v5 = a3[1];
  if ( v5 )
    sub_18001060C(v5);
  return a1;
}
