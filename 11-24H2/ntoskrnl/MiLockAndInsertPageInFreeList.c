/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x1404653B4
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406931D8 (MiComputeCacheAttributeSpeeds.c)
 *     MiFreeBootPageTable @ 0x140C4F170 (MiFreeBootPageTable.c)
 *     MiFreeEmptyBootPageTable @ 0x140C515F0 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockAndInsertPageInFreeList(__int64 a1)
{
  ULONG_PTR v1; // rbp
  volatile signed __int32 *v2; // rbx
  unsigned __int8 v3; // di
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned int v6; // esi

  v1 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v2 = (volatile signed __int32 *)(a1 + 24);
  if ( KeGetCurrentIrql() == 2 )
  {
    v3 = 17;
    v6 = 0;
    while ( _interlockedbittestandset64(v2, 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v2 < 0 );
    }
  }
  else
  {
    v3 = MiLockPageInline(a1);
  }
  MiInsertPageInFreeOrZeroedList(v1, 2LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v2, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v3 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = v3;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
