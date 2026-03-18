/*
 * XREFs of ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C33F8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C2C90 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C3598 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801A8D4C (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180250B78 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessUpdateTransform(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM *a3)
{
  int v3; // edx
  __int128 v6; // xmm0
  int v7; // eax
  int v8; // r9d
  CDDARenderTarget *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  _DWORD v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[208]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 8374) != v3 )
  {
    *((_DWORD *)this + 8374) = v3;
    v13 = *((_QWORD *)this + 25);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v13 + 24) + 160LL))(v13 + 24);
  }
  CLegacyRenderTarget::EnsureDXGIOutput(this);
  v6 = *((_OWORD *)a3 + 1);
  v14[0] = *((_DWORD *)a3 + 10);
  v14[1] = *((_DWORD *)a3 + 11);
  v14[2] = *((_DWORD *)a3 + 12);
  v14[3] = *((_DWORD *)a3 + 13);
  v7 = *((_DWORD *)a3 + 14);
  v15 = v6;
  CMonitorTransform::Initialize(
    (_DWORD)this + 30888,
    (_DWORD)this + 120,
    (unsigned int)&v15,
    v8,
    *((_DWORD *)a3 + 9),
    v7,
    (__int64)v14);
  if ( *((_QWORD *)this + 25) )
    CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 160));
  v9 = (CDDARenderTarget *)*((_QWORD *)this + 26);
  if ( v9 )
    CDDARenderTarget::UpdateTransform(v9, (CLegacyRenderTarget *)((char *)this + 30888));
  v10 = *((_QWORD *)this + 24);
  if ( v10 )
  {
    memset_0(v16, 0, 0xC8uLL);
    if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 32LL))(v10, v16) >= 0 )
      *((_BYTE *)this + 33898) = (v16[108] & 8) != 0;
  }
  CTargetDirtyBase<8>::SetFullDirty((char *)this + 31152);
  v11 = *((_QWORD *)this + 23);
  if ( v11 )
    *(_BYTE *)(v11 + 2628) = 1;
  result = 0LL;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 616LL) + 747LL) = 1;
  return result;
}
