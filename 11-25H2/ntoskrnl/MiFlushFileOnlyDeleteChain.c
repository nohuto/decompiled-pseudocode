/*
 * XREFs of MiFlushFileOnlyDeleteChain @ 0x1404F0DD4
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x140235C40 (MiRemoveLockedPageCharge.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFlushFileOnlyDeleteChain(__int64 a1)
{
  __int64 v1; // r14
  int v2; // ebp
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 result; // rax
  int v10; // [rsp+58h] [rbp+10h]
  int v11; // [rsp+58h] [rbp+10h]
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v1 = a1;
  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  while ( 1 )
  {
    v8 = MiUnlinkPageChainHead(v1);
    if ( !v8 )
      break;
    if ( (++v2 & 0xF) == 0 && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v4) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
      }
      __writecr8(CurrentIrql);
      v5 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v5);
    }
    v12 = 0;
    v6 = (volatile signed __int32 *)(v8 + 3);
    while ( _interlockedbittestandset64(v6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(__int64 *)v6 < 0 );
    }
    v10 = *((_DWORD *)v8 + 8);
    BYTE2(v10) = BYTE2(v10) & 0xF8 | 6;
    *((_DWORD *)v8 + 8) = v10;
    if ( (unsigned int)MiRemoveLockedPageCharge((__int64)v8) )
    {
      v11 = *((_DWORD *)v8 + 8);
      HIBYTE(v11) |= 0x10u;
      *((_DWORD *)v8 + 8) = v11;
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x44000000000LL) >> 4), 2);
    }
    _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
