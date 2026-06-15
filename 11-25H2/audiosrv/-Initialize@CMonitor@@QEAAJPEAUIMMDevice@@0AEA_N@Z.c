/*
 * XREFs of ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18007ACB0
 * Callers:
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18007A700 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180111DA8 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18002CF84 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_qq @ 0x1800A5DA4 (WPP_SF_qq.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800C4724 (WPP_SF_dd.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 *     ??$MakeAndInitialize@VCMonitorNotification@CMonitor@@V12@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVCMonitorNotification@CMonitor@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@$$QEAPEAV4@@Z @ 0x180114548 (--$MakeAndInitialize@VCMonitorNotification@CMonitor@@V12@W4__MIDL___MIDL_itf_mmdeviceapi_0000_00.c)
 *     ??0?$CComQIPtr@UIAudioClient2@@$1?_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180114674 (--0-$CComQIPtr@UIAudioClient2@@$1-_GUID_726778cd_f60a_4eda_82de_e47610cd78aa@@3U__s_GUID@@B@ATL@.c)
 *     ??0?$CComQIPtr@UIAudioClientInternal@@$1?_GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1801146B4 (--0-$CComQIPtr@UIAudioClientInternal@@$1-_GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb@@3U__s_GUID@.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180114EA0 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 *     ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x1801159EC (-SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CMonitor::Initialize(CMonitor *this, struct IMMDevice *a2, struct IMMDevice *a3, bool *a4)
{
  bool *v4; // r15
  _QWORD *v8; // rcx
  int v9; // ebx
  PTP_WORK ThreadpoolWork; // rax
  signed int LastError; // eax
  _QWORD *v12; // r12
  _QWORD *v13; // r13
  int v14; // eax
  void (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // r9
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  bool *v20; // [rsp+40h] [rbp-49h]
  int v21; // [rsp+48h] [rbp-41h] BYREF
  __int64 v22; // [rsp+50h] [rbp-39h] BYREF
  CMonitor *v23; // [rsp+58h] [rbp-31h] BYREF
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  LPCRITICAL_SECTION v25[2]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE pvar[28]; // [rsp+78h] [rbp-11h] BYREF
  int v27; // [rsp+94h] [rbp+Bh]

  v4 = a4;
  v20 = a4;
  v22 = 0LL;
  v21 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v25, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this);
    v8 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 18) && *((_DWORD *)this + 18) != 6 )
  {
    if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x800000) != 0 && *((_BYTE *)v8 + 25) >= 2u )
      WPP_SF_(v8[2], 11LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
    *v4 = 0;
    v9 = -2147467259;
    goto LABEL_59;
  }
  *v4 = 1;
  *((_DWORD *)this + 18) = 1;
  ThreadpoolWork = CreateThreadpoolWork(CMonitor::TerminateMonitorInWorkerThread, this, 0LL);
  *((_QWORD *)this + 25) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this);
    }
    v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
           &v22);
    if ( v9 < 0 )
      goto LABEL_54;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 24LL))(v22, &v21);
    if ( v9 < 0 )
      goto LABEL_54;
    v12 = (_QWORD *)((char *)this + 104);
    v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(a2, &IID_IAudioClient, 1LL);
    if ( v9 < 0 )
      goto LABEL_54;
    v13 = (_QWORD *)((char *)this + 160);
    v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a3->lpVtbl->Activate)(a3, &IID_IAudioClient, 1LL);
    if ( v9 < 0 )
      goto LABEL_54;
    ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
      &v19,
      *v12);
    if ( !v19 )
      goto LABEL_36;
    memset(&pvar[4], 0, 24);
    v27 = 0;
    *(_DWORD *)pvar = 32;
    *(_DWORD *)&pvar[8] = *((_DWORD *)this + 21);
    *(_DWORD *)&pvar[20] = *((_DWORD *)this + 22) != 0;
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 128LL))(v19, pvar);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
    }
    if ( v9 >= 0 )
    {
LABEL_36:
      ATL::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>::CComQIPtr<IAudioClient2,&__s_GUID const _GUID_726778cd_f60a_4eda_82de_e47610cd78aa>(
        &v18,
        *v13);
      if ( !v18 )
        goto LABEL_43;
      memset(&pvar[4], 0, 24);
      v27 = 0;
      *(_DWORD *)pvar = 32;
      *(_DWORD *)&pvar[8] = *((_DWORD *)this + 20);
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 128LL))(v18, pvar);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
      }
      if ( v9 >= 0 )
      {
LABEL_43:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
        *v4 = 0;
        v14 = CMonitor::MuteInputLineControls(a2, a3);
        if ( v14 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            16LL,
            &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
            (unsigned int)v14);
        }
        v9 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 96);
        if ( v9 < 0 )
          goto LABEL_54;
        v9 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a3->lpVtbl->GetId)(a3, (char *)this + 152);
        if ( v9 < 0 )
          goto LABEL_54;
        v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v12 + 64LL))(*v12, (char *)this + 112);
        if ( v9 >= 0 )
        {
          v18 = 0LL;
          v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(
                 a2,
                 0LL,
                 &v18);
          if ( v9 < 0 )
            goto LABEL_52;
          memset(pvar, 0, 24);
          v9 = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *))(*(_QWORD *)v18 + 40LL))(
                 v18,
                 &PKEY_MonitorPauseOnBattery,
                 pvar);
          if ( v9 < 0 )
            goto LABEL_52;
          if ( *(_WORD *)pvar == 11 )
            *((_BYTE *)this + 77) = *(_WORD *)&pvar[8] == 0xFFFF;
          PropVariantClear((PROPVARIANT *)pvar);
          memset(pvar, 0, 24);
          v9 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, _BYTE *))(*(_QWORD *)v18 + 40LL))(
                 v18,
                 &PKEY_AudioEndpoint_GUID,
                 pvar);
          if ( v9 < 0
            || *(_WORD *)pvar == 31 && (v9 = CLSIDFromString(*(LPCOLESTR *)&pvar[8], (LPCLSID)this + 8), v9 < 0) )
          {
LABEL_52:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
          }
          else
          {
            PropVariantClear((PROPVARIANT *)pvar);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
            v24 = 0LL;
            ATL::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb>::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb>(
              &v19,
              *v12);
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v19 + 48LL))(
                   v19,
                   *((_QWORD *)this + 14),
                   0LL,
                   &v24);
            if ( v9 < 0
              || (v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(*(_QWORD *)*v12 + 112LL))(
                         *v12,
                         &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
                         (char *)this + 120),
                  v9 < 0)
              || (v23 = this,
                  LODWORD(v18) = 1,
                  v9 = Microsoft::WRL::Details::MakeAndInitialize<CMonitor::CMonitorNotification,CMonitor::CMonitorNotification,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001,CMonitor *>(
                         (char *)this + 144,
                         &v18,
                         &v23),
                  v9 < 0)
              || (wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19),
                  ATL::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb>::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb>(
                    &v19,
                    *v13),
                  v9 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v19 + 56LL))(
                         v19,
                         (char *)this + 128,
                         v24),
                  v9 < 0) )
            {
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
            }
            else
            {
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
              v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**((_QWORD **)this + 20) + 112LL))(
                     *((_QWORD *)this + 20),
                     &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd,
                     (char *)this + 168);
              if ( v9 >= 0 )
              {
                v16 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 21);
                v17 = 0LL;
                v19 = 0LL;
                if ( v16 )
                {
                  (**v16)(v16, &GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f, &v19);
                  v17 = v19;
                }
                v18 = 0LL;
                memset(pvar, 0, 24);
                v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 168LL))(v17, &v18);
                if ( v9 < 0
                  || (strcpy(pvar, "\v"),
                      *(_WORD *)&pvar[8] = -1,
                      v9 = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *))(*(_QWORD *)v18 + 48LL))(
                             v18,
                             &PKEY_AudioSession_IsCaptureMonitorSession,
                             pvar),
                      v9 < 0)
                  || (memset(pvar, 0, 24),
                      *(_WORD *)pvar = 31,
                      *(_QWORD *)&pvar[8] = *((_QWORD *)this + 12),
                      v9 = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *))(*(_QWORD *)v18 + 48LL))(
                             v18,
                             &PKEY_AudioSession_CaptureMonitorEndpointId,
                             pvar),
                      v9 < 0) )
                {
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
                }
                else
                {
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
                  v23 = this;
                  LODWORD(v18) = 0;
                  v9 = Microsoft::WRL::Details::MakeAndInitialize<CMonitor::CMonitorNotification,CMonitor::CMonitorNotification,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001,CMonitor *>(
                         (char *)this + 176,
                         &v18,
                         &v23);
                  if ( v9 >= 0 )
                  {
                    v9 = CMonitor::SetSessionTitleAndIcon(this, a2);
                    if ( v9 >= 0 )
                    {
                      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 15) + 80LL))(
                             *((_QWORD *)this + 15),
                             *((_QWORD *)this + 18));
                      if ( v9 >= 0 )
                      {
                        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 21) + 80LL))(
                               *((_QWORD *)this + 21),
                               *((_QWORD *)this + 22));
                        if ( v9 >= 0 )
                        {
                          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                          {
                            WPP_SF_(
                              *((_QWORD *)WPP_GLOBAL_Control + 2),
                              17LL,
                              &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
                          }
                          *((_DWORD *)this + 18) = 2;
                          *((_BYTE *)this + 76) = 0;
                          goto LABEL_59;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v4 = v20;
LABEL_54:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            18LL,
            &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
            this,
            v9);
        }
        *((_BYTE *)this + 76) = 1;
        *((_DWORD *)this + 18) = *v4 ? 7 : 0;
        goto LABEL_59;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    goto LABEL_54;
  }
  LastError = GetLastError();
  v9 = LastError;
  if ( LastError > 0 )
    v9 = (unsigned __int16)LastError | 0x80070000;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
      (unsigned int)v9);
  }
  if ( v9 < 0 )
    goto LABEL_54;
LABEL_59:
  ATL::CCritSecLock::~CCritSecLock(v25);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
  return (unsigned int)v9;
}
