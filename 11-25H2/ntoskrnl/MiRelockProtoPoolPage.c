/*
 * XREFs of MiRelockProtoPoolPage @ 0x14033DFA0
 * Callers:
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x14022E1E0 (MiChargeForLockedPage.c)
 *     MiLockOwnedProtoPage @ 0x140231FF0 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAreChargesNeededToLockPage @ 0x14033E460 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, _BYTE *a2)
{
  int v2; // edi
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  int v7; // [rsp+30h] [rbp+8h]

  v2 = (int)a2;
  if ( a2 )
  {
    *a2 = MiLockPageInline(a1);
  }
  else
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v2 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) || (unsigned int)MiChargeForLockedPage(a1, 1, v4, v5) )
  {
    v7 = *(_DWORD *)(a1 + 32);
    LOWORD(v7) = v7 + 1;
    *(_DWORD *)(a1 + 32) = v7;
  }
  MiLockOwnedProtoPage(a1);
  return a1;
}
