/*
 * XREFs of ?OnDefaultDeviceChanged@CAudioSrv@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800CDA80
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800527A0 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 */

__int64 __fastcall CAudioSrv::OnDefaultDeviceChanged(CAudioSrv *this, int a2, int a3, const unsigned __int16 *a4)
{
  return CAudioSrv::QueueOnDeviceWorkItem((__int64)this - 72, (__int64)a4, a3, a2, a3);
}
