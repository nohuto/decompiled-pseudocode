/*
 * XREFs of ?InsertDirectFlipAllocationToRequestedPinnedList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1403B5364
 * Callers:
 *     ?InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x140411008 (-InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

char __fastcall DXGDEVICE::InsertDirectFlipAllocationToRequestedPinnedList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rsi
  char v6; // bl
  unsigned int v7; // ebp
  unsigned int i; // r14d
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  struct _KTHREAD *v12; // rax
  struct _KTHREAD *v13; // r12
  _BYTE v14[32]; // [rsp+50h] [rbp-48h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, this + 46);
  v6 = 0;
  if ( (*((_DWORD *)a3 + 18) & 0x7FE) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9484;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"0 == pAllocation->m_DirectFlipIndex",
      9484LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *((_DWORD *)this + v3 + 362);
  if ( v7 != *((_DWORD *)this + v3 + 378) )
    goto LABEL_4;
  v10 = *((unsigned int *)this + v3 + 362);
  if ( !v7 )
  {
    v7 = 4;
LABEL_17:
    v11 = 8LL * v7;
    if ( !is_mul_ok(v7, 8uLL) )
      v11 = -1LL;
    v12 = (struct _KTHREAD *)operator new[](v11, 0x4B677844u, 256LL);
    v13 = v12;
    if ( !v12 )
    {
      WdLogSingleEntry1(6LL, v7);
      WdLogGlobalForLineNumber = 9507;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to grow device primary allocation array to %d entries",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_12:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
      return v6;
    }
    if ( (_DWORD)v10 )
    {
      memmove(v12, this[v3 + 165], 8 * v10);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[v3 + 165]);
    }
    this[v3 + 165] = v13;
    *((_DWORD *)this + v3 + 362) = v7;
LABEL_4:
    for ( i = 0; i < v7; ++i )
    {
      if ( !*((_QWORD *)this[v3 + 165] + i) )
        break;
    }
    if ( i != v7 )
    {
      if ( *((_QWORD *)this[v3 + 165] + i) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9544;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_DirectFlipAllocation[VidPnSourceId][PinIndex] == NULL",
          9544LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)this + v3 + 362) < *((_DWORD *)this + v3 + 378) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9545;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_DirectFlipAllocationArraySize[VidPnSourceId] >= m_DirectFlipAllocationCount[VidPnSourceId]",
          9545LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v6 = 1;
      *((_QWORD *)this[v3 + 165] + i) = a3;
      ++*((_DWORD *)this + v3 + 378);
      *((_DWORD *)a3 + 18) ^= ((unsigned __int16)*((_DWORD *)a3 + 18) ^ (unsigned __int16)(2 * i)) & 0x7FE;
    }
    goto LABEL_12;
  }
  v7 *= 2;
  if ( v7 <= 0x300 )
    goto LABEL_17;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 9500;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Reached maximum number of primary allocation, rejecting this request",
    9500LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  return 0;
}
