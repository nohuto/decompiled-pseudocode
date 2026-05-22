/*
 * XREFs of ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180057F60
 * Callers:
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180057C0C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x1800945D0 (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800AC700 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800D7510 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800D7AF0 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180132C34 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?FindDCompTargetIdForPoint@GestureServices@@AEAA?AV?$tuple@V?$optional@UtagCOMPOSITION_TARGET_ID@@@std@@PEBG@std@@UtagPOINT@@IPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18014015C (-FindDCompTargetIdForPoint@GestureServices@@AEAA-AV-$tuple@V-$optional@UtagCOMPOSITION_TARGET_ID.c)
 *     ?OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180145410 (-OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801A7168 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801A72A0 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall gsl::details::extent_type<-1>::extent_type<-1>(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  if ( a2 == -1 )
  {
    _o_terminate(a1);
    __debugbreak();
    JUMPOUT(0x180057F83LL);
  }
  return a1;
}
