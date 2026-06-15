/*
 * XREFs of ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x1800616F4
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x18001D484 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800230D0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     _lambda_9219152d4e141db21e4330029f5108f8_::operator() @ 0x1800C0C0C (_lambda_9219152d4e141db21e4330029f5108f8_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 - 16) == 56797 )
      free((void *)(v2 - 16));
  }
}
