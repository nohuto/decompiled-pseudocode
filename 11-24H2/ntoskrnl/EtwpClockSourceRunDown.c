/*
 * XREFs of EtwpClockSourceRunDown @ 0x1407B0E1C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     KeGetDynamicTickDisableReason @ 0x1404F7074 (KeGetDynamicTickDisableReason.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall EtwpClockSourceRunDown(__int64 a1, __int64 a2)
{
  unsigned __int8 DynamicTickDisableReason; // al
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-48h]
  __int128 v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+58h] [rbp-28h]
  char v11; // [rsp+5Ch] [rbp-24h]
  __int64 *v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  if ( (_BYTE)a2 )
  {
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    v8 = 0LL;
    guard_dispatch_icall_no_overrides(&v8, a2);
    v6 = *(_QWORD *)((char *)&v8 + 4);
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v14 = 0;
    v4 = *(_DWORD *)a1;
    v5 = *(_QWORD *)(a1 + 1360);
    v7 = DynamicTickDisableReason;
    v12 = &v6;
    v13 = 12;
    EtwpLogKernelEvent((__int64)&v12, v5, v4, 1u, 3930, 0x501802u);
  }
}
