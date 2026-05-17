/*
 * XREFs of RtlpHpRaiseFatalLimitError @ 0x18011A2FC
 * Callers:
 *     RtlpHpHeapHandleError @ 0x18011F190 (RtlpHpHeapHandleError.c)
 *     HeapCommitFailAvoidTriageRules @ 0x18014CD10 (HeapCommitFailAvoidTriageRules.c)
 * Callees:
 *     RtlReportFatalFailure @ 0x18011A3AC (RtlReportFatalFailure.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpRaiseFatalLimitError(__int64 a1)
{
  _DWORD v3[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v4; // [rsp+28h] [rbp-B0h]
  __int64 v5; // [rsp+30h] [rbp-A8h]
  int v6; // [rsp+38h] [rbp-A0h]
  __int64 v7; // [rsp+40h] [rbp-98h]
  __int64 v8; // [rsp+48h] [rbp-90h]
  __int64 v9; // [rsp+50h] [rbp-88h]
  __int64 v10; // [rsp+58h] [rbp-80h]

  memset_thunk_772440563353939046(v3, 0, 0x98uLL);
  v4 = 0LL;
  v3[0] = qword_1801CF100;
  v7 = dword_1801CF0E8;
  v8 = qword_1801CF0F0;
  v9 = qword_1801CF108;
  v10 = qword_1801CF110;
  v3[1] = 1;
  v5 = a1;
  v6 = 4;
  return RtlReportFatalFailure(v3);
}
