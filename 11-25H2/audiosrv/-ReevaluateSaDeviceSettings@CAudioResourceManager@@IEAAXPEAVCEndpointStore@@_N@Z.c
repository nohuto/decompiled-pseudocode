/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180030038
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_efe6a2a1125c0c889ee2664d28532957__void_::_Do_call @ 0x1800C12D0 (std--_Func_impl_no_alloc__lambda_efe6a2a1125c0c889ee2664d28532957__void_--_Do_call.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180027A08 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800319B0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032190 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180050D34 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800B754C (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800C06D8 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800C1618 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_P @ 0x1800C1704 (WPP_SF_P.c)
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 *     ?DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C6FD0 (-DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        struct CEndpointStore *a2,
        char a3)
{
  struct tWAVEFORMATEX *v4; // r14
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // r10
  char v8; // r15
  char v9; // r12
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdi
  struct tWAVEFORMATEX *v13; // rsi
  _QWORD *i; // rbx
  __int64 *v15; // rcx
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // r15
  struct _GUID v19; // xmm8
  struct _GUID v20; // xmm7
  struct _GUID v21; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v22; // eax
  int v23; // eax
  struct tWAVEFORMATEX *v24; // r15
  __int64 v25; // r12
  struct _GUID v26; // xmm6
  unsigned int v27; // eax
  __int64 v28; // rax
  const struct tWAVEFORMATEX *v29; // rax
  __int64 v30; // r12
  __int64 v31; // rcx
  int v32; // eax
  char v33; // al
  __int64 v34; // rax
  int v35; // eax
  int *v36; // [rsp+28h] [rbp-E0h]
  char v37; // [rsp+78h] [rbp-90h]
  char v38; // [rsp+79h] [rbp-8Fh]
  SaDeviceParams *v40; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v41[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v42; // [rsp+98h] [rbp-70h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v45; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v47; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v48; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-20h]
  struct tWAVEFORMATEX *v50; // [rsp+F0h] [rbp-18h] BYREF
  struct tWAVEFORMATEX *v51; // [rsp+F8h] [rbp-10h]
  struct tWAVEFORMATEX *v52; // [rsp+100h] [rbp-8h]
  int v53[4]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v54; // [rsp+118h] [rbp+10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+120h] [rbp+18h] BYREF
  struct _GUID v56; // [rsp+128h] [rbp+20h] BYREF
  struct _GUID v57; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v58[16]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v59[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v60[16]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v61[16]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  *(_OWORD *)v53 = 0LL;
  v4 = 0LL;
  v54 = 0LL;
  v5 = std::wstring::c_str((__int64)a2 + 16);
  v36 = v53;
  v6 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
         g_pEndpointCharacteristicsCache,
         v5,
         0LL,
         0LL);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    std::wstring::c_str((__int64)a2 + 16);
    WPP_SF_S(*(_QWORD *)(v7 + 16), 23LL, &WPP_376ec65dfd163502a9de53a59e5d86b2_Traceguids);
  }
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)a2 + 13) + 128LL))(
      *((_QWORD *)a2 + 13),
      &lpCriticalSection);
    v8 = 0;
    v37 = 0;
    v38 = 0;
    while ( 1 )
    {
      v9 = 1;
      v48 = 0LL;
      v49 = 0LL;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 96LL))(*((_QWORD *)a2 + 13), &v48);
      v44 = v10;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, v11, (__int64)(*((_QWORD *)&v48 + 1) - v48) >> 3);
      }
      if ( v10 < 0 )
        goto LABEL_49;
      v12 = 0LL;
      v41[0] = 0LL;
      v13 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      for ( i = (_QWORD *)v48; ; ++i )
      {
        if ( i == *((_QWORD **)&v48 + 1) )
        {
          v9 = 1;
LABEL_45:
          v10 = v44;
          goto LABEL_46;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 168LL))(*i)
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i) )
        {
          v38 = 1;
          continue;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 152LL))(*i) )
          break;
        LODWORD(v40) = 0;
        v50 = 0LL;
        v45 = 0LL;
        v47 = 0LL;
        pv = 0LL;
        v19 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v58);
        v20 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v59);
        v21 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v60);
        v22 = (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 96LL))(*i);
        v56 = v19;
        v57 = v20;
        v42 = v21;
        v23 = DeriveDeviceGraphFormatsForStream(
                (struct EndpointCharacteristicsDescriptor *)v53,
                0,
                v22,
                AUDCLNT_SHAREMODE_SHARED,
                0,
                &v42,
                &v57,
                &v56,
                0LL,
                &v47,
                (struct tWAVEFORMATEX **)&pv,
                &v45,
                &v50);
        v24 = v50;
        if ( v23 >= 0 )
        {
          v25 = *(_QWORD *)&v53[2];
          v26 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v61);
          v27 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 96LL))(*i);
          v42 = v26;
          LODWORD(v36) = 0;
          if ( (int)EffectPack::GetSharedModeEnginePeriodicity(v25, v27, v24, &v42) >= 0 )
          {
            v28 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
            if ( v28 != (int)((double)(int)v40 * 10000000.0 / (double)(int)v24->nSamplesPerSec + 0.5)
              || (v29 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i),
                  !(unsigned int)CompareWaveFormat(v24, v29)) )
            {
              v30 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 192LL))(*i);
              if ( GetTickCount64() - v30 >= (unsigned int)(g_TimeoutRevertAudioPumpFormatAndPeriodInMs - 16) )
              {
                v9 = 0;
                Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(v41, i);
                CoTaskMemFree(0LL);
                v13 = v24;
                v51 = v24;
                CoTaskMemFree(0LL);
                v4 = v45;
                v52 = v45;
                CoTaskMemFree(pv);
                CoTaskMemFree(v47);
                CoTaskMemFree(0LL);
                CoTaskMemFree(0LL);
                goto LABEL_40;
              }
            }
          }
        }
        CoTaskMemFree(pv);
        CoTaskMemFree(v47);
        CoTaskMemFree(v45);
        CoTaskMemFree(v24);
