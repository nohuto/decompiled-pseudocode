/*
 * XREFs of HviGetHardwareFeatures @ 0x1404A37E0
 * Callers:
 *     HalpWdatDiscover @ 0x14055CA28 (HalpWdatDiscover.c)
 *     HvlGetSystemPasidCapabilities @ 0x140583A60 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14058838C (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x1405F807C (HvipApertureDetectParameters.c)
 *     HvlQueryDetailInfo @ 0x140702A7C (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140A7C660 (HvlQueryVsmProtectionInfo.c)
 *     HalpIommuInitializeAll @ 0x140B5B7A0 (HalpIommuInitializeAll.c)
 *     HalpInterruptInitDiscard @ 0x140BFEAB4 (HalpInterruptInitDiscard.c)
 *     HalpIommuInitDiscard @ 0x140BFED18 (HalpIommuInitDiscard.c)
 *     EtwpTraceSystemInitialization @ 0x140C2C93C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404A3870 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HviGetHardwareFeatures(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)HviIsAnyHypervisorPresent() )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
  }
  else
  {
    result = 0LL;
  }
  if ( (unsigned int)result < 0x40000006 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    _RAX = 1073741830LL;
    __asm { cpuid }
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = _RBX;
    *(_DWORD *)(a1 + 8) = _RCX;
    *(_DWORD *)(a1 + 12) = _RDX;
  }
  return result;
}
