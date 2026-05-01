/*
 * XREFs of ??0PinRequestContext@@QEAA@XZ @ 0x1805E325C
 * Callers:
 *     ??$_Construct_in_place@VPinRequestContext@@$$V@std@@YAXAEAVPinRequestContext@@@Z @ 0x1802C6AD4 (--$_Construct_in_place@VPinRequestContext@@$$V@std@@YAXAEAVPinRequestContext@@@Z.c)
 * Callees:
 *     <none>
 */

PinRequestContext *__fastcall PinRequestContext::PinRequestContext(PinRequestContext *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 40) = 0;
  return this;
}
