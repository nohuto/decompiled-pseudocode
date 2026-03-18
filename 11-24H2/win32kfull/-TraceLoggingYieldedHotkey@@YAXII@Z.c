/*
 * XREFs of ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1402B6A00
 * Callers:
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140289078 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x140004BF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

void __fastcall TraceLoggingYieldedHotkey(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r10
  void *ProcessImageFileName; // rax
  void *v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)dword_140398BB8 > 5 && tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL) )
  {
    if ( v7 )
      ProcessImageFileName = (void *)PsGetProcessImageFileName(*v7);
    else
      ProcessImageFileName = &unk_14034ED21;
    v9 = ProcessImageFileName;
    v11 = a2;
    v12 = v3;
    v10 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v4,
      (__int64)&unk_140367B2C,
      v5,
      v6,
      (__int64)&v10,
      (__int64)&v12,
      (__int64)&v11,
      &v9);
  }
}
