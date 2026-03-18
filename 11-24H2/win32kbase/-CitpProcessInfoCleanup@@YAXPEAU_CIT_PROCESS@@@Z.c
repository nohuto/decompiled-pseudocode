/*
 * XREFs of ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1400B5D00
 * Callers:
 *     CitProcessCallout @ 0x1400B5AC4 (CitProcessCallout.c)
 * Callees:
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1400B5400 (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1400B5DB8 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400B5DE8 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x14023C450 (-CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z.c)
 */

void __fastcall CitpProcessInfoCleanup(struct _CIT_PROCESS *a1, unsigned __int16 a2)
{
  unsigned __int8 *v2; // rdi
  struct _CIT_INTERACTION_SUMMARY *Outstanding; // rsi

  v2 = (unsigned __int8 *)a1 + 105;
  if ( *((_BYTE *)a1 + 104) || *v2 )
  {
    Outstanding = CitpInteractionSummaryGetOutstanding(a1, a2);
    if ( *((_BYTE *)a1 + 104) )
    {
      PsUpdateComponentPower(**((_QWORD **)a1 + 1), 10LL);
      if ( Outstanding )
        CitpAudioStatDecrementStreams(
          (struct _CIT_INTERACTION_SUMMARY *)((char *)Outstanding + 116),
          *((_BYTE *)a1 + 104));
    }
    if ( *v2 )
    {
      PsUpdateComponentPower(**((_QWORD **)a1 + 1), 11LL);
      if ( Outstanding )
        CitpAudioStatDecrementStreams((struct _CIT_INTERACTION_SUMMARY *)((char *)Outstanding + 124), *v2);
    }
  }
  CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)a1 + 4);
  CitpProgramIdCleanup((struct _CIT_PROCESS *)((char *)a1 + 48));
}
