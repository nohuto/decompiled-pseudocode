/*
 * XREFs of KiCheckKeepAlive @ 0x1403A49E4
 * Callers:
 *     KeAccumulateTicks @ 0x1402AAEB0 (KeAccumulateTicks.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 */

char __fastcall KiCheckKeepAlive(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // di
  unsigned int v4; // ecx
  __int64 v5; // rdx
  struct _KAFFINITY_EX *v7; // rcx

  v1 = *(unsigned int *)(a1 + 36);
  v2 = 0;
  if ( !KiClockTimerPerCpuTickScheduling )
  {
    if ( !(unsigned int)KeCheckProcessorAffinityEx(&KiClockCheckPending, (unsigned int)v1) )
      return v2;
    if ( !(unsigned int)KeCheckProcessorAffinityEx(KiClockCheckReady, (unsigned int)v1) )
    {
LABEL_10:
      KeAddProcessorAffinityEx(KiClockCheckReady, v1);
      return v2;
    }
    KeRemoveProcessorAffinityEx(KiClockCheckReady, (unsigned int)v1);
    v7 = &KiClockCheckPending;
LABEL_12:
    KeRemoveProcessorAffinityEx(v7, (unsigned int)v1);
    return 1;
  }
  v4 = *((_DWORD *)KiGlobalState + v1);
  v5 = v4 >> 6;
  if ( (unsigned int)v5 < KiClockCheckReady[0] && ((*(_QWORD *)&KiClockCheckReady[4 * v5 + 4] >> (v4 & 0x3F)) & 1) != 0 )
  {
    v7 = (struct _KAFFINITY_EX *)KiClockCheckReady;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 38408) && MEMORY[0xFFFFF78000000008] > *(_QWORD *)(a1 + 38272) )
    goto LABEL_10;
  return v2;
}
