/*
 * XREFs of TtmpCallAssignedToTerminal @ 0x140768D10
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x140768A40 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     TtmpStartCallout @ 0x140769844 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1407699C4 (TtmpStopCallout.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 */

void __fastcall TtmpCallAssignedToTerminal(int a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  int v7; // [rsp+28h] [rbp-40h]
  _OWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
  {
    v7 = *(_DWORD *)(a2 + 596);
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    TtmpStartCallout((unsigned int)v8, a1, a2, 1, v2, v7);
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 24), *(unsigned int *)(a2 + 596), v4, v5);
    TtmpStopCallout(v8, (unsigned int)v6);
    if ( v6 < 0 )
      TtmiLogError("TtmpCallAssignedToTerminal", 2380LL, (unsigned int)v6, 0xFFFFFFFFLL);
  }
}
