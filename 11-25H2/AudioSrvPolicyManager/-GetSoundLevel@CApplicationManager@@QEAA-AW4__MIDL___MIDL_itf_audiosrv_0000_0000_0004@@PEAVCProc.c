/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180039F88
 * Callers:
 *     PbmGetSoundLevel @ 0x1800191D0 (PbmGetSoundLevel.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x1800375D0 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 * Callees:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000BDB0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x18000CA20 (-TsSessionIdIsMuted@@YA_NK@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001EC10 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x180039E74 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?GetSoundLevel_old@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18003A0AC (-GetSoundLevel_old@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVC.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSendSoundLevelNotif@@@details@wil@@QEAA_NXZ @ 0x18003C428 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSendSoundLevelNoti.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(
        __int64 a1,
        __int64 a2,
        enum AUDIO_DIRECTION *a3,
        enum _AUDIO_STREAM_CATEGORY *a4,
        unsigned __int16 *a5)
{
  CApplicationManager *v8; // rsi
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  struct CApplication *v10; // rbx
  unsigned int v11; // ebx
  unsigned int SoundLevel; // eax
  struct CApplication *v14; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+70h] [rbp+18h] BYREF

  HIDWORD(v14) = HIDWORD(a1);
  v8 = g_ApplicationManager;
  LODWORD(v14) = 2;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15 = v9;
  if ( a3 )
  {
    CProcess::GetSoundLevel((CProcess *)a2, a3, a4, a5, (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v14);
    v11 = (unsigned int)v14;
    goto LABEL_11;
  }
  v10 = *(struct CApplication **)(a2 + 224);
  v14 = v10;
  if ( !v10 )
  {
    if ( (int)CApplicationManager::GetApplication(
                v8,
                *(const unsigned __int16 **)(a2 + 176),
                *(_QWORD *)(a2 + 208),
                *(_DWORD *)(a2 + 164),
                &v14,
                0,
                0LL) < 0 )
    {
      v11 = 2 * ((unsigned __int8)TsSessionIdIsMuted(*(_DWORD *)(a2 + 164)) ^ 1);
      goto LABEL_11;
    }
    v10 = v14;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSendSoundLevelNotif>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ForceSendSoundLevelNotif>::GetImpl'::`2'::impl) )
    SoundLevel = CApplicationManager::GetSoundLevel((__int64)v8, (__int64)v10, 1);
  else
    SoundLevel = CApplicationManager::GetSoundLevel_old(v8, v10);
  v11 = SoundLevel;
LABEL_11:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
  return v11;
}
