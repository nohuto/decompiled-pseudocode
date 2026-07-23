/*
 * XREFs of PpmHeteroHgsCpuSupportedForContainment @ 0x1405D437C
 * Callers:
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D4400 (PpmHeteroHgsDetectContainmentPresence.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B2278 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     KeQueryActiveNodeCount @ 0x1405B7F94 (KeQueryActiveNodeCount.c)
 */

bool PpmHeteroHgsCpuSupportedForContainment()
{
  bool v0; // bl
  unsigned __int64 IsEnabledNoReportingNoInline; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 CpuModel; // al
  __int64 v4; // rdx

  v0 = 0;
  IsEnabledNoReportingNoInline = Feature_PpmParkEx__private_IsEnabledNoReportingNoInline();
  if ( !(_DWORD)IsEnabledNoReportingNoInline
    || (unsigned __int16)KiActiveGroups <= 1u
    && (IsEnabledNoReportingNoInline = KeQueryActiveNodeCount(), (unsigned __int16)IsEnabledNoReportingNoInline <= 1u) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->CpuVendor == 2 && CurrentPrcb->CpuType == 6 )
    {
      CpuModel = CurrentPrcb->CpuModel;
      v0 = CpuModel == 0xAA
        || (LOBYTE(IsEnabledNoReportingNoInline) = CpuModel + 84, (unsigned __int8)IsEnabledNoReportingNoInline <= 0x21u)
        && (v4 = 0x306030201LL, _bittest64(&v4, IsEnabledNoReportingNoInline))
        || CurrentPrcb->CpuModel == 0xD5;
    }
  }
  return v0;
}
