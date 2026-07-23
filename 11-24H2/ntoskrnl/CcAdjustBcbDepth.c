/*
 * XREFs of CcAdjustBcbDepth @ 0x1406B6A00
 * Callers:
 *     CcBcbProfiler @ 0x1405055A0 (CcBcbProfiler.c)
 *     sub_1406FA130 @ 0x1406FA130 (sub_1406FA130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcAdjustBcbDepth(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  _mm_lfence();
  return a6(a1);
}
