/*
 * XREFs of HalpPowerWriteResetCommand @ 0x140542254
 * Callers:
 *     HalpInterruptResetThisProcessor @ 0x14053F4E0 (HalpInterruptResetThisProcessor.c)
 *     HalpReboot @ 0x14054237C (HalpReboot.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     HalpMap @ 0x140412738 (HalpMap.c)
 *     HalpAcpiPmRegisterWrite @ 0x14041ED40 (HalpAcpiPmRegisterWrite.c)
 *     HalpMiscIsLegacyPcType @ 0x140547FBC (HalpMiscIsLegacyPcType.c)
 *     HalEfiResetSystem @ 0x140549DC8 (HalEfiResetSystem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalpPowerWriteResetCommand(__int64 a1, volatile signed __int32 *a2)
{
  int v3; // esi
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx

  v3 = a1;
  if ( HalpRebootHandler )
    guard_dispatch_icall_no_overrides(a1);
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
      v5 = HalpMap(0LL, 1u, 1u, 0, 4u, 0LL);
      if ( v5 )
        *(_WORD *)(v5 + 1138) = 4660;
    }
    if ( (HalpPlatformFlags & 4) != 0 )
    {
      __outbyte(0x70u, 0x15u);
      KeStallExecutionProcessor(1u);
    }
    if ( HalpHvUsedForReboot )
    {
      v4 = 0LL;
      __writemsr(0x40000003u, 1uLL);
    }
    if ( byte_140F8EA60 )
    {
      HalpAcpiPmRegisterWrite(8, 0, byte_140FC05C0, 1u, 0LL);
      KeStallExecutionProcessor(0x1F4u);
    }
    if ( (HalpPlatformFlags & 2) != 0 )
    {
      __outbyte(0x64u, 0xFEu);
      KeStallExecutionProcessor(0x1388u);
    }
    if ( HalFirmwareTypeEfi )
    {
      HalEfiResetSystem(1LL, v4);
      HalEfiResetSystem(0LL, v6);
      __debugbreak();
    }
  }
  if ( a2 )
    _InterlockedDecrement(a2);
  __halt();
}
