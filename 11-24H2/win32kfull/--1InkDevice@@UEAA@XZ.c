/*
 * XREFs of ??1InkDevice@@UEAA@XZ @ 0x1402ED184
 * Callers:
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1402EA710 (--_EInkDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1402EE350 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 *     ?UnInitialize@RimBackedDeviceBase@@UEAAXXZ @ 0x1402EE3E0 (-UnInitialize@RimBackedDeviceBase@@UEAAXXZ.c)
 */

void __fastcall InkDevice::~InkDevice(InkDevice *this)
{
  *(_QWORD *)this = &InkDevice::`vftable'{for `RimBackedDeviceBase'};
  *((_QWORD *)this + 4) = &InkDevice::`vftable'{for `InkFeedbackProviderBase'};
  InkDevice::UnInitialize(this);
  *((_QWORD *)this + 4) = &InkFeedbackProviderBase::`vftable';
  *(_QWORD *)this = &RimBackedDeviceBase::`vftable';
  RimBackedDeviceBase::UnInitialize(this);
}
