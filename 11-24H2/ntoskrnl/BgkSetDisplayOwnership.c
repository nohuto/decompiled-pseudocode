/*
 * XREFs of BgkSetDisplayOwnership @ 0x14058FFE0
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkSetDisplayOwnership(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return BgkNotifyDisplayOwnershipChange(a1, 0LL, a3, a4);
}
