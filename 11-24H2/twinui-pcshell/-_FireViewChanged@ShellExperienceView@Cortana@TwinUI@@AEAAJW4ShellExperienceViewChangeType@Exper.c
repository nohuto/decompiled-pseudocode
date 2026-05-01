/*
 * XREFs of ?_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x1803C64F0
 * Callers:
 *     ?OnApplicationActivatedForLaunch@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1803C5CB0 (-OnApplicationActivatedForLaunch@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellEx.c)
 *     ?OnPriorityBoostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C5CF0 (-OnPriorityBoostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperienc.c)
 *     ?OnPriorityUnboostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C5D10 (-OnPriorityUnboostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperie.c)
 *     ?OnSetForegroundFailed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C5D30 (-OnSetForegroundFailed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnViewCloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C5D50 (-OnViewCloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C5D70 (-OnViewCreated@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C5D90 (-OnViewDestroyed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C5DB0 (-OnViewHidden@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C5DD0 (-OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperienc.c)
 *     ?OnViewShown@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C5DF0 (-OnViewShown@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C5E10 (-OnViewUncloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$DoInvoke@V_lambda_baaca31cd2954a77daa2b39672579920_@@@?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_baaca31cd2954a77daa2b39672579920_@@@Z @ 0x1802A3C80 (--$DoInvoke@V_lambda_baaca31cd2954a77daa2b39672579920_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__TwinUI::Cortana::ShellExperienceView::_FireViewChanged_::_2_::ShellExperienceViewChangedArg_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_enum_Windows::Internal::Shell::Experience::ShellExperienceViewChangeType_&_long_&_ @ 0x1803C562C (Microsoft--WRL--Details--MakeAndInitialize__TwinUI--Cortana--ShellExperienceView--_FireViewChang.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::_FireViewChanged(__int64 a1, int a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v12; // [rsp+68h] [rbp+28h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v13 = a3;
  v12 = a2;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize__TwinUI::Cortana::ShellExperienceView::_FireViewChanged_::_2_::ShellExperienceViewChangedArg_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_enum_Windows::Internal::Shell::Experience::ShellExperienceViewChangeType___long___(
         &v14,
         &v12,
         &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = v14;
    v8 = a1;
    *(_QWORD *)&v10 = &v8;
    *((_QWORD *)&v10 + 1) = &v9;
    v4 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_baaca31cd2954a77daa2b39672579920_>(
           a1 + 256,
           &v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 331LL;
  }
  else
  {
    v6 = 330LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return v5;
}
