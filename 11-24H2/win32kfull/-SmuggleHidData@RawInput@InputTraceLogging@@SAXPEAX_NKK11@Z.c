/*
 * XREFs of ?SmuggleHidData@RawInput@InputTraceLogging@@SAXPEAX_NKK11@Z @ 0x140224504
 * Callers:
 *     ?Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z @ 0x140271D8C (-Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z.c)
 *     ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140272310 (-TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x140003184 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@@-$_tlgWrit.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RawInput::SmuggleHidData(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        bool a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r10d
  int v10; // r11d
  const char *v11; // rax
  BOOL v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+54h] [rbp-1Ch] BYREF
  int v14; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+5Ch] [rbp-14h] BYREF
  const char *v16; // [rsp+60h] [rbp-10h] BYREF
  void *v17; // [rsp+68h] [rbp-8h] BYREF

  if ( (unsigned int)dword_140398B80 > 5 && tlgKeywordOn((__int64)&dword_140398B80, 0x40000LL) )
  {
    v11 = "Posted";
    v13 = v8;
    if ( !a6 )
      v11 = "Sent";
    v14 = v9;
    v16 = v11;
    v12 = a5;
    v15 = v10;
    v17 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_140398B80,
      (__int64)&unk_1403646E3,
      v7,
      v8,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      &v16);
  }
}
