/*
 * XREFs of ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAULegacyInputInfo@@@Z @ 0x180032074
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x180031CE0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x180032310 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     QuaternionToEulerAngles @ 0x1800323F0 (QuaternionToEulerAngles.c)
 */

__int64 __fastcall MPCInputInfoHelper::PopulateAugmentedInput(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7)
{
  int v9; // edi
  __int128 v10; // xmm1
  float v12; // [rsp+30h] [rbp-18h] BYREF
  float v13; // [rsp+34h] [rbp-14h] BYREF
  _DWORD v14[4]; // [rsp+38h] [rbp-10h] BYREF

  v9 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a1, 0LL, 0x2000LL, a2, a7);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a7 + 2268) = a3;
    *(_BYTE *)(a7 + 2336) = 1;
    *(_OWORD *)(a7 + 2340) = *(_OWORD *)a5;
    *(_OWORD *)(a7 + 2356) = *(_OWORD *)(a5 + 16);
    *(_OWORD *)(a7 + 2372) = *(_OWORD *)(a5 + 32);
    *(_OWORD *)(a7 + 2388) = *(_OWORD *)(a5 + 48);
    *(_OWORD *)(a7 + 2404) = *(_OWORD *)(a5 + 64);
    *(_OWORD *)(a7 + 2420) = *(_OWORD *)(a5 + 80);
    *(_OWORD *)(a7 + 2436) = *(_OWORD *)(a5 + 96);
    *(_OWORD *)(a7 + 2452) = *(_OWORD *)(a5 + 112);
    *(_OWORD *)(a7 + 2468) = *(_OWORD *)(a5 + 128);
    *(_OWORD *)(a7 + 2484) = *(_OWORD *)(a5 + 144);
    *(_OWORD *)(a7 + 2272) = *a6;
    *(_OWORD *)(a7 + 2288) = a6[1];
    *(_OWORD *)(a7 + 2304) = a6[2];
    v10 = a6[3];
    *(_BYTE *)(a7 + 2256) = a4;
    *(_OWORD *)(a7 + 2320) = v10;
    if ( *(_BYTE *)(a5 + 120) )
    {
      v12 = 0.0;
      v13 = 0.0;
      v14[0] = 0;
      if ( (int)QuaternionToEulerAngles(a5 + 104, &v12, &v13, v14) >= 0 )
      {
        *(float *)(a7 + 2264) = 180.0 - (float)(v12 * 57.295776);
        *(float *)(a7 + 2260) = v13 * 57.295776;
      }
    }
    *(_QWORD *)(a7 + 16) = *((_QWORD *)a6 + 2);
  }
  return (unsigned int)v9;
}
