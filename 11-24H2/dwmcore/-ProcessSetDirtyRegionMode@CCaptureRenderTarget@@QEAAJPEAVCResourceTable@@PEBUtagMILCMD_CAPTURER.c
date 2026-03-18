/*
 * XREFs of ?ProcessSetDirtyRegionMode@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETDIRTYREGIONMODE@@@Z @ 0x18028293C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x180189754 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 *     ?Reset@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18021F940 (-Reset@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetDirtyRegionMode(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETDIRTYREGIONMODE *a3)
{
  int v3; // r9d
  __int64 v5; // r8

  v3 = 0;
  if ( *((_DWORD *)a3 + 2) == 1 )
  {
    v3 = 1;
  }
  else if ( *((_DWORD *)a3 + 2) == 2 )
  {
    v3 = 2;
  }
  *((_DWORD *)this + 44) = v3;
  CTargetDirtyBase<8>::Reset((__int64)this + 320);
  CTargetDirtyBase<8>::EnableTightDirtyRegion(v5, *((_DWORD *)this + 44) != 0);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 12) + 48LL))((char *)this + 96);
  return 0LL;
}
