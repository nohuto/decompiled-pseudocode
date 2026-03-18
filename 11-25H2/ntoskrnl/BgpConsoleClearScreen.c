/*
 * XREFs of BgpConsoleClearScreen @ 0x140BA09F0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x140BA0A28 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx

  BgpFwAcquireLock();
  if ( qword_140EEF810 )
    v2 = BgpConsoleClearScreenEx();
  else
    v2 = -1073741823;
  BgpFwReleaseLock(v1, v0);
  return v2;
}
