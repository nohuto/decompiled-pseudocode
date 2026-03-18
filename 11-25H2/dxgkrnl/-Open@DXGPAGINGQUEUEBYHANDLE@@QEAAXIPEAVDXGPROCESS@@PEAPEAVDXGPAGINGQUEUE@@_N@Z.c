/*
 * XREFs of ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002D7A8
 * Callers:
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1401CBC28 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x140293140 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     DxgkReclaimAllocations2 @ 0x1402963B0 (DxgkReclaimAllocations2.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1402DF238 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     DxgkUpdateAllocationProperty @ 0x1402FA170 (DxgkUpdateAllocationProperty.c)
 *     DxgkMapGpuVirtualAddress @ 0x14032FA20 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1403A21E0 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGPAGINGQUEUEBYHANDLE::Open(
        DXGPAGINGQUEUEBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGPAGINGQUEUE **a4,
        bool a5)
{
  struct _KTHREAD **v5; // rdi
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  _BYTE v16[8]; // [rsp+50h] [rbp-38h] BYREF
  char *v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+60h] [rbp-28h]

  v5 = (struct _KTHREAD **)((char *)a3 + 248);
  v17 = (char *)a3 + 248;
  v18 = 0;
  if ( a3 != (struct DXGPROCESS *)-248LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v5[1] == KeGetCurrentThread() )
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
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v16);
  v10 = (a2 >> 6) & 0xFFFFFF;
  if ( v10 >= *((_DWORD *)a3 + 74) )
    goto LABEL_15;
  v11 = *((_QWORD *)a3 + 35);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60) )
    goto LABEL_15;
  if ( (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) != 0 )
    goto LABEL_15;
  v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
  if ( !v12 )
    goto LABEL_15;
  if ( v12 != 10 )
  {
    if ( a5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_15:
    *(_QWORD *)this = 0LL;
    goto LABEL_16;
  }
  v13 = *(_QWORD *)(v11 + 16LL * v10);
  *(_QWORD *)this = v13;
  if ( v13 )
  {
    _m_prefetchw((const void *)(v13 + 64));
    v14 = *(_QWORD *)(v13 + 64);
    while ( v14 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 64), v14 + 1, v14);
      if ( v15 == v14 )
        goto LABEL_16;
    }
    goto LABEL_15;
  }
LABEL_16:
  *a4 = *(struct DXGPAGINGQUEUE **)this;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
}
