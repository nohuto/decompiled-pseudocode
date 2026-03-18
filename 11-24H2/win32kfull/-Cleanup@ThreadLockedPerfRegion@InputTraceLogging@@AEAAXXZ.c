/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14026B784
 * Callers:
 *     ProcessHidRawInput @ 0x14004A480 (ProcessHidRawInput.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140092D78 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z @ 0x140271B60 (-_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x140203D08 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(void ***this, __int64 a2)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  void **v5; // rbx
  __int64 UserSessionState; // rax
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_140398B80 > 6 && tlgKeywordOn((__int64)&dword_140398B80, 1LL) )
  {
    v3 = (const GUID *)(*this + 1);
    v4 = (const GUID *)(*this)[5];
    v7 = **this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_140398B80,
      byte_140364571,
      v3,
      v4,
      &v7);
  }
  v5 = *this;
  UserSessionState = W32GetUserSessionState(this, a2);
  Win32FreeToPagedLookasideList(*(_QWORD *)(UserSessionState + 19400), v5);
}
