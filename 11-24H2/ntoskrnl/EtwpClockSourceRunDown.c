/*
 * XREFs of EtwpClockSourceRunDown @ 0x1407B09CC
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A15E44 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     KeGetDynamicTickDisableReason @ 0x1404F9794 (KeGetDynamicTickDisableReason.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall EtwpClockSourceRunDown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 DynamicTickDisableReason; // al
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+38h] [rbp-48h]
  __int128 v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-28h]
  char v13; // [rsp+5Ch] [rbp-24h]
  __int64 *v14; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]

  if ( (_BYTE)a2 )
  {
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    v10 = 0LL;
    guard_dispatch_icall_no_overrides(&v10, a2, a3, a4);
    v8 = *(_QWORD *)((char *)&v10 + 4);
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v16 = 0;
    v6 = *(_DWORD *)a1;
    v7 = *(_QWORD *)(a1 + 1360);
    v9 = DynamicTickDisableReason;
    v14 = &v8;
    v15 = 12;
    EtwpLogKernelEvent((__int64)&v14, v7, v6, 1u, 3930, 0x501802u);
  }
}
