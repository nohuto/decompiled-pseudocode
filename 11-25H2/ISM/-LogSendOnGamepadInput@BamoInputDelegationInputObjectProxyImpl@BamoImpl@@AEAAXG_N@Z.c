/*
 * XREFs of ?LogSendOnGamepadInput@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@AEAAXG_N@Z @ 0x18013121C
 * Callers:
 *     ?OnGamepadInput@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJG_N@Z @ 0x180131570 (-OnGamepadInput@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJG_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall BamoImpl::BamoInputDelegationInputObjectProxyImpl::LogSendOnGamepadInput(
        BamoImpl::BamoInputDelegationInputObjectProxyImpl *this)
{
  int v1; // edx
  char v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int16 v5; // r11
  __int64 v6; // rax
  int v7; // ecx
  char v8; // [rsp+30h] [rbp-29h] BYREF
  __int16 v9; // [rsp+32h] [rbp-27h] BYREF
  int v10; // [rsp+34h] [rbp-25h] BYREF
  int v11; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-19h] BYREF
  int *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  int *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  __int16 *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]
  char *v22; // [rsp+90h] [rbp+37h]
  int v23; // [rsp+98h] [rbp+3Fh]
  int v24; // [rsp+9Ch] [rbp+43h]

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v6 = *(_QWORD *)(v3 + 16);
    v24 = 0;
    v21 = 0;
    v18 = 0;
    v15 = 0;
    v8 = v2;
    v9 = v5;
    v7 = *(_DWORD *)(v6 + 36);
    v11 = *(_DWORD *)(v3 + 24);
    v22 = &v8;
    v19 = &v9;
    v16 = &v10;
    v10 = v7;
    v13 = &v11;
    v23 = v1;
    v17 = v1 + 3;
    v14 = v1 + 3;
    v20 = 2;
    tlgWriteTransfer_EventWriteTransfer(v4, byte_18021367D, 0LL, 0LL, 6u, &v12);
  }
}
