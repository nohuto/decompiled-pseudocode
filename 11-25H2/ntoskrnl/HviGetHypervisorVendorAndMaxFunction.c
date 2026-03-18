/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x1404A3798
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x14057FA70 (HvlpHvIdentityInfoCallback.c)
 *     HvlGetSystemPasidCapabilities @ 0x140583A60 (HvlGetSystemPasidCapabilities.c)
 *     HviGetIptFeatures @ 0x140657968 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140702A7C (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404A3870 (HviIsAnyHypervisorPresent.c)
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
