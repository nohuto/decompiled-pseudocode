/*
 * XREFs of BgpConsoleClearScreen @ 0x140BB29F0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x140BB2A28 (BgpConsoleClearScreenEx.c)
 */

__int64 __fastcall BgpConsoleClearScreen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  BgpFwAcquireLock(a1, a2, a3, a4);
  if ( qword_140EEFD00 )
    v6 = BgpConsoleClearScreenEx();
  else
    v6 = -1073741823;
  BgpFwReleaseLock(v5, v4);
  return v6;
}
