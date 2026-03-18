/*
 * XREFs of ?WindowFromPoint@Win32k@InputTraceLogging@@SAXAEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1400405F0
 * Callers:
 *     xxxWindowFromPoint @ 0x140040384 (xxxWindowFromPoint.c)
 * Callees:
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x140090C9C (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@33334AEBU?$_tlgWrapSz@D@@@Z @ 0x140201E54 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U-$_tlgWrapSz@D@@@-$_tlgWri.c)
 */

void __fastcall InputTraceLogging::Win32k::WindowFromPoint(const struct tagPOINT *a1, struct tagWND *a2)
{
  __int64 WindowDetails; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm1
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+70h] [rbp-29h] BYREF
  int v10; // [rsp+74h] [rbp-25h] BYREF
  LONG y; // [rsp+78h] [rbp-21h] BYREF
  LONG x; // [rsp+7Ch] [rbp-1Dh] BYREF
  __int128 v13; // [rsp+80h] [rbp-19h] BYREF
  __int64 v14; // [rsp+90h] [rbp-9h] BYREF
  __int128 v15; // [rsp+98h] [rbp-1h]
  __int128 v16; // [rsp+A8h] [rbp+Fh]
  __int64 v17; // [rsp+B8h] [rbp+1Fh]
  _BYTE v18[48]; // [rsp+C0h] [rbp+27h] BYREF
  int v19; // [rsp+110h] [rbp+77h] BYREF
  int v20; // [rsp+118h] [rbp+7Fh] BYREF

  if ( dword_140398B80 )
  {
    if ( (qword_140398B90 & 2) != 0 && (qword_140398B98 & 2) == qword_140398B98 )
    {
      WindowDetails = InputTraceLogging::GetWindowDetails(v18, a2);
      v6 = *(_OWORD *)(WindowDetails + 16);
      v15 = *(_OWORD *)WindowDetails;
      v17 = *(_QWORD *)(WindowDetails + 32);
      v16 = v6;
      if ( (unsigned int)dword_140398B80 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_140398B80, 2LL, v4, v5) )
        {
          v13 = v15;
          v19 = HIDWORD(v17);
          v20 = v17;
          v9 = HIDWORD(v16);
          v14 = v16;
          y = a1->y;
          x = a1->x;
          v10 = DWORD2(v16);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (unsigned int)&dword_140398B80,
            (unsigned int)&unk_140367189,
            v7,
            v8,
            (__int64)&x,
            (__int64)&y,
            (__int64)&v14,
            (__int64)&v10,
            (__int64)&v9,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v13 + 8,
            (__int64)&v13);
        }
      }
    }
  }
}
