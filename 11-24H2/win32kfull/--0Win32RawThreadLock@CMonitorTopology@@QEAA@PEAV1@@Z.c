/*
 * XREFs of ??0Win32RawThreadLock@CMonitorTopology@@QEAA@PEAV1@@Z @ 0x14026A4CC
 * Callers:
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CCFF0 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

CMonitorTopology::Win32RawThreadLock *__fastcall CMonitorTopology::Win32RawThreadLock::Win32RawThreadLock(
        CMonitorTopology::Win32RawThreadLock *this,
        struct CMonitorTopology *a2)
{
  struct tagTHREADINFO *v4; // rax
  CMonitorTopology::Win32RawThreadLock *result; // rax

  v4 = PtiCurrent((__int64)this, (__int64)a2);
  *(_QWORD *)this = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = this;
  *((_QWORD *)this + 2) = _lambda_27f747716261ed0f75ba1156a6124405_::_lambda_invoker_cdecl_;
  result = this;
  *((_QWORD *)this + 1) = a2;
  return result;
}
