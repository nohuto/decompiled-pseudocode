/*
 * XREFs of TppPoolAddWorker @ 0x1800F07D8
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TppPoolAddWorker(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdx

  *(_DWORD *)(a2 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_QWORD *)(a2 + 48) = a1;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72), (volatile signed __int32 **)a2, a3);
  v5 = (_QWORD *)(a2 + 16);
  v6 = *(_QWORD **)(a1 + 104);
  if ( *v6 != a1 + 96 )
    __fastfail(3u);
  *v5 = a1 + 96;
  *(_QWORD *)(a2 + 24) = v6;
  *v6 = v5;
  *(_QWORD *)(a1 + 104) = v5;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
}
