/*
 * XREFs of HvlSkCrashdumpCallbackRoutine @ 0x1405878C0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvlpSnapshotCrashArea @ 0x140588100 (HvlpSnapshotCrashArea.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for HvlSkCrashdumpCallbackRoutine @ 0x1405878C0
 * Reason: Hex-Rays returned no pseudocode for 0x1405878C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405878C0: mov     [rsp+arg_0], rbx
 * 00000001405878C5: push    rdi
 * 00000001405878C6: sub     rsp, 30h
 * 00000001405878CA: mov     rbx, cs:Address
 * 00000001405878D1: mov     rdi, gs:20h
 * 00000001405878DA: call    HvlpSnapshotCrashArea
 * 00000001405878DF: test    rbx, rbx
 * 00000001405878E2: jz      short loc_14058794F
 * 00000001405878E4: mov     eax, [rbx+4]
 * 00000001405878E7: test    al, 1
 * 00000001405878E9: jz      short loc_14058794F
 * 00000001405878EB: mov     eax, [rdi+24h]
 * 00000001405878EE: cmp     [rbx+0ACh], eax
 * 00000001405878F4: jnz     short loc_14058794B
 * 00000001405878F6: mov     rax, cs:off_140E009E0
 * 00000001405878FD: mov     cl, 1
 * 00000001405878FF: and     cs:HvlEnlightenments, 2000h
 * 0000000140587909: call    _guard_dispatch_icall_no_overrides
 * 000000014058790E: mov     rax, cs:off_140E008D8
 * 0000000140587915: mov     ecx, 1
 * 000000014058791A: call    _guard_dispatch_icall_no_overrides
 * 000000014058791F: mov     cs:KiHypervisorInitiatedCrashDump, 1
 * 0000000140587926: mov     rax, [rbx+28h]
 * 000000014058792A: mov     r9, [rbx+20h]; BugCheckParameter3
 * 000000014058792E: mov     r8, [rbx+18h]; BugCheckParameter2
 * 0000000140587932: mov     rdx, [rbx+10h]; BugCheckParameter1
 * 0000000140587936: mov     ecx, [rbx+8]; BugCheckCode
 * 0000000140587939: mov     [rsp+38h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014058793E: mov     cs:PoAllProcIntrDisabled, 1
 * 0000000140587945: call    KeBugCheckEx
 * 000000014058794B: pause
 * 000000014058794D: jmp     short loc_14058794B
 * 000000014058794F: mov     rbx, [rsp+38h+arg_0]
 * 0000000140587954: xor     al, al
 * 0000000140587956: add     rsp, 30h
 * 000000014058795A: pop     rdi
 * 000000014058795B: retn
 */
