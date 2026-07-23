/*
 * XREFs of HviGetHardwareFeatures @ 0x14049E6A0
 * Callers:
 *     HalpWdatDiscover @ 0x14055CF58 (HalpWdatDiscover.c)
 *     HvlGetSystemPasidCapabilities @ 0x140584560 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x140588CEC (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x1406019FC (HvipApertureDetectParameters.c)
 *     HvlQueryDetailInfo @ 0x14070C4EC (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140A7A6F8 (HvlQueryVsmProtectionInfo.c)
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 *     HalpInterruptInitDiscard @ 0x140C11AB4 (HalpInterruptInitDiscard.c)
 *     HalpIommuInitDiscard @ 0x140C11D18 (HalpIommuInitDiscard.c)
 *     EtwpTraceSystemInitialization @ 0x140C3FD6C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
