/*
 * XREFs of SpcIsHyperVCr3RspErrataPresent @ 0x1406956C4
 * Callers:
 *     KiIsBranchConfusionMitigationSupported @ 0x1405BA060 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsTsaMitigationSupported @ 0x1405BA280 (KiIsTsaMitigationSupported.c)
 *     SpcDetectKvaLeakage @ 0x140B53788 (SpcDetectKvaLeakage.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1406577F0 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorVersion @ 0x140657880 (HviGetHypervisorVersion.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140657AE0 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlGetCpuVendor @ 0x140B50884 (RtlGetCpuVendor.c)
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
