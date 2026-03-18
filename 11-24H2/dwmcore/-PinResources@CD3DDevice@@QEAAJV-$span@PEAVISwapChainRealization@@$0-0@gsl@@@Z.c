/*
 * XREFs of ?PinResources@CD3DDevice@@QEAAJV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x1802BA9A0
 * Callers:
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180227418 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18003FF68 (-_Tidy@-$vector@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180106DC0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ??$emplace_back@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAUIDXGIResource@@@Z @ 0x1801A4008 (--$emplace_back@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_pol.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1801A513C (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??$_Emplace_reallocate@AEAPEAVISwapChainRealization@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVISwapChainRealization@@@Z @ 0x180240CC4 (--$_Emplace_reallocate@AEAPEAVISwapChainRealization@@@-$vector@V-$com_ptr_t@VIOverlayPlaneResour.c)
 *     ?erase@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@2@V?$basic_iterator@$$CBVCDelayUnpin@CD3DDevice@@@2@@Z @ 0x180245088 (-erase@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::PinResources(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r12
  __int64 *v3; // rdi
  int v4; // esi
  __int64 *v5; // r14
  __int64 *v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // r15
  __int128 v9; // kr00_16
  __int64 v10; // r12
  int v11; // eax
  _QWORD *i; // rax
  __int64 *j; // rdi
  unsigned int v14; // ebx
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-28h]
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]
  _QWORD *v21; // [rsp+B0h] [rbp+40h] BYREF
  int v22; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+58h] BYREF

  v21 = (_QWORD *)a1;
  v20 = 0LL;
  v2 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  if ( *(_DWORD *)(a1 + 1112) )
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BD6F0, 2u, -2003304307, 0x3B3u, 0LL);
    v10 = (__int64)v21;
    goto LABEL_34;
  }
  v3 = (__int64 *)a2[1];
  v4 = 0;
  v5 = v3;
  v6 = (__int64 *)*((_QWORD *)&v17 + 1);
  v7 = &v3[*a2];
  if ( v3 != v7 )
  {
    do
    {
      v8 = *v5;
      v16 = v8;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 16) + 56LL))(v8 + 16) )
      {
        v22 = 0;
        v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(v8 + 16) + 40LL))(v8 + 16, &v22);
        if ( v23 )
        {
          if ( !v22 )
          {
            std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<IDXGIResource * &>(
              (__int64)&v19,
              &v23);
            if ( v6 == v2 )
            {
              std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::_Emplace_reallocate<ISwapChainRealization * &>(
                (__int64 **)&v17,
                v6,
                &v16);
              v2 = v18;
              v6 = (__int64 *)*((_QWORD *)&v17 + 1);
            }
            else
            {
              wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
                v6++,
                (v8 + 16) & -(__int64)(v8 != 0));
              *((_QWORD *)&v17 + 1) = v6;
            }
          }
        }
      }
      ++v5;
    }
    while ( v5 != v7 );
  }
  v9 = v19;
  if ( (_QWORD)v19 == *((_QWORD *)&v19 + 1) )
  {
    v10 = (__int64)v21;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(
        Microsoft_Windows_Dwm_Compositor_Context,
        &Pinning_Start,
        (__int64)(*((_QWORD *)&v19 + 1) - v19) >> 3);
    v10 = (__int64)v21;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v21[68] + 24LL))(
            v21[68],
            v9,
            (unsigned int)((__int64)(*((_QWORD *)&v9 + 1) - v9) >> 3));
    v4 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BD6F0, 2u, v11, 0x3C9u, 0LL);
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &Pinning_Stop, (unsigned int)v4);
    if ( v4 < 0 )
      goto LABEL_34;
  }
  while ( v3 != v7 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v3 + 16) + 56LL))(*v3 + 16) )
    {
      for ( i = *(_QWORD **)(v10 + 1216); i != *(_QWORD **)(v10 + 1224); i += 3 )
      {
        if ( *i == ((*v3 + 16) & -(__int64)(*v3 != 0)) )
        {
          v21 = i;
          detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::erase(
            v10 + 1216,
            (__int64)&v22,
            (__int64 *)&v21);
          break;
        }
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*v3 + 16) + 64LL))(*v3 + 16);
    }
    ++v3;
  }
  for ( j = (__int64 *)v17; j != v6; ++j )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*j + 64LL))(*j);
LABEL_34:
  v14 = CD3DDevice::TranslateDXGIorD3DErrorInContext(v10, v4, 0xEu);
  std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy((char **)&v17);
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(&v19);
  return v14;
}
