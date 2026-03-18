/*
 * XREFs of ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800FFA34
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800FF800 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800C5BD8 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800FEBF0 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ??$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@?$_Default_allocator_traits@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@SAXAEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@1@QEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x1800FFC48 (--$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@-$_Default_allocator_traits@V-$allo.c)
 *     ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x1800FFCB0 (-clear@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSurfaceMana.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800FFCE0 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalSurfaceManager::EnsureAdapterInfo(CGlobalSurfaceManager *this)
{
  __int64 *v1; // rsi
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
  v1 = (__int64 *)((char *)this + 504);
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
      v10 = v1[1];
      if ( v10 == v1[2] )
      {
        std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_reallocate<_LUID &>(v1, v10, (__int64)v19);
      }
      else
      {
        std::_Default_allocator_traits<std::allocator<CGlobalSurfaceManager::AdapterInfo>>::construct<CGlobalSurfaceManager::AdapterInfo,_LUID &>(
          v9,
          v10,
          v19);
        v1[1] += 24LL;
      }
    }
    if ( v5 == -2005270526 )
      v5 = 0;
  }
  else
  {
    LOBYTE(word_180406BB0) = 1;
    ScheduleCompositionPass(0, 0x80000u);
    v5 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x14Du, 0LL);
  }
  if ( v4 )
    ((void (__fastcall *)(struct IDXGIFactory5 *))v4->lpVtbl->Release)(v4);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v5;
}
