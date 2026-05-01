/*
 * XREFs of _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator() @ 0x18046DD6C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___::Run @ 0x1804741B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007EA0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180080818 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1800ABEA0 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013AF5C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801AED44 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801FFDBC (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 *     _anonymous_namespace_::StringifyApplicationState @ 0x180207324 (_anonymous_namespace_--StringifyApplicationState.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18028F06C (-GetInputAppState@TouchKeyboardExperienceManager@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??$ShowRejected@AEAIPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAPEBG@Z @ 0x1802C7F60 (--$ShowRejected@AEAIPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAPEBG@Z.c)
 *     ??$ShowRejected@AEAIAEAY0O@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAY0O@$$CBG@Z @ 0x1802C9A84 (--$ShowRejected@AEAIAEAY0O@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAY0O@$$CBG@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802CDCB4 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180477D98 (-UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator()(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v4; // eax
  int InputAppState; // eax
  int ViewInfo; // eax
  __int64 v8; // rdx
  int v9; // r14d
  __int64 *v10; // r15
  int v11; // eax
  char v12; // r8
  __int64 v13; // r9
  int v14; // r14d
  TouchKeyboardExperienceManager *v15; // rcx
  int v16; // eax
  std::_Ref_count_base *v17[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v18[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v20; // [rsp+B0h] [rbp+30h] BYREF
  const wchar_t *v21; // [rsp+B8h] [rbp+38h] BYREF

  v2 = a1 + 96;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 96,
    (__int64)v18);
  v3 = 0;
  v20 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 80), &v20);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x509,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( v20 )
  {
    InputAppState = TouchKeyboardExperienceManager::GetInputAppState(*(_QWORD *)(a1 + 88));
    if ( InputAppState == 1 )
    {
      *(_OWORD *)v17 = 0LL;
      ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*(RTL_SRWLOCK **)(a1 + 88), *(_DWORD *)a1, v17);
      v9 = ViewInfo;
      if ( ViewInfo >= 0 )
      {
        if ( *((_BYTE *)v17[0] + 32) )
        {
          TouchKeyboardExperienceTelemetryLogger::ShowRejected<unsigned int &,unsigned short const (&)[14]>(
            (_DWORD *)a1,
            v8);
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            v2,
            0);
        }
        else
        {
          v10 = (__int64 *)v17[0];
          v11 = TouchKeyboardExperienceManager::ShowView(
                  *(TouchKeyboardExperienceManager **)(a1 + 88),
                  v17[0],
                  (struct tagRECT *)(a1 + 4),
                  (const struct ViewOptions *)(a1 + 24));
          v14 = v11;
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x525,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v11);
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
            1u,
            v12,
            v13);
          v15 = *(TouchKeyboardExperienceManager **)(a1 + 88);
          if ( *(_DWORD *)a1 == *((_DWORD *)v15 + 153) )
            TouchKeyboardExperienceManager::UpdateInvocationMethodShellPreference(v15);
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            v2,
            v14);
          if ( *(_BYTE *)(a1 + 26) )
          {
            v16 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
                    *(_QWORD *)(a1 + 88) + 592LL,
                    1026LL,
                    (*(_QWORD *)(a1 + 88) + 160LL) & -(__int64)(*(_QWORD *)(a1 + 88) != 0LL),
                    *v10);
            if ( v16 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x534,
                (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                (const char *)(unsigned int)v16);
            *(_DWORD *)(*(_QWORD *)(a1 + 88) + 608LL) = *(_DWORD *)a1;
          }
        }
        if ( v17[1] )
          std::_Ref_count_base::_Decref(v17[1]);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x51B,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)ViewInfo);
        if ( v17[1] )
          std::_Ref_count_base::_Decref(v17[1]);
        v3 = v9;
      }
    }
    else
    {
      v21 = anonymous_namespace_::StringifyApplicationState(InputAppState);
      TouchKeyboardExperienceTelemetryLogger::ShowRejected<unsigned int &,unsigned short const *>(
        (int *)a1,
        (__int64 *)&v21);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v2,
        0);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v18);
    return v3;
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v18);
    return 0LL;
  }
}
