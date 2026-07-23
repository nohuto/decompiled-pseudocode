/*
 * XREFs of HalpMcaReportError @ 0x14053D9E4
 * Callers:
 *     HalpCmcPollProcessor @ 0x1404784BC (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x14053DD18 (HalpMceHandlerCore.c)
 *     HalpMceHandlerWithRendezvous @ 0x14053DEC0 (HalpMceHandlerWithRendezvous.c)
 *     HalHandleMcheck @ 0x1405409D0 (HalHandleMcheck.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4DA4C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1404204D8 (WheapGetErrorSource.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpTranslateToLegacyMcaException @ 0x14053E040 (HalpTranslateToLegacyMcaException.c)
 *     HalpShouldRecoveryBeAttempted @ 0x14055294C (HalpShouldRecoveryBeAttempted.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpMcaReportError(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r8
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v10; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v11; // [rsp+50h] [rbp-B0h]

  memset_0(BugCheckParameter2, 0, 0x100uLL);
  if ( !a1 )
  {
    if ( a2 )
    {
      HalpTranslateToLegacyMcaException(a2, BugCheckParameter2);
      KeBugCheckEx(0x9Cu, v10, (ULONG_PTR)BugCheckParameter2, HIDWORD(v11), (unsigned int)v11);
    }
    memset_0(BugCheckParameter2, 0, 0x100uLL);
    LODWORD(BugCheckParameter2[0]) = 1;
    BugCheckParameter2[1] = MEMORY[0xFFFFF78000000014];
    v9 = a3;
    if ( a3 > 0x80000000 )
      KeBugCheckEx(0x9Cu, a3, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x9Cu, 0LL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  WheapGetErrorSource((__int64)&WheapErrorSourceTable, *(_DWORD *)(a1 + 24));
  if ( HalpGetCpuVendor() == 1 )
  {
    if ( HalpMcaScalableRasSupported )
      *(_DWORD *)(a1 + 12) |= 0x40u;
    if ( a2 && !(unsigned __int8)HalpShouldRecoveryBeAttempted(*(unsigned int *)(a2 + 4), a2 + 40) )
      *(_DWORD *)(a1 + 12) |= 0x100u;
  }
  if ( v6 )
    PshedRetrieveErrorInfo(a1, v6);
  return WheaReportHwError(a1);
}
