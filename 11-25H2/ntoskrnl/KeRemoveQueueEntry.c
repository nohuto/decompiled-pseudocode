/*
 * XREFs of KeRemoveQueueEntry @ 0x14042ED80
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x14042EC20 (IopCancelWaitCompletionPacket.c)
 *     IoCancelMiniCompletionPacket @ 0x1405939F0 (IoCancelMiniCompletionPacket.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
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
