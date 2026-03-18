/*
 * XREFs of MiRelockProtoPoolPage @ 0x14023BCDC
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x140211B30 (MiChargeForLockedPage.c)
 *     MiLockOwnedProtoPage @ 0x1402158F0 (MiLockOwnedProtoPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14023C190 (MiAreChargesNeededToLockPage.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // edi
  int v5; // [rsp+30h] [rbp+8h]

  v2 = (unsigned int)a2;
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v2);
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
    v5 = *(_DWORD *)(a1 + 32);
    LOWORD(v5) = v5 + 1;
    *(_DWORD *)(a1 + 32) = v5;
  }
  MiLockOwnedProtoPage(a1);
  return a1;
}
