/*
 * XREFs of MiLockPagedRange @ 0x140A4C4C8
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x14047566C (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x140A4C34C (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1403EE6C4 (MiUnlockPagedAddress.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 */

__int64 __fastcall MiLockPagedRange(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 i; // rbx

  for ( i = 0LL; ; i += 4096LL )
  {
    if ( i >= a2 )
      return 1LL;
    if ( !(unsigned int)MiLockPagedAddress(i + a1, a2, a3, a4) )
      break;
  }
  while ( i )
  {
    i -= 4096LL;
    MiUnlockPagedAddress(i + a1, a2, a3, a4);
  }
  return 0LL;
}
