/*
 * XREFs of ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1400C0E4C
 * Callers:
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1400C0CE0 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1400C1664 (-_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z.c)
 * Callees:
 *     ?EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ @ 0x1400C0B98 (-EndKeyboardEventSequence@KeyboardInputTelemetry@@SAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@444444444444444444444444444444444444@Z @ 0x1400C1BC4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::_UploadTelemetryData(KeyboardInputTelemetry *this)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // [rsp+150h] [rbp-80h] BYREF
  int v5; // [rsp+154h] [rbp-7Ch] BYREF
  int v6; // [rsp+158h] [rbp-78h] BYREF
  int v7; // [rsp+15Ch] [rbp-74h] BYREF
  int v8; // [rsp+160h] [rbp-70h] BYREF
  int v9; // [rsp+164h] [rbp-6Ch] BYREF
  int v10; // [rsp+168h] [rbp-68h] BYREF
  int v11; // [rsp+16Ch] [rbp-64h] BYREF
  int v12; // [rsp+170h] [rbp-60h] BYREF
  int v13; // [rsp+174h] [rbp-5Ch] BYREF
  int v14; // [rsp+178h] [rbp-58h] BYREF
  int v15; // [rsp+17Ch] [rbp-54h] BYREF
  int v16; // [rsp+180h] [rbp-50h] BYREF
  int v17; // [rsp+184h] [rbp-4Ch] BYREF
  int v18; // [rsp+188h] [rbp-48h] BYREF
  int v19; // [rsp+18Ch] [rbp-44h] BYREF
  int v20; // [rsp+190h] [rbp-40h] BYREF
  int v21; // [rsp+194h] [rbp-3Ch] BYREF
  int v22; // [rsp+198h] [rbp-38h] BYREF
  int v23; // [rsp+19Ch] [rbp-34h] BYREF
  int v24; // [rsp+1A0h] [rbp-30h] BYREF
  int v25; // [rsp+1A4h] [rbp-2Ch] BYREF
  int v26; // [rsp+1A8h] [rbp-28h] BYREF
  int v27; // [rsp+1ACh] [rbp-24h] BYREF
  int v28; // [rsp+1B0h] [rbp-20h] BYREF
  int v29; // [rsp+1B4h] [rbp-1Ch] BYREF
  int v30; // [rsp+1B8h] [rbp-18h] BYREF
  int v31; // [rsp+1BCh] [rbp-14h] BYREF
  int v32; // [rsp+1C0h] [rbp-10h] BYREF
  int v33; // [rsp+1C4h] [rbp-Ch] BYREF
  int v34; // [rsp+1C8h] [rbp-8h] BYREF
  int v35; // [rsp+1CCh] [rbp-4h] BYREF
  int v36; // [rsp+1D0h] [rbp+0h] BYREF
  char *v37; // [rsp+1D8h] [rbp+8h] BYREF
  int v38; // [rsp+200h] [rbp+30h] BYREF
  int v39; // [rsp+208h] [rbp+38h] BYREF
  int v40; // [rsp+210h] [rbp+40h] BYREF
  int v41; // [rsp+218h] [rbp+48h] BYREF

  KeyboardInputTelemetry::EndKeyboardEventSequence((__int64)this);
  if ( (unsigned int)dword_14029AF48 > 5
    && (qword_14029AF58 & 0x400000000000LL) != 0
    && (qword_14029AF60 & 0x400000000000LL) == qword_14029AF60 )
  {
    v38 = *((_DWORD *)this + 5);
    v39 = *((_DWORD *)this + 3);
    v40 = *((_DWORD *)this + 4);
    v41 = *((_DWORD *)this + 29);
    v4 = *((_DWORD *)this + 28);
    v5 = *((_DWORD *)this + 27);
    v6 = *((_DWORD *)this + 26);
    v7 = *((_DWORD *)this + 25);
    v8 = *((_DWORD *)this + 24);
    v9 = *((_DWORD *)this + 23);
    v10 = *((_DWORD *)this + 22);
    v11 = *((_DWORD *)this + 21);
    v12 = *((_DWORD *)this + 20);
    v13 = *((_DWORD *)this + 19);
    v14 = *((_DWORD *)this + 18);
    v15 = *((_DWORD *)this + 17);
    v16 = *((_DWORD *)this + 16);
    v17 = *((_DWORD *)this + 15);
    v18 = *((_DWORD *)this + 14);
    v19 = *((_DWORD *)this + 45);
    v20 = *((_DWORD *)this + 44);
    v21 = *((_DWORD *)this + 43);
    v22 = *((_DWORD *)this + 42);
    v23 = *((_DWORD *)this + 41);
    v24 = *((_DWORD *)this + 40);
    v25 = *((_DWORD *)this + 39);
    v26 = *((_DWORD *)this + 38);
    v27 = *((_DWORD *)this + 37);
    v28 = *((_DWORD *)this + 36);
    v29 = *((_DWORD *)this + 35);
    v30 = *((_DWORD *)this + 34);
    v31 = *((_DWORD *)this + 33);
    v32 = *((_DWORD *)this + 32);
    v33 = *((_DWORD *)this + 31);
    v34 = *((_DWORD *)this + 30);
    v35 = *((_DWORD *)this + 46);
    v36 = v35;
    v37 = (char *)this + 24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      0,
      (unsigned int)&unk_140275BF5,
      v2,
      v3,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38);
  }
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 5) = 0;
  memset((char *)this + 56, 0, 0x80uLL);
}
