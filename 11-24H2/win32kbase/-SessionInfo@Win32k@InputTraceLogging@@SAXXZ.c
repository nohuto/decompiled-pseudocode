/*
 * XREFs of ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1401B40FC
 * Callers:
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B3FE0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140003248 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void InputTraceLogging::Win32k::SessionInfo(void)
{
  __int64 v0; // rcx
  __int64 UserSessionState; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  const char *v4; // rax
  union _LARGE_INTEGER v5; // [rsp+40h] [rbp+8h] BYREF
  const char *v6; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 2LL) )
  {
    v5 = gliQpcFreq;
    UserSessionState = W32GetUserSessionState(v0);
    if ( *(_WORD *)(UserSessionState + 69008) )
    {
      if ( *(_WORD *)(UserSessionState + 69008) == 1 )
      {
        v4 = "ICA";
      }
      else if ( *(_WORD *)(UserSessionState + 69008) == 2 )
      {
        v4 = "RDP";
      }
      else if ( *(unsigned __int16 *)(UserSessionState + 69008) == 0xFFFF )
      {
        v4 = "Disconnected";
      }
      else
      {
        v4 = "UNKNOWN";
      }
    }
    else
    {
      v4 = "Console";
    }
    v6 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_1402755C3,
      v2,
      v3,
      (void **)&v6,
      (__int64)&v5);
  }
}
