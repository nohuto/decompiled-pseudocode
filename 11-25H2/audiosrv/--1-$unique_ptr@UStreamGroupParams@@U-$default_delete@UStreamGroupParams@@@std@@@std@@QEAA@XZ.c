/*
 * XREFs of ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x180027248
 * Callers:
 *     ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x180026CA0 (-Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x18006D94C (--1CAudioStream@@UEAA@XZ.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180083E1C (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800A12DC (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B88DC (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     _StreamGroupParams::Clone_::_1_::dtor$3 @ 0x180160111 (_StreamGroupParams--Clone_--_1_--dtor$3.c)
 *     _BuildDeviceGraphForStream_::_1_::dtor$0 @ 0x1801631B5 (_BuildDeviceGraphForStream_--_1_--dtor$0.c)
 *     _DeriveStreamGroupParametersForStream_::_1_::dtor$4 @ 0x180163582 (_DeriveStreamGroupParametersForStream_--_1_--dtor$4.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x1801641E4 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$11.c)
 * Callees:
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x180027278 (--1StreamGroupParams@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(StreamGroupParams **a1)
{
  StreamGroupParams *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    StreamGroupParams::~StreamGroupParams(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x60);
  }
}
