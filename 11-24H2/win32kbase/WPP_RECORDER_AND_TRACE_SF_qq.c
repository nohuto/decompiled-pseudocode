/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C
 * Callers:
 *     EtwTraceUIPIInputError @ 0x1400256B0 (EtwTraceUIPIInputError.c)
 *     rimSignalReadComplete @ 0x14005D0F0 (rimSignalReadComplete.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x14005DED8 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     HandleDeferredInput @ 0x1400C06B0 (HandleDeferredInput.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x140112334 (RIMGetPnpActionBitsFromGuid.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     rimDereferenceDev @ 0x140133C98 (rimDereferenceDev.c)
 *     rimInputApc @ 0x14017F8E0 (rimInputApc.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018A840 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1401978F8 (RIMQueueAndSignalAsyncWorkItem.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401BC710 (NtUserMapPointsByVisualIdentifier.c)
 *     rimObsAddInputObserver @ 0x1401EEEE4 (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1401EFE74 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               8LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, a5, a6, a8, v11, (__int64 *)va, 8LL, va1, 8LL, 0LL);
  }
  return result;
}
