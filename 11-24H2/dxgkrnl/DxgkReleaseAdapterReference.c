/*
 * XREFs of DxgkReleaseAdapterReference @ 0x1401A08CC
 * Callers:
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A028 (--1CInterfaceCallContext@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

__int64 __fastcall DxgkReleaseAdapterReference(DXGADAPTER *a1)
{
  if ( a1 )
  {
    DXGADAPTER::ReleaseReference(a1);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 679;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
