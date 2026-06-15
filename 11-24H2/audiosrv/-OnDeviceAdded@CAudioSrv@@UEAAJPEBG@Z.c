/*
 * XREFs of ?OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z @ 0x1800CE620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::OnDeviceAdded(CAudioSrv *this, unsigned __int16 *a2)
{
  return CAudioSrv::QueueOnDeviceWorkItem((__int64)this - 72, a2, 2, 0);
}
