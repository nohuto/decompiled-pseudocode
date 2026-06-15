/*
 * XREFs of ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140004744
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005F80 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 * Callees:
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140003050 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000471C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamInstance(
        CPipeInstance *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IDeviceGraphObjectCache *a3,
        struct ICrossProcessMemory **a4,
        struct ICrossProcessEvent **a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  struct CProcessNode **Head; // rax
  struct CProcessNode *v11; // r14
  int v12; // ebx

  Head = (struct CProcessNode **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)this + 2);
  v11 = *Head;
  v12 = (*(__int64 (__fastcall **)(struct CProcessNode *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IDeviceGraphObjectCache *, _QWORD, _DWORD, struct ICrossProcessMemory **, struct ICrossProcessEvent **, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)*Head + 64LL))(
          *Head,
          a2,
          a3,
          (unsigned int)(int)((double)*((int *)this + 36) * 10000000.0 / (double)*(int *)(*((_QWORD *)a2 + 16) + 4LL)
                            + 0.5),
          *((_DWORD *)this + 36),
          a4,
          a5,
          a6);
  if ( v12 < 0 || (v12 = CPipeInstance::EngageSpatialAudioStreamProcessorAPO(this, v11, a2), v12 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamInstance", 0x453u, v12);
  }
  return (unsigned int)v12;
}
