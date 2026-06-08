/*
 * XREFs of PerfSelectionLegacyPcc @ 0x14000D280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionLegacyPcc(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  __int64 v11; // r10

  v11 = qword_140014B90;
  if ( a2 >= a3 )
    a3 = a2;
  if ( a3 > a4 )
    a3 = a4;
  if ( a10 )
    *a10 = 100 - a3;
  if ( a9 )
    *a9 = *(_DWORD *)(v11 + 28) * a3 / 0x64;
  if ( a11 )
    *a11 = 0LL;
  return a3;
}
