/*
 * XREFs of WPP_SF_Dd @ 0x140142D18
 * Callers:
 *     ParseNamedData @ 0x1401420F4 (ParseNamedData.c)
 *     ParseTcgPayloadStatus @ 0x1401423AC (ParseTcgPayloadStatus.c)
 *     TcglibpMapStatus @ 0x140142C14 (TcglibpMapStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_Dd(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
