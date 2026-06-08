/*
 * XREFs of memset @ 0x140010340
 * Callers:
 *     PepParkMask @ 0x1400034E0 (PepParkMask.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x140004084 (ProcLibTraceRegisterGroupEvents.c)
 *     memcpy_s @ 0x1400068B8 (memcpy_s.c)
 *     GetProcessorStatusInfo @ 0x14000C040 (GetProcessorStatusInfo.c)
 *     PepParkPreference @ 0x14000F370 (PepParkPreference.c)
 *     memset$thunk$772440563353939046 @ 0x140011020 (memset$thunk$772440563353939046.c)
 *     AcquirePccInterface @ 0x140027238 (AcquirePccInterface.c)
 *     RegisterWmi @ 0x140027F04 (RegisterWmi.c)
 *     InitEnergyCounters @ 0x14002A400 (InitEnergyCounters.c)
 *     RetrieveModelParameters @ 0x14002A850 (RetrieveModelParameters.c)
 *     GetRegistryQwordValue @ 0x14002C364 (GetRegistryQwordValue.c)
 *     EvtDriverDeviceAdd @ 0x14002C5A0 (EvtDriverDeviceAdd.c)
 *     WppTraceCallback @ 0x14002CAA0 (WppTraceCallback.c)
 *     ValidateCoordinatedDependencyOptions @ 0x14002E260 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x14002E87C (ValidateCoordinatedState.c)
 *     RegisterHvPepContext @ 0x140030D90 (RegisterHvPepContext.c)
 *     ProcLibDeviceCreate @ 0x140034F68 (ProcLibDeviceCreate.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     RegisterKernelPlatformStates @ 0x140038AC4 (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x140039974 (PepNotifyQueryCoordinatedStates.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x14003A650 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003AA2C (HwDebugInitializeRegistryDebugRegister.c)
 *     RegisterPepDevice @ 0x14003C8EC (RegisterPepDevice.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003CE60 (LpiTranslateCoordinatedIdleStates.c)
 *     DeregisterKernelIdleDomains @ 0x14003D960 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x14003E75C (RegisterKernelIdleDomains.c)
 *     UpdateKernelPlatformStates @ 0x14003FD54 (UpdateKernelPlatformStates.c)
 *     EmiProcessIoctl @ 0x140043F70 (EmiProcessIoctl.c)
 *     HwDebugCreateRegisterGroup @ 0x140045E74 (HwDebugCreateRegisterGroup.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x140046278 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPkgIdleStateStats @ 0x140046520 (InitPkgIdleStateStats.c)
 *     GetRegistryDwordValueNoDefault @ 0x140047484 (GetRegistryDwordValueNoDefault.c)
 *     ProcLibGlobalInit @ 0x14004A9C8 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x14004B740 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x14004B8A0 (ReadEnergyEquation.c)
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
