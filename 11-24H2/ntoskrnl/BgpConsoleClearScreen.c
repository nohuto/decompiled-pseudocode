/*
 * XREFs of BgpConsoleClearScreen @ 0x140BB09F0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x140BB0A28 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx

  BgpFwAcquireLock();
  if ( qword_140EEFAB0 )
    v2 = BgpConsoleClearScreenEx();
  else
    v2 = -1073741823;
  BgpFwReleaseLock(v1, v0);
  return v2;
}
