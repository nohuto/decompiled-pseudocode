/*
 * XREFs of ??1?$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003D07C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CGameEntry_KnownGameList::IGameEntry_KnownGameList::IGameEntry____::_1_::dtor$0 @ 0x180043FD0 (_Microsoft--WRL--Details--MakeAndInitialize_CGameEntry_KnownGameList--IGameEntry_KnownGameList--.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CQueryKnownGameList_CQueryKnownGameList_unsigned_short_const___&__::_1_::dtor$0 @ 0x180043FE2 (_Microsoft--WRL--Details--MakeAndInitialize_CQueryKnownGameList_CQueryKnownGameList_unsigned_sho.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180002C38 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CGameEntry>::~MakeAllocator<CGameEntry>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