LABEL_34:
        ;
      }
      v42 = 0LL;
      v43 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, struct _GUID *))(**((_QWORD **)a2 + 13) + 120LL))(
             *((_QWORD *)a2 + 13),
             *i,
             &v42) < 0 )
        goto LABEL_24;
      v15 = *(__int64 **)&v42.Data1;
      if ( *(_QWORD *)v42.Data4 - *(_QWORD *)&v42.Data1 != 8LL )
        goto LABEL_25;
      v40 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, SaDeviceParams **))(*(_QWORD *)*i + 120LL))(*i, &v40) < 0 )
        break;
      v16 = **(_QWORD **)&v42.Data1;
      v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
      if ( v17 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 128LL))(v16) )
        break;
      v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 192LL))(*i);
      if ( GetTickCount64() - v18 < (unsigned int)(g_TimeoutRevertAudioPumpFormatAndPeriodInMs - 16) )
        break;
      v9 = 0;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(v41, i);
      v13 = (struct tWAVEFORMATEX *)*((_QWORD *)v40 + 2);
      *((_QWORD *)v40 + 2) = 0LL;
      CoTaskMemFree(0LL);
      v51 = v13;
      v4 = (struct tWAVEFORMATEX *)*((_QWORD *)v40 + 3);
      *((_QWORD *)v40 + 3) = 0LL;
      CoTaskMemFree(0LL);
      v52 = v4;
      (*(void (__fastcall **)(_QWORD))(***(_QWORD ***)&v42.Data1 + 128LL))(**(_QWORD **)&v42.Data1);
      if ( v40 )
        SaDeviceParams::`scalar deleting destructor'(v40);
      v40 = 0LL;
      if ( *(_QWORD *)&v42.Data1 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 **)&v42.Data1,
          *(__int64 **)v42.Data4);
        std::_Deallocate<16,0>(
          *(char **)&v42.Data1,
          (const struct std::nothrow_t *)((v43 - *(_QWORD *)&v42.Data1) & 0xFFFFFFFFFFFFFFF8uLL));
      }
LABEL_40:
      v12 = v41[0];
      if ( !v41[0] )
        goto LABEL_45;
      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v48);
      LODWORD(v36) = (_DWORD)v4;
      v32 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(v31, v53, *((_QWORD *)a2 + 13), v13);
      v10 = v32;
      if ( v32 >= 0 )
      {
        v8 = 1;
        v37 = 1;
        v12 = v41[0];
        goto LABEL_47;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA2E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v32,
        (int)v4);
      v12 = v41[0];
LABEL_46:
      v8 = v37;
LABEL_47:
      CoTaskMemFree(v4);
      CoTaskMemFree(v13);
      v4 = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_49:
      if ( (_QWORD)v48 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v48,
          *((__int64 **)&v48 + 1));
        std::_Deallocate<16,0>((char *)v48, (const struct std::nothrow_t *)((v49 - v48) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      if ( v10 < 0 || v9 )
      {
        v33 = a3;
        if ( a3 && !v38 )
        {
          v34 = std::wstring::c_str((__int64)a2 + 16);
          AudioPolicyManagerExtension_OnPostMatchFormatStateChange(v34, 0LL);
          v33 = a3;
        }
        if ( g_UseSoftwareLoopbackOnMatchFormat )
        {
          if ( v33 )
          {
            if ( v8 )
            {
              v35 = CAudioSessionManager::DisconnectAllStreamsOfType(*((_QWORD *)a2 + 12));
              if ( v35 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xA44,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v35,
                  (int)v36);
            }
          }
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        goto LABEL_63;
      }
    }
    if ( v40 )
      SaDeviceParams::`scalar deleting destructor'(v40);
LABEL_24:
    v15 = *(__int64 **)&v42.Data1;
LABEL_25:
    if ( v15 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v15, *(__int64 **)v42.Data4);
      std::_Deallocate<16,0>(
        *(char **)&v42.Data1,
        (const struct std::nothrow_t *)((v43 - *(_QWORD *)&v42.Data1) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    goto LABEL_34;
  }
LABEL_63:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v53);
}
