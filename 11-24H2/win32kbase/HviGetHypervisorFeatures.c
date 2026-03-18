/*
 * XREFs of HviGetHypervisorFeatures @ 0x14023D0CC
 * Callers:
 *     ShouldEnableInputVirtualization @ 0x14018A67C (ShouldEnableInputVirtualization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14023D168 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 HviGetHypervisorFeatures()
{
  __int64 result; // rax
  _DWORD *v1; // r10

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
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
