/*
 * XREFs of ??1?$queue@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x180618FC0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::DiscoverabilityManager_::_1_::dtor$11 @ 0x1807008FE (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--Discovera_ea_1807008FE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::queue<unsigned int>::~queue<unsigned int,std::deque<unsigned int>>(void **a1)
{
  std::deque<tagRECT>::~deque<tagRECT>(a1);
}
