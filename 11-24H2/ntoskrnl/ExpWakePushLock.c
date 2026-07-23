/*
 * XREFs of ExpWakePushLock @ 0x1404060A0
 * Callers:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x14028E8A0 (ExfReleasePushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockSharedEx @ 0x140405F2C (ExfReleasePushLockSharedEx.c)
 *     ExpOptimizePushLockList @ 0x140406034 (ExpOptimizePushLockList.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall ExpWakePushLock(volatile signed __int64 *a1, signed __int64 a2)
{
  volatile signed __int64 *v2; // r9
  int v3; // edi
  _QWORD *v4; // rcx
  struct _KEVENT *v5; // rbx
  signed __int64 Blink; // rax
  bool v7; // zf
  unsigned __int8 CurrentIrql; // si
  struct _KEVENT *v9; // rdi
  __int64 Flink; // rdx
  _QWORD *v11; // rax

  v2 = a1;
  v3 = 1;
  while ( 1 )
  {
    while ( (a2 & 1) != 0 )
    {
      Blink = _InterlockedCompareExchange64(v2, a2 - 4, a2);
      v7 = a2 == Blink;
      a2 = Blink;
      if ( v7 )
        return Blink;
    }
    v4 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v5 = *(struct _KEVENT **)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
    if ( !v5 )
    {
      do
      {
        v11 = v4;
        v4 = (_QWORD *)v4[3];
        v4[5] = v11;
        v5 = (struct _KEVENT *)v4[4];
      }
      while ( !v5 );
      if ( v4 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v5;
    }
    if ( (v5[2].Header.SignalState & 1) != 0 )
    {
      Blink = (signed __int64)v5[1].Header.WaitListHead.Blink;
      if ( Blink )
        break;
    }
    Blink = _InterlockedCompareExchange64(v2, 0LL, a2);
    v7 = a2 == Blink;
    a2 = Blink;
    if ( v7 )
      goto LABEL_7;
  }
  *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = Blink;
  v5[1].Header.WaitListHead.Blink = 0LL;
  _InterlockedAnd64(v2, 0xFFFFFFFFFFFFFFFBuLL);
  v3 = 0;
LABEL_7:
  CurrentIrql = 2;
  if ( v5[1].Header.WaitListHead.Blink )
  {
    CurrentIrql = KeGetCurrentIrql();
    LOBYTE(Blink) = 2;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      LOBYTE(Blink) = KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  }
  if ( !v3 )
  {
    Flink = (__int64)v5[2].Header.WaitListHead.Flink;
    if ( Flink )
      LOBYTE(Blink) = KiAbConvertWaiterToOwnerEntry(
                        *(_QWORD *)(Flink - 88LL * (*(_BYTE *)(Flink + 8) & 0x3F) - 16),
                        Flink,
                        0LL,
                        (__int64)v2);
  }
  do
  {
    v9 = (struct _KEVENT *)v5[1].Header.WaitListHead.Blink;
    if ( !_interlockedbittestandreset(&v5[2].Header.SignalState, 1u) )
      LOBYTE(Blink) = KeSetEvent(v5, 0, 0);
    v5 = v9;
  }
  while ( v9 );
  if ( CurrentIrql != 2 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    LOBYTE(Blink) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return Blink;
}
