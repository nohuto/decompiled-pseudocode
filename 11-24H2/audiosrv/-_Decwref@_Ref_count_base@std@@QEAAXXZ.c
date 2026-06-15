/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18004C5A0
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800CC510 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180118DE0 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 *     _dynamic_atexit_destructor_for__g_weakStreamMonitorManager___0 @ 0x180173650 (_dynamic_atexit_destructor_for__g_weakStreamMonitorManager___0.c)
 *     _dynamic_atexit_destructor_for__CStreamConnectionManagerImpl::s_weakSelf___0 @ 0x180173720 (_dynamic_atexit_destructor_for__CStreamConnectionManagerImpl--s_weakSelf___0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
