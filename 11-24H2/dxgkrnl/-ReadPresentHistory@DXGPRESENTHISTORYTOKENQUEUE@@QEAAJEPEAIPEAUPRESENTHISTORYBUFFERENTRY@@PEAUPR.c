/*
 * XREFs of ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x14002F9A0
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x140293760 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
        KSPIN_LOCK *this,
        __int64 a2,
        unsigned int *a3,
        struct PRESENTHISTORYBUFFERENTRY *a4,
        struct PRESENTHISTORYBITS *a5)
{
  __int64 v8; // r13
  unsigned int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // ebp
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // edi
  unsigned int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  unsigned int Size; // [rsp+D0h] [rbp+18h]

  if ( a3 && a4 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(this, &LockHandle);
    Size = 0;
    if ( *((_DWORD *)this + 2) >= 0x800u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 236;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_PresentHistoryHead < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
        236LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)this + 3) >= 0x800u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 237;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_PresentHistoryTail < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
        237LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)this + 4) >= 0x800u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 238;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_PresentHistoryRead < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
        238LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = *((unsigned int *)this + 4);
    v9 = *((_DWORD *)this + 2);
    v10 = *a3;
    if ( v9 < (unsigned int)v8 )
    {
      v15 = 2048 - v8;
      Size = *((_DWORD *)this + 2);
      if ( 2048 - (int)v8 >= v10 )
        v15 = *a3;
      v16 = v10 - v15;
      if ( v9 >= v16 )
        Size = v16;
      v11 = v15;
    }
    else
    {
      v11 = v9 - v8;
      if ( v11 >= v10 )
        v11 = *a3;
    }
    memmove(a4, &this[v8 + 10], 8LL * v11);
    memmove(a5, (char *)this + v8 + 16464, v11);
    memmove((char *)a4 + 8 * v11, this + 10, 8LL * Size);
    memmove((char *)a5 + v11, this + 2058, Size);
    *((_DWORD *)this + 4) = ((_WORD)v11 + (_WORD)Size + (_WORD)v8) & 0x7FF;
    *a3 = Size + v11;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 226;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (__int64)L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
        v13,
        v14,
        0LL,
        0,
        -1,
        L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
        13,
        0,
        0,
        0,
        0);
    return 3221225485LL;
  }
}
