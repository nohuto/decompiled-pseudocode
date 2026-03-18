/*
 * XREFs of ?InsertDirectFlipAllocationToRequestedPinnedList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1402E0D58
 * Callers:
 *     ?InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1402E0CB0 (-InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

char __fastcall DXGDEVICE::InsertDirectFlipAllocationToRequestedPinnedList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rsi
  __int64 v6; // r9
  char v7; // bl
  unsigned int v8; // ebp
  unsigned int i; // r14d
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // rax
  struct _KTHREAD *v14; // r12
  _BYTE v15[32]; // [rsp+50h] [rbp-48h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, this + 46);
  v7 = 0;
  if ( (*((_DWORD *)a3 + 18) & 0x7FE) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9232;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"0 == pAllocation->m_DirectFlipIndex",
      9232LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((_DWORD *)this + v3 + 358);
  if ( v8 != *((_DWORD *)this + v3 + 374) )
    goto LABEL_4;
  v11 = *((unsigned int *)this + v3 + 358);
  if ( !v8 )
  {
    v8 = 4;
LABEL_17:
    v12 = 8LL * v8;
    if ( !is_mul_ok(v8, 8uLL) )
      v12 = -1LL;
    v13 = (struct _KTHREAD *)operator new[](v12, 0x4B677844u, 256LL, v6);
    v14 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry1(6LL, v8);
      WdLogGlobalForLineNumber = 9255;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to grow device primary allocation array to %d entries",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_12:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
      return v7;
    }
    if ( (_DWORD)v11 )
    {
      memmove(v13, this[v3 + 163], 8 * v11);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[v3 + 163]);
    }
    this[v3 + 163] = v14;
    *((_DWORD *)this + v3 + 358) = v8;
LABEL_4:
    for ( i = 0; i < v8; ++i )
    {
      if ( !*((_QWORD *)this[v3 + 163] + i) )
        break;
    }
    if ( i != v8 )
    {
      if ( *((_QWORD *)this[v3 + 163] + i) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9292;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_DirectFlipAllocation[VidPnSourceId][PinIndex] == NULL",
          9292LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)this + v3 + 358) < *((_DWORD *)this + v3 + 374) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9293;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_DirectFlipAllocationArraySize[VidPnSourceId] >= m_DirectFlipAllocationCount[VidPnSourceId]",
          9293LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v7 = 1;
      *((_QWORD *)this[v3 + 163] + i) = a3;
      ++*((_DWORD *)this + v3 + 374);
      *((_DWORD *)a3 + 18) ^= ((unsigned __int16)*((_DWORD *)a3 + 18) ^ (unsigned __int16)(2 * i)) & 0x7FE;
    }
    goto LABEL_12;
  }
  v8 *= 2;
  if ( v8 <= 0x300 )
    goto LABEL_17;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 9248;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Reached maximum number of primary allocation, rejecting this request",
    9248LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  return 0;
}
