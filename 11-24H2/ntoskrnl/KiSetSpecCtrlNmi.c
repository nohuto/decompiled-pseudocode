/*
 * XREFs of KiSetSpecCtrlNmi @ 0x1406AD570
 * Callers:
 *     KiNmiInterruptStart @ 0x1406B76C0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1406BB9C0 (KiMcheckAbort.c)
 * Callees:
 *     sub_1406AD6D2 @ 0x1406AD6D2 (sub_1406AD6D2.c)
 */

__int64 __fastcall KiSetSpecCtrlNmi()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( !KeGetPcr()->Prcb.BpbNmiSpecCtrl
    || (v1 = __readmsr(0x48u),
        *(_DWORD *)(v0 + 192) = v1,
        LOWORD(v1) = KeGetPcr()->Prcb.BpbNmiSpecCtrl,
        v2 = 72LL,
        __writemsr(0x48u, (unsigned __int16)v1),
        (v1 & 1) == 0) )
  {
    if ( (KeGetPcr()->Prcb.BpbFeatures.AllFlags & 2) == 0 )
      JUMPOUT(0x1406AD6F6LL);
    v2 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  sub_1406AD6D2(v2, 0LL);
  return sub_1406AD5C4();
}
