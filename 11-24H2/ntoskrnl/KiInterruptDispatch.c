/*
 * XREFs of KiInterruptDispatch @ 0x1406ADDF0
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140408120 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1406ADC50 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x1406ADDF0 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1406ADDF0
 * Reason: Hex-Rays returned no pseudocode for 0x1406ADDF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406ADDF0: mov     rcx, gs:9158h
 * 00000001406ADDF9: mov     rax, rcx
 * 00000001406ADDFC: mov     edx, cs:KeIsrStackSize
 * 00000001406ADE02: sub     rax, rdx
 * 00000001406ADE05: mov     rdx, rsp
 * 00000001406ADE08: cmp     rax, rsp
 * 00000001406ADE0B: ja      short loc_1406ADE12
 * 00000001406ADE0D: cmp     rsp, rcx
 * 00000001406ADE10: jb      short loc_1406ADE1E
 * 00000001406ADE12: cmp     cs:KiBugCheckActive, 0
 * 00000001406ADE19: jnz     short loc_1406ADE1E
 * 00000001406ADE1B: mov     rsp, rcx
 * 00000001406ADE1E: sub     rsp, 20h
 * 00000001406ADE22: mov     [rsp+20h+var_10], rdx
 * 00000001406ADE27: call    KiInterruptSubDispatch
 * 00000001406ADE2C: mov     rsp, [rsp+20h+var_10]
 * 00000001406ADE31: mov     rcx, rsi
 * 00000001406ADE34: call    HalPerformEndOfInterrupt
 * 00000001406ADE39: mov     rcx, gs:20h
 * 00000001406ADE42: movzx   edx, byte ptr [rbp-57h]
 * 00000001406ADE46: call    KiEndInterruptCycleAccumulation
 * 00000001406ADE4B: test    al, al
 * 00000001406ADE4D: jz      short loc_1406ADE54
 * 00000001406ADE4F: call    KiDpcInterruptBypass
 * 00000001406ADE54: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406ADE58: cmp     cs:KiIrqlFlags, 0
 * 00000001406ADE5F: jz      short loc_1406ADE68
 * 00000001406ADE61: call    KzSetIrqlUnsafe
 * 00000001406ADE66: jmp     short loc_1406ADE6C
 * 00000001406ADE68: mov     cr8, rcx
 * 00000001406ADE6C: mov     rsi, [rbp+0D0h]
 * 00000001406ADE73: test    byte ptr [rbp+0F0h], 1
 * 00000001406ADE7A: jz      loc_1406AE175
 * 00000001406ADE80: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406ADE87: jz      short loc_1406ADE8C
 * 00000001406ADE89: stac
 * 00000001406ADE8C: mov     rcx, gs:188h
 * 00000001406ADE95: test    byte ptr [rcx+0C2h], 3
 * 00000001406ADE9C: jz      short loc_1406ADEB9
 * 00000001406ADE9E: mov     ecx, 1
 * 00000001406ADEA3: mov     cr8, rcx
 * 00000001406ADEA7: sti
 * 00000001406ADEA8: call    KiInitiateUserApc
 * 00000001406ADEAD: cli
 * 00000001406ADEAE: mov     ecx, 0
 * 00000001406ADEB3: mov     cr8, rcx
 * 00000001406ADEB7: jmp     short loc_1406ADE8C
 * 00000001406ADEB9: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406ADEBE: test    eax, eax
 * 00000001406ADEC0: mov     rax, [rbp-50h]
 * 00000001406ADEC4: jnz     short loc_1406ADE8C
 * 00000001406ADEC6: test    byte ptr gs:860h, 2
 * 00000001406ADECF: jz      short loc_1406ADED8
 * 00000001406ADED1: xor     ecx, ecx
 * 00000001406ADED3: call    KiUpdateStibpPairing
 * 00000001406ADED8: mov     rcx, gs:188h
 * 00000001406ADEE1: test    dword ptr [rcx], 8000000h
 * 00000001406ADEE7: jz      short loc_1406ADEEE
 * 00000001406ADEE9: call    KiRestoreSetContextState
 * 00000001406ADEEE: mov     rcx, gs:188h
 * 00000001406ADEF7: test    dword ptr [rcx], 10000h
 * 00000001406ADEFD: jz      short loc_1406ADF13
 * 00000001406ADEFF: test    byte ptr [rcx+2], 1
 * 00000001406ADF03: jz      short loc_1406ADF13
 * 00000001406ADF05: call    KiCopyCounters
 * 00000001406ADF0A: mov     rcx, gs:188h
 * 00000001406ADF13: ldmxcsr dword ptr [rbp-54h]
 * 00000001406ADF17: cmp     word ptr [rbp+80h], 0
 * 00000001406ADF1F: jz      short loc_1406ADF26
 * 00000001406ADF21: call    KiRestoreDebugRegisterState
 * 00000001406ADF26: mov     rcx, gs:188h
 * 00000001406ADF2F: bt      dword ptr [rcx+74h], 16h
 * 00000001406ADF34: jnb     short loc_1406ADF60
 * 00000001406ADF36: xor     ecx, ecx
 * 00000001406ADF38: rdsspq  rcx
 * 00000001406ADF3D: mov     r8, gs:9D28h
 * 00000001406ADF46: add     r8, 8
 * 00000001406ADF4A: cmp     rcx, r8
 * 00000001406ADF4D: jnz     short loc_1406ADF60
 * 00000001406ADF4F: mov     rcx, gs:9D20h
 * 00000001406ADF58: rstorssp qword ptr [rcx]
 * 00000001406ADF5C: saveprevssp
 * 00000001406ADF60: mov     byte ptr gs:85Eh, 0
 * 00000001406ADF69: movzx   eax, word ptr gs:86Ch
 * 00000001406ADF72: cmp     gs:866h, ax
 * 00000001406ADF7B: jz      short loc_1406ADF8F
 * 00000001406ADF7D: mov     gs:866h, ax
 * 00000001406ADF86: mov     ecx, 48h ; 'H'
 * 00000001406ADF8B: xor     edx, edx
 * 00000001406ADF8D: wrmsr
 * 00000001406ADF8F: btr     word ptr gs:858h, 2
 * 00000001406ADF9A: jnb     short loc_1406ADFAA
 * 00000001406ADF9C: mov     eax, 1
 * 00000001406ADFA1: xor     edx, edx
 * 00000001406ADFA3: mov     ecx, 49h ; 'I'
 * 00000001406ADFA8: wrmsr
 * 00000001406ADFAA: btr     word ptr gs:858h, 5
 * 00000001406ADFB5: jnb     loc_1406AE0F2
 * 00000001406ADFBB: call    loc_1406AE0CE
 * 00000001406ADFC0: add     rsp, 8
 * 00000001406ADFC4: call    loc_1406AE0D7
 * 00000001406ADFC9: add     rsp, 8
 * 00000001406ADFCD: call    loc_1406ADFC0
 * 00000001406ADFD2: add     rsp, 8
 * 00000001406ADFD6: call    loc_1406ADFC9
 * 00000001406ADFDB: add     rsp, 8
 * 00000001406ADFDF: call    loc_1406ADFD2
 * 00000001406ADFE4: add     rsp, 8
 * 00000001406ADFE8: call    loc_1406ADFDB
 * 00000001406ADFED: add     rsp, 8
 * 00000001406ADFF1: call    loc_1406ADFE4
 * 00000001406ADFF6: add     rsp, 8
 * 00000001406ADFFA: call    loc_1406ADFED
 * 00000001406ADFFF: add     rsp, 8
 * 00000001406AE003: call    loc_1406ADFF6
 * 00000001406AE008: add     rsp, 8
 * 00000001406AE00C: call    loc_1406ADFFF
 * 00000001406AE011: add     rsp, 8
 * 00000001406AE015: call    loc_1406AE008
 * 00000001406AE01A: add     rsp, 8
 * 00000001406AE01E: call    loc_1406AE011
 * 00000001406AE023: add     rsp, 8
 * 00000001406AE027: call    loc_1406AE01A
 * 00000001406AE02C: add     rsp, 8
 * 00000001406AE030: call    loc_1406AE023
 * 00000001406AE035: add     rsp, 8
 * 00000001406AE039: call    loc_1406AE02C
 * 00000001406AE03E: add     rsp, 8
 * 00000001406AE042: call    loc_1406AE035
 * 00000001406AE047: add     rsp, 8
 * 00000001406AE04B: call    loc_1406AE03E
 * 00000001406AE050: add     rsp, 8
 * 00000001406AE054: call    loc_1406AE047
 * 00000001406AE059: add     rsp, 8
 * 00000001406AE05D: call    loc_1406AE050
 * 00000001406AE062: add     rsp, 8
 * 00000001406AE066: call    loc_1406AE059
 * 00000001406AE06B: add     rsp, 8
 * 00000001406AE06F: call    loc_1406AE062
 * 00000001406AE074: add     rsp, 8
 * 00000001406AE078: call    loc_1406AE06B
 * 00000001406AE07D: add     rsp, 8
 * 00000001406AE081: call    loc_1406AE074
 * 00000001406AE086: add     rsp, 8
 * 00000001406AE08A: call    loc_1406AE07D
 * 00000001406AE08F: add     rsp, 8
 * 00000001406AE093: call    loc_1406AE086
 * 00000001406AE098: add     rsp, 8
 * 00000001406AE09C: call    loc_1406AE08F
 * 00000001406AE0A1: add     rsp, 8
 * 00000001406AE0A5: call    loc_1406AE098
 * 00000001406AE0AA: add     rsp, 8
 * 00000001406AE0AE: call    loc_1406AE0A1
 * 00000001406AE0B3: add     rsp, 8
 * 00000001406AE0B7: call    loc_1406AE0AA
 * 00000001406AE0BC: add     rsp, 8
 * 00000001406AE0C0: call    loc_1406AE0B3
 * 00000001406AE0C5: add     rsp, 8
 * 00000001406AE0C9: call    loc_1406AE0BC
 * 00000001406AE0CE: add     rsp, 8
 * 00000001406AE0D2: call    loc_1406AE0C5
 * 00000001406AE0D7: add     rsp, 8
 * 00000001406AE0DB: mov     eax, 0DADAh
 * 00000001406AE0E0: test    byte ptr gs:85Ch, 8
 * 00000001406AE0E9: jz      short loc_1406AE0F2
 * 00000001406AE0EB: mov     al, 20h ; ' '
 * 00000001406AE0ED: incsspq rax
 * 00000001406AE0F2: test    word ptr gs:858h, 100h
 * 00000001406AE0FD: jz      short loc_1406AE10B
 * 00000001406AE0FF: xor     eax, eax
 * 00000001406AE101: xor     edx, edx
 * 00000001406AE103: mov     ecx, 1
 * 00000001406AE108: div     rcx
 * 00000001406AE10B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AE10F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AE113: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AE117: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AE11B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AE11F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AE123: mov     r11, [rbp-20h]
 * 00000001406AE127: mov     r10, [rbp-28h]
 * 00000001406AE12B: mov     r9, [rbp-30h]
 * 00000001406AE12F: mov     r8, [rbp-38h]
 * 00000001406AE133: mov     rdx, [rbp-40h]
 * 00000001406AE137: mov     rcx, [rbp-48h]
 * 00000001406AE13B: mov     rax, [rbp-50h]
 * 00000001406AE13F: mov     rsp, rbp
 * 00000001406AE142: mov     rbp, [rbp+0D8h]
 * 00000001406AE149: add     rsp, 0E8h
 * 00000001406AE150: test    cs:KiKvaShadow, 1
 * 00000001406AE157: jz      short loc_1406AE15E
 * 00000001406AE159: jmp     KiKernelExit
 * 00000001406AE15E: test    word ptr gs:858h, 200h
 * 00000001406AE169: jz      short loc_1406AE170
 * 00000001406AE16B: verw    [rsp-1C8h+arg_1E0]
 * 00000001406AE170: swapgs
 * 00000001406AE173: iretq
 * 00000001406AE175: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AE179: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AE17D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AE181: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AE185: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AE189: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AE18D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AE191: mov     r11, [rbp-20h]
 * 00000001406AE195: mov     r10, [rbp-28h]
 * 00000001406AE199: mov     r9, [rbp-30h]
 * 00000001406AE19D: mov     r8, [rbp-38h]
 * 00000001406AE1A1: mov     rdx, [rbp-40h]
 * 00000001406AE1A5: mov     rcx, [rbp-48h]
 * 00000001406AE1A9: mov     rax, [rbp-50h]
 * 00000001406AE1AD: mov     rsp, rbp
 * 00000001406AE1B0: mov     rbp, [rbp+0D8h]
 * 00000001406AE1B7: add     rsp, 0E8h
 * 00000001406AE1BE: iretq
 */
