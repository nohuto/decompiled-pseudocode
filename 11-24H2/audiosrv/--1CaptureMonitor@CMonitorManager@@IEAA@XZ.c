/*
 * XREFs of ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1801175D4
 * Callers:
 *     ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x18011B2B0 (-Release@CaptureMonitor@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::CaptureMonitor::~CaptureMonitor(CMonitorManager::CaptureMonitor *this, __int64 a2)
{
  char *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx

  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  v3 = (char *)this + 208;
  if ( *((_QWORD *)this + 2) )
  {
    if ( *(_QWORD *)v3 )
      *(_QWORD *)(*(_QWORD *)v3 + 192LL) = 0LL;
    CloseThreadpoolWait(*((PTP_WAIT *)this + 2));
  }
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 )
  {
    *(_QWORD *)v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  std::wstring::_Tidy_deallocate((__int64)this + 168, a2);
  std::wstring::_Tidy_deallocate((__int64)this + 136, v5);
  std::wstring::_Tidy_deallocate((__int64)this + 88, v6);
  std::wstring::_Tidy_deallocate((__int64)this + 56, v7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 5);
  ATL::CHandle::~CHandle((void **)this + 4);
}
