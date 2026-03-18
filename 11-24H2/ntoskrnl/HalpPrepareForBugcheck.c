/*
 * XREFs of HalpPrepareForBugcheck @ 0x14054AD30
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403BAB3C (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1405616F8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140FC0EBC = -1;
    qword_140FC0EC0 = 0LL;
    xmmword_140FC0EA8 = 0uLL;
    qword_140FC0F68 = 0LL;
    dword_140FC0EA4 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140E100F8 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
