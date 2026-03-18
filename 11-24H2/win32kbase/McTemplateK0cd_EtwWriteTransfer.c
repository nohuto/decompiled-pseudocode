/*
 * XREFs of McTemplateK0cd_EtwWriteTransfer @ 0x140034640
 * Callers:
 *     EtwTraceEndAppMessageProcessing @ 0x1400345F0 (EtwTraceEndAppMessageProcessing.c)
 *     EtwTraceWakeRIT @ 0x1400A43F0 (EtwTraceWakeRIT.c)
 *     EtwTraceWakeMIT @ 0x1400A4C40 (EtwTraceWakeMIT.c)
 *     EtwTraceEndDispatchMessage @ 0x1400F8120 (EtwTraceEndDispatchMessage.c)
 *     EtwTraceBeginDispatchMessage @ 0x1400F8E00 (EtwTraceBeginDispatchMessage.c)
 *     EtwTraceBeginTranslateMessage @ 0x14011EEE0 (EtwTraceBeginTranslateMessage.c)
 *     EtwTraceEndTranslateMessage @ 0x140120D30 (EtwTraceEndTranslateMessage.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140033530 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0cd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  char *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 1;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v6);
}
