/*
 * XREFs of IopSymlinkGetRelatedMountPoint @ 0x14099D80C
 * Callers:
 *     IopGraftName @ 0x14099D348 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x14099D708 (IopSymlinkRememberJunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSymlinkGetRelatedMountPoint(__int64 a1, unsigned __int16 a2)
{
  if ( a1 )
  {
    do
    {
      if ( (*(_BYTE *)(a1 + 2) & 1) == 0 )
        return 0LL;
      if ( *(_WORD *)a1 > a2 )
        break;
      a1 = *(_QWORD *)(a1 + 8);
    }
    while ( a1 );
    if ( a1 && (*(_BYTE *)(a1 + 2) & 1) == 0 )
      return 0LL;
  }
  return a1;
}
