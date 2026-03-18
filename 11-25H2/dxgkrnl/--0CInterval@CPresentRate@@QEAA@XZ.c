/*
 * XREFs of ??0CInterval@CPresentRate@@QEAA@XZ @ 0x140047D00
 * Callers:
 *     ??0CCompositionSurface@@QEAA@XZ @ 0x140047C8C (--0CCompositionSurface@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CPresentRate::CInterval *__fastcall CPresentRate::CInterval::CInterval(CPresentRate::CInterval *this)
{
  CPresentRate::CInterval *result; // rax

  *(_DWORD *)this = 0;
  result = this;
  *((_DWORD *)this + 1) = 0;
  return result;
}
