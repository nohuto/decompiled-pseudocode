/*
 * XREFs of DxgkEnsureVmBusInterface @ 0x1401D1D84
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x140240820 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1401CEBB0 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 */

__int64 DxgkEnsureVmBusInterface()
{
  DXGGLOBAL *Global; // rax
  int v1; // eax
  __int64 v2; // rdi

  Global = DXGGLOBAL::GetGlobal();
  v1 = DXGGLOBAL::EnsureVmBusInterface(Global);
  v2 = v1;
  if ( v1 < 0 )
  {
    WdLogSingleEntry1(2LL, v1);
    WdLogGlobalForLineNumber = 7436;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to create global VM bus channel, returning 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v2;
}
