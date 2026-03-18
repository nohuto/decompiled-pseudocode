/*
 * XREFs of HalpPrepareForBugcheck @ 0x140548440
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1404469AC (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14055EDF8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140FC071C = -1;
    qword_140FC0720 = 0LL;
    xmmword_140FC0708 = 0uLL;
    qword_140FC07C8 = 0LL;
    dword_140FC0704 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140E0FE78 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
