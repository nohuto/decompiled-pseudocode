/*
 * XREFs of ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1804D24CC
 * Callers:
 *     ?v_InitAccessibleObject@CSwitchItemElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C3070 (-v_InitAccessibleObject@CSwitchItemElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PE.c)
 *     ?v_InitAccessibleObject@CMultitaskingViewElementBase@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C5DE0 (-v_InitAccessibleObject@CMultitaskingViewElementBase@@MEAAJPEAUIWeakReference@WeakReference@@AEB.c)
 *     ?v_InitAccessibleObject@CSwitchItemGrid@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C9C10 (-v_InitAccessibleObject@CSwitchItemGrid@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPE.c)
 *     ?v_InitAccessibleObject@CMultitaskingViewFrameElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804CD780 (-v_InitAccessibleObject@CMultitaskingViewFrameElement@@MEAAJPEAUIWeakReference@WeakReference@@AE.c)
 *     ?v_InitAccessibleObject@CGlyphButtonElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D1EF0 (-v_InitAccessibleObject@CGlyphButtonElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@P.c)
 *     ?v_InitAccessibleObject@SwitchItemThumbnailElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D5B00 (-v_InitAccessibleObject@SwitchItemThumbnailElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_.c)
 *     ?v_InitAccessibleObject@CScrollViewer@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804DB660 (-v_InitAccessibleObject@CScrollViewer@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX.c)
 *     ?v_InitAccessibleObject@LightDismissElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804DBB40 (-v_InitAccessibleObject@LightDismissElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@P.c)
 *     ?v_InitAccessibleObject@CVirtualDesktopContainerElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804DFE20 (-v_InitAccessibleObject@CVirtualDesktopContainerElement@@MEAAJPEAUIWeakReference@WeakReference@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B1B78 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAVAccessibleElement@@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Z @ 0x1804D21D4 (--$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4Accessible.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIRawElementProviderSimple2@@UIRawElementProviderSimple@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIInvokeProvider@@UISelectionProvider@@UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@WRL@Microsoft@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGridProvider@@UIGridItemProvider@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804D2660 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@U-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElement_CreateInstance(__int64 a1, int a2, int a3, const struct _GUID *a4, _QWORD *a5)
{
  _QWORD *v6; // rsi
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  BOOL IsEqualGUID; // eax
  __int64 v12; // rcx
  int CanCastTo; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v16; // [rsp+40h] [rbp+20h] BYREF
  int v17; // [rsp+48h] [rbp+28h] BYREF
  int v18; // [rsp+50h] [rbp+30h] BYREF

  v18 = a3;
  v17 = a2;
  v16 = a1;
  v6 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease((__int64 *)&a5);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<AccessibleElement,AccessibleElement,WeakReference::IWeakReference * &,enum AccessibleElementFlags &,long &>(
         (__int64 *)&a5,
         &v16,
         &v17,
         &v18);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 802LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)v9);
    goto LABEL_11;
  }
  *v6 = 0LL;
  IsEqualGUID = InlineIsEqualGUID(a4, &GUID_00000000_0000_0000_c000_000000000046);
  v12 = (__int64)a5;
  if ( IsEqualGUID )
  {
    *v6 = a5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v8 = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IRawElementProviderSimple2,IRawElementProviderSimple,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IGridProvider,IGridItemProvider>>::CanCastTo(
                  a5,
                  a4,
                  v6);
    v8 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v8 = CanCastTo;
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
    }
  }
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 803LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease((__int64 *)&a5);
  return (unsigned int)v8;
}
