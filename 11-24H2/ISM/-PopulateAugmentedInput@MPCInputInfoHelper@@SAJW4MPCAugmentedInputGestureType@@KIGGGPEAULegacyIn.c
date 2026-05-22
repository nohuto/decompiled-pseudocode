/*
 * XREFs of ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyInputInfo@@@Z @ 0x1800CEB18
 * Callers:
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x1800D39B0 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800D3B10 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800328D0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 */

__int64 __fastcall MPCInputInfoHelper::PopulateAugmentedInput(
        int a1,
        int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        __int16 a6,
        __int64 a7)
{
  int v9; // edi
  char v10; // dl
  float v11; // xmm0_4

  v9 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a1, 0, 1024, a2, a7);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a7 + 2268) = a3;
    *(_BYTE *)(a7 + 2336) = 0;
    memset_0((void *)(a7 + 2272), 0, 0x40uLL);
    v10 = *(_BYTE *)(a7 + 2256);
    *(_DWORD *)(a7 + 2276) = 8;
    *(_BYTE *)(a7 + 2323) = 1;
    *(_DWORD *)(a7 + 2280) = v10 != 0 ? 8 : 0;
    if ( v10 )
      v11 = FLOAT_1_0;
    else
      v11 = 0.0;
    *(_WORD *)(a7 + 2318) = a5;
    *(_WORD *)(a7 + 2320) = a6;
    *(float *)(a7 + 2312) = v11;
    *(_WORD *)(a7 + 2316) = a4;
    memset_0((void *)(a7 + 2340), 0, 0xA0uLL);
  }
  return (unsigned int)v9;
}
