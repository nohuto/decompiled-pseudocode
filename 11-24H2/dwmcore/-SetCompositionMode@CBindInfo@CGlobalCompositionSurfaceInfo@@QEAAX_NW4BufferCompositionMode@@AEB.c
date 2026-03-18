/*
 * XREFs of ?SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800F0240
 * Callers:
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800F0380 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W.c)
 * Callees:
 *     ?RecordCompositionStats@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800F06A0 (-RecordCompositionStats@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMa.c)
 *     ?DxFlipConsumedTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800F091C (-DxFlipConsumedTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAXAEBUtagCOMPOSITION_TARGET.c)
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1800F0AC4 (-AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x1802374B8 (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180243568 (-SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetCompositionMode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        struct tagCOMPOSITION_TARGET_ID *a6)
{
  __int64 v6; // r15
  char v8; // si
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  bool v12; // r14
  __int64 v13; // r10
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, __int64, int, struct tagCOMPOSITION_TARGET_ID *); // rax
  char v15; // al
  CComposition *v16; // rcx

  v6 = a4;
  v8 = a2;
  if ( !a3 )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::SetRecentlyComposed((CGlobalCompositionSurfaceInfo::CBindInfo *)a1);
    if ( v8 )
    {
      if ( a6 )
        CGlobalCompositionSurfaceInfo::CBindInfo::DxFlipConsumedTelemetry(
          (CGlobalCompositionSurfaceInfo::CBindInfo *)a1,
          a6);
    }
  }
  v10 = 0LL;
  if ( g_pComposition )
    v10 = *((_QWORD *)g_pComposition + 111);
  v11 = v10 - *(_QWORD *)(a1 + 160);
  v12 = v11 <= 0xF;
  if ( *(_BYTE *)(a1 + 180) && *(_BYTE *)(a1 + 181) && v11 > 0xF )
    CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(
      (CGlobalCompositionSurfaceInfo::CBindInfo *)a1,
      0);
  v13 = *(_QWORD *)(a1 + 16);
  if ( v13 )
  {
    LOBYTE(a4) = v12;
    LOBYTE(a2) = v8;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, int, struct tagCOMPOSITION_TARGET_ID *))(*(_QWORD *)v13 + 24LL);
    if ( (char *)v14 == (char *)CFlipExSwapchainStatistics::RecordCompositionStats )
      v15 = CFlipExSwapchainStatistics::RecordCompositionStats(v13, a2, a3, a4, v6, a5, a6);
    else
      v15 = v14(v13, a2, a3, a4, v6, a5, a6);
    if ( v15 )
      CComposition::AddCompSurfInfoUpdate(v16, *(struct CCompositionSurfaceInfo **)a1);
  }
}
