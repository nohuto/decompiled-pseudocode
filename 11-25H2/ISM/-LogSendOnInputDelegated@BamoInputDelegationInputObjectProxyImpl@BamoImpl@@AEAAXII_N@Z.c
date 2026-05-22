/*
 * XREFs of ?LogSendOnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@AEAAXII_N@Z @ 0x180131378
 * Callers:
 *     ?OnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJII_N@Z @ 0x180131A5C (-OnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJII_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall BamoImpl::BamoInputDelegationInputObjectProxyImpl::LogSendOnInputDelegated(
        BamoImpl::BamoInputDelegationInputObjectProxyImpl *this,
        int a2)
{
  int v3; // edx
  int v4; // r8d
  char v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rax
  int v9; // ecx
  char v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v14; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-29h] BYREF
  int *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]
  char *v28; // [rsp+B0h] [rbp+37h]
  int v29; // [rsp+B8h] [rbp+3Fh]
  int v30; // [rsp+BCh] [rbp+43h]

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v8 = *(_QWORD *)(v7 + 16);
    v30 = 0;
    v27 = 0;
    v24 = 0;
    v21 = 0;
    v18 = 0;
    v10 = v5;
    v11 = v4;
    v12 = a2;
    v9 = *(_DWORD *)(v8 + 36);
    v14 = *(_DWORD *)(v7 + 24);
    v28 = &v10;
    v25 = &v11;
    v22 = &v12;
    v19 = &v13;
    v13 = v9;
    v16 = &v14;
    v29 = v3;
    v26 = v3 + 3;
    v23 = v3 + 3;
    v20 = v3 + 3;
    v17 = v3 + 3;
    tlgWriteTransfer_EventWriteTransfer(v6, byte_1802136F8, 0LL, 0LL, 7u, &v15);
  }
}
