/*
 * XREFs of KeExitRetpoline @ 0x14046112C
 * Callers:
 *     KiDispatchCallout @ 0x140460F90 (KiDispatchCallout.c)
 *     CcBcbProfiler @ 0x140505560 (CcBcbProfiler.c)
 *     sub_140506110 @ 0x140506110 (sub_140506110.c)
 *     KiSwInterruptDispatch @ 0x140506170 (KiSwInterruptDispatch.c)
 *     sub_140507990 @ 0x140507990 (sub_140507990.c)
 *     sub_140516830 @ 0x140516830 (sub_140516830.c)
 *     RtlpComputeEpilogueOffset @ 0x1405183CC (RtlpComputeEpilogueOffset.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BA330 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     sub_140689930 @ 0x140689930 (sub_140689930.c)
 *     FsRtlTruncateSmallMcb @ 0x140689D20 (FsRtlTruncateSmallMcb.c)
 *     KiLockServiceTable @ 0x140689F88 (KiLockServiceTable.c)
 *     sub_1406F0690 @ 0x1406F0690 (sub_1406F0690.c)
 *     KeUserModeCallback @ 0x140938670 (KeUserModeCallback.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     __guard_retpoline_exit @ 0x140BAD5A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14046112C
 * Reason: Hex-Rays returned no pseudocode for 0x14046112C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014046112C: push    rbx
 * 000000014046112E: sub     rsp, 20h
 * 0000000140461132: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140461139: bt      rax, 29h ; ')'
 * 000000014046113E: jnb     short loc_14046117F
 * 0000000140461140: call    KeDisableInterrupts
 * 0000000140461145: mov     rcx, gs:20h
 * 000000014046114E: mov     bl, al
 * 0000000140461150: or      byte ptr [rcx+6DEh], 1
 * 0000000140461157: test    byte ptr [rcx+6DEh], 2
 * 000000014046115E: jnz     short loc_140461165
 * 0000000140461160: call    __guard_retpoline_exit
 * 0000000140461165: test    bl, bl
 * 0000000140461167: jz      short loc_14046117F
 * 0000000140461169: mov     rcx, gs:20h
 * 0000000140461172: mov     r8, [rcx+8EB8h]
 * 0000000140461179: test    r8, r8
 * 000000014046117C: jnz     short loc_140461189
 * 000000014046117E: sti
 * 000000014046117F: lfence
 * 0000000140461182: add     rsp, 20h
 * 0000000140461186: pop     rbx
 * 0000000140461187: retn
 * 0000000140461189: prefetchw byte ptr [r8]
 * 000000014046118D: mov     eax, [r8]
 * 0000000140461190: mov     edx, eax
 * 0000000140461192: btr     edx, 15h
 * 0000000140461196: lock cmpxchg [r8], edx
 * 000000014046119B: jnz     short loc_140461190
 * 000000014046119D: bt      eax, 15h
 * 00000001404611A1: jnb     short loc_14046117E
 * 00000001404611A3: call    KiRemoveSystemWorkPriorityKick
 * 00000001404611A8: jmp     short loc_14046117E
 */
