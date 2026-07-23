/*
 * XREFs of BgDisplayBackgroundUpdate @ 0x140BB25EC
 * Callers:
 *     BgkDestroy @ 0x140BB2170 (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB3E44 (AnFwDisplayBackgroundUpdate.c)
 */

__int64 __fastcall BgDisplayBackgroundUpdate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v4 = a1;
  BgpFwAcquireLock(a1, a2, a3, a4);
  if ( (dword_140EF0270 & 1) != 0 )
  {
    LOBYTE(v6) = v4;
    v7 = AnFwDisplayBackgroundUpdate(v6);
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock(v6, v5);
  return v7;
}
