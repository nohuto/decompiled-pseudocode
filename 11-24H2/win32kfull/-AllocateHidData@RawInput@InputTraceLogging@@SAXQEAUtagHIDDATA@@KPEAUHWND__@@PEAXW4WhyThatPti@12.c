/*
 * XREFs of ?AllocateHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@KPEAUHWND__@@PEAXW4WhyThatPti@12@@Z @ 0x140198604
 * Callers:
 *     AllocateHidData @ 0x14012F38C (AllocateHidData.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@D@@@Z @ 0x1401986D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 */

void __fastcall InputTraceLogging::RawInput::AllocateHidData(_QWORD *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  const char *v5; // rax
  int v6; // [rsp+50h] [rbp-38h] BYREF
  const char *v7; // [rsp+58h] [rbp-30h] BYREF
  __int64 v8; // [rsp+60h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+70h] [rbp-18h] BYREF

  if ( (unsigned int)dword_140398B80 > 5
    && (qword_140398B90 & 0x40000) != 0
    && (qword_140398B98 & 0x40000) == qword_140398B98 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
        v5 = "Default";
      else
        v5 = "UNKNOWN";
    }
    else
    {
      v5 = "Explicit";
    }
    v7 = v5;
    v10[0] = *a1;
    v6 = a2;
    v8 = a4;
    v9 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (unsigned int)&dword_140398B80,
      (unsigned int)&unk_14036464A,
      a3,
      a4,
      (__int64)v10,
      (__int64)&v6,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
}
