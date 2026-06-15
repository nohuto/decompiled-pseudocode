/*
 * XREFs of ??1?$ComPtr@VCCpuMemoryBufferFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x14004B1DC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCpuMemoryBufferFactory_IDeviceGraphBufferFactory_unsigned___int64_const_&_unsigned___int64_const_&_unsigned___int64_const_&__::_1_::dtor$1 @ 0x140093E43 (_Microsoft--WRL--Details--MakeAndInitialize_CCpuMemoryBufferFactory_IDeviceGraphBuf_ea_140093E43.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400225B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffe.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCpuMemoryBufferFactory>::~ComPtr<CCpuMemoryBufferFactory>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::Release(
             result,
             a2);
  }
  return result;
}
