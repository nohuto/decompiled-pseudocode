/*
 * XREFs of HviGetHardwareFeatures @ 0x1404A3740
 * Callers:
 *     HalpWdatDiscover @ 0x14055F328 (HalpWdatDiscover.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405871E0 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14058B9FC (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x1406043BC (HvipApertureDetectParameters.c)
 *     HvlQueryDetailInfo @ 0x14070E95C (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140A7FC98 (HvlQueryVsmProtectionInfo.c)
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 *     HalpInterruptInitDiscard @ 0x140C0FAB4 (HalpInterruptInitDiscard.c)
 *     HalpIommuInitDiscard @ 0x140C0FD18 (HalpIommuInitDiscard.c)
 *     EtwpTraceSystemInitialization @ 0x140C3DC1C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404A37D0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
