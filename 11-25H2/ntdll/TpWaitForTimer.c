/*
 * XREFs of TpWaitForTimer @ 0x18003FF90
 * Callers:
 *     RtlDeleteTimer @ 0x18003B680 (RtlDeleteTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     TppETWCallbackCancel @ 0x1801144BC (TppETWCallbackCancel.c)
 */

void __fastcall TpWaitForTimer(__int64 a1, int a2)
{
  int v4; // eax
  char v5; // bp
  char v6; // si
  __int64 v7; // rdx
  unsigned __int32 v8; // ecx
  unsigned __int32 v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *SharedData; // rcx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(); // rax
  bool v15; // zf
  signed __int32 v16; // eax

  if ( !a1
    || *(_BYTE *)(a1 + 353)
    || (v4 = *(_DWORD *)(a1 + 168), (v4 & 0x10000) != 0)
    || (v4 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    v5 = 0;
    v6 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240));
      v7 = *(_QWORD *)(a1 + 144);
      ++*(_BYTE *)(a1 + 355);
      v6 = TppCancelTimer(a1, (volatile signed __int32 *)(v7 + 112), 1);
      if ( *(_DWORD *)(a1 + 56) )
        v5 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    _m_prefetchw((const void *)(a1 + 232));
    v8 = *(_DWORD *)(a1 + 232);
    if ( a2 )
    {
      while ( 1 )
      {
        v9 = v8 >> 1;
        if ( !(v8 >> 1) )
          break;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), v8 & 1, v8);
        v15 = v8 == v16;
        v8 = v16;
        if ( v15 )
          goto LABEL_14;
      }
    }
    v9 = 0;
LABEL_14:
    TppBarrierAdjust(a1 + 56, -v9, 1LL);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v13 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v13 = 2147353478LL;
    if ( *(_BYTE *)v13 && v9 )
      TppETWCallbackCancel(
        *(_QWORD *)(a1 + 144),
        a1 + 200,
        *(_QWORD *)(a1 + 80),
        *(_QWORD *)(a1 + 88),
        *(_QWORD *)(a1 + 104),
        v9);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240));
      --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
    {
      v14 = **(__int64 (__fastcall ***)())(a1 + 8);
      if ( v14 == TppSimplepFree )
      {
        TppCleanupGroupMemberDestroy(a1);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
      }
      else if ( (char *)v14 == (char *)TppAlpcpFree )
      {
        TppAlpcpFree(a1, v10, v11);
      }
      else if ( (char *)v14 == (char *)TppWorkpFree )
      {
        TppWorkpFree(a1, v10, v11);
      }
      else
      {
        ((void (__fastcall *)(__int64))v14)(a1);
      }
    }
  }
}
