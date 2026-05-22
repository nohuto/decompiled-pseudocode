/*
 * XREFs of ?LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z @ 0x1800E7070
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EBBB0 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBGAEBUHardwareAttributes@@PEB.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall LampArrayTelemetry::LogUnexpectedUsage(LampArrayTelemetry *this)
{
  __int64 v1; // rcx
  __int16 v2; // r8
  __int16 v3; // r9
  __int16 v4; // [rsp+30h] [rbp-68h] BYREF
  __int16 v5; // [rsp+32h] [rbp-66h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  __int16 *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  __int16 *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_180244248 > 5 && tlgKeywordOn((__int64)&dword_180244248, 0x400000000000LL) )
  {
    v12 = 0;
    v9 = 0;
    v10 = &v4;
    v7 = &v5;
    v4 = v2;
    v5 = v3;
    v11 = 2;
    v8 = 2;
    tlgWriteTransfer_EventWriteTransfer(v1, byte_18020A3C1, 0LL, 0LL, 4u, &v6);
  }
}
