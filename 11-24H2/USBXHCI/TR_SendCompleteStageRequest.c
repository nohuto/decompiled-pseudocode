/*
 * XREFs of TR_SendCompleteStageRequest @ 0x14003C8C4
 * Callers:
 *     Control_Transfer_CompleteCancelable @ 0x1400064F0 (Control_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_CompleteTD @ 0x140010440 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140022CD0 (Isoch_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140022DA0 (Bulk_Stage_FreeScatterGatherList.c)
 *     Control_Transfer_Complete @ 0x140023660 (Control_Transfer_Complete.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall TR_SendCompleteStageRequest(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  GUID v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 296);
  v3 = *(_QWORD *)(a1 + 40);
  v8 = 0LL;
  DWORD2(v8) = a2;
  v6 = 0LL;
  v7 = v2;
  v5 = 0LL;
  LODWORD(v8) = 43;
  return SecureChannel_SendRequestSynchronously(*(_QWORD *)(v3 + 112), &v5, 48, 0LL, 0);
}
