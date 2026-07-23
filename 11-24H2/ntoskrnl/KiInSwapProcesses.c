/*
 * XREFs of KiInSwapProcesses @ 0x1402DE3B8
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C1EB0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x1402DF08C (KiReadyOutSwappedThreads.c)
 *     MmInSwapProcess @ 0x1402DFEE4 (MmInSwapProcess.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiInSwapProcesses(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax

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
      LOBYTE(v3) = 2;
      LOBYTE(v4) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v4, v3);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v2);
    v7 = v2 + 13;
    v8 = v2[13];
    if ( (_QWORD *)v8 == v2 + 13 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( *(_QWORD **)(v8 + 8) != v7 || (v6 = (_QWORD *)v2[14], (_QWORD *)*v6 != v7) )
        __fastfail(3u);
      *v6 = v8;
      *(_QWORD *)(v8 + 8) = v6;
      v2[14] = v2 + 13;
      *v7 = v7;
    }
    _InterlockedXor((volatile signed __int32 *)v2 + 66, 4u);
    _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
    if ( v8 )
    {
      LOBYTE(v6) = CurrentIrql;
      result = KiReadyOutSwappedThreads(v8, v6);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
