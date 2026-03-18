/*
 * XREFs of ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D24E0
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FA358 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FA77C (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x140200EE0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140205FD0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1400D25D8 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x1401FF014 (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::RecheckPointerCapture(
        CTouchProcessor *this,
        unsigned __int64 a2,
        int a3,
        struct CInputDest **a4,
        int *a5)
{
  unsigned int v5; // ebx
  struct CPointerCaptureData *PointerCaptureData; // rax
  struct CInputDest *PointerCaptureInt; // rax
  bool v11; // zf
  int v12; // ecx
  int v14[6]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  v14[0] = 0;
  PointerCaptureData = CTouchProcessor::GetPointerCaptureData(this, a2);
  if ( !PointerCaptureData )
  {
    PointerCaptureInt = 0LL;
    goto LABEL_4;
  }
  PointerCaptureInt = CTouchProcessor::GetPointerCaptureInt(
                        this,
                        (struct CPointerCaptureData *)((char *)PointerCaptureData + (a3 != 0 ? 0x88 : 0) + 32),
                        v14);
  v11 = PointerCaptureInt == 0LL;
  if ( PointerCaptureInt )
  {
    v12 = v14[0];
    *a4 = PointerCaptureInt;
    *a5 = v12;
LABEL_4:
    v11 = PointerCaptureInt == 0LL;
  }
  LOBYTE(v5) = !v11;
  return v5;
}
