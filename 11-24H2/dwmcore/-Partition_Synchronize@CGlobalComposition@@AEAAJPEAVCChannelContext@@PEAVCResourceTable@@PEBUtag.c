/*
 * XREFs of ?Partition_Synchronize@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x18018D3A8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x18018A498 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vli.c)
 *     ??0CResponseItem@@IEAA@PEAVCGlobalSurfaceManager@@@Z @ 0x18018E620 (--0CResponseItem@@IEAA@PEAVCGlobalSurfaceManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalComposition::Partition_Synchronize(
        CGlobalComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SYNCHRONIZE *a4)
{
  CResponseItem *v6; // rax
  CResponseItem *v7; // rdi
  __int64 v8; // rbx

  v6 = (CResponseItem *)operator new(0x38uLL);
  v7 = v6;
  if ( v6 )
  {
    v8 = *((_QWORD *)a4 + 1);
    CResponseItem::CResponseItem(v6, *((struct CGlobalSurfaceManager **)this + 78));
    *((_QWORD *)v7 + 5) = v8;
    *(_QWORD *)v7 = &CEventResponse::`vftable';
    *((_BYTE *)v7 + 48) = 0;
    if ( *((_BYTE *)a4 + 16) )
    {
      ((void (__fastcall *)(CResponseItem *))*(&CEventResponse::`vftable' + 4))(v7);
      *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   (const void **)this + 40,
                   (__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 3) = v7;
    }
    (*(void (__fastcall **)(CResponseItem *))(*(_QWORD *)v7 + 40LL))(v7);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xCBu, 0LL);
    SetEvent(*((HANDLE *)a4 + 1));
    CloseHandle(*((HANDLE *)a4 + 1));
  }
  return 0LL;
}
