/*
 * XREFs of ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800328D0
 * Callers:
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAULegacyInputInfo@@@Z @ 0x180032634 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     ?SendHeadReport@SpatialRimDeviceCollection@@UEAAJKAEBUHeadInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x1800327B0 (-SendHeadReport@SpatialRimDeviceCollection@@UEAAJKAEBUHeadInputDataMsg@Internal@Spatial@Input@UI.c)
 *     _lambda_e9c1fc9d7cbe0868cf685a076fd687ae_::operator() @ 0x1800B9A00 (_lambda_e9c1fc9d7cbe0868cf685a076fd687ae_--operator().c)
 *     ?PopulateDetectedOrLostReport@MPCHandProcessor@@MEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1800C0740 (-PopulateDetectedOrLostReport@MPCHandProcessor@@MEAAX_NIAEAULegacyInputInfo@@@Z.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyInputInfo@@@Z @ 0x1800CEB18 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAULegacyIn.c)
 *     ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800D0900 (-OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@W.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x1800D0A40 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D2534 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?SendEyeGazeReport@SpatialRimDeviceCollection@@UEAAJKAEBUEyeGazeInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x1800D8340 (-SendEyeGazeReport@SpatialRimDeviceCollection@@UEAAJKAEBUEyeGazeInputDataMsg@Internal@Spatial@In.c)
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@_J4444_N@Z @ 0x1800D8490 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureTy.c)
 *     ?PopulateDetectedOrLostReport@MPCSixDofProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1801BC7C0 (-PopulateDetectedOrLostReport@MPCSixDofProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BFF00 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PopulateDetectedOrLostReport@MPCClickerProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1801C4900 (-PopulateDetectedOrLostReport@MPCClickerProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputInfoHelper::PopulateGenericMPCInputInfo(int a1, int a2, int a3, int a4, __int64 a5)
{
  DWORD TickCount; // eax
  signed __int32 v10; // eax
  __int64 result; // rax
  LARGE_INTEGER v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v12[0].QuadPart = 0LL;
  QueryPerformanceCounter(v12);
  *(_DWORD *)a5 = a3;
  *(_DWORD *)(a5 + 4) = a4;
  TickCount = GetTickCount();
  *(_QWORD *)(a5 + 904) = 0LL;
  *(_QWORD *)(a5 + 912) = 0LL;
  *(_QWORD *)(a5 + 920) = 0LL;
  *(_DWORD *)(a5 + 8) = TickCount;
  *(LARGE_INTEGER *)(a5 + 16) = v12[0];
  *(_BYTE *)(a5 + 928) = 0;
  v10 = _InterlockedExchangeAdd(&MPCInputInfoHelper::m_curInputId, 1u);
  *(_DWORD *)(a5 + 272) = 0;
  *(_DWORD *)(a5 + 72) = v10;
  *(_DWORD *)(a5 + 80) = *(_DWORD *)(a5 + 4);
  result = 0LL;
  *(_DWORD *)(a5 + 64) = a2;
  *(_DWORD *)(a5 + 68) = a1;
  *(_BYTE *)(a5 + 48) = 1;
  *(_BYTE *)(a5 + 312) = 0;
  *(_BYTE *)(a5 + 240) = 0;
  return result;
}
