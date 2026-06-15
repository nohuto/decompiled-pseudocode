/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x140043094
 * Callers:
 *     _CAudioPump::InputPumpWorkRoutine_::_1_::dtor$0 @ 0x140093180 (_CAudioPump--InputPumpWorkRoutine_--_1_--dtor$0.c)
 *     _CAudioPump::OutputPumpWorkRoutine_::_1_::dtor$0 @ 0x1400931A0 (_CAudioPump--OutputPumpWorkRoutine_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::DumpDeviceGraph_::_1_::dtor$0 @ 0x1400937C4 (_CSystemAudioDeviceSharedBase--DumpDeviceGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::SetGraphState_::_1_::dtor$0 @ 0x1400942BA (_CSystemAudioDeviceSharedBase--SetGraphState_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateExclusiveModeStream_::_1_::dtor$0 @ 0x1400969DA (_CStreamGroup--CreateExclusiveModeStream_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
