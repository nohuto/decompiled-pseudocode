/*
 * XREFs of ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403F4690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiDisplayMuxTelemetryProviderCallback @ 0x140088A00 (DpiDisplayMuxTelemetryProviderCallback.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDisplayTelemetryProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *Global; // rax
  char v5; // cl
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 == 2 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))DisplayTelemetryEnabledCallback,
      (__int64)&ActivityId,
      1);
    v5 = 1;
LABEL_7:
    DpiDisplayMuxTelemetryProviderCallback(v5);
    return;
  }
  if ( a2 == 1 && (a4 & 0xE00000000000LL) != 0 && !byte_1401609B8 )
  {
    byte_1401609B8 = 1;
    v5 = 0;
    goto LABEL_7;
  }
}
