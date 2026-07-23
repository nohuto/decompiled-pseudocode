/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x1402E680C
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140481DAC (PopFxDeliverDevicePowerRequired.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x140497CE0 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402E6904 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 */

char __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rdi
  char v8; // al
  __int64 v10; // [rsp+20h] [rbp-18h]

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
    v7 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( *(int *)(v7 + 132) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 132), 0xFFFFFFFF) == 1 )
    {
      LOBYTE(v6) = 1;
      PopPepUpdateConstraints(v7, 4LL, v6);
    }
    v8 = PopPepProcessEvent(v7, 0LL, 0, 6u, v10, a2);
    if ( v8 && !a2 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
    return v8;
  }
  return v2;
}
