/*
 * XREFs of PepPerfSelectionHandler @ 0x14000C4C0
 * Callers:
 *     <none>
 * Callees:
 *     PepPerformanceFromPercentage @ 0x14000C784 (PepPerformanceFromPercentage.c)
 */

__int64 __fastcall PepPerfSelectionHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        _DWORD *a9,
        __int64 a10,
        _QWORD *a11)
{
  unsigned int v11; // r10d
  unsigned int v13; // eax
  _QWORD *v14; // r11
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // eax

  v11 = a3;
  if ( a2 >= a3 )
  {
    v11 = a2;
    if ( a2 > a4 )
      v11 = a4;
  }
  if ( a10 )
  {
    v13 = PepPerformanceFromPercentage(a1, v11);
    v15 = 0LL;
    v16 = v13;
    if ( (a8 & 4) == 0 )
      v15 = v13;
    *v14 = v15;
    v17 = *(_DWORD *)(a1 + 64);
    if ( v16 < v17 )
      v17 = v16;
    if ( a9 )
      *a9 = v17
          * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL)
          / *(unsigned int *)(*(_QWORD *)(a1 + 40) + 8LL);
  }
  if ( a11 )
    *a11 = 0LL;
  return v11;
}
