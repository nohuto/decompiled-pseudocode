/*
 * XREFs of ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x180378EF8
 * Callers:
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVSearchAppExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x180378BEC (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_180378BEC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x1800C7654 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager@@PEAVWeakRef@01@@Z @ 0x180377DC0 (--$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager.c)
 *     ??0?$__func@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$$A6AJI_K_J@Z@__function@wistd@@QEAA@$$QEAV_lambda_548464be655e837fe70a6c635a8d08fa_@@@Z @ 0x180379798 (--0-$__func@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$$A6AJI_K_J@Z@__function@wistd@@QEAA@$$Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize<CortanaSharedExperienceManager>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v14 = &v13;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v7 = Microsoft::WRL::AsWeak<CortanaSharedExperienceManager>(a2, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10[0] = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v10[1] = a2;
    v11 = *a3;
    wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1 + 40);
    *(_QWORD *)(a1 + 152) = wistd::__function::__func<_lambda_548464be655e837fe70a6c635a8d08fa_,long (unsigned int,unsigned __int64,__int64)>::__func<_lambda_548464be655e837fe70a6c635a8d08fa_,long (unsigned int,unsigned __int64,__int64)>(
                              a1 + 48,
                              v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\Handlers.h",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return v8;
}
