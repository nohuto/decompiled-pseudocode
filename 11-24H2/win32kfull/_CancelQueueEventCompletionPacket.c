/*
 * XREFs of _CancelQueueEventCompletionPacket @ 0x1401825E8
 * Callers:
 *     NtUserCancelQueueEventCompletionPacket @ 0x140292D70 (NtUserCancelQueueEventCompletionPacket.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall CancelQueueEventCompletionPacket(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v3 = 0LL;
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(v3 + 1640), 0LL) == 259 )
  {
    LOBYTE(v4) = 1;
    ZwCancelWaitCompletionPacket(*(_QWORD *)(v3 + 1640), v4);
    KeSetEvent(*(PRKEVENT *)(v3 + 768), 1, 0);
  }
  return 1LL;
}
