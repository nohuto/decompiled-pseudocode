/*
 * XREFs of HalBuildScatterGatherListEx @ 0x1404ACD30
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuildScatterGatherList @ 0x140386448 (HalpBuildScatterGatherList.c)
 */

__int64 __fastcall HalBuildScatterGatherListEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4,
        unsigned __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        _QWORD *a15)
{
  int v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-20h]

  if ( a3 && a11 && (a8 || (a7 & 1) != 0 && a15) )
    return HalpBuildScatterGatherList(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, v16, v17, a15);
  else
    return 3221225485LL;
}
