/*
 * XREFs of ?ReportDestructionBegun@DXGDEVICE@@AEAAXXZ @ 0x14037EFF4
 * Callers:
 *     ?ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@PEAVCOREDEVICEACCESS@@@Z @ 0x14036617C (-ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINAT.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGDEVICE::ReportDestructionBegun(DXGDEVICE *this)
{
  struct _KTHREAD **v1; // rdi
  bool v3; // zf
  _BYTE v4[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]

  v1 = (struct _KTHREAD **)((char *)this + 176);
  v5 = (char *)this + 176;
  if ( this != (DXGDEVICE *)-176LL )
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
  v3 = ++*((_DWORD *)this + 476) == 1;
  v6 = 2;
  if ( v3 )
    KeClearEvent(*((PRKEVENT *)this + 239));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4);
}
