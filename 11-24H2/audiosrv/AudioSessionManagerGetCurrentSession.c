/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x180079F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004FBEC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionManagerGetCurrentSession(
        _QWORD ***a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5)
{
  void *v8; // rsi
  struct _FILETIME pftDueTime; // rbx
  __int64 v10; // rax
  void *v11; // rsi
  struct _FILETIME v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // r12
  _QWORD **v15; // r15
  __int64 (__fastcall *v16)(struct IAudioPolicyManager *, _QWORD, __int64 *); // rbx
  int v17; // eax
  unsigned int v18; // ebx
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // edi
  int v26; // esi
  int OwningThread; // ebx
  int v28; // eax
  int v29; // r8d
  int v30; // r14d
  unsigned int v31; // edi
  __int64 v33; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+58h] [rbp-18h] BYREF
  __int64 v35; // [rsp+60h] [rbp-10h] BYREF
  __int64 v36; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int v38; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+48h]
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+C8h] [rbp+58h] BYREF

  v39 = a2;
  v36 = 0LL;
  v35 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v10 = CWatchdogTimer<1>::CWatchdogTimer<1>(v8, pftDueTime);
    }
    else
    {
      v10 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v36, v10);
  }
  else
  {
    v11 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v11 )
    {
      v12 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v13 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v11, v12);
    }
    else
    {
      v13 = 0LL;
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v35, v13);
  }
  v14 = a5;
  v34 = 0LL;
  *a5 = 0LL;
  *a4 = 0LL;
  v15 = *a1;
  v16 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v34);
  v17 = v16(g_PolicyManager, 0LL, &v34);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v40 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v40);
    v21 = std::wstring::c_str((__int64)(*v15 + 2), v20);
    v22 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, __int64, _QWORD))GetDevice)(
            g_DeviceEnumerator,
            v21,
            &v40);
    v18 = v22;
    if ( v22 >= 0 )
    {
      v33 = 0LL;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v33);
      v23 = (**v40)(v40, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v33);
      v18 = v23;
      if ( v23 >= 0 )
      {
        v38 = 0;
        v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 24LL))(v33, &v38);
        v18 = v23;
        if ( v23 >= 0 )
        {
          v25 = (a3 >> 28) & 1 | ~(unsigned __int8)(a3 >> 18) & 2;
          v26 = a3 & 0x60000000;
          if ( g_ADGProcess )
          {
            OwningThread = (int)g_ADGProcess[2].OwningThread;
            if ( OwningThread == (*(unsigned int (__fastcall **)(_QWORD *))(*v15[1] + 40LL))(v15[1]) )
              v26 = a3 & 0x40000000 | 0x20000000;
          }
          v28 = (*(__int64 (__fastcall **)(_QWORD *))(*v15[1] + 88LL))(v15[1]);
          if ( v28 )
            v25 |= 0x40000000u;
          v29 = v26 | 0x200000;
          if ( !v28 )
            v29 = v26;
          v30 = a3 & 0x10000;
          if ( v38 == 1 )
            v31 = v25 & 0xFFFFFFFD;
          else
            v31 = v25 | 8;
          v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, bool, _QWORD *, _QWORD *))(*(_QWORD *)(*v15)[12] + 8LL))(
                  (*v15)[12],
                  v34,
                  v39,
                  v31,
                  v29,
                  v30 != 0,
                  a4,
                  v14);
          v18 = v23;
          if ( v23 >= 0 )
          {
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
            v18 = 0;
            goto LABEL_33;
          }
          v24 = 1550LL;
        }
        else
        {
          v24 = 1511LL;
        }
      }
      else
      {
        v24 = 1508LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v23);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E1,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v22);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v17);
  }
LABEL_33:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v35);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v36);
  return v18;
}
