/*
 * XREFs of NtMapViewOfSectionEx @ 0x14099F080
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x14099F100 (MiMapViewOfSectionExCommon.c)
 */

__int64 __fastcall NtMapViewOfSectionEx(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        volatile void *a8,
        int a9)
{
  return MiMapViewOfSectionExCommon(
           a1,
           a2,
           0,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode,
           0);
}
