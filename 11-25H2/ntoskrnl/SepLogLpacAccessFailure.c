/*
 * XREFs of SepLogLpacAccessFailure @ 0x14048CCB4
 * Callers:
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepGetStackTraceHash @ 0x14048CD74 (SepGetStackTraceHash.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     DbgkQueueUserExceptionReport @ 0x1406FB524 (DbgkQueueUserExceptionReport.c)
 *     EtwTraceLpacAccessFailure @ 0x140A75A90 (EtwTraceLpacAccessFailure.c)
 */

__int64 SepLogLpacAccessFailure()
{
  unsigned int v0; // ebx
  unsigned __int8 v1; // di
  _DWORD v3[4]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v4; // [rsp+38h] [rbp-39h]
  int v5; // [rsp+40h] [rbp-31h]
  __int64 v6; // [rsp+48h] [rbp-29h]
  __int64 v7; // [rsp+50h] [rbp-21h]
  unsigned int v8; // [rsp+D8h] [rbp+67h] BYREF

  v8 = 0;
  if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 3221225659LL;
  SepGetStackTraceHash(&v8);
  v0 = v8;
  v1 = v8 ^ BYTE2(v8) ^ ((unsigned __int16)(v8 ^ HIWORD(v8)) >> 8);
  EtwTraceLpacAccessFailure(v8);
  if ( !SeLpacEnableWatsonReporting )
    return 3221226326LL;
  if ( SeLpacEnableWatsonThrottling )
  {
    if ( _interlockedbittestandset(&dword_140E677E8[(unsigned __int64)v1 >> 5], v1 & 0x1F) )
      return 0LL;
    v0 = v8;
  }
  memset_0(v3, 0, 0x98uLL);
  v3[1] = 0;
  v4 = 0LL;
  v7 = v0;
  v3[0] = -1073740791;
  v5 = 2;
  v6 = 43LL;
  return DbgkQueueUserExceptionReport(KeGetCurrentThread());
}
