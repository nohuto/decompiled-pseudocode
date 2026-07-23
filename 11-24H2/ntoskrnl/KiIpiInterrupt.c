/*
 * XREFs of KiIpiInterrupt @ 0x1406B31E0
 * Callers:
 *     KiIpiInterruptShadow @ 0x140BBE240 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140408120 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405BA300 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1406B3920 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1406B31E0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B31E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B31E0: sub     rsp, 8
 * 00000001406B31E4: push    rbp
 * 00000001406B31E5: push    rsi
 * 00000001406B31E6: sub     rsp, 150h
 * 00000001406B31ED: lea     rbp, [rsp+80h]
 * 00000001406B31F5: mov     [rbp+0E8h+var_13D], 0
 * 00000001406B31F9: mov     [rbp+0E8h+var_138], rax
 * 00000001406B31FD: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B3201: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B3205: mov     [rbp+0E8h+var_120], r8
 * 00000001406B3209: mov     [rbp+0E8h+var_118], r9
 * 00000001406B320D: mov     [rbp+0E8h+var_110], r10
 * 00000001406B3211: mov     [rbp+0E8h+var_108], r11
 * 00000001406B3215: test    [rbp+0E8h+arg_0], 1
 * 00000001406B321C: jnz     short loc_1406B3256
 * 00000001406B321E: xor     edx, edx
 * 00000001406B3220: rdsspq  rdx
 * 00000001406B3225: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B3229: lfence
 * 00000001406B322C: test    byte ptr gs:858h, 1
 * 00000001406B3235: jnz     short loc_1406B323F
 * 00000001406B3237: lfence
 * 00000001406B323A: jmp     loc_1406B34C7
 * 00000001406B323F: movzx   eax, word ptr gs:866h
 * 00000001406B3248: mov     ecx, 48h ; 'H'
 * 00000001406B324D: xor     edx, edx
 * 00000001406B324F: wrmsr
 * 00000001406B3251: jmp     loc_1406B34C7
 * 00000001406B3256: test    cs:KiKvaShadow, 1
 * 00000001406B325D: jnz     short loc_1406B3262
 * 00000001406B325F: swapgs
 * 00000001406B3262: lfence
 * 00000001406B3265: mov     rcx, gs:9D28h
 * 00000001406B326E: test    rcx, rcx
 * 00000001406B3271: jz      short loc_1406B3292
 * 00000001406B3273: rdsspq  rdx
 * 00000001406B3278: mov     r10, gs:9D20h
 * 00000001406B3281: add     r10, 8
 * 00000001406B3285: cmp     rdx, r10
 * 00000001406B3288: jnz     short loc_1406B3292
 * 00000001406B328A: rstorssp qword ptr [rcx]
 * 00000001406B328E: saveprevssp
 * 00000001406B3292: mov     r10, gs:188h
 * 00000001406B329B: mov     rcx, gs:188h
 * 00000001406B32A4: mov     rcx, [rcx+220h]
 * 00000001406B32AB: mov     rcx, [rcx+760h]
 * 00000001406B32B2: mov     gs:850h, rcx
 * 00000001406B32BB: mov     cx, gs:862h
 * 00000001406B32C4: mov     gs:864h, cx
 * 00000001406B32CD: mov     cl, gs:858h
 * 00000001406B32D5: mov     gs:85Ah, cl
 * 00000001406B32DD: movzx   eax, word ptr gs:868h
 * 00000001406B32E6: cmp     gs:866h, ax
 * 00000001406B32EF: jz      short loc_1406B3303
 * 00000001406B32F1: mov     gs:866h, ax
 * 00000001406B32FA: mov     ecx, 48h ; 'H'
 * 00000001406B32FF: xor     edx, edx
 * 00000001406B3301: wrmsr
 * 00000001406B3303: movzx   edx, byte ptr gs:858h
 * 00000001406B330C: test    edx, 8
 * 00000001406B3312: jz      short loc_1406B332B
 * 00000001406B3314: mov     eax, 1
 * 00000001406B3319: xor     edx, edx
 * 00000001406B331B: mov     ecx, 49h ; 'I'
 * 00000001406B3320: wrmsr
 * 00000001406B3322: movzx   edx, byte ptr gs:858h
 * 00000001406B332B: test    edx, 2
 * 00000001406B3331: jz      loc_1406B346E
 * 00000001406B3337: call    loc_1406B344A
 * 00000001406B333C: add     rsp, 8
 * 00000001406B3340: call    loc_1406B3453
 * 00000001406B3345: add     rsp, 8
 * 00000001406B3349: call    loc_1406B333C
 * 00000001406B334E: add     rsp, 8
 * 00000001406B3352: call    loc_1406B3345
 * 00000001406B3357: add     rsp, 8
 * 00000001406B335B: call    loc_1406B334E
 * 00000001406B3360: add     rsp, 8
 * 00000001406B3364: call    loc_1406B3357
 * 00000001406B3369: add     rsp, 8
 * 00000001406B336D: call    loc_1406B3360
 * 00000001406B3372: add     rsp, 8
 * 00000001406B3376: call    loc_1406B3369
 * 00000001406B337B: add     rsp, 8
 * 00000001406B337F: call    loc_1406B3372
 * 00000001406B3384: add     rsp, 8
 * 00000001406B3388: call    loc_1406B337B
 * 00000001406B338D: add     rsp, 8
 * 00000001406B3391: call    loc_1406B3384
 * 00000001406B3396: add     rsp, 8
 * 00000001406B339A: call    loc_1406B338D
 * 00000001406B339F: add     rsp, 8
 * 00000001406B33A3: call    loc_1406B3396
 * 00000001406B33A8: add     rsp, 8
 * 00000001406B33AC: call    loc_1406B339F
 * 00000001406B33B1: add     rsp, 8
 * 00000001406B33B5: call    loc_1406B33A8
 * 00000001406B33BA: add     rsp, 8
 * 00000001406B33BE: call    loc_1406B33B1
 * 00000001406B33C3: add     rsp, 8
 * 00000001406B33C7: call    loc_1406B33BA
 * 00000001406B33CC: add     rsp, 8
 * 00000001406B33D0: call    loc_1406B33C3
 * 00000001406B33D5: add     rsp, 8
 * 00000001406B33D9: call    loc_1406B33CC
 * 00000001406B33DE: add     rsp, 8
 * 00000001406B33E2: call    loc_1406B33D5
 * 00000001406B33E7: add     rsp, 8
 * 00000001406B33EB: call    loc_1406B33DE
 * 00000001406B33F0: add     rsp, 8
 * 00000001406B33F4: call    loc_1406B33E7
 * 00000001406B33F9: add     rsp, 8
 * 00000001406B33FD: call    loc_1406B33F0
 * 00000001406B3402: add     rsp, 8
 * 00000001406B3406: call    loc_1406B33F9
 * 00000001406B340B: add     rsp, 8
 * 00000001406B340F: call    loc_1406B3402
 * 00000001406B3414: add     rsp, 8
 * 00000001406B3418: call    loc_1406B340B
 * 00000001406B341D: add     rsp, 8
 * 00000001406B3421: call    loc_1406B3414
 * 00000001406B3426: add     rsp, 8
 * 00000001406B342A: call    loc_1406B341D
 * 00000001406B342F: add     rsp, 8
 * 00000001406B3433: call    loc_1406B3426
 * 00000001406B3438: add     rsp, 8
 * 00000001406B343C: call    loc_1406B342F
 * 00000001406B3441: add     rsp, 8
 * 00000001406B3445: call    loc_1406B3438
 * 00000001406B344A: add     rsp, 8
 * 00000001406B344E: call    loc_1406B3441
 * 00000001406B3453: add     rsp, 8
 * 00000001406B3457: mov     eax, 0DADAh
 * 00000001406B345C: test    byte ptr gs:85Ch, 8
 * 00000001406B3465: jz      short loc_1406B346E
 * 00000001406B3467: mov     al, 20h ; ' '
 * 00000001406B3469: incsspq rax
 * 00000001406B346E: test    edx, 80h
 * 00000001406B3474: jz      short loc_1406B347E
 * 00000001406B3476: lfence
 * 00000001406B3479: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B347E: lfence
 * 00000001406B3481: mov     byte ptr gs:85Eh, 0
 * 00000001406B348A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B3491: jz      short loc_1406B34B2
 * 00000001406B3493: mov     ecx, 6A7h
 * 00000001406B3498: rdmsr
 * 00000001406B349A: cmp     edx, 0
 * 00000001406B349D: jz      short loc_1406B34B2
 * 00000001406B349F: mov     ecx, edx
 * 00000001406B34A1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B34A7: cmp     edx, ecx
 * 00000001406B34A9: jz      short loc_1406B34B2
 * 00000001406B34AB: mov     ecx, 6A7h
 * 00000001406B34B0: wrmsr
 * 00000001406B34B2: test    byte ptr [r10+3], 3
 * 00000001406B34B7: mov     [rbp+0E8h+var_68], 0
 * 00000001406B34C0: jz      short loc_1406B34C7
 * 00000001406B34C2: call    KiSaveDebugRegisterState
 * 00000001406B34C7: cld
 * 00000001406B34C8: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B34CC: ldmxcsr dword ptr gs:180h
 * 00000001406B34D5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B34D9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B34DD: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B34E1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B34E5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B34E9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B34ED: test    [rbp+0E8h+arg_0], 1
 * 00000001406B34F4: jz      short loc_1406B34FB
 * 00000001406B34F6: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B34FB: cmp     byte ptr gs:87DAh, 0
 * 00000001406B3504: jz      short loc_1406B350B
 * 00000001406B3506: call    KeWakeProcessor
 * 00000001406B350B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B3512: cmp     rax, [rbp+0E8h]
 * 00000001406B3519: jnb     short loc_1406B3534
 * 00000001406B351B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B3522: cmp     rax, [rbp+0E8h]
 * 00000001406B3529: jb      short loc_1406B3534
 * 00000001406B352B: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406B352F: call    KiCheckForSListAddress
 * 00000001406B3534: xor     esi, esi
 * 00000001406B3536: inc     dword ptr gs:87C0h
 * 00000001406B353E: mov     rcx, gs:9158h
 * 00000001406B3547: mov     rax, rcx
 * 00000001406B354A: mov     edx, cs:KeIsrStackSize
 * 00000001406B3550: sub     rax, rdx
 * 00000001406B3553: mov     rdx, rsp
 * 00000001406B3556: cmp     rax, rsp
 * 00000001406B3559: ja      short loc_1406B3560
 * 00000001406B355B: cmp     rsp, rcx
 * 00000001406B355E: jb      short loc_1406B356C
 * 00000001406B3560: cmp     cs:KiBugCheckActive, 0
 * 00000001406B3567: jnz     short loc_1406B356C
 * 00000001406B3569: mov     rsp, rcx
 * 00000001406B356C: sub     rsp, 20h
 * 00000001406B3570: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001406B3575: call    KiIpiInterruptSubDispatch
 * 00000001406B357A: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001406B357F: mov     rcx, rsi
 * 00000001406B3582: call    HalPerformEndOfInterrupt
 * 00000001406B3587: mov     rcx, gs:20h
 * 00000001406B3590: movzx   edx, [rbp+0E8h+var_13F]
 * 00000001406B3594: call    KiEndInterruptCycleAccumulation
 * 00000001406B3599: test    al, al
 * 00000001406B359B: jz      short loc_1406B35A2
 * 00000001406B359D: call    KiDpcInterruptBypass
 * 00000001406B35A2: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001406B35A6: cmp     cs:KiIrqlFlags, 0
 * 00000001406B35AD: jz      short loc_1406B35B6
 * 00000001406B35AF: call    KzSetIrqlUnsafe
 * 00000001406B35B4: jmp     short loc_1406B35BA
 * 00000001406B35B6: mov     cr8, rcx
 * 00000001406B35BA: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406B35C1: test    [rbp+0E8h+arg_0], 1
 * 00000001406B35C8: jz      loc_1406B38C3
 * 00000001406B35CE: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B35D5: jz      short loc_1406B35DA
 * 00000001406B35D7: stac
 * 00000001406B35DA: mov     rcx, gs:188h
 * 00000001406B35E3: test    byte ptr [rcx+0C2h], 3
 * 00000001406B35EA: jz      short loc_1406B3607
 * 00000001406B35EC: mov     ecx, 1
 * 00000001406B35F1: mov     cr8, rcx
 * 00000001406B35F5: sti
 * 00000001406B35F6: call    KiInitiateUserApc
 * 00000001406B35FB: cli
 * 00000001406B35FC: mov     ecx, 0
 * 00000001406B3601: mov     cr8, rcx
 * 00000001406B3605: jmp     short loc_1406B35DA
 * 00000001406B3607: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B360C: test    eax, eax
 * 00000001406B360E: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B3612: jnz     short loc_1406B35DA
 * 00000001406B3614: test    byte ptr gs:860h, 2
 * 00000001406B361D: jz      short loc_1406B3626
 * 00000001406B361F: xor     ecx, ecx
 * 00000001406B3621: call    KiUpdateStibpPairing
 * 00000001406B3626: mov     rcx, gs:188h
 * 00000001406B362F: test    dword ptr [rcx], 8000000h
 * 00000001406B3635: jz      short loc_1406B363C
 * 00000001406B3637: call    KiRestoreSetContextState
 * 00000001406B363C: mov     rcx, gs:188h
 * 00000001406B3645: test    dword ptr [rcx], 10000h
 * 00000001406B364B: jz      short loc_1406B3661
 * 00000001406B364D: test    byte ptr [rcx+2], 1
 * 00000001406B3651: jz      short loc_1406B3661
 * 00000001406B3653: call    KiCopyCounters
 * 00000001406B3658: mov     rcx, gs:188h
 * 00000001406B3661: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B3665: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B366D: jz      short loc_1406B3674
 * 00000001406B366F: call    KiRestoreDebugRegisterState
 * 00000001406B3674: mov     rcx, gs:188h
 * 00000001406B367D: bt      dword ptr [rcx+74h], 16h
 * 00000001406B3682: jnb     short loc_1406B36AE
 * 00000001406B3684: xor     ecx, ecx
 * 00000001406B3686: rdsspq  rcx
 * 00000001406B368B: mov     r8, gs:9D28h
 * 00000001406B3694: add     r8, 8
 * 00000001406B3698: cmp     rcx, r8
 * 00000001406B369B: jnz     short loc_1406B36AE
 * 00000001406B369D: mov     rcx, gs:9D20h
 * 00000001406B36A6: rstorssp qword ptr [rcx]
 * 00000001406B36AA: saveprevssp
 * 00000001406B36AE: mov     byte ptr gs:85Eh, 0
 * 00000001406B36B7: movzx   eax, word ptr gs:86Ch
 * 00000001406B36C0: cmp     gs:866h, ax
 * 00000001406B36C9: jz      short loc_1406B36DD
 * 00000001406B36CB: mov     gs:866h, ax
 * 00000001406B36D4: mov     ecx, 48h ; 'H'
 * 00000001406B36D9: xor     edx, edx
 * 00000001406B36DB: wrmsr
 * 00000001406B36DD: btr     word ptr gs:858h, 2
 * 00000001406B36E8: jnb     short loc_1406B36F8
 * 00000001406B36EA: mov     eax, 1
 * 00000001406B36EF: xor     edx, edx
 * 00000001406B36F1: mov     ecx, 49h ; 'I'
 * 00000001406B36F6: wrmsr
 * 00000001406B36F8: btr     word ptr gs:858h, 5
 * 00000001406B3703: jnb     loc_1406B3840
 * 00000001406B3709: call    loc_1406B381C
 * 00000001406B370E: add     rsp, 8
 * 00000001406B3712: call    loc_1406B3825
 * 00000001406B3717: add     rsp, 8
 * 00000001406B371B: call    loc_1406B370E
 * 00000001406B3720: add     rsp, 8
 * 00000001406B3724: call    loc_1406B3717
 * 00000001406B3729: add     rsp, 8
 * 00000001406B372D: call    loc_1406B3720
 * 00000001406B3732: add     rsp, 8
 * 00000001406B3736: call    loc_1406B3729
 * 00000001406B373B: add     rsp, 8
 * 00000001406B373F: call    loc_1406B3732
 * 00000001406B3744: add     rsp, 8
 * 00000001406B3748: call    loc_1406B373B
 * 00000001406B374D: add     rsp, 8
 * 00000001406B3751: call    loc_1406B3744
 * 00000001406B3756: add     rsp, 8
 * 00000001406B375A: call    loc_1406B374D
 * 00000001406B375F: add     rsp, 8
 * 00000001406B3763: call    loc_1406B3756
 * 00000001406B3768: add     rsp, 8
 * 00000001406B376C: call    loc_1406B375F
 * 00000001406B3771: add     rsp, 8
 * 00000001406B3775: call    loc_1406B3768
 * 00000001406B377A: add     rsp, 8
 * 00000001406B377E: call    loc_1406B3771
 * 00000001406B3783: add     rsp, 8
 * 00000001406B3787: call    loc_1406B377A
 * 00000001406B378C: add     rsp, 8
 * 00000001406B3790: call    loc_1406B3783
 * 00000001406B3795: add     rsp, 8
 * 00000001406B3799: call    loc_1406B378C
 * 00000001406B379E: add     rsp, 8
 * 00000001406B37A2: call    loc_1406B3795
 * 00000001406B37A7: add     rsp, 8
 * 00000001406B37AB: call    loc_1406B379E
 * 00000001406B37B0: add     rsp, 8
 * 00000001406B37B4: call    loc_1406B37A7
 * 00000001406B37B9: add     rsp, 8
 * 00000001406B37BD: call    loc_1406B37B0
 * 00000001406B37C2: add     rsp, 8
 * 00000001406B37C6: call    loc_1406B37B9
 * 00000001406B37CB: add     rsp, 8
 * 00000001406B37CF: call    loc_1406B37C2
 * 00000001406B37D4: add     rsp, 8
 * 00000001406B37D8: call    loc_1406B37CB
 * 00000001406B37DD: add     rsp, 8
 * 00000001406B37E1: call    loc_1406B37D4
 * 00000001406B37E6: add     rsp, 8
 * 00000001406B37EA: call    loc_1406B37DD
 * 00000001406B37EF: add     rsp, 8
 * 00000001406B37F3: call    loc_1406B37E6
 * 00000001406B37F8: add     rsp, 8
 * 00000001406B37FC: call    loc_1406B37EF
 * 00000001406B3801: add     rsp, 8
 * 00000001406B3805: call    loc_1406B37F8
 * 00000001406B380A: add     rsp, 8
 * 00000001406B380E: call    loc_1406B3801
 * 00000001406B3813: add     rsp, 8
 * 00000001406B3817: call    loc_1406B380A
 * 00000001406B381C: add     rsp, 8
 * 00000001406B3820: call    loc_1406B3813
 * 00000001406B3825: add     rsp, 8
 * 00000001406B3829: mov     eax, 0DADAh
 * 00000001406B382E: test    byte ptr gs:85Ch, 8
 * 00000001406B3837: jz      short loc_1406B3840
 * 00000001406B3839: mov     al, 20h ; ' '
 * 00000001406B383B: incsspq rax
 * 00000001406B3840: test    word ptr gs:858h, 100h
 * 00000001406B384B: jz      short loc_1406B3859
 * 00000001406B384D: xor     eax, eax
 * 00000001406B384F: xor     edx, edx
 * 00000001406B3851: mov     ecx, 1
 * 00000001406B3856: div     rcx
 * 00000001406B3859: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B385D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B3861: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B3865: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B3869: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B386D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B3871: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B3875: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B3879: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B387D: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B3881: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B3885: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B3889: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B388D: mov     rsp, rbp
 * 00000001406B3890: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B3897: add     rsp, 0E8h
 * 00000001406B389E: test    cs:KiKvaShadow, 1
 * 00000001406B38A5: jz      short loc_1406B38AC
 * 00000001406B38A7: jmp     KiKernelExit
 * 00000001406B38AC: test    word ptr gs:858h, 200h
 * 00000001406B38B7: jz      short loc_1406B38BE
 * 00000001406B38B9: verw    [rsp+arg_18]
 * 00000001406B38BE: swapgs
 * 00000001406B38C1: iretq
 * 00000001406B38C3: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B38C7: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B38CB: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B38CF: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B38D3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B38D7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B38DB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B38DF: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B38E3: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B38E7: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B38EB: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B38EF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B38F3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B38F7: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B38FB: mov     rsp, rbp
 * 00000001406B38FE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B3905: add     rsp, 0E8h
 * 00000001406B390C: iretq
 */
