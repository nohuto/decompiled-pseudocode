/*
 * XREFs of ?UnregisterForFilterChanges@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1804AE2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$RemoveEx@VComPtrCompareHelper@@@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@PEA_K@Z @ 0x1804ADA14 (--$RemoveEx@VComPtrCompareHelper@@@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopThumbnailWindowFilter::UnregisterForFilterChanges(
        VirtualDesktopThumbnailWindowFilter *this,
        struct IUnknown *a2)
{
  _QWORD *v2; // rbx
  int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 64);
  v6 = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  v3 = CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveEx<ComPtrCompareHelper>(
         v2,
         (__int64)a2,
         &v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
      (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
