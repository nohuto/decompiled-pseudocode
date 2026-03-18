/*
 * XREFs of PsQueryProcessAvailableCpus @ 0x1405E55E0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryProcessAvailableCpus @ 0x1405B82AC (KeQueryProcessAvailableCpus.c)
 */

__int64 __fastcall PsQueryProcessAvailableCpus(__int64 a1, struct _KAFFINITY_EX *a2, _QWORD *a3, __int64 *a4)
{
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  if ( a2->Size >= (unsigned __int16)KiActiveGroups )
    return KeQueryProcessAvailableCpus(a1, a2, a3, a4, 0LL);
  return 3221225507LL;
}
