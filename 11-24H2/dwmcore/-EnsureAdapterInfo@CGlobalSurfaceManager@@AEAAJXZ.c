/*
 * XREFs of ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x180156F18
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x180156CE4 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180156C80 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ??$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@?$_Default_allocator_traits@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@SAXAEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@1@QEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18015712C (--$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@-$_Default_allocator_traits@V-$allo.c)
 *     ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x1801571A8 (-clear@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSurfaceMana.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1801584A4 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x180159E5C (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalSurfaceManager::EnsureAdapterInfo(CGlobalSurfaceManager *this)
{
  char *v1; // rsi
  CDisplayManager *v2; // rcx
  int DXGIFactory; // eax
  struct IDXGIFactory5 *v4; // rbx
  int v5; // edi
  unsigned int i; // r14d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v12; // [rsp+28h] [rbp-E0h]
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  struct IDXGIFactory5 *v14; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v15; // [rsp+48h] [rbp-C0h]
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  char v17; // [rsp+58h] [rbp-B0h]
  _BYTE v18[296]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v19[8]; // [rsp+190h] [rbp+88h] BYREF

  v13 = 0LL;
  v1 = (char *)this + 504;
  std::vector<CGlobalSurfaceManager::AdapterInfo>::clear((char *)this + 504);
  v14 = 0LL;
  DXGIFactory = CDisplayManager::GetDXGIFactory(v2, &v14);
  v4 = v14;
  v5 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    v12 = 327;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DXGIFactory, v12, 0LL);
  }
  else if ( ((unsigned int (__fastcall *)(struct IDXGIFactory5 *))v14->lpVtbl->IsCurrent)(v14) )
  {
    for ( i = 0; ; ++i )
    {
      lpVtbl = v4->lpVtbl;
      v16 = 0LL;
      v15 = &v13;
      v17 = 1;
      v5 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v4, i, &v16);
      if ( v17 )
      {
        v8 = *v15;
        *v15 = v16;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v5 < 0 )
        break;
      memset_0(v18, 0, 0x130uLL);
      DXGIFactory = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 64LL))(v13, v18);
      v5 = DXGIFactory;
      if ( DXGIFactory < 0 )
      {
        v12 = 342;
        goto LABEL_20;
      }
      v10 = *((_QWORD *)v1 + 1);
      if ( v10 == *((_QWORD *)v1 + 2) )
      {
        std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_reallocate<_LUID &>(v1, v10, v19);
      }
      else
      {
        std::_Default_allocator_traits<std::allocator<CGlobalSurfaceManager::AdapterInfo>>::construct<CGlobalSurfaceManager::AdapterInfo,_LUID &>(
          v9,
          v10,
          v19);
        *((_QWORD *)v1 + 1) += 24LL;
      }
    }
    if ( v5 == -2005270526 )
      v5 = 0;
  }
  else
  {
    LOBYTE(word_1803FAB60) = 1;
    ScheduleCompositionPass(0LL);
    v5 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x14Du, 0LL);
  }
  if ( v4 )
    ((void (__fastcall *)(struct IDXGIFactory5 *))v4->lpVtbl->Release)(v4);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v5;
}
