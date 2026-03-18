/*
 * XREFs of ??$UpdateActiveConfig@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXAEBUDwmMousewheelInteractionConfigurationPrimitive@@@Z @ 0x18022D9FC
 * Callers:
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAXAEBUDwmMousewheelInteractionConfigurationPrimitive@@@Z @ 0x18020C89C (-UpdateActiveConfig@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMIL.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180092C54 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3333333333333AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1801E88A0 (--$Write@U-$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$.c)
 */

char __fastcall InputTraceLogging::GestureTargeting::UpdateActiveConfig<DwmMousewheelInteractionConfigurationPrimitive>(
        int *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  const char *v6; // rax
  int v7; // ecx
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  const char *v22; // [rsp+A0h] [rbp-80h] BYREF
  const char *v23; // [rsp+A8h] [rbp-78h] BYREF
  const char *v24; // [rsp+B0h] [rbp-70h] BYREF
  const char *v25; // [rsp+B8h] [rbp-68h] BYREF
  const char *v26; // [rsp+C0h] [rbp-60h] BYREF
  const char *v27; // [rsp+C8h] [rbp-58h] BYREF
  const char *v28; // [rsp+D0h] [rbp-50h] BYREF
  const char *v29; // [rsp+D8h] [rbp-48h] BYREF
  const char *v30; // [rsp+E0h] [rbp-40h] BYREF
  const char *v31; // [rsp+E8h] [rbp-38h] BYREF
  const char *v32; // [rsp+F0h] [rbp-30h] BYREF
  const char *v33; // [rsp+F8h] [rbp-28h] BYREF
  const char *v34; // [rsp+100h] [rbp-20h] BYREF
  int v35; // [rsp+128h] [rbp+8h] BYREF
  int v36; // [rsp+130h] [rbp+10h] BYREF
  const char *v37; // [rsp+138h] [rbp+18h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 2048LL);
    if ( (_BYTE)v2 )
    {
      v5 = a1[1];
      v36 = *a1;
      v6 = "StopInertia";
      v35 = v5;
      v7 = a1[2];
      if ( (v7 & 0x20000000) == 0 )
        v6 = word_18032AF78;
      v37 = v6;
      v8 = "DisableGestures";
      if ( (v7 & 0x10000000) == 0 )
        v8 = word_18032AF78;
      v22 = v8;
      v9 = "Wheel";
      if ( (v7 & 0x8000) == 0 )
        v9 = word_18032AF78;
      v23 = v9;
      v10 = "Hover";
      if ( (v7 & 0x400) == 0 )
        v10 = word_18032AF78;
      v24 = v10;
      v11 = "Eraser";
      if ( (v7 & 0x200) == 0 )
        v11 = word_18032AF78;
      v25 = v11;
      v12 = "Button";
      if ( (v7 & 0x100) == 0 )
        v12 = word_18032AF78;
      v26 = v12;
      v13 = "Hold";
      if ( (v7 & 0x80u) == 0 )
        v13 = word_18032AF78;
      v27 = v13;
      v14 = "Tap";
      if ( (v7 & 0x40) == 0 )
        v14 = word_18032AF78;
      v28 = v14;
      v15 = "Zoom-";
      if ( (v7 & 0x20) == 0 )
        v15 = word_18032AF78;
      v29 = v15;
      v16 = "Zoom+";
      if ( (v7 & 0x10) == 0 )
        v16 = word_18032AF78;
      v30 = v16;
      v17 = "PanY-";
      if ( (v7 & 8) == 0 )
        v17 = word_18032AF78;
      v31 = v17;
      v18 = "PanY+";
      if ( (v7 & 4) == 0 )
        v18 = word_18032AF78;
      v32 = v18;
      v19 = "PanX-";
      if ( (v7 & 2) == 0 )
        v19 = word_18032AF78;
      v33 = v19;
      v20 = "PanX+";
      if ( (v7 & 1) == 0 )
        v20 = word_18032AF78;
      v34 = v20;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v3,
                     byte_1803CB910,
                     v3,
                     v4,
                     &v34,
                     &v33,
                     &v32,
                     &v31,
                     &v30,
                     &v29,
                     &v28,
                     &v27,
                     &v26,
                     &v25,
                     &v24,
                     &v23,
                     &v22,
                     &v37,
                     (__int64)&v36,
                     (__int64)&v35);
    }
  }
  return (char)v2;
}
