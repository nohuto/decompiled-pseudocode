/*
 * XREFs of ??0CDefaultClock@@QEAA@XZ @ 0x1801C1A88
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ??0CClockBase@@IEAA@XZ @ 0x1801C1424 (--0CClockBase@@IEAA@XZ.c)
 */

CDefaultClock *__fastcall CDefaultClock::CDefaultClock(CDefaultClock *this)
{
  CDefaultClock *v1; // rcx
  CDefaultClock *result; // rax

  CClockBase::CClockBase(this);
  *(_QWORD *)v1 = &CDefaultClock::`vftable';
  result = v1;
  *((_QWORD *)v1 + 3) = g_qpcFrequency.QuadPart / 60;
  return result;
}
