/*
 * XREFs of ?LogSendOnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z @ 0x18011AFC4
 * Callers:
 *     ?OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z @ 0x180079AB4 (-OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEvent.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

void __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::LogSendOnAugmentedInputEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // r10
  int *v9; // r11
  __int64 v10; // rax
  int v11; // ecx
  int v12; // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+34h] [rbp-55h] BYREF
  int v14; // [rsp+38h] [rbp-51h] BYREF
  int v15; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v16; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-39h] BYREF
  int *v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+7Ch] [rbp-Dh]
  int *v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+88h] [rbp-1h]
  int v23; // [rsp+8Ch] [rbp+3h]
  int *v24; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+98h] [rbp+Fh]
  int v26; // [rsp+9Ch] [rbp+13h]
  int *v27; // [rsp+A0h] [rbp+17h]
  int v28; // [rsp+A8h] [rbp+1Fh]
  int v29; // [rsp+ACh] [rbp+23h]
  __int64 *v30; // [rsp+B0h] [rbp+27h]
  int v31; // [rsp+B8h] [rbp+2Fh]
  int v32; // [rsp+BCh] [rbp+33h]

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v16 = a5;
    v13 = *v9;
    v10 = *(_QWORD *)(v7 + 16);
    v12 = v6;
    v31 = 8;
    v11 = *(_DWORD *)(v10 + 36);
    v15 = *(_DWORD *)(v7 + 24);
    v30 = &v16;
    v27 = &v12;
    v24 = &v13;
    v21 = &v14;
    v14 = v11;
    v18 = &v15;
    v28 = v5 + 3;
    v25 = v5 + 3;
    v22 = v5 + 3;
    v19 = v5 + 3;
    tlgWriteTransfer_EventWriteTransfer(v8, byte_180215708, 0LL, 0LL, 7u, &v17);
  }
}
