/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x1403C2524
 * Callers:
 *     KeDisableTimer2 @ 0x1403C01A8 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

bool __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v1);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
  }
  if ( (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (*(_BYTE *)(a1 + 1) & 0x20) != 0;
}
