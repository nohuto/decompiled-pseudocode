/*
 * XREFs of ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x140274E34
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x14006E13C (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E1E4 (Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006E238 (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?EvaluateDefaultHdrFlavor@MonitorColorState@DxgMonitor@@AEBA?AW4_DISPLAYCONFIG_HDR_FLAVOR@@XZ @ 0x140273ECC (-EvaluateDefaultHdrFlavor@MonitorColorState@DxgMonitor@@AEBA-AW4_DISPLAYCONFIG_HDR_FLAVOR@@XZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnInitialized(DxgMonitor::MonitorColorState *this)
{
  _QWORD *v2; // rdi
  char v3; // al
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r9
  const wchar_t *v7; // r8
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rcx
  char v13; // si
  char v14; // al
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  char v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 8);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) )
  {
    v11 = 1;
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(*(_QWORD *)*v2 + 56LL))(
           *v2,
           2LL,
           L"HDREnabled",
           0LL);
    v4 = *v2;
    *((_BYTE *)this + 456) = v3;
    *((_BYTE *)this + 457) = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, _QWORD))(*(_QWORD *)v4 + 56LL))(
                               v4,
                               2LL,
                               L"AutoColorManagementEnabled",
                               0LL);
    if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(*(_QWORD *)*v2 + 40LL))(
             *v2,
             2LL,
             L"HdrFlavor",
             0LL);
      if ( v5 != 1 && v5 != 2 )
        v5 = DxgMonitor::MonitorColorState::EvaluateDefaultHdrFlavor((__int64)this);
      *((_DWORD *)this + 116) = v5;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
    {
      v6 = 1000LL;
      v7 = L"DefaultIntegratedSdrWhiteLevel";
    }
    else
    {
      v6 = 3000LL;
      v7 = L"DefaultExternalSdrWhiteLevel";
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(*(_QWORD *)*v2 + 40LL))(
           *v2,
           8LL,
           v7,
           v6);
    *((_DWORD *)this + 119) = v8;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(*(_QWORD *)*v2 + 40LL))(
           *v2,
           2LL,
           L"SDRWhiteLevel",
           v8);
    v10 = *v2;
    *((_DWORD *)this + 119) = v9;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, _QWORD))(*(_QWORD *)v10 + 56LL))(
            v10,
            2LL,
            L"AutoColorManagementSupported",
            0LL);
  }
  *((_BYTE *)this + 468) = v11;
  if ( (unsigned int)Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = *v2;
    v21 = 0;
    v13 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v12 + 104LL))(
           v12,
           2LL,
           L"EnableExternalBrightessByDefault",
           &v21) )
    {
      v13 = 1;
      *((_BYTE *)this + 513) = v21;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(*(_QWORD *)*v2 + 56LL))(
            *v2,
            2LL,
            L"ExternalBrightnessEnabled",
            0LL);
    v15 = *v2;
    *((_BYTE *)this + 515) = v14;
    *((_BYTE *)this + 514) = v13;
    *((_DWORD *)this + 130) = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64))(*(_QWORD *)v15 + 40LL))(
                                v15,
                                2LL,
                                L"HdrBrightnessMode",
                                2LL);
  }
  if ( (unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(*(_QWORD *)*v2 + 40LL))(
            *v2,
            8LL,
            L"HdrBrightnessSdrLuminanceFactor",
            2000LL);
    v17 = *v2;
    *((_DWORD *)this + 132) = v16;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64))(*(_QWORD *)v17 + 40LL))(
            v17,
            8LL,
            L"HdrBrightnessHeadroomClampFactor",
            1000LL);
    v19 = *v2;
    *((_DWORD *)this + 133) = v18;
    LOBYTE(v20) = 1;
    *((_BYTE *)this + 524) = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64))(*(_QWORD *)v19 + 56LL))(
                               v19,
                               8LL,
                               L"HdrBrightnessSdrLuminanceClamp",
                               v20);
  }
}
