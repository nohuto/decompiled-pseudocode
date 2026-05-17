/*
 * XREFs of LdrpInitializationFailure @ 0x180065FF8
 * Callers:
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180065E3C (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180066090 (LdrpLogFatalLdrEtwEvent.c)
 *     NtRaiseHardError @ 0x180164B20 (NtRaiseHardError.c)
 */

/*
 * Hex-Rays decompilation failed for LdrpInitializationFailure @ 0x180065FF8
 * Reason: Hex-Rays returned no pseudocode for 0x180065FF8
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180065FF8: push    rbx
 * 0000000180065FFA: sub     rsp, 30h
 * 0000000180065FFE: and     [rsp+38h+arg_8], 0
 * 0000000180066003: lea     rax, aProcessInitial_0; "Process initialization failed with stat"...
 * 000000018006600A: movsxd  rbx, ecx
 * 000000018006600D: lea     r8, aLdrpinitializa; "LdrpInitializationFailure"
 * 0000000180066014: mov     dword ptr [rsp+38h+var_10], ebx; char
 * 0000000180066018: lea     rcx, aMinkernelLdrLd_7; "minkernel\\ldr\\ldrinit.c"
 * 000000018006601F: xor     r9d, r9d; int
 * 0000000180066022: mov     [rsp+38h+Format], rax; Format
 * 0000000180066027: mov     edx, 0BB4h; int
 * 000000018006602C: call    LdrpLogInternal
 * 0000000180066031: mov     rax, gs:60h
 * 000000018006603A: lea     rdx, LdrFatalInitError; "\a"
 * 0000000180066041: mov     rcx, [rax+20h]
 * 0000000180066045: add     rcx, 60h ; '`'
 * 0000000180066049: call    LdrpLogFatalLdrEtwEvent
 * 000000018006604E: cmp     cs:LdrpFatalHardErrorCount, 0
 * 0000000180066055: jz      short loc_18006605E
 * 0000000180066057: add     rsp, 30h
 * 000000018006605B: pop     rbx
 * 000000018006605C: retn
 * 000000018006605E: lea     rax, [rsp+38h+arg_8]
 * 0000000180066063: mov     [rsp+38h+arg_10], rbx
 * 0000000180066068: mov     edx, 1
 * 000000018006606D: mov     qword ptr [rsp+38h+var_10], rax
 * 0000000180066072: lea     r9, [rsp+38h+arg_10]
 * 0000000180066077: mov     dword ptr [rsp+38h+Format], edx
 * 000000018006607B: xor     r8d, r8d
 * 000000018006607E: mov     ecx, 0C0000145h
 * 0000000180066083: call    NtRaiseHardError
 * 0000000180066088: jmp     short loc_180066057
 */
