/*
 * XREFs of BvgaNotifyDisplayOwnershipChange @ 0x1405906C0
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BvgaAcquireDisplayOwnership @ 0x140590460 (BvgaAcquireDisplayOwnership.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x140590720 (BvgaNotifyDisplayOwnershipLost.c)
 */

__int64 __fastcall BvgaNotifyDisplayOwnershipChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl

  v5 = a1;
  if ( (_BYTE)a1 )
  {
    if ( BvgaDisplayState )
      BvgaAcquireDisplayOwnership(a1, a2, a3, a4);
  }
  else if ( BvgaDisplayState != 2 )
  {
    BvgaNotifyDisplayOwnershipLost(0LL);
  }
  BgkNotifyDisplayOwnershipChange(v5, a2, a3, a4);
  return 0LL;
}
