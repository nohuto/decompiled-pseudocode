/*
 * XREFs of HviGetHypervisorVersion @ 0x140663B40
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x140583220 (HvlpHvIdentityInfoCallback.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406A0A64 (SpcIsHyperVCr3RspErrataPresent.c)
 *     HvlPhase0Initialize @ 0x14070E848 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x14070E95C (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140663D48 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorVersion(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741826LL;
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
