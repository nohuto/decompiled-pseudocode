/*
 * XREFs of ?GetRawInputData@RawInput@InputTraceLogging@@SAXPEAXIPEAUtagHIDDATA@@@Z @ 0x140183E8C
 * Callers:
 *     ?GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z @ 0x140182284 (-GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003A40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1400043A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@44@Z @ 0x14000443C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U2@U2@@-$_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14011917C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U3@U3@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@55444@Z @ 0x14018414C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U3@U3@U2@U2@.c)
 */

void __fastcall InputTraceLogging::RawInput::GetRawInputData(void *a1, int a2, struct tagHIDDATA *a3)
{
  __int64 v5; // r8
  int v6; // r10d
  int v7; // r11d
  __int64 v8; // r9
  int v9; // r11d
  __int64 v10; // r9
  int v11; // r11d
  int v12; // r10d
  __int16 v13; // [rsp+60h] [rbp-20h] BYREF
  __int16 v14; // [rsp+62h] [rbp-1Eh] BYREF
  int v15; // [rsp+64h] [rbp-1Ch] BYREF
  int v16; // [rsp+68h] [rbp-18h] BYREF
  int v17; // [rsp+6Ch] [rbp-14h] BYREF
  void *v18; // [rsp+70h] [rbp-10h] BYREF
  void *v19; // [rsp+78h] [rbp-8h] BYREF
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  if ( dword_140398B80 )
  {
    if ( (qword_140398B90 & 0x40000) != 0 )
    {
      v5 = qword_140398B98 & 0x40000;
      if ( (qword_140398B98 & 0x40000) == qword_140398B98 )
      {
        if ( a3 )
        {
          v6 = *((_DWORD *)a3 + 14);
          if ( v6 )
          {
            if ( v6 == 1 )
            {
              if ( (unsigned int)dword_140398B80 > 4 && tlgKeywordOn((__int64)&dword_140398B80, 0x40000LL) )
              {
                LODWORD(v18) = *(_DWORD *)(v8 + 92);
                v17 = *(_DWORD *)(v8 + 88);
                LOWORD(v20) = *(_WORD *)(v8 + 82);
                v16 = v9;
                v19 = a1;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_140398B80,
                  (__int64)&unk_140366ECA);
              }
            }
            else if ( v6 == 2 )
            {
              if ( (unsigned int)dword_140398B80 > 4 && tlgKeywordOn((__int64)&dword_140398B80, 0x40000LL) )
              {
                v20 = *(_DWORD *)(v10 + 84);
                LODWORD(v18) = *(_DWORD *)(v10 + 80);
                v17 = v11;
                v19 = a1;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_140398B80,
                  (__int64)&unk_140366DB1);
              }
            }
            else if ( (unsigned int)dword_140398B80 > 4 && tlgKeywordOn((__int64)&dword_140398B80, 0x40000LL) )
            {
              v20 = v12;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (__int64)&dword_140398B80,
                (__int64)&unk_140366DFD);
            }
          }
          else if ( (unsigned int)dword_140398B80 > 4 && v5 == qword_140398B98 )
          {
            v15 = *((_DWORD *)a3 + 25);
            v16 = *((_DWORD *)a3 + 24);
            v17 = *((_DWORD *)a3 + 23);
            LOWORD(v20) = *((_WORD *)a3 + 43);
            v13 = *((_WORD *)a3 + 42);
            v14 = *((_WORD *)a3 + 40);
            LODWORD(v18) = a2;
            v19 = a1;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_140398B80,
              (unsigned int)&unk_140366E46,
              v5,
              (_DWORD)a3,
              (__int64)&v19,
              (__int64)&v18,
              (__int64)&v14,
              (__int64)&v13,
              (__int64)&v20,
              (__int64)&v17,
              (__int64)&v16,
              (__int64)&v15);
          }
        }
        else if ( (unsigned int)dword_140398B80 > 4 && tlgKeywordOn((__int64)&dword_140398B80, 0x40000LL) )
        {
          v20 = v7;
          v18 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (__int64)&dword_140398B80,
            (__int64)&unk_140366D6C);
        }
      }
    }
  }
}
