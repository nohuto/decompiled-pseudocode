/*
 * XREFs of ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002F238
 * Callers:
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1401D0EB8 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     DxgkReclaimAllocations2 @ 0x14029BF60 (DxgkReclaimAllocations2.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x1402A7570 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x140321DB0 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x14032BC18 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x140399110 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkUpdateAllocationProperty @ 0x1403E0220 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

void __fastcall DXGPAGINGQUEUEBYHANDLE::Open(
        DXGPAGINGQUEUEBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGPAGINGQUEUE **a4,
        bool a5)
{
  unsigned int v9; // eax
  struct _KTHREAD *v10; // r8
  int v11; // ecx
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  _BYTE v15[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+60h] [rbp-18h]

  v17 = 0;
  v16 = (char *)(a3 + 31);
  if ( a3 != (struct _KTHREAD **)-248LL && a3[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v15);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( v9 >= *((_DWORD *)a3 + 74) )
    goto LABEL_15;
  v10 = a3[35];
  if ( ((a2 >> 25) & 0x60) != (*((_BYTE *)v10 + 16 * v9 + 8) & 0x60) )
    goto LABEL_15;
  if ( (*((_DWORD *)v10 + 4 * v9 + 2) & 0x2000) != 0 )
    goto LABEL_15;
  v11 = *((_DWORD *)v10 + 4 * v9 + 2) & 0x1F;
  if ( !v11 )
    goto LABEL_15;
  if ( v11 != 10 )
  {
    if ( a5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_15:
    *(_QWORD *)this = 0LL;
    goto LABEL_16;
  }
  v12 = *((_QWORD *)v10 + 2 * v9);
  *(_QWORD *)this = v12;
  if ( v12 )
  {
    _m_prefetchw((const void *)(v12 + 64));
    v13 = *(_QWORD *)(v12 + 64);
    while ( v13 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 64), v13 + 1, v13);
      if ( v14 == v13 )
        goto LABEL_16;
    }
    goto LABEL_15;
  }
LABEL_16:
  *a4 = *(struct DXGPAGINGQUEUE **)this;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
}
