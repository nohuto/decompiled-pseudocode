/*
 * XREFs of ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x1800715D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::OnDeviceStateChanged(CAudioSrv *this, unsigned __int16 *a2, int a3)
{
  return CAudioSrv::QueueOnDeviceWorkItem((__int64)this - 72, a2, 1, a3);
}
