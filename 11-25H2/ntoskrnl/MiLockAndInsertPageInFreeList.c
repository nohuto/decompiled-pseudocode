/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x140223D04
 * Callers:
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140687D78 (MiComputeCacheAttributeSpeeds.c)
 *     MiFreeBootPageTable @ 0x140C3DF40 (MiFreeBootPageTable.c)
 *     MiFreeEmptyBootPageTable @ 0x140C403C0 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
  MiInsertPageInFreeOrZeroedList(v1);
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
