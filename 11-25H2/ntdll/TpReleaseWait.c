/*
 * XREFs of TpReleaseWait @ 0x18003C9C0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x180001008 (EtwpRegisterTpNotificationOnce.c)
 *     RtlDeregisterWaitEx @ 0x18003C7B0 (RtlDeregisterWaitEx.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F90FC (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     ZwCancelWaitCompletionPacket @ 0x1801644F0 (ZwCancelWaitCompletionPacket.c)
 */

__int64 __fastcall TpReleaseWait(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // ett
  __int64 v8; // rsi
  _BYTE *v9; // rsi
  int v10; // edi
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // al
  int v17; // r15d
  char v18; // al
  void *ThreadPoolData; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 168);
  if ( (v3 & 0x10000) != 0
    || (v3 & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL || *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) != a1)
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (__int64)NtCurrentPeb();
    v6 = *(_QWORD *)(result + 24);
    if ( *(_BYTE *)(v6 + 72) )
      return result;
    return TppRaiseInvalidParameter(v6, a2, a3);
  }
  _m_prefetchw((const void *)(a1 + 168));
  LODWORD(result) = *(_DWORD *)(a1 + 168);
  do
  {
    v6 = (unsigned int)result;
    LODWORD(v6) = result | 0x10000;
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), result | 0x10000, result);
  }
  while ( v7 != (_DWORD)result );
  if ( (result & 0x10000) != 0 )
    return TppRaiseInvalidParameter(v6, a2, a3);
  if ( (result & 0x30000) != 0 )
    return result;
  v8 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 184) = retaddr;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240));
  if ( *(_QWORD *)(a1 + 360) )
  {
    v12 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 368), 1LL);
    if ( !v12 )
    {
      *(_QWORD *)(a1 + 360) = 0LL;
      v16 = TppCancelTimer(a1, v8 + 112, 1LL);
      v9 = (_BYTE *)(a1 + 464);
      v17 = -(v16 != 0);
      v10 = v17 - 1;
      if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
      {
        TppBarrierAdjust(a1 + 56, 0xFFFFFFFFLL, 0LL);
        *v9 &= ~4u;
        v10 = v17 - 1;
      }
      goto LABEL_12;
    }
    if ( v12 != 259 && v12 != -1073741536 )
      TppRaiseInvalidParameter(v14, v13, v15);
    v9 = (_BYTE *)(a1 + 464);
    v18 = *(_BYTE *)(a1 + 464);
    if ( (v18 & 4) == 0 )
    {
      *v9 = v18 | 4;
      TppBarrierAdjust(a1 + 56, 1LL, 0LL);
    }
  }
  else
  {
    v9 = (_BYTE *)(a1 + 464);
  }
  v10 = 0;
LABEL_12:
  *v9 &= ~1u;
  *v9 &= ~2u;
  ++*(_BYTE *)(a1 + 355);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v10 - 1);
  if ( (_DWORD)result == 1 - v10 )
  {
    v11 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
    if ( v11 == TppFreeWait )
    {
      return TppFreeWait(a1);
    }
    else if ( v11 == TppTimerpFree )
    {
      return TppTimerpFree(a1);
    }
    else
    {
      return v11(a1);
    }
  }
  return result;
}
