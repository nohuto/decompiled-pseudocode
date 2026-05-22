/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A279C
 * Callers:
 *     ?Create@InputSystemInternalServerConnection@@SA?AV?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18000CD64 (-Create@InputSystemInternalServerConnection@@SA-AV-$ComPtr@VInputSystemInternalServerConnection@.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18000DA9C (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InitPort@NonBamoInputDeliveryServer@@AEAAXXZ @ 0x18005B81C (-InitPort@NonBamoInputDeliveryServer@@AEAAXXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18007EFC8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007F064 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180092D38 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18009ADA4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800A153C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x1800BEB04 (--0MPCCursorManager@@QEAA@XZ.c)
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800BECA4 (--1MPCCursorManager@@QEAA@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800BEF0C (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     ?StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z @ 0x1800CCCD0 (-StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z.c)
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E63C4 (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x180102460 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180104740 (-SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_K@Z @ 0x180131240 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_.c)
 *     ?TimeFromPerfCount@EdgyRecognizer@@AEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x180156024 (-TimeFromPerfCount@EdgyRecognizer@@AEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU.c)
 *     ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x1801984D0 (-UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 *     ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x18019B560 (-ISMShutDown@InputProcessManager@@AEAAXXZ.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801AE528 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x18009F3BC (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<3>(this, a2, a3, a4, v4, retaddr);
}
