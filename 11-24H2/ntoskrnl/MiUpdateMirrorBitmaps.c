/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x140ABBD20
 * Callers:
 *     MiAcquireAddMemoryResources @ 0x1407E8B78 (MiAcquireAddMemoryResources.c)
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140C55B40 (MiInitializeMirroring.c)
 * Callees:
 *     MiSplitMirrorBitMap @ 0x1407EC424 (MiSplitMirrorBitMap.c)
 *     MiActOnMirrorBitmap @ 0x140AA4F10 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MiUpdateMirrorBitmaps(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  unsigned int j; // edi

  if ( !a2 || dword_140E301F0 )
  {
    if ( dword_140E301F0 != 2 )
    {
      for ( i = 0; i < 2; ++i )
      {
        if ( !(unsigned int)MiActOnMirrorBitmap((unsigned __int64 *)&xmmword_140E301D0[i], 0) )
        {
LABEL_13:
          dword_140E301F0 = 1;
          return 0LL;
        }
      }
    }
    if ( a2 )
    {
      for ( j = 0; j < 2; ++j )
      {
        if ( !(unsigned int)MiSplitMirrorBitMap((unsigned __int64 *)&xmmword_140E301D0[j], a1, a2) )
          goto LABEL_13;
      }
    }
    dword_140E301F0 = 2;
  }
  return 1LL;
}
