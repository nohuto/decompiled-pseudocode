/*
 * XREFs of ?ContinueWaitingForRTActive@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BC64
 * Callers:
 *     ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x140035CBC (-NonRTGrabSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BA04 (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRealTimeSafeStruct<CProcessingData,1>::ContinueWaitingForRTActive(__int64 a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  CompareAddress = 0LL;
  if ( WaitOnAddress((volatile void *)(a1 + 288), &CompareAddress, 8uLL, 0xFFFFFFFF) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1ED,
    (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
    (const char *)0x887C0033LL);
  return 2289827891LL;
}
