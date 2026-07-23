/*
 * XREFs of IopSymlinkGetMostRecentlyUsedName @ 0x140474550
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x1408ACA10 (IopSymlinkRememberJunction.c)
 *     IopSymlinkProcessReparse @ 0x140A2F13C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140A2F1E8 (IopGraftName.c)
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
