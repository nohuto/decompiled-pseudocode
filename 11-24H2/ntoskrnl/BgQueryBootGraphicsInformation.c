/*
 * XREFs of BgQueryBootGraphicsInformation @ 0x140697DBC
 * Callers:
 *     BgkQueryBootGraphicsInformation @ 0x140BB0064 (BgkQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1404C3450 (BgpFwQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgQueryBootGraphicsInformation(int a1, __int64 a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int BootGraphicsInformation; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 || a1 >= 4 )
    return 3221225485LL;
  BgpFwAcquireLock();
  if ( (dword_140EF0050 & 1) != 0 )
    BootGraphicsInformation = BgpFwQueryBootGraphicsInformation((unsigned int)a1, a2);
  else
    BootGraphicsInformation = -1073741823;
  BgpFwReleaseLock(v6, v5);
  return BootGraphicsInformation;
}
