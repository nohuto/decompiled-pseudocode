/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x140586D40
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HvlpSnapshotCrashArea @ 0x1405877A0 (HvlpSnapshotCrashArea.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for HvlCrashdumpCallbackRoutine @ 0x140586D40
 * Reason: Hex-Rays returned no pseudocode for 0x140586D40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140586D40: push    rbx
 * 0000000140586D42: sub     rsp, 30h
 * 0000000140586D46: call    HvlpSnapshotCrashArea
 * 0000000140586D4B: mov     rbx, cs:Address
 * 0000000140586D52: test    rbx, rbx
 * 0000000140586D55: jz      short loc_140586DA2
 * 0000000140586D57: mov     eax, [rbx+4]
 * 0000000140586D5A: test    al, 1
 * 0000000140586D5C: jz      short loc_140586DA2
 * 0000000140586D5E: mov     rax, cs:off_140E008D8
 * 0000000140586D65: mov     ecx, 1
 * 0000000140586D6A: call    _guard_dispatch_icall_no_overrides
 * 0000000140586D6F: mov     cs:KiHypervisorInitiatedCrashDump, 1
 * 0000000140586D76: mov     ecx, 20001h; BugCheckCode
 * 0000000140586D7B: mov     rax, [rbx+0D0h]
 * 0000000140586D82: mov     r9, [rbx+0C8h]; BugCheckParameter3
 * 0000000140586D89: mov     r8, [rbx+0C0h]; BugCheckParameter2
 * 0000000140586D90: mov     rdx, [rbx+0B8h]; BugCheckParameter1
 * 0000000140586D97: mov     [rsp+38h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140586D9C: call    KeBugCheckEx
 * 0000000140586DA2: xor     al, al
 * 0000000140586DA4: add     rsp, 30h
 * 0000000140586DA8: pop     rbx
 * 0000000140586DA9: retn
 */
