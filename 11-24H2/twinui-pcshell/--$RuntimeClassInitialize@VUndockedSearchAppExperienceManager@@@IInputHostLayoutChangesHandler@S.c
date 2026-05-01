/*
 * XREFs of ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@22@ZP84@EAAJ13@Z@Z @ 0x1803AF64C
 * Callers:
 *     ??$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@_EP85@EAAJ02@_E@Details@WRL@Microsoft@@YAJPEAPEAVIInputHostLayoutChangesHandler@Shell@Internal@Windows@@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP87@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@33@_E$$QEAP87@EAAJ24@_E@Z @ 0x180062834 (--$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x180187508 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ??0?$__func@V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z@__function@wistd@@QEAA@$$QEAV_lambda_8d135f07ec1e4c768c6672246a6f5092_@@@Z @ 0x1803B4BB4 (--0-$__func@V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ??0?$__func@V_lambda_f168e09ea7893a980aca54fc3927844e_@@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@__function@wistd@@QEAA@$$QEAV_lambda_f168e09ea7893a980aca54fc3927844e_@@@Z @ 0x1803B4C34 (--0-$__func@V_lambda_f168e09ea7893a980aca54fc3927844e_@@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DIS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::IInputHostLayoutChangesHandler::RuntimeClassInitialize<UndockedSearchAppExperienceManager>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4)
{
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+78h] [rbp+28h] BYREF

  v19 = 0LL;
  v14 = &v19;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v9 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>(a2, v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( *(_QWORD *)a3 )
    {
      v15 = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v16 = a2;
      v17 = *a3;
      v11 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 152) = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
      *(_QWORD *)(a1 + 152) = wistd::__function::__func<_lambda_f168e09ea7893a980aca54fc3927844e_,long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>::__func<_lambda_f168e09ea7893a980aca54fc3927844e_,long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>(
                                a1 + 48,
                                &v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    }
    if ( *(_QWORD *)a4 )
    {
      v15 = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v16 = a2;
      v17 = *a4;
      v12 = *(_QWORD *)(a1 + 272);
      *(_QWORD *)(a1 + 272) = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
      *(_QWORD *)(a1 + 272) = wistd::__function::__func<_lambda_8d135f07ec1e4c768c6672246a6f5092_,long (HWND__ *,enum IHM_DISPLAY_MODE)>::__func<_lambda_8d135f07ec1e4c768c6672246a6f5092_,long (HWND__ *,enum IHM_DISPLAY_MODE)>(
                                a1 + 168,
                                &v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    }
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\Handlers.h",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  return v10;
}
