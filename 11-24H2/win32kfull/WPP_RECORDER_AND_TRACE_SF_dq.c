/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401C696C
 * Callers:
 *     NtUserNotifyWinEvent @ 0x14003F1C0 (NtUserNotifyWinEvent.c)
 *     UserJobCallout @ 0x1400A4480 (UserJobCallout.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401AF538 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     NtUserInjectTouchInput @ 0x140243180 (NtUserInjectTouchInput.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140275A1C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1402C1B90 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C1F74 (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401C696C
 * Reason: Hex-Rays returned no pseudocode for 0x1401C696C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C696C: mov     [rsp+arg_0], rbx
 * 00000001401C6971: mov     [rsp+arg_8], rsi
 * 00000001401C6976: push    rdi
 * 00000001401C6977: sub     rsp, 50h
 * 00000001401C697B: movzx   ebx, [rsp+58h+arg_30]
 * 00000001401C6983: mov     rsi, r9
 * 00000001401C6986: mov     dil, r8b
 * 00000001401C6989: test    dl, dl
 * 00000001401C698B: jnz     short loc_1401C69FE
 * 00000001401C698D: test    dil, dil
 * 00000001401C6990: jz      short loc_1401C69ED
 * 00000001401C6992: and     [rsp+58h+var_10], 0
 * 00000001401C6998: lea     rax, [rsp+58h+arg_48]
 * 00000001401C69A0: mov     r9, [rsp+58h+arg_38]
 * 00000001401C69A8: mov     edx, 4
 * 00000001401C69AD: mov     r8d, [rsp+58h+arg_28]
 * 00000001401C69B5: mov     rcx, rsi
 * 00000001401C69B8: mov     [rsp+58h+var_18], 8
 * 00000001401C69C1: mov     [rsp+58h+var_20], rax
 * 00000001401C69C6: lea     rax, [rsp+58h+arg_40]
 * 00000001401C69CE: mov     [rsp+58h+var_28], 4
 * 00000001401C69D7: mov     [rsp+58h+var_30], rax
 * 00000001401C69DC: mov     word ptr [rsp+58h+var_38], bx
 * 00000001401C69E1: call    cs:__imp_WppAutoLogTrace
 * 00000001401C69E8: nop     dword ptr [rax+rax+00h]
 * 00000001401C69ED: mov     rbx, [rsp+58h+arg_0]
 * 00000001401C69F2: mov     rsi, [rsp+58h+arg_8]
 * 00000001401C69F7: add     rsp, 50h
 * 00000001401C69FB: pop     rdi
 * 00000001401C69FC: retn
 * 00000001401C69FE: and     [rsp+58h+var_18], 0
 * 00000001401C6A04: lea     rdx, [rsp+58h+arg_48]
 * 00000001401C6A0C: mov     rax, cs:pfnWppTraceMessage
 * 00000001401C6A13: mov     r9d, ebx
 * 00000001401C6A16: mov     r8, [rsp+58h+arg_38]
 * 00000001401C6A1E: mov     [rsp+58h+var_20], 8
 * 00000001401C6A27: mov     [rsp+58h+var_28], rdx
 * 00000001401C6A2C: lea     rdx, [rsp+58h+arg_40]
 * 00000001401C6A34: mov     [rsp+58h+var_30], 4
 * 00000001401C6A3D: mov     [rsp+58h+var_38], rdx
 * 00000001401C6A42: mov     edx, 2Bh ; '+'
 * 00000001401C6A47: call    _guard_dispatch_icall
 * 00000001401C6A4C: jmp     loc_1401C698D
 */
