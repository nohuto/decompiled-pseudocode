/*
 * XREFs of ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401221F4
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x140121AFC (RIMIDEInjectDeviceInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x140121F98 (RIMIDE_InjectGenericHidInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x14017D678 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x14017D9B0 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     SynthesizeMitTouchInput @ 0x140218E34 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1402191B8 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140004E0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140004ED0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140004FF8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400AF764 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?PointerInjectionType@InputTraceLogging@@CAPEBDW4tagPOINTER_INJECTION_TYPE@@@Z @ 0x1400B02D0 (-PointerInjectionType@InputTraceLogging@@CAPEBDW4tagPOINTER_INJECTION_TYPE@@@Z.c)
 *     ?InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z @ 0x1401E3F38 (-InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z.c)
 */

char __fastcall InputTraceLogging::RIM::InjectInput(__int64 a1)
{
  int v1; // eax
  int v2; // r8d
  __int64 v3; // r9
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rdx
  int v9; // r8d
  __int64 v10; // r9
  unsigned int v11; // r10d
  __int64 v12; // r9
  unsigned int v13; // r10d
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  const char *v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int v23; // r10d
  __int64 v24; // r9
  __int64 v25; // r8
  const char *v27; // [rsp+50h] [rbp-20h] BYREF
  const char *v28; // [rsp+58h] [rbp-18h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h] BYREF
  __int64 v30; // [rsp+68h] [rbp-8h] BYREF
  int v31; // [rsp+80h] [rbp+10h] BYREF
  __int64 v32; // [rsp+98h] [rbp+28h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 == 2 )
  {
    v1 = *(_DWORD *)(a1 + 184);
    if ( (v1 & 0x80u) == 0 )
    {
      if ( (unsigned int)dword_14029AE30 > 4 )
      {
        LOBYTE(v1) = tlgKeywordOn((__int64)&dword_14029AE30, 256LL);
        if ( (_BYTE)v1 )
        {
          v14 = *(_QWORD *)(v12 + 448);
          v31 = *(unsigned __int16 *)(v14 + 18);
          LODWORD(v32) = *(unsigned __int16 *)(v14 + 16);
          v30 = InputTraceLogging::InjectionSourceToString(v13);
          v29 = v15;
          LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                         (__int64)&dword_14029AE30,
                         (__int64)&unk_1402780A2,
                         v16,
                         v15,
                         (__int64)&v29,
                         (void **)&v30,
                         (__int64)&v32,
                         (__int64)&v31);
        }
      }
    }
    else if ( (unsigned int)dword_14029AE30 > 4 )
    {
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_14029AE30, 256LL);
      if ( (_BYTE)v1 )
      {
        v18 = *(_QWORD *)(v17 + 448);
        v19 = *(_QWORD *)(v17 + 456);
        v31 = *(unsigned __int16 *)(v18 + 18);
        LODWORD(v32) = *(unsigned __int16 *)(v18 + 16);
        v20 = InputTraceLogging::PointerInjectionType(*(_DWORD *)(v19 + 364));
        v22 = *(_DWORD *)(v21 + 24);
        v27 = v20;
        v28 = InputTraceLogging::PointerDeviceTypeToString(v22);
        v29 = InputTraceLogging::InjectionSourceToString(v23);
        v30 = v24;
        LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       (__int64)&dword_14029AE30,
                       (__int64)&unk_1402780E8,
                       v25,
                       v24,
                       (__int64)&v30,
                       (void **)&v29,
                       (void **)&v28,
                       (void **)&v27,
                       (__int64)&v32,
                       (__int64)&v31);
      }
    }
  }
  else if ( v1 )
  {
    if ( v1 == 1 && (unsigned int)dword_14029AE30 > 4 )
    {
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_14029AE30, 256LL);
      if ( (_BYTE)v1 )
      {
        v31 = v9;
        v32 = v10;
        v5 = InputTraceLogging::InjectionSourceToString(v11);
        v8 = &unk_140278154;
        goto LABEL_13;
      }
    }
  }
  else if ( (unsigned int)dword_14029AE30 > 4 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_14029AE30, 256LL);
    if ( (_BYTE)v1 )
    {
      v31 = v2;
      v32 = v3;
      v5 = InputTraceLogging::InjectionSourceToString(v4);
      v8 = &unk_140278065;
LABEL_13:
      v30 = v5;
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     (__int64)&dword_14029AE30,
                     (__int64)v8,
                     v6,
                     v7,
                     (void **)&v30,
                     (__int64)&v32,
                     (__int64)&v31);
    }
  }
  return v1;
}
