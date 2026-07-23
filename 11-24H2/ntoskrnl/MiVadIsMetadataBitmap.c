/*
 * XREFs of MiVadIsMetadataBitmap @ 0x1408D9558
 * Callers:
 *     NtAreMappedFilesTheSame @ 0x1408D8910 (NtAreMappedFilesTheSame.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsMetadataBitmap(__int64 a1)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  unsigned int i; // edx

  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
      return 0LL;
    if ( ActiveProcessors[4].StaticBitmap[4 * i + 17] == a1 )
      break;
  }
  return 1LL;
}
