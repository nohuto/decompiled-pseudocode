/*
 * XREFs of KeRemoveQueueEntry @ 0x14041B3A0
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x14041B244 (IopCancelWaitCompletionPacket.c)
 *     IoCancelMiniCompletionPacket @ 0x140594080 (IoCancelMiniCompletionPacket.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeRemoveQueueEntry(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  char v4; // bp
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v3 = a1;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3);
  if ( *a2 )
  {
    --*(_DWORD *)(v3 + 4);
    v7 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v8 = (_QWORD *)a2[1], (_QWORD *)*v8 != a2) )
      __fastfail(3u);
    *v8 = v7;
    v4 = 1;
    *(_QWORD *)(v7 + 8) = v8;
  }
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(CurrentIrql);
  return v4;
}
