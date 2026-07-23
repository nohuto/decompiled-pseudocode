/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x14049E658
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1405805A0 (HvlpHvIdentityInfoCallback.c)
 *     HvlGetSystemPasidCapabilities @ 0x140584560 (HvlGetSystemPasidCapabilities.c)
 *     HviGetIptFeatures @ 0x140662518 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x14070C4EC (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall HviGetHypervisorVendorAndMaxFunction(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsAnyHypervisorPresent();
  if ( (_BYTE)result )
  {
    _RAX = 0x40000000LL;
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
