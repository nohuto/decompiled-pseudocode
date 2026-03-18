/*
 * XREFs of HOSTVMMONITORMAPPING_TriggerRemoteVsync @ 0x140035900
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _lambda_70a1cbb42e93de5f2c59c53ec44c5933_::operator() @ 0x1400780D8 (_lambda_70a1cbb42e93de5f2c59c53ec44c5933_--operator().c)
 */

void __fastcall HOSTVMMONITORMAPPING_TriggerRemoteVsync(__int64 a1, int a2, int a3, __int64 a4)
{
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rbx
  bool v12; // zf
  _QWORD *v13; // rbx
  _QWORD *v14; // rdx
  _QWORD v15[4]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v16[8]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v17; // [rsp+88h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp+7h] BYREF
  char v19; // [rsp+A8h] [rbp+1Fh]
  __int64 v20; // [rsp+F0h] [rbp+67h] BYREF
  int v21; // [rsp+F8h] [rbp+6Fh] BYREF
  int v22; // [rsp+100h] [rbp+77h] BYREF
  __int64 v23; // [rsp+108h] [rbp+7Fh] BYREF

  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2604;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          2604,
          v8,
          v9,
          0LL,
          2,
          -1,
          L"m_pGlobal != NULL",
          2604LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v10 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 305232LL;
  v20 = a1;
  v23 = a4;
  v22 = a3;
  v21 = a2;
  v11 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 305248LL;
  v19 = 0;
  v17 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 305248LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 305248LL), &LockHandle);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
  v12 = *(_BYTE *)(v10 + 32) == 0;
  v19 = 1;
  if ( v12 )
  {
    v13 = *(_QWORD **)v10;
    v15[0] = &v20;
    v15[1] = &v21;
    v15[2] = &v22;
    v15[3] = &v23;
    do
    {
      if ( v13 == (_QWORD *)v10 )
        break;
      v14 = v13;
      v13 = (_QWORD *)*v13;
    }
    while ( (unsigned __int8)lambda_70a1cbb42e93de5f2c59c53ec44c5933_::operator()(v15, v14) );
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v16);
}
