/*
 * XREFs of ?RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z @ 0x1403363A0
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x14015FE28 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapSz@G@@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapSz@G@@644@Z @ 0x1400070C4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U2@.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ?CaptureLiveDumpWithFontFiles@UmfdHostLifeTimeManager@@SAXPEAUExtendedContext@1@@Z @ 0x140336144 (-CaptureLiveDumpWithFontFiles@UmfdHostLifeTimeManager@@SAXPEAUExtendedContext@1@@Z.c)
 *     ?SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z @ 0x14033EA0C (-SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14033FF28 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall UmfdHostLifeTimeManager::RecordUnhandledException(const struct FontDriverDdiRequest *a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  const wchar_t *v10; // rdi
  wchar_t *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+80h] [rbp-19h] BYREF
  int v16; // [rsp+88h] [rbp-11h]
  unsigned int v17; // [rsp+8Ch] [rbp-Dh] BYREF
  const wchar_t *v18; // [rsp+90h] [rbp-9h]
  const wchar_t *v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A4h] [rbp+Bh]
  int v22; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 v23; // [rsp+ACh] [rbp+13h]
  unsigned int v24; // [rsp+B0h] [rbp+17h] BYREF
  int v25; // [rsp+B4h] [rbp+1Bh] BYREF
  const wchar_t *v26; // [rsp+B8h] [rbp+1Fh] BYREF
  const wchar_t *v27; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v29; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v30[3]; // [rsp+D8h] [rbp+3Fh] BYREF
  char v31; // [rsp+100h] [rbp+67h] BYREF
  int v32; // [rsp+108h] [rbp+6Fh]
  int v33; // [rsp+110h] [rbp+77h]
  int v34; // [rsp+118h] [rbp+7Fh] BYREF

  if ( !a1 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("pRequest is null");
    return;
  }
  v15 = 0LL;
  v16 = 0;
  v20 = 0;
  v18 = &pszFormat;
  v19 = &pszFormat;
  if ( (*(unsigned __int8 (__fastcall **)(const struct FontDriverDdiRequest *, unsigned int *))(*(_QWORD *)a1 + 24LL))(
         a1,
         &v17) )
  {
    UmfdReliabilityManager::SetFontAsUnreliable(v17);
  }
  v4 = *(_QWORD *)(W32GetSessionState(v3, v2) + 96);
  ++*(_DWORD *)(v4 + 24284);
  v5 = v4 + 4872;
  if ( *(_DWORD *)(v5 + 19408) && !*(_BYTE *)(v5 + 19419) && *(_DWORD *)(v5 + 19412) >= *(_DWORD *)(v5 + 19408) )
    *(_BYTE *)(v5 + 19419) = 1;
  v22 = (**(__int64 (__fastcall ***)(const struct FontDriverDdiRequest *))a1)(a1);
  v21 = *((_DWORD *)a1 + 2);
  v6 = (*(__int64 (__fastcall **)(const struct FontDriverDdiRequest *))(*(_QWORD *)a1 + 8LL))(a1);
  if ( v6 && (v7 = *(_QWORD *)(v6 + 8)) != 0 )
  {
    v18 = (const wchar_t *)(*(_QWORD *)(*(_QWORD *)(v7 + 224) + 32LL)
                          + *(int *)(*(_QWORD *)(*(_QWORD *)(v7 + 224) + 32LL) + 8LL));
    v20 = *(_DWORD *)(v7 + 144);
    v8 = *(_QWORD *)(v7 + 208);
    v15 = v8;
    v9 = *(_DWORD *)(v7 + 36);
  }
  else
  {
    if ( v21 != 4 )
    {
      v8 = v15;
      goto LABEL_16;
    }
    v8 = *((_QWORD *)a1 + 6);
    v9 = *((_DWORD *)a1 + 10);
    v15 = v8;
  }
  v16 = v9;
LABEL_16:
  if ( v8 )
  {
    v10 = *(const wchar_t **)(*(_QWORD *)v8 + 80LL);
    v11 = wcsrchr(v10, 0x5Cu);
    if ( v11 )
      v19 = v11 + 1;
    else
      v19 = v10;
    v23 = *(_BYTE *)(*(_QWORD *)v15 + 45LL);
    UmfdHostLifeTimeManager::CaptureLiveDumpWithFontFiles((struct UmfdHostLifeTimeManager::ExtendedContext *)&v15);
  }
  if ( (unsigned int)dword_140398BB8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL) )
    {
      v32 = v23;
      v33 = v20;
      v26 = v19;
      v27 = v18;
      v31 = v22;
      v24 = v17;
      v25 = *(unsigned __int8 *)(v5 + 19419);
      v28 = *(unsigned int *)(v5 + 19408);
      v29 = *(unsigned int *)(v5 + 19412);
      v34 = v14;
      v30[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        (__int64)&unk_14036A316,
        v13,
        v14,
        (__int64)v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v31,
        (__int64)&v34,
        &v27,
        &v26);
    }
  }
}
