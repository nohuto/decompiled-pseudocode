/*
 * XREFs of ?IterateDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x14031604C
 * Callers:
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x140315D68 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E1770 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1402E17CC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

struct DXGALLOCATION *__fastcall DXGDEVICE::IterateDirectFlipAllocationFromRequestedPinnedList(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  struct _KTHREAD **v4; // rbx
  __int64 v5; // rsi
  __int64 v9; // rcx
  unsigned int v10; // edx
  bool v11; // zf
  __int64 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rbx
  _BYTE v16[8]; // [rsp+50h] [rbp-48h] BYREF
  char *v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+60h] [rbp-38h]

  v4 = (struct _KTHREAD **)((char *)this + 368);
  v5 = a2;
  v17 = (char *)this + 368;
  if ( this != (DXGDEVICE *)-368LL )
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
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v4);
  v18 = 2;
  if ( *a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9446;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"FALSE == *ReachedEnd", 9446LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = *a3;
  v10 = *((_DWORD *)this + v5 + 358);
  v11 = (_DWORD)v9 == v10;
  if ( (unsigned int)v9 < v10 )
  {
    v12 = *((_QWORD *)this + v5 + 163);
    v13 = *a3;
    do
    {
      if ( *(_QWORD *)(v12 + 8LL * v13) )
        break;
      v9 = v13 + 1;
      *a3 = v9;
      ++v13;
    }
    while ( (unsigned int)v9 < v10 );
    v11 = (_DWORD)v9 == v10;
  }
  if ( v11 )
  {
    *a4 = 1;
    v14 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + v5 + 163) + 8 * v9);
    if ( !v14 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9461;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL != pAllocation", 9461LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *a3 != ((*(_DWORD *)(v14 + 72) >> 1) & 0x3FF) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9462;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"*Iterator == pAllocation->m_DirectFlipIndex",
        9462LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_DWORD *)this + v5 + 374) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9463;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"0 != m_DirectFlipAllocationCount[VidPnSourceId]",
        9463LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)this + v5 + 358) == ++*a3 )
      *a4 = 1;
    if ( !*(_QWORD *)(v14 + 40) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9478;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"NULL != pAllocation->m_pOwningResource",
        9478LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v14);
    DxgkReferenceDxgResource(*(struct _EX_RUNDOWN_REF **)(v14 + 40));
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
  return (struct DXGALLOCATION *)v14;
}
