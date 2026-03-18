/*
 * XREFs of TlgAggregateFlush @ 0x1401536A4
 * Callers:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140091014 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 * Callees:
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x14019DC50 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     LookUpTableFlushComplete @ 0x1402C398C (LookUpTableFlushComplete.c)
 */

void TlgAggregateFlush()
{
  __int64 v0; // rbx
  void *v1; // rdx
  struct _EX_TIMER *v2; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_14029AE20 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = qword_14029AE28;
    if ( KeGetCurrentIrql() >= 2u || (unsigned int)KeIsExecutingDpc() )
    {
      v1 = *(void **)(v0 + 264);
      v2 = *(struct _EX_TIMER **)(v0 + 360);
      *(_BYTE *)(v0 + 372) = 1;
      TlgAggregateInternalFlushTimerCallbackKernelMode(v2, v1);
    }
    else
    {
      LookUpTableFlushComplete(v0);
    }
  }
}
