/*
 * XREFs of PerfSelectionCppcRequestMsr @ 0x140002110
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x140002260 (PerformanceFromPercentage.c)
 */

__int64 __fastcall PerfSelectionCppcRequestMsr(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        _DWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  unsigned int v12; // r10d
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // r11d
  int v18; // ebp
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // [rsp+78h] [rbp+50h]

  v12 = a3;
  if ( a2 >= a3 )
    v12 = a2;
  if ( v12 > a4 )
    v12 = a4;
  if ( a10 )
  {
    v14 = PerformanceFromPercentage(a1, v12);
    v18 = 0;
    v22 = 0LL;
    v19 = v14;
    if ( *(_BYTE *)(v15 + 125) && (a8 & 4) == 0 )
    {
      v18 = (unsigned __int8)v14 << 16;
      LODWORD(v22) = v18;
    }
    if ( *(_BYTE *)(v15 + 126) )
    {
      v18 |= (unsigned __int8)PerformanceFromPercentage(v15, v17) << 8;
      LODWORD(v22) = v18;
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v18 |= (unsigned __int8)PerformanceFromPercentage(a1, v16);
      LODWORD(v22) = v18;
    }
    if ( *(_BYTE *)(a1 + 128) )
      LODWORD(v22) = v18 | ((255 * a5 / 0x64u) << 24);
    v20 = v19;
    *a10 = v22;
    if ( (unsigned __int64)v19 >= *(_QWORD *)(a1 + 88) )
      v20 = *(_QWORD *)(a1 + 88);
    if ( a9 )
      *a9 = v20 * (unsigned __int64)*(unsigned int *)(a1 + 96) / *(_QWORD *)(a1 + 48);
  }
  result = v12;
  if ( a11 )
    *a11 = 0LL;
  return result;
}
