/*
 * XREFs of ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6390
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?RecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBA_NXZ @ 0x1801A6540 (-RecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     ?RecordCompositionStats@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A66B0 (-RecordCompositionStats@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMa.c)
 *     ?DxFlipConsumedTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A692C (-DxFlipConsumedTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAXAEBUtagCOMPOSITION_TARGET.c)
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A6AD4 (-AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x18023FD8C (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18024C15C (-SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionSurfaceBitmap::SetCompositionMode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        struct tagCOMPOSITION_TARGET_ID *a6)
{
  __int64 v6; // rbx
  unsigned __int8 v9; // si
  void (__fastcall *v10)(__int64, __int64, unsigned int, __int64, int, struct tagCOMPOSITION_TARGET_ID *); // rax
  bool v11; // r12
  __int64 v12; // r10
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD, bool, __int64, int, struct tagCOMPOSITION_TARGET_ID *); // rax
  char v14; // al

  v6 = *(_QWORD *)(a1 + 24);
  v9 = a2;
  if ( v6 )
  {
    v10 = *(void (__fastcall **)(__int64, __int64, unsigned int, __int64, int, struct tagCOMPOSITION_TARGET_ID *))(*(_QWORD *)v6 + 224LL);
    if ( v10 == CGlobalCompositionSurfaceInfo::CBindInfo::SetCompositionMode )
    {
      if ( !a3 )
      {
        CGlobalCompositionSurfaceInfo::CBindInfo::SetRecentlyComposed((CGlobalCompositionSurfaceInfo::CBindInfo *)v6);
        if ( v9 )
        {
          if ( a6 )
            CGlobalCompositionSurfaceInfo::CBindInfo::DxFlipConsumedTelemetry(
              (CGlobalCompositionSurfaceInfo::CBindInfo *)v6,
              a6);
        }
      }
      v11 = CGlobalCompositionSurfaceInfo::CBindInfo::RecentlyComposed((CGlobalCompositionSurfaceInfo::CBindInfo *)v6);
      if ( *(_BYTE *)(v6 + 180) && *(_BYTE *)(v6 + 181) && !v11 )
        CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(
          (CGlobalCompositionSurfaceInfo::CBindInfo *)v6,
          0);
      if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)(v6 + 16)) )
      {
        v12 = *(_QWORD *)(v6 + 16);
        v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, bool, __int64, int, struct tagCOMPOSITION_TARGET_ID *))(*(_QWORD *)v12 + 24LL);
        if ( (char *)v13 == (char *)CFlipExSwapchainStatistics::RecordCompositionStats )
          v14 = CFlipExSwapchainStatistics::RecordCompositionStats(v12, v9, a3, v11, a4, a5, a6);
        else
          v14 = v13(v12, v9, a3, v11, a4, a5, a6);
        if ( v14 )
          CComposition::AddCompSurfInfoUpdate(g_pComposition, *(struct CCompositionSurfaceInfo **)v6);
      }
    }
    else if ( (char *)v10 == (char *)&CGlobalCompositionSurfaceInfo::SetCompositionMode )
    {
      CGlobalCompositionSurfaceInfo::CBindInfo::SetCompositionMode(v6 + 112, a2, a3, a4, a5, a6);
    }
    else
    {
      ((void (__fastcall *)(__int64))v10)(v6);
    }
  }
}
