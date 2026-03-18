/*
 * XREFs of HalpShutdown @ 0x140544D7C
 * Callers:
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     HaliHaltSystem @ 0x140544990 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x140544A30 (HalpCheckPowerButton.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14041C1F0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x14041D360 (HalpAcpiPmRegisterRead.c)
 *     Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledNoReportingNoInline @ 0x1405448DC (Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledNoReportingNoInline.c)
 *     HalpHvEnterSleepState @ 0x14054B6BC (HalpHvEnterSleepState.c)
 *     HalEfiResetSystem @ 0x14054C6B8 (HalEfiResetSystem.c)
 *     VslTerminateSecureServices @ 0x14058E92C (VslTerminateSecureServices.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int16 v7; // [rsp+60h] [rbp+30h] BYREF
  __int16 v8; // [rsp+68h] [rbp+38h] BYREF
  __int16 v9; // [rsp+70h] [rbp+40h] BYREF

  v9 = 0;
  v7 = 0;
  v8 = 0;
  if ( _InterlockedCompareExchange(&HalpShutdownActive, 1, 0) )
  {
    if ( (unsigned int)Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledNoReportingNoInline(
                         a1,
                         a2,
                         a3,
                         a4) )
    {
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x20000u);
    }
    while ( 1 )
      ;
  }
  guard_dispatch_icall_no_overrides(0LL, a2, a3, a4);
  result = VslTerminateSecureServices();
  if ( PmRegisters[0] )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v9, 2u, 0LL);
    v8 = v9;
    if ( byte_140F8F110 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v9, 2u, 0LL);
      v8 |= v9;
    }
    result = HalpAcpiPmRegisterWrite(0, 0, (unsigned __int8 *)&v8, 2u, 0LL);
    if ( byte_140F8F110 )
      result = HalpAcpiPmRegisterWrite(3, 0, (unsigned __int8 *)&v8, 2u, 0LL);
  }
  if ( HalpShutdownContext && byte_140F8F0B0 )
  {
    if ( HalpHvSleepEnlightenedCpuManager )
      HalpHvEnterSleepState(5LL);
    HalpAcpiPmRegisterRead(1, 0, (__int64)&v7, 2u, 0LL);
    v7 = v7 & 0x203 | ((HalpShutdownContext & 7 | 8) << 10);
    result = HalpAcpiPmRegisterWrite(1, 0, (unsigned __int8 *)&v7, 2u, 0LL);
    if ( byte_140F8F140 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)&v7, 2u, 0LL);
      v7 = v7 & 0x203 | ((((unsigned int)HalpShutdownContext >> 4) & 7 | 8) << 10);
      result = HalpAcpiPmRegisterWrite(4, 0, (unsigned __int8 *)&v7, 2u, 0LL);
    }
  }
  if ( HalFirmwareTypeEfi )
    return HalEfiResetSystem(2LL, v6);
  return result;
}
