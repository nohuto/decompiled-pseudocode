/*
 * XREFs of PopTraceThermalZonePassiveHistogram @ 0x1404CD1F8
 * Callers:
 *     PopThermalSxEntry @ 0x1404D31A8 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x1405D1700 (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x140752D30 (PopThermalZoneRemove.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopDiagSnapPassiveHistogram @ 0x1402B95BC (PopDiagSnapPassiveHistogram.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void *__fastcall PopTraceThermalZonePassiveHistogram(__int64 a1)
{
  void *result; // rax
  void *v3; // rbx
  __int64 v4; // rsi
  const wchar_t *v5; // r8
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v7; // [rsp+58h] [rbp-B0h]
  __int64 v8; // [rsp+60h] [rbp-A8h]
  __int64 v9; // [rsp+68h] [rbp-A0h]
  _DWORD v10[2]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v11[16]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v12; // [rsp+88h] [rbp-80h]
  int v13; // [rsp+90h] [rbp-78h]
  int v14; // [rsp+94h] [rbp-74h]
  void *v15; // [rsp+98h] [rbp-70h]
  int v16; // [rsp+A0h] [rbp-68h]
  int v17; // [rsp+A4h] [rbp-64h]
  _DWORD v18[24]; // [rsp+A8h] [rbp-60h] BYREF

  result = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)(*((_QWORD *)result + 39) + 40LL);
    if ( v4
      && (PopDiagSnapPassiveHistogram(a1 + 504, v18) || PopThermalTelemetryVerbosity)
      && (unsigned int)dword_140E07680 > 5
      && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    {
      v10[1] = 0;
      v7 = v10;
      v9 = *(_QWORD *)(v4 + 136);
      v10[0] = *(unsigned __int16 *)(v4 + 128);
      v8 = 2LL;
      tlgCreate1Sz_wchar_t((__int64)v11, v5);
      v14 = 0;
      v17 = 0;
      v15 = &PopThermalTrackingThresholds;
      v12 = v18;
      v13 = 84;
      v16 = 21;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)&word_14004A2BE,
        0LL,
        0LL,
        7u,
        &v6);
    }
    return (void *)ObfDereferenceObjectWithTag(v3, 0x67446F50u);
  }
  return result;
}
