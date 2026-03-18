/*
 * XREFs of ExPreInitializeNls @ 0x1407BB2DC
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 ExPreInitializeNls()
{
  if ( InitNlsTableBase )
  {
    _InterlockedExchange64(&qword_140FCEDF0, InitNlsTableBase + 4);
    _InterlockedExchange64(&qword_140FCEDF8, InitNlsTableBase + 2 * (*(unsigned __int16 *)(InitNlsTableBase + 2) + 2LL));
    qword_140FCEDE8 = InitNlsTableBase;
  }
  return 0LL;
}
