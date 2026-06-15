/*
 * XREFs of ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1801116CC
 * Callers:
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180110F80 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18002CF84 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800537D0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800557B0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18006FB98 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18007A9EC (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18008445C (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18008DF28 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     WPP_SF_qq @ 0x1800A5DA4 (WPP_SF_qq.c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800C84DC (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18010FC20 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18010FC54 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@PEAPEAVCaptureMonitor@1@@Z @ 0x18010FE60 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSe.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x180112324 (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x18011244C (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x180113554 (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x180113C04 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180113C94 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180115B44 (-Start@CMonitor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CMonitorManager::Initialize(CMonitorManager *this, int a2, __int64 a3, const unsigned int *a4)
{
  CMonitorManager::CaptureMonitor *v4; // r14
  HRESULT restarted; // edi
  unsigned int v6; // edx
  unsigned __int64 v7; // r8
  const unsigned int *v8; // r9
  struct IUnknown **v9; // rbx
  struct IUnknown *v10; // rcx
  unsigned int v11; // r12d
  int v12; // eax
  struct IMMDevice *v13; // rbx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  int v15; // eax
  _QWORD *v16; // rcx
  unsigned __int16 v17; // dx
  void *v18; // rcx
  const unsigned __int16 *v19; // r8
  int v20; // edi
  struct CMonitorManager::CaptureMonitor *v21; // rbx
  CMonitor *v22; // rcx
  struct _RTL_CRITICAL_SECTION *v23; // rbx
  _QWORD *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rax
  CMonitorManager::CaptureMonitor *v28; // rbx
  int *v30; // rbx
  int *v31; // rbx
  struct IMMDevice *v32; // [rsp+40h] [rbp-D8h] BYREF
  struct CMonitorManager::CaptureMonitor *v33; // [rsp+48h] [rbp-D0h] BYREF
  unsigned __int16 *v34; // [rsp+50h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-B8h] BYREF
  unsigned int v37; // [rsp+68h] [rbp-B0h] BYREF
  struct IUnknown *v38; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-A0h] BYREF
  int v40; // [rsp+80h] [rbp-98h]
  _DWORD *v41; // [rsp+88h] [rbp-90h]
  __int128 v42; // [rsp+90h] [rbp-88h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-78h]
  __int128 v44; // [rsp+A8h] [rbp-70h]
  int v45; // [rsp+B8h] [rbp-60h]
  ATL::CAtlException *v46; // [rsp+C0h] [rbp-58h] BYREF
  ATL::CAtlException *v47; // [rsp+C8h] [rbp-50h] BYREF
  LPCRITICAL_SECTION v48[9]; // [rsp+D0h] [rbp-48h] BYREF
  CMonitorManager::CaptureMonitor *v49; // [rsp+120h] [rbp+8h] BYREF
  int v50; // [rsp+128h] [rbp+10h] BYREF
  __int64 v51; // [rsp+130h] [rbp+18h]
  const unsigned int *v52; // [rsp+138h] [rbp+20h] BYREF

  v52 = a4;
  v51 = a3;
  v50 = a2;
  v49 = this;
  v4 = this;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids);
  }
  v39 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 10;
  v38 = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v48, (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 16));
  v41 = (_DWORD *)((char *)v4 + 56);
  if ( *((_DWORD *)v4 + 14) && *((_DWORD *)v4 + 14) != 3 )
  {
    restarted = -2147024809;
    goto LABEL_68;
  }
  CMonitorManager::InitializeRegistryWatcher(v4);
  restarted = CMonitorManager::InitializeMonitorRestartTimer(v4, v6, v7, v8);
  if ( restarted < 0 )
    goto LABEL_68;
  v9 = (struct IUnknown **)((char *)v4 + 64);
  restarted = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                (LPVOID *)v4 + 8);
  if ( restarted < 0 )
    goto LABEL_68;
  v10 = v38;
  if ( v38 != *v9 )
  {
    ATL::AtlComQIPtrAssign(&v38, *v9, &GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0);
    v10 = v38;
  }
  if ( v10 )
    ((void (__fastcall *)(struct IUnknown *, __int64))v10->lpVtbl[3].Release)(v10, 1LL);
  restarted = ((__int64 (__fastcall *)(struct IUnknown *, CMonitorManager::CaptureMonitor *))(*v9)->lpVtbl[2].QueryInterface)(
                *v9,
                v4);
  if ( restarted < 0
    || (restarted = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64, __int64 *))(*v9)->lpVtbl[1].QueryInterface)(
                      *v9,
                      2LL,
                      1LL,
                      &v39),
        restarted < 0)
    || (v37 = 0,
        restarted = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39 + 24LL))(v39, &v37),
        restarted < 0) )
  {
LABEL_68:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
        restarted);
    }
    v26 = *((_QWORD *)v4 + 8);
    if ( v26 )
    {
      (*(void (__fastcall **)(__int64, CMonitorManager::CaptureMonitor *))(*(_QWORD *)v26 + 56LL))(v26, v4);
      ATL::CComPtrBase<IPart>::Release((_QWORD *)v4 + 8);
    }
    while ( v43 )
    {
      v27 = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
                         &v42,
                         &v52);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v49, *v27);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v52);
      v28 = v49;
      CMonitor::StopIfRunning(*((CMonitor **)v49 + 26));
      CMonitorManager::CaptureMonitor::UninitializeSynchronously(v28);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v49);
    }
    CMonitorManager::CleanupMonitorRestartTimer(v4);
    goto LABEL_77;
  }
  v11 = 0;
  while ( 2 )
  {
    LODWORD(v51) = v11;
    if ( v11 < v37 )
    {
      v32 = 0LL;
      v36 = 0LL;
      pv = 0LL;
      LOBYTE(v50) = 0;
      LODWORD(v52) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v39 + 32LL))(v39, v11, &v32) < 0
        || ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v32->lpVtbl->QueryInterface)(
             v32,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v36) < 0
        || (*(int (__fastcall **)(__int64, const unsigned int **))(*(_QWORD *)v36 + 24LL))(v36, &v52) < 0 )
      {
        v18 = 0LL;
        goto LABEL_62;
      }
      v12 = (int)v52;
      if ( (_DWORD)v52 == 1 )
      {
        if ( CMonitor::IsCaptureMonitorEnabled(v32, (unsigned __int16 **)&pv, (bool *)&v50) )
          goto LABEL_27;
        v12 = (int)v52;
      }
      if ( v12 || !CMonitorManager::IsRenderMirrorEnabled(v4, v32, (unsigned __int16 **)&pv) )
        goto LABEL_34;
LABEL_27:
      v33 = 0LL;
      v34 = 0LL;
      v13 = v32;
      GetId = v32->lpVtbl->GetId;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v34,
        0LL);
      v15 = ((__int64 (__fastcall *)(struct IMMDevice *, unsigned __int16 **))GetId)(v13, &v34);
      if ( v15 < 0 )
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
        {
          goto LABEL_33;
        }
        v17 = 11;
LABEL_32:
        WPP_SF_d(v16[2], v17, (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, v15);
LABEL_33:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v34);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
LABEL_34:
        v18 = pv;
LABEL_62:
        CoTaskMemFree(v18);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
        goto LABEL_63;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids);
      }
      v19 = &LocaleName;
      if ( !(_BYTE)v50 )
        v19 = (const unsigned __int16 *)pv;
      v15 = CMonitorManager::CreateMonitor(v4, v34, v19, 0LL, 0, 0LL, &v33);
      v20 = v15;
      v40 = v15;
      if ( v15 < 0 )
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
        {
          goto LABEL_33;
        }
        v17 = 13;
        goto LABEL_32;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        v21 = v33;
      }
      else
      {
        v21 = v33;
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xEu,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          v33,
          *((_QWORD *)v33 + 26));
      }
      try
      {
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          (__int64 *)&v42,
          (__int64)v21);
      }
      catch ( ATL::CAtlException *v46 )
      {
        v30 = (int *)v46;
        if ( *(_DWORD *)v46 == -1073741571 )
          _o__resetstkoflw();
        v50 = *v30;
        if ( v50 >= 0 )
        {
          v4 = v49;
          v11 = v51;
          v21 = v33;
          v20 = v40;
          goto LABEL_58;
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xFu,
            (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
            v50);
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v34);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
        CoTaskMemFree(pv);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
        v4 = v49;
        v11 = v51;
LABEL_63:
        ++v11;
        continue;
      }
LABEL_58:
      v22 = (CMonitor *)*((_QWORD *)v21 + 26);
      if ( v20 )
        CMonitor::Terminate(v22, 1, 0LL);
      else
        CMonitor::Start(v22);
      goto LABEL_33;
    }
    break;
  }
  *v41 = 1;
  v23 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 72);
  v52 = (const unsigned int *)((char *)v4 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 72));
  restarted = 0;
  v24 = (_QWORD *)v42;
  try
  {
    while ( v24 )
    {
      v25 = v24[2];
      v24 = (_QWORD *)*v24;
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (__int64 *)v4 + 14,
        v25);
    }
  }
  catch ( ATL::CAtlException *v47 )
  {
    v31 = (int *)v47;
    if ( *(_DWORD *)v47 == -1073741571 )
      _o__resetstkoflw();
    v50 = *v31;
    v4 = v49;
    restarted = v50;
    v23 = (struct _RTL_CRITICAL_SECTION *)v52;
  }
  LeaveCriticalSection(v23);
  if ( restarted < 0 )
    goto LABEL_68;
LABEL_77:
  ATL::CCritSecLock::~CCritSecLock(v48);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::RemoveAll(&v42);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
  return (unsigned int)restarted;
}
