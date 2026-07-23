/*
 * XREFs of HviGetHypervisorVersion @ 0x140662430
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1405805A0 (HvlpHvIdentityInfoCallback.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406A1B6C (SpcIsHyperVCr3RspErrataPresent.c)
 *     HvlPhase0Initialize @ 0x14070C3D8 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x14070C4EC (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140662638 (HviIsHypervisorMicrosoftCompatible.c)
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
