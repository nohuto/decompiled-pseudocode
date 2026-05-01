/*
 * XREFs of CrmGlobalsPeriodicRundown @ 0x1800709A0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1800640EC (LookUpTableFlushComplete.c)
 */

__int64 CrmGlobalsPeriodicRundown()
{
  if ( (void (__fastcall *)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1800E7310 == TlgAggregateInternalRegisteredProviderEtwCallback )
    LookUpTableFlushComplete(qword_1800E7318);
  return CrmGlobalsRundown();
}
