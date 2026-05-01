/*
 * XREFs of ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x1801D76B8
 * Callers:
 *     _IsGameManager::ScanKGLForFSECompat_::_1_::dtor$2 @ 0x1806D1ED9 (_IsGameManager--ScanKGLForFSECompat_--_1_--dtor$2.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$0 @ 0x1806D1F0F (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryFromGameConfig_::_1_::dtor$0 @ 0x1806D1F69 (_CQueryKnownGameList--GetGameEntryFromGameConfig_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, a2);
}
