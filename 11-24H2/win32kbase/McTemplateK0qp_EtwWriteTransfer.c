/*
 * XREFs of McTemplateK0qp_EtwWriteTransfer @ 0x1400E3800
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     EtwTraceFlipManagerPresentConfirmed @ 0x1400E3740 (EtwTraceFlipManagerPresentConfirmed.c)
 *     EtwTraceFlipManagerStartTokenReleaseToFrame @ 0x1400E3770 (EtwTraceFlipManagerStartTokenReleaseToFrame.c)
 *     EtwTraceFlipManagerStopTokenReleaseToFrame @ 0x1400E37A0 (EtwTraceFlipManagerStopTokenReleaseToFrame.c)
 *     EtwTraceFlipManagerPresentQueueDepth @ 0x1400E37D0 (EtwTraceFlipManagerPresentQueueDepth.c)
 *     EtwTraceFlipManagerAddRemoveContent @ 0x14014E2F0 (EtwTraceFlipManagerAddRemoveContent.c)
 *     EtwTraceFlipManagerRemoveBuffer @ 0x1401582C0 (EtwTraceFlipManagerRemoveBuffer.c)
 *     EtwTraceFlipManagerCancelPosted @ 0x1401B4540 (EtwTraceFlipManagerCancelPosted.c)
 *     EtwTraceFlipManagerDiscardPresentAfterDestroy @ 0x1401B45E0 (EtwTraceFlipManagerDiscardPresentAfterDestroy.c)
 *     EtwTraceFlipManagerNoOpPresent @ 0x1401B46A0 (EtwTraceFlipManagerNoOpPresent.c)
 *     EtwTraceFlipManagerPresentIFlipPurgePreviousPresents @ 0x1401B4AB0 (EtwTraceFlipManagerPresentIFlipPurgePreviousPresents.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140033530 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qp_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = &a5;
  v12 = 0;
  v11 = 8;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v6);
}
