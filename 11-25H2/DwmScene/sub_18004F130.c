/*
 * XREFs of sub_18004F130 @ 0x18004F130
 * Callers:
 *     sub_180015780 @ 0x180015780 (sub_180015780.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001E574 @ 0x18001E574 (sub_18001E574.c)
 *     sub_180023F84 @ 0x180023F84 (sub_180023F84.c)
 *     sub_18004F850 @ 0x18004F850 (sub_18004F850.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004F130(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = *a3;
  v7[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180023F84(a1, a2, v7);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  *(_DWORD *)(a1 + 244) = 0;
  sub_18001E574(a1 + 112, L"RenderDeviceGeneric", 0x13uLL);
  sub_18001E574(a1 + 80, L"Universal", 9uLL);
  sub_18004F850(a1);
  v5 = a3[1];
  if ( v5 )
    sub_18001050C(v5);
  return a1;
}
