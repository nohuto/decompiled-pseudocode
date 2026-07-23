/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x1405876A0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvlpSnapshotCrashArea @ 0x140588100 (HvlpSnapshotCrashArea.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for HvlCrashdumpCallbackRoutine @ 0x1405876A0
 * Reason: Hex-Rays returned no pseudocode for 0x1405876A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405876A0: push    rbx
 * 00000001405876A2: sub     rsp, 30h
 * 00000001405876A6: call    HvlpSnapshotCrashArea
 * 00000001405876AB: mov     rbx, cs:Address
 * 00000001405876B2: test    rbx, rbx
 * 00000001405876B5: jz      short loc_140587702
 * 00000001405876B7: mov     eax, [rbx+4]
 * 00000001405876BA: test    al, 1
 * 00000001405876BC: jz      short loc_140587702
 * 00000001405876BE: mov     rax, cs:off_140E008D8
 * 00000001405876C5: mov     ecx, 1
 * 00000001405876CA: call    _guard_dispatch_icall_no_overrides
 * 00000001405876CF: mov     cs:KiHypervisorInitiatedCrashDump, 1
 * 00000001405876D6: mov     ecx, 20001h; BugCheckCode
 * 00000001405876DB: mov     rax, [rbx+0D0h]
 * 00000001405876E2: mov     r9, [rbx+0C8h]; BugCheckParameter3
 * 00000001405876E9: mov     r8, [rbx+0C0h]; BugCheckParameter2
 * 00000001405876F0: mov     rdx, [rbx+0B8h]; BugCheckParameter1
 * 00000001405876F7: mov     [rsp+38h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001405876FC: call    KeBugCheckEx
 * 0000000140587702: xor     al, al
 * 0000000140587704: add     rsp, 30h
 * 0000000140587708: pop     rbx
 * 0000000140587709: retn
 */
