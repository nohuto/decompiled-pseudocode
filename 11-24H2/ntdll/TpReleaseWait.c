/*
 * XREFs of TpReleaseWait @ 0x18006E4C0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18006E2B0 (RtlDeregisterWaitEx.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180095B08 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F749C (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x18006C3B0 (TppCancelTimer.c)
 *     ZwCancelWaitCompletionPacket @ 0x180162F60 (ZwCancelWaitCompletionPacket.c)
 */

void __fastcall TpReleaseWait(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v3; // eax
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rsi
  _BYTE *v8; // rsi
  int v9; // edi
  __int64 (__fastcall *v10)(__int64); // rax
  int v11; // eax
  char v12; // al
  int v13; // r15d
  char v14; // al
  void *ThreadPoolData; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 168);
  if ( (v3 & 0x10000) != 0
    || (v3 & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL || *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) != a1)
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
      return;
LABEL_20:
    TppRaiseInvalidParameter();
    return;
  }
  _m_prefetchw((const void *)(a1 + 168));
  v5 = *(_DWORD *)(a1 + 168);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), v5 | 0x10000, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 0x10000) != 0 )
    goto LABEL_20;
  if ( (v5 & 0x30000) != 0 )
    return;
  v7 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 184) = retaddr;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240), a2, a3);
  if ( *(_QWORD *)(a1 + 360) )
  {
    v11 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 368), 1LL);
    if ( !v11 )
    {
      *(_QWORD *)(a1 + 360) = 0LL;
      v12 = TppCancelTimer(a1, (volatile signed __int32 *)(v7 + 112), 1uLL);
      v8 = (_BYTE *)(a1 + 464);
      v13 = -(v12 != 0);
      v9 = v13 - 1;
      if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
      {
        TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -1, 0);
        *v8 &= ~4u;
        v9 = v13 - 1;
      }
      goto LABEL_12;
    }
    if ( v11 != 259 && v11 != -1073741536 )
      TppRaiseInvalidParameter();
    v8 = (_BYTE *)(a1 + 464);
    v14 = *(_BYTE *)(a1 + 464);
    if ( (v14 & 4) == 0 )
    {
      *v8 = v14 | 4;
      TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), 1, 0);
    }
  }
  else
  {
    v8 = (_BYTE *)(a1 + 464);
  }
  v9 = 0;
LABEL_12:
  *v8 &= ~1u;
  *v8 &= ~2u;
  ++*(_BYTE *)(a1 + 355);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, v9 - 1) == 1 - v9 )
  {
    v10 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
    if ( v10 == TppFreeWait )
    {
      TppFreeWait(a1);
    }
    else if ( v10 == TppTimerpFree )
    {
      TppTimerpFree(a1);
    }
    else
    {
      v10(a1);
    }
  }
}
