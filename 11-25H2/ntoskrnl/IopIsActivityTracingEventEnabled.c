/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1404B0634
 * Callers:
 *     IoReuseIrp @ 0x140359950 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x140454288 (IopInitActivityIdIrp.c)
 *     IoTransferActivityId @ 0x1404B05D0 (IoTransferActivityId.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
