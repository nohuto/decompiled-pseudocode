/*
 * XREFs of KiCheckKeepAlive @ 0x14026B9B4
 * Callers:
 *     KeAccumulateTicks @ 0x140273800 (KeAccumulateTicks.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 */

char __fastcall KiCheckKeepAlive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // di
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KAFFINITY_EX *v11; // rcx

  v3 = *(unsigned int *)(a1 + 36);
  v4 = 0;
  if ( !KiClockTimerPerCpuTickScheduling )
  {
    if ( !(unsigned int)KeCheckProcessorAffinityEx(&KiClockCheckPending, (unsigned int)v3, a3, a1) )
      return v4;
    if ( !(unsigned int)KeCheckProcessorAffinityEx(KiClockCheckReady, (unsigned int)v3, v9, v10) )
    {
LABEL_10:
      KeAddProcessorAffinityEx(KiClockCheckReady, v3);
      return v4;
    }
    KeRemoveProcessorAffinityEx(KiClockCheckReady, v3);
    v11 = &KiClockCheckPending;
LABEL_12:
    KeRemoveProcessorAffinityEx(&v11->Count, v3);
    return 1;
  }
  v6 = *((_DWORD *)KiGlobalState + v3);
  v7 = v6 >> 6;
  if ( (unsigned int)v7 < KiClockCheckReady[0] && ((*(_QWORD *)&KiClockCheckReady[4 * v7 + 4] >> (v6 & 0x3F)) & 1) != 0 )
  {
    v11 = (struct _KAFFINITY_EX *)KiClockCheckReady;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 38408) && MEMORY[0xFFFFF78000000008] > *(_QWORD *)(a1 + 38272) )
    goto LABEL_10;
  return v4;
}
