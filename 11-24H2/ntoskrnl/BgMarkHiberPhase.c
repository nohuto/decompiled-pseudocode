/*
 * XREFs of BgMarkHiberPhase @ 0x140BB278C
 * Callers:
 *     BgkResumePrepare @ 0x140B556DC (BgkResumePrepare.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgMarkHiberPhase(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 i; // rbx

  BgpFwAcquireLock(a1, a2, a3, a4);
  if ( (dword_140EF0270 & 1) != 0 )
  {
    for ( i = qword_140EF0340; (__int64 *)i != &qword_140EF0340; i = *(_QWORD *)i )
      PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
    v6 = 0;
  }
  else
  {
    v6 = -1073741823;
  }
  BgpFwReleaseLock(v5, v4);
  return v6;
}
