/*
 * XREFs of ??1?$ComPtr@UIAudioProcessingObjectPreferredFormatSupport@@@WRL@Microsoft@@QEAA@XZ @ 0x180149F74
 * Callers:
 *     _CCompositeSystemEffect::GetPreferredFormat_::_1_::dtor$2 @ 0x18017224B (_CCompositeSystemEffect--GetPreferredFormat_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<IAudioProcessingObjectPreferredFormatSupport>::~ComPtr<IAudioProcessingObjectPreferredFormatSupport>()
{
  return Microsoft::WRL::ComPtr<IAudioProcessingObjectPreferredFormatSupport>::InternalRelease();
}
