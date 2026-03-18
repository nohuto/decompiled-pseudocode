/*
 * XREFs of ApiSetValidatePointerOffset @ 0x1C02082F0
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C14C8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01CC394 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetValidatePointerOffset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi

  v4 = 0;
  if ( qword_1C02969E0 && (int)qword_1C02969E0() >= 0 && qword_1C02969E8 )
    return (unsigned int)qword_1C02969E8(a1, a2, a3, a4);
  return v4;
}
