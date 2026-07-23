/*
 * XREFs of PpmEventTraceAccountingBucketIntervalsRundown @ 0x140A969FC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PpmEventTraceAccountingBucketIntervalsRundown()
{
  __int64 v0; // r8
  _QWORD *v1; // rcx
  __int64 *v2; // rdx
  __int64 v3; // rax
  int v4; // [rsp+30h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-110h] BYREF
  _BYTE *v6; // [rsp+48h] [rbp-100h]
  int v7; // [rsp+50h] [rbp-F8h]
  int v8; // [rsp+54h] [rbp-F4h]
  _BYTE v9[208]; // [rsp+60h] [rbp-E8h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN) )
  {
    v0 = 26LL;
    v1 = v9;
    v4 = 26;
    v2 = (__int64 *)&unk_140FC5748;
    do
    {
      v3 = *v2;
      v2 += 3;
      *v1++ = v3;
      --v0;
    }
    while ( v0 );
    UserData.Reserved = 0;
    v8 = 0;
    UserData.Ptr = (ULONGLONG)&v4;
    v6 = v9;
    UserData.Size = 4;
    v7 = 208;
    EtwWrite(PpmEtwHandle, &PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN, 0LL, 2u, &UserData);
  }
}
