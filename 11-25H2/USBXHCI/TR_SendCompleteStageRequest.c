/*
 * XREFs of TR_SendCompleteStageRequest @ 0x14003C940
 * Callers:
 *     Control_Transfer_Complete @ 0x140010AF0 (Control_Transfer_Complete.c)
 *     Control_Transfer_CompleteCancelable @ 0x140012B50 (Control_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_CompleteTD @ 0x140018460 (Isoch_Stage_CompleteTD.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140018CF0 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140025BC8 (Isoch_Stage_FreeScatterGatherList.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
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
