/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x1400E5828
 * Callers:
 *     HviGetHardwareFeatures @ 0x1400E57B8 (HviGetHardwareFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1400E5868 (HviIsAnyHypervisorPresent.c)
 */

__int64 HviGetHypervisorVendorAndMaxFunction()
{
  __int64 result; // rax
  _DWORD *v1; // r10

  result = HviIsAnyHypervisorPresent();
  if ( (_BYTE)result )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
    *v1 = result;
    v1[1] = _RBX;
    v1[2] = _RCX;
    v1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
  }
  return result;
}
