/*
 * XREFs of ?ReleaseDisplaySurface@CDxHandleBitmapRealization@@IEAAXXZ @ 0x180068DBC
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x180068CDC (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802D87F0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x180069250 (-NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices.c)
 */

void __fastcall CDxHandleBitmapRealization::ReleaseDisplaySurface(CDxHandleBitmapRealization *this)
{
  __int64 *v1; // rbx
  struct Windows::Devices::Display::Core::IDisplaySurface *v2; // rdx

  v1 = (__int64 *)((char *)this + 384);
  v2 = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 48);
  if ( v2 )
  {
    CDDisplayManager::NotifyRealizationBitmapReleased(this, v2);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  }
}
