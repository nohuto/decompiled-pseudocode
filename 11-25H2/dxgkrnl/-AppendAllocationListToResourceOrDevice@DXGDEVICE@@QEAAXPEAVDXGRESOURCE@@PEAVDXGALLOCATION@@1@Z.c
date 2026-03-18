/*
 * XREFs of ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x14037A260
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGDEVICE::AppendAllocationListToResourceOrDevice(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3,
        struct DXGALLOCATION *a4)
{
  struct _KTHREAD **v4; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 i; // rcx
  _BYTE v12[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]

  v14 = 0;
  v4 = (struct _KTHREAD **)((char *)this + 208);
  v13 = (char *)this + 208;
  if ( this != (DXGDEVICE *)-208LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v4[1] == KeGetCurrentThread() )
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
  if ( a2 )
  {
    v10 = *((_QWORD *)a2 + 3);
    if ( v10 )
    {
      for ( i = *(_QWORD *)(v10 + 64); i; i = *(_QWORD *)(i + 64) )
        v10 = i;
      *(_QWORD *)(v10 + 64) = a3;
      *((_QWORD *)a3 + 7) = v10;
    }
    else
    {
      *((_QWORD *)a2 + 3) = a3;
    }
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v4);
    *((_QWORD *)a4 + 8) = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = a3;
    v9 = *((_QWORD *)a4 + 8);
    v14 = 2;
    if ( v9 )
      *(_QWORD *)(v9 + 56) = a4;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
}
