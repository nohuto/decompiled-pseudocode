/*
 * XREFs of PsQuerySystemAvailableCpusCount @ 0x1405E2C60
 * Callers:
 *     <none>
 * Callees:
 *     KeQuerySystemAvailableCpus @ 0x1405B594C (KeQuerySystemAvailableCpus.c)
 */

__int64 __fastcall PsQuerySystemAvailableCpusCount(_DWORD *a1, __int64 *a2)
{
  if ( a1 && a2 )
    return KeQuerySystemAvailableCpus(0LL, 0LL, a2, a1);
  else
    return 3221225485LL;
}
