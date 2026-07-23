/*
 * XREFs of PsJoinSession @ 0x140A44534
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 */

void __fastcall PsJoinSession(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rbx

  if ( a2 )
  {
    *(_QWORD *)(a1 + 744) = a2;
    _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x10000u);
    CurrentThread = KeGetCurrentThread();
    PspLockProcessListExclusive((__int64)CurrentThread);
    v5 = *(_QWORD **)(a2 + 24);
    v6 = (_QWORD *)(a1 + 560);
    v7 = a2 + 16;
    if ( *v5 != v7 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 568) = v5;
    *v6 = v7;
    *v5 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
}
