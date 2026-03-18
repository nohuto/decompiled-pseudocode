/*
 * XREFs of ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A43A8
 * Callers:
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801A28A8 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x1801A4240 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 * Callees:
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800BE8A0 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x1800F0C1C (-UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x18018A498 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vli.c)
 *     ?TelemetrySetConsumerProcessId@CGlobalCompositionSurfaceInfo@@UEAAXI@Z @ 0x1801A4500 (-TelemetrySetConsumerProcessId@CGlobalCompositionSurfaceInfo@@UEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionSurfaceBitmap::SetSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  __int64 *v2; // r14
  CCompositionSurfaceInfo *v4; // rcx
  unsigned __int64 v6; // rsi
  struct CProcessAttribution *(__fastcall *v7)(CResource *); // rax
  void (__fastcall *v9)(CGlobalCompositionSurfaceInfo *__hidden, unsigned int); // rsi
  struct CProcessAttribution *(__fastcall *v10)(CResource *); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(CCompositionSurfaceBitmap *, __int64, __int64); // rax

  v2 = (__int64 *)((char *)this + 96);
  v4 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  if ( v4 != a2 )
  {
    v6 = (unsigned __int64)this + 80;
    if ( v4 )
      CCompositionSurfaceInfo::UnRegisterBitmapNotifier(
        v4,
        (struct ICompositionSurfaceInfoListener *)(v6 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(v2, (__int64)a2);
    if ( *v2 )
    {
      *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   (const void **)(*v2 + 64),
                   (__int64)(*(_QWORD *)(*v2 + 72) - *(_QWORD *)(*v2 + 64)) >> 3) = v6 & -(__int64)(this != 0LL);
      v7 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(*(_QWORD *)this + 160LL);
      if ( v7 == CResource::GetProcessAttributionNoRef ? CResource::GetProcessAttributionNoRef(this) : v7(this) )
      {
        v9 = *(void (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden, unsigned int))(*(_QWORD *)a2 + 496LL);
        v10 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(*(_QWORD *)this + 160LL);
        if ( v10 == CResource::GetProcessAttributionNoRef )
          ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef(this);
        else
          ProcessAttributionNoRef = v10(this);
        v12 = *((unsigned int *)ProcessAttributionNoRef + 32);
        if ( v9 == CGlobalCompositionSurfaceInfo::TelemetrySetConsumerProcessId )
          CGlobalCompositionSurfaceInfo::TelemetrySetConsumerProcessId(a2, v12);
        else
          v9(a2, v12);
      }
    }
    v13 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, __int64, __int64))(*(_QWORD *)this + 80LL);
    if ( (char *)v13 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 0LL, (__int64)this);
    else
      v13(this, 0LL, (__int64)this);
  }
}
