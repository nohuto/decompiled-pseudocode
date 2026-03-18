/*
 * XREFs of ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140394FFC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGDEVICE::RemoveResourceFromDeviceList(struct DXGRESOURCE **this, struct DXGRESOURCE *a2)
{
  struct _KTHREAD **v2; // rdi
  char *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  _BYTE v9[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]

  v2 = this + 30;
  v10 = (char *)(this + 30);
  if ( this != (struct DXGRESOURCE **)-240LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v2[1] == KeGetCurrentThread() )
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
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
  v11 = 2;
  if ( a2 == this[7] )
  {
    v5 = (char *)(this + 7);
  }
  else
  {
    if ( !*((_QWORD *)a2 + 4) )
      goto LABEL_15;
    v5 = (char *)(this + 7);
  }
  v6 = *((_QWORD *)a2 + 5);
  v7 = this + 7;
  if ( v6 )
  {
    v7 = v5;
    *(_QWORD *)(v6 + 32) = *((_QWORD *)a2 + 4);
  }
  v8 = *((_QWORD *)a2 + 4);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 40) = *((_QWORD *)a2 + 5);
  }
  else
  {
    if ( this[7] != a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9045;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pResourceList == pResource", 9045LL, 0LL, 0LL, 0LL, 0LL);
    }
    *v7 = *((_QWORD *)a2 + 5);
  }
LABEL_15:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
}
