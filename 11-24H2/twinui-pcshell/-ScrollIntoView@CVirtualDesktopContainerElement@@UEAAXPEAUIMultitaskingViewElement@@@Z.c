/*
 * XREFs of ?ScrollIntoView@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1804DFBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C73D0 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopContainerElement::ScrollIntoView(
        CVirtualDesktopContainerElement *this,
        struct IMultitaskingViewElement *a2)
{
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( a2 )
  {
    v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this - 136);
    if ( *v3 )
    {
      v4 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(v3, &v6);
      if ( v4 >= 0 )
        (*(void (__fastcall **)(__int64, struct IMultitaskingViewElement *))(*(_QWORD *)v6 + 24LL))(v6, a2);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1B8,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
          (const char *)(unsigned int)v4);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
}
