/*
 * XREFs of ?IterateDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1402FD75C
 * Callers:
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1402FD478 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E5A50 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1402E5AAC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

struct DXGALLOCATION *__fastcall DXGDEVICE::IterateDirectFlipAllocationFromRequestedPinnedList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  DXGPUSHLOCK *v4; // rbx
  __int64 v5; // rbp
  __int64 v9; // rcx
  unsigned int v10; // edx
  bool v11; // zf
  struct _KTHREAD *v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rbx
  _BYTE v16[8]; // [rsp+50h] [rbp-48h] BYREF
  char *v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+60h] [rbp-38h]

  v4 = (DXGPUSHLOCK *)(this + 46);
  v5 = a2;
  v17 = (char *)(this + 46);
  if ( this != (struct _KTHREAD **)-368LL && this[47] == KeGetCurrentThread() )
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
  DXGPUSHLOCK::AcquireExclusive(v4);
  v18 = 2;
  if ( *a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9712;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"FALSE == *ReachedEnd", 9712LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = *a3;
  v10 = *((_DWORD *)this + v5 + 362);
  v11 = (_DWORD)v9 == v10;
  if ( (unsigned int)v9 < v10 )
  {
    v12 = this[v5 + 165];
    v13 = *a3;
    do
    {
      if ( *((_QWORD *)v12 + v13) )
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
    v14 = *((_QWORD *)this[v5 + 165] + v9);
    if ( !v14 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9727;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL != pAllocation", 9727LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *a3 != ((*(_DWORD *)(v14 + 72) >> 1) & 0x3FF) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9728;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"*Iterator == pAllocation->m_DirectFlipIndex",
        9728LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_DWORD *)this + v5 + 378) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9729;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"0 != m_DirectFlipAllocationCount[VidPnSourceId]",
        9729LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)this + v5 + 362) == ++*a3 )
      *a4 = 1;
    if ( !*(_QWORD *)(v14 + 40) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9744;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"NULL != pAllocation->m_pOwningResource",
        9744LL,
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
