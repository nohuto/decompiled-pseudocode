/*
 * XREFs of NtGdiChangeGhostFont @ 0x140336DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreChangeGhostFont@@YAHPEAXH@Z @ 0x14032632C (-GreChangeGhostFont@@YAHPEAXH@Z.c)
 */

__int64 __fastcall NtGdiChangeGhostFont(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 1;
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( !(unsigned int)GreChangeGhostFont(*a1, a2) )
    return 0;
  return v2;
}
