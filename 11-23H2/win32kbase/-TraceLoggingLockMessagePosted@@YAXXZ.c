/*
 * XREFs of ?TraceLoggingLockMessagePosted@@YAXXZ @ 0x1C00C46A4
 * Callers:
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00C4744 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall TraceLoggingLockMessagePosted(__int64 a1)
{
  _QWORD *v1; // r8
  void *ProcessImageFileName; // rax
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)dword_1C02882F8 > 5 && tlgKeywordOn((__int64)&dword_1C02882F8, 0x400000000000LL) )
  {
    v3 = 0x1000000LL;
    if ( v1 )
      ProcessImageFileName = (void *)PsGetProcessImageFileName(*v1);
    else
      ProcessImageFileName = &unk_1C0263738;
    v4 = (__int64)ProcessImageFileName;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      (int)&dword_1C02882F8,
      (__int64)&v4,
      (__int64)&v3);
  }
}
