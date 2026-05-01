/*
 * XREFs of ??1PrimaryAppProxyBase@@UEAA@XZ @ 0x1804F0FF0
 * Callers:
 *     _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$0 @ 0x1806F03FE (_Win32PrimaryAppProxy--Win32PrimaryAppProxy_--_1_--dtor$0.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$17 @ 0x1806F087A (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$17.c)
 * Callees:
 *     <none>
 */

void __fastcall PrimaryAppProxyBase::~PrimaryAppProxyBase(PrimaryAppProxyBase *this)
{
  *(_QWORD *)this = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
}
