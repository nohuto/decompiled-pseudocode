/*
 * XREFs of ??0IMuteControlHandler@@QEAA@XZ @ 0x1800A6C7C
 * Callers:
 *     ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x18007BFFC (--0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VIMuteControlHandler@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800D04EC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VIMuteControlHandler@@@Details.c)
 * Callees:
 *     <none>
 */

IMuteControlHandler *__fastcall IMuteControlHandler::IMuteControlHandler(IMuteControlHandler *this)
{
  *(_QWORD *)this = &Microsoft::WRL::ChainInterfaces<ISpatialAudioMetadataDictionary,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  return this;
}
