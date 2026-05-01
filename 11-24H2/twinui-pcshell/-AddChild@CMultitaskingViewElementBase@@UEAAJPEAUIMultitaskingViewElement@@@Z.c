/*
 * XREFs of ?AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804C3530
 * Callers:
 *     ?AddChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804C7AE0 (-AddChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C57E0 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewElementBase::AddChild(
        CMultitaskingViewElementBase *this,
        struct IMultitaskingViewElement *a2)
{
  bool v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, struct IMultitaskingViewElement *, char *); // rbx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 (__fastcall *v13)(struct IMultitaskingViewElement *, GUID *, IRawElementProviderSimple **); // rbx
  HRESULT v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char v18; // [rsp+60h] [rbp+30h] BYREF
  IRawElementProviderSimple *pProvider; // [rsp+68h] [rbp+38h] BYREF
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(pProvider) = 0;
  v4 = 1;
  v18 = 1;
  v5 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, __int64 *))(*(_QWORD *)this + 384LL))(this, &v20);
  LODWORD(pProvider) = 1;
  v6 = *(_QWORD *)v5;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IMultitaskingViewElement *, char *))(**(_QWORD **)v5 + 24LL);
  v8 = (*(__int64 (__fastcall **)(struct IMultitaskingViewElement *))(*(_QWORD *)a2 + 400LL))(a2);
  v9 = v7(v6, v8, a2, &v18);
  if ( v9 >= 0 )
    v4 = v18 != 0;
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  if ( !v4 )
    return 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, CMultitaskingViewElementBase *))(*(_QWORD *)a2 + 32LL))(
          a2,
          this);
  if ( v10 < 0 )
  {
    v11 = 63LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, struct IMultitaskingViewElement *))(*(_QWORD *)this + 576LL))(
          this,
          a2);
  if ( v10 < 0 )
  {
    v11 = 64LL;
    goto LABEL_7;
  }
  if ( UiaClientsAreListening()
    && (*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 168LL))(this)
    && (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 328LL))(this) )
  {
    pProvider = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct IMultitaskingViewElement *))(*(_QWORD *)a2 + 168LL))(a2) )
    {
      v13 = *(__int64 (__fastcall **)(struct IMultitaskingViewElement *, GUID *, IRawElementProviderSimple **))(*(_QWORD *)a2 + 376LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
      v14 = v13(a2, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider);
      v15 = retaddr;
      if ( v14 < 0 )
      {
        v16 = 68LL;
LABEL_18:
        wil::details::in1diag3::_Log_Hr(
          v15,
          (void *)v16,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
          (const char *)(unsigned int)v14);
        goto LABEL_19;
      }
      v14 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildAdded, 0LL, 0);
      v15 = retaddr;
      if ( v14 < 0 )
      {
        v16 = 70LL;
        goto LABEL_18;
      }
    }
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
  }
  CMultitaskingViewElementBase::_LayoutChildren(this, 0LL, 0LL);
  return 0LL;
}
