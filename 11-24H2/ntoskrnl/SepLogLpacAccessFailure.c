/*
 * XREFs of SepLogLpacAccessFailure @ 0x140231454
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepGetStackTraceHash @ 0x140231520 (SepGetStackTraceHash.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DbgkQueueUserExceptionReport @ 0x140704FC4 (DbgkQueueUserExceptionReport.c)
 *     EtwTraceLpacAccessFailure @ 0x1409EAD24 (EtwTraceLpacAccessFailure.c)
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
    if ( _interlockedbittestandset(&dword_140E67CA8[(unsigned __int64)v1 >> 5], v1 & 0x1F) )
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
