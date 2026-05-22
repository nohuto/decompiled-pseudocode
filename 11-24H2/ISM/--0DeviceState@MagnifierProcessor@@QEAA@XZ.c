/*
 * XREFs of ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x1801AD09C
 * Callers:
 *     ??$MakeAndInitialize@UDeviceState@MagnifierProcessor@@U12@$$V@Details@WRL@Microsoft@@YAJPEAPEAUDeviceState@MagnifierProcessor@@@Z @ 0x1801ACB90 (--$MakeAndInitialize@UDeviceState@MagnifierProcessor@@U12@$$V@Details@WRL@Microsoft@@YAJPEAPEAUD.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180037C64 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800528D0 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??0GestureState@MagnifierRecognizer@@QEAA@XZ @ 0x1801AD13C (--0GestureState@MagnifierRecognizer@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
MagnifierProcessor::DeviceState *__fastcall MagnifierProcessor::DeviceState::DeviceState(
        MagnifierProcessor::DeviceState *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(this);
  *(_QWORD *)this = &MagnifierProcessor::DeviceState::`vftable';
  *((_WORD *)this + 8) = 0;
  *((_BYTE *)this + 18) = 0;
  *((_QWORD *)this + 3) = 0LL;
  MagnifierRecognizer::GestureState::GestureState((MagnifierProcessor::DeviceState *)((char *)this + 32));
  *((_QWORD *)this + 8) = 500LL;
  *((_QWORD *)this + 9) = 100LL;
  *((_DWORD *)this + 20) = 200;
  *((_DWORD *)this + 21) = 270;
  *((_QWORD *)this + 11) = 0x3FE8D4FDF3B645A2LL;
  QpcTimeConverter::QpcTimeConverter((MagnifierProcessor::DeviceState *)((char *)this + 96));
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return this;
}
