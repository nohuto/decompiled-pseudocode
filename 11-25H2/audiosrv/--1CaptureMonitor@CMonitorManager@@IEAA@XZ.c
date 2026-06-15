/*
 * XREFs of ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x18010F728
 * Callers:
 *     ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x180113450 (-Release@CaptureMonitor@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180054280 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::CaptureMonitor::~CaptureMonitor(CMonitorManager::CaptureMonitor *this)
{
  char *v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  v2 = (char *)this + 208;
  if ( *((_QWORD *)this + 2) )
  {
    if ( *(_QWORD *)v2 )
      *(_QWORD *)(*(_QWORD *)v2 + 192LL) = 0LL;
    CloseThreadpoolWait(*((PTP_WAIT *)this + 2));
  }
  v3 = *(_QWORD *)v2;
  if ( *(_QWORD *)v2 )
  {
    *(_QWORD *)v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  std::wstring::_Tidy_deallocate((__int64)this + 168);
  std::wstring::_Tidy_deallocate((__int64)this + 136);
  std::wstring::_Tidy_deallocate((__int64)this + 88);
  std::wstring::_Tidy_deallocate((__int64)this + 56);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 5);
  ATL::CHandle::~CHandle((void **)this + 4);
}
