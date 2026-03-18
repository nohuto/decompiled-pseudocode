/*
 * XREFs of ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1400EF8C8
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140001008 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE.c)
 *     _tlgKeywordOn @ 0x14003E548 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1400EF9C8 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1400EFCEC (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1400EFED0 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(struct VIDMM_ALLOC **this, bool a2)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned __int16 *v6; // [rsp+30h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-20h] BYREF

  if ( *((_BYTE *)this + 24) && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this[1] + 64) <= 5 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_140081048 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140081048, 0x10000LL) )
      {
        v5 = *((_QWORD *)*this + 3);
        v6 = *(unsigned __int16 **)(v5 + 1928);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>>(
          v5,
          (__int64)&unk_140074EB3,
          (__int64)&ActivityId,
          v4,
          &v6);
      }
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation((VIDMM_COMMIT_TELEMETRY *)this, this[2], a2, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState((VIDMM_COMMIT_TELEMETRY *)this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      (VIDMM_COMMIT_TELEMETRY *)this,
      *((struct VIDMM_PROCESS_ADAPTER_INFO **)this[1] + 2),
      &ActivityId);
  }
}
