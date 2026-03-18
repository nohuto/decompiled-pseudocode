/*
 * XREFs of ?SkipBackgroundListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@PEAXW4WhyBgInputSkipped@12@@Z @ 0x1401A2018
 * Callers:
 *     EditionPostRawMouseInputMessage @ 0x140230980 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1402102DC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate.c)
 */

void __fastcall InputTraceLogging::RawInput::SkipBackgroundListener(__int64 a1, __int64 a2, int a3, int a4)
{
  const char *v4; // rax
  __int64 v5; // rax
  const char *v6; // [rsp+40h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp-10h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_140398B80 > 5
    && (qword_140398B90 & 0x40000) != 0
    && (qword_140398B98 & 0x40000) == qword_140398B98 )
  {
    if ( a3 )
    {
      if ( --a3 )
      {
        if ( --a3 )
        {
          if ( --a3 )
          {
            if ( a3 == 1 )
              v4 = "Throttled";
            else
              v4 = "UNKNOWN";
          }
          else
          {
            v4 = "NotExclusive";
          }
        }
        else
        {
          v4 = "UIPI";
        }
      }
      else
      {
        v4 = "OtherDesktop";
      }
    }
    else
    {
      v4 = "BadTarget";
    }
    v6 = v4;
    v5 = *(_QWORD *)(a1 + 104);
    v7 = a2;
    v8 = *(_DWORD *)(v5 + 56);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (unsigned int)&dword_140398B80,
      (unsigned int)&unk_140364CBF,
      a3,
      a4,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6);
  }
}
