/*
 * XREFs of ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x140037818
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1400375F4 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140305090 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _lambda_70a1cbb42e93de5f2c59c53ec44c5933_::operator() @ 0x1400780D8 (_lambda_70a1cbb42e93de5f2c59c53ec44c5933_--operator().c)
 */

void __fastcall HOSTVMMONITORMAPPING::TriggerRemoteVsync(KSPIN_LOCK *this, struct _LUID a2, int a3, int a4, char a5)
{
  char *v5; // rbx
  bool v7; // zf
  HOSTVMMONITORMAPPING *v8; // rbx
  HOSTVMMONITORMAPPING *v9; // rdx
  _QWORD v10[4]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-30h] BYREF
  char *v12; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  char v14; // [rsp+68h] [rbp-8h]
  struct _LUID v15; // [rsp+98h] [rbp+28h] BYREF
  int v16; // [rsp+A0h] [rbp+30h] BYREF
  int v17; // [rsp+A8h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v5 = (char *)(this + 2);
  v14 = 0;
  v12 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  v7 = *((_BYTE *)this + 32) == 0;
  v14 = 1;
  if ( v7 )
  {
    v8 = (HOSTVMMONITORMAPPING *)*this;
    v10[0] = &v15;
    v10[1] = &v16;
    v10[2] = &v17;
    v10[3] = &a5;
    do
    {
      if ( v8 == (HOSTVMMONITORMAPPING *)this )
        break;
      v9 = v8;
      v8 = *(HOSTVMMONITORMAPPING **)v8;
    }
    while ( (unsigned __int8)lambda_70a1cbb42e93de5f2c59c53ec44c5933_::operator()(v10, v9) );
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v11);
}
