/*
 * XREFs of ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x140095280
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FA358 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140205FD0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400952AC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall CInputDest::UsesQueue(CInputDest *this, const struct tagQ *a2)
{
  __int64 v2; // rdx
  struct tagTHREADINFO *ThreadInfo; // r8
  bool result; // al

  ThreadInfo = CInputDest::GetThreadInfo(this);
  result = 0;
  if ( ThreadInfo )
    return *((_QWORD *)ThreadInfo + 59) == v2;
  return result;
}
