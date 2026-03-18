/*
 * XREFs of ExPreInitializeNls @ 0x1407ABE2C
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 ExPreInitializeNls()
{
  if ( InitNlsTableBase )
  {
    _InterlockedExchange64(&qword_140FCEE70, InitNlsTableBase + 4);
    _InterlockedExchange64(&qword_140FCEE78, InitNlsTableBase + 2 * (*(unsigned __int16 *)(InitNlsTableBase + 2) + 2LL));
    qword_140FCEE68 = InitNlsTableBase;
  }
  return 0LL;
}
