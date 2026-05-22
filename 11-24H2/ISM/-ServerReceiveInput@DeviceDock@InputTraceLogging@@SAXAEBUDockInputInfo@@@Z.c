/*
 * XREFs of ?ServerReceiveInput@DeviceDock@InputTraceLogging@@SAXAEBUDockInputInfo@@@Z @ 0x180181660
 * Callers:
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017FFF4 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U3@U3@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@55AEBU?$_tlgWrapperByVal@$00@@4444@Z @ 0x180008670 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWr.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::DeviceDock::ServerReceiveInput(const struct DockInputInfo *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  __int16 v6; // ax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  const char *v11; // rax
  _WORD v12[2]; // [rsp+80h] [rbp+27h] BYREF
  int v13; // [rsp+84h] [rbp+2Bh] BYREF
  int v14; // [rsp+88h] [rbp+2Fh] BYREF
  int v15; // [rsp+8Ch] [rbp+33h] BYREF
  int v16; // [rsp+90h] [rbp+37h] BYREF
  int v17; // [rsp+94h] [rbp+3Bh] BYREF
  const char *v18; // [rsp+98h] [rbp+3Fh] BYREF
  __int64 v19; // [rsp+A0h] [rbp+47h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+4Fh] BYREF
  char v21; // [rsp+C8h] [rbp+6Fh] BYREF
  __int16 v22; // [rsp+D0h] [rbp+77h] BYREF
  __int16 v23; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && tlgKeywordOn((__int64)v2, 512LL) )
  {
    v5 = *((_DWORD *)a1 + 20);
    v14 = *((_DWORD *)a1 + 19);
    v15 = *((_DWORD *)a1 + 18);
    v16 = *((_DWORD *)a1 + 17);
    v21 = *((_BYTE *)a1 + 64);
    v22 = *((_WORD *)a1 + 31);
    v6 = *((_WORD *)a1 + 30);
    v13 = v5;
    v7 = *((_DWORD *)a1 + 14);
    v23 = v6;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              v11 = "Chassis";
            else
              v11 = "UNKNOWN";
          }
          else
          {
            v11 = "NFCDevice";
          }
        }
        else
        {
          v11 = "Display";
        }
      }
      else
      {
        v11 = "HIDDevice";
      }
    }
    else
    {
      v11 = "Unspecified";
    }
    v18 = v11;
    v12[0] = *((_WORD *)a1 + 24);
    v19 = *((_QWORD *)a1 + 5);
    v17 = *((_DWORD *)a1 + 8);
    v20 = *((_QWORD *)a1 + 2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_180223FA8,
      v3,
      v4,
      (__int64)&v20,
      (__int64)&v17,
      (__int64)&v19,
      (__int64)v12,
      (const unsigned __int16 **)&v18,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
}
