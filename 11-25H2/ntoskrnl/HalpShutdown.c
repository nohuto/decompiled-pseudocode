/*
 * XREFs of HalpShutdown @ 0x1405424B8
 * Callers:
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 *     HaliHaltSystem @ 0x1405420D0 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x140542170 (HalpCheckPowerButton.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14041ED40 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x1404203D0 (HalpAcpiPmRegisterRead.c)
 *     HalpHvEnterSleepState @ 0x140548DCC (HalpHvEnterSleepState.c)
 *     HalEfiResetSystem @ 0x140549DC8 (HalEfiResetSystem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpShutdown()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int16 v2; // [rsp+60h] [rbp+30h] BYREF
  __int16 v3; // [rsp+68h] [rbp+38h] BYREF
  __int16 v4; // [rsp+70h] [rbp+40h] BYREF

  v4 = 0;
  v2 = 0;
  v3 = 0;
  if ( _InterlockedCompareExchange(&HalpShutdownActive, 1, 0) )
  {
    while ( 1 )
      ;
  }
  result = guard_dispatch_icall_no_overrides(0LL);
  if ( PmRegisters[0] )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v4, 2u, 0LL);
    v3 = v4;
    if ( byte_140F8E970 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v4, 2u, 0LL);
      v3 |= v4;
    }
    result = HalpAcpiPmRegisterWrite(0, 0, (unsigned __int8 *)&v3, 2u, 0LL);
    if ( byte_140F8E970 )
      result = HalpAcpiPmRegisterWrite(3, 0, (unsigned __int8 *)&v3, 2u, 0LL);
  }
  if ( HalpShutdownContext && byte_140F8E910 )
  {
    if ( HalpHvSleepEnlightenedCpuManager )
      HalpHvEnterSleepState(5LL);
    HalpAcpiPmRegisterRead(1, 0, (__int64)&v2, 2u, 0LL);
    v2 = v2 & 0x203 | ((HalpShutdownContext & 7 | 8) << 10);
    result = HalpAcpiPmRegisterWrite(1, 0, (unsigned __int8 *)&v2, 2u, 0LL);
    if ( byte_140F8E9A0 )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)&v2, 2u, 0LL);
      v2 = v2 & 0x203 | ((((unsigned int)HalpShutdownContext >> 4) & 7 | 8) << 10);
      result = HalpAcpiPmRegisterWrite(4, 0, (unsigned __int8 *)&v2, 2u, 0LL);
    }
  }
  if ( HalFirmwareTypeEfi )
    return HalEfiResetSystem(2LL, v1);
  return result;
}
