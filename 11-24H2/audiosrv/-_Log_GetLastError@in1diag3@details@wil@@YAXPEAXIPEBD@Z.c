/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18010A510
 * Callers:
 *     AudioServerCreateStream @ 0x180081870 (AudioServerCreateStream.c)
 *     ??0CSebNotifier@@QEAA@XZ @ 0x18010982C (--0CSebNotifier@@QEAA@XZ.c)
 *     ServiceDeviceEventCallback @ 0x18014E5E0 (ServiceDeviceEventCallback.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015EF40 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x180109504 (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
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
