/*
 * XREFs of ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x1800CE640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::OnDeviceRemoved(CAudioSrv *this, unsigned __int16 *a2)
{
  return CAudioSrv::QueueOnDeviceWorkItem((__int64)this - 72, a2, 3, 0);
}
