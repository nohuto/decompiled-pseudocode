/*
 * XREFs of HalpPowerWriteResetCommand @ 0x1405423D4
 * Callers:
 *     HalpInterruptResetThisProcessor @ 0x14053F610 (HalpInterruptResetThisProcessor.c)
 *     HalpReboot @ 0x140542500 (HalpReboot.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     HalpAcpiPmRegisterWrite @ 0x14040FFF0 (HalpAcpiPmRegisterWrite.c)
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     HalpMiscIsLegacyPcType @ 0x14054816C (HalpMiscIsLegacyPcType.c)
 *     HalEfiResetSystem @ 0x140549F78 (HalEfiResetSystem.c)
 *     VslTerminateSecureServices @ 0x14058B95C (VslTerminateSecureServices.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalpPowerWriteResetCommand(__int64 a1, volatile signed __int32 *a2)
{
  int v3; // esi
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  v3 = a1;
  if ( HalpRebootHandler )
    guard_dispatch_icall_no_overrides(a1, a2);
  if ( !v3 )
  {
    if ( (unsigned __int8)HalpMiscIsLegacyPcType() )
    {
      __outbyte(0x70u, 0xFu);
      __outbyte(0x71u, 0);
      KeStallExecutionProcessor(0x64u);
    }
    if ( !HalFirmwareTypeEfi )
    {
      v4 = HalpMap(0LL, 1LL, 1uLL, 0, 4u, 0LL);
      if ( v4 )
        *(_WORD *)(v4 + 1138) = 4660;
    }
    if ( (HalpPlatformFlags & 4) != 0 )
    {
      __outbyte(0x70u, 0x15u);
      KeStallExecutionProcessor(1u);
    }
    VslTerminateSecureServices();
    if ( HalpHvUsedForReboot )
    {
      v5 = 0LL;
      __writemsr(0x40000003u, 1uLL);
    }
    if ( byte_140F8F400 )
    {
      HalpAcpiPmRegisterWrite(8, 0, byte_140FC1000, 1u, 0LL);
      KeStallExecutionProcessor(0x1F4u);
    }
    if ( (HalpPlatformFlags & 2) != 0 )
    {
      __outbyte(0x64u, 0xFEu);
      KeStallExecutionProcessor(0x1388u);
    }
    if ( HalFirmwareTypeEfi )
    {
      HalEfiResetSystem(1LL, v5);
      HalEfiResetSystem(0LL, v6);
      __debugbreak();
    }
  }
  if ( a2 )
    _InterlockedDecrement(a2);
  __halt();
}
