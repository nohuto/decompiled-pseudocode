/*
 * XREFs of MiRelockProtoPoolPage @ 0x140345A40
 * Callers:
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockOwnedProtoPage @ 0x1403354A0 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x14033AE90 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x140345EF0 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v7; // [rsp+30h] [rbp+8h]

  v4 = (unsigned int)a2;
  if ( a2 )
  {
    *a2 = MiLockPageInline(a1, (__int64)a2, a3, a4);
  }
  else
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) || (unsigned int)MiChargeForLockedPage(a1, 1) )
  {
    v7 = *(_DWORD *)(a1 + 32);
    LOWORD(v7) = v7 + 1;
    *(_DWORD *)(a1 + 32) = v7;
  }
  MiLockOwnedProtoPage(a1);
  return a1;
}
