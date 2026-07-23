/*
 * XREFs of PspMarkSessionReferenceProcess @ 0x14077BBF4
 * Callers:
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 */

_QWORD *__fastcall PspMarkSessionReferenceProcess(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 744) = a2;
  _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x10000u);
  PspLockProcessListExclusive((__int64)CurrentThread);
  _InterlockedOr((volatile signed __int32 *)(a1 + 2012), 8u);
  v5 = *(_QWORD **)(a2 + 24);
  v6 = a2 + 16;
  v7 = (_QWORD *)(a1 + 560);
  if ( *v5 != v6 )
    __fastfail(3u);
  *v7 = v6;
  v7[1] = v5;
  *v5 = v7;
  *(_QWORD *)(v6 + 8) = v7;
  return PspUnlockProcessListExclusive((__int64)CurrentThread);
}
