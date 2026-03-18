/*
 * XREFs of ?Flush@CD3DDevice@@QEAAXXZ @ 0x18020E580
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x1800F2360 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x18020E45C (-FlushAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x1802CC7D0 (-Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802CC950 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::Flush(CD3DDevice *this)
{
  __int64 v2; // rcx
  void (*v3)(void); // rax

  v2 = *((_QWORD *)this + 74);
  if ( v2 )
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 24LL);
  else
    v3 = *(void (**)(void))(**((_QWORD **)this + 70) + 888LL);
  v3();
  *((_BYTE *)this + 1499) = 0;
}
