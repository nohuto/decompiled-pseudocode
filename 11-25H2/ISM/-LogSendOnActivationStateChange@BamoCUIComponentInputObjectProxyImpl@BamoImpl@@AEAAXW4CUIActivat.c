/*
 * XREFs of ?LogSendOnActivationStateChange@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@AEAAXW4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x18012FBB4
 * Callers:
 *     ?OnActivationStateChange@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJW4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x18012FE00 (-OnActivationStateChange@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJW4CUIActivationStat.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void BamoImpl::BamoCUIComponentInputObjectProxyImpl::LogSendOnActivationStateChange()
{
  int v0; // edx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // r11d
  __int64 v5; // rax
  int v6; // ecx
  int v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  int v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-19h] BYREF
  int *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  int *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  int *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]
  __int64 *v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v5 = *(_QWORD *)(v2 + 16);
    v23 = 0;
    v20 = 0;
    v17 = 0;
    v14 = 0;
    v10 = v1;
    v7 = v4;
    v6 = *(_DWORD *)(v5 + 36);
    v9 = *(_DWORD *)(v2 + 24);
    v21 = &v10;
    v18 = &v7;
    v15 = &v8;
    v8 = v6;
    v12 = &v9;
    v19 = v0 + 3;
    v16 = v0 + 3;
    v13 = v0 + 3;
    v22 = 8;
    tlgWriteTransfer_EventWriteTransfer(v3, byte_18021349D, 0LL, 0LL, 6u, &v11);
  }
}
