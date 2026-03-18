/*
 * XREFs of ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1802DC728
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1802DC28C (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINT.c)
 *     ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z @ 0x1802DC540 (-ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICIN.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C3264 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vli.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x180295FA8 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1802DC6EC (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetRootVisual(CHolographicInteropTexture *this, struct CVisual *a2)
{
  struct CDesktopTree *v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // esi
  struct CComposition *v8; // rcx
  int v9; // eax
  struct CDesktopTree *v10; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  ReleaseInterface<IDXGIFactory7>((__int64 *)this + 13);
  if ( a2 )
  {
    v5 = *((_DWORD *)this + 534);
    if ( v5 )
    {
      v8 = (struct CComposition *)*((_QWORD *)this + 3);
      v10 = 0LL;
      v9 = CDesktopTree::Create(v8, a2, (struct _LUID)(v5 | 0xFFFFFFFE00000000uLL), (struct _LUID **)&v10);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x102u, 0LL);
        goto LABEL_8;
      }
      v4 = v10;
    }
    else
    {
      *((_QWORD *)this + 13) = a2;
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 8LL))(a2);
    }
  }
  if ( v4 != *((struct CDesktopTree **)this + 12) )
  {
    CHolographicInteropTexture::ReleaseVisualTree(this);
    if ( v4 )
    {
      *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   (const void **)v4 + 306,
                   (__int64)(*((_QWORD *)v4 + 307) - *((_QWORD *)v4 + 306)) >> 3) = ((unsigned __int64)this + 72) & -(__int64)(this != 0LL);
      *((_BYTE *)v4 + 2628) = 1;
      *((_QWORD *)this + 12) = v4;
      (*(void (__fastcall **)(struct CDesktopTree *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v6 = 0;
LABEL_8:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v4);
  return v6;
}
