/*
 * XREFs of HalpInterruptInitDiscard @ 0x140C11AB4
 * Callers:
 *     HalpInterruptInitSystem @ 0x140B4F310 (HalpInterruptInitSystem.c)
 * Callees:
 *     HviGetHardwareFeatures @ 0x14049E6A0 (HviGetHardwareFeatures.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HalpInitializeInterrupts @ 0x140C0FE18 (HalpInitializeInterrupts.c)
 */

__int64 __fastcall HalpInterruptInitDiscard(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  HalpInterruptLock = 0LL;
  HalpDefaultPcIoSpace = HalpAddressUsageList;
  HalpAddressUsageList = (ULONG_PTR)&HalpDefaultPcIoSpace;
  v3 = 0LL;
  if ( HalpHvCpuManager )
  {
    HviGetHardwareFeatures((__int64)&v3);
    if ( (v3 & 0x4000) != 0 )
      HalpInterruptPhysicalModeOnly = 1;
  }
  result = HalpInitializeInterrupts(a1);
  if ( (int)result >= 0 )
  {
    off_140E009B0[0] = (__int64 (__fastcall *)())HalpMaskInterrupt;
    off_140E009B8[0] = (__int64 (__fastcall *)())HalpUnmaskInterrupt;
    off_140E00A50[0] = (__int64 (__fastcall *)())HalpInterruptRequestInterrupt;
    off_140E00A58[0] = (__int64 (__fastcall *)())HalpInterruptEnumerateUnmaskedInterrupts;
    off_140E00778[0] = (__int64 (__fastcall *)())HaliGetInterruptTranslator;
    off_140E009A8[0] = (__int64 (__fastcall *)())HalpSecondaryInterruptQueryPrimaryInformation;
    off_140E009C0[0] = (__int64 (__fastcall *)())HalpIsInterruptTypeSecondary;
    off_140E009C8[0] = (__int64 (__fastcall *)())HalpAllocateGsivForSecondaryInterrupt;
    off_140E00B20[0] = (__int64 (__fastcall *)())HalpInterruptVectorDataToGsiv;
    off_140E00B28[0] = (__int64 (__fastcall *)())HalpInterruptGetHighestPriorityInterrupt;
    return 0LL;
  }
  return result;
}
