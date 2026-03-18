/*
 * XREFs of HalpInterruptInitSystem @ 0x140B3D2D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140444F88 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptModel @ 0x1404469AC (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053EFEC (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInitializeInterruptsBspLate @ 0x14053F880 (HalpInitializeInterruptsBspLate.c)
 *     HalpInitializeInterruptsPn @ 0x14053F948 (HalpInitializeInterruptsPn.c)
 *     HalpInterruptInitializeGlobals @ 0x14053FC48 (HalpInterruptInitializeGlobals.c)
 *     HalpInterruptInitPowerManagement @ 0x140553AB8 (HalpInterruptInitPowerManagement.c)
 *     HalpInterruptInitDiscard @ 0x140BFEAB4 (HalpInterruptInitDiscard.c)
 *     HalpPreAllocateKInterrupts @ 0x140C0201C (HalpPreAllocateKInterrupts.c)
 */

__int64 __fastcall HalpInterruptInitSystem(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  v4 = 0;
  if ( (int)a1 > 16 )
  {
    switch ( (_DWORD)a1 )
    {
      case 0x11:
        HalpPreAllocateKInterrupts();
        HalpInitializeInterruptsBspLate(v5);
        result = HalpInterruptBuildGlobalStartupStub();
        v4 = result;
        if ( (int)result < 0 )
          return result;
        break;
      case 0x13:
        break;
      case 0x15:
        if ( HalpInterruptLastProblem && HalpInterruptLastProblem != 14 )
          KeBugCheckEx(
            0x5Cu,
            0x203uLL,
            *(int *)(HalpInterruptController + 240),
            HalpInterruptController,
            HalpInterruptLastProblem);
        break;
      case 0x1D:
        return (unsigned int)HalpInterruptInitPowerManagement();
      default:
        return v4;
    }
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpInterruptEnableNmi();
    if ( (HalpFeatureBits & 1) != 0 )
      HalpInterruptEnablePerformanceEvents(0LL, v7, v8);
    return v4;
  }
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
