/*
 * XREFs of HvlSkCrashdumpCallbackRoutine @ 0x14058A5D0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HvlpSnapshotCrashArea @ 0x14058AE10 (HvlpSnapshotCrashArea.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for HvlSkCrashdumpCallbackRoutine @ 0x14058A5D0
 * Reason: Hex-Rays returned no pseudocode for 0x14058A5D0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014058A5D0: mov     [rsp+arg_0], rbx
 * 000000014058A5D5: push    rdi
 * 000000014058A5D6: sub     rsp, 30h
 * 000000014058A5DA: mov     rbx, cs:Address
 * 000000014058A5E1: mov     rdi, gs:20h
 * 000000014058A5EA: call    HvlpSnapshotCrashArea
 * 000000014058A5EF: test    rbx, rbx
 * 000000014058A5F2: jz      short loc_14058A65F
 * 000000014058A5F4: mov     eax, [rbx+4]
 * 000000014058A5F7: test    al, 1
 * 000000014058A5F9: jz      short loc_14058A65F
 * 000000014058A5FB: mov     eax, [rdi+24h]
 * 000000014058A5FE: cmp     [rbx+0ACh], eax
 * 000000014058A604: jnz     short loc_14058A65B
 * 000000014058A606: mov     rax, cs:off_140E009E0
 * 000000014058A60D: mov     cl, 1
 * 000000014058A60F: and     cs:HvlEnlightenments, 2000h
 * 000000014058A619: call    _guard_dispatch_icall_no_overrides
 * 000000014058A61E: mov     rax, cs:off_140E008D8
 * 000000014058A625: mov     ecx, 1
 * 000000014058A62A: call    _guard_dispatch_icall_no_overrides
 * 000000014058A62F: mov     cs:KiHypervisorInitiatedCrashDump, 1
 * 000000014058A636: mov     rax, [rbx+28h]
 * 000000014058A63A: mov     r9, [rbx+20h]; BugCheckParameter3
 * 000000014058A63E: mov     r8, [rbx+18h]; BugCheckParameter2
 * 000000014058A642: mov     rdx, [rbx+10h]; BugCheckParameter1
 * 000000014058A646: mov     ecx, [rbx+8]; BugCheckCode
 * 000000014058A649: mov     [rsp+38h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014058A64E: mov     cs:PoAllProcIntrDisabled, 1
 * 000000014058A655: call    KeBugCheckEx
 * 000000014058A65B: pause
 * 000000014058A65D: jmp     short loc_14058A65B
 * 000000014058A65F: mov     rbx, [rsp+38h+arg_0]
 * 000000014058A664: xor     al, al
 * 000000014058A666: add     rsp, 30h
 * 000000014058A66A: pop     rdi
 * 000000014058A66B: retn
 */
