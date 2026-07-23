/*
 * XREFs of HalpInterruptInitSystem @ 0x140B4F310
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x140373A20 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpInterruptEnableNmi @ 0x14049E4CC (HalpInterruptEnableNmi.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053F11C (HalpInterruptBuildGlobalStartupStub.c)
 *     Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline @ 0x14053F994 (Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpInitializeInterruptsBspLate @ 0x14053FA00 (HalpInitializeInterruptsBspLate.c)
 *     HalpInitializeInterruptsPn @ 0x14053FAC8 (HalpInitializeInterruptsPn.c)
 *     HalpInterruptInitializeGlobals @ 0x14053FDC8 (HalpInterruptInitializeGlobals.c)
 *     HalpInterruptInitPowerManagement @ 0x140553CF8 (HalpInterruptInitPowerManagement.c)
 *     HalpInterruptAllocateCacheDomainTable @ 0x14055691C (HalpInterruptAllocateCacheDomainTable.c)
 *     HalpInterruptInitDiscard @ 0x140C11AB4 (HalpInterruptInitDiscard.c)
 *     HalpPreAllocateKInterrupts @ 0x140C150AC (HalpPreAllocateKInterrupts.c)
 */

__int64 __fastcall HalpInterruptInitSystem(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  v4 = 0;
  if ( (int)a1 <= 16 )
  {
    if ( (_DWORD)a1 == 16 )
    {
      HalpInterruptRegistrationAllowed = 0;
    }
    else if ( (_DWORD)a1 )
    {
      switch ( (_DWORD)a1 )
      {
        case 4:
          HalpInitializeInterruptsPn(a1, a2, a3, a4);
          break;
        case 7:
          HalpInterruptInitializeGlobals();
          break;
        case 9:
          HalpInterruptInitDiscard(a3);
          break;
        case 0xB:
          _enable();
          break;
      }
    }
    else
    {
      off_140E009D0[0] = (__int64 (__fastcall *)())HaliAddInterruptRemapping;
      off_140E009D8[0] = (__int64 (__fastcall *)())HaliRemoveInterruptRemapping;
      off_140E00A08[0] = (__int64 (__fastcall *)())HalpInterruptGetIdentifiers;
      off_140E00A48[0] = (__int64 (__fastcall *)())xHalQueryProcessorRestartEntryPoint;
      off_140E00AA8[0] = (__int64 (__fastcall *)())HalpInterruptSetDestination;
      off_140E00B78[0] = (__int64 (__fastcall *)())HalpConnectThermalInterrupt;
      off_140E00BB8[0] = (__int64 (__fastcall *)())HalpPreprocessNmi;
    }
    return v4;
  }
  if ( (_DWORD)a1 != 17 )
  {
    if ( (_DWORD)a1 != 19 )
    {
      if ( (_DWORD)a1 == 21 )
      {
        if ( HalpInterruptLastProblem && HalpInterruptLastProblem != 14 )
          KeBugCheckEx(
            0x5Cu,
            0x203uLL,
            *(int *)(HalpInterruptController + 240),
            HalpInterruptController,
            HalpInterruptLastProblem);
      }
      else if ( (_DWORD)a1 == 29 )
      {
        return (unsigned int)HalpInterruptInitPowerManagement();
      }
      return v4;
    }
LABEL_25:
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpInterruptEnableNmi();
    if ( (HalpFeatureBits & 1) != 0 )
      HalpInterruptEnablePerformanceEvents(0LL, v7, v8);
    return v4;
  }
  HalpPreAllocateKInterrupts();
  HalpInitializeInterruptsBspLate(v5);
  if ( (unsigned int)Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline() )
    HalpInterruptAllocateCacheDomainTable();
  result = HalpInterruptBuildGlobalStartupStub();
  v4 = result;
  if ( (int)result >= 0 )
    goto LABEL_25;
  return result;
}
