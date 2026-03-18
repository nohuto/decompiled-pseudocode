/*
 * XREFs of PpmHeteroHgsCpuSupportedForContainment @ 0x1405D6DB0
 * Callers:
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D6E5C (PpmHeteroHgsDetectContainmentPresence.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B5004 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     KeQueryActiveNodeCount @ 0x1405BA964 (KeQueryActiveNodeCount.c)
 *     Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline @ 0x1405D6D08 (Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall PpmHeteroHgsCpuSupportedForContainment(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  unsigned __int64 IsEnabledNoReportingNoInline; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 CpuModel; // al
  __int64 v8; // rcx

  v4 = 0;
  IsEnabledNoReportingNoInline = Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(a1, a2, a3, a4);
  if ( !(_DWORD)IsEnabledNoReportingNoInline
    || (unsigned __int16)KiActiveGroups <= 1u
    && (IsEnabledNoReportingNoInline = KeQueryActiveNodeCount(), (unsigned __int16)IsEnabledNoReportingNoInline <= 1u) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->CpuVendor == 2 && CurrentPrcb->CpuType == 6 )
    {
      CpuModel = CurrentPrcb->CpuModel;
      if ( CpuModel == 0xAA
        || (LOBYTE(IsEnabledNoReportingNoInline) = CpuModel + 84, (unsigned __int8)IsEnabledNoReportingNoInline <= 0x21u)
        && (v8 = 0x306030201LL, _bittest64(&v8, IsEnabledNoReportingNoInline)) )
      {
        v4 = 1;
      }
    }
    if ( (unsigned int)Feature_WclContainmentOptIn__private_IsEnabledDeviceUsageNoInline()
      && !v4
      && CurrentPrcb->CpuVendor == 2
      && CurrentPrcb->CpuType == 6 )
    {
      return CurrentPrcb->CpuModel == 0xD5;
    }
  }
  return v4;
}
