/*
 * XREFs of ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x18009A11C
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E2D90 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1800613F8 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 */

__int64 __fastcall QpcTimeConverter::GetCurrentMilliSecTime(QpcTimeConverter *this)
{
  __int64 v2; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  PerformanceCount.QuadPart = 0LL;
  if ( QueryPerformanceCounter(&PerformanceCount)
    && (unsigned int)QpcTimeConverter::QpcToMicroSec(this, PerformanceCount.QuadPart, &v5) )
  {
    return (unsigned int)(v5 / 0x3E8);
  }
  else
  {
    LODWORD(v2) = GetTickCount();
  }
  return (unsigned int)v2;
}
