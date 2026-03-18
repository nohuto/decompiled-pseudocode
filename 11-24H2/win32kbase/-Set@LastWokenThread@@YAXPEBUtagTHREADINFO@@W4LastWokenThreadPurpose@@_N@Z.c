/*
 * XREFs of ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14006AFC0
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140184868 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     NtMITSetLastInputRecipient @ 0x1401B8C50 (NtMITSetLastInputRecipient.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14021D0E8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 * Callees:
 *     ?Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14006AFF8 (-Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 */

__int64 __fastcall LastWokenThread::Set(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  LOBYTE(a4) = a3;
  return CLastWokenThread::Set(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 464) + 1216LL) + 3056LL), a1, a2, a4);
}
