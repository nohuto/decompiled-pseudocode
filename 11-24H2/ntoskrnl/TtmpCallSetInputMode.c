/*
 * XREFs of TtmpCallSetInputMode @ 0x140768EDC
 * Callers:
 *     TtmpPushTerminalState @ 0x140769690 (TtmpPushTerminalState.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     TtmpStartCallout @ 0x140769844 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1407699C4 (TtmpStopCallout.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 */

void __fastcall TtmpCallSetInputMode(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v3 = *(_QWORD *)(a2 + 64);
  if ( v3 )
  {
    memset(v9, 0, sizeof(v9));
    v10 = 0LL;
    TtmpStartCallout((unsigned int)v9, a1, a2, 3, v3, a3);
    v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 24), a3, v6, v7);
    TtmpStopCallout(v9, (unsigned int)v8);
    if ( v8 < 0 )
      TtmiLogError("TtmpCallSetInputMode", 2503LL, (unsigned int)v8, 0xFFFFFFFFLL);
  }
}
