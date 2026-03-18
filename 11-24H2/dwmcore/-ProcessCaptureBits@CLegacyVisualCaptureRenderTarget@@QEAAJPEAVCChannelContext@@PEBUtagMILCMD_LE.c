/*
 * XREFs of ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801E5F28
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180039A04 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180180980 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x18018D52C (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ??2CaptureBitsResponse@@SAPEAX_K@Z @ 0x18022CAB8 (--2CaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x18022ECF8 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyVisualCaptureRenderTarget::ProcessCaptureBits(
        CLegacyVisualCaptureRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS *a3)
{
  struct CVisualTree *v3; // rsi
  unsigned int v5; // r8d
  unsigned int v7; // ebx
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rcx
  bool (__fastcall *v13)(__int64, int); // rax
  bool v14; // al
  CVisual *v15; // rcx
  int VisualTree; // eax
  unsigned __int64 v17; // rcx
  CaptureBitsResponse *v18; // rax
  struct CaptureBitsResponse *v19; // rdi
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-38h]
  struct WICRect v22; // [rsp+40h] [rbp-18h] BYREF
  struct CVisualTree *v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = this;
  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v23 = 0LL;
  if ( !v5 || COERCE_FLOAT(*((_DWORD *)a3 + 3) & _xmm) < 0.0000011920929 )
  {
    v21 = 28;
LABEL_3:
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v21, 0LL);
    goto LABEL_4;
  }
  if ( !HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)(*((_QWORD *)a2 + 6) + 16LL), v5)
    || (v11 = *(_QWORD *)(v10 + 40) + (unsigned int)(*(_DWORD *)(v10 + 24) * v9), (v12 = *(_QWORD *)(v11 + 8)) == 0)
    || ((v13 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 64LL), v13 == CKeyframeAnimation::IsOfType)
      ? (v14 = CKeyframeAnimation::IsOfType(v12, 184))
      : v13 != CVisual::IsOfType
      ? (v13 != CSharedSection::IsOfType
       ? (v14 = v13(v12, 184))
       : (v14 = CSharedSection::IsOfType(v12, 184)))
      : (v14 = CVisual::IsOfType(v12, 184)),
        !v14 || (v15 = *(CVisual **)(v11 + 8)) == 0LL) )
  {
    v21 = 34;
    goto LABEL_3;
  }
  VisualTree = CVisual::GetVisualTree(v15, &v23);
  v7 = VisualTree;
  if ( VisualTree >= 0 )
  {
    v22 = (struct WICRect)*((_OWORD *)a3 + 1);
    v18 = (CaptureBitsResponse *)CaptureBitsResponse::operator new(v17);
    v3 = v23;
    if ( v18
      && (v19 = CaptureBitsResponse::CaptureBitsResponse(
                  v18,
                  *((struct CGlobalSurfaceManager **)g_pComposition + 78),
                  a2,
                  v23,
                  1.0 / *((float *)a3 + 3),
                  &v22,
                  (enum DXGI_FORMAT)*((_DWORD *)a3 + 10),
                  *((_QWORD *)a3 + 4))) != 0LL )
    {
      v20 = CLegacySurfaceManager::AddCaptureBitsResponse(
              (CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 78) + 152LL),
              v19);
      v7 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x38u, 0LL);
      (*(void (__fastcall **)(struct CaptureBitsResponse *))(*(_QWORD *)v19 + 40LL))(v19);
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x32u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, VisualTree, 0x25u, 0LL);
    v3 = v23;
  }
LABEL_4:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v3);
  return v7;
}
