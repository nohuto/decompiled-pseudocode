/*
 * XREFs of ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x1801CE71C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSource@CBitmapResource@@IEAAJPEAUIWICBitmap@@@Z @ 0x1801CE7DC (-SetSource@CBitmapResource@@IEAAJPEAUIWICBitmap@@@Z.c)
 *     ??$emplace@PEAUIUnknown@@@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@1@V?$basic_iterator@$$CBV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@1@PEAUIUnknown@@@Z @ 0x1801CE884 (--$emplace@PEAUIUnknown@@@-$vector_facade@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapResource::ProcessSource(
        CBitmapResource *this,
        struct CResourceTable *a2,
        struct IWICBitmap **a3)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  char v9; // [rsp+40h] [rbp+8h] BYREF
  struct CResourceTable *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
  v5 = CBitmapResource::SetSource(this, a3[1]);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x14u, 0LL);
  if ( a3[1] )
  {
    v7 = *((_QWORD *)this + 3) + 5792LL;
    v10 = *(struct CResourceTable **)(*((_QWORD *)this + 3) + 5800LL);
    detail::vector_facade<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,8,1,detail::liberal_expansion_policy>>::emplace<IUnknown *>(
      v7,
      &v9,
      &v10);
    ((void (__fastcall *)(struct IWICBitmap *))a3[1]->lpVtbl->Release)(a3[1]);
  }
  (*(void (__fastcall **)(CBitmapResource *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  return v6;
}
