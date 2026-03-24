/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8
 * Callers:
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x140045FEC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x140068228 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1401177BC (xxxBroadcastMessageEx.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014BC38 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x14014D390 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x14014D534 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14014DB80 (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x14014EF70 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z @ 0x1401C3F00 (-xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1401CC36C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x140222504 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x140254CA4 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 *     NtUserConvertToInterceptWindow @ 0x1402934C0 (NtUserConvertToInterceptWindow.c)
 *     NtUserEnterMoveSizeLoop @ 0x1402948F0 (NtUserEnterMoveSizeLoop.c)
 *     NtUserInjectTouchpadAction @ 0x140298FF0 (NtUserInjectTouchpadAction.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402C0A80 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C0CD0 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C2740 (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C3AAC (-ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402C52E0 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C6544 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402C7288 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402CA098 (-PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402CF198 (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E1D78 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8
 * Reason: Hex-Rays returned no pseudocode for 0x1401162C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401162C8: mov     r11, rsp
 * 00000001401162CB: mov     [r11+8], rbx
 * 00000001401162CF: mov     [r11+10h], rsi
 * 00000001401162D3: push    rdi
 * 00000001401162D4: sub     rsp, 50h
 * 00000001401162D8: movzx   ebx, [rsp+58h+arg_30]
 * 00000001401162E0: mov     rsi, r9
 * 00000001401162E3: mov     dil, r8b
 * 00000001401162E6: test    dl, dl
 * 00000001401162E8: jz      short loc_14011632B
 * 00000001401162EA: and     qword ptr [r11-18h], 0
 * 00000001401162EF: lea     rdx, [r11+50h]
 * 00000001401162F3: mov     rax, cs:pfnWppTraceMessage
 * 00000001401162FA: mov     r9d, ebx
 * 00000001401162FD: mov     r8, [rsp+58h+arg_38]
 * 0000000140116305: mov     qword ptr [r11-20h], 4
 * 000000014011630D: mov     [r11-28h], rdx
 * 0000000140116311: lea     rdx, [r11+48h]
 * 0000000140116315: mov     qword ptr [r11-30h], 8
 * 000000014011631D: mov     [r11-38h], rdx
 * 0000000140116321: mov     edx, 2Bh ; '+'
 * 0000000140116326: call    _guard_dispatch_icall
 * 000000014011632B: test    dil, dil
 * 000000014011632E: jz      short loc_14011638E
 * 0000000140116330: and     [rsp+58h+var_10], 0
 * 0000000140116336: lea     rax, [rsp+58h+arg_48]
 * 000000014011633E: mov     r9, [rsp+58h+arg_38]
 * 0000000140116346: mov     rcx, rsi
 * 0000000140116349: mov     r8d, [rsp+58h+arg_28]
 * 0000000140116351: movzx   edx, [rsp+58h+arg_20]
 * 0000000140116359: mov     [rsp+58h+var_18], 4
 * 0000000140116362: mov     [rsp+58h+var_20], rax
 * 0000000140116367: lea     rax, [rsp+58h+arg_40]
 * 000000014011636F: mov     [rsp+58h+var_28], 8
 * 0000000140116378: mov     [rsp+58h+var_30], rax
 * 000000014011637D: mov     [rsp+58h+var_38], bx
 * 0000000140116382: call    cs:__imp_WppAutoLogTrace
 * 0000000140116389: nop     dword ptr [rax+rax+00h]
 * 000000014011638E: mov     rbx, [rsp+58h+arg_0]
 * 0000000140116393: mov     rsi, [rsp+58h+arg_8]
 * 0000000140116398: add     rsp, 50h
 * 000000014011639C: pop     rdi
 * 000000014011639D: retn
 */
