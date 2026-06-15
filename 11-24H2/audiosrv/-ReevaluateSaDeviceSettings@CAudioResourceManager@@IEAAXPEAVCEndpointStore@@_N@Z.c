/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180034344
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_58be061a777e3803beb2fa2cac2678e0__void_::_Do_call @ 0x1800BFE50 (std--_Func_impl_no_alloc__lambda_58be061a777e3803beb2fa2cac2678e0__void_--_Do_call.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800161E8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180016BF4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18002CC00 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002D3E0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180045084 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800B69B0 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800BF408 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800C01B0 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_P @ 0x1800C029C (WPP_SF_P.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     ?DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C6430 (-DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        struct CEndpointStore *a2,
        char a3)
{
  struct tWAVEFORMATEX *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r10
  char v10; // r15
  char v11; // r12
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rdi
  struct tWAVEFORMATEX *v16; // rsi
  _QWORD *i; // rbx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // r15
  struct _GUID v22; // xmm8
  struct _GUID v23; // xmm7
  struct _GUID v24; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // eax
  int v26; // eax
  struct tWAVEFORMATEX *v27; // r15
  __int64 v28; // r12
  struct _GUID v29; // xmm6
  unsigned int v30; // eax
  __int64 v31; // rax
  const struct tWAVEFORMATEX *v32; // rax
  __int64 v33; // r12
  __int64 v34; // rcx
  int v35; // eax
  char v36; // al
  __int64 v37; // rax
  int v38; // eax
  int *v39; // [rsp+28h] [rbp-E0h]
  char v40; // [rsp+78h] [rbp-90h]
  char v41; // [rsp+79h] [rbp-8Fh]
  SaDeviceParams *v43; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v44[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v45; // [rsp+98h] [rbp-70h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-60h]
  int v47; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v48; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v50; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v51; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-20h]
  struct tWAVEFORMATEX *v53; // [rsp+F0h] [rbp-18h] BYREF
  struct tWAVEFORMATEX *v54; // [rsp+F8h] [rbp-10h]
  struct tWAVEFORMATEX *v55; // [rsp+100h] [rbp-8h]
  int v56[4]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v57; // [rsp+118h] [rbp+10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+120h] [rbp+18h] BYREF
  struct _GUID v59; // [rsp+128h] [rbp+20h] BYREF
  struct _GUID v60; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v61[16]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v62[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v63[16]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v64[16]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  *(_OWORD *)v56 = 0LL;
  v4 = 0LL;
  v57 = 0LL;
  v5 = std::wstring::c_str((__int64)a2 + 16, (__int64)a2);
  v39 = v56;
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
         g_pEndpointCharacteristicsCache,
         v5,
         0LL,
         0LL);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = std::wstring::c_str((__int64)a2 + 16, v6);
    WPP_SF_S(*(_QWORD *)(v9 + 16), 23LL, &WPP_98fe4f38b3823383e11c83435e5ea7e3_Traceguids, v8);
  }
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)a2 + 13) + 128LL))(
      *((_QWORD *)a2 + 13),
      &lpCriticalSection);
    v10 = 0;
    v40 = 0;
    v41 = 0;
    while ( 1 )
    {
      v11 = 1;
      v51 = 0LL;
      v52 = 0LL;
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 96LL))(*((_QWORD *)a2 + 13), &v51);
      v47 = v13;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, v14, (__int64)(*((_QWORD *)&v51 + 1) - v51) >> 3);
      }
      if ( v13 < 0 )
        goto LABEL_49;
      v15 = 0LL;
      v44[0] = 0LL;
      v16 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      for ( i = (_QWORD *)v51; ; ++i )
      {
        if ( i == *((_QWORD **)&v51 + 1) )
        {
          v11 = 1;
LABEL_45:
          v13 = v47;
          goto LABEL_46;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 168LL))(*i)
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i) )
        {
          v41 = 1;
          continue;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 152LL))(*i) )
          break;
        LODWORD(v43) = 0;
        v53 = 0LL;
        v48 = 0LL;
        v50 = 0LL;
        pv = 0LL;
        v22 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v61);
        v23 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v62);
        v24 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v63);
        v25 = (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 96LL))(*i);
        v59 = v22;
        v60 = v23;
        v45 = v24;
        v26 = DeriveDeviceGraphFormatsForStream(
                (CEndpointCharacteristics **)v56,
                0,
                v25,
                AUDCLNT_SHAREMODE_SHARED,
                0,
                (IAudioMediaType *)&v45,
                &v60,
                &v59,
                0LL,
                &v50,
                (struct tWAVEFORMATEX **)&pv,
                &v48,
                &v53);
        v27 = v53;
        if ( v26 >= 0 )
        {
          v28 = *(_QWORD *)&v56[2];
          v29 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v64);
          v30 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 96LL))(*i);
          v45 = v29;
          LODWORD(v39) = 0;
          if ( (int)EffectPack::GetSharedModeEnginePeriodicity(v28, v30, v27, &v45) >= 0 )
          {
            v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
            if ( v31 != (int)((double)(int)v43 * 10000000.0 / (double)(int)v27->nSamplesPerSec + 0.5)
              || (v32 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i),
                  !(unsigned int)CompareWaveFormat(v27, v32)) )
            {
              v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 192LL))(*i);
              if ( GetTickCount64() - v33 >= (unsigned int)(g_TimeoutRevertAudioPumpFormatAndPeriodInMs - 16) )
              {
                v11 = 0;
                Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(v44, i);
                CoTaskMemFree(0LL);
                v16 = v27;
                v54 = v27;
                CoTaskMemFree(0LL);
                v4 = v48;
                v55 = v48;
                CoTaskMemFree(pv);
                CoTaskMemFree(v50);
                CoTaskMemFree(0LL);
                CoTaskMemFree(0LL);
                goto LABEL_40;
              }
            }
          }
        }
        CoTaskMemFree(pv);
        CoTaskMemFree(v50);
        CoTaskMemFree(v48);
        CoTaskMemFree(v27);
