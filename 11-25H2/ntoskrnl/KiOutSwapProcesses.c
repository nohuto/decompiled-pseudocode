/*
 * XREFs of KiOutSwapProcesses @ 0x1402F1A54
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C0540 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x1402F06E0 (KiReadyOutSwappedThreads.c)
 *     MmOutSwapProcess @ 0x1402F1C40 (MmOutSwapProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall KiOutSwapProcesses(signed __int64 *a1)
{
  signed __int64 *v1; // rsi
  signed __int64 *v2; // r12
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 v5; // rdx
  int v6; // eax
  _QWORD *v7; // rdi
  volatile signed __int32 *v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  bool v11; // bp
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // eax
  signed __int64 v15; // rax

  v1 = a1;
  do
  {
    v2 = v1;
    v3 = (volatile signed __int32 *)(v1 - 15);
    v1 = (signed __int64 *)*v1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    KiAcquireKobjectLockSafe(v3);
    v6 = *((_DWORD *)v3 + 66);
    v7 = v3 + 26;
    v8 = (volatile signed __int32 *)*((_QWORD *)v3 + 13);
    if ( v8 == v3 + 26 || (v6 & 7) == 6 )
    {
      _InterlockedXor(v3 + 66, ((unsigned __int8)v6 ^ 0xFD) & 7);
      _InterlockedAnd(v3, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      }
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v3);
      v11 = 0;
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v12);
      KiAcquireKobjectLockSafe(v3);
      if ( (_QWORD *)*v7 == v7 )
      {
        v14 = 4;
      }
      else
      {
        _m_prefetchw(&KiProcessInSwapListHead);
        v15 = KiProcessInSwapListHead;
        do
        {
          *v2 = v15;
          a1 = (signed __int64 *)v15;
          v15 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v2, v15);
        }
        while ( (signed __int64 *)v15 != a1 );
        v11 = v15 == 0;
        v14 = 7;
      }
      _InterlockedXor(v3 + 66, v14);
      _InterlockedAnd(v3, 0xFFFFFF7F);
      if ( v11 )
      {
        KiAcquireKobjectLockSafe(&KiSwapEvent.Header.Lock);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      if ( KiIrqlFlags )
      {
        LOBYTE(v13) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v9 = (_QWORD *)*v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)*((_QWORD *)v3 + 14), (_QWORD *)*v10 != v7) )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      *((_QWORD *)v3 + 14) = v3 + 26;
      *v7 = v7;
      _InterlockedXor(v3 + 66, 3u);
      _InterlockedAnd(v3, 0xFFFFFF7F);
      KiReadyOutSwappedThreads(v8, CurrentIrql);
    }
  }
  while ( v1 );
}
