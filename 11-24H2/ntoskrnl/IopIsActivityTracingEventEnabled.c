/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1404ABEC4
 * Callers:
 *     IoReuseIrp @ 0x1402C2EB0 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x140449990 (IopInitActivityIdIrp.c)
 *     IoTransferActivityId @ 0x1404ABE60 (IoTransferActivityId.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
