/*
 * XREFs of TpWaitForTimer @ 0x18006C110
 * Callers:
 *     RtlDeleteTimer @ 0x18006AB60 (RtlDeleteTimer.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppETWCallbackCancel @ 0x18006A664 (TppETWCallbackCancel.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x18006C3B0 (TppCancelTimer.c)
 */

void __fastcall TpWaitForTimer(unsigned __int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v3; // edi
  int v5; // eax
  char v6; // bp
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int32 v10; // ecx
  int v11; // edi
  volatile signed __int32 **v12; // rdx
  unsigned __int64 v13; // r8
  _DWORD *SharedData; // rcx
  __int64 v15; // rcx
  void (__fastcall *v16)(unsigned __int64); // rax
  bool v17; // zf
  signed __int32 v18; // eax

  v3 = (int)a2;
  if ( !a1
    || *(_BYTE *)(a1 + 353)
    || (v5 = *(_DWORD *)(a1 + 168), (v5 & 0x10000) != 0)
    || (v5 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    v6 = 0;
    v7 = 0;
    if ( (_DWORD)a2 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240), a2, a3);
      v8 = *(_QWORD *)(a1 + 144);
      LOBYTE(v9) = 1;
      ++*(_BYTE *)(a1 + 355);
      v7 = TppCancelTimer(a1, v8 + 112, v9);
      if ( *(_DWORD *)(a1 + 56) )
        v6 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    _m_prefetchw((const void *)(a1 + 232));
    v10 = *(_DWORD *)(a1 + 232);
    if ( v3 )
    {
      while ( 1 )
      {
        v11 = v10 >> 1;
        if ( !(v10 >> 1) )
          break;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), v10 & 1, v10);
        v17 = v10 == v18;
        v10 = v18;
        if ( v17 )
          goto LABEL_14;
      }
    }
    v11 = 0;
LABEL_14:
    TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -v11, 1);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v15 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v15 = 2147353478LL;
    if ( *(_BYTE *)v15 && v11 )
      TppETWCallbackCancel(
        *(_QWORD *)(a1 + 144),
        a1 + 200,
        *(_QWORD *)(a1 + 80),
        *(_QWORD *)(a1 + 88),
        *(_QWORD *)(a1 + 104),
        v11);
    if ( v6 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240), v12, v13);
      --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
    {
      v16 = **(void (__fastcall ***)(unsigned __int64))(a1 + 8);
      if ( (char *)v16 == (char *)TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy((_QWORD *)a1);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, a1);
      }
      else if ( (char *)v16 == (char *)TppAlpcpFree )
      {
        TppAlpcpFree(a1);
      }
      else if ( (char *)v16 == (char *)TppWorkpFree )
      {
        TppWorkpFree(a1);
      }
      else
      {
        v16(a1);
      }
    }
  }
}
