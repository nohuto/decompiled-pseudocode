/*
 * XREFs of KiGetClockTimerEarliestDeadline @ 0x140317F70
 * Callers:
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     KiShouldRearmClockTimer @ 0x14043516C (KiShouldRearmClockTimer.c)
 *     KeEstimateClockTickDuration @ 0x1404C560C (KeEstimateClockTickDuration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetClockTimerEarliestDeadline(__int64 a1, char a2)
{
  char v2; // al
  unsigned int v4; // r9d
  unsigned __int64 v5; // r8
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // dl

  v2 = *(_BYTE *)(a1 + 38308);
  v4 = 7;
  v5 = -1LL;
  if ( (v2 & 1) != 0 && (a2 || (v2 & 2) == 0) && *(_QWORD *)(a1 + 38296) + *(unsigned int *)(a1 + 38304) != -1LL )
  {
    v5 = *(_QWORD *)(a1 + 38296) + *(unsigned int *)(a1 + 38304);
    v4 = 0;
  }
  v6 = *(_BYTE *)(a1 + 38324);
  if ( (v6 & 1) != 0
    && (a2 || (v6 & 2) == 0)
    && *(_QWORD *)(a1 + 38312) + (unsigned __int64)*(unsigned int *)(a1 + 38320) < v5 )
  {
    v5 = *(_QWORD *)(a1 + 38312) + *(unsigned int *)(a1 + 38320);
    v4 = 1;
  }
  v7 = *(_BYTE *)(a1 + 38340);
  if ( (v7 & 1) != 0
    && (a2 || (v7 & 2) == 0)
    && *(_QWORD *)(a1 + 38328) + (unsigned __int64)*(unsigned int *)(a1 + 38336) < v5 )
  {
    v5 = *(_QWORD *)(a1 + 38328) + *(unsigned int *)(a1 + 38336);
    v4 = 2;
  }
  v8 = *(_BYTE *)(a1 + 38356);
  if ( (v8 & 1) != 0
    && (a2 || (v8 & 2) == 0)
    && *(_QWORD *)(a1 + 38344) + (unsigned __int64)*(unsigned int *)(a1 + 38352) < v5 )
  {
    v5 = *(_QWORD *)(a1 + 38344) + *(unsigned int *)(a1 + 38352);
    v4 = 3;
  }
  v9 = *(_BYTE *)(a1 + 38372);
  if ( (v9 & 1) != 0
    && (a2 || (v9 & 2) == 0)
    && *(_QWORD *)(a1 + 38360) + (unsigned __int64)*(unsigned int *)(a1 + 38368) < v5 )
  {
    v5 = *(_QWORD *)(a1 + 38360) + *(unsigned int *)(a1 + 38368);
    v4 = 4;
  }
  v10 = *(_BYTE *)(a1 + 38388);
  if ( (v10 & 1) != 0
    && (a2 || (v10 & 2) == 0)
    && *(_QWORD *)(a1 + 38376) + (unsigned __int64)*(unsigned int *)(a1 + 38384) < v5 )
  {
    v5 = *(_QWORD *)(a1 + 38376) + *(unsigned int *)(a1 + 38384);
    v4 = 5;
  }
  v11 = *(_BYTE *)(a1 + 38404);
  if ( (v11 & 1) != 0
    && (a2 || (v11 & 2) == 0)
    && *(_QWORD *)(a1 + 38392) + (unsigned __int64)*(unsigned int *)(a1 + 38400) < v5 )
  {
    return 6LL;
  }
  else
  {
    return v4;
  }
}
