/*
 * XREFs of ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0003C9C
 * Callers:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     _lambda_7c683ce7e834e820b1e487ff164319c2_::_lambda_invoker_cdecl_ @ 0x1C0171FC0 (_lambda_7c683ce7e834e820b1e487ff164319c2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C005361C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00E091C (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U1@U?$_tlgWrapperByVal@$03@@U7@U7@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@883AEBU?$_tlgWrapperByVal@$03@@9933@Z @ 0x1C0172170 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0172F90 (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C017305C (-RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0173410 (-RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01734E0 (-RimDeviceMonitorMapping@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0173624 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevice(const struct RIMDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  const char *v9; // rax
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  const char *v16; // rax
  unsigned int v17; // ecx
  char v18; // [rsp+B0h] [rbp-80h] BYREF
  int v19; // [rsp+B4h] [rbp-7Ch] BYREF
  int v20; // [rsp+B8h] [rbp-78h] BYREF
  int v21; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+100h] [rbp-30h] BYREF
  __int64 v31; // [rsp+108h] [rbp-28h] BYREF
  __int64 v32; // [rsp+110h] [rbp-20h] BYREF
  __int64 v33; // [rsp+118h] [rbp-18h] BYREF
  __int64 v34; // [rsp+140h] [rbp+10h] BYREF
  __int64 v35; // [rsp+148h] [rbp+18h] BYREF

  if ( (unsigned __int8)InputTraceLogging::Enabled(0LL, a2, a3, (unsigned int)a2) )
  {
    if ( (unsigned int)dword_1C0289810 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 256LL) )
    {
      v5 = *((_DWORD *)a1 + 534);
      v6 = v4 - *((_QWORD *)a1 + 9);
      v7 = v4 - *((_QWORD *)a1 + 8);
      v22 = v6;
      v19 = *((_DWORD *)a1 + 38);
      v20 = *((_DWORD *)a1 + 68);
      v21 = *((_DWORD *)a1 + 72);
      v24 = *((_QWORD *)a1 + 31);
      LOBYTE(v34) = *((_BYTE *)a1 + 206);
      LOBYTE(v35) = *((_BYTE *)a1 + 205);
      v18 = *((_BYTE *)a1 + 204);
      v25 = *((_QWORD *)a1 + 24);
      v26 = (__int64)a1 + 2140;
      v27 = (__int64)a1 + 2120;
      v23 = v7;
      if ( v5 )
      {
        v8 = v5 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
            v9 = "Unknown";
          else
            v9 = "UNKNOWN";
        }
        else
        {
          v9 = "External";
        }
      }
      else
      {
        v9 = "Integrated";
      }
      v10 = *((unsigned int *)a1 + 330);
      v28 = (__int64)v9;
      v29 = (__int64)a1 + 208;
      v30 = InputTraceLogging::InputModeToString(v10);
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              if ( v15 == 1 )
                v16 = "Reset";
              else
                v16 = (const char *)&unk_1C0263738;
            }
            else
            {
              v16 = "Destroyed";
            }
          }
          else
          {
            v16 = "Closed";
          }
        }
        else
        {
          v16 = "Opened";
        }
      }
      else
      {
        v16 = "Created";
      }
      v17 = *((unsigned __int8 *)a1 + 48);
      v31 = (__int64)v16;
      v32 = (__int64)InputTraceLogging::RimDevTypeToString(v17);
      v33 = (__int64)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (int)&dword_1C0289810,
        (int)&dword_1C025804D,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v18,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v24,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v23,
        (__int64)&v22);
    }
    InputTraceLogging::RIM::RimDeviceFlags(a1);
    if ( (*((_DWORD *)a1 + 50) & 0x80u) == 0 )
    {
      if ( *((_BYTE *)a1 + 48) == 2 )
        InputTraceLogging::RIM::RimDeviceHidData(a1);
    }
    else
    {
      InputTraceLogging::RIM::RimDevicePointerData(a1);
    }
    if ( *((_DWORD *)a1 + 334) )
      InputTraceLogging::RIM::RimDeviceMonitorMapping(a1);
  }
}
