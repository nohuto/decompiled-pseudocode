/*
 * XREFs of ??1?$com_ptr_t@VCCpuMemoryBufferFactory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002239C
 * Callers:
 *     ??1CCpuMemoryBuffer@@UEAA@XZ @ 0x14002234C (--1CCpuMemoryBuffer@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400222B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffe.c)
 */

__int64 __fastcall wil::com_ptr_t<CCpuMemoryBufferFactory,wil::err_returncode_policy>::~com_ptr_t<CCpuMemoryBufferFactory,wil::err_returncode_policy>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::Release(
             v2,
             a2);
  return result;
}
