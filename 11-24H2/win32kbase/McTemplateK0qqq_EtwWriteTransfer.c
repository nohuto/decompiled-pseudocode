/*
 * XREFs of McTemplateK0qqq_EtwWriteTransfer @ 0x1400E24D4
 * Callers:
 *     EtwTraceGreMovePointerBegin @ 0x1400E2460 (EtwTraceGreMovePointerBegin.c)
 *     EtwTraceGreMovePointerEnd @ 0x1400E24A0 (EtwTraceGreMovePointerEnd.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1400ED340 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1400ED3A0 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTraceFocusedProcessChange @ 0x1400ED400 (EtwTraceFocusedProcessChange.c)
 *     ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x1400ED528 (-ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1400ED5B0 (EtwTraceEndPointerFrameCreation.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1400ED5F0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1400ED630 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1400ED670 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1400ED6B0 (EtwTraceBeginPointerFrameCommit.c)
 *     EtwTraceBeginPointerFrameBuildPartial @ 0x1401B41F0 (EtwTraceBeginPointerFrameBuildPartial.c)
 *     EtwTraceBeginPointerFrameCreation @ 0x1401B4220 (EtwTraceBeginPointerFrameCreation.c)
 *     EtwTraceCursorSize @ 0x1401B42C0 (EtwTraceCursorSize.c)
 *     EtwTraceEndPointerFrameBuildPartial @ 0x1401B44E0 (EtwTraceEndPointerFrameBuildPartial.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140033530 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v8 = &v14;
  v9 = 4LL;
  v10 = &a5;
  v12 = &a6;
  v11 = 4LL;
  v13 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 4u, &v7);
}
