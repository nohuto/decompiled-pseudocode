/*
 * XREFs of NvmeControllerPowerSetFState @ 0x140132460
 * Callers:
 *     NvmeAdapterIdleState @ 0x14012E860 (NvmeAdapterIdleState.c)
 * Callees:
 *     NvmeControllerSetPowerState @ 0x1400CA468 (NvmeControllerSetPowerState.c)
 *     NvmeControllerSetFStateIdleTimer @ 0x140132998 (NvmeControllerSetFStateIdleTimer.c)
 *     NvmeControllerUpdateResumeLatencyTolerance @ 0x140132B18 (NvmeControllerUpdateResumeLatencyTolerance.c)
 */

__int64 __fastcall NvmeControllerPowerSetFState(__int64 a1, _DWORD *a2)
{
  bool v4; // zf
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ecx

  if ( a2[1] < 0x18u || !*a2 )
    return 3221225485LL;
  v4 = a2[5] == 0;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL) + 68LL) = *((unsigned __int8 *)a2 + 20);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
  if ( v4 )
    v6 = *(unsigned __int8 *)(v5 + 182);
  else
    v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 68LL) + *(unsigned __int8 *)(v5 + 1);
  if ( v6 > 0x1F )
    return 3221225860LL;
  if ( (int)NvmeControllerSetPowerState(a1, v6) < 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
    if ( a2[5] )
      ++*(_DWORD *)(v8 + 260);
    else
      ++*(_DWORD *)(v8 + 256);
  }
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 180LL) = v6;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL);
  v10 = *(_DWORD *)(v9 + 68);
  if ( v10 && v10 < *(_DWORD *)(v9 + 16) - 1 )
  {
    if ( (unsigned __int8)NvmeControllerUpdateResumeLatencyTolerance(a1) )
      NvmeControllerSetFStateIdleTimer(a1);
  }
  return 0LL;
}
