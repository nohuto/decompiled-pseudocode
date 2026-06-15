/*
 * XREFs of ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x1800CDAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::OnDeviceRemoved(CAudioSrv *this, const unsigned __int16 *a2)
{
  return CAudioSrv::QueueOnDeviceWorkItem((__int64)this - 72, (__int64)a2, 3u, 0);
}
