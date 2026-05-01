/*
 * XREFs of CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x1801B811C
 * Callers:
 *     ?HandleFlashingChangeForWindow@CApplicationViewManager@@UEAAXPEAUHWND__@@H@Z @ 0x1801B80F0 (-HandleFlashingChangeForWindow@CApplicationViewManager@@UEAAXPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003CB70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     CreateAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___ @ 0x18030C0FC (CreateAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___.c)
 *     _lambda_4963465e0f00482d68929271c70599ba_::_lambda_4963465e0f00482d68929271c70599ba_ @ 0x18030C7B8 (_lambda_4963465e0f00482d68929271c70599ba_--_lambda_4963465e0f00482d68929271c70599ba_.c)
 *     _lambda_4963465e0f00482d68929271c70599ba_::__lambda_4963465e0f00482d68929271c70599ba_ @ 0x18030C980 (_lambda_4963465e0f00482d68929271c70599ba_--__lambda_4963465e0f00482d68929271c70599ba_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rdi
  int v8; // eax
  volatile int *v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v18[48]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v20; // [rsp+A0h] [rbp+30h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // [rsp+B8h] [rbp+48h] BYREF

  v21 = a3;
  v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 600);
  v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v5;
  if ( v5 )
  {
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[1])(v5);
    v20 = 0LL;
    v7 = **v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    v8 = v7(v5, &GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b, &v20);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2DD,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      return v10;
    }
    else
    {
      v16 = a1;
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 220), v9);
      v11 = lambda_4963465e0f00482d68929271c70599ba_::_lambda_4963465e0f00482d68929271c70599ba_(
              (unsigned int)v18,
              a2,
              (unsigned int)&v21,
              (unsigned int)&v16,
              a1);
      CreateAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba_(&v17, v11);
      lambda_4963465e0f00482d68929271c70599ba_::__lambda_4963465e0f00482d68929271c70599ba_(v18);
      v12 = v17;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 24LL))(v20, v17);
      v14 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2EC,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v13);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(a1);
      v15 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[2])(v5);
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DA,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000CLL);
    return 2147942412LL;
  }
}
