/*
 * XREFs of MiLockPagedRange @ 0x140A5457C
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x140479DDC (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x140A54400 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1403F85B4 (MiUnlockPagedAddress.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 */

__int64 __fastcall MiLockPagedRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rbx

  for ( i = 0LL; ; i += 4096LL )
  {
    if ( i >= a2 )
      return 1LL;
    if ( !(unsigned int)MiLockPagedAddress(i + a1) )
      break;
  }
  while ( i )
  {
    i -= 4096LL;
    MiUnlockPagedAddress(i + a1);
  }
  return 0LL;
}
