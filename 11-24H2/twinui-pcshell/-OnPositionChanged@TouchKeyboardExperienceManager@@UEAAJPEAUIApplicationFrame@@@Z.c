/*
 * XREFs of ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800837E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180081B28 (-Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ??$Start@$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x180083C10 (--$Start@$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@X.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180083D38 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180083E34 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180083F0C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_180083F0C.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3b092b602b32291197616247ac44fb10___ @ 0x1804692F0 (Windows--Internal--ComTaskPool--QueueTask__lambda_3b092b602b32291197616247ac44fb10___.c)
 *     _lambda_3b092b602b32291197616247ac44fb10_::_lambda_3b092b602b32291197616247ac44fb10_ @ 0x18046BA1C (_lambda_3b092b602b32291197616247ac44fb10_--_lambda_3b092b602b32291197616247ac44fb10_.c)
 *     _lambda_3b092b602b32291197616247ac44fb10_::__lambda_3b092b602b32291197616247ac44fb10_ @ 0x18046C4C4 (_lambda_3b092b602b32291197616247ac44fb10_--__lambda_3b092b602b32291197616247ac44fb10_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TouchKeyboardExperienceManager::OnPositionChanged(RTL_SRWLOCK *this, struct IApplicationFrame *a2)
{
  __int64 v4; // rbx
  char *Ptr; // rsi
  char *v6; // r15
  __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // rsi
  __int64 *v10; // r15
  __int64 *v11; // rdi
  struct IApplicationFrame *v12; // rdx
  struct IApplicationFrame *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  struct IApplicationFrame *v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  int v26[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v27[368]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+350h] [rbp+248h]

  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Start<>((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v26);
  v4 = 0LL;
  v25 = 0LL;
  AcquireSRWLockShared(this + 38);
  v24 = (__int64 *)&this[38];
  Ptr = (char *)this[39].Ptr;
  v6 = (char *)this[40].Ptr;
  while ( Ptr != v6
       && ((unsigned __int8)std::_Atomic_storage<bool,1>::load(*(_QWORD *)Ptr + 32LL)
        || !*(_BYTE *)(v7 + 33)
        || !*(_QWORD *)(v7 + 56)
        || *(_DWORD *)(**(_QWORD **)(v7 + 48) + 16LL) == -1
        || *(_DWORD *)(v7 + 104) == -1
        || (*(unsigned int (__fastcall **)(_QWORD, struct IApplicationFrame *))(**(_QWORD **)(*(_QWORD *)Ptr + 8LL)
                                                                              + 24LL))(
             *(_QWORD *)(*(_QWORD *)Ptr + 8LL),
             a2) != 1) )
    Ptr += 16;
  if ( Ptr == this[40].Ptr )
  {
    if ( this != (RTL_SRWLOCK *)-304LL )
      ReleaseSRWLockShared(this + 38);
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Stop(
      (TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v26,
      L"appFrameWrapper was not found");
    v8 = -2147023728;
  }
  else
  {
    v9 = *(_QWORD *)(*(_QWORD *)Ptr + 8LL);
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v4 = v9;
      v25 = v9;
    }
    if ( this != (RTL_SRWLOCK *)-304LL )
      ReleaseSRWLockShared(this + 38);
    v22 = 0LL;
    v24 = &v22;
    v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v24);
    v24 = 0LL;
    v8 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>(
           &this[-15],
           &_uuidof__AUIWeakReferenceSource_Details_Platform__,
           &v24);
    if ( v8 < 0 )
    {
      if ( v24 )
        (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
    }
    else
    {
      v23 = 0LL;
      v11 = v24;
      v8 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationFrame **))(*v24 + 24))(v24, &v23);
      if ( v8 < 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
        if ( v11 )
          (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
      }
      else
      {
        v12 = v23;
        v13 = v23;
        if ( v23 )
        {
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v23 + 8LL))(v23);
          v12 = v23;
        }
        v14 = *v10;
        *v10 = (__int64)v13;
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          v12 = v23;
        }
        if ( v12 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v12 + 16LL))(v12);
        }
        if ( v11 )
          (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
        v8 = 0;
      }
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD98,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      v20 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    else
    {
      v24 = (__int64 *)&this[-15];
      v23 = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 8LL))(a2);
      v15 = lambda_3b092b602b32291197616247ac44fb10_::_lambda_3b092b602b32291197616247ac44fb10_(
              (unsigned int)v27,
              (unsigned int)&v23,
              (unsigned int)&v22,
              (unsigned int)&v24,
              (__int64)v26);
      v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_3b092b602b32291197616247ac44fb10___(
             v17,
             v16,
             HIDWORD(this[106].Ptr),
             v15);
      lambda_3b092b602b32291197616247ac44fb10_::__lambda_3b092b602b32291197616247ac44fb10_(v27);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDB7,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
        if ( a2 )
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 16LL))(a2);
        v21 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      else
      {
        if ( a2 )
          (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 16LL))(a2);
        v18 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v8 = 0;
      }
    }
  }
  *(_QWORD *)v26 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(v26);
  return (unsigned int)v8;
}
