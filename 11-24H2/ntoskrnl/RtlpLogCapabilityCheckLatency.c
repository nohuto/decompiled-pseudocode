/*
 * XREFs of RtlpLogCapabilityCheckLatency @ 0x140A80858
 * Callers:
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlRunOnceExecuteOnce @ 0x1409473B0 (RtlRunOnceExecuteOnce.c)
 */

signed __int16 __fastcall RtlpLogCapabilityCheckLatency(_QWORD *a1, _QWORD *a2, char a3, char a4, char a5, char a6)
{
  signed __int16 result; // ax
  const GUID *v11; // r8
  __int64 v12; // rax
  char v13; // [rsp+38h] [rbp-49h] BYREF
  char v14; // [rsp+39h] [rbp-48h] BYREF
  char v15; // [rsp+3Ah] [rbp-47h] BYREF
  char v16; // [rsp+3Bh] [rbp-46h] BYREF
  LONGLONG v17; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+48h] [rbp-39h] BYREF
  LONGLONG *v19; // [rsp+68h] [rbp-19h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  char *v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  char *v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  char *v25; // [rsp+98h] [rbp+17h]
  __int64 v26; // [rsp+A0h] [rbp+1Fh]
  char *v27; // [rsp+A8h] [rbp+27h]
  __int64 v28; // [rsp+B0h] [rbp+2Fh]

  result = RtlRunOnceExecuteOnce(
             &RtlpCapChkTelemetryRunOnceCtx,
             (PRTL_RUN_ONCE_INIT_FN)RtlpCapChkTelemetryRunOnce,
             0LL,
             0LL);
  if ( a1 )
  {
    if ( a2 )
    {
      if ( RtlpPerformanceCounterFrequency.QuadPart )
      {
        if ( *a1 )
        {
          if ( *a2 )
          {
            result = _InterlockedDecrement16(&TelemetryEventThrottle);
            if ( !result )
            {
              if ( (unsigned int)dword_140E08810 > 5 && tlgKeywordOn((__int64)&dword_140E08810, 0x200000000000LL) )
              {
                v12 = 1000000LL * (*a2 - *a1);
                v20 = 8LL;
                v13 = a3;
                v22 = 1LL;
                v17 = v12 / RtlpPerformanceCounterFrequency.QuadPart;
                v19 = &v17;
                v21 = &v13;
                v23 = &v14;
                v15 = a5;
                v25 = &v15;
                v16 = a6;
                v27 = &v16;
                v14 = a4;
                v24 = 1LL;
                v26 = 1LL;
                v28 = 1LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E08810,
                  (unsigned __int8 *)word_140051D82,
                  v11,
                  0LL,
                  7u,
                  &v18);
              }
              result = TelemetryEventThrottle;
              TelemetryEventThrottle = 100;
            }
          }
        }
      }
    }
  }
  return result;
}
