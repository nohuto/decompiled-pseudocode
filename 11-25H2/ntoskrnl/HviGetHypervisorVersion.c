/*
 * XREFs of HviGetHypervisorVersion @ 0x140657880
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x14057FA70 (HvlpHvIdentityInfoCallback.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x1406956C4 (SpcIsHyperVCr3RspErrataPresent.c)
 *     HvlPhase0Initialize @ 0x140702968 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x140702A7C (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140657A88 (HviIsHypervisorMicrosoftCompatible.c)
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
