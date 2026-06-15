/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x180076298
 * Callers:
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x18015EC34 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::UpdateAuxiliaryStreamState_::_1_::dtor$2 @ 0x1801636F4 (_CSharedStreamGroupProxy--UpdateAuxiliaryStreamState_--_1_--dtor$2.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$4 @ 0x180163FB2 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$4.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$0 @ 0x18016410C (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$0.c)
 *     _CVADServer::GetAudioEffectsChangedWnfStateName_::_1_::dtor$0 @ 0x18016737C (_CVADServer--GetAudioEffectsChangedWnfStateName_--_1_--dtor$0.c)
 *     _CVADServer::SetAudioEffect_::_1_::dtor$0 @ 0x18016738E (_CVADServer--SetAudioEffect_--_1_--dtor$0.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x180167478 (AudioServerGetStreamVpoContext$dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
