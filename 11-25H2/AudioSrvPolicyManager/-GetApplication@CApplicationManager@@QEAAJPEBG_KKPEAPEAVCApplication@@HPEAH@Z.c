/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000BDB0
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18000B110 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x18000B9A8 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 *     _lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator() @ 0x18000BAE4 (_lambda_2f91230d5263cfdecd1c9667b3e483e9_--operator().c)
 *     _lambda_55bbdd01f859b2b681de89e14de0bd19_::operator() @ 0x18000BC74 (_lambda_55bbdd01f859b2b681de89e14de0bd19_--operator().c)
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012160 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D668 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180039F88 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18003A5E4 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003A724 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180018C04 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BB00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180031C70 (WPP_SF_S.c)
 *     ??$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplication@@AEAPEBGAEA_KAEAK@Z @ 0x180038654 (--$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplic.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        struct CApplication **a5,
        int a6,
        int *a7)
{
  int v10; // esi
  int v11; // r12d
  __int64 v12; // rdi
  struct _RTL_CRITICAL_SECTION *v13; // r13
  _QWORD *v14; // rbx
  int *v15; // r14
  __int64 result; // rax
  int v17; // eax
  PCWSTR v18; // rax
  ATL::CAtlException *v19; // rbx
  int v20; // [rsp+30h] [rbp-308h] BYREF
  __int64 v21; // [rsp+38h] [rbp-300h] BYREF
  int *v22; // [rsp+40h] [rbp-2F8h]
  PCWSTR applicationUserModelId; // [rsp+48h] [rbp-2F0h]
  UINT32 packageRelativeApplicationIdLength; // [rsp+50h] [rbp-2E8h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+54h] [rbp-2E4h] BYREF
  UINT32 v26; // [rsp+58h] [rbp-2E0h] BYREF
  UINT32 v27; // [rsp+5Ch] [rbp-2DCh] BYREF
  int v28; // [rsp+60h] [rbp-2D8h]
  struct CApplication **v29; // [rsp+68h] [rbp-2D0h]
  const unsigned __int16 *v30; // [rsp+70h] [rbp-2C8h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+78h] [rbp-2C0h]
  int *v32; // [rsp+80h] [rbp-2B8h]
  __int64 v33; // [rsp+88h] [rbp-2B0h] BYREF
  char *v34; // [rsp+90h] [rbp-2A8h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+98h] [rbp-2A0h]
  ATL::CAtlException *v36; // [rsp+A0h] [rbp-298h] BYREF
  WCHAR packageFamilyName[2]; // [rsp+B0h] [rbp-288h] BYREF
  __int128 v38; // [rsp+B4h] [rbp-284h]
  __int128 v39; // [rsp+C4h] [rbp-274h]
  __int128 v40; // [rsp+D4h] [rbp-264h]
  __int128 v41; // [rsp+E4h] [rbp-254h]
  __int128 v42; // [rsp+F4h] [rbp-244h]
  __int128 v43; // [rsp+104h] [rbp-234h]
  __int128 v44; // [rsp+114h] [rbp-224h]
  __int64 v45; // [rsp+124h] [rbp-214h]
  int v46; // [rsp+12Ch] [rbp-20Ch]
  __int16 v47; // [rsp+130h] [rbp-208h]
  WCHAR v48[2]; // [rsp+140h] [rbp-1F8h] BYREF
  __int128 v49; // [rsp+144h] [rbp-1F4h]
  __int128 v50; // [rsp+154h] [rbp-1E4h]
  __int128 v51; // [rsp+164h] [rbp-1D4h]
  __int128 v52; // [rsp+174h] [rbp-1C4h]
  __int128 v53; // [rsp+184h] [rbp-1B4h]
  __int128 v54; // [rsp+194h] [rbp-1A4h]
  __int128 v55; // [rsp+1A4h] [rbp-194h]
  __int64 v56; // [rsp+1B4h] [rbp-184h]
  int v57; // [rsp+1BCh] [rbp-17Ch]
  __int16 v58; // [rsp+1C0h] [rbp-178h]
  WCHAR v59[2]; // [rsp+1D0h] [rbp-168h] BYREF
  __int128 v60; // [rsp+1D4h] [rbp-164h]
  __int128 v61; // [rsp+1E4h] [rbp-154h]
  __int128 v62; // [rsp+1F4h] [rbp-144h]
  __int128 v63; // [rsp+204h] [rbp-134h]
  __int128 v64; // [rsp+214h] [rbp-124h]
  __int128 v65; // [rsp+224h] [rbp-114h]
  __int128 v66; // [rsp+234h] [rbp-104h]
  __int128 v67; // [rsp+244h] [rbp-F4h]
  WCHAR packageRelativeApplicationId[2]; // [rsp+260h] [rbp-D8h] BYREF
  __int128 v69; // [rsp+264h] [rbp-D4h]
  __int128 v70; // [rsp+274h] [rbp-C4h]
  __int128 v71; // [rsp+284h] [rbp-B4h]
  __int128 v72; // [rsp+294h] [rbp-A4h]
  __int128 v73; // [rsp+2A4h] [rbp-94h]
  __int128 v74; // [rsp+2B4h] [rbp-84h]
  __int128 v75; // [rsp+2C4h] [rbp-74h]
  __int128 v76; // [rsp+2D4h] [rbp-64h]

  applicationUserModelId = a2;
  v30 = a2;
  v33 = a3;
  v20 = a4;
  v29 = a5;
  v22 = a7;
  v32 = a7;
  v10 = -2147023728;
  v11 = 0;
  v12 = 0LL;
  v21 = 0LL;
  v28 = 0;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v31 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v35 = v13;
  *(_DWORD *)packageFamilyName = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  *(_DWORD *)packageRelativeApplicationId = 0;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  *a5 = 0LL;
  ParseApplicationUserModelId(
    applicationUserModelId,
    &packageFamilyNameLength,
    packageFamilyName,
    &packageRelativeApplicationIdLength,
    packageRelativeApplicationId);
  v34 = (char *)this + 72;
  v14 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v14 )
  {
    v12 = v14[2];
    v14 = (_QWORD *)*v14;
    v21 = v12;
    *(_DWORD *)v48 = 0;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0;
    v58 = 0;
    *(_DWORD *)v59 = 0;
    v60 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    v27 = 65;
    v26 = 66;
    ParseApplicationUserModelId(*(PCWSTR *)(v12 + 24), &v27, v48, &v26, v59);
    if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)(v12 + 24), applicationUserModelId)
      && *(_DWORD *)(v12 + 212) == a4
      && *(_QWORD *)(v12 + 696) == a3 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    if ( !(unsigned int)_o__wcsicmp(v48, packageFamilyName)
      && (!(unsigned int)_o__wcsicmp(v59, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageRelativeApplicationId, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageFamilyName, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe"))
      && *(_DWORD *)(v12 + 212) == a4 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25LL,
          &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids,
          applicationUserModelId);
      }
      v10 = 0;
LABEL_7:
      v15 = v22;
LABEL_8:
      *v29 = (struct CApplication *)v12;
      goto LABEL_9;
    }
  }
  if ( !a6 )
    goto LABEL_7;
  v17 = Microsoft::WRL::Details::MakeAndInitialize<CApplication,CApplication,unsigned short const * &,unsigned __int64 &,unsigned long &>(
          &v21,
          &v30,
          &v33,
          &v20);
  v10 = v17;
  if ( v17 < 0 )
  {
    v15 = v22;
    goto LABEL_42;
  }
  try
  {
    v10 = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(v34, &v21);
    v18 = applicationUserModelId;
    v15 = v22;
  }
  catch ( ATL::CAtlException *v36 )
  {
    v19 = v36;
    if ( *(_DWORD *)v36 == -1073741571 )
      _o__resetstkoflw();
    v20 = *(_DWORD *)v19;
    v10 = v20;
    v13 = v31;
    v15 = v32;
    if ( v20 >= 0 )
    {
      v18 = v30;
      goto LABEL_35;
    }
    v11 = v28;
LABEL_42:
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release();
LABEL_9:
    if ( v15 )
      *v15 = v11;
    if ( v10 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          27LL,
          &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids,
          (unsigned int)v10);
      }
      AudPolicyLogError("CApplicationManager::GetApplication", 1421, v10);
    }
    if ( v13 )
      LeaveCriticalSection(v13);
    result = (unsigned int)v10;
  }
LABEL_35:
  v11 = 1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids, v18);
  }
  v12 = v21;
  goto LABEL_8;
}
