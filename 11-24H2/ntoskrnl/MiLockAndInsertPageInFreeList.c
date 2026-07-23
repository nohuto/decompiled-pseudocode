/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x14045BA98
 * Callers:
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406942A8 (MiComputeCacheAttributeSpeeds.c)
 *     MiFreeBootPageTable @ 0x140C51300 (MiFreeBootPageTable.c)
 *     MiFreeEmptyBootPageTable @ 0x140C53780 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockAndInsertPageInFreeList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbp
  volatile signed __int32 *v5; // rbx
  unsigned __int8 v6; // di
  __int64 v7; // rdx
  __int64 result; // rax
  unsigned int v9; // esi

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v5 = (volatile signed __int32 *)(a1 + 24);
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = 17;
    v9 = 0;
    while ( _interlockedbittestandset64(v5, 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v5 < 0 );
    }
  }
  else
  {
    v6 = MiLockPageInline(a1, a2, a3, a4);
  }
  MiInsertPageInFreeOrZeroedList(v4, 2LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v5, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = v6;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    result = v6;
    __writecr8(v6);
  }
  return result;
}
