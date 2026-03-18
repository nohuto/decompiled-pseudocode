/*
 * XREFs of ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801E4EBC
 * Callers:
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180189DD4 (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18027F698 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180280640 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x180284C3C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E4FDC (-reset@-$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180246390 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDARenderTarget::UpdateTransform(
        CDDARenderTarget *this,
        const struct CMonitorTransform *a2,
        __int64 a3,
        int a4)
{
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // esi
  int v8; // xmm0_4
  unsigned __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  unsigned __int64 v13; // [rsp+40h] [rbp-88h] BYREF
  __int64 v14; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v15[84]; // [rsp+50h] [rbp-78h] BYREF
  int v16; // [rsp+A4h] [rbp-24h]

  v14 = 0LL;
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 21);
  v7 = *((_DWORD *)a2 + 12);
  if ( v5 )
  {
    if ( (**v5)(v5, &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa, &v14) >= 0 )
    {
      memset_0(v15, 0, 0x60uLL);
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 56LL))(v14, v15) >= 0 )
        v7 = v16;
    }
  }
  v8 = *((_DWORD *)a2 + 1);
  v13 = 0LL;
  CMonitorTransform::Initialize((_DWORD)this + 216, (unsigned int)&v13, (_DWORD)a2 + 8, a4, v8, v7, 0LL);
  v9 = *((_QWORD *)this + 32);
  v10 = *((_DWORD *)this + 66) - 2;
  v13 = v9;
  if ( (v10 & 0xFFFFFFFD) != 0 )
  {
    v11 = HIDWORD(v13);
    v12 = v13;
  }
  else
  {
    v11 = v13;
    v12 = HIDWORD(v13);
    v13 = __PAIR64__(v13, HIDWORD(v13));
    v9 = v13;
  }
  if ( v12 != *((_DWORD *)this + 30) || v11 != *((_DWORD *)this + 31) )
  {
    wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::reset((char *)this + 176);
    *((_QWORD *)this + 15) = v9;
  }
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 480);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
}
