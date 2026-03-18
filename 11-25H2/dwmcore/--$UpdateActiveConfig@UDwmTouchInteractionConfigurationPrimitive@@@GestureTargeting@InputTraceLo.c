/*
 * XREFs of ??$UpdateActiveConfig@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXAEBUDwmTouchInteractionConfigurationPrimitive@@@Z @ 0x1801F523C
 * Callers:
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAXAEBUDwmTouchInteractionConfigurationPrimitive@@@Z @ 0x1801F4BA4 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlags.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x1801F51B4 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAXAEBUDwmPenInteractionConfigurationPrimitive@@@Z @ 0x1801F59D8 (-UpdateActiveConfig@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3333333333333AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1801F5A60 (--$Write@U-$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$.c)
 */

__int64 __fastcall InputTraceLogging::GestureTargeting::UpdateActiveConfig<DwmTouchInteractionConfigurationPrimitive>(
        int *a1)
{
  __int64 result; // rax
  int v3; // r9d
  __int64 v4; // r8
  int v5; // edx
  int v6; // ecx
  const char *v7; // rax
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
  const char *v21; // [rsp+A0h] [rbp-80h] BYREF
  const char *v22; // [rsp+A8h] [rbp-78h] BYREF
  const char *v23; // [rsp+B0h] [rbp-70h] BYREF
  const char *v24; // [rsp+B8h] [rbp-68h] BYREF
  const char *v25; // [rsp+C0h] [rbp-60h] BYREF
  const char *v26; // [rsp+C8h] [rbp-58h] BYREF
  const char *v27; // [rsp+D0h] [rbp-50h] BYREF
  const char *v28; // [rsp+D8h] [rbp-48h] BYREF
  const char *v29; // [rsp+E0h] [rbp-40h] BYREF
  const char *v30; // [rsp+E8h] [rbp-38h] BYREF
  const char *v31; // [rsp+F0h] [rbp-30h] BYREF
  const char *v32; // [rsp+F8h] [rbp-28h] BYREF
  const char *v33; // [rsp+100h] [rbp-20h] BYREF
  int v34; // [rsp+128h] [rbp+8h] BYREF
  int v35; // [rsp+130h] [rbp+10h] BYREF
  const char *v36; // [rsp+138h] [rbp+18h] BYREF

  result = (__int64)InputTraceLogging::Provider();
  v4 = result;
  if ( *(_DWORD *)result > 4u )
  {
    v5 = *(_DWORD *)(result + 16);
    result = 2048LL;
    if ( (v5 & 0x800) != 0 && (*(_QWORD *)(v4 + 24) & 0x800LL) == *(_QWORD *)(v4 + 24) )
    {
      v6 = a1[2];
      v34 = a1[1];
      v35 = *a1;
      v7 = "StopInertia";
      if ( (v6 & 0x20000000) == 0 )
        v7 = word_180336D88;
      v36 = v7;
      v8 = "DisableGestures";
      if ( (v6 & 0x10000000) == 0 )
        v8 = word_180336D88;
      v21 = v8;
      v9 = "Wheel";
      if ( (v6 & 0x8000) == 0 )
        v9 = word_180336D88;
      v22 = v9;
      v10 = "Hover";
      if ( (v6 & 0x400) == 0 )
        v10 = word_180336D88;
      v23 = v10;
      v11 = "Eraser";
      if ( (v6 & 0x200) == 0 )
        v11 = word_180336D88;
      v24 = v11;
      v12 = "Button";
      if ( (v6 & 0x100) == 0 )
        v12 = word_180336D88;
      v25 = v12;
      v13 = "Hold";
      if ( (v6 & 0x80u) == 0 )
        v13 = word_180336D88;
      v26 = v13;
      v14 = "Tap";
      if ( (v6 & 0x40) == 0 )
        v14 = word_180336D88;
      v27 = v14;
      v15 = "Zoom-";
      if ( (v6 & 0x20) == 0 )
        v15 = word_180336D88;
      v28 = v15;
      v16 = "Zoom+";
      if ( (v6 & 0x10) == 0 )
        v16 = word_180336D88;
      v29 = v16;
      v17 = "PanY-";
      if ( (v6 & 8) == 0 )
        v17 = word_180336D88;
      v30 = v17;
      v18 = "PanY+";
      if ( (v6 & 4) == 0 )
        v18 = word_180336D88;
      v31 = v18;
      v19 = "PanX-";
      if ( (v6 & 2) == 0 )
        v19 = word_180336D88;
      v32 = v19;
      v20 = "PanX+";
      if ( (v6 & 1) == 0 )
        v20 = word_180336D88;
      v33 = v20;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               v4,
               (unsigned int)&unk_1803D6888,
               v4,
               v3,
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
               (__int64)&v36,
               (__int64)&v35,
               (__int64)&v34);
    }
  }
  return result;
}
