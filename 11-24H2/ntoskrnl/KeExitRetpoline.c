/*
 * XREFs of KeExitRetpoline @ 0x14046029C
 * Callers:
 *     KiDispatchCallout @ 0x140460100 (KiDispatchCallout.c)
 *     CcBcbProfiler @ 0x140507CE0 (CcBcbProfiler.c)
 *     sub_140508890 @ 0x140508890 (sub_140508890.c)
 *     KiSwInterruptDispatch @ 0x1405088F0 (KiSwInterruptDispatch.c)
 *     sub_14050A110 @ 0x14050A110 (sub_14050A110.c)
 *     sub_140518FB0 @ 0x140518FB0 (sub_140518FB0.c)
 *     RtlpComputeEpilogueOffset @ 0x14051AB4C (RtlpComputeEpilogueOffset.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BE170 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     sub_140694D80 @ 0x140694D80 (sub_140694D80.c)
 *     FsRtlTruncateSmallMcb @ 0x140695170 (FsRtlTruncateSmallMcb.c)
 *     KiLockServiceTable @ 0x1406953D8 (KiLockServiceTable.c)
 *     sub_1406FC4F0 @ 0x1406FC4F0 (sub_1406FC4F0.c)
 *     KeUserModeCallback @ 0x1408BF150 (KeUserModeCallback.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     __guard_retpoline_exit @ 0x140BBE5A0 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14046029C
 * Reason: Hex-Rays returned no pseudocode for 0x14046029C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014046029C: push    rbx
 * 000000014046029E: sub     rsp, 20h
 * 00000001404602A2: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001404602A9: bt      rax, 29h ; ')'
 * 00000001404602AE: jnb     short loc_1404602D9
 * 00000001404602B0: call    KeDisableInterrupts
 * 00000001404602B5: mov     rcx, gs:20h
 * 00000001404602BE: mov     bl, al
 * 00000001404602C0: or      byte ptr [rcx+6DEh], 1
 * 00000001404602C7: test    byte ptr [rcx+6DEh], 2
 * 00000001404602CE: jnz     short loc_1404602D5
 * 00000001404602D0: call    __guard_retpoline_exit
 * 00000001404602D5: test    bl, bl
 * 00000001404602D7: jnz     short loc_1404602E3
 * 00000001404602D9: lfence
 * 00000001404602DC: add     rsp, 20h
 * 00000001404602E0: pop     rbx
 * 00000001404602E1: retn
 * 00000001404602E3: mov     rcx, gs:20h
 * 00000001404602EC: mov     r8, [rcx+8EB8h]
 * 00000001404602F3: test    r8, r8
 * 00000001404602F6: jnz     short loc_1404602FB
 * 00000001404602F8: sti
 * 00000001404602F9: jmp     short loc_1404602D9
 * 00000001404602FB: prefetchw byte ptr [r8]
 * 00000001404602FF: mov     eax, [r8]
 * 0000000140460302: mov     edx, eax
 * 0000000140460304: btr     edx, 15h
 * 0000000140460308: lock cmpxchg [r8], edx
 * 000000014046030D: jnz     short loc_140460302
 * 000000014046030F: bt      eax, 15h
 * 0000000140460313: jnb     short loc_1404602F8
 * 0000000140460315: call    KiRemoveSystemWorkPriorityKick
 * 000000014046031A: jmp     short loc_1404602F8
 */
