/*
 * XREFs of BgDisplayFade @ 0x140BB36A4
 * Callers:
 *     BgkDisplayStringEx @ 0x14058FD04 (BgkDisplayStringEx.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x140BB0240 (BgkDisplayCharacter.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140EF0050 & 1) != 0 )
    v2 = AnFwDisplayFade();
  else
    v2 = -1073741823;
  BgpFwReleaseLock(v1, v0);
  return v2;
}
