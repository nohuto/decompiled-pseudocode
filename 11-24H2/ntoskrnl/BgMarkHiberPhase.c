/*
 * XREFs of BgMarkHiberPhase @ 0x140BB078C
 * Callers:
 *     BgkResumePrepare @ 0x140B5368C (BgkResumePrepare.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 */

__int64 BgMarkHiberPhase()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 i; // rbx

  BgpFwAcquireLock();
  if ( (dword_140EF0050 & 1) != 0 )
  {
    for ( i = qword_140EF0120; (__int64 *)i != &qword_140EF0120; i = *(_QWORD *)i )
      PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
    v2 = 0;
  }
  else
  {
    v2 = -1073741823;
  }
  BgpFwReleaseLock(v1, v0);
  return v2;
}
