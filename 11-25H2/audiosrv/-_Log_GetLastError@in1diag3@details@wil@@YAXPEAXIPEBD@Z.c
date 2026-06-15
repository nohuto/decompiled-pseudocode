/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801043C0
 * Callers:
 *     AudioServerCreateStream @ 0x18008D370 (AudioServerCreateStream.c)
 *     ??0CSebNotifier@@QEAA@XZ @ 0x1801036DC (--0CSebNotifier@@QEAA@XZ.c)
 *     ServiceDeviceEventCallback @ 0x180145B40 (ServiceDeviceEventCallback.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180156250 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x1801033B4 (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<2>(this, a2, a3, a4, v4, retaddr);
}
