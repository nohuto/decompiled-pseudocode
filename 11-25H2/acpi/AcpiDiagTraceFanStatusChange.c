/*
 * XREFs of AcpiDiagTraceFanStatusChange @ 0x14002CB84
 * Callers:
 *     ACPIFanFSTCallback @ 0x14002C010 (ACPIFanFSTCallback.c)
 * Callees:
 *     AcpiDiagTraceFanEvent @ 0x14002D078 (AcpiDiagTraceFanEvent.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

__int64 __fastcall AcpiDiagTraceFanStatusChange(__int64 a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v3[5]; // [rsp+30h] [rbp-58h] BYREF
  int v4; // [rsp+58h] [rbp-30h]
  int v5; // [rsp+5Ch] [rbp-2Ch]
  char *v6; // [rsp+60h] [rbp-28h]
  int v7; // [rsp+68h] [rbp-20h]
  int v8; // [rsp+6Ch] [rbp-1Ch]

  LODWORD(v2[0]) = *(_DWORD *)(a1 + 296);
  HIDWORD(v2[0]) = *(_DWORD *)(a1 + 304);
  v3[4] = v2;
  v4 = 4;
  v5 = 0;
  v6 = (char *)v2 + 4;
  v7 = 4;
  v8 = 0;
  return AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_STATUS_CHANGE, 4LL, v3, v2[0]);
}
