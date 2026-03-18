/*
 * XREFs of BgDisplayFade @ 0x140BA36A4
 * Callers:
 *     BgkDisplayStringEx @ 0x14058C524 (BgkDisplayStringEx.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x140BA0240 (BgkDisplayCharacter.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140EEFD90 & 1) != 0 )
    v2 = AnFwDisplayFade();
  else
    v2 = -1073741823;
  BgpFwReleaseLock(v1, v0);
  return v2;
}
