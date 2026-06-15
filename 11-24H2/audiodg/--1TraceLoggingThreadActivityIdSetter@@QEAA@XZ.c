/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x140042D94
 * Callers:
 *     _CAudioPump::InputPumpWorkRoutine_::_1_::dtor$0 @ 0x140092BE0 (_CAudioPump--InputPumpWorkRoutine_--_1_--dtor$0.c)
 *     _CAudioPump::OutputPumpWorkRoutine_::_1_::dtor$0 @ 0x140092C00 (_CAudioPump--OutputPumpWorkRoutine_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::DumpDeviceGraph_::_1_::dtor$0 @ 0x140093224 (_CSystemAudioDeviceSharedBase--DumpDeviceGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::SetGraphState_::_1_::dtor$0 @ 0x140093D2C (_CSystemAudioDeviceSharedBase--SetGraphState_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateExclusiveModeStream_::_1_::dtor$0 @ 0x14009645E (_CStreamGroup--CreateExclusiveModeStream_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
