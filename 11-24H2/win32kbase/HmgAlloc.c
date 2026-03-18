/*
 * XREFs of HmgAlloc @ 0x140173F20
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x140175318 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 * Callees:
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 */

__int64 __fastcall HmgAlloc(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return HmgAllocFast(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88));
}
