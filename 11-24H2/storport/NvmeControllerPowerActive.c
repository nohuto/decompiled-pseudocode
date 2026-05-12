/*
 * XREFs of NvmeControllerPowerActive @ 0x1401323E8
 * Callers:
 *     NvmeAdapterActiveCondition @ 0x14012DB70 (NvmeAdapterActiveCondition.c)
 *     NvmeAdapterIdleCondition @ 0x14012E670 (NvmeAdapterIdleCondition.c)
 * Callees:
 *     NvmeControllerCancelFStateIdleTimer @ 0x140132128 (NvmeControllerCancelFStateIdleTimer.c)
 *     NvmeControllerPerfStateTransition @ 0x140132360 (NvmeControllerPerfStateTransition.c)
 *     NvmeControllerSetFStateIdleTimer @ 0x140132998 (NvmeControllerSetFStateIdleTimer.c)
 *     NvmeControllerUpdateResumeLatencyTolerance @ 0x140132B18 (NvmeControllerUpdateResumeLatencyTolerance.c)
 */

char __fastcall NvmeControllerPowerActive(__int64 a1, char a2)
{
  __int64 v3; // rax

  if ( a2 )
  {
    NvmeControllerCancelFStateIdleTimer(a1);
    PoFxSetComponentLatency(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL), 0LL, 0LL);
    LOBYTE(v3) = NvmeControllerPerfStateTransition(a1);
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 8LL);
    if ( *(_DWORD *)(v3 + 16) > 1u )
    {
      NvmeControllerUpdateResumeLatencyTolerance(a1);
      LOBYTE(v3) = NvmeControllerSetFStateIdleTimer(a1);
    }
  }
  return v3;
}
