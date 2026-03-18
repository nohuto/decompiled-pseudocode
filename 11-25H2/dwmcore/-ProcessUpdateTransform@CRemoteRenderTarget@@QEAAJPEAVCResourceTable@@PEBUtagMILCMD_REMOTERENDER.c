/*
 * XREFs of ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18028B390
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180170C98 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801A8D4C (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18020F6F0 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180250B78 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x180251D18 (--0CMonitorTransform@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CRemoteRenderTarget::ProcessUpdateTransform(
        CRemoteRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM *a3)
{
  float v3; // xmm1_4
  float *v4; // r14
  float v6; // xmm3_4
  float v8; // xmm0_4
  _DWORD *v9; // rdi
  float v10; // xmm2_4
  int v11; // ecx
  __int64 *v12; // rbp
  __int64 v13; // rax
  CDDARenderTarget **v14; // rsi
  int *v15; // r11
  __int64 v16; // r8
  int v17; // r9d
  int v18; // eax
  float v19; // xmm1_4
  int *v21; // [rsp+40h] [rbp-148h] BYREF
  float v22; // [rsp+48h] [rbp-140h]
  float v23; // [rsp+4Ch] [rbp-13Ch]
  _BYTE v24[272]; // [rsp+50h] [rbp-138h] BYREF

  v3 = *((float *)a3 + 4);
  v4 = (float *)((char *)this + 224);
  *((float *)this + 56) = v3;
  v6 = *((float *)a3 + 5);
  *((float *)this + 57) = v6;
  v8 = *((float *)a3 + 6);
  *((float *)this + 58) = v8;
  v9 = (_DWORD *)((char *)this + 124);
  v10 = *((float *)a3 + 7);
  *((float *)this + 59) = v10;
  v11 = (int)(float)(v8 - v3);
  if ( __PAIR64__(*v9, *((_DWORD *)this + 30)) == __PAIR64__((int)(float)(v10 - v6), v11) )
  {
    v12 = (__int64 *)((char *)this + 192);
  }
  else
  {
    *((_DWORD *)this + 30) = v11;
    v12 = (__int64 *)((char *)this + 192);
    *v9 = (int)(float)(v10 - v6);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 24);
  }
  v13 = *((_QWORD *)a3 + 1);
  v14 = (CDDARenderTarget **)((char *)this + 200);
  if ( *((_QWORD *)this + 27) == v13 )
  {
    if ( *v14 )
    {
      CMonitorTransform::CMonitorTransform((CMonitorTransform *)v24);
      v21 = v15;
      CMonitorTransform::Initialize(
        (__int64)v24,
        (int *)&v21,
        v4,
        1.0,
        (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue,
        1,
        v15);
      CDDARenderTarget::UpdateTransform(*v14, (const struct CMonitorTransform *)v24, v16, v17);
    }
  }
  else
  {
    *((_QWORD *)this + 27) = v13;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 23);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v12);
    wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((CResource **)this + 25);
  }
  v18 = *((_DWORD *)this + 30);
  v21 = 0LL;
  v19 = (float)(int)*v9;
  v22 = (float)v18;
  v23 = v19;
  CMILMatrix::InferAffineMatrix((__int64)this + 240, (float *)this + 56, (float *)&v21);
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 336);
  return 0LL;
}
