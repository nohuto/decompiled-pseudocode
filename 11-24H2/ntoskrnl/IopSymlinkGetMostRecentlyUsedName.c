/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x140477F50
 * Callers:
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x14099D29C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x14099D348 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x14099D708 (IopSymlinkRememberJunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSymlinkGetMostRecentlyUsedName(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 8); i; i = *(_QWORD *)(i + 8) )
    a1 = i;
  return a1;
}
