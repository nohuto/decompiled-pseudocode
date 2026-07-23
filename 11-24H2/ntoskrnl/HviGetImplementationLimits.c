/*
 * XREFs of HviGetImplementationLimits @ 0x140662478
 * Callers:
 *     HvlIsSingleGroupRequired @ 0x14057FBB4 (HvlIsSingleGroupRequired.c)
 *     HvlpSelectLpSet @ 0x140581D70 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1405821AC (HvlpSelectVpSet.c)
 *     HvlQueryDetailInfo @ 0x14070C4EC (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140662638 (HviIsHypervisorMicrosoftCompatible.c)
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
