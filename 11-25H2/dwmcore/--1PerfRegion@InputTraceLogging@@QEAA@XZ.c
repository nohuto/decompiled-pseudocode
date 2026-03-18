/*
 * XREFs of ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180135FAC
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x180134D80 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180135800 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1801AD450 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x1801AE108 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x18017E630 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::PerfRegion::~PerfRegion(InputTraceLogging::PerfRegion *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)this )
  {
    v2 = InputTraceLogging::Provider();
    if ( *(_DWORD *)v2 > 6u && (*((_BYTE *)v2 + 16) & 1) != 0 && (*((_QWORD *)v2 + 3) & 1LL) == *((_QWORD *)v2 + 3) )
    {
      v3 = *((_QWORD *)this + 6);
      v4 = *((_QWORD *)this + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (_DWORD)v2,
        (unsigned int)&unk_1803D5566,
        (_DWORD)this + 16,
        v3,
        (__int64)&v4);
    }
  }
}
