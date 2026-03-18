/*
 * XREFs of HalpPowerWriteResetCommand @ 0x140544B14
 * Callers:
 *     HalpInterruptResetThisProcessor @ 0x140541D10 (HalpInterruptResetThisProcessor.c)
 *     HalpReboot @ 0x140544C40 (HalpReboot.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     HalpAcpiPmRegisterWrite @ 0x14041C1F0 (HalpAcpiPmRegisterWrite.c)
 *     HalpMap @ 0x140478C5C (HalpMap.c)
 *     HalpMiscIsLegacyPcType @ 0x14054A8AC (HalpMiscIsLegacyPcType.c)
 *     HalEfiResetSystem @ 0x14054C6B8 (HalEfiResetSystem.c)
 *     VslTerminateSecureServices @ 0x14058E92C (VslTerminateSecureServices.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalpPowerWriteResetCommand(__int64 a1, volatile signed __int32 *a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  v5 = a1;
  if ( HalpRebootHandler )
    guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( !v5 )
  {
    if ( (unsigned __int8)HalpMiscIsLegacyPcType() )
    {
      __outbyte(0x70u, 0xFu);
      __outbyte(0x71u, 0);
      KeStallExecutionProcessor(0x64u);
    }
    if ( !HalFirmwareTypeEfi )
    {
      v6 = HalpMap(0LL, 1LL, 1uLL, 0, 4u, 0LL);
      if ( v6 )
        *(_WORD *)(v6 + 1138) = 4660;
    }
    if ( (HalpPlatformFlags & 4) != 0 )
    {
      __outbyte(0x70u, 0x15u);
      KeStallExecutionProcessor(1u);
    }
    VslTerminateSecureServices();
    if ( HalpHvUsedForReboot )
    {
      v7 = 0LL;
      __writemsr(0x40000003u, 1uLL);
    }
    if ( byte_140F8F200 )
    {
      HalpAcpiPmRegisterWrite(8, 0, byte_140FC0D60, 1u, 0LL);
      KeStallExecutionProcessor(0x1F4u);
    }
    if ( (HalpPlatformFlags & 2) != 0 )
    {
      __outbyte(0x64u, 0xFEu);
      KeStallExecutionProcessor(0x1388u);
    }
    if ( HalFirmwareTypeEfi )
    {
      HalEfiResetSystem(1LL, v7);
      HalEfiResetSystem(0LL, v8);
      __debugbreak();
    }
  }
  if ( a2 )
    _InterlockedDecrement(a2);
  __halt();
}
