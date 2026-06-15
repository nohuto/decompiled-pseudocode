/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x180066344
 * Callers:
 *     _AudioEffectsWatcher::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180169BAD (_AudioEffectsWatcher--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x18016BE72 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::UpdateAuxiliaryStreamState_::_1_::dtor$2 @ 0x18016CA47 (_CSharedStreamGroupProxy--UpdateAuxiliaryStreamState_--_1_--dtor$2.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$4 @ 0x18016D348 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$4.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$0 @ 0x18016D550 (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$0.c)
 *     _CVADServer::GetAudioEffectsChangedWnfStateName_::_1_::dtor$0 @ 0x180170803 (_CVADServer--GetAudioEffectsChangedWnfStateName_--_1_--dtor$0.c)
 *     _CVADServer::SetAudioEffect_::_1_::dtor$0 @ 0x180170869 (_CVADServer--SetAudioEffect_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
