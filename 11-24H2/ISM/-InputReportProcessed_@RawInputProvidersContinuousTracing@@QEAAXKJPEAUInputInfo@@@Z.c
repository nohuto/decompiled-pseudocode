/*
 * XREFs of ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x1800D6CF4
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x1800322A0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001DE4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U1@U2@U1@U2@U1@U1@U2@U1@U1@U2@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@43434334334343@Z @ 0x18000370C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U1@U2@U1@U2@U1@U1@U2@U1@U.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?Provider@RawInputProvidersContinuousTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D7EC4 (-Provider@RawInputProvidersContinuousTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall RawInputProvidersContinuousTracing::InputReportProcessed_(
        RawInputProvidersContinuousTracing *this,
        int a2,
        int a3,
        struct InputInfo *a4)
{
  const struct _tlgProvider_t *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  char v15; // [rsp+C0h] [rbp+7h] BYREF
  char v16; // [rsp+C1h] [rbp+8h] BYREF
  char v17; // [rsp+C2h] [rbp+9h] BYREF
  char v18; // [rsp+C3h] [rbp+Ah] BYREF
  int v19; // [rsp+C4h] [rbp+Bh] BYREF
  int v20; // [rsp+C8h] [rbp+Fh] BYREF
  int v21; // [rsp+CCh] [rbp+13h] BYREF
  int v22; // [rsp+D0h] [rbp+17h] BYREF
  int v23; // [rsp+D4h] [rbp+1Bh] BYREF
  int v24; // [rsp+D8h] [rbp+1Fh] BYREF
  int v25; // [rsp+DCh] [rbp+23h] BYREF
  int v26; // [rsp+E0h] [rbp+27h] BYREF
  int v27; // [rsp+E4h] [rbp+2Bh] BYREF
  int v28; // [rsp+E8h] [rbp+2Fh] BYREF
  int v29; // [rsp+ECh] [rbp+33h] BYREF
  _DWORD v30[8]; // [rsp+F0h] [rbp+37h] BYREF
  RawInputProvidersContinuousTracing *v31; // [rsp+120h] [rbp+67h] BYREF
  int v32; // [rsp+130h] [rbp+77h] BYREF
  char v33; // [rsp+138h] [rbp+7Fh] BYREF

  v31 = this;
  if ( a3 >= 0 )
  {
    v11 = RawInputProvidersContinuousTracing::Provider();
    if ( *(_DWORD *)v11 > 5u && tlgKeywordOn((__int64)v11, 2LL) )
    {
      LOBYTE(v32) = *((_BYTE *)a4 + 2369);
      v20 = *((_DWORD *)a4 + 589);
      LOBYTE(v31) = *((_BYTE *)a4 + 2368);
      v21 = *((_DWORD *)a4 + 575);
      v14 = *((_DWORD *)a4 + 585);
      v22 = *((_DWORD *)a4 + 574);
      v33 = *((_BYTE *)a4 + 2322);
      v23 = *((_DWORD *)a4 + 577);
      v24 = *((_DWORD *)a4 + 576);
      v15 = *((_BYTE *)a4 + 2324);
      v25 = *((_DWORD *)a4 + 578);
      v16 = *((_BYTE *)a4 + 2323);
      v26 = *((_DWORD *)a4 + 570);
      v17 = *((_BYTE *)a4 + 2256);
      v18 = *((_BYTE *)a4 + 2336);
      v27 = *((_DWORD *)a4 + 16);
      v28 = *((_DWORD *)a4 + 17);
      v29 = *((_DWORD *)a4 + 18);
      v19 = v14;
      v30[0] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v12,
        (__int64)&unk_1802128E0,
        v12,
        v13,
        (__int64)v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v26,
        (__int64)&v16,
        (__int64)&v25,
        (__int64)&v15,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v33,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v31,
        (__int64)&v20,
        (__int64)&v32,
        (__int64)&v19);
    }
  }
  else
  {
    v7 = RawInputProvidersContinuousTracing::Provider();
    if ( *(_DWORD *)v7 > 2u && tlgKeywordOn((__int64)v7, 2LL) )
    {
      v32 = a3;
      LODWORD(v31) = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (__int64)&unk_1802128A7,
        v9,
        v10,
        (__int64)&v31,
        (__int64)&v32);
    }
  }
}
