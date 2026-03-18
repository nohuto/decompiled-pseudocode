/*
 * XREFs of EditionInitiateMouseEventProcessing @ 0x1C001CA40
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C001CAC8 (WakeRIT.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x1C01F877C (-xxxUserBeep@@YAHKK_N@Z.c)
 */

__int64 __fastcall EditionInitiateMouseEventProcessing(__int64 a1, int a2)
{
  int v3; // ebx
  __int64 result; // rax

  v3 = a1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(SGDGetUserSessionState(a1) + 15976), 1, 1) )
  {
    EtwTraceWakeMIT(1LL);
    result = WakeMIT(1LL);
  }
  else
  {
    EtwTraceWakeRIT(1LL);
    result = WakeRIT(1LL);
  }
  if ( v3 )
    return xxxUserBeep(0x1B8u, 0x7Du, a2 == 0);
  return result;
}
