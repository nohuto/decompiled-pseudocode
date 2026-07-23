/*
 * XREFs of MiFlushFileOnlyDeleteChain @ 0x1404F26E4
 * Callers:
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLockedPageCharge @ 0x14029D0B0 (MiRemoveLockedPageCharge.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFlushFileOnlyDeleteChain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // ebp
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rsi
  __int64 *v9; // rbx
  __int64 result; // rax
  int v11; // [rsp+58h] [rbp+10h]
  int v12; // [rsp+58h] [rbp+10h]
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = a1;
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  while ( 1 )
  {
    v9 = MiUnlinkPageChainHead(v2);
    if ( !v9 )
      break;
    if ( (++v3 & 0xF) == 0 && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      }
      __writecr8(CurrentIrql);
      v7 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = 2;
        KiRaiseIrqlProcessIrqlFlags(v7, v5);
      }
    }
    v13 = 0;
    v8 = (volatile signed __int32 *)(v9 + 3);
    while ( _interlockedbittestandset64(v8, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)v8 < 0 );
    }
    v11 = *((_DWORD *)v9 + 8);
    BYTE2(v11) = BYTE2(v11) & 0xF8 | 6;
    *((_DWORD *)v9 + 8) = v11;
    if ( (unsigned int)MiRemoveLockedPageCharge((__int64)v9, v5, v6) )
    {
      v12 = *((_DWORD *)v9 + 8);
      HIBYTE(v12) |= 0x10u;
      *((_DWORD *)v9 + 8) = v12;
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x44000000000LL) >> 4), 2LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
