/*
 * XREFs of DxgkAttemptOpmVmBusRedirect @ 0x1403A43EC
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1403A4314 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c___ @ 0x140048090 (DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c___.c)
 *     _DXGKCALLONEXIT__lambda_eaecb3877008d04769bbc086d157a70f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140068300 (_DXGKCALLONEXIT__lambda_eaecb3877008d04769bbc086d157a70f____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x140189958 (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     _lambda_f93b6c6ee9b6b8901d0816f359f99208_::_lambda_f93b6c6ee9b6b8901d0816f359f99208_ @ 0x14019FF9C (_lambda_f93b6c6ee9b6b8901d0816f359f99208_--_lambda_f93b6c6ee9b6b8901d0816f359f99208_.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x14022D49C (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403A4510 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkAttemptOpmVmBusRedirect(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int *a7,
        _DWORD *a8)
{
  unsigned int v10; // edi
  _DWORD *v12; // r14
  DXGGLOBAL *Global; // rax
  DXG_GUEST_GLOBAL_VMBUS *v14; // rsi
  struct DXGGLOBAL *v15; // rax
  char v17[8]; // [rsp+48h] [rbp-39h] BYREF
  struct _LUID v18; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-29h]
  __int128 v20; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v21[32]; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+D8h] [rbp+57h] BYREF

  v22 = a3;
  v10 = 0;
  v17[0] = 0;
  v20 = *(_OWORD *)lambda_f93b6c6ee9b6b8901d0816f359f99208_::_lambda_f93b6c6ee9b6b8901d0816f359f99208_(
                     &v18,
                     (__int64)&v22,
                     (__int64)v17);
  DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c_((__int64)v21, &v20);
  v12 = a8;
  *a8 = -1073741823;
  Global = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::IsVmConnectedToHost(Global) )
  {
    v14 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 210);
    if ( v14 )
    {
      *(_QWORD *)&v20 = a1;
      v18 = 0LL;
      v19 = 0;
      *((_QWORD *)&v20 + 1) = a2;
      v15 = DXGGLOBAL::GetGlobal();
      if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestId(
                  (struct _KTHREAD **)v15 + 38157,
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v20,
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v18) >= 0 )
      {
        v10 = 1;
        v17[0] = 1;
        *v12 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(v14, v18, v19, v22, a4, a5, a6, a7);
      }
    }
  }
  DXGKCALLONEXIT__lambda_eaecb3877008d04769bbc086d157a70f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v21);
  return v10;
}
