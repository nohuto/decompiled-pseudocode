/*
 * XREFs of PopResetCBTriggers @ 0x14075B008
 * Callers:
 *     PopApplyPolicy @ 0x14099EC20 (PopApplyPolicy.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     PopDiagTraceBatteryTriggerFlags @ 0x140A66E48 (PopDiagTraceBatteryTriggerFlags.c)
 */

__int64 __fastcall PopResetCBTriggers(unsigned __int8 a1)
{
  __int64 result; // rax
  int v2; // ebx
  unsigned int v3; // r8d
  __int64 v4; // rdx
  int v5; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(result) = 0;
  v5 = 0;
  v2 = ~a1;
  v3 = 0;
  do
  {
    v4 = 32LL * (unsigned int)result;
    *(&PopCB + 8 * v3 + 89) = v2 & *(ULONG *)((char *)&PopCB + v4 + 356);
    PopDiagTraceBatteryTriggerFlags(&v5, (char *)&PopCB + v4 + 352);
    result = (unsigned int)(v5 + 1);
    v5 = result;
    v3 = result;
  }
  while ( (unsigned int)result < 4 );
  return result;
}
