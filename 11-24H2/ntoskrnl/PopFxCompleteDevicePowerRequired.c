/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x140378130
 * Callers:
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140376700 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x14049CF90 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x1403128A0 (PopPepUpdateConstraints.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopDiagTraceFxDevicePowered @ 0x140378228 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 */

char __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax
  __int64 v6; // rdi
  char v7; // al
  __int64 v9; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( v5 )
  {
    if ( a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
    v6 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( *(int *)(v6 + 132) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 132), 0xFFFFFFFF) == 1 )
      PopPepUpdateConstraints((_DWORD *)v6, 4, 1);
    v7 = PopPepProcessEvent(v6, 0LL, 0LL, 6LL, v9, a2);
    if ( v7 && !a2 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
    return v7;
  }
  return v2;
}
