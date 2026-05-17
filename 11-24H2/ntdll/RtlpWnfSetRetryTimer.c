/*
 * XREFs of RtlpWnfSetRetryTimer @ 0x180132720
 * Callers:
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180113AC4 (RtlpWnfCalculateAndSetNextTimer.c)
 * Callees:
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 */

__int64 __fastcall RtlpWnfSetRetryTimer(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _PEB_LDR_DATA *v6; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  result = qword_1801CE200;
  if ( !*(_QWORD *)(qword_1801CE200 + 80) || *(_QWORD *)(qword_1801CE200 + 80) > a1 )
  {
    v3 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
    if ( v3 <= a1 )
      v4 = a1 - v3;
    else
      v4 = 500000LL;
    v5 = qword_1801CE200;
    *(_QWORD *)(qword_1801CE200 + 80) = v4;
    v6 = *(_PEB_LDR_DATA **)(v5 + 72);
    v7 = -v4;
    return TpSetTimerEx(v6, (unsigned __int64)&v7, 0, 0x32uLL);
  }
  return result;
}
