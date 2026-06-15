/*
 * XREFs of ?InternalRelease@?$ComPtr@UIAudioProcessingObjectPreferredFormatSupport@@@WRL@Microsoft@@IEAAKXZ @ 0x18014A940
 * Callers:
 *     ??1?$ComPtr@UIAudioProcessingObjectPreferredFormatSupport@@@WRL@Microsoft@@QEAA@XZ @ 0x180149F74 (--1-$ComPtr@UIAudioProcessingObjectPreferredFormatSupport@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetPreferredFormat@CCompositeSystemEffect@@AEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x18014A6D4 (-GetPreferredFormat@CCompositeSystemEffect@@AEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAudioProcessingObjectPreferredFormatSupport>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
