/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC
 * Callers:
 *     xxxProcessHidInput @ 0x14004A660 (xxxProcessHidInput.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008B0C0 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008B318 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008D9B8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008E06C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x14008F1D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     UserJobCallout @ 0x1400A4480 (UserJobCallout.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1400A4CD0 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1400A6748 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1400F7A10 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     EditionUpdateInputTransformFromHitTest @ 0x14010F850 (EditionUpdateInputTransformFromHitTest.c)
 *     ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x140149C50 (-SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x140185D10 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     DestroyThreadsMessages @ 0x1401A1840 (DestroyThreadsMessages.c)
 *     RemoveProcessFromJob @ 0x1401B81E0 (RemoveProcessFromJob.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1401FA120 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14021D768 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14022BB34 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x140232410 (_anonymous_namespace_--OnForegroundWindowChanged.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x14024F108 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1402561B4 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140271E98 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserConvertToInterceptWindow @ 0x1402934C0 (NtUserConvertToInterceptWindow.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1474 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402CE934 (-xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402E6618 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1402E6E60 (xxxSBTrackInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC
 * Reason: Hex-Rays returned no pseudocode for 0x1400A4BAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400A4BAC: mov     [rsp+arg_0], rbx
 * 00000001400A4BB1: mov     [rsp+arg_8], rbp
 * 00000001400A4BB6: mov     [rsp+arg_10], rsi
 * 00000001400A4BBB: push    rdi
 * 00000001400A4BBC: sub     rsp, 50h
 * 00000001400A4BC0: movzx   ebx, [rsp+58h+arg_30]
 * 00000001400A4BC8: mov     rsi, r9
 * 00000001400A4BCB: mov     dil, r8b
 * 00000001400A4BCE: mov     ebp, 8
 * 00000001400A4BD3: test    dl, dl
 * 00000001400A4BD5: jnz     short loc_1400A4C48
 * 00000001400A4BD7: test    dil, dil
 * 00000001400A4BDA: jz      short loc_1400A4C32
 * 00000001400A4BDC: and     [rsp+58h+var_10], 0
 * 00000001400A4BE2: lea     rax, [rsp+58h+arg_48]
 * 00000001400A4BEA: mov     r9, [rsp+58h+arg_38]
 * 00000001400A4BF2: mov     rcx, rsi
 * 00000001400A4BF5: mov     r8d, [rsp+58h+arg_28]
 * 00000001400A4BFD: movzx   edx, [rsp+58h+arg_20]
 * 00000001400A4C05: mov     [rsp+58h+var_18], rbp
 * 00000001400A4C0A: mov     [rsp+58h+var_20], rax
 * 00000001400A4C0F: lea     rax, [rsp+58h+arg_40]
 * 00000001400A4C17: mov     [rsp+58h+var_28], rbp
 * 00000001400A4C1C: mov     [rsp+58h+var_30], rax
 * 00000001400A4C21: mov     word ptr [rsp+58h+var_38], bx
 * 00000001400A4C26: call    cs:__imp_WppAutoLogTrace
 * 00000001400A4C2D: nop     dword ptr [rax+rax+00h]
 * 00000001400A4C32: mov     rbx, [rsp+58h+arg_0]
 * 00000001400A4C37: mov     rbp, [rsp+58h+arg_8]
 * 00000001400A4C3C: mov     rsi, [rsp+58h+arg_10]
 * 00000001400A4C41: add     rsp, 50h
 * 00000001400A4C45: pop     rdi
 * 00000001400A4C46: retn
 * 00000001400A4C48: and     [rsp+58h+var_18], 0
 * 00000001400A4C4E: lea     rdx, [rsp+58h+arg_48]
 * 00000001400A4C56: mov     rax, cs:pfnWppTraceMessage
 * 00000001400A4C5D: mov     r9d, ebx
 * 00000001400A4C60: mov     r8, [rsp+58h+arg_38]
 * 00000001400A4C68: mov     [rsp+58h+var_20], rbp
 * 00000001400A4C6D: mov     [rsp+58h+var_28], rdx
 * 00000001400A4C72: lea     rdx, [rsp+58h+arg_40]
 * 00000001400A4C7A: mov     [rsp+58h+var_30], rbp
 * 00000001400A4C7F: mov     [rsp+58h+var_38], rdx
 * 00000001400A4C84: mov     edx, 2Bh ; '+'
 * 00000001400A4C89: call    _guard_dispatch_icall
 * 00000001400A4C8E: jmp     loc_1400A4BD7
 */
