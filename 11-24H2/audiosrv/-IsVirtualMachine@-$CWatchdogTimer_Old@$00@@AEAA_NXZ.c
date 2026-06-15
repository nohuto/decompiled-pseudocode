/*
 * XREFs of ?IsVirtualMachine@?$CWatchdogTimer_Old@$00@@AEAA_NXZ @ 0x1800AF864
 * Callers:
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800AF5A4 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer_Old@$00@@AEAA_NXZ @ 0x1800AF6D8 (-HangIsProbablyReal@-$CWatchdogTimer_Old@$00@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 */

bool CWatchdogTimer_Old<1>::IsVirtualMachine()
{
  DWORD pcbData[4]; // [rsp+40h] [rbp-238h] BYREF
  _BYTE pvData[528]; // [rsp+50h] [rbp-228h] BYREF

  memset_0(pvData, 0, 0x208uLL);
  pcbData[0] = 520;
  return RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Virtual Machine\\Guest\\Parameters",
           L"PhysicalHostName",
           2u,
           0LL,
           pvData,
           pcbData) == 0;
}
