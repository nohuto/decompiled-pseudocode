/*
 * XREFs of WdipSemLoadNextScenario @ 0x1407A1720
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WdipSemFastFree @ 0x1406F75E0 (WdipSemFastFree.c)
 *     WdipSemLoadNextContextProvider @ 0x1407A1160 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A1410 (WdipSemLoadNextEndEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1407A2EEC (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemOpenRegistryKey @ 0x1407A3108 (WdipSemOpenRegistryKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1407A319C (WdipSemQueryValueFromRegistry.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     RtlUnicodeStringToInteger @ 0x14097E410 (RtlUnicodeStringToInteger.c)
 *     WdipSemFastAllocate @ 0x140A3FB7C (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemLoadNextScenario(HANDLE KeyHandle, ULONG Index, GUID *Guid)
{
  __int64 v6; // rsi
  char v7; // r14
  NTSTATUS v8; // ebx
  unsigned int i; // edx
  unsigned __int64 v10; // rax
  WCHAR v11; // cx
  __int64 v12; // rdx
  int v13; // r8d
  WCHAR *v14; // r9
  WCHAR v15; // cx
  int v17; // eax
  char v18; // cl
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  ULONG v22; // r15d
  __int64 v23; // rax
  int NextEndEvent; // eax
  __int64 v25; // rax
  const EVENT_DESCRIPTOR *v26; // rcx
  ULONG v27; // r14d
  int NextContextProvider; // eax
  __int64 Data1; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandlea; // [rsp+50h] [rbp-B0h]
  HANDLE v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _BYTE KeyInformation[12]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+84h] [rbp-7Ch]
  WCHAR v41[68]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[64]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR v43[64]; // [rsp+190h] [rbp+90h] BYREF

  Handle = 0LL;
  KeyHandlea = 0LL;
  v36 = 0LL;
  ResultLength = 0;
  v6 = 0LL;
  Value = 0;
  v33 = 0;
  v34 = 0;
  v37 = 0LL;
  v7 = 0;
  DestinationString = 0LL;
  if ( !KeyHandle || !Guid )
    return (unsigned int)-1073741811;
  memset_0(KeyInformation, 0, 0x98uLL);
  v8 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
  if ( v8 >= 0 )
  {
    if ( v40 >= 0x80 )
    {
      v8 = -2147483643;
      goto LABEL_17;
    }
    v41[(unsigned __int64)v40 >> 1] = 0;
    memset_0(SourceString, 0, sizeof(SourceString));
    memset_0(v43, 0, sizeof(v43));
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x40 )
        goto LABEL_16;
      v10 = i;
      v11 = v41[v10];
      if ( v11 == 59 )
        break;
      SourceString[i] = v11;
    }
    if ( v10 >= 64 )
      _report_rangecheckfailure();
    v12 = i + 1;
    SourceString[v10] = 0;
    v13 = 0;
    if ( (unsigned int)v12 < 0x40 )
    {
      v14 = &v41[v12];
      while ( 1 )
      {
        v15 = *v14;
        v43[v13] = *v14;
        if ( !v15 )
          break;
        LODWORD(v12) = v12 + 1;
        ++v14;
        ++v13;
        if ( (unsigned int)v12 >= 0x40 )
          goto LABEL_16;
      }
      if ( v13 == 1 && v43[0] == 42 )
        v7 = 1;
      RtlInitUnicodeString(&DestinationString, SourceString);
      v8 = RtlGUIDFromString(&DestinationString, Guid);
      if ( v8 < 0 )
        goto LABEL_17;
      if ( !v7 )
      {
        RtlInitUnicodeString(&DestinationString, v43);
        v8 = RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
        if ( v8 < 0 )
          goto LABEL_17;
        LOWORD(Guid[1].Data1) = Value;
      }
      v8 = WdipSemOpenRegistryKey(v41);
      if ( v8 < 0 )
        goto LABEL_17;
      v17 = WdipSemQueryValueFromRegistry(Handle, &v33, (__int64)&ResultLength);
      v8 = v17;
      if ( v17 >= 0 )
      {
        v18 = v33;
        if ( !v33 )
          v18 = -1;
        BYTE2(Guid[1].Data1) = v18;
      }
      else
      {
        if ( v17 != -1073741772 )
          goto LABEL_17;
        BYTE2(Guid[1].Data1) = -1;
      }
      v19 = WdipSemQueryValueFromRegistry(Handle, &v37, (__int64)&ResultLength);
      v8 = v19;
      if ( v19 >= 0 )
      {
        v20 = v37;
        if ( !v37 )
          v20 = -1LL;
        *(_QWORD *)Guid[1].Data4 = v20;
      }
      else
      {
        if ( v19 != -1073741772 )
          goto LABEL_17;
        *(_QWORD *)Guid[1].Data4 = -1LL;
      }
      v21 = WdipSemQueryValueFromRegistry(Handle, &v34, (__int64)&ResultLength);
      v8 = v21;
      if ( v21 >= 0 )
      {
        *(_DWORD *)&Guid[2].Data2 = v34;
      }
      else
      {
        if ( v21 != -1073741772 )
          goto LABEL_17;
        *(_DWORD *)&Guid[2].Data2 = 0;
      }
      if ( (int)WdipSemOpenRegistryKey(L"EndEvents") < 0 )
      {
LABEL_51:
        v8 = 0;
        goto LABEL_17;
      }
      v22 = 0;
      while ( 1 )
      {
        v23 = WdipSemFastAllocate(0LL, 48LL);
        v6 = v23;
        if ( !v23 )
        {
LABEL_69:
          v8 = -1073741670;
          goto LABEL_17;
        }
        *(_OWORD *)v23 = 0LL;
        *(_OWORD *)(v23 + 16) = 0LL;
        *(_OWORD *)(v23 + 32) = 0LL;
        NextEndEvent = WdipSemLoadNextEndEvent(v36, v22++, (GUID *)v23);
        v8 = NextEndEvent;
        if ( NextEndEvent == -2147483622 )
          break;
        if ( NextEndEvent < 0 )
          goto LABEL_17;
        v25 = *(unsigned int *)&Guid[3].Data2;
        if ( (unsigned int)v25 >= 0x10 )
        {
          if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_SCENARIO_END_EVENT_MAX) )
          {
            v26 = &WDI_SEM_EVENT_INIT_SCENARIO_END_EVENT_MAX;
LABEL_60:
            WdipSemWriteScenarioLimitExceededEvent(v26, Guid, LOWORD(Guid[1].Data1));
          }
          goto LABEL_16;
        }
        *(_QWORD *)&Guid[65].Data4[8 * v25] = v6;
        ++*(_DWORD *)&Guid[3].Data2;
      }
      if ( !*(_DWORD *)&Guid[3].Data2 )
        goto LABEL_51;
      if ( !v7 )
      {
        if ( (int)WdipSemOpenRegistryKey(L"ContextProviders") >= 0 )
        {
          v27 = 0;
          while ( 1 )
          {
            *(_OWORD *)v6 = 0LL;
            *(_OWORD *)(v6 + 16) = 0LL;
            *(_OWORD *)(v6 + 32) = 0LL;
            NextContextProvider = WdipSemLoadNextContextProvider(KeyHandlea, v27++, (GUID *)v6);
            v8 = NextContextProvider;
            if ( NextContextProvider == -2147483622 )
              break;
            if ( NextContextProvider < 0 )
              goto LABEL_17;
            Data1 = Guid[3].Data1;
            if ( (unsigned int)Data1 >= 0x7C )
            {
              if ( !EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_SCENARIO_CONTEXT_PROVIDER_MAX) )
                goto LABEL_16;
              v26 = &WDI_SEM_EVENT_INIT_SCENARIO_CONTEXT_PROVIDER_MAX;
              goto LABEL_60;
            }
            *(_QWORD *)&Guid[3].Data4[8 * Data1] = v6;
            ++Guid[3].Data1;
            v6 = WdipSemFastAllocate(0LL, 48LL);
            if ( !v6 )
              goto LABEL_69;
          }
        }
        goto LABEL_51;
      }
    }
LABEL_16:
    v8 = -1073741823;
  }
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  if ( v36 )
    ZwClose(v36);
  if ( v6 )
    WdipSemFastFree(0, (_SLIST_ENTRY *)v6);
  return (unsigned int)v8;
}
