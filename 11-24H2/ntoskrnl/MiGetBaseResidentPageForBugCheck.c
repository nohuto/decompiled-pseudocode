/*
 * XREFs of MiGetBaseResidentPageForBugCheck @ 0x140685390
 * Callers:
 *     MiMirrorRemoveInactivePages @ 0x14049D2E8 (MiMirrorRemoveInactivePages.c)
 *     MiGetPagesRemainingInResidentPage @ 0x140685444 (MiGetPagesRemainingInResidentPage.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiGetBaseResidentPageForBugCheck(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  int v3; // ebp
  int i; // esi
  __int64 v5; // rax

  v1 = a1;
  v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v3 = 0;
  for ( i = 2; ; --i )
  {
    v5 = MiPageSizes[i] - 1;
    if ( (v5 & v2) != 0 )
    {
      v2 &= ~v5;
      v1 = 48 * v2 - 0x220000000000LL;
      if ( (unsigned int)++v3 > 3 )
        return 0LL;
    }
    if ( (unsigned int)MiGetPfnPageSizeIndex(v1) != 3 )
      break;
    if ( !i )
      return 0LL;
  }
  return v1;
}
