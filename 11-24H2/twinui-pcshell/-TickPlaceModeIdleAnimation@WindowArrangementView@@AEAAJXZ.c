/*
 * XREFs of ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x18052DC10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run @ 0x18052CC20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::Run @ 0x18052CC50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B78DC (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb__&_ @ 0x180529458 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4.c)
 *     ??1CDCompAnimationsOffBehaviorModifier@DCompThumbnailHelpers@@QEAA@XZ @ 0x180529F1C (--1CDCompAnimationsOffBehaviorModifier@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18052AA04 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052BF50 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052BF74 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18052CC78 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall WindowArrangementView::TickPlaceModeIdleAnimation(WindowArrangementView *this)
{
  int v2; // eax
  int v3; // ecx
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  volatile int *v6; // rdx
  unsigned int v7; // r14d
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // ecx
  volatile int *v11; // rdx
  __int64 v12; // rbx
  int v13; // edi
  HRESULT v14; // eax
  __int64 v15; // rbx
  void *v16; // rbx
  int v18[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 (__fastcall ***v19)(void *, GUID *, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+48h] BYREF
  WindowArrangementView *v24; // [rsp+A0h] [rbp+50h] BYREF
  WindowArrangementView *v25; // [rsp+A8h] [rbp+58h] BYREF

  if ( *((_DWORD *)this + 74) && *((_DWORD *)this + 77) < 3u )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 1LL);
    v3 = *((_DWORD *)this + 74);
    if ( v3 == 1 )
    {
      *((_DWORD *)this + 75) = *((_BYTE *)this + 313) != 0 ? v2 - 1 : 0;
      *((_DWORD *)this + 74) = 2;
    }
    else
    {
      if ( v3 != 2 )
        goto LABEL_10;
      if ( *((_BYTE *)this + 304) )
      {
        *((_BYTE *)this + 304) = 0;
        goto LABEL_10;
      }
      *((_DWORD *)this + 75) += *((_BYTE *)this + 313) != 0 ? -1 : 1;
    }
    *((_BYTE *)this + 304) = 1;
LABEL_10:
    *(_QWORD *)v18 = 0LL;
    v4 = *((_QWORD *)this + 15);
    v5 = *(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v4 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
    if ( v5(v4, *((unsigned int *)this + 75), 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v18) < 0 )
    {
      ++*((_DWORD *)this + 77);
      LOBYTE(v6) = 1;
      WindowArrangementView::SetPlaceModeIdleAnimationEnabled(this, v6);
    }
    else
    {
      v7 = 0;
      if ( *((_BYTE *)this + 304) )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 2LL);
        v9 = (unsigned int)(v8 - 1) >> 1;
        if ( (v8 & 1) == 0 && (unsigned int)Mirror_IsThreadRTL() )
          ++v9;
        v10 = *((_DWORD *)this + 75);
        if ( v10 == v9 )
        {
          v7 = 1;
        }
        else if ( v10 == v9 + 1 )
        {
          v7 = 2;
        }
      }
      v22 = 0LL;
      v25 = this;
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef((__int64 *)&v25, v6);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      v24 = this;
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef((__int64 *)&v24, v11);
      v22 = 0LL;
      Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb____(
        &v19,
        &v24);
      v12 = (__int64)v19;
      if ( v19 )
        v13 = (**v19)(v19, &GUID_53204493_9170_4f30_be0e_211392a4618e, &v22);
      else
        v13 = -2147024882;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v24);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BB,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v13);
LABEL_28:
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v25);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
LABEL_34:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
        return (unsigned int)v13;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v14 = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &stru_1807B22A8,
              &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
              &ppvOut);
      v13 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BE,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_28;
      }
      v15 = v22;
      v24 = (WindowArrangementView *)ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v20, (__int64 *)&v24, (__int64)&GUID_NULL, v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      v16 = ppvOut;
      v19 = (__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
      if ( v16 )
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v16 + 160LL))(v16, 1LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 168LL))(
        *((_QWORD *)this + 10),
        v7,
        1LL,
        v22);
      LODWORD(v24) = 3;
      HIDWORD(v24) = (*((_DWORD *)this + 75) != 0) + 2;
      WindowArrangementView::EnablePlaceModeDropFeedback(
        (__int64)this,
        0,
        (int *)((unsigned __int64)&v24 & -(__int64)(*((_BYTE *)this + 304) != 0)),
        v22);
      DCompThumbnailHelpers::CDCompAnimationsOffBehaviorModifier::~CDCompAnimationsOffBehaviorModifier((DCompThumbnailHelpers::CDCompAnimationsOffBehaviorModifier *)&v19);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    }
    v13 = 0;
    goto LABEL_34;
  }
  return 2147947423LL;
}
