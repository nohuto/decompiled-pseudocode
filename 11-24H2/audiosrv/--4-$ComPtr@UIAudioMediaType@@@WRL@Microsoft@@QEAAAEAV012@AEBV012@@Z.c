/*
 * XREFs of ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180066210
 * Callers:
 *     ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180052ED0 (-IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18014A970 (-IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*a2);
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
