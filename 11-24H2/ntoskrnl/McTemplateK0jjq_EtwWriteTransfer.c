/*
 * XREFs of McTemplateK0jjq_EtwWriteTransfer @ 0x14057ED9C
 * Callers:
 *     FsRtlDedupChangeUninit @ 0x14070A650 (FsRtlDedupChangeUninit.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jjq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+40h] [rbp-48h]
  __int64 v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int64 *v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+68h] [rbp-20h]

  v10 = a5;
  v8 = a4;
  v12 = &a6;
  v9 = 16LL;
  v11 = 16LL;
  v13 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_Dedup_Change_Provider_Context,
           (const EVENT_DESCRIPTOR *)DedupChange_VolumeDismount,
           0LL,
           4u,
           &v7);
}
