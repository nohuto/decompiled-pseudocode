/*
 * XREFs of MiFreeLargePageChain @ 0x1403D5A54
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x1402EA7D0 (MiReturnExcessPoolCommit.c)
 *     MiGetLargePageChain @ 0x1403D4E10 (MiGetLargePageChain.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiConvertBaseLargePage @ 0x140459758 (MiConvertBaseLargePage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x140683470 (MiInsertPossiblyBadPage.c)
 */

__int64 *__fastcall MiFreeLargePageChain(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbp
  __int64 i; // r14
  __int64 *result; // rax
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rdi
  int v7; // r9d
  ULONG_PTR v8; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  for ( i = a1; ; a1 = i )
  {
    result = MiUnlinkPageChainHead(a1);
    v5 = (__int64)result;
    if ( !result )
      break;
    v6 = (volatile signed __int32 *)(result + 3);
    if ( (_BYTE)v2 == 2 )
    {
      v10 = 0;
      while ( _interlockedbittestandset64(v6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( *(__int64 *)v6 < 0 );
      }
    }
    else
    {
      MiLockPageInline((__int64)result);
    }
    MiConvertBaseLargePage(v5, 0LL);
    v8 = 0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4);
    if ( (*(_QWORD *)(v5 + 40) & 0x20000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPossiblyBadPage(v8);
      if ( (unsigned __int8)v2 < 2u )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = v2;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
        }
        __writecr8(v2);
      }
    }
    else
    {
      MiInsertPageInFreeOrZeroedList(v8, (unsigned int)(v7 + 1));
      MiUnlockPage(v5, v2);
    }
  }
  return result;
}
