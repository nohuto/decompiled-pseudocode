/*
 * XREFs of ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801BE46C
 * Callers:
 *     ??_GMPCGamepadProcessor@@UEAAPEAXI@Z @ 0x1801BE6DC (--_GMPCGamepadProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x1800BCF1C (--1-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x1800BF510 (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??1?$unique_ptr@UInputBufferListEntry@ConsumerControlNexusDevice@@U?$default_delete@UInputBufferListEntry@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E6C10 (--1-$unique_ptr@UInputBufferListEntry@ConsumerControlNexusDevice@@U-$default_delete@UInputBuffer.c)
 */

void __fastcall MPCGamepadProcessor::~MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>((_QWORD *)this + 536);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>((_QWORD *)this + 535);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>((_QWORD *)this + 534);
  std::unique_ptr<ConsumerControlNexusDevice::InputBufferListEntry>::~unique_ptr<ConsumerControlNexusDevice::InputBufferListEntry>((void **)this + 462);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 461);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 460);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 459);
  *((_DWORD *)this + 917) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase((MPCGamepadProcessor *)((char *)this + 8));
}
