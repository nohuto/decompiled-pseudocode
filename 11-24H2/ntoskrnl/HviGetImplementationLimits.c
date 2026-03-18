/*
 * XREFs of HviGetImplementationLimits @ 0x140663B88
 * Callers:
 *     HvlIsSingleGroupRequired @ 0x140582834 (HvlIsSingleGroupRequired.c)
 *     HvlpSelectLpSet @ 0x1405849F0 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x140584E2C (HvlpSelectVpSet.c)
 *     HvlQueryDetailInfo @ 0x14070E95C (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140663D48 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetImplementationLimits(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741829LL;
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
