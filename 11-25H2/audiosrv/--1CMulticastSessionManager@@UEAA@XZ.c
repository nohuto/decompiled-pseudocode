/*
 * XREFs of ??1CMulticastSessionManager@@UEAA@XZ @ 0x1800FC528
 * Callers:
 *     ??_ECMulticastSessionManager@@UEAAPEAXI@Z @ 0x1800FC740 (--_ECMulticastSessionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?clear@?$forward_list@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800FD900 (-clear@-$forward_list@V-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 */

void __fastcall CMulticastSessionManager::~CMulticastSessionManager(CMulticastSessionManager *this)
{
  std::forward_list<wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>>::clear((char *)this + 24);
  *((_DWORD *)this + 5) = -1073741823;
}
