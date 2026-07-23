/*
 * XREFs of HalpShutdown @ 0x14054263C
 * Callers:
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 *     HaliHaltSystem @ 0x140542250 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x1405422F0 (HalpCheckPowerButton.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14040FFF0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140411C50 (HalpAcpiPmRegisterRead.c)
 *     HalpHvEnterSleepState @ 0x140548F7C (HalpHvEnterSleepState.c)
 *     HalEfiResetSystem @ 0x140549F78 (HalEfiResetSystem.c)
 *     VslTerminateSecureServices @ 0x14058B95C (VslTerminateSecureServices.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpShutdown(__int64 a1, __int64 a2)
{
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int16 v5; // [rsp+60h] [rbp+30h] BYREF
  __int16 v6; // [rsp+68h] [rbp+38h] BYREF
  __int16 v7; // [rsp+70h] [rbp+40h] BYREF

  v7 = 0;
  v5 = 0;
  v6 = 0;
  if ( _InterlockedCompareExchange(&HalpShutdownActive, 1, 0) )
  {
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x20000u);
    while ( 1 )
      ;
  }
  guard_dispatch_icall_no_overrides(0LL, a2);
  result = VslTerminateSecureServices();
  if ( PmRegisters[0] )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v7, 2u, 0LL);
    v6 = v7;
    if ( byte_140F8F310 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v7, 2u, 0LL);
      v6 |= v7;
    }
    result = HalpAcpiPmRegisterWrite(0, 0, (unsigned __int8 *)&v6, 2u, 0LL);
    if ( byte_140F8F310 )
      result = HalpAcpiPmRegisterWrite(3, 0, (unsigned __int8 *)&v6, 2u, 0LL);
  }
  if ( HalpShutdownContext && byte_140F8F2B0 )
  {
    if ( HalpHvSleepEnlightenedCpuManager )
      HalpHvEnterSleepState(5LL);
    HalpAcpiPmRegisterRead(1, 0, (__int64)&v5, 2u, 0LL);
    v5 = v5 & 0x203 | ((HalpShutdownContext & 7 | 8) << 10);
    result = HalpAcpiPmRegisterWrite(1, 0, (unsigned __int8 *)&v5, 2u, 0LL);
    if ( byte_140F8F340 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)&v5, 2u, 0LL);
      v5 = v5 & 0x203 | ((((unsigned int)HalpShutdownContext >> 4) & 7 | 8) << 10);
      result = HalpAcpiPmRegisterWrite(4, 0, (unsigned __int8 *)&v5, 2u, 0LL);
    }
  }
  if ( HalFirmwareTypeEfi )
    return HalEfiResetSystem(2LL, v4);
  return result;
}
