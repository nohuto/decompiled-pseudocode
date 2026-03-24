/*
 * XREFs of HvlSkCrashdumpCallbackRoutine @ 0x140586F60
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HvlpSnapshotCrashArea @ 0x1405877A0 (HvlpSnapshotCrashArea.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for HvlSkCrashdumpCallbackRoutine @ 0x140586F60
 * Reason: Hex-Rays returned no pseudocode for 0x140586F60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140586F60: mov     [rsp+arg_0], rbx
 * 0000000140586F65: push    rdi
 * 0000000140586F66: sub     rsp, 30h
 * 0000000140586F6A: mov     rbx, cs:Address
 * 0000000140586F71: mov     rdi, gs:20h
 * 0000000140586F7A: call    HvlpSnapshotCrashArea
 * 0000000140586F7F: test    rbx, rbx
 * 0000000140586F82: jz      short loc_140586FEF
 * 0000000140586F84: mov     eax, [rbx+4]
 * 0000000140586F87: test    al, 1
 * 0000000140586F89: jz      short loc_140586FEF
 * 0000000140586F8B: mov     eax, [rdi+24h]
 * 0000000140586F8E: cmp     [rbx+0ACh], eax
 * 0000000140586F94: jnz     short loc_140586FEB
 * 0000000140586F96: mov     rax, cs:off_140E009E0
 * 0000000140586F9D: mov     cl, 1
 * 0000000140586F9F: and     cs:HvlEnlightenments, 2000h
 * 0000000140586FA9: call    _guard_dispatch_icall_no_overrides
 * 0000000140586FAE: mov     rax, cs:off_140E008D8
 * 0000000140586FB5: mov     ecx, 1
 * 0000000140586FBA: call    _guard_dispatch_icall_no_overrides
 * 0000000140586FBF: mov     cs:KiHypervisorInitiatedCrashDump, 1
 * 0000000140586FC6: mov     rax, [rbx+28h]
 * 0000000140586FCA: mov     r9, [rbx+20h]; BugCheckParameter3
 * 0000000140586FCE: mov     r8, [rbx+18h]; BugCheckParameter2
 * 0000000140586FD2: mov     rdx, [rbx+10h]; BugCheckParameter1
 * 0000000140586FD6: mov     ecx, [rbx+8]; BugCheckCode
 * 0000000140586FD9: mov     [rsp+38h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140586FDE: mov     cs:PoAllProcIntrDisabled, 1
 * 0000000140586FE5: call    KeBugCheckEx
 * 0000000140586FEB: pause
 * 0000000140586FED: jmp     short loc_140586FEB
 * 0000000140586FEF: mov     rbx, [rsp+38h+arg_0]
 * 0000000140586FF4: xor     al, al
 * 0000000140586FF6: add     rsp, 30h
 * 0000000140586FFA: pop     rdi
 * 0000000140586FFB: retn
 */
