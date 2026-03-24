/*
 * XREFs of KxIsrLinkage @ 0x1406A36D0
 * Callers:
 *     KxIsrLinkageShadow @ 0x140BABB00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x14028E700 (KiStartInterruptCycleAccumulation.c)
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x14041A4A0 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405B8E30 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x140642F70 (PerfInfoLogUnexpectedInterrupt.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x1406B3980 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1406A36D0
 * Reason: Hex-Rays returned no pseudocode for 0x1406A36D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A36D0: push    rbp
 * 00000001406A36D1: push    rsi
 * 00000001406A36D2: sub     rsp, 150h
 * 00000001406A36D9: lea     rbp, [rsp+80h]
 * 00000001406A36E1: mov     [rbp+0D8h+var_12D], 0
 * 00000001406A36E5: mov     [rbp+0D8h+var_128], rax
 * 00000001406A36E9: mov     [rbp+0D8h+var_120], rcx
 * 00000001406A36ED: mov     [rbp+0D8h+var_118], rdx
 * 00000001406A36F1: mov     [rbp+0D8h+var_110], r8
 * 00000001406A36F5: mov     [rbp+0D8h+var_108], r9
 * 00000001406A36F9: mov     [rbp+0D8h+var_100], r10
 * 00000001406A36FD: mov     [rbp+0D8h+var_F8], r11
 * 00000001406A3701: test    [rbp+0D8h+arg_8], 1
 * 00000001406A3708: jnz     short loc_1406A3742
 * 00000001406A370A: xor     edx, edx
 * 00000001406A370C: rdsspq  rdx
 * 00000001406A3711: mov     [rbp+0D8h+var_80], rdx
 * 00000001406A3715: lfence
 * 00000001406A3718: test    byte ptr gs:858h, 1
 * 00000001406A3721: jnz     short loc_1406A372B
 * 00000001406A3723: lfence
 * 00000001406A3726: jmp     loc_1406A39B3
 * 00000001406A372B: movzx   eax, word ptr gs:866h
 * 00000001406A3734: mov     ecx, 48h ; 'H'
 * 00000001406A3739: xor     edx, edx
 * 00000001406A373B: wrmsr
 * 00000001406A373D: jmp     loc_1406A39B3
 * 00000001406A3742: test    cs:KiKvaShadow, 1
 * 00000001406A3749: jnz     short loc_1406A374E
 * 00000001406A374B: swapgs
 * 00000001406A374E: lfence
 * 00000001406A3751: mov     rcx, gs:9D28h
 * 00000001406A375A: test    rcx, rcx
 * 00000001406A375D: jz      short loc_1406A377E
 * 00000001406A375F: rdsspq  rdx
 * 00000001406A3764: mov     r10, gs:9D20h
 * 00000001406A376D: add     r10, 8
 * 00000001406A3771: cmp     rdx, r10
 * 00000001406A3774: jnz     short loc_1406A377E
 * 00000001406A3776: rstorssp qword ptr [rcx]
 * 00000001406A377A: saveprevssp
 * 00000001406A377E: mov     r10, gs:188h
 * 00000001406A3787: mov     rcx, gs:188h
 * 00000001406A3790: mov     rcx, [rcx+220h]
 * 00000001406A3797: mov     rcx, [rcx+760h]
 * 00000001406A379E: mov     gs:850h, rcx
 * 00000001406A37A7: mov     cx, gs:862h
 * 00000001406A37B0: mov     gs:864h, cx
 * 00000001406A37B9: mov     cl, gs:858h
 * 00000001406A37C1: mov     gs:85Ah, cl
 * 00000001406A37C9: movzx   eax, word ptr gs:868h
 * 00000001406A37D2: cmp     gs:866h, ax
 * 00000001406A37DB: jz      short loc_1406A37EF
 * 00000001406A37DD: mov     gs:866h, ax
 * 00000001406A37E6: mov     ecx, 48h ; 'H'
 * 00000001406A37EB: xor     edx, edx
 * 00000001406A37ED: wrmsr
 * 00000001406A37EF: movzx   edx, byte ptr gs:858h
 * 00000001406A37F8: test    edx, 8
 * 00000001406A37FE: jz      short loc_1406A3817
 * 00000001406A3800: mov     eax, 1
 * 00000001406A3805: xor     edx, edx
 * 00000001406A3807: mov     ecx, 49h ; 'I'
 * 00000001406A380C: wrmsr
 * 00000001406A380E: movzx   edx, byte ptr gs:858h
 * 00000001406A3817: test    edx, 2
 * 00000001406A381D: jz      loc_1406A395A
 * 00000001406A3823: call    loc_1406A3936
 * 00000001406A3828: add     rsp, 8
 * 00000001406A382C: call    loc_1406A393F
 * 00000001406A3831: add     rsp, 8
 * 00000001406A3835: call    loc_1406A3828
 * 00000001406A383A: add     rsp, 8
 * 00000001406A383E: call    loc_1406A3831
 * 00000001406A3843: add     rsp, 8
 * 00000001406A3847: call    loc_1406A383A
 * 00000001406A384C: add     rsp, 8
 * 00000001406A3850: call    loc_1406A3843
 * 00000001406A3855: add     rsp, 8
 * 00000001406A3859: call    loc_1406A384C
 * 00000001406A385E: add     rsp, 8
 * 00000001406A3862: call    loc_1406A3855
 * 00000001406A3867: add     rsp, 8
 * 00000001406A386B: call    loc_1406A385E
 * 00000001406A3870: add     rsp, 8
 * 00000001406A3874: call    loc_1406A3867
 * 00000001406A3879: add     rsp, 8
 * 00000001406A387D: call    loc_1406A3870
 * 00000001406A3882: add     rsp, 8
 * 00000001406A3886: call    loc_1406A3879
 * 00000001406A388B: add     rsp, 8
 * 00000001406A388F: call    loc_1406A3882
 * 00000001406A3894: add     rsp, 8
 * 00000001406A3898: call    loc_1406A388B
 * 00000001406A389D: add     rsp, 8
 * 00000001406A38A1: call    loc_1406A3894
 * 00000001406A38A6: add     rsp, 8
 * 00000001406A38AA: call    loc_1406A389D
 * 00000001406A38AF: add     rsp, 8
 * 00000001406A38B3: call    loc_1406A38A6
 * 00000001406A38B8: add     rsp, 8
 * 00000001406A38BC: call    loc_1406A38AF
 * 00000001406A38C1: add     rsp, 8
 * 00000001406A38C5: call    loc_1406A38B8
 * 00000001406A38CA: add     rsp, 8
 * 00000001406A38CE: call    loc_1406A38C1
 * 00000001406A38D3: add     rsp, 8
 * 00000001406A38D7: call    loc_1406A38CA
 * 00000001406A38DC: add     rsp, 8
 * 00000001406A38E0: call    loc_1406A38D3
 * 00000001406A38E5: add     rsp, 8
 * 00000001406A38E9: call    loc_1406A38DC
 * 00000001406A38EE: add     rsp, 8
 * 00000001406A38F2: call    loc_1406A38E5
 * 00000001406A38F7: add     rsp, 8
 * 00000001406A38FB: call    loc_1406A38EE
 * 00000001406A3900: add     rsp, 8
 * 00000001406A3904: call    loc_1406A38F7
 * 00000001406A3909: add     rsp, 8
 * 00000001406A390D: call    loc_1406A3900
 * 00000001406A3912: add     rsp, 8
 * 00000001406A3916: call    loc_1406A3909
 * 00000001406A391B: add     rsp, 8
 * 00000001406A391F: call    loc_1406A3912
 * 00000001406A3924: add     rsp, 8
 * 00000001406A3928: call    loc_1406A391B
 * 00000001406A392D: add     rsp, 8
 * 00000001406A3931: call    loc_1406A3924
 * 00000001406A3936: add     rsp, 8
 * 00000001406A393A: call    loc_1406A392D
 * 00000001406A393F: add     rsp, 8
 * 00000001406A3943: mov     eax, 0DADAh
 * 00000001406A3948: test    byte ptr gs:85Ch, 8
 * 00000001406A3951: jz      short loc_1406A395A
 * 00000001406A3953: mov     al, 20h ; ' '
 * 00000001406A3955: incsspq rax
 * 00000001406A395A: test    edx, 80h
 * 00000001406A3960: jz      short loc_1406A396A
 * 00000001406A3962: lfence
 * 00000001406A3965: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A396A: lfence
 * 00000001406A396D: mov     byte ptr gs:85Eh, 0
 * 00000001406A3976: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A397D: jz      short loc_1406A399E
 * 00000001406A397F: mov     ecx, 6A7h
 * 00000001406A3984: rdmsr
 * 00000001406A3986: cmp     edx, 0
 * 00000001406A3989: jz      short loc_1406A399E
 * 00000001406A398B: mov     ecx, edx
 * 00000001406A398D: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A3993: cmp     edx, ecx
 * 00000001406A3995: jz      short loc_1406A399E
 * 00000001406A3997: mov     ecx, 6A7h
 * 00000001406A399C: wrmsr
 * 00000001406A399E: test    byte ptr [r10+3], 3
 * 00000001406A39A3: mov     [rbp+0D8h+var_58], 0
 * 00000001406A39AC: jz      short loc_1406A39B3
 * 00000001406A39AE: call    KiSaveDebugRegisterState
 * 00000001406A39B3: cld
 * 00000001406A39B4: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406A39B8: ldmxcsr dword ptr gs:180h
 * 00000001406A39C1: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406A39C5: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406A39C9: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406A39CD: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406A39D1: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406A39D5: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406A39D9: test    [rbp+0D8h+arg_8], 1
 * 00000001406A39E0: jz      short loc_1406A39E7
 * 00000001406A39E2: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A39E7: cmp     byte ptr gs:87DAh, 0
 * 00000001406A39F0: jz      short loc_1406A39F7
 * 00000001406A39F2: call    KeWakeProcessor
 * 00000001406A39F7: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406A39FE: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001406A3A05: jnb     short loc_1406A3A20
 * 00000001406A3A07: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406A3A0E: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001406A3A15: jb      short loc_1406A3A20
 * 00000001406A3A17: lea     rcx, [rbp+0D8h+var_158]
 * 00000001406A3A1B: call    KiCheckForSListAddress
 * 00000001406A3A20: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001406A3A27: mov     rsi, gs:20h
 * 00000001406A3A30: mov     rsi, [rsi+rax*8+3900h]
 * 00000001406A3A38: inc     dword ptr gs:87C0h
 * 00000001406A3A40: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A3A47: jz      short loc_1406A3A4C
 * 00000001406A3A49: clac
 * 00000001406A3A4C: test    rsi, rsi
 * 00000001406A3A4F: jz      short loc_1406A3A5A
 * 00000001406A3A51: mov     rax, [rsi+50h]
 * 00000001406A3A55: jmp     _guard_dispatch_icall_no_overrides
 * 00000001406A3A5A: mov     ecx, eax
 * 00000001406A3A5C: shr     ecx, 4
 * 00000001406A3A5F: cmp     cs:KiIrqlFlags, 0
 * 00000001406A3A66: jz      short loc_1406A3A6F
 * 00000001406A3A68: call    KzSetIrqlUnsafe
 * 00000001406A3A6D: jmp     short loc_1406A3A77
 * 00000001406A3A6F: mov     rax, cr8
 * 00000001406A3A73: mov     cr8, rcx
 * 00000001406A3A77: mov     [rbp+0D8h+var_12F], al
 * 00000001406A3A7A: mov     rcx, gs:20h
 * 00000001406A3A83: xor     edx, edx
 * 00000001406A3A85: call    KiStartInterruptCycleAccumulation
 * 00000001406A3A8A: sti
 * 00000001406A3A8B: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001406A3A95: jz      short loc_1406A3AA3
 * 00000001406A3A97: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001406A3A9E: call    PerfInfoLogUnexpectedInterrupt
 * 00000001406A3AA3: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001406A3AAA: jz      short loc_1406A3ACB
 * 00000001406A3AAC: and     [rbp+0D8h+var_138], 0
 * 00000001406A3AB1: xor     r9, r9
 * 00000001406A3AB4: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001406A3ABC: mov     edx, 1
 * 00000001406A3AC1: mov     ecx, 12h
 * 00000001406A3AC6: call    KiBugCheckDispatch
 * 00000001406A3ACB: cli
 * 00000001406A3ACC: mov     rcx, rsi
 * 00000001406A3ACF: call    HalPerformEndOfInterrupt
 * 00000001406A3AD4: mov     rcx, gs:20h
 * 00000001406A3ADD: movzx   edx, [rbp+0D8h+var_12F]
 * 00000001406A3AE1: call    KiEndInterruptCycleAccumulation
 * 00000001406A3AE6: test    al, al
 * 00000001406A3AE8: jz      short loc_1406A3AEF
 * 00000001406A3AEA: call    KiDpcInterruptBypass
 * 00000001406A3AEF: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001406A3AF3: cmp     cs:KiIrqlFlags, 0
 * 00000001406A3AFA: jz      short loc_1406A3B03
 * 00000001406A3AFC: call    KzSetIrqlUnsafe
 * 00000001406A3B01: jmp     short loc_1406A3B07
 * 00000001406A3B03: mov     cr8, rcx
 * 00000001406A3B07: mov     rsi, [rbp+0D8h+var_8]
 * 00000001406A3B0E: cli
 * 00000001406A3B0F: test    [rbp+0D8h+arg_8], 1
 * 00000001406A3B16: jz      loc_1406A3E11
 * 00000001406A3B1C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A3B23: jz      short loc_1406A3B28
 * 00000001406A3B25: stac
 * 00000001406A3B28: mov     rcx, gs:188h
 * 00000001406A3B31: test    byte ptr [rcx+0C2h], 3
 * 00000001406A3B38: jz      short loc_1406A3B55
 * 00000001406A3B3A: mov     ecx, 1
 * 00000001406A3B3F: mov     cr8, rcx
 * 00000001406A3B43: sti
 * 00000001406A3B44: call    KiInitiateUserApc
 * 00000001406A3B49: cli
 * 00000001406A3B4A: mov     ecx, 0
 * 00000001406A3B4F: mov     cr8, rcx
 * 00000001406A3B53: jmp     short loc_1406A3B28
 * 00000001406A3B55: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A3B5A: test    eax, eax
 * 00000001406A3B5C: mov     rax, [rbp+0D8h+var_128]
 * 00000001406A3B60: jnz     short loc_1406A3B28
 * 00000001406A3B62: test    byte ptr gs:860h, 2
 * 00000001406A3B6B: jz      short loc_1406A3B74
 * 00000001406A3B6D: xor     ecx, ecx
 * 00000001406A3B6F: call    KiUpdateStibpPairing
 * 00000001406A3B74: mov     rcx, gs:188h
 * 00000001406A3B7D: test    dword ptr [rcx], 8000000h
 * 00000001406A3B83: jz      short loc_1406A3B8A
 * 00000001406A3B85: call    KiRestoreSetContextState
 * 00000001406A3B8A: mov     rcx, gs:188h
 * 00000001406A3B93: test    dword ptr [rcx], 10000h
 * 00000001406A3B99: jz      short loc_1406A3BAF
 * 00000001406A3B9B: test    byte ptr [rcx+2], 1
 * 00000001406A3B9F: jz      short loc_1406A3BAF
 * 00000001406A3BA1: call    KiCopyCounters
 * 00000001406A3BA6: mov     rcx, gs:188h
 * 00000001406A3BAF: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406A3BB3: cmp     [rbp+0D8h+var_58], 0
 * 00000001406A3BBB: jz      short loc_1406A3BC2
 * 00000001406A3BBD: call    KiRestoreDebugRegisterState
 * 00000001406A3BC2: mov     rcx, gs:188h
 * 00000001406A3BCB: bt      dword ptr [rcx+74h], 16h
 * 00000001406A3BD0: jnb     short loc_1406A3BFC
 * 00000001406A3BD2: xor     ecx, ecx
 * 00000001406A3BD4: rdsspq  rcx
 * 00000001406A3BD9: mov     r8, gs:9D28h
 * 00000001406A3BE2: add     r8, 8
 * 00000001406A3BE6: cmp     rcx, r8
 * 00000001406A3BE9: jnz     short loc_1406A3BFC
 * 00000001406A3BEB: mov     rcx, gs:9D20h
 * 00000001406A3BF4: rstorssp qword ptr [rcx]
 * 00000001406A3BF8: saveprevssp
 * 00000001406A3BFC: mov     byte ptr gs:85Eh, 0
 * 00000001406A3C05: movzx   eax, word ptr gs:86Ch
 * 00000001406A3C0E: cmp     gs:866h, ax
 * 00000001406A3C17: jz      short loc_1406A3C2B
 * 00000001406A3C19: mov     gs:866h, ax
 * 00000001406A3C22: mov     ecx, 48h ; 'H'
 * 00000001406A3C27: xor     edx, edx
 * 00000001406A3C29: wrmsr
 * 00000001406A3C2B: btr     word ptr gs:858h, 2
 * 00000001406A3C36: jnb     short loc_1406A3C46
 * 00000001406A3C38: mov     eax, 1
 * 00000001406A3C3D: xor     edx, edx
 * 00000001406A3C3F: mov     ecx, 49h ; 'I'
 * 00000001406A3C44: wrmsr
 * 00000001406A3C46: btr     word ptr gs:858h, 5
 * 00000001406A3C51: jnb     loc_1406A3D8E
 * 00000001406A3C57: call    loc_1406A3D6A
 * 00000001406A3C5C: add     rsp, 8
 * 00000001406A3C60: call    loc_1406A3D73
 * 00000001406A3C65: add     rsp, 8
 * 00000001406A3C69: call    loc_1406A3C5C
 * 00000001406A3C6E: add     rsp, 8
 * 00000001406A3C72: call    loc_1406A3C65
 * 00000001406A3C77: add     rsp, 8
 * 00000001406A3C7B: call    loc_1406A3C6E
 * 00000001406A3C80: add     rsp, 8
 * 00000001406A3C84: call    loc_1406A3C77
 * 00000001406A3C89: add     rsp, 8
 * 00000001406A3C8D: call    loc_1406A3C80
 * 00000001406A3C92: add     rsp, 8
 * 00000001406A3C96: call    loc_1406A3C89
 * 00000001406A3C9B: add     rsp, 8
 * 00000001406A3C9F: call    loc_1406A3C92
 * 00000001406A3CA4: add     rsp, 8
 * 00000001406A3CA8: call    loc_1406A3C9B
 * 00000001406A3CAD: add     rsp, 8
 * 00000001406A3CB1: call    loc_1406A3CA4
 * 00000001406A3CB6: add     rsp, 8
 * 00000001406A3CBA: call    loc_1406A3CAD
 * 00000001406A3CBF: add     rsp, 8
 * 00000001406A3CC3: call    loc_1406A3CB6
 * 00000001406A3CC8: add     rsp, 8
 * 00000001406A3CCC: call    loc_1406A3CBF
 * 00000001406A3CD1: add     rsp, 8
 * 00000001406A3CD5: call    loc_1406A3CC8
 * 00000001406A3CDA: add     rsp, 8
 * 00000001406A3CDE: call    loc_1406A3CD1
 * 00000001406A3CE3: add     rsp, 8
 * 00000001406A3CE7: call    loc_1406A3CDA
 * 00000001406A3CEC: add     rsp, 8
 * 00000001406A3CF0: call    loc_1406A3CE3
 * 00000001406A3CF5: add     rsp, 8
 * 00000001406A3CF9: call    loc_1406A3CEC
 * 00000001406A3CFE: add     rsp, 8
 * 00000001406A3D02: call    loc_1406A3CF5
 * 00000001406A3D07: add     rsp, 8
 * 00000001406A3D0B: call    loc_1406A3CFE
 * 00000001406A3D10: add     rsp, 8
 * 00000001406A3D14: call    loc_1406A3D07
 * 00000001406A3D19: add     rsp, 8
 * 00000001406A3D1D: call    loc_1406A3D10
 * 00000001406A3D22: add     rsp, 8
 * 00000001406A3D26: call    loc_1406A3D19
 * 00000001406A3D2B: add     rsp, 8
 * 00000001406A3D2F: call    loc_1406A3D22
 * 00000001406A3D34: add     rsp, 8
 * 00000001406A3D38: call    loc_1406A3D2B
 * 00000001406A3D3D: add     rsp, 8
 * 00000001406A3D41: call    loc_1406A3D34
 * 00000001406A3D46: add     rsp, 8
 * 00000001406A3D4A: call    loc_1406A3D3D
 * 00000001406A3D4F: add     rsp, 8
 * 00000001406A3D53: call    loc_1406A3D46
 * 00000001406A3D58: add     rsp, 8
 * 00000001406A3D5C: call    loc_1406A3D4F
 * 00000001406A3D61: add     rsp, 8
 * 00000001406A3D65: call    loc_1406A3D58
 * 00000001406A3D6A: add     rsp, 8
 * 00000001406A3D6E: call    loc_1406A3D61
 * 00000001406A3D73: add     rsp, 8
 * 00000001406A3D77: mov     eax, 0DADAh
 * 00000001406A3D7C: test    byte ptr gs:85Ch, 8
 * 00000001406A3D85: jz      short loc_1406A3D8E
 * 00000001406A3D87: mov     al, 20h ; ' '
 * 00000001406A3D89: incsspq rax
 * 00000001406A3D8E: test    word ptr gs:858h, 100h
 * 00000001406A3D99: jz      short loc_1406A3DA7
 * 00000001406A3D9B: xor     eax, eax
 * 00000001406A3D9D: xor     edx, edx
 * 00000001406A3D9F: mov     ecx, 1
 * 00000001406A3DA4: div     rcx
 * 00000001406A3DA7: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406A3DAB: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406A3DAF: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406A3DB3: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406A3DB7: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406A3DBB: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406A3DBF: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406A3DC3: mov     r10, [rbp+0D8h+var_100]
 * 00000001406A3DC7: mov     r9, [rbp+0D8h+var_108]
 * 00000001406A3DCB: mov     r8, [rbp+0D8h+var_110]
 * 00000001406A3DCF: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406A3DD3: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406A3DD7: mov     rax, [rbp+0D8h+var_128]
 * 00000001406A3DDB: mov     rsp, rbp
 * 00000001406A3DDE: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406A3DE5: add     rsp, 0E8h
 * 00000001406A3DEC: test    cs:KiKvaShadow, 1
 * 00000001406A3DF3: jz      short loc_1406A3DFA
 * 00000001406A3DF5: jmp     KiKernelExit
 * 00000001406A3DFA: test    word ptr gs:858h, 200h
 * 00000001406A3E05: jz      short loc_1406A3E0C
 * 00000001406A3E07: verw    [rsp-10h+arg_20]
 * 00000001406A3E0C: swapgs
 * 00000001406A3E0F: iretq
 * 00000001406A3E11: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406A3E15: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406A3E19: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406A3E1D: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406A3E21: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406A3E25: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406A3E29: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406A3E2D: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406A3E31: mov     r10, [rbp+0D8h+var_100]
 * 00000001406A3E35: mov     r9, [rbp+0D8h+var_108]
 * 00000001406A3E39: mov     r8, [rbp+0D8h+var_110]
 * 00000001406A3E3D: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406A3E41: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406A3E45: mov     rax, [rbp+0D8h+var_128]
 * 00000001406A3E49: mov     rsp, rbp
 * 00000001406A3E4C: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406A3E53: add     rsp, 0E8h
 * 00000001406A3E5A: iretq
 */
