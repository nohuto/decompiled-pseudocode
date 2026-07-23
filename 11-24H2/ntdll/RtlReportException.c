/*
 * XREFs of RtlReportException @ 0x18010B4F0
 * Callers:
 *     LdrpCallTlsInitializers @ 0x18003F930 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x18008C3E0 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x1800DE6E4 (LdrpProcessDetachNode.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1801111B0 (LdrAppxHandleIntegrityFailure.c)
 *     RtlReportFatalFailure @ 0x18011215C (RtlReportFatalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011D880 (RtlUnhandledExceptionFilter2.c)
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x1801309E4 (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     RtlReportExceptionEx @ 0x180132500 (RtlReportExceptionEx.c)
 *     UcOnUnexpectedCodePath @ 0x1801558C0 (UcOnUnexpectedCodePath.c)
 *     TppReportExceptionFilter @ 0x18015AB7C (TppReportExceptionFilter.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18015ACD4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015AD6C (TppWorkerpOuterExceptionFilter.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015D1D0 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015E938 (LdrpLogIntegrityContinuityTelemetry.c)
 * Callees:
 *     RtlReportExceptionHelper @ 0x1800ABF6C (RtlReportExceptionHelper.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010B594 (WerpBreakIntoDebuggerIfPresent.c)
 *     WerpIsProcessNative @ 0x18011BF64 (WerpIsProcessNative.c)
 */

/*
 * Hex-Rays decompilation failed for RtlReportException @ 0x18010B4F0
 * Reason: Hex-Rays returned no pseudocode for 0x18010B4F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018010B4F0: mov     rax, rsp
 * 000000018010B4F3: mov     [rax+8], rbx
 * 000000018010B4F7: mov     [rax+10h], rbp
 * 000000018010B4FB: mov     [rax+18h], rsi
 * 000000018010B4FF: push    rdi
 * 000000018010B500: sub     rsp, 20h
 * 000000018010B504: and     qword ptr [rax+20h], 0
 * 000000018010B509: mov     edi, r8d
 * 000000018010B50C: mov     rsi, rdx
 * 000000018010B50F: mov     rbp, rcx
 * 000000018010B512: test    r8d, 0FFFFFFE0h
 * 000000018010B519: jz      short loc_18010B536
 * 000000018010B51B: mov     eax, 0C000000Dh
 * 000000018010B520: mov     rbx, [rsp+28h+arg_0]
 * 000000018010B525: mov     rbp, [rsp+28h+arg_8]
 * 000000018010B52A: mov     rsi, [rsp+28h+arg_10]
 * 000000018010B52F: add     rsp, 20h
 * 000000018010B533: pop     rdi
 * 000000018010B534: retn
 * 000000018010B536: call    WerpBreakIntoDebuggerIfPresent
 * 000000018010B53B: cmp     cs:LdrpIsSecureProcess, 0
 * 000000018010B542: jnz     short loc_18010B57C
 * 000000018010B544: call    WerpIsProcessNative
 * 000000018010B549: test    eax, eax
 * 000000018010B54B: jnz     short loc_18010B580
 * 000000018010B54D: neg     eax
 * 000000018010B54F: mov     r8d, edi
 * 000000018010B552: lea     rax, [rsp+28h+arg_18]
 * 000000018010B557: mov     rdx, rsi
 * 000000018010B55A: sbb     r9, r9
 * 000000018010B55D: mov     rcx, rbp
 * 000000018010B560: and     r9, rax
 * 000000018010B563: call    RtlReportExceptionHelper
 * 000000018010B568: mov     r8d, edi
 * 000000018010B56B: mov     rdx, rsi; ContextRecord
 * 000000018010B56E: mov     rcx, rbp; ExceptionRecord
 * 000000018010B571: mov     ebx, eax
 * 000000018010B573: call    WerpBreakIntoDebuggerIfPresent
 * 000000018010B578: mov     eax, ebx
 * 000000018010B57A: jmp     short loc_18010B520
 * 000000018010B57C: xor     eax, eax
 * 000000018010B57E: jmp     short loc_18010B520
 * 000000018010B580: mov     [rsp+28h+arg_18], 0FFFFFFFFEE1E5D00h
 * 000000018010B589: jmp     short loc_18010B54D
 */
