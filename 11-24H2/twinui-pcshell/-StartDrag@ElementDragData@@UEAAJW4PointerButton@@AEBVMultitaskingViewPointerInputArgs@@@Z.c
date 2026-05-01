/*
 * XREFs of ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DD760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018698C (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802C02D4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1802C02D4.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804DBEAC (--$As@UIMultitaskingViewDragSource@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804DC6F0 (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804DC86C (--4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DCABC (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1804DCEBC (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804DD628 (-StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@NAEBU_GUID@@PEAPEAX@Z @ 0x1804E21A0 (-MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingVie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ElementDragData::StartDrag(__int64 a1, int a2, __int64 *a3)
{
  int DragSourceLocation; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int32 v9; // ecx
  int Instance; // eax
  __int64 v11; // rdx
  __int64 **v12; // r12
  __int64 *v13; // rcx
  __int64 v14; // rax
  const struct _GUID *v16; // [rsp+28h] [rbp-D8h]
  __m128i v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19[3]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v20[42]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[42]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"DragSwitchItem");
  v20[0] = &MultitaskingViewTelemetry::DragSwitchItem::`vftable';
  MultitaskingViewTelemetry::DragSwitchItem::StartActivity((MultitaskingViewTelemetry::DragSwitchItem *)v20);
  v17.m128i_i64[0] = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v17.m128i_i64);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, v17.m128i_i64, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17.m128i_i64);
  *(_DWORD *)(a1 + 88) = a2;
  *(_OWORD *)(a1 + 92) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 108) = *((_DWORD *)a3 + 4);
  v17 = 0LL;
  DragSourceLocation = ElementDragData::GetDragSourceLocation((ElementDragData *)a1, &v17);
  v7 = DragSourceLocation;
  if ( DragSourceLocation >= 0 )
  {
    v8 = *a3;
    *(_QWORD *)(a1 + 64) = *a3;
    v9 = *(_DWORD *)(a1 + 68) - v17.m128i_i32[1];
    v17.m128i_i32[0] = v8 - v17.m128i_i32[0];
    v17.m128i_i32[1] = v9;
    *(_QWORD *)(a1 + 56) = v17.m128i_i64[0];
    v18 = 0LL;
    Instance = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32),
                 &v18);
    v7 = Instance;
    if ( Instance >= 0 )
    {
      v12 = (__int64 **)(a1 + 48);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 48));
      Instance = MultitaskingViewDragVisual_CreateInstance(
                   *(struct ISwitchThumbnailFactory **)(a1 + 16),
                   *(struct IMultitaskingViewElement **)(a1 + 40),
                   *(struct IMultitaskingViewElement **)(a1 + 32),
                   (const struct Geometry::CSize *)(a1 + 56),
                   *(double *)(a1 + 120),
                   v16,
                   (void **)(a1 + 48));
      v7 = Instance;
      if ( Instance >= 0 )
      {
        v13 = *v12;
        v14 = **v12;
        v17.m128i_i64[0] = *(_QWORD *)(a1 + 92);
        (*(void (__fastcall **)(__int64 *, __m128i *, _QWORD, _QWORD))(v14 + 24))(v13, &v17, 0LL, 0LL);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 216LL))(*(_QWORD *)(a1 + 40));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 232LL))(*(_QWORD *)(a1 + 40));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 432LL))(
          *(_QWORD *)(a1 + 40),
          *(_QWORD *)(a1 + 24));
        ElementDragData::DragOver((ElementDragData *)a1, (const struct MultitaskingViewPointerInputArgs *)a3);
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v21,
          (__int64)v20,
          0);
        v21[0] = &MultitaskingViewTelemetry::DragSwitchItem::`vftable';
        MultitaskingViewTelemetry::DragSwitchItem::operator=((_QWORD *)(a1 + 184), (__int64)v21);
        MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((MultitaskingViewTelemetry::DragSwitchItem *)v21);
        *(_DWORD *)(a1 + 520) = 1;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        v7 = 0;
        goto LABEL_9;
      }
      v11 = 113LL;
    }
    else
    {
      v11 = 106LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)Instance);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)DragSourceLocation);
  }
LABEL_9:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
  MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((MultitaskingViewTelemetry::DragSwitchItem *)v20);
  return v7;
}
