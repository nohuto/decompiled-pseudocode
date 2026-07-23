/*
 * XREFs of FsRtlNotifyFilterReportChangeLite @ 0x14070B740
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1409FE4F0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 */

__int64 __fastcall FsRtlNotifyFilterReportChangeLite(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  return FsRtlNotifyFilterReportChangeLiteEx(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0LL);
}
