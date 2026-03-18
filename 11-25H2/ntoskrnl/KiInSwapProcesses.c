/*
 * XREFs of KiInSwapProcesses @ 0x1402F1450
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C0540 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x1402F06E0 (KiReadyOutSwappedThreads.c)
 *     MmInSwapProcess @ 0x1402F1540 (MmInSwapProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall KiInSwapProcesses(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  char result; // al

  do
  {
    v2 = a1 - 15;
    a1 = (_QWORD *)*a1;
    _InterlockedXor((volatile signed __int32 *)v2 + 66, 6u);
    MmInSwapProcess(v2);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v3);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v2);
    v6 = v2 + 13;
    v7 = (_QWORD *)v2[13];
    if ( v7 == v2 + 13 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( (_QWORD *)v7[1] != v6 || (v5 = (_QWORD *)v2[14], (_QWORD *)*v5 != v6) )
        __fastfail(3u);
      *v5 = v7;
      v7[1] = v5;
      v2[14] = v2 + 13;
      *v6 = v6;
    }
    _InterlockedXor((volatile signed __int32 *)v2 + 66, 4u);
    _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
    if ( v7 )
    {
      result = KiReadyOutSwappedThreads(v7, CurrentIrql);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
