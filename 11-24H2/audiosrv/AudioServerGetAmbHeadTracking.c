/*
 * XREFs of AudioServerGetAmbHeadTracking @ 0x18010F810
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18005292C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z @ 0x18010C970 (-GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z.c)
 */

__int64 __fastcall AudioServerGetAmbHeadTracking(struct _RTL_CRITICAL_SECTION *this, __int64 a2, int *a3)
{
  int StreamAmbHeadTracking; // eax
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-38h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v9, this);
  StreamAmbHeadTracking = CVADServer::GetStreamAmbHeadTracking(this, a2, a3);
  v7 = StreamAmbHeadTracking;
  if ( StreamAmbHeadTracking < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAmbHeadTracking", 4612, StreamAmbHeadTracking);
  EtwEventActivityIdControl(4LL, v10);
  return v7;
}
