/*
 * XREFs of ExpApplyPrewaitBoost @ 0x14022CEE0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x140229A50 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403D6820 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyPrewaitBoost(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r10
  int v3; // r8d
  int v4; // eax
  unsigned __int64 v5; // rcx
  int v6; // ecx
  unsigned int v7; // r9d
  __int64 result; // rax
  int v9; // ecx
  int v10; // edx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v5 = CurrentThread->Process[1].Padding[3];
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 1084);
    if ( v4 >= v6 )
      v4 = v6;
  }
  if ( (v4 < 2 && CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) || v4 > 1)
    && (*(_BYTE *)(a1 + 26) & 4) == 0 )
  {
    v3 = 4;
  }
  v7 = *(unsigned __int16 *)(a1 + 26);
  result = (unsigned int)CurrentThread->Priority;
  v9 = v3 | 2;
  if ( (v7 & 2) != 0 )
    v9 = v3;
  v10 = v9 | 0xFF00;
  if ( (int)result <= (int)(v7 >> 8) )
    v10 = v9;
  if ( v10 )
    return ExpApplyPriorityBoost(a1);
  return result;
}
