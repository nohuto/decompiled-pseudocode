/*
 * XREFs of MiFreeLargePageChain @ 0x1402648B8
 * Callers:
 *     MiGetLargePageChain @ 0x140263C74 (MiGetLargePageChain.c)
 *     MiReturnExcessPoolCommit @ 0x14034BE10 (MiReturnExcessPoolCommit.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiConvertBaseLargePage @ 0x14044E488 (MiConvertBaseLargePage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x14068461C (MiInsertPossiblyBadPage.c)
 */

__int64 __fastcall MiFreeLargePageChain(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbp
  __int64 i; // r14
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rdi
  int v8; // r9d
  ULONG_PTR v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  for ( i = a1; ; a1 = i )
  {
    result = MiUnlinkPageChainHead(a1);
    v6 = result;
    if ( !result )
      break;
    v7 = (volatile signed __int32 *)(result + 24);
    if ( (_BYTE)v2 == 2 )
    {
      v12 = 0;
      while ( _interlockedbittestandset64(v7, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v12);
        while ( *(__int64 *)v7 < 0 );
      }
    }
    else
    {
      MiLockPageInline(result);
    }
    MiConvertBaseLargePage(v6, 0LL, v5, (*(_QWORD *)(v6 + 16) & 0x3E0LL) != 0);
    v9 = 0xAAAAAAAAAAAAAAABuLL * ((v6 + 0x220000000000LL) >> 4);
    if ( (*(_QWORD *)(v6 + 40) & 0x20000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v7, 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPossiblyBadPage(v9);
      if ( (unsigned __int8)v2 < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v11) = v2;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        }
        __writecr8(v2);
      }
    }
    else
    {
      MiInsertPageInFreeOrZeroedList(v9, (unsigned int)(v8 + 1));
      LOBYTE(v10) = v2;
      MiUnlockPage(v6, v10);
    }
  }
  return result;
}
