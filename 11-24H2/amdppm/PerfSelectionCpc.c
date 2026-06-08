/*
 * XREFs of PerfSelectionCpc @ 0x140003740
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x140002260 (PerformanceFromPercentage.c)
 */

__int64 __fastcall PerfSelectionCpc(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        __int64 a10,
        _QWORD *a11)
{
  unsigned int v11; // r10d
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  unsigned __int64 *v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx

  v11 = a3;
  if ( a2 >= a3 )
    v11 = a2;
  if ( v11 > a4 )
    v11 = a4;
  if ( a10 )
  {
    v12 = PerformanceFromPercentage(a1, v11);
    *v14 = v12;
    v16 = *(_QWORD *)(v15 + 88);
    if ( v12 < v16 )
      v16 = v12;
    if ( a9 )
      *a9 = v16 * *(unsigned int *)(v13 + 96) / *(_QWORD *)(v13 + 48);
  }
  if ( a11 )
    *a11 = 0LL;
  return v11;
}
