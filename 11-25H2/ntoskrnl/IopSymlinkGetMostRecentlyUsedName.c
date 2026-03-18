/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x140478170
 * Callers:
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopSymlinkProcessReparse @ 0x140862168 (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140862214 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x1408625D4 (IopSymlinkRememberJunction.c)
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
