/*
 * XREFs of ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140351D90
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403515CC (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1400070E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWr.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     Feature_Bugfix_RemoveAcmDeveloperPreview__private_IsEnabledDeviceUsageNoInline @ 0x1400903E8 (Feature_Bugfix_RemoveAcmDeveloperPreview__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?SetWcgPolicySupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1401897D4 (-SetWcgPolicySupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?SetHdrEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x140275114 (-SetHdrEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?SetWcgEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14027541C (-SetWcgEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1402BFC70 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEA_N@Z @ 0x1404088B0 (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnFunctionDriverArrival(
        DxgMonitor::MonitorColorState *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  _QWORD *v4; // rcx
  char v5; // r14
  int v6; // edi
  int v7; // edi
  bool v8; // si
  __int64 v9; // rcx
  char v10; // al
  char v11; // di
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // di
  char v20; // si
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h] BYREF
  __int16 v27; // [rsp+90h] [rbp+40h] BYREF
  bool v28; // [rsp+A0h] [rbp+50h] BYREF
  int v29; // [rsp+A8h] [rbp+58h] BYREF

  v5 = DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
  if ( !v5 || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 72LL))(*v4) )
    goto LABEL_29;
  LOBYTE(v27) = 0;
  v6 = -(*((_BYTE *)this + 413) != 0);
  v29 = 0;
  v7 = v6 & 0x40000;
  DxgMonitor::MonitorColorState::_ReadDisplayHdrSupportFromPnpRegistry(
    this,
    (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *)&v29,
    (bool *)&v27);
  v8 = v29 >= 0 && ((v29 & 0x40000000) != 0 || (v29 & 0x20000000) != 0);
  v9 = *((_QWORD *)this + 1);
  v28 = 0;
  *((_DWORD *)this + 120) = v29 | v7;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, bool *))(*(_QWORD *)v9 + 104LL))(
          v9,
          2LL,
          L"HDREnabled",
          &v28);
  v11 = v27;
  if ( v10
    || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, bool *))(**((_QWORD **)this + 1) + 104LL))(
         *((_QWORD *)this + 1),
         2LL,
         L"AdvancedColorEnabled",
         &v28) )
  {
    DxgMonitor::MonitorColorState::SetHdrEnabled(this, v28);
    goto LABEL_24;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    v12 = *((_QWORD *)this + 1);
    LOBYTE(v27) = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, __int16 *))(*(_QWORD *)v12 + 104LL))(
            v12,
            1LL,
            L"EnableIntegratedPanelHdrByDefault",
            &v27) )
      (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(**((_QWORD **)this + 1) + 104LL))(
        *((_QWORD *)this + 1),
        8LL,
        L"EnableIntegratedPanelHdrByDefault",
        &v27);
    if ( !*((_BYTE *)this + 456) && (_BYTE)v27 )
    {
      DxgMonitor::MonitorColorState::SetHdrEnabled(this, 1);
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v13 + 112LL))(
        v13,
        0LL,
        a2);
    }
    goto LABEL_24;
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
LABEL_19:
    WdDiagNotifyUser(0LL, v15, 0LL, 0LL);
    goto LABEL_24;
  }
  if ( *((_DWORD *)this + 120) && v11 )
  {
    v15 = 11LL;
    goto LABEL_19;
  }
LABEL_24:
  if ( *((_DWORD *)this + 120)
    && v11
    && (unsigned int)dword_14015B660 > 5
    && tlgKeywordOn((__int64)&dword_14015B660, 0x400000200000LL) )
  {
    v29 = v8;
    v27 = 2;
    v25 = v18;
    v26 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v16,
      (__int64)&unk_14013E06C,
      v17,
      v18,
      (__int64)&v26,
      (__int64)&v27,
      (__int64)&v25,
      (__int64)&v29);
  }
LABEL_29:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) )
    return;
  v19 = 0;
  v20 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
            *((_QWORD *)this + 1),
            1LL,
            L"MicrosoftApprovedAcmSupport",
            0LL);
    if ( v19 )
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
              *((_QWORD *)this + 1),
              1LL,
              L"EnableIntegratedPanelAcmByDefault",
              0LL);
  }
  if ( !(unsigned int)Feature_Bugfix_RemoveAcmDeveloperPreview__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v19 )
      goto LABEL_41;
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21) < 3000 )
    {
LABEL_38:
      v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22) >= 3000
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
      {
        v19 = 1;
      }
      goto LABEL_41;
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 56LL))(
            *((_QWORD *)this + 1),
            8LL,
            L"EnableAcmSupportDeveloperPreview");
  }
  if ( !v19 )
    goto LABEL_38;
LABEL_41:
  DxgMonitor::MonitorColorState::SetWcgPolicySupported(this, v19);
  if ( v19 )
  {
    v23 = *((_QWORD *)this + 1);
    LOBYTE(v27) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, __int16 *))(*(_QWORD *)v23 + 104LL))(
           v23,
           2LL,
           L"AutoColorManagementEnabled",
           &v27)
      || !v5
      && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(**((_QWORD **)this + 1) + 104LL))(
           *((_QWORD *)this + 1),
           2LL,
           L"AdvancedColorEnabled",
           &v27)
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(**((_QWORD **)this + 1) + 104LL))(
           *((_QWORD *)this + 1),
           1LL,
           L"EnableIntegratedPanelAcmByDefault",
           &v27)
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int16 *))(**((_QWORD **)this + 1) + 104LL))(
           *((_QWORD *)this + 1),
           8LL,
           L"EnableIntegratedPanelAcmByDefault",
           &v27) )
    {
      DxgMonitor::MonitorColorState::SetWcgEnabled(this, v27);
    }
    else if ( v20 )
    {
      DxgMonitor::MonitorColorState::SetWcgEnabled(this, 1);
      if ( !*((_BYTE *)this + 456) )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
        (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v24 + 112LL))(
          v24,
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
