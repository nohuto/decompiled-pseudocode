/*
 * XREFs of BgDisplayBackgroundUpdate @ 0x140BB05EC
 * Callers:
 *     BgkDestroy @ 0x140BB0170 (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB1E44 (AnFwDisplayBackgroundUpdate.c)
 */

__int64 __fastcall BgDisplayBackgroundUpdate(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  BgpFwAcquireLock();
  if ( (dword_140EF0050 & 1) != 0 )
  {
    LOBYTE(v3) = a1;
    v4 = AnFwDisplayBackgroundUpdate(v3);
  }
  else
  {
    v4 = -1073741823;
  }
  BgpFwReleaseLock(v3, v2);
  return v4;
}
