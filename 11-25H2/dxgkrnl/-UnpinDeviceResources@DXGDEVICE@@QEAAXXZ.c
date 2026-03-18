/*
 * XREFs of ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1402BB848
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1402BB68C (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1402E11B0 (-DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinDeviceResources(DXGDEVICE *this)
{
  struct _KTHREAD **v1; // rbx
  struct DXGRESOURCE *v3; // rbx
  _BYTE v4[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]

  v1 = (struct _KTHREAD **)((char *)this + 240);
  v5 = (char *)this + 240;
  if ( this != (DXGDEVICE *)-240LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v1[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v1);
  v3 = (struct DXGRESOURCE *)*((_QWORD *)this + 7);
  v6 = 2;
  while ( v3 )
  {
    DXGDEVICE::DisablePinnedResource(this, v3);
    v3 = (struct DXGRESOURCE *)*((_QWORD *)v3 + 5);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4);
}
