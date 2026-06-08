/*
 * XREFs of PerfSelectionFeedback @ 0x14000BCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionFeedback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  if ( a10 )
    *a10 = 0LL;
  if ( a11 )
    *a11 = 0LL;
  if ( a9 )
    *a9 = *(_DWORD *)(a1 + 568);
  return 100LL;
}
