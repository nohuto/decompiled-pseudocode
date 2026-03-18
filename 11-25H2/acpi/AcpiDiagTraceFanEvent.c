/*
 * XREFs of AcpiDiagTraceFanEvent @ 0x14002D078
 * Callers:
 *     AcpiDiagTraceFanStatusChange @ 0x14002CB84 (AcpiDiagTraceFanStatusChange.c)
 *     AcpiDiagTraceFanRundown @ 0x14002CFB4 (AcpiDiagTraceFanRundown.c)
 *     AcpiDiagTraceFanPowerStateChange @ 0x140052174 (AcpiDiagTraceFanPowerStateChange.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1400394F0 (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceFanEvent(__int64 a1, const EVENT_DESCRIPTOR *a2, ULONG a3, __int64 a4)
{
  unsigned __int16 Length; // ax
  __int16 v9; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING v10[2]; // [rsp+38h] [rbp-20h] BYREF

  v10[0] = 0LL;
  v9 = 0;
  RtlInitUnicodeString(v10, 0LL);
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext
    && EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, a2)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), v10, 1LL) >= 0 )
  {
    Length = v10[0].Length;
    *(_QWORD *)(a4 + 8) = 2LL;
    *(_QWORD *)a4 = &v9;
    v9 = Length >> 1;
    *(_QWORD *)(a4 + 16) = v10[0].Buffer;
    *(_DWORD *)(a4 + 24) = 2 * (Length >> 1);
    *(_DWORD *)(a4 + 28) = 0;
    EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, a2, 0LL, a3, (PEVENT_DATA_DESCRIPTOR)a4);
  }
  if ( v10[0].Buffer )
    ExFreePoolWithTag(v10[0].Buffer, 0);
}
