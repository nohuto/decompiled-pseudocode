/*
 * XREFs of ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x18000C5D0
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000AAF8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000AED0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000B410 (-FallBackToBDD@@YA_NXZ.c)
 *     DwmpTerminateSessionProcess @ 0x18000DFC0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000133C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800021A0 (__security_check_cookie.c)
 */

void __fastcall _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(
        _unnamed_type_gDwmInitTelemetryAggregator_ *this)
{
  int v1; // [rsp+30h] [rbp-69h] BYREF
  int v2; // [rsp+34h] [rbp-65h] BYREF
  int v3; // [rsp+38h] [rbp-61h] BYREF
  int v4; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v5; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v7; // [rsp+70h] [rbp-29h]
  __int64 v8; // [rsp+78h] [rbp-21h]
  GUID *v9; // [rsp+80h] [rbp-19h]
  __int64 v10; // [rsp+88h] [rbp-11h]
  int *v11; // [rsp+90h] [rbp-9h]
  __int64 v12; // [rsp+98h] [rbp-1h]
  int *v13; // [rsp+A0h] [rbp+7h]
  __int64 v14; // [rsp+A8h] [rbp+Fh]
  int *v15; // [rsp+B0h] [rbp+17h]
  __int64 v16; // [rsp+B8h] [rbp+1Fh]
  int *v17; // [rsp+C0h] [rbp+27h]
  __int64 v18; // [rsp+C8h] [rbp+2Fh]
  GUID *v19; // [rsp+D0h] [rbp+37h]
  __int64 v20; // [rsp+D8h] [rbp+3Fh]

  if ( (gDwmInitTelemetryAggregator
     || (_DWORD)qword_180019E14
     || __PAIR64__(HIDWORD(qword_180019E14), 0) != (unsigned int)qword_180019E1C)
    && (unsigned int)dword_180019000 > 5
    && (qword_180019010 & 0x400000000000LL) != 0
    && (qword_180019018 & 0x400000000000LL) == qword_180019018 )
  {
    v1 = qword_180019E1C;
    v19 = &gDwmInitTargetAppSessionGuid;
    v2 = HIDWORD(qword_180019E14);
    v17 = &v1;
    v3 = qword_180019E14;
    v15 = &v2;
    v4 = gDwmInitTelemetryAggregator;
    v13 = &v3;
    v5 = 0x1000000LL;
    v11 = &v4;
    v9 = &gDwmInitTelemetryActivityId;
    v7 = &v5;
    v20 = 16LL;
    v18 = 4LL;
    v16 = 4LL;
    v14 = 4LL;
    v12 = 4LL;
    v10 = 16LL;
    v8 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180019000, byte_1800158AB, 0LL, 0LL, 9u, &v6);
  }
}
