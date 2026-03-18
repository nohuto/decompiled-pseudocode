/*
 * XREFs of ?Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1801C7268
 * Callers:
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1801717F4 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180172728 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C6D84 (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UPlane@CDDisplayCachedScano.c)
 *     ??0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C7000 (--0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x1801C7324 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplayCachedScanout::Set(
        CDDisplayCachedScanout *this,
        unsigned int a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        __int64 a4,
        unsigned int a5,
        struct Windows::Devices::Display::Core::IDisplayScanout *a6)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v10; // rdi

  v6 = a2;
  v8 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)this != v8 )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(*(_QWORD *)this, v8);
    *((_QWORD *)this + 1) = *(_QWORD *)this;
  }
  if ( (_DWORD)v6 )
  {
    do
    {
      if ( *((_QWORD *)this + 1) == *((_QWORD *)this + 2) )
      {
        std::vector<CDDisplayCachedScanout::Plane>::_Emplace_reallocate<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
          (__int64 *)this,
          *((_QWORD *)this + 1),
          a3);
      }
      else
      {
        CDDisplayCachedScanout::Plane::Plane(*((CDDisplayCachedScanout::Plane **)this + 1), a3);
        *((_QWORD *)this + 1) += 88LL;
      }
      a3 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)a3 + 128);
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 1;
  v10 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a6;
  if ( a6 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)a6 + 8LL))(a6);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
