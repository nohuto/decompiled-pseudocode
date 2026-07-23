/*
 * XREFs of ExPreInitializeNls @ 0x1407BB72C
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 ExPreInitializeNls()
{
  if ( InitNlsTableBase )
  {
    _InterlockedExchange64(&qword_140FCFDF0, InitNlsTableBase + 4);
    _InterlockedExchange64(&qword_140FCFDF8, InitNlsTableBase + 2 * (*(unsigned __int16 *)(InitNlsTableBase + 2) + 2LL));
    qword_140FCFDE8 = InitNlsTableBase;
  }
  return 0LL;
}
