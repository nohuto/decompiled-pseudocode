/*
 * XREFs of ?Release@VirtualDesktopDataSource@@UEAAKXZ @ 0x1802086A0
 * Callers:
 *     ?Release@VirtualDesktopDataSource@@W7EAAKXZ @ 0x180493130 (-Release@VirtualDesktopDataSource@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WBA@EAAKXZ @ 0x180493140 (-Release@VirtualDesktopDataSource@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WBI@EAAKXZ @ 0x180493150 (-Release@VirtualDesktopDataSource@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WCA@EAAKXZ @ 0x180493160 (-Release@VirtualDesktopDataSource@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WCI@EAAKXZ @ 0x180493170 (-Release@VirtualDesktopDataSource@@WCI@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WDA@EAAKXZ @ 0x180493180 (-Release@VirtualDesktopDataSource@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopDataSource::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource2,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(this);
}
