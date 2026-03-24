/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401532E0
 * Callers:
 *     FindQMsg @ 0x14008E400 (FindQMsg.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x14008F1D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     UserJobCallout @ 0x1400A4480 (UserJobCallout.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x140237494 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401532E0
 * Reason: Hex-Rays returned no pseudocode for 0x1401532E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401532E0: mov     [rsp+arg_0], rbx
 * 00000001401532E5: mov     [rsp+arg_8], rbp
 * 00000001401532EA: push    rsi
 * 00000001401532EB: sub     rsp, 60h
 * 00000001401532EF: movzx   esi, [rsp+68h+arg_30]
 * 00000001401532F7: mov     rbp, r9
 * 00000001401532FA: movzx   ebx, r8b
 * 00000001401532FE: test    dl, dl
 * 0000000140153300: jnz     loc_140153392
 * 0000000140153306: test    bl, bl
 * 0000000140153308: jz      short loc_140153381
 * 000000014015330A: mov     r9, [rsp+68h+arg_38]
 * 0000000140153312: lea     rax, [rsp+68h+arg_50]
 * 000000014015331A: mov     r8d, [rsp+68h+arg_28]
 * 0000000140153322: mov     rcx, rbp
 * 0000000140153325: movzx   edx, [rsp+68h+arg_20]
 * 000000014015332D: mov     [rsp+68h+var_10], 0
 * 0000000140153336: mov     [rsp+68h+var_18], 8
 * 000000014015333F: mov     [rsp+68h+var_20], rax
 * 0000000140153344: lea     rax, [rsp+68h+arg_48]
 * 000000014015334C: mov     [rsp+68h+var_28], 8
 * 0000000140153355: mov     [rsp+68h+var_30], rax
 * 000000014015335A: lea     rax, [rsp+68h+arg_40]
 * 0000000140153362: mov     [rsp+68h+var_38], 8
 * 000000014015336B: mov     [rsp+68h+var_40], rax
 * 0000000140153370: mov     word ptr [rsp+68h+var_48], si
 * 0000000140153375: call    cs:__imp_WppAutoLogTrace
 * 000000014015337C: nop     dword ptr [rax+rax+00h]
 * 0000000140153381: mov     rbx, [rsp+68h+arg_0]
 * 0000000140153386: mov     rbp, [rsp+68h+arg_8]
 * 000000014015338B: add     rsp, 60h
 * 000000014015338F: pop     rsi
 * 0000000140153390: retn
 * 0000000140153392: mov     rax, cs:pfnWppTraceMessage
 * 0000000140153399: lea     rdx, [rsp+68h+arg_50]
 * 00000001401533A1: mov     r8, [rsp+68h+arg_38]
 * 00000001401533A9: mov     r9d, esi
 * 00000001401533AC: mov     [rsp+68h+var_18], 0
 * 00000001401533B5: mov     [rsp+68h+var_20], 8
 * 00000001401533BE: mov     [rsp+68h+var_28], rdx
 * 00000001401533C3: lea     rdx, [rsp+68h+arg_48]
 * 00000001401533CB: mov     [rsp+68h+var_30], 8
 * 00000001401533D4: mov     [rsp+68h+var_38], rdx
 * 00000001401533D9: lea     rdx, [rsp+68h+arg_40]
 * 00000001401533E1: mov     [rsp+68h+var_40], 8
 * 00000001401533EA: mov     [rsp+68h+var_48], rdx
 * 00000001401533EF: mov     edx, 2Bh ; '+'
 * 00000001401533F4: call    _guard_dispatch_icall
 * 00000001401533F9: jmp     loc_140153306
 */
