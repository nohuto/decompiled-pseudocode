/*
 * XREFs of MiDoubleUnlockMdlPage @ 0x14044A2E8
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1404EDBB0 (MiDecommitFreePagesTail.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDoubleUnlockMdlPage(ULONG_PTR a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  volatile signed __int32 *v4; // rbx
  unsigned __int8 v6; // di
  int v7; // esi
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
          HvlNotifyLongSpinWait();
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
    v6 = MiLockPageInline(a1);
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
