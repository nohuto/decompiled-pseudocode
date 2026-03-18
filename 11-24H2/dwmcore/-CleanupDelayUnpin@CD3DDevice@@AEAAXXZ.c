/*
 * XREFs of ?CleanupDelayUnpin@CD3DDevice@@AEAAXXZ @ 0x1802B8E94
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1802232EC (--1CD3DDevice@@MEAA@XZ.c)
 *     ?ProcessDeviceLost@CD3DDevice@@IEAAXXZ @ 0x1802BD5E0 (-ProcessDeviceLost@CD3DDevice@@IEAAXXZ.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ??$emplace_back@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAUIDXGIResource@@@Z @ 0x1801A4008 (--$emplace_back@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_pol.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1801A513C (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022AA04 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180249A5C (-clear@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::CleanupDelayUnpin(CD3DDevice *this)
{
  __int64 *v1; // rdi
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int128 v5; // kr00_16
  unsigned int v6; // eax
  int v7; // ebx
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  v1 = (__int64 *)((char *)this + 1216);
  v2 = (_QWORD *)*((_QWORD *)this + 152);
  v3 = (_QWORD *)*((_QWORD *)this + 153);
  v10 = 0LL;
  while ( v2 != v3 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 40LL))(*v2, 0LL);
    if ( v13 )
      std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<IDXGIResource * &>(
        (__int64)&v10,
        &v13);
    v2 += 3;
  }
  v5 = v10;
  if ( (_QWORD)v10 != *((_QWORD *)&v10 + 1) )
  {
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(
        Microsoft_Windows_Dwm_Compositor_Context,
        &UnPinning_Start,
        (__int64)(*((_QWORD *)&v10 + 1) - v10) >> 3);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 68) + 32LL))(
           *((_QWORD *)this + 68),
           v5,
           (unsigned int)((__int64)(*((_QWORD *)&v5 + 1) - v5) >> 3));
    v7 = v6;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &UnPinning_Stop, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x495,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v7);
  }
  v8 = (_QWORD *)*v1;
  v9 = (_QWORD *)v1[1];
  while ( v8 != v9 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 72LL))(*v8);
    v8 += 3;
  }
  detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::clear(v1);
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(&v10);
}
