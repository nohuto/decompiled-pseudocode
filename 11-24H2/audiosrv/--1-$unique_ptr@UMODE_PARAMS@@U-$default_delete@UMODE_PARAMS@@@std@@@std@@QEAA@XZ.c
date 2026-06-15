/*
 * XREFs of ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x18001A0EC
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x180019640 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x18005F66C (--1CAudioStream@@UEAA@XZ.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BD114 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$9 @ 0x18016D604 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$9.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$10 @ 0x18016D77E (_CAudioResourceManager--CreateStream_--_1_--dtor$10.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$2 @ 0x18016DA1F (_InitializeStreamAndModeDescriptors_--_1_--dtor$2.c)
 * Callees:
 *     ??1MODE_PARAMS@@QEAA@XZ @ 0x18001A11C (--1MODE_PARAMS@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>(MODE_PARAMS **a1)
{
  MODE_PARAMS *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    MODE_PARAMS::~MODE_PARAMS(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x10);
  }
}
