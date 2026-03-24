/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1406AD9F0
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x14034A8A0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ACD50 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AD9F0 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1406AD9F0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AD9F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AD9F0: mov     rcx, gs:9158h
 * 00000001406AD9F9: mov     rax, rcx
 * 00000001406AD9FC: mov     edx, cs:KeIsrStackSize
 * 00000001406ADA02: sub     rax, rdx
 * 00000001406ADA05: mov     rdx, rsp
 * 00000001406ADA08: cmp     rax, rsp
 * 00000001406ADA0B: ja      short loc_1406ADA12
 * 00000001406ADA0D: cmp     rsp, rcx
 * 00000001406ADA10: jb      short loc_1406ADA1E
 * 00000001406ADA12: cmp     cs:KiBugCheckActive, 0
 * 00000001406ADA19: jnz     short loc_1406ADA1E
 * 00000001406ADA1B: mov     rsp, rcx
 * 00000001406ADA1E: sub     rsp, 20h
 * 00000001406ADA22: mov     [rsp+20h+var_10], rdx
 * 00000001406ADA27: call    KiInterruptSubDispatchNoLock
 * 00000001406ADA2C: mov     rsp, [rsp+20h+var_10]
 * 00000001406ADA31: mov     rcx, gs:20h
 * 00000001406ADA3A: movzx   edx, byte ptr [rbp-57h]
 * 00000001406ADA3E: call    KiEndInterruptCycleAccumulation
 * 00000001406ADA43: test    al, al
 * 00000001406ADA45: jz      short loc_1406ADA4C
 * 00000001406ADA47: call    KiDpcInterruptBypass
 * 00000001406ADA4C: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406ADA50: cmp     cs:KiIrqlFlags, 0
 * 00000001406ADA57: jz      short loc_1406ADA60
 * 00000001406ADA59: call    KzSetIrqlUnsafe
 * 00000001406ADA5E: jmp     short loc_1406ADA64
 * 00000001406ADA60: mov     cr8, rcx
 * 00000001406ADA64: mov     rsi, [rbp+0D0h]
 * 00000001406ADA6B: test    byte ptr [rbp+0F0h], 1
 * 00000001406ADA72: jz      loc_1406ADD6D
 * 00000001406ADA78: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406ADA7F: jz      short loc_1406ADA84
 * 00000001406ADA81: stac
 * 00000001406ADA84: mov     rcx, gs:188h
 * 00000001406ADA8D: test    byte ptr [rcx+0C2h], 3
 * 00000001406ADA94: jz      short loc_1406ADAB1
 * 00000001406ADA96: mov     ecx, 1
 * 00000001406ADA9B: mov     cr8, rcx
 * 00000001406ADA9F: sti
 * 00000001406ADAA0: call    KiInitiateUserApc
 * 00000001406ADAA5: cli
 * 00000001406ADAA6: mov     ecx, 0
 * 00000001406ADAAB: mov     cr8, rcx
 * 00000001406ADAAF: jmp     short loc_1406ADA84
 * 00000001406ADAB1: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406ADAB6: test    eax, eax
 * 00000001406ADAB8: mov     rax, [rbp-50h]
 * 00000001406ADABC: jnz     short loc_1406ADA84
 * 00000001406ADABE: test    byte ptr gs:860h, 2
 * 00000001406ADAC7: jz      short loc_1406ADAD0
 * 00000001406ADAC9: xor     ecx, ecx
 * 00000001406ADACB: call    KiUpdateStibpPairing
 * 00000001406ADAD0: mov     rcx, gs:188h
 * 00000001406ADAD9: test    dword ptr [rcx], 8000000h
 * 00000001406ADADF: jz      short loc_1406ADAE6
 * 00000001406ADAE1: call    KiRestoreSetContextState
 * 00000001406ADAE6: mov     rcx, gs:188h
 * 00000001406ADAEF: test    dword ptr [rcx], 10000h
 * 00000001406ADAF5: jz      short loc_1406ADB0B
 * 00000001406ADAF7: test    byte ptr [rcx+2], 1
 * 00000001406ADAFB: jz      short loc_1406ADB0B
 * 00000001406ADAFD: call    KiCopyCounters
 * 00000001406ADB02: mov     rcx, gs:188h
 * 00000001406ADB0B: ldmxcsr dword ptr [rbp-54h]
 * 00000001406ADB0F: cmp     word ptr [rbp+80h], 0
 * 00000001406ADB17: jz      short loc_1406ADB1E
 * 00000001406ADB19: call    KiRestoreDebugRegisterState
 * 00000001406ADB1E: mov     rcx, gs:188h
 * 00000001406ADB27: bt      dword ptr [rcx+74h], 16h
 * 00000001406ADB2C: jnb     short loc_1406ADB58
 * 00000001406ADB2E: xor     ecx, ecx
 * 00000001406ADB30: rdsspq  rcx
 * 00000001406ADB35: mov     r8, gs:9D28h
 * 00000001406ADB3E: add     r8, 8
 * 00000001406ADB42: cmp     rcx, r8
 * 00000001406ADB45: jnz     short loc_1406ADB58
 * 00000001406ADB47: mov     rcx, gs:9D20h
 * 00000001406ADB50: rstorssp qword ptr [rcx]
 * 00000001406ADB54: saveprevssp
 * 00000001406ADB58: mov     byte ptr gs:85Eh, 0
 * 00000001406ADB61: movzx   eax, word ptr gs:86Ch
 * 00000001406ADB6A: cmp     gs:866h, ax
 * 00000001406ADB73: jz      short loc_1406ADB87
 * 00000001406ADB75: mov     gs:866h, ax
 * 00000001406ADB7E: mov     ecx, 48h ; 'H'
 * 00000001406ADB83: xor     edx, edx
 * 00000001406ADB85: wrmsr
 * 00000001406ADB87: btr     word ptr gs:858h, 2
 * 00000001406ADB92: jnb     short loc_1406ADBA2
 * 00000001406ADB94: mov     eax, 1
 * 00000001406ADB99: xor     edx, edx
 * 00000001406ADB9B: mov     ecx, 49h ; 'I'
 * 00000001406ADBA0: wrmsr
 * 00000001406ADBA2: btr     word ptr gs:858h, 5
 * 00000001406ADBAD: jnb     loc_1406ADCEA
 * 00000001406ADBB3: call    loc_1406ADCC6
 * 00000001406ADBB8: add     rsp, 8
 * 00000001406ADBBC: call    loc_1406ADCCF
 * 00000001406ADBC1: add     rsp, 8
 * 00000001406ADBC5: call    loc_1406ADBB8
 * 00000001406ADBCA: add     rsp, 8
 * 00000001406ADBCE: call    loc_1406ADBC1
 * 00000001406ADBD3: add     rsp, 8
 * 00000001406ADBD7: call    loc_1406ADBCA
 * 00000001406ADBDC: add     rsp, 8
 * 00000001406ADBE0: call    loc_1406ADBD3
 * 00000001406ADBE5: add     rsp, 8
 * 00000001406ADBE9: call    loc_1406ADBDC
 * 00000001406ADBEE: add     rsp, 8
 * 00000001406ADBF2: call    loc_1406ADBE5
 * 00000001406ADBF7: add     rsp, 8
 * 00000001406ADBFB: call    loc_1406ADBEE
 * 00000001406ADC00: add     rsp, 8
 * 00000001406ADC04: call    loc_1406ADBF7
 * 00000001406ADC09: add     rsp, 8
 * 00000001406ADC0D: call    loc_1406ADC00
 * 00000001406ADC12: add     rsp, 8
 * 00000001406ADC16: call    loc_1406ADC09
 * 00000001406ADC1B: add     rsp, 8
 * 00000001406ADC1F: call    loc_1406ADC12
 * 00000001406ADC24: add     rsp, 8
 * 00000001406ADC28: call    loc_1406ADC1B
 * 00000001406ADC2D: add     rsp, 8
 * 00000001406ADC31: call    loc_1406ADC24
 * 00000001406ADC36: add     rsp, 8
 * 00000001406ADC3A: call    loc_1406ADC2D
 * 00000001406ADC3F: add     rsp, 8
 * 00000001406ADC43: call    loc_1406ADC36
 * 00000001406ADC48: add     rsp, 8
 * 00000001406ADC4C: call    loc_1406ADC3F
 * 00000001406ADC51: add     rsp, 8
 * 00000001406ADC55: call    loc_1406ADC48
 * 00000001406ADC5A: add     rsp, 8
 * 00000001406ADC5E: call    loc_1406ADC51
 * 00000001406ADC63: add     rsp, 8
 * 00000001406ADC67: call    loc_1406ADC5A
 * 00000001406ADC6C: add     rsp, 8
 * 00000001406ADC70: call    loc_1406ADC63
 * 00000001406ADC75: add     rsp, 8
 * 00000001406ADC79: call    loc_1406ADC6C
 * 00000001406ADC7E: add     rsp, 8
 * 00000001406ADC82: call    loc_1406ADC75
 * 00000001406ADC87: add     rsp, 8
 * 00000001406ADC8B: call    loc_1406ADC7E
 * 00000001406ADC90: add     rsp, 8
 * 00000001406ADC94: call    loc_1406ADC87
 * 00000001406ADC99: add     rsp, 8
 * 00000001406ADC9D: call    loc_1406ADC90
 * 00000001406ADCA2: add     rsp, 8
 * 00000001406ADCA6: call    loc_1406ADC99
 * 00000001406ADCAB: add     rsp, 8
 * 00000001406ADCAF: call    loc_1406ADCA2
 * 00000001406ADCB4: add     rsp, 8
 * 00000001406ADCB8: call    loc_1406ADCAB
 * 00000001406ADCBD: add     rsp, 8
 * 00000001406ADCC1: call    loc_1406ADCB4
 * 00000001406ADCC6: add     rsp, 8
 * 00000001406ADCCA: call    loc_1406ADCBD
 * 00000001406ADCCF: add     rsp, 8
 * 00000001406ADCD3: mov     eax, 0DADAh
 * 00000001406ADCD8: test    byte ptr gs:85Ch, 8
 * 00000001406ADCE1: jz      short loc_1406ADCEA
 * 00000001406ADCE3: mov     al, 20h ; ' '
 * 00000001406ADCE5: incsspq rax
 * 00000001406ADCEA: test    word ptr gs:858h, 100h
 * 00000001406ADCF5: jz      short loc_1406ADD03
 * 00000001406ADCF7: xor     eax, eax
 * 00000001406ADCF9: xor     edx, edx
 * 00000001406ADCFB: mov     ecx, 1
 * 00000001406ADD00: div     rcx
 * 00000001406ADD03: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406ADD07: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406ADD0B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406ADD0F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406ADD13: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406ADD17: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406ADD1B: mov     r11, [rbp-20h]
 * 00000001406ADD1F: mov     r10, [rbp-28h]
 * 00000001406ADD23: mov     r9, [rbp-30h]
 * 00000001406ADD27: mov     r8, [rbp-38h]
 * 00000001406ADD2B: mov     rdx, [rbp-40h]
 * 00000001406ADD2F: mov     rcx, [rbp-48h]
 * 00000001406ADD33: mov     rax, [rbp-50h]
 * 00000001406ADD37: mov     rsp, rbp
 * 00000001406ADD3A: mov     rbp, [rbp+0D8h]
 * 00000001406ADD41: add     rsp, 0E8h
 * 00000001406ADD48: test    cs:KiKvaShadow, 1
 * 00000001406ADD4F: jz      short loc_1406ADD56
 * 00000001406ADD51: jmp     KiKernelExit
 * 00000001406ADD56: test    word ptr gs:858h, 200h
 * 00000001406ADD61: jz      short loc_1406ADD68
 * 00000001406ADD63: verw    [rsp-1C8h+arg_1E0]
 * 00000001406ADD68: swapgs
 * 00000001406ADD6B: iretq
 * 00000001406ADD6D: ldmxcsr dword ptr [rbp-54h]
 * 00000001406ADD71: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406ADD75: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406ADD79: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406ADD7D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406ADD81: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406ADD85: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406ADD89: mov     r11, [rbp-20h]
 * 00000001406ADD8D: mov     r10, [rbp-28h]
 * 00000001406ADD91: mov     r9, [rbp-30h]
 * 00000001406ADD95: mov     r8, [rbp-38h]
 * 00000001406ADD99: mov     rdx, [rbp-40h]
 * 00000001406ADD9D: mov     rcx, [rbp-48h]
 * 00000001406ADDA1: mov     rax, [rbp-50h]
 * 00000001406ADDA5: mov     rsp, rbp
 * 00000001406ADDA8: mov     rbp, [rbp+0D8h]
 * 00000001406ADDAF: add     rsp, 0E8h
 * 00000001406ADDB6: iretq
 */
