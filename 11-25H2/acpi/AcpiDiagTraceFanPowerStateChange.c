/*
 * XREFs of AcpiDiagTraceFanPowerStateChange @ 0x140052174
 * Callers:
 *     ACPIFanPowerCallback @ 0x1400520C0 (ACPIFanPowerCallback.c)
 * Callees:
 *     AcpiDiagTraceFanEvent @ 0x14002D078 (AcpiDiagTraceFanEvent.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceFanPowerStateChange(__int64 a1)
{
  bool v1; // al
  __int16 v2; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v3[32]; // [rsp+28h] [rbp-40h] BYREF
  __int16 *v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]

  v5 = 2;
  v1 = *(_DWORD *)(a1 + 384) == 1;
  v6 = 0;
  v2 = v1;
  v4 = &v2;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_POWER_STATE_CHANGE, 3u, (__int64)v3);
}
