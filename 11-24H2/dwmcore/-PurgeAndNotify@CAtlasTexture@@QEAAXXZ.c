/*
 * XREFs of ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x1801CCF2C
 * Callers:
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1801CC8B8 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801CCA14 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?NotifyOwner@CAtlasEntry@@AEBAXXZ @ 0x1801CCF7C (-NotifyOwner@CAtlasEntry@@AEBAXXZ.c)
 */

void __fastcall CAtlasTexture::PurgeAndNotify(CAtlasTexture *this)
{
  __int64 i; // rdi
  CAtlasEntry *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(CAtlasEntry **)(*((_QWORD *)this + 2) + 8 * i);
    if ( v3 )
      CAtlasEntry::NotifyOwner(v3);
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
}
