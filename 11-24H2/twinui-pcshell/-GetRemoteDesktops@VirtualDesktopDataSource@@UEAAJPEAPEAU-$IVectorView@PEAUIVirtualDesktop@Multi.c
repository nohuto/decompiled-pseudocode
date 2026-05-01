/*
 * XREFs of ?GetRemoteDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1804923D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180492484 (-GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 */

__int64 __fastcall VirtualDesktopDataSource::GetRemoteDesktops(__int64 a1)
{
  return VirtualDesktopDataSource::GetVirtualDesktops((VirtualDesktopDataSource *)(a1 - 16));
}
