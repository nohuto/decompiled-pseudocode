/*
 * XREFs of MiDoubleUnlockMdlPage @ 0x140447B0C
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404F1D60 (MiDecommitFreePagesTail.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDoubleUnlockMdlPage(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int8 v5; // di
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 result; // rax

  v3 = (volatile signed __int32 *)(a1 + 24);
  if ( (_DWORD)a2 )
  {
    v5 = 17;
    v6 = 0;
    while ( _interlockedbittestandset64(v3, 0x3FuLL) )
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
      while ( *(__int64 *)v3 < 0 );
    }
  }
  else
  {
    v5 = MiLockPageInline(a1);
  }
  MiRemoveLockedPageChargeAndDecRef(a1, a2, a3);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v5 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = v5;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    result = v5;
    __writecr8(v5);
  }
  return result;
}
