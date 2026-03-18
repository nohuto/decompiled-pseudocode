/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D8BD0
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180160F10 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180285788 (-RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18028FA90 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     gsl::final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___::_final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___ @ 0x1802903AC (gsl--final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___--_final_action__lambda_ed3bd09926e.c)
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180086A40 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x1800D85F0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x1800D93D0 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?pop_back@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180114CC0 (-pop_back@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeSta.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x18018F4E8 (-FlushD2DInternal@CD2DContext@@AEAAJXZ.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1801E4F64 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1801E70D8 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18025B75C (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDeviceTextureTarget@@WBAA@EAAKXZ @ 0x1802D6FB0 (-Release@CDeviceTextureTarget@@WBAA@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, __int64 a2, __int64 a3)
{
  CDrawingContext *v3; // rdi
  __int64 v4; // rbx
  char v6; // r12
  CMILRefCountImpl *v7; // r14
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // esi
  char v13; // zf
  const struct DrawingContextFlags *v14; // rdx
  void (__fastcall *v15)(CDrawingContext *, const struct DrawingContextFlags *, char); // rax
  unsigned int v16; // edi
  _BYTE *v17; // rcx
  bool (__fastcall *v18)(CDeviceTextureTarget *); // rax
  char v19; // al
  int v20; // eax
  int v21; // esi
  __int64 v22; // rcx
  int v24; // eax
  __int64 v25; // rsi
  unsigned int (__fastcall *v26)(CMILRefCountImpl *__hidden); // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  void (*v32)(void); // rax
  unsigned int v33; // edx
  void (*v34)(void); // rax
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // r9d
  char *v39; // rdx
  int v40; // [rsp+68h] [rbp+10h] BYREF

  v3 = (CDrawingContext *)((char *)this + 24);
  v4 = *((_QWORD *)this + 5) + 16LL;
  v6 = a2;
  if ( !this )
    v3 = 0LL;
  v7 = 0LL;
  CD2DContext::FlushDrawList((CD2DContext *)v4, a2, a3);
  v9 = *(_DWORD *)(v4 + 352);
  v10 = 0LL;
  v11 = (unsigned int)(v9 - 1);
  if ( v9 )
    v10 = *(_QWORD *)(*(_QWORD *)(v4 + 328) + 8 * v11);
  *(_DWORD *)(v4 + 352) = v11;
  v12 = v9 - 1;
  v13 = v9 == 1;
  v14 = (const struct DrawingContextFlags *)(v10 + 72);
  LOBYTE(v8) = v9 == 1;
  v15 = *(void (__fastcall **)(CDrawingContext *, const struct DrawingContextFlags *, char))(*(_QWORD *)v3 + 32LL);
  if ( v15 == CDrawingContext::RestoreDrawingContextFlags )
    CDrawingContext::RestoreDrawingContextFlags(v3, v14, v13);
  else
    v15(v3, v14, v8);
  v16 = -2003304307;
  if ( v12 )
  {
    v24 = *(_DWORD *)(v4 + 352);
    v25 = 0LL;
    if ( v24 )
      v25 = *(_QWORD *)(*(_QWORD *)(v4 + 328) + 8LL * (unsigned int)(v24 - 1));
    v7 = *(CMILRefCountImpl **)(v25 + 24);
    v26 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v7 + 8LL);
    if ( v26 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v7);
    else
      v26(v7);
    if ( *(_BYTE *)(v4 + 437) )
    {
      if ( !*(_BYTE *)(v25 + 78) )
      {
        v27 = *(_QWORD *)(v25 + 40);
        v28 = *(_QWORD *)(v25 + 32);
        *(_QWORD *)(v25 + 16) = v4;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v4 + 208) + 56LL))(
          *(_QWORD *)(v4 + 208),
          v28,
          v27);
        *(_BYTE *)(v25 + 78) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v25);
      }
      if ( *(_BYTE *)(v10 + 80) )
      {
        if ( *(_BYTE *)(v10 + 79) )
        {
          v37 = CD2DContext::FlushD2DInternal((CD2DContext *)v4);
          if ( v37 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x2DFu, 0LL);
        }
        else
        {
          *(_BYTE *)(v25 + 80) = 1;
        }
      }
    }
    if ( *(_DWORD *)(v4 + 1096) )
    {
      v21 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x2E8u, 0LL);
    }
    else
    {
      v21 = 0;
    }
    if ( v10 )
    {
      v29 = *(_QWORD *)(v10 + 40);
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v30 = *(_QWORD *)(v10 + 32);
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      v31 = *(_QWORD *)(v10 + 24);
      if ( v31 )
      {
        v32 = *(void (**)(void))(*(_QWORD *)v31 + 16LL);
        if ( (char *)v32 == (char *)CDeviceTextureTarget::Release )
          CDeviceTextureTarget::Release(v31);
        else
          v32();
      }
      operator delete((void *)v10, 0x58uLL);
    }
  }
  else
  {
    if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL
      && ((v17 = *(_BYTE **)(v10 + 24),
           v18 = *(bool (__fastcall **)(CDeviceTextureTarget *))(*(_QWORD *)v17 + 128LL),
           v18 != CDeviceTextureTarget::IsDisplayTarget)
        ? (v19 = ((__int64 (*)(void))v18)())
        : (v19 = v17[33]),
          v19) )
    {
      *(_QWORD *)(v4 + 424) = v10;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v4 + 208) + 56LL))(*(_QWORD *)(v4 + 208), 0LL, 0LL);
      if ( v10 )
        CD2DTarget::`scalar deleting destructor'((CD2DTarget *)v10, v33);
    }
    v20 = CD2DContext::EndDraw((CD2DContext *)v4);
    v21 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x2FEu, 0LL);
  }
  if ( *(_DWORD *)(v4 + 1096)
    || v21 != -2005532292 && v21 != -2147024882 && v21 != -2005270523
    || !*(_DWORD *)(v4 + 432) )
  {
    goto LABEL_19;
  }
  if ( v21 != -2005270523 )
  {
LABEL_59:
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)v4);
    goto LABEL_19;
  }
  v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 536) + 312LL))(*(_QWORD *)(v4 + 536));
  v36 = *(_DWORD *)(v4 + 1096);
  if ( v35 == -2005270480 )
  {
    if ( v36 )
      goto LABEL_59;
    *(_DWORD *)(v4 + 1096) = -2005270480;
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)v4);
LABEL_19:
    if ( v21 >= 0 )
      goto LABEL_20;
    goto LABEL_60;
  }
  if ( !v36 )
    *(_DWORD *)(v4 + 1096) = -2005270523;
LABEL_60:
  if ( *(_DWORD *)(v4 + 1096) )
  {
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC4u, 0LL);
    goto LABEL_23;
  }
LABEL_20:
  v40 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v21, 0LL, &v40) )
  {
    v38 = v40;
    if ( v40 == -2003304307 )
    {
      if ( v21 >= 0 )
        v21 = -2003304307;
      if ( !*(_DWORD *)(v4 + 1096) )
        *(_DWORD *)(v4 + 1096) = v21;
    }
    v21 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xB4Du, 0LL);
  }
  v16 = v21;
  if ( v21 < 0 )
    goto LABEL_22;
LABEL_23:
  if ( g_LockAndReadD2DTarget )
  {
    v39 = (char *)this + 24;
    if ( !this )
      v39 = 0LL;
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 4) + 112LL))(*((_QWORD *)this + 4), v39);
  }
  v22 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    *((_BYTE *)this + 8065) = 1;
    if ( v7 )
      (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    *((_QWORD *)this + 4) = v7;
    if ( v22 )
    {
      v34 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
      if ( (char *)v34 == (char *)CDeviceTextureTarget::Release )
        CDeviceTextureTarget::Release(v22);
      else
        v34();
    }
    CDrawingContext::UpdateRenderTargetInfo(this);
    detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::pop_back((char *)this + 744);
    *((_BYTE *)this + 8065) = 1;
  }
  return v16;
}
