/*
 * XREFs of KiOutSwapProcesses @ 0x1402DDD00
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C1EB0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     MmOutSwapProcess @ 0x1402DDEEC (MmOutSwapProcess.c)
 *     KiReadyOutSwappedThreads @ 0x1402DF08C (KiReadyOutSwappedThreads.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiOutSwapProcesses(signed __int64 *a1, __int64 a2)
{
  signed __int64 *v2; // rsi
  signed __int64 *v3; // r12
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 v6; // rdx
  int v7; // eax
  _QWORD *v8; // rdi
  volatile signed __int32 *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  bool v12; // bp
  __int64 v13; // rcx
  unsigned int v14; // eax
  signed __int64 v15; // rax

  v2 = a1;
  do
  {
    v3 = v2;
    v4 = (volatile signed __int32 *)(v2 - 15);
    v2 = (signed __int64 *)*v2;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    KiAcquireKobjectLockSafe(v4);
    v7 = *((_DWORD *)v4 + 66);
    v8 = v4 + 26;
    v9 = (volatile signed __int32 *)*((_QWORD *)v4 + 13);
    if ( v9 == v4 + 26 || (v7 & 7) == 6 )
    {
      _InterlockedXor(v4 + 66, ((unsigned __int8)v7 ^ 0xFD) & 7);
      _InterlockedAnd(v4, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      }
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v4);
      v12 = 0;
      v13 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v13, 2LL);
      KiAcquireKobjectLockSafe(v4);
      if ( (_QWORD *)*v8 == v8 )
      {
        v14 = 4;
      }
      else
      {
        _m_prefetchw(&KiProcessInSwapListHead);
        v15 = KiProcessInSwapListHead;
        do
        {
          *v3 = v15;
          a1 = (signed __int64 *)v15;
          v15 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v3, v15);
        }
        while ( (signed __int64 *)v15 != a1 );
        v12 = v15 == 0;
        v14 = 7;
      }
      _InterlockedXor(v4 + 66, v14);
      _InterlockedAnd(v4, 0xFFFFFF7F);
      if ( v12 )
      {
        KiAcquireKobjectLockSafe(&KiSwapEvent.Header.Lock);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v10 = (_QWORD *)*v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v11 = (_QWORD *)*((_QWORD *)v4 + 14), (_QWORD *)*v11 != v8) )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      *((_QWORD *)v4 + 14) = v4 + 26;
      *v8 = v8;
      _InterlockedXor(v4 + 66, 3u);
      _InterlockedAnd(v4, 0xFFFFFF7F);
      LOBYTE(v11) = CurrentIrql;
      KiReadyOutSwappedThreads(v9, v11);
    }
  }
  while ( v2 );
}
