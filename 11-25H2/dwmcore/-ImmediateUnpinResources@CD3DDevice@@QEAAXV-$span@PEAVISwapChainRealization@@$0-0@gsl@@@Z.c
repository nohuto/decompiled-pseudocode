/*
 * XREFs of ?ImmediateUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x1802C39EC
 * Callers:
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1801E8B68 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ??$emplace_back@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAUIDXGIResource@@@Z @ 0x180100A50 (--$emplace_back@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_pol.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1801011AC (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180236804 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::ImmediateUnpinResources(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // eax
  int v10; // edi
  __int64 v11; // rdi
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v2 = (__int64 *)a2[1];
  v13 = 0LL;
  v12 = 0LL;
  v4 = v2;
  v5 = &v2[*a2];
  if ( v2 != v5 )
  {
    do
    {
      v6 = *v4;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v4 + 16) + 56LL))(*v4 + 16) )
      {
        v7 = *(_QWORD *)(v6 + 16);
        v15 = 0;
        v16 = (*(__int64 (__fastcall **)(__int64, int *))(v7 + 40))(v6 + 16, &v15);
        if ( v16 )
          std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<IDXGIResource * &>(
            (__int64)&v12,
            &v16);
      }
      ++v4;
    }
    while ( v4 != v5 );
  }
  v8 = *((_QWORD *)&v12 + 1);
  if ( (_QWORD)v12 != *((_QWORD *)&v12 + 1) )
  {
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(
        (__int64)Microsoft_Windows_Dwm_Compositor_Context,
        (__int64)&UnPinning_Start,
        (__int64)(*((_QWORD *)&v12 + 1) - v12) >> 3);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 544) + 32LL))(
           *(_QWORD *)(a1 + 544),
           v12,
           (unsigned int)((v8 - (__int64)v12) >> 3));
    v10 = v9;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer((__int64)Microsoft_Windows_Dwm_Compositor_Context, (__int64)&UnPinning_Stop, v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x459,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v10);
  }
  while ( v2 != v5 )
  {
    v11 = *v2;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v2 + 16) + 56LL))(*v2 + 16) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 16) + 72LL))(v11 + 16);
    ++v2;
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(&v12);
}
