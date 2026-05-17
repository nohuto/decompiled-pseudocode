/*
 * XREFs of LdrpInitializeProcessWrapperFilter @ 0x18015EE10
 * Callers:
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 * Callees:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 */

__int64 __fastcall LdrpInitializeProcessWrapperFilter(__int64 *a1, _DWORD *a2)
{
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrinit.c",
    3068,
    (__int64)"LdrpInitializeProcessWrapperFilter",
    0,
    "Process initialization raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
    *(_DWORD *)*a1);
  if ( g_LdrBreakOnLdrpInitializeProcessFailure )
    __debugbreak();
  *a2 = (int)RtlReportException(*a1, a1[1], 2u) >= 0;
  return 1LL;
}