LABEL_34:
        ;
      }
      v45 = 0LL;
      v46 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, struct _GUID *))(**((_QWORD **)a2 + 13) + 120LL))(
             *((_QWORD *)a2 + 13),
             *i,
             &v45) < 0 )
        goto LABEL_24;
      v18 = *(_QWORD *)&v45.Data1;
      if ( *(_QWORD *)v45.Data4 - *(_QWORD *)&v45.Data1 != 8LL )
        goto LABEL_25;
      v43 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, SaDeviceParams **))(*(_QWORD *)*i + 120LL))(*i, &v43) < 0 )
        break;
      v19 = **(_QWORD **)&v45.Data1;
      v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
      if ( v20 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 128LL))(v19) )
        break;
      v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 192LL))(*i);
      if ( GetTickCount64() - v21 < (unsigned int)(g_TimeoutRevertAudioPumpFormatAndPeriodInMs - 16) )
        break;
      v11 = 0;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(v44, i);
      v16 = (struct tWAVEFORMATEX *)*((_QWORD *)v43 + 2);
      *((_QWORD *)v43 + 2) = 0LL;
      CoTaskMemFree(0LL);
      v54 = v16;
      v4 = (struct tWAVEFORMATEX *)*((_QWORD *)v43 + 3);
      *((_QWORD *)v43 + 3) = 0LL;
      CoTaskMemFree(0LL);
      v55 = v4;
      (*(void (__fastcall **)(_QWORD))(***(_QWORD ***)&v45.Data1 + 128LL))(**(_QWORD **)&v45.Data1);
      if ( v43 )
        SaDeviceParams::`scalar deleting destructor'(v43);
      v43 = 0LL;
      if ( *(_QWORD *)&v45.Data1 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 *)&v45.Data1,
          *(__int64 *)v45.Data4);
        std::_Deallocate<16,0>(
          *(char **)&v45.Data1,
          (const struct std::nothrow_t *)((v46 - *(_QWORD *)&v45.Data1) & 0xFFFFFFFFFFFFFFF8uLL));
      }
LABEL_40:
      v15 = v44[0];
      if ( !v44[0] )
        goto LABEL_45;
      std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v51);
      LODWORD(v39) = (_DWORD)v4;
      v35 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(v34, v56, *((_QWORD *)a2 + 13), v16);
      v13 = v35;
      if ( v35 >= 0 )
      {
        v10 = 1;
        v40 = 1;
        v15 = v44[0];
        goto LABEL_47;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAA1,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v35,
        (int)v4);
      v15 = v44[0];
LABEL_46:
      v10 = v40;
LABEL_47:
      CoTaskMemFree(v4);
      CoTaskMemFree(v16);
      v4 = 0LL;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_49:
      if ( (_QWORD)v51 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v51, *((__int64 *)&v51 + 1));
        std::_Deallocate<16,0>((char *)v51, (const struct std::nothrow_t *)((v52 - v51) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      if ( v13 < 0 || v11 )
      {
        v36 = a3;
        if ( a3 && !v41 )
        {
          v37 = std::wstring::c_str((__int64)a2 + 16, v12);
          AudioPolicyManagerExtension_OnPostMatchFormatStateChange(v37, 0LL);
          v36 = a3;
        }
        if ( g_UseSoftwareLoopbackOnMatchFormat )
        {
          if ( v36 )
          {
            if ( v10 )
            {
              v38 = CAudioSessionManager::DisconnectAllStreamsOfType(*((_QWORD *)a2 + 12));
              if ( v38 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xAB7,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v38,
                  (int)v39);
            }
          }
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        goto LABEL_63;
      }
    }
    if ( v43 )
      SaDeviceParams::`scalar deleting destructor'(v43);
LABEL_24:
    v18 = *(_QWORD *)&v45.Data1;
LABEL_25:
    if ( v18 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v18, *(__int64 *)v45.Data4);
      std::_Deallocate<16,0>(
        *(char **)&v45.Data1,
        (const struct std::nothrow_t *)((v46 - *(_QWORD *)&v45.Data1) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    goto LABEL_34;
  }
LABEL_63:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v56);
}
