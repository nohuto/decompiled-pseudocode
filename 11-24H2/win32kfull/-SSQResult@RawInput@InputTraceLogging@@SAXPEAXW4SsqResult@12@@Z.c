/*
 * XREFs of ?SSQResult@RawInput@InputTraceLogging@@SAXPEAXW4SsqResult@12@@Z @ 0x140195AC8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x140195B84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall InputTraceLogging::RawInput::SSQResult(__int64 a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  const char *v6; // rax
  const char *v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_140398B80 > 5
    && (qword_140398B90 & 0x40000) != 0
    && (qword_140398B98 & 0x40000) == qword_140398B98 )
  {
    if ( a2 )
    {
      v3 = a2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            if ( v5 == 1 )
              v6 = "Returned";
            else
              v6 = "UNKNOWN";
          }
          else
          {
            v6 = "WrongThread";
          }
        }
        else
        {
          v6 = "Filter";
        }
      }
      else
      {
        v6 = "CrossThreadCheck";
      }
    }
    else
    {
      v6 = "NoSuitableWindow";
    }
    v7 = v6;
    v8 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (unsigned int)&dword_140398B80,
      (unsigned int)&unk_14036542D,
      a3,
      0x40000,
      (__int64)&v8,
      (__int64)&v7);
  }
}
