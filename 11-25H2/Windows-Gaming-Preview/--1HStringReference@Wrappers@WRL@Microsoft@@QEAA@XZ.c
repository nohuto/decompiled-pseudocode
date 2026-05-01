/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18000D36C
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$0 @ 0x1800436F1 (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFileDescription.c)
 *     __lambda_c7e28edb760347053732171cef665d5d_::operator()_::_1_::dtor$2 @ 0x18004387D (__lambda_c7e28edb760347053732171cef665d5d_--operator()_--_1_--dtor$2.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$1 @ 0x180043A3C (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$1.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$3 @ 0x180043A4E (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$3.c)
 *     __lambda_c7e28edb760347053732171cef665d5d_::operator()_::_1_::dtor$6 @ 0x180043ACC (__lambda_c7e28edb760347053732171cef665d5d_--operator()_--_1_--dtor$6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath_::_1_::dtor$2 @ 0x180043DEA (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_CreateStorageFileForFilePath_.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$5 @ 0x180043E32 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180043E32.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
