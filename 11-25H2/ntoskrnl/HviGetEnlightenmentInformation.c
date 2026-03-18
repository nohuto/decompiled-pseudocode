/*
 * XREFs of HviGetEnlightenmentInformation @ 0x1406577A8
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x14058838C (HvlpDetermineEnlightenments.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405B99C8 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetImplementedPhysicalBits @ 0x140657910 (HviGetImplementedPhysicalBits.c)
 *     HvlQueryDetailInfo @ 0x140702A7C (HvlQueryDetailInfo.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14077E404 (RtlpInitFunctionOverrideCapabilities.c)
 *     KiComputeDispatchInterruptCost @ 0x140C16508 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140657A88 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetEnlightenmentInformation(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
