/*
 * XREFs of ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x1802BAC58
 * Callers:
 *     ?ProcessDelayUnpin@CLegacyRenderTarget@@UEAAXXZ @ 0x18027E9E0 (-ProcessDelayUnpin@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ?ProcessDelayUnpin@CDDisplayRenderTarget@@UEAAXXZ @ 0x18027F540 (-ProcessDelayUnpin@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802BE5B0 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1802C99D8 (--1CLegacySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18003FF68 (-_Tidy@-$vector@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ??$emplace_back@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAUIDXGIResource@@@Z @ 0x1801A4008 (--$emplace_back@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_pol.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1801A513C (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??$emplace_back@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_T$$QEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801D8AD8 (--$emplace_back@V-$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022AA04 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@2@V?$basic_iterator@$$CBVCDelayUnpin@CD3DDevice@@@2@@Z @ 0x180245088 (-erase@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vl.c)
 *     ?ReadyToUnpin@CDelayUnpin@CD3DDevice@@QEAA_NU_LUID@@II@Z @ 0x1802BD6C0 (-ReadyToUnpin@CDelayUnpin@CD3DDevice@@QEAA_NU_LUID@@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::ProcessDelayUnpinForTarget(
        CD3DDevice *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int a4)
{
  char *v4; // r14
  __int64 *v5; // rbx
  __int128 v10; // kr00_16
  unsigned int v11; // eax
  int v12; // ebx
  _QWORD *i; // rbx
  _BYTE v14[8]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v15; // [rsp+28h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 *v20; // [rsp+90h] [rbp+30h] BYREF

  v18 = 0LL;
  v4 = (char *)this + 1216;
  v16 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 152);
  v17 = 0LL;
  v15 = 0LL;
  while ( v5 != *((__int64 **)this + 153) )
  {
    if ( CD3DDevice::CDelayUnpin::ReadyToUnpin((CD3DDevice::CDelayUnpin *)v5, a2, a3, a4) )
    {
      v20 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v5 + 40LL))(*v5, 0LL);
      if ( v20 )
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<IDXGIResource * &>(
          (__int64)&v17,
          (__int64 *)&v20);
      std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>(
        (__int64)&v15,
        v5);
      v20 = v5;
      v5 = *(__int64 **)detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::erase(
                          (__int64)v4,
                          (__int64)v14,
                          (__int64 *)&v20);
    }
    else
    {
      v5 += 3;
    }
  }
  v10 = v17;
  if ( (_QWORD)v17 != *((_QWORD *)&v17 + 1) )
  {
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(
        Microsoft_Windows_Dwm_Compositor_Context,
        &UnPinning_Start,
        (__int64)(*((_QWORD *)&v17 + 1) - v17) >> 3);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 68) + 32LL))(
            *((_QWORD *)this + 68),
            v10,
            (unsigned int)((__int64)(*((_QWORD *)&v10 + 1) - v10) >> 3));
    v12 = v11;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &UnPinning_Stop, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x474,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v12);
  }
  for ( i = (_QWORD *)v15; i != *((_QWORD **)&v15 + 1); ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 72LL))(*i);
  std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy((char **)&v15);
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(&v17);
}
