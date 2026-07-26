/*
 * XREFs of ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400E489C
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x14009EAD0 (WPP_RECORDER_SF_S.c)
 *     HviGetHardwareFeatures @ 0x1400EC6E8 (HviGetHardwareFeatures.c)
 *     HviIsAnyHypervisorPresent @ 0x1400EC798 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1400EC7F4 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

void ndisDoesSystemSupportSriov(void)
{
  const wchar_t *v0; // rax
  __int128 v1; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      138,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids);
  if ( (unsigned __int8)HviIsAnyHypervisorPresent() && (unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
  {
    HviGetHardwareFeatures(&v1);
    ndisSystemSupportsSriov = (v1 & 0x30) == 48;
  }
  if ( ndisSriovSupportTestOverride )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        26,
        139,
        (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids);
    ndisSystemSupportsSriov = 1;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v0 = L"Yes";
    if ( ndisSystemSupportsSriov != 1 )
      v0 = (const wchar_t *)L"No";
    WPP_RECORDER_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x8Cu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v0);
  }
}
