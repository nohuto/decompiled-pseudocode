/*
 * XREFs of DxgkAttemptOpmVmBusRedirect @ 0x1403B389C
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1403B37C4 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7___ @ 0x140048860 (DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7___.c)
 *     _DXGKCALLONEXIT__lambda_21b683095b635f99e8ef2d066e0c3b45____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140057C50 (_DXGKCALLONEXIT__lambda_21b683095b635f99e8ef2d066e0c3b45____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x140187894 (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x140226BB0 (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403B39D4 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 *     _lambda_21b683095b635f99e8ef2d066e0c3b45_::operator() @ 0x1403B39F4 (_lambda_21b683095b635f99e8ef2d066e0c3b45_--operator().c)
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
  _DWORD *v11; // rsi
  DXGGLOBAL *Global; // rax
  DXG_GUEST_GLOBAL_VMBUS *v13; // rdi
  struct DXGGLOBAL *v14; // rax
  char v16; // [rsp+48h] [rbp-29h] BYREF
  struct _LUID v17; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v18; // [rsp+58h] [rbp-19h]
  __int128 v19; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v20[32]; // [rsp+78h] [rbp+7h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp+57h] BYREF

  v21 = a3;
  v16 = 0;
  *(_QWORD *)&v19 = &v21;
  *((_QWORD *)&v19 + 1) = &v16;
  DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7_((__int64)v20, &v19);
  v11 = a8;
  *a8 = -1073741823;
  Global = DXGGLOBAL::GetGlobal();
  if ( !DXGGLOBAL::IsVmConnectedToHost(Global) )
    goto LABEL_4;
  v13 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 206);
  if ( !v13 )
  {
    DXGKCALLONEXIT__lambda_21b683095b635f99e8ef2d066e0c3b45____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v20);
    return 0LL;
  }
  v17 = 0LL;
  v18 = 0;
  *(_QWORD *)&v19 = a1;
  *((_QWORD *)&v19 + 1) = a2;
  v14 = DXGGLOBAL::GetGlobal();
  if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestId(
              (struct _KTHREAD **)v14 + 38147,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v19,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v17) < 0 )
  {
LABEL_4:
    if ( v20[16] )
      lambda_21b683095b635f99e8ef2d066e0c3b45_::operator()(v20);
    return 0LL;
  }
  v16 = 1;
  *v11 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(v13, v17, v18, v21, a4, a5, a6, a7);
  DXGKCALLONEXIT__lambda_21b683095b635f99e8ef2d066e0c3b45____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v20);
  return 1LL;
}
