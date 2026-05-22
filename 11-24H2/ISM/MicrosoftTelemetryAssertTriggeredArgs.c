/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x18008B160
 * Callers:
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001BC80 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x1800224D0 (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 *     ?FindFrame@PointerInputMediator@@CA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@I@Z @ 0x1800314C8 (-FindFrame@PointerInputMediator@@CA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPo.c)
 *     ?RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x18006AB9C (-RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z.c)
 *     ?OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180083580 (-OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180089560 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A7BC (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180142468 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 *     ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180145A00 (-SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Interna.c)
 *     ?HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z @ 0x18015ABF4 (-HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z.c)
 *     ?StopProcess@InputProcessManager@@QEAAXXZ @ 0x18019C190 (-StopProcess@InputProcessManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  FARPROC ProcAddress; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+4Ch] [rbp-14h]
  int v10; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]
  HMODULE phModule; // [rsp+70h] [rbp+10h] BYREF

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v10 = 1;
        v7[1] = &_ImageBase;
        v7[3] = 1LL;
        v7[2] = retaddr;
        v7[4] = "IXPTelAssert";
        v7[0] = 11LL;
        v8 = a2;
        v9 = a3;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(_QWORD *))ProcAddress)(v7);
      }
    }
  }
  return (int)ProcAddress;
}
