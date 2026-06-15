/*
 * XREFs of ??1?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@wil@@QEAA@XZ @ 0x1400587A0
 * Callers:
 *     _PublishApoTelemetry_::_1_::dtor$0 @ 0x140094C9D (_PublishApoTelemetry_--_1_--dtor$0.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback_::_1_::dtor$0 @ 0x1400970CB (_Windows--Media--Devices--Internal--AudioDeviceBrokerDevice--ThreadpoolCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_call<void (*)(void),&void CoUninitialize(void),1>::~unique_call<void (*)(void),&void CoUninitialize(void),1>(
        char *a1)
{
  char v1; // al

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
    CoUninitialize();
}
