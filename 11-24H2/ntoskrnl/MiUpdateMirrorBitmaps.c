/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x140AC0BC0
 * Callers:
 *     MiAcquireAddMemoryResources @ 0x1407E85A8 (MiAcquireAddMemoryResources.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140C539B0 (MiInitializeMirroring.c)
 * Callees:
 *     MiSplitMirrorBitMap @ 0x1407EBE54 (MiSplitMirrorBitMap.c)
 *     MiActOnMirrorBitmap @ 0x140AA9E60 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MiUpdateMirrorBitmaps(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  unsigned int j; // edi

  if ( !a2 || dword_140E300B0 )
  {
    if ( dword_140E300B0 != 2 )
    {
      for ( i = 0; i < 2; ++i )
      {
        if ( !(unsigned int)MiActOnMirrorBitmap((unsigned __int64 *)&xmmword_140E30090[i], 0) )
        {
LABEL_13:
          dword_140E300B0 = 1;
          return 0LL;
        }
      }
    }
    if ( a2 )
    {
      for ( j = 0; j < 2; ++j )
      {
        if ( !(unsigned int)MiSplitMirrorBitMap((unsigned __int64 *)&xmmword_140E30090[j], a1, a2) )
          goto LABEL_13;
      }
    }
    dword_140E300B0 = 2;
  }
  return 1LL;
}
