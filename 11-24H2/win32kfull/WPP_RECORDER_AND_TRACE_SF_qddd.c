/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140165FF4
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x140238CF0 (xxxAppAdjustDpiCandidateRect.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A6280 (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A8928 (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140165FF4
 * Reason: Hex-Rays returned no pseudocode for 0x140165FF4
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140165FF4: mov     [rsp+arg_0], rbx
 * 0000000140165FF9: mov     [rsp+arg_8], rbp
 * 0000000140165FFE: mov     [rsp+arg_10], rsi
 * 0000000140166003: push    rdi
 * 0000000140166004: sub     rsp, 70h
 * 0000000140166008: movzx   edi, [rsp+78h+arg_30]
 * 0000000140166010: mov     rsi, r9
 * 0000000140166013: mov     bl, r8b
 * 0000000140166016: mov     ebp, 4
 * 000000014016601B: test    dl, dl
 * 000000014016601D: jnz     loc_1401660BC
 * 0000000140166023: test    bl, bl
 * 0000000140166025: jz      short loc_1401660A5
 * 0000000140166027: and     [rsp+78h+var_10], 0
 * 000000014016602D: lea     rax, [rsp+78h+arg_58]
 * 0000000140166035: mov     r9, [rsp+78h+arg_38]
 * 000000014016603D: mov     rcx, rsi
 * 0000000140166040: mov     r8d, [rsp+78h+arg_28]
 * 0000000140166048: movzx   edx, [rsp+78h+arg_20]
 * 0000000140166050: mov     [rsp+78h+var_18], rbp
 * 0000000140166055: mov     [rsp+78h+var_20], rax
 * 000000014016605A: lea     rax, [rsp+78h+arg_50]
 * 0000000140166062: mov     [rsp+78h+var_28], rbp
 * 0000000140166067: mov     [rsp+78h+var_30], rax
 * 000000014016606C: lea     rax, [rsp+78h+arg_48]
 * 0000000140166074: mov     [rsp+78h+var_38], rbp
 * 0000000140166079: mov     [rsp+78h+var_40], rax
 * 000000014016607E: lea     rax, [rsp+78h+arg_40]
 * 0000000140166086: mov     [rsp+78h+var_48], 8
 * 000000014016608F: mov     [rsp+78h+var_50], rax
 * 0000000140166094: mov     word ptr [rsp+78h+var_58], di
 * 0000000140166099: call    cs:__imp_WppAutoLogTrace
 * 00000001401660A0: nop     dword ptr [rax+rax+00h]
 * 00000001401660A5: lea     r11, [rsp+78h+var_8]
 * 00000001401660AA: mov     rbx, [r11+10h]
 * 00000001401660AE: mov     rbp, [r11+18h]
 * 00000001401660B2: mov     rsi, [r11+20h]
 * 00000001401660B6: mov     rsp, r11
 * 00000001401660B9: pop     rdi
 * 00000001401660BA: retn
 * 00000001401660BC: and     [rsp+78h+var_18], 0
 * 00000001401660C2: lea     rdx, [rsp+78h+arg_58]
 * 00000001401660CA: mov     rax, cs:pfnWppTraceMessage
 * 00000001401660D1: mov     r9d, edi
 * 00000001401660D4: mov     r8, [rsp+78h+arg_38]
 * 00000001401660DC: mov     [rsp+78h+var_20], rbp
 * 00000001401660E1: mov     [rsp+78h+var_28], rdx
 * 00000001401660E6: lea     rdx, [rsp+78h+arg_50]
 * 00000001401660EE: mov     [rsp+78h+var_30], rbp
 * 00000001401660F3: mov     [rsp+78h+var_38], rdx
 * 00000001401660F8: lea     rdx, [rsp+78h+arg_48]
 * 0000000140166100: mov     [rsp+78h+var_40], rbp
 * 0000000140166105: mov     [rsp+78h+var_48], rdx
 * 000000014016610A: lea     rdx, [rsp+78h+arg_40]
 * 0000000140166112: mov     [rsp+78h+var_50], 8
 * 000000014016611B: mov     [rsp+78h+var_58], rdx
 * 0000000140166120: mov     edx, 2Bh ; '+'
 * 0000000140166125: call    _guard_dispatch_icall
 * 000000014016612A: jmp     loc_140166023
 */
