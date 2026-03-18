/*
 * XREFs of ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x140267B00
 * Callers:
 *     xxxInjectTouchInput @ 0x140234EBC (xxxInjectTouchInput.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003374 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140003438 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140003560 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x140277EE4 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

char __fastcall InputTraceLogging::RIM::InjectInput(__int64 a1, int a2, int a3)
{
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  const char *v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rdx
  const char *v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h] BYREF
  const char *v23; // [rsp+70h] [rbp+10h] BYREF
  int v24; // [rsp+78h] [rbp+18h]
  int v25; // [rsp+80h] [rbp+20h]
  const char *v26; // [rsp+88h] [rbp+28h] BYREF

  v25 = a3;
  v24 = a2;
  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 != 2 )
  {
    if ( v3 )
    {
      if ( v3 != 1 )
        return v3;
      if ( (unsigned int)dword_140398B80 <= 4 )
        return v3;
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140398B80, 256LL);
      if ( !(_BYTE)v3 )
        return v3;
      v19 = &unk_140364EF4;
    }
    else
    {
      if ( (unsigned int)dword_140398B80 <= 4 )
        return v3;
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140398B80, 256LL);
      if ( !(_BYTE)v3 )
        return v3;
      v19 = &unk_140364F34;
    }
    v26 = "InjectTouchInput";
    v25 = 1;
    v23 = (const char *)v18;
    LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                   (__int64)&dword_140398B80,
                   (__int64)v19,
                   v17,
                   v18,
                   &v26);
    return v3;
  }
  v3 = *(_DWORD *)(a1 + 184);
  if ( (v3 & 0x80u) == 0 )
  {
    if ( (unsigned int)dword_140398B80 > 4 )
    {
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140398B80, 256LL);
      if ( (_BYTE)v3 )
      {
        v16 = *(_QWORD *)(v15 + 448);
        v25 = *(unsigned __int16 *)(v16 + 18);
        v24 = *(unsigned __int16 *)(v16 + 16);
        v23 = "InjectTouchInput";
        v26 = (const char *)v15;
        LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       (__int64)&dword_140398B80,
                       (__int64)&unk_140364E42,
                       v14,
                       v15,
                       (__int64)&v26,
                       &v23);
      }
    }
  }
  else if ( (unsigned int)dword_140398B80 > 4 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140398B80, 256LL);
    if ( (_BYTE)v3 )
    {
      v5 = *(_QWORD *)(v4 + 448);
      v6 = *(_QWORD *)(v4 + 456);
      v25 = *(unsigned __int16 *)(v5 + 18);
      v24 = *(unsigned __int16 *)(v5 + 16);
      v7 = *(_DWORD *)(v6 + 364);
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 1 )
              v10 = "HID";
            else
              v10 = "UNKNOWN";
          }
          else
          {
            v10 = "LegacyPhysical";
          }
        }
        else
        {
          v10 = "LegacyScreen";
        }
      }
      else
      {
        v10 = "None";
      }
      v11 = *(_DWORD *)(v6 + 24);
      v23 = v10;
      v26 = InputTraceLogging::PointerDeviceTypeToString(v11);
      v22 = v12;
      v21 = "InjectTouchInput";
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (__int64)&dword_140398B80,
                     (__int64)&unk_140364E88,
                     v13,
                     v12,
                     (__int64)&v22,
                     &v21,
                     &v26,
                     &v23);
    }
  }
  return v3;
}
