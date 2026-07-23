/*
 * XREFs of SpcIsHyperVCr3RspErrataPresent @ 0x1406A1B6C
 * Callers:
 *     KiIsBranchConfusionMitigationSupported @ 0x1405BB4DC (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsTsaMitigationSupported @ 0x1405BB6FC (KiIsTsaMitigationSupported.c)
 *     SpcDetectKvaLeakage @ 0x140B659A8 (SpcDetectKvaLeakage.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorVersion @ 0x140662430 (HviGetHypervisorVersion.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140662690 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlGetCpuVendor @ 0x140B62A80 (RtlGetCpuVendor.c)
 */

__int64 SpcIsHyperVCr3RspErrataPresent()
{
  unsigned int v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( (unsigned __int8)RtlGetCpuVendor() != 1 )
    return 0LL;
  v0 = 0;
  if ( !HviIsHypervisorVendorMicrosoft() )
    return 0LL;
  v3 = 0LL;
  HviGetHypervisorFeatures(&v3);
  if ( (v3 & 0x100000000000LL) != 0 )
    return 0LL;
  HviGetHypervisorVersion(&v2);
  if ( (unsigned int)v2 >= 0x429D )
    return 0LL;
  if ( (_DWORD)v2 != 14393 )
    return 1LL;
  LOBYTE(v0) = (HIDWORD(v2) & 0xFFFFFFu) <= 0x1407;
  return v0;
}
