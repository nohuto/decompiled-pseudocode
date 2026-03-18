/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1404B1634
 * Callers:
 *     IoReuseIrp @ 0x14031A320 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x140454AF0 (IopInitActivityIdIrp.c)
 *     IoTransferActivityId @ 0x1404B15D0 (IoTransferActivityId.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
