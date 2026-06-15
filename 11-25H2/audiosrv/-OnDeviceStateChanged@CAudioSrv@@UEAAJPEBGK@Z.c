/*
 * XREFs of ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x180084770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::OnDeviceStateChanged(CAudioSrv *this, const unsigned __int16 *a2, int a3)
{
  return CAudioSrv::QueueOnDeviceWorkItem((__int64)this - 72, (__int64)a2, 1u, a3);
}
