/*
 * XREFs of _lambda_564e04663bfb39eeb8d956f83a4cff77_::operator() @ 0x180050C80
 * Callers:
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180089E24 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180050D34 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 */

bool __fastcall lambda_564e04663bfb39eeb8d956f83a4cff77_::operator()(__int64 a1)
{
  char v2; // bl
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int128 v8; // [rsp+50h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(__int64 **)(a1 + 16);
  v4 = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
  v5 = *v3;
  v6 = **(unsigned int **)(a1 + 8);
  v8 = *(_OWORD *)*(_QWORD *)(a1 + 24);
  if ( (int)EffectPack::GetSharedModeEnginePeriodicity(v4, v6, v5, &v8) >= 0 )
    return **(_QWORD **)(a1 + 32) < (__int64)(unsigned int)(int)((double)0
                                                               * 10000000.0
                                                               / (double)*(int *)(**(_QWORD **)(a1 + 16) + 4LL)
                                                               + 0.5);
  return v2;
}
