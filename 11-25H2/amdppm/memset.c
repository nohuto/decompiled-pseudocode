/*
 * XREFs of memset @ 0x14000DAC0
 * Callers:
 *     PepParkMask @ 0x140003080 (PepParkMask.c)
 *     memcpy_s @ 0x140003FE8 (memcpy_s.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x140004BD0 (ProcLibTraceRegisterGroupEvents.c)
 *     GetProcessorStatusInfo @ 0x1400068A0 (GetProcessorStatusInfo.c)
 *     PepParkPreference @ 0x14000CA80 (PepParkPreference.c)
 *     memset$thunk$772440563353939046 @ 0x14000E020 (memset$thunk$772440563353939046.c)
 *     InitCoreProcessorSetAffinity @ 0x1400220D4 (InitCoreProcessorSetAffinity.c)
 *     GetRegistryDwordValueNoDefault @ 0x140023238 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1400232B8 (GetRegistryQwordValue.c)
 *     WppTraceCallback @ 0x140023EB0 (WppTraceCallback.c)
 *     RegisterHvPepContext @ 0x1400268B4 (RegisterHvPepContext.c)
 *     AcquirePccInterface @ 0x140026A6C (AcquirePccInterface.c)
 *     RegisterWmi @ 0x140026F78 (RegisterWmi.c)
 *     ProcLibDeviceCreate @ 0x14002D9E8 (ProcLibDeviceCreate.c)
 *     ValidateCoordinatedDependencyOptions @ 0x14002FA94 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1400300B0 (ValidateCoordinatedState.c)
 *     DeregisterKernelIdleDomains @ 0x140031BE8 (DeregisterKernelIdleDomains.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 *     RegisterKernelPlatformStates @ 0x140035E64 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x140036420 (UpdateKernelPlatformStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x140037DC8 (PepNotifyQueryCoordinatedStates.c)
 *     HwDebugCreateRegisterGroup @ 0x140038C64 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x140039234 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x140039610 (HwDebugInitializeRegistryDebugRegister.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14003A520 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RegisterPepDevice @ 0x14003BE8C (RegisterPepDevice.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003C88C (LpiTranslateCoordinatedIdleStates.c)
 *     EmiProcessIoctl @ 0x14003CDD0 (EmiProcessIoctl.c)
 *     RegisterKernelIdleDomains @ 0x140040420 (RegisterKernelIdleDomains.c)
 *     EvtDriverDeviceAdd @ 0x140040BE0 (EvtDriverDeviceAdd.c)
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1400442A8 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x140044408 (ReadEnergyEquation.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
