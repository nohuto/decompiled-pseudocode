/*
 * XREFs of ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180111DA8
 * Callers:
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@PEAPEAVCaptureMonitor@1@@Z @ 0x18010FE60 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSe.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1801112BC (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180059010 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18007ACB0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A4F1C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     WPP_SF_qq @ 0x1800A5DA4 (WPP_SF_qq.c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     WPP_SF_qqq @ 0x1800C4B94 (WPP_SF_qqq.c)
 *     ??$Make@VCMonitor@@PEAUStreamConnectionSettings@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCMonitor@@@12@$$QEAPEAUStreamConnectionSettings@@$$QEA_N@Z @ 0x18010EE64 (--$Make@VCMonitor@@PEAUStreamConnectionSettings@@_N@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCMonit.c)
 *     WPP_SF_dD @ 0x1801144F0 (WPP_SF_dD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::CaptureMonitor::Initialize(
        char *pv,
        struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession *a2)
{
  struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession *v2; // r12
  char *v3; // rsi
  __int64 v4; // rax
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, __int64, struct IMMDevice **); // r9
  __int64 v9; // r10
  struct IMMDevice *v10; // rbx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, __int64, struct IMMDevice **); // r9
  __int64 v17; // r10
  struct IMMDevice *v18; // rbx
  HRESULT (__stdcall *v19)(IMMDevice *, LPWSTR *); // rdi
  CMonitor **v20; // rax
  CMonitor *v21; // rdx
  __int64 v22; // rcx
  CMonitor *v23; // rcx
  _UNKNOWN **v24; // rcx
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  HANDLE *v27; // rbx
  struct _TP_WAIT *ThreadpoolWait; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  ATL::CAtlException *v32; // rbx
  char *v33; // [rsp+20h] [rbp-B8h]
  struct IMMDevice *v34; // [rsp+30h] [rbp-A8h] BYREF
  struct IMMDevice *v35; // [rsp+38h] [rbp-A0h] BYREF
  _WORD *v36; // [rsp+40h] [rbp-98h] BYREF
  _WORD *v37; // [rsp+48h] [rbp-90h] BYREF
  HANDLE *v38; // [rsp+50h] [rbp-88h] BYREF
  CMonitor *v39; // [rsp+58h] [rbp-80h] BYREF
  char *v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+68h] [rbp-70h] BYREF
  char v42; // [rsp+70h] [rbp-68h] BYREF
  ATL::CAtlException *v43; // [rsp+78h] [rbp-60h] BYREF
  PROPVARIANT pvar[11]; // [rsp+80h] [rbp-58h] BYREF
  bool v47; // [rsp+F0h] [rbp+18h] BYREF
  int v48; // [rsp+F8h] [rbp+20h] BYREF

  v2 = a2;
  v3 = pv;
  v40 = pv;
  v35 = 0LL;
  v34 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v41 = 0LL;
  memset(pvar, 0, 24);
  v4 = *((_QWORD *)pv + 26);
  if ( v4 && *(_DWORD *)(v4 + 72) != 6 )
  {
    v5 = -2147023649;
    goto LABEL_42;
  }
  if ( *((_QWORD *)pv + 9) )
  {
    v7 = std::wstring::c_str((__int64)(pv + 56));
    v6 = v8(v9, v7, &v35);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)pv + 25)
                                                                                               + 64LL)
                                                                                 + 32LL))(
           *(_QWORD *)(*((_QWORD *)pv + 25) + 64LL),
           1LL,
           0LL,
           &v35);
  }
  v5 = v6;
  if ( v6 < 0 )
    goto LABEL_35;
  v10 = v35;
  GetId = v35->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v37,
    0LL);
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, _WORD **))GetId)(v10, &v37);
  if ( v5 < 0 )
    goto LABEL_35;
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( v37[v13] );
  std::wstring::assign((__int64)(v3 + 136), (__int64)v37, v13);
  if ( *((_QWORD *)v3 + 13) )
  {
    v15 = std::wstring::c_str((__int64)(v3 + 88));
    v14 = v16(v17, v15, &v34);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)v3 + 25)
                                                                                               + 64LL)
                                                                                 + 32LL))(
            *(_QWORD *)(*((_QWORD *)v3 + 25) + 64LL),
            0LL,
            0LL,
            &v34);
  }
  v5 = v14;
  if ( v14 < 0 )
    goto LABEL_35;
  v18 = v34;
  v19 = v34->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v36,
    0LL);
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, _WORD **))v19)(v18, &v36);
  if ( v5 < 0 )
    goto LABEL_35;
  do
    ++v12;
  while ( v36[v12] );
  std::wstring::assign((__int64)(v3 + 168), (__int64)v36, v12);
  LOBYTE(v48) = v3[49] == 0;
  v38 = (HANDLE *)(v3 + 120);
  v20 = Microsoft::WRL::Details::Make<CMonitor,StreamConnectionSettings *,bool>(
          &v39,
          (struct StreamConnectionSettings **)&v38,
          (bool *)&v48);
  v21 = 0LL;
  if ( &v42 != (char *)v20 )
  {
    v21 = *v20;
    *v20 = 0LL;
  }
  v22 = *((_QWORD *)v3 + 26);
  *((_QWORD *)v3 + 26) = v21;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( !*((_QWORD *)v3 + 26) )
  {
    v5 = -2147024882;
    v24 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
LABEL_40:
      if ( v3[48] )
      {
        (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v3 + 5) + 32LL))(*((_QWORD *)v3 + 5), v3);
        v3[48] = 0;
      }
      goto LABEL_42;
    }
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
LABEL_36:
      if ( v24 != &WPP_GLOBAL_Control && (*((_DWORD *)v24 + 7) & 0x800000) != 0 && *((_BYTE *)v24 + 25) >= 2u )
        WPP_SF_d((__int64)v24[2], 0x5Au, (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, v5);
      goto LABEL_40;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 86LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids);
LABEL_35:
    v24 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_36;
  }
  v33 = v3 + 40;
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v34->lpVtbl->Activate)(
         v34,
         &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
         1LL);
  if ( v5 < 0 )
    goto LABEL_35;
  v25 = v3 + 40;
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v25 + 24LL))(*v25, v3);
  if ( v5 < 0 )
    goto LABEL_35;
  v3[48] = 1;
  try
  {
    v27 = (HANDLE *)(v3 + 32);
    v38 = (HANDLE *)(v3 + 32);
    *((_QWORD *)v3 + 4) = CreateEventW(0LL, 0, 0, 0LL);
    v26 = v3 + 32;
  }
  catch ( ATL::CAtlException *v43 )
  {
    v32 = v43;
    if ( *(_DWORD *)v43 == -1073741571 )
      _o__resetstkoflw();
    v48 = *(_DWORD *)v32;
    v5 = v48;
    v3 = pv;
    if ( v48 < 0 )
      goto LABEL_35;
    v26 = v40 + 32;
    v2 = a2;
    v27 = v38;
  }
  ThreadpoolWait = CreateThreadpoolWait(CMonitorManager::OnCaptureMonitorTerminated, v3, 0LL);
  *((_QWORD *)v3 + 2) = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    v5 = -2147024882;
    goto LABEL_35;
  }
  SetThreadpoolWait(ThreadpoolWait, *v27, 0LL);
  *(_QWORD *)(*((_QWORD *)v3 + 26) + 192LL) = *v26;
  if ( v2 )
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(
      (__int64 *)(*((_QWORD *)v3 + 26) + 184LL),
      (__int64)v2);
  v47 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x57u,
      (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
      v3,
      *((_QWORD *)v3 + 26));
  }
  v5 = CMonitor::Initialize(*((CMonitor **)v3 + 26), v35, v34, &v47);
  if ( v5 < 0 )
  {
    v24 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v33) = v47;
      WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), v30, v31, (unsigned int)v5, v33);
      v24 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    if ( !v47 )
    {
      v5 = 1;
      goto LABEL_42;
    }
    goto LABEL_36;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x59u,
      (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
      v3,
      v3,
      *((_QWORD *)v3 + 26));
  }
  *(_QWORD *)(*((_QWORD *)v3 + 25) + 304LL) = 0LL;
  *((_DWORD *)v3 + 6) = 0;
LABEL_42:
  PropVariantClear(pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v36);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v37);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
  return (unsigned int)v5;
}
