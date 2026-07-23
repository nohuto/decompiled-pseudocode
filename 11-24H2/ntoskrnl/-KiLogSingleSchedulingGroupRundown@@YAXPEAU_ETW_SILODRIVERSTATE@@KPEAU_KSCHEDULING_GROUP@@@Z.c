/*
 * XREFs of ?KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z @ 0x1405C4D64
 * Callers:
 *     KeTraceSchedulingGroupRundown @ 0x1405C4F40 (KeTraceSchedulingGroupRundown.c)
 * Callees:
 *     EtwTraceScbRundown @ 0x14064C47C (EtwTraceScbRundown.c)
 *     EtwTraceSchedulingGroupRundown @ 0x14064C59C (EtwTraceSchedulingGroupRundown.c)
 */

void __fastcall KiLogSingleSchedulingGroupRundown(
        struct _ETW_SILODRIVERSTATE *a1,
        int a2,
        struct _KSCHEDULING_GROUP *a3)
{
  int v5; // r14d
  unsigned int v6; // r15d
  unsigned int v7; // edi
  unsigned int *p_Rank; // rsi

  v5 = (int)a1;
  EtwTraceSchedulingGroupRundown();
  v6 = KeNumberProcessors_0;
  v7 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    p_Rank = &a3->PerProcessor[0].Rank;
    do
    {
      EtwTraceScbRundown(v5, a2, (_DWORD)a3, v7++, *p_Rank, (*(_WORD *)(p_Rank - 3) & 2) != 0);
      p_Rank += 110;
    }
    while ( v7 < v6 );
  }
}
