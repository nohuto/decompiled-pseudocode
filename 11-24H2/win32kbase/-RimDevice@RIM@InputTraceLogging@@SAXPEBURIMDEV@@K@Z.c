/*
 * XREFs of ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017A974
 * Callers:
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     _lambda_c51e6e2186cc259f124bbf87b89b0c07_::_lambda_invoker_cdecl_ @ 0x1401D28E0 (_lambda_c51e6e2186cc259f124bbf87b89b0c07_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U2@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U1@U?$_tlgWrapperByVal@$03@@U7@U7@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@443AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@883AEBU?$_tlgWrapperByVal@$03@@9933@Z @ 0x14000406C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U2@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING@@.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140093B30 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400AFDD8 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400B16FC (-RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400D10C0 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1400D69B8 (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x140156AFC (-RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D298C (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D2CF4 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevice(const struct RIMDEV *a1)
{
  __int64 v2; // r9
  unsigned int v3; // r10d
  unsigned __int128 v4; // rax
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ecx
  const char *v10; // rax
  int v11; // ecx
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  const char *v18; // rax
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // r9d
  char v25[4]; // [rsp+C0h] [rbp-80h] BYREF
  int v26; // [rsp+C4h] [rbp-7Ch] BYREF
  int v27; // [rsp+C8h] [rbp-78h] BYREF
  int v28; // [rsp+CCh] [rbp-74h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-58h] BYREF
  const WCHAR *v33; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-48h] BYREF
  const char *v35; // [rsp+100h] [rbp-40h] BYREF
  unsigned __int16 *v36; // [rsp+108h] [rbp-38h] BYREF
  __int64 v37; // [rsp+110h] [rbp-30h] BYREF
  const char *v38; // [rsp+118h] [rbp-28h] BYREF
  const char *v39; // [rsp+120h] [rbp-20h] BYREF
  const char *v40; // [rsp+128h] [rbp-18h] BYREF
  const struct RIMDEV *v41; // [rsp+130h] [rbp-10h] BYREF
  char v42; // [rsp+160h] [rbp+20h] BYREF
  char v43; // [rsp+168h] [rbp+28h] BYREF

  if ( InputTraceLogging::Enabled(256, 0) )
  {
    v4 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    v5 = *((_QWORD *)&v4 + 1);
    if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, v3) )
    {
      v6 = *((_DWORD *)a1 + 534);
      v7 = v5 - *((_QWORD *)a1 + 9);
      v8 = v5 - *((_QWORD *)a1 + 8);
      v29 = v7;
      v26 = *((_DWORD *)a1 + 34);
      v27 = *((_DWORD *)a1 + 64);
      v28 = *((_DWORD *)a1 + 68);
      v31 = *((_QWORD *)a1 + 29);
      v42 = *((_BYTE *)a1 + 190);
      v43 = *((_BYTE *)a1 + 189);
      v25[0] = *((_BYTE *)a1 + 188);
      v32 = *((_QWORD *)a1 + 22);
      v33 = (const WCHAR *)((char *)a1 + 2140);
      v34 = (__int64)a1 + 2120;
      v30 = v8;
      if ( v6 )
      {
        v9 = v6 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v10 = "Unknown";
          else
            v10 = "UNKNOWN";
        }
        else
        {
          v10 = "External";
        }
      }
      else
      {
        v10 = "Integrated";
      }
      v11 = *((_DWORD *)a1 + 326);
      v35 = v10;
      v36 = (unsigned __int16 *)((char *)a1 + 192);
      v37 = *((_QWORD *)a1 + 164);
      v38 = InputTraceLogging::InputModeToString(v11);
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                if ( v17 == 1 )
                  v18 = "QueryRemove";
                else
                  v18 = (const char *)&unk_14025D828;
              }
              else
              {
                v18 = "Reset";
              }
            }
            else
            {
              v18 = "Destroyed";
            }
          }
          else
          {
            v18 = "Closed";
          }
        }
        else
        {
          v18 = "Opened";
        }
      }
      else
      {
        v18 = "Created";
      }
      v19 = *((_DWORD *)a1 + 12);
      v39 = v18;
      v40 = InputTraceLogging::RimDevTypeToString(v19);
      v41 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)&dword_14029AE30,
        (__int64)&unk_1402776BC,
        v20,
        v21,
        (__int64)&v41,
        (void **)&v40,
        (void **)&v39,
        (void **)&v38,
        (__int64)&v37,
        &v36,
        (void **)&v35,
        &v34,
        &v33,
        (__int64)&v32,
        (__int64)v25,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v31,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v30,
        (__int64)&v29);
    }
    InputTraceLogging::RIM::RimDeviceFlags(a1, *((__int64 *)&v4 + 1), v5, v2);
    if ( (*((_DWORD *)a1 + 46) & 0x80u) == 0 )
    {
      if ( *((_DWORD *)a1 + 12) == 2 )
        InputTraceLogging::RIM::RimDeviceHidData(a1, v22, v23, v24);
    }
    else
    {
      InputTraceLogging::RIM::RimDevicePointerData(a1, v22, v23, v24);
    }
    if ( *((_DWORD *)a1 + 334) )
      InputTraceLogging::RIM::RimDeviceMonitorMapping(a1);
    InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
  }
}
