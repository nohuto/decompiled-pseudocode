/*
 * XREFs of ?CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140040900
 * Callers:
 *     ?CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006C750 (-CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDevi.c)
 * Callees:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x1400409D8 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140041008 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CStreamProcessNode::CreateStreamInstance(
        CStreamProcessNode *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IDeviceGraphObjectCache *a3,
        __int64 a4,
        unsigned int a5,
        struct ICrossProcessMemory **a6,
        struct ICrossProcessEvent **a7,
        struct SYSTEM_AUDIO_STREAM *a8)
{
  int v9; // eax
  unsigned int v10; // ebx
  struct CEndpointInstance *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  if ( (*((_DWORD *)a2 + 34) & 0x800000) != 0 )
    v9 = CEndpointInstance::CreateSpatialStreamEndpointInstance(a2, a4, a5, a8, a6, a7, &v12);
  else
    v9 = CEndpointInstance::CreateStreamEndpointInstance(a2, a4, a5, a8, a6, a7, &v12);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *((_QWORD *)this + 4) = v12;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_c1831df7ab483f3d860eb31c248acfa4_Traceguids);
    }
    AudDGTraceLoggingErrorHelper("CStreamProcessNode::CreateStreamInstance", 0x1F8u, v10);
  }
  return v10;
}
