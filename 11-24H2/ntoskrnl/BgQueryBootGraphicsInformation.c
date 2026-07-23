/*
 * XREFs of BgQueryBootGraphicsInformation @ 0x140698E3C
 * Callers:
 *     BgkQueryBootGraphicsInformation @ 0x140BB2064 (BgkQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1404BE988 (BgpFwQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgQueryBootGraphicsInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int BootGraphicsInformation; // ebx

  v5 = a1;
  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 || (int)a1 >= 4 )
    return 3221225485LL;
  BgpFwAcquireLock(a1, a2, a3, a4);
  if ( (dword_140EF0270 & 1) != 0 )
    BootGraphicsInformation = BgpFwQueryBootGraphicsInformation(v5, a2);
  else
    BootGraphicsInformation = -1073741823;
  BgpFwReleaseLock(v8, v7);
  return BootGraphicsInformation;
}
