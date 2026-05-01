/*
 * XREFs of ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180084AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180083D38 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180083E34 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180084E08 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?StartActivity@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180084ECC (-StartActivity@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800858F0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1801AD77C (-Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ??1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1801FBEF4 (--1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C4CCC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9bbb35718b31022091a790d2d74f2a46___ @ 0x1804694DC (Windows--Internal--ComTaskPool--QueueTask__lambda_9bbb35718b31022091a790d2d74f2a46___.c)
 *     _lambda_9bbb35718b31022091a790d2d74f2a46_::_lambda_9bbb35718b31022091a790d2d74f2a46_ @ 0x18046BB84 (_lambda_9bbb35718b31022091a790d2d74f2a46_--_lambda_9bbb35718b31022091a790d2d74f2a46_.c)
 *     _lambda_9bbb35718b31022091a790d2d74f2a46_::__lambda_9bbb35718b31022091a790d2d74f2a46_ @ 0x18046C550 (_lambda_9bbb35718b31022091a790d2d74f2a46_--__lambda_9bbb35718b31022091a790d2d74f2a46_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TouchKeyboardExperienceManager::OnChromeOffsetsChanged(
        RTL_SRWLOCK *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // rbx
  char *Ptr; // rsi
  char *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 *v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  RTL_SRWLOCK *v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v23[368]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+350h] [rbp+248h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v22,
    "OnApplicationChromeOffsetsChanged");
  *(_QWORD *)v22 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)v22);
  v4 = 0LL;
  v20 = 0LL;
  AcquireSRWLockShared(this + 38);
  v21 = this + 38;
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
    TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::Stop(
      (TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)v22,
      L"appFrameWrapper was not found");
    v11 = -2147023728;
  }
  else
  {
    v8 = *(_QWORD *)(*(_QWORD *)Ptr + 8LL);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v4 = v8;
      v20 = v8;
    }
    if ( this != (RTL_SRWLOCK *)-304LL )
      ReleaseSRWLockShared(this + 38);
    v18 = 0LL;
    v19 = &v18;
    v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v19);
    v10 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>(&this[-15], v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE4F,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      v17 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    else
    {
      v21 = this - 15;
      v19 = (__int64 *)a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 8LL))(a2);
      v12 = lambda_9bbb35718b31022091a790d2d74f2a46_::_lambda_9bbb35718b31022091a790d2d74f2a46_(
              (unsigned int)v23,
              (unsigned int)&v19,
              (unsigned int)&v18,
              (unsigned int)&v21,
              (__int64)v22);
      v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_9bbb35718b31022091a790d2d74f2a46___(
              v14,
              v13,
              HIDWORD(this[106].Ptr),
              v12);
      lambda_9bbb35718b31022091a790d2d74f2a46_::__lambda_9bbb35718b31022091a790d2d74f2a46_(v23);
      if ( (v11 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE6E,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::~OnApplicationChromeOffsetsChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)v22);
        return v11;
      }
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 16LL))(a2);
      v15 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v11 = 0;
    }
  }
  *(_QWORD *)v22 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v22);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v22);
  return v11;
}
