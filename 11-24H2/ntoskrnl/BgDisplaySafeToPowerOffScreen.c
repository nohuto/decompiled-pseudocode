/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x140698D8C
 * Callers:
 *     PopShutdownHandler @ 0x140B620D0 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x14069B16C (BgpDisplaySafeToPowerOffScreen.c)
 */

__int64 __fastcall BgDisplaySafeToPowerOffScreen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  BgpFwAcquireLock(a1, a2, a3, a4);
  if ( (dword_140EF0270 & 2) != 0 )
    v6 = BgpDisplaySafeToPowerOffScreen();
  else
    v6 = -1073741823;
  BgpFwReleaseLock(v5, v4);
  return v6;
}
