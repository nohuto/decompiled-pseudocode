/*
 * XREFs of BgDisplayFade @ 0x140BB56A4
 * Callers:
 *     BgkDisplayStringEx @ 0x14058CD24 (BgkDisplayStringEx.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x140BB2240 (BgkDisplayCharacter.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 */

__int64 __fastcall BgDisplayFade(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock(a1, a2, a3, a4);
  if ( (dword_140EF0270 & 1) != 0 )
    v6 = AnFwDisplayFade();
  else
    v6 = -1073741823;
  BgpFwReleaseLock(v5, v4);
  return v6;
}
