/*
 * XREFs of HalpPrepareForBugcheck @ 0x1405485F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14055F328 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140FC111C = -1;
    qword_140FC1120 = 0LL;
    xmmword_140FC1108 = 0uLL;
    qword_140FC11C8 = 0LL;
    dword_140FC1104 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140E10288 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
