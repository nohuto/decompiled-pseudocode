/*
 * XREFs of RtlReportException @ 0x1800CF050
 * Callers:
 *     LdrpInitializeNode @ 0x180073610 (LdrpInitializeNode.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     LdrpProcessDetachNode @ 0x1800DFDC4 (LdrpProcessDetachNode.c)
 *     LdrAppxHandleIntegrityFailure @ 0x180118F10 (LdrAppxHandleIntegrityFailure.c)
 *     RtlReportFatalFailure @ 0x18011A3AC (RtlReportFatalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180120F20 (RtlUnhandledExceptionFilter2.c)
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x180134294 (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     RtlReportExceptionEx @ 0x180135B80 (RtlReportExceptionEx.c)
 *     UcOnUnexpectedCodePath @ 0x180158AB0 (UcOnUnexpectedCodePath.c)
 *     TppReportExceptionFilter @ 0x18015DD1C (TppReportExceptionFilter.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18015DE74 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015DF0C (TppWorkerpOuterExceptionFilter.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x180160314 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180161AC8 (LdrpLogIntegrityContinuityTelemetry.c)
 * Callees:
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800CF0F4 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlReportExceptionHelper @ 0x1800CF388 (RtlReportExceptionHelper.c)
 *     WerpIsProcessNative @ 0x18011F604 (WerpIsProcessNative.c)
 */

/*
 * Hex-Rays decompilation failed for RtlReportException @ 0x1800CF050
 * Reason: Hex-Rays returned no pseudocode for 0x1800CF050
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800CF050: mov     rax, rsp
 * 00000001800CF053: mov     [rax+8], rbx
 * 00000001800CF057: mov     [rax+10h], rbp
 * 00000001800CF05B: mov     [rax+18h], rsi
 * 00000001800CF05F: push    rdi
 * 00000001800CF060: sub     rsp, 20h
 * 00000001800CF064: and     qword ptr [rax+20h], 0
 * 00000001800CF069: mov     edi, r8d
 * 00000001800CF06C: mov     rsi, rdx
 * 00000001800CF06F: mov     rbp, rcx
 * 00000001800CF072: test    r8d, 0FFFFFFE0h
 * 00000001800CF079: jz      short loc_1800CF096
 * 00000001800CF07B: mov     eax, 0C000000Dh
 * 00000001800CF080: mov     rbx, [rsp+28h+arg_0]
 * 00000001800CF085: mov     rbp, [rsp+28h+arg_8]
 * 00000001800CF08A: mov     rsi, [rsp+28h+arg_10]
 * 00000001800CF08F: add     rsp, 20h
 * 00000001800CF093: pop     rdi
 * 00000001800CF094: retn
 * 00000001800CF096: call    WerpBreakIntoDebuggerIfPresent
 * 00000001800CF09B: cmp     cs:LdrpIsSecureProcess, 0
 * 00000001800CF0A2: jnz     short loc_1800CF0DC
 * 00000001800CF0A4: call    WerpIsProcessNative
 * 00000001800CF0A9: test    eax, eax
 * 00000001800CF0AB: jnz     short loc_1800CF0E0
 * 00000001800CF0AD: neg     eax
 * 00000001800CF0AF: mov     r8d, edi
 * 00000001800CF0B2: lea     rax, [rsp+28h+arg_18]
 * 00000001800CF0B7: mov     rdx, rsi
 * 00000001800CF0BA: sbb     r9, r9
 * 00000001800CF0BD: mov     rcx, rbp
 * 00000001800CF0C0: and     r9, rax
 * 00000001800CF0C3: call    RtlReportExceptionHelper
 * 00000001800CF0C8: mov     r8d, edi
 * 00000001800CF0CB: mov     rdx, rsi; ContextRecord
 * 00000001800CF0CE: mov     rcx, rbp; ExceptionRecord
 * 00000001800CF0D1: mov     ebx, eax
 * 00000001800CF0D3: call    WerpBreakIntoDebuggerIfPresent
 * 00000001800CF0D8: mov     eax, ebx
 * 00000001800CF0DA: jmp     short loc_1800CF080
 * 00000001800CF0DC: xor     eax, eax
 * 00000001800CF0DE: jmp     short loc_1800CF080
 * 00000001800CF0E0: mov     [rsp+28h+arg_18], 0FFFFFFFFEE1E5D00h
 * 00000001800CF0E9: jmp     short loc_1800CF0AD
 */
