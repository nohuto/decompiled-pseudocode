/*
 * XREFs of HviGetHypervisorInterface @ 0x140663AF8
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x140583220 (HvlpHvIdentityInfoCallback.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x140663D48 (HviIsHypervisorMicrosoftCompatible.c)
 *     HvlQueryDetailInfo @ 0x14070E95C (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404A37D0 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorInterface(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
