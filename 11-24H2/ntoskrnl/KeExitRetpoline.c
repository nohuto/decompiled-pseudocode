/*
 * XREFs of KeExitRetpoline @ 0x14045517C
 * Callers:
 *     KiDispatchCallout @ 0x140454FE0 (KiDispatchCallout.c)
 *     CcBcbProfiler @ 0x1405055A0 (CcBcbProfiler.c)
 *     sub_140506150 @ 0x140506150 (sub_140506150.c)
 *     KiSwInterruptDispatch @ 0x1405061B0 (KiSwInterruptDispatch.c)
 *     sub_1405079D0 @ 0x1405079D0 (sub_1405079D0.c)
 *     sub_140516870 @ 0x140516870 (sub_140516870.c)
 *     RtlpComputeEpilogueOffset @ 0x14051840C (RtlpComputeEpilogueOffset.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BB7A0 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     sub_140695E50 @ 0x140695E50 (sub_140695E50.c)
 *     FsRtlTruncateSmallMcb @ 0x140696240 (FsRtlTruncateSmallMcb.c)
 *     KiLockServiceTable @ 0x1406964A8 (KiLockServiceTable.c)
 *     sub_1406FA130 @ 0x1406FA130 (sub_1406FA130.c)
 *     KeUserModeCallback @ 0x1408BCB10 (KeUserModeCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     __guard_retpoline_exit @ 0x140BC05A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14045517C
 * Reason: Hex-Rays returned no pseudocode for 0x14045517C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014045517C: push    rbx
 * 000000014045517E: sub     rsp, 20h
 * 0000000140455182: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140455189: bt      rax, 29h ; ')'
 * 000000014045518E: jnb     short loc_1404551B9
 * 0000000140455190: call    KeDisableInterrupts
 * 0000000140455195: mov     rcx, gs:20h
 * 000000014045519E: mov     bl, al
 * 00000001404551A0: or      byte ptr [rcx+6DEh], 1
 * 00000001404551A7: test    byte ptr [rcx+6DEh], 2
 * 00000001404551AE: jnz     short loc_1404551B5
 * 00000001404551B0: call    __guard_retpoline_exit
 * 00000001404551B5: test    bl, bl
 * 00000001404551B7: jnz     short loc_1404551C3
 * 00000001404551B9: lfence
 * 00000001404551BC: add     rsp, 20h
 * 00000001404551C0: pop     rbx
 * 00000001404551C1: retn
 * 00000001404551C3: mov     rcx, gs:20h
 * 00000001404551CC: mov     r8, [rcx+8EB8h]
 * 00000001404551D3: test    r8, r8
 * 00000001404551D6: jnz     short loc_1404551DB
 * 00000001404551D8: sti
 * 00000001404551D9: jmp     short loc_1404551B9
 * 00000001404551DB: prefetchw byte ptr [r8]
 * 00000001404551DF: mov     eax, [r8]
 * 00000001404551E2: mov     edx, eax
 * 00000001404551E4: btr     edx, 15h
 * 00000001404551E8: lock cmpxchg [r8], edx
 * 00000001404551ED: jnz     short loc_1404551E2
 * 00000001404551EF: bt      eax, 15h
 * 00000001404551F3: jnb     short loc_1404551D8
 * 00000001404551F5: call    KiRemoveSystemWorkPriorityKick
 * 00000001404551FA: jmp     short loc_1404551D8
 */
