/*
 * XREFs of ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x180019FA8
 * Callers:
 *     ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x180019A00 (-Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x18005F66C (--1CAudioStream@@UEAA@XZ.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18009D8FC (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     _StreamGroupParams::Clone_::_1_::dtor$3 @ 0x180169295 (_StreamGroupParams--Clone_--_1_--dtor$3.c)
 *     _DeriveStreamGroupParametersForStream_::_1_::dtor$4 @ 0x18016C876 (_DeriveStreamGroupParametersForStream_--_1_--dtor$4.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x18016D628 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$11.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$9 @ 0x18016D76C (_CAudioResourceManager--CreateStream_--_1_--dtor$9.c)
 * Callees:
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x180019FD8 (--1StreamGroupParams@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
