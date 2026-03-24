/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x14058A3B0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HvlpSnapshotCrashArea @ 0x14058AE10 (HvlpSnapshotCrashArea.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for HvlCrashdumpCallbackRoutine @ 0x14058A3B0
 * Reason: Hex-Rays returned no pseudocode for 0x14058A3B0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014058A3B0: push    rbx
 * 000000014058A3B2: sub     rsp, 30h
 * 000000014058A3B6: call    HvlpSnapshotCrashArea
 * 000000014058A3BB: mov     rbx, cs:Address
 * 000000014058A3C2: test    rbx, rbx
 * 000000014058A3C5: jz      short loc_14058A412
 * 000000014058A3C7: mov     eax, [rbx+4]
 * 000000014058A3CA: test    al, 1
 * 000000014058A3CC: jz      short loc_14058A412
 * 000000014058A3CE: mov     rax, cs:off_140E008D8
 * 000000014058A3D5: mov     ecx, 1
 * 000000014058A3DA: call    _guard_dispatch_icall_no_overrides
 * 000000014058A3DF: mov     cs:KiHypervisorInitiatedCrashDump, 1
 * 000000014058A3E6: mov     ecx, 20001h; BugCheckCode
 * 000000014058A3EB: mov     rax, [rbx+0D0h]
 * 000000014058A3F2: mov     r9, [rbx+0C8h]; BugCheckParameter3
 * 000000014058A3F9: mov     r8, [rbx+0C0h]; BugCheckParameter2
 * 000000014058A400: mov     rdx, [rbx+0B8h]; BugCheckParameter1
 * 000000014058A407: mov     [rsp+38h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014058A40C: call    KeBugCheckEx
 * 000000014058A412: xor     al, al
 * 000000014058A414: add     rsp, 30h
 * 000000014058A418: pop     rbx
 * 000000014058A419: retn
 */
