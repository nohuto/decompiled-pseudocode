/*
 * XREFs of ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18027F698
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x180188CA0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801E4EBC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180246390 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?SetDisplayId@CDDisplaySwapChain@@UEAAXVDisplayId@@@Z @ 0x18027FBC0 (-SetDisplayId@CDDisplaySwapChain@@UEAAXVDisplayId@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessUpdateTransform(
        CDDisplayRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM *a3)
{
  int v3; // edx
  __int64 v6; // rcx
  __int128 v7; // xmm0
  float v8; // xmm3_4
  int v9; // eax
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rax
  CDDARenderTarget *v13; // rcx
  __int64 v14; // rdi
  __int64 result; // rax
  int v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[208]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 8278) != v3 )
  {
    *((_DWORD *)this + 8278) = v3;
    v6 = *((_QWORD *)this + 26);
    if ( v6 )
      CDDisplaySwapChain::SetDisplayId(v6 + 24);
  }
  v7 = *((_OWORD *)a3 + 1);
  v16[0] = *((_DWORD *)a3 + 10);
  v8 = *((float *)a3 + 8);
  v16[1] = *((_DWORD *)a3 + 11);
  v16[2] = *((_DWORD *)a3 + 12);
  v16[3] = *((_DWORD *)a3 + 13);
  v9 = *((_DWORD *)a3 + 14);
  v17 = v7;
  CMonitorTransform::Initialize(
    (__int64)this + 30512,
    (int *)this + 30,
    (float *)&v17,
    v8,
    *((_DWORD *)a3 + 9),
    v9,
    v16);
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30776);
  CDDisplayRenderTarget::UpdateMPOCaps((CDDisplayRenderTarget *)((char *)this + 160));
  v12 = *((_QWORD *)this + 24);
  if ( v12 )
    *(_BYTE *)(v12 + 2628) = 1;
  v13 = (CDDARenderTarget *)*((_QWORD *)this + 27);
  if ( v13 )
    CDDARenderTarget::UpdateTransform(v13, (CDDisplayRenderTarget *)((char *)this + 30512), v10, v11);
  v14 = *((_QWORD *)this + 25);
  if ( v14 )
  {
    memset_0(v18, 0, 0xC8uLL);
    if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 32LL))(v14, v18) >= 0 )
      *((_BYTE *)this + 33521) = (v18[108] & 8) != 0;
  }
  result = 0LL;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 616LL) + 747LL) = 1;
  return result;
}
