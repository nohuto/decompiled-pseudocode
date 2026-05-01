/*
 * XREFs of ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180090E44
 * Callers:
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x18009E61C (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x1801C5D40 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_102eb91890a206a003c0de1a94bbc83e___ @ 0x1802114E0 (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEachBackw.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x1802B9848 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x1802E54A0 (-ForgetAllApplications@CApplicationManager@@UEAAXXZ.c)
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1802E5530 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1802E5620 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x1802E5710 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x1802EC5E0 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802ECAA0 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$FindEx@VCImmersiveAppFinderByHostId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800171E4 (--$FindEx@VCImmersiveAppFinderByHostId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationIn.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x18008ED78 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1800910D8 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18016A9B8 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     WPP_SF_qSdL @ 0x18022536C (WPP_SF_qSdL.c)
 *     WPP_SF_S @ 0x1802EDF18 (WPP_SF_S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::_ForgetApplicationNoLock(
        CApplicationManager *a1,
        struct IImmersiveApplicationInternal *a2,
        unsigned int a3)
{
  char v3; // di
  char v6; // bl
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  __int64 (__fastcall *v10)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  __int64 result; // rax
  const unsigned __int16 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  void (__fastcall *v16)(char *, unsigned __int64 *); // rbx
  int (__fastcall *v17)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *); // rbx
  unsigned int i; // r14d
  __int64 v19; // rbx
  int (__fastcall *v20)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  HWND v27; // [rsp+58h] [rbp-8h] BYREF
  char v28; // [rsp+98h] [rbp+38h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a3;
  v28 = 0;
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD, char *))(*(_QWORD *)a2 + 152LL))(a2, a3, &v28);
  CApplicationManager::_RemoveApplication(a1, a2);
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 160LL))(a2);
    v7 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
    WPP_SF_qSdL(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v8, v9, (_DWORD)a2, v7, v6, v3);
  }
  v25 = -1LL;
  v29 = 0LL;
  v10 = **(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  result = v10(a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v29);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v29 + 24LL))(v29, &v25);
    if ( (int)result >= 0 )
    {
      v26 = v25;
      v27 = 0LL;
      result = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostId>(
                 (_QWORD *)a1 + 79,
                 &v26,
                 (__int64 *)&v27,
                 (unsigned __int64 *)&v24,
                 v23);
      if ( (int)result < 0 )
      {
        v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
        CApplicationManager::_DeleteApplicationData(a1, v12, &v25);
        result = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          v13 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
          result = WPP_SF_S(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v14, v15, v13);
        }
      }
    }
  }
  if ( v28 )
  {
    v16 = *(void (__fastcall **)(char *, unsigned __int64 *))(*((_QWORD *)a1 + 88) + 8LL);
    v26 = (unsigned __int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
    v16((char *)a1 + 704, &v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    v24 = 0LL;
    v17 = *(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 352LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    if ( v17(a2, 1LL, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, &v24) >= 0 )
    {
      v26 = 0LL;
      for ( i = 0; ; ++i )
      {
        v19 = v24;
        v20 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v24 + 32LL);
        v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v26);
        if ( v20(v19, i, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v21) < 0 )
          break;
        v27 = 0LL;
        if ( (*(int (__fastcall **)(unsigned __int64, HWND *))(*(_QWORD *)v26 + 32LL))(v26, &v27) >= 0 )
          CApplicationManager::_UpdatePerApplicationDataIfNeeded(
            (__int64)a1,
            (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
            v27,
            1);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    }
    result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  }
  v22 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return result;
}
