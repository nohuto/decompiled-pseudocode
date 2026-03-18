/*
 * XREFs of ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028A668
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140289EA4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1400070E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x140007184 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tl.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline @ 0x14006DE94 (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?SetWcgPolicySupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14018BA24 (-SetWcgPolicySupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?SetHdrEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14027C230 (-SetHdrEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?SetWcgEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14027C538 (-SetWcgEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@AEA_N@Z @ 0x14027C74C (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x14035FB3C (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnFunctionDriverArrival(
        DxgMonitor::MonitorColorState *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  _QWORD *v4; // rcx
  bool v5; // r12
  bool v6; // cf
  int v7; // edi
  bool v8; // si
  __int64 v9; // rcx
  char v10; // al
  char v11; // di
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r10d
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // si
  char v25; // r15
  _QWORD *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // [rsp+50h] [rbp-10h] BYREF
  int v31; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h] BYREF
  __int16 v33; // [rsp+A0h] [rbp+40h] BYREF
  bool v34; // [rsp+B0h] [rbp+50h] BYREF
  int v35; // [rsp+B8h] [rbp+58h] BYREF

  v5 = DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
  if ( !v5 || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 72LL))(*v4) )
    goto LABEL_41;
  v6 = *((_BYTE *)this + 413) != 0;
  LOBYTE(v33) = 0;
  v35 = 0;
  v30 = 0;
  v7 = v6 ? 0x40000 : 0;
  DxgMonitor::MonitorColorState::_ReadDisplayHdrSupportFromPnpRegistry(
    this,
    (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *)&v35,
    (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *)&v30,
    (bool *)&v33);
  v8 = v35 >= 0 && ((v35 & 0x40000000) != 0 || (v35 & 0x20000000) != 0);
  *((_DWORD *)this + 120) = v35 | v7;
  if ( (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline() )
    *((_DWORD *)this + 121) = v30;
  v9 = *((_QWORD *)this + 1);
  v34 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, bool *))(*(_QWORD *)v9 + 104LL))(
          v9,
          2LL,
          L"HDREnabled",
          &v34);
  v11 = v33;
  if ( v10
    || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, bool *))(**((_QWORD **)this + 1) + 104LL))(
         *((_QWORD *)this + 1),
         2LL,
         L"AdvancedColorEnabled",
         &v34) )
  {
    DxgMonitor::MonitorColorState::SetHdrEnabled(this, v34);
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
    {
      v12 = *((_QWORD *)this + 1);
      LOBYTE(v33) = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, __int16 *))(*(_QWORD *)v12 + 104LL))(
              v12,
              1LL,
              L"EnableIntegratedPanelHdrByDefault",
              &v33) )
        (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(**((_QWORD **)this + 1) + 104LL))(
          *((_QWORD *)this + 1),
          8LL,
          L"EnableIntegratedPanelHdrByDefault",
          &v33);
      if ( !*((_BYTE *)this + 456) && (_BYTE)v33 )
      {
        DxgMonitor::MonitorColorState::SetHdrEnabled(this, 1);
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
        (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v13 + 112LL))(
          v13,
          0LL,
          a2);
      }
      goto LABEL_30;
    }
    if ( v8 || *((_BYTE *)this + 413) )
    {
      DxgMonitor::MonitorColorState::SetHdrEnabled(this, 1);
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v14 + 112LL))(
        v14,
        0LL,
        a2);
      v15 = 10LL;
LABEL_24:
      WdDiagNotifyUser(0LL, v15, 0LL, 0LL);
      goto LABEL_30;
    }
    if ( *((_DWORD *)this + 120) && v11
      || (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline()
      && *((_DWORD *)this + 121)
      && v11 )
    {
      v15 = 11LL;
      goto LABEL_24;
    }
  }
LABEL_30:
  IsEnabledDeviceUsageNoInline = Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline();
  if ( *((_DWORD *)this + 120) )
  {
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( *((_DWORD *)this + 121)
        && v11
        && (unsigned int)dword_14015E650 > 5
        && tlgKeywordOn((__int64)&dword_14015E650, 0x400000200000LL) )
      {
        v35 = v8;
        v33 = 3;
        v30 = v20;
        v31 = v19;
        v32 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v17,
          (__int64)&unk_140140CBA,
          v18,
          v19,
          (__int64)&v32,
          (__int64)&v33,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v35);
      }
    }
    else if ( v11 && (unsigned int)dword_14015E650 > 5 && tlgKeywordOn((__int64)&dword_14015E650, 0x400000200000LL) )
    {
      v35 = v8;
      v31 = v23;
      v33 = 2;
      v32 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v21,
        (__int64)&unk_140140C44,
        v22,
        v23,
        (__int64)&v32,
        (__int64)&v33,
        (__int64)&v31,
        (__int64)&v35);
    }
  }
LABEL_41:
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) )
  {
    v24 = 0;
    v25 = 0;
    v26 = (_QWORD *)((char *)this + 8);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this)
      && (v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(*(_QWORD *)*v26 + 56LL))(
                  *v26,
                  1LL,
                  L"MicrosoftApprovedAcmSupport")) != 0 )
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(*(_QWORD *)*v26 + 56LL))(
              *v26,
              1LL,
              L"EnableIntegratedPanelAcmByDefault");
    }
    else
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27) >= 3000
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
      {
        v24 = 1;
      }
    }
    DxgMonitor::MonitorColorState::SetWcgPolicySupported(this, v24);
    if ( v24 )
    {
      v28 = *v26;
      LOBYTE(v33) = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, __int16 *))(*(_QWORD *)v28 + 104LL))(
             v28,
             2LL,
             L"AutoColorManagementEnabled",
             &v33)
        || !v5
        && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(*(_QWORD *)*v26 + 104LL))(
             *v26,
             2LL,
             L"AdvancedColorEnabled",
             &v33)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(*(_QWORD *)*v26 + 104LL))(
             *v26,
             1LL,
             L"EnableIntegratedPanelAcmByDefault",
             &v33)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(*(_QWORD *)*v26 + 104LL))(
             *v26,
             8LL,
             L"EnableIntegratedPanelAcmByDefault",
             &v33) )
      {
        DxgMonitor::MonitorColorState::SetWcgEnabled(this, v33);
      }
      else if ( v25 )
      {
        DxgMonitor::MonitorColorState::SetWcgEnabled(this, 1);
        if ( !*((_BYTE *)this + 456) )
        {
          v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
          (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v29 + 112LL))(
            v29,
            0LL,
            a2);
        }
      }
    }
    else
    {
      *((_BYTE *)this + 457) = 0;
    }
  }
}
