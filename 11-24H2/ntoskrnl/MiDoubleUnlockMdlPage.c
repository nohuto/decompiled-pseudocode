/*
 * XREFs of MiDoubleUnlockMdlPage @ 0x14044022C
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404EF800 (MiDecommitFreePagesTail.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDoubleUnlockMdlPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rbx
  unsigned __int8 v6; // di
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 result; // rax

  v4 = (volatile signed __int32 *)(a1 + 24);
  if ( (_DWORD)a2 )
  {
    v6 = 17;
    v7 = 0;
    while ( _interlockedbittestandset64(v4, 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v4 < 0 );
    }
  }
  else
  {
    v6 = MiLockPageInline(a1, a2, a3, a4);
  }
  MiRemoveLockedPageChargeAndDecRef(a1, a2, a3, a4);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v4, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = v6;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    result = v6;
    __writecr8(v6);
  }
  return result;
}
