/*
 * XREFs of ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x1800B4148
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800D0124 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180059E78 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 */

// Hidden C++ exception states: #wind=2
CAudioHealthMonitor *__fastcall CAudioHealthMonitor::CAudioHealthMonitor(CAudioHealthMonitor *this, int a2)
{
  HANDLE v3; // rax
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = &CAudioHealthMonitor::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 16;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *(GUID *)((char *)this + 72) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 11) = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    *(_QWORD *)&EventAttributes.nLength = 24LL;
    *(_OWORD *)&EventAttributes.lpSecurityDescriptor = 0LL;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GA;;;S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775)",
           1u,
           &EventAttributes.lpSecurityDescriptor,
           0LL) )
    {
      v3 = CreateEventW(&EventAttributes, 1, 0, L"Local\\AudioDrvCallHang");
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)this + 11,
        v3);
      LocalFree(EventAttributes.lpSecurityDescriptor);
    }
  }
  return this;
}
