/*
 * XREFs of PfFbLogEntryComplete @ 0x140245330
 * Callers:
 *     PfTFiNotifyVolumeCreateCallback @ 0x1404566F0 (PfTFiNotifyVolumeCreateCallback.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x140456870 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x140456A00 (PfTFiNotifyFileInfoDeleteCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     PfpEventHandleFullBuffer @ 0x140245E30 (PfpEventHandleFullBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for PfFbLogEntryComplete @ 0x140245330
 * Reason: Hex-Rays returned no pseudocode for 0x140245330
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140245330: push    rbx
 * 0000000140245332: sub     rsp, 20h
 * 0000000140245336: mov     rbx, [rdx+10h]
 * 000000014024533A: test    r9d, r9d
 * 000000014024533D: jz      short loc_14024535A
 * 000000014024533F: inc     dword ptr [rdx+28h]
 * 0000000140245342: mov     r8, [rdx+20h]
 * 0000000140245346: mov     eax, r9d
 * 0000000140245349: add     [rdx+18h], rax
 * 000000014024534D: sub     r8, [rdx+18h]
 * 0000000140245351: movsxd  rax, dword ptr [rbx+54h]
 * 0000000140245355: cmp     r8, rax
 * 0000000140245358: jl      short loc_140245372
 * 000000014024535A: lea     rcx, [rbx+20h]; ListHead
 * 000000014024535E: call    RtlpInterlockedPushEntrySList
 * 0000000140245363: mov     rcx, rbx; RunRef
 * 0000000140245366: call    ExReleaseRundownProtection_0
 * 000000014024536B: add     rsp, 20h
 * 000000014024536F: pop     rbx
 * 0000000140245370: retn
 * 0000000140245372: mov     rax, [rbx+68h]
 * 0000000140245376: lea     r8, PfpEventHandleFullBuffer
 * 000000014024537D: cmp     rax, r8
 * 0000000140245380: jnz     short loc_140245389
 * 0000000140245382: call    PfpEventHandleFullBuffer
 * 0000000140245387: jmp     short loc_14024536B
 * 0000000140245389: call    _guard_dispatch_icall_no_overrides
 * 000000014024538E: jmp     short loc_14024536B
 */
