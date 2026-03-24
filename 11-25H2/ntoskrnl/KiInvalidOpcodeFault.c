/*
 * XREFs of KiInvalidOpcodeFault @ 0x1406AC840
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140BAA440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x1406AC840 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x1406AC840
 * Reason: Hex-Rays returned no pseudocode for 0x1406AC840
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AC840: sub     rsp, 8
 * 00000001406AC844: push    rbp
 * 00000001406AC845: sub     rsp, 158h
 * 00000001406AC84C: lea     rbp, [rsp+80h]
 * 00000001406AC854: mov     [rbp+0E8h+var_13D], 1
 * 00000001406AC858: mov     [rbp+0E8h+var_138], rax
 * 00000001406AC85C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406AC860: mov     [rbp+0E8h+var_128], rdx
 * 00000001406AC864: mov     [rbp+0E8h+var_120], r8
 * 00000001406AC868: mov     [rbp+0E8h+var_118], r9
 * 00000001406AC86C: mov     [rbp+0E8h+var_110], r10
 * 00000001406AC870: mov     [rbp+0E8h+var_108], r11
 * 00000001406AC874: test    [rbp+0E8h+arg_0], 1
 * 00000001406AC87B: jnz     short loc_1406AC8B5
 * 00000001406AC87D: xor     edx, edx
 * 00000001406AC87F: rdsspq  rdx
 * 00000001406AC884: mov     [rbp+0E8h+var_90], rdx
 * 00000001406AC888: lfence
 * 00000001406AC88B: test    byte ptr gs:858h, 1
 * 00000001406AC894: jnz     short loc_1406AC89E
 * 00000001406AC896: lfence
 * 00000001406AC899: jmp     loc_1406ACB26
 * 00000001406AC89E: movzx   eax, word ptr gs:866h
 * 00000001406AC8A7: mov     ecx, 48h ; 'H'
 * 00000001406AC8AC: xor     edx, edx
 * 00000001406AC8AE: wrmsr
 * 00000001406AC8B0: jmp     loc_1406ACB26
 * 00000001406AC8B5: test    cs:KiKvaShadow, 1
 * 00000001406AC8BC: jnz     short loc_1406AC8C1
 * 00000001406AC8BE: swapgs
 * 00000001406AC8C1: lfence
 * 00000001406AC8C4: mov     rcx, gs:9D28h
 * 00000001406AC8CD: test    rcx, rcx
 * 00000001406AC8D0: jz      short loc_1406AC8F1
 * 00000001406AC8D2: rdsspq  rdx
 * 00000001406AC8D7: mov     r10, gs:9D20h
 * 00000001406AC8E0: add     r10, 8
 * 00000001406AC8E4: cmp     rdx, r10
 * 00000001406AC8E7: jnz     short loc_1406AC8F1
 * 00000001406AC8E9: rstorssp qword ptr [rcx]
 * 00000001406AC8ED: saveprevssp
 * 00000001406AC8F1: mov     r10, gs:188h
 * 00000001406AC8FA: mov     rcx, gs:188h
 * 00000001406AC903: mov     rcx, [rcx+220h]
 * 00000001406AC90A: mov     rcx, [rcx+760h]
 * 00000001406AC911: mov     gs:850h, rcx
 * 00000001406AC91A: mov     cx, gs:862h
 * 00000001406AC923: mov     gs:864h, cx
 * 00000001406AC92C: mov     cl, gs:858h
 * 00000001406AC934: mov     gs:85Ah, cl
 * 00000001406AC93C: movzx   eax, word ptr gs:868h
 * 00000001406AC945: cmp     gs:866h, ax
 * 00000001406AC94E: jz      short loc_1406AC962
 * 00000001406AC950: mov     gs:866h, ax
 * 00000001406AC959: mov     ecx, 48h ; 'H'
 * 00000001406AC95E: xor     edx, edx
 * 00000001406AC960: wrmsr
 * 00000001406AC962: movzx   edx, byte ptr gs:858h
 * 00000001406AC96B: test    edx, 8
 * 00000001406AC971: jz      short loc_1406AC98A
 * 00000001406AC973: mov     eax, 1
 * 00000001406AC978: xor     edx, edx
 * 00000001406AC97A: mov     ecx, 49h ; 'I'
 * 00000001406AC97F: wrmsr
 * 00000001406AC981: movzx   edx, byte ptr gs:858h
 * 00000001406AC98A: test    edx, 2
 * 00000001406AC990: jz      loc_1406ACACD
 * 00000001406AC996: call    loc_1406ACAA9
 * 00000001406AC99B: add     rsp, 8
 * 00000001406AC99F: call    loc_1406ACAB2
 * 00000001406AC9A4: add     rsp, 8
 * 00000001406AC9A8: call    loc_1406AC99B
 * 00000001406AC9AD: add     rsp, 8
 * 00000001406AC9B1: call    loc_1406AC9A4
 * 00000001406AC9B6: add     rsp, 8
 * 00000001406AC9BA: call    loc_1406AC9AD
 * 00000001406AC9BF: add     rsp, 8
 * 00000001406AC9C3: call    loc_1406AC9B6
 * 00000001406AC9C8: add     rsp, 8
 * 00000001406AC9CC: call    loc_1406AC9BF
 * 00000001406AC9D1: add     rsp, 8
 * 00000001406AC9D5: call    loc_1406AC9C8
 * 00000001406AC9DA: add     rsp, 8
 * 00000001406AC9DE: call    loc_1406AC9D1
 * 00000001406AC9E3: add     rsp, 8
 * 00000001406AC9E7: call    loc_1406AC9DA
 * 00000001406AC9EC: add     rsp, 8
 * 00000001406AC9F0: call    loc_1406AC9E3
 * 00000001406AC9F5: add     rsp, 8
 * 00000001406AC9F9: call    loc_1406AC9EC
 * 00000001406AC9FE: add     rsp, 8
 * 00000001406ACA02: call    loc_1406AC9F5
 * 00000001406ACA07: add     rsp, 8
 * 00000001406ACA0B: call    loc_1406AC9FE
 * 00000001406ACA10: add     rsp, 8
 * 00000001406ACA14: call    loc_1406ACA07
 * 00000001406ACA19: add     rsp, 8
 * 00000001406ACA1D: call    loc_1406ACA10
 * 00000001406ACA22: add     rsp, 8
 * 00000001406ACA26: call    loc_1406ACA19
 * 00000001406ACA2B: add     rsp, 8
 * 00000001406ACA2F: call    loc_1406ACA22
 * 00000001406ACA34: add     rsp, 8
 * 00000001406ACA38: call    loc_1406ACA2B
 * 00000001406ACA3D: add     rsp, 8
 * 00000001406ACA41: call    loc_1406ACA34
 * 00000001406ACA46: add     rsp, 8
 * 00000001406ACA4A: call    loc_1406ACA3D
 * 00000001406ACA4F: add     rsp, 8
 * 00000001406ACA53: call    loc_1406ACA46
 * 00000001406ACA58: add     rsp, 8
 * 00000001406ACA5C: call    loc_1406ACA4F
 * 00000001406ACA61: add     rsp, 8
 * 00000001406ACA65: call    loc_1406ACA58
 * 00000001406ACA6A: add     rsp, 8
 * 00000001406ACA6E: call    loc_1406ACA61
 * 00000001406ACA73: add     rsp, 8
 * 00000001406ACA77: call    loc_1406ACA6A
 * 00000001406ACA7C: add     rsp, 8
 * 00000001406ACA80: call    loc_1406ACA73
 * 00000001406ACA85: add     rsp, 8
 * 00000001406ACA89: call    loc_1406ACA7C
 * 00000001406ACA8E: add     rsp, 8
 * 00000001406ACA92: call    loc_1406ACA85
 * 00000001406ACA97: add     rsp, 8
 * 00000001406ACA9B: call    loc_1406ACA8E
 * 00000001406ACAA0: add     rsp, 8
 * 00000001406ACAA4: call    loc_1406ACA97
 * 00000001406ACAA9: add     rsp, 8
 * 00000001406ACAAD: call    loc_1406ACAA0
 * 00000001406ACAB2: add     rsp, 8
 * 00000001406ACAB6: mov     eax, 0DADAh
 * 00000001406ACABB: test    byte ptr gs:85Ch, 8
 * 00000001406ACAC4: jz      short loc_1406ACACD
 * 00000001406ACAC6: mov     al, 20h ; ' '
 * 00000001406ACAC8: incsspq rax
 * 00000001406ACACD: test    edx, 80h
 * 00000001406ACAD3: jz      short loc_1406ACADD
 * 00000001406ACAD5: lfence
 * 00000001406ACAD8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406ACADD: lfence
 * 00000001406ACAE0: mov     byte ptr gs:85Eh, 0
 * 00000001406ACAE9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406ACAF0: jz      short loc_1406ACB11
 * 00000001406ACAF2: mov     ecx, 6A7h
 * 00000001406ACAF7: rdmsr
 * 00000001406ACAF9: cmp     edx, 0
 * 00000001406ACAFC: jz      short loc_1406ACB11
 * 00000001406ACAFE: mov     ecx, edx
 * 00000001406ACB00: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406ACB06: cmp     edx, ecx
 * 00000001406ACB08: jz      short loc_1406ACB11
 * 00000001406ACB0A: mov     ecx, 6A7h
 * 00000001406ACB0F: wrmsr
 * 00000001406ACB11: test    byte ptr [r10+3], 3
 * 00000001406ACB16: mov     [rbp+0E8h+var_68], 0
 * 00000001406ACB1F: jz      short loc_1406ACB26
 * 00000001406ACB21: call    KiSaveDebugRegisterState
 * 00000001406ACB26: cld
 * 00000001406ACB27: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406ACB2B: ldmxcsr dword ptr gs:180h
 * 00000001406ACB34: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406ACB38: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406ACB3C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406ACB40: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406ACB44: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406ACB48: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406ACB4C: test    [rbp+0E8h+arg_0], 1
 * 00000001406ACB53: jz      short loc_1406ACB5A
 * 00000001406ACB55: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406ACB5A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406ACB61: jz      short loc_1406ACB6F
 * 00000001406ACB63: test    [rbp+0E8h+arg_0], 1
 * 00000001406ACB6A: jz      short loc_1406ACB6F
 * 00000001406ACB6C: stac
 * 00000001406ACB6F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406ACB79: jz      short loc_1406ACB7C
 * 00000001406ACB7B: sti
 * 00000001406ACB7C: mov     ecx, 10000002h
 * 00000001406ACB81: xor     edx, edx
 * 00000001406ACB83: mov     r8, [rbp+0E8h]
 * 00000001406ACB8A: call    KiExceptionDispatch
 * 00000001406ACB8F: nop
 * 00000001406ACB90: cli
 * 00000001406ACB91: test    [rbp+0E8h+arg_0], 1
 * 00000001406ACB98: jz      loc_1406ACE93
 * 00000001406ACB9E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406ACBA5: jz      short loc_1406ACBAA
 * 00000001406ACBA7: stac
 * 00000001406ACBAA: mov     rcx, gs:188h
 * 00000001406ACBB3: test    byte ptr [rcx+0C2h], 3
 * 00000001406ACBBA: jz      short loc_1406ACBD7
 * 00000001406ACBBC: mov     ecx, 1
 * 00000001406ACBC1: mov     cr8, rcx
 * 00000001406ACBC5: sti
 * 00000001406ACBC6: call    KiInitiateUserApc
 * 00000001406ACBCB: cli
 * 00000001406ACBCC: mov     ecx, 0
 * 00000001406ACBD1: mov     cr8, rcx
 * 00000001406ACBD5: jmp     short loc_1406ACBAA
 * 00000001406ACBD7: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406ACBDC: test    eax, eax
 * 00000001406ACBDE: mov     rax, [rbp+0E8h+var_138]
 * 00000001406ACBE2: jnz     short loc_1406ACBAA
 * 00000001406ACBE4: test    byte ptr gs:860h, 2
 * 00000001406ACBED: jz      short loc_1406ACBF6
 * 00000001406ACBEF: xor     ecx, ecx
 * 00000001406ACBF1: call    KiUpdateStibpPairing
 * 00000001406ACBF6: mov     rcx, gs:188h
 * 00000001406ACBFF: test    dword ptr [rcx], 8000000h
 * 00000001406ACC05: jz      short loc_1406ACC0C
 * 00000001406ACC07: call    KiRestoreSetContextState
 * 00000001406ACC0C: mov     rcx, gs:188h
 * 00000001406ACC15: test    dword ptr [rcx], 10000h
 * 00000001406ACC1B: jz      short loc_1406ACC31
 * 00000001406ACC1D: test    byte ptr [rcx+2], 1
 * 00000001406ACC21: jz      short loc_1406ACC31
 * 00000001406ACC23: call    KiCopyCounters
 * 00000001406ACC28: mov     rcx, gs:188h
 * 00000001406ACC31: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406ACC35: cmp     [rbp+0E8h+var_68], 0
 * 00000001406ACC3D: jz      short loc_1406ACC44
 * 00000001406ACC3F: call    KiRestoreDebugRegisterState
 * 00000001406ACC44: mov     rcx, gs:188h
 * 00000001406ACC4D: bt      dword ptr [rcx+74h], 16h
 * 00000001406ACC52: jnb     short loc_1406ACC7E
 * 00000001406ACC54: xor     ecx, ecx
 * 00000001406ACC56: rdsspq  rcx
 * 00000001406ACC5B: mov     r8, gs:9D28h
 * 00000001406ACC64: add     r8, 8
 * 00000001406ACC68: cmp     rcx, r8
 * 00000001406ACC6B: jnz     short loc_1406ACC7E
 * 00000001406ACC6D: mov     rcx, gs:9D20h
 * 00000001406ACC76: rstorssp qword ptr [rcx]
 * 00000001406ACC7A: saveprevssp
 * 00000001406ACC7E: mov     byte ptr gs:85Eh, 0
 * 00000001406ACC87: movzx   eax, word ptr gs:86Ch
 * 00000001406ACC90: cmp     gs:866h, ax
 * 00000001406ACC99: jz      short loc_1406ACCAD
 * 00000001406ACC9B: mov     gs:866h, ax
 * 00000001406ACCA4: mov     ecx, 48h ; 'H'
 * 00000001406ACCA9: xor     edx, edx
 * 00000001406ACCAB: wrmsr
 * 00000001406ACCAD: btr     word ptr gs:858h, 2
 * 00000001406ACCB8: jnb     short loc_1406ACCC8
 * 00000001406ACCBA: mov     eax, 1
 * 00000001406ACCBF: xor     edx, edx
 * 00000001406ACCC1: mov     ecx, 49h ; 'I'
 * 00000001406ACCC6: wrmsr
 * 00000001406ACCC8: btr     word ptr gs:858h, 5
 * 00000001406ACCD3: jnb     loc_1406ACE10
 * 00000001406ACCD9: call    loc_1406ACDEC
 * 00000001406ACCDE: add     rsp, 8
 * 00000001406ACCE2: call    loc_1406ACDF5
 * 00000001406ACCE7: add     rsp, 8
 * 00000001406ACCEB: call    loc_1406ACCDE
 * 00000001406ACCF0: add     rsp, 8
 * 00000001406ACCF4: call    loc_1406ACCE7
 * 00000001406ACCF9: add     rsp, 8
 * 00000001406ACCFD: call    loc_1406ACCF0
 * 00000001406ACD02: add     rsp, 8
 * 00000001406ACD06: call    loc_1406ACCF9
 * 00000001406ACD0B: add     rsp, 8
 * 00000001406ACD0F: call    loc_1406ACD02
 * 00000001406ACD14: add     rsp, 8
 * 00000001406ACD18: call    loc_1406ACD0B
 * 00000001406ACD1D: add     rsp, 8
 * 00000001406ACD21: call    loc_1406ACD14
 * 00000001406ACD26: add     rsp, 8
 * 00000001406ACD2A: call    loc_1406ACD1D
 * 00000001406ACD2F: add     rsp, 8
 * 00000001406ACD33: call    loc_1406ACD26
 * 00000001406ACD38: add     rsp, 8
 * 00000001406ACD3C: call    loc_1406ACD2F
 * 00000001406ACD41: add     rsp, 8
 * 00000001406ACD45: call    loc_1406ACD38
 * 00000001406ACD4A: add     rsp, 8
 * 00000001406ACD4E: call    loc_1406ACD41
 * 00000001406ACD53: add     rsp, 8
 * 00000001406ACD57: call    loc_1406ACD4A
 * 00000001406ACD5C: add     rsp, 8
 * 00000001406ACD60: call    loc_1406ACD53
 * 00000001406ACD65: add     rsp, 8
 * 00000001406ACD69: call    loc_1406ACD5C
 * 00000001406ACD6E: add     rsp, 8
 * 00000001406ACD72: call    loc_1406ACD65
 * 00000001406ACD77: add     rsp, 8
 * 00000001406ACD7B: call    loc_1406ACD6E
 * 00000001406ACD80: add     rsp, 8
 * 00000001406ACD84: call    loc_1406ACD77
 * 00000001406ACD89: add     rsp, 8
 * 00000001406ACD8D: call    loc_1406ACD80
 * 00000001406ACD92: add     rsp, 8
 * 00000001406ACD96: call    loc_1406ACD89
 * 00000001406ACD9B: add     rsp, 8
 * 00000001406ACD9F: call    loc_1406ACD92
 * 00000001406ACDA4: add     rsp, 8
 * 00000001406ACDA8: call    loc_1406ACD9B
 * 00000001406ACDAD: add     rsp, 8
 * 00000001406ACDB1: call    loc_1406ACDA4
 * 00000001406ACDB6: add     rsp, 8
 * 00000001406ACDBA: call    loc_1406ACDAD
 * 00000001406ACDBF: add     rsp, 8
 * 00000001406ACDC3: call    loc_1406ACDB6
 * 00000001406ACDC8: add     rsp, 8
 * 00000001406ACDCC: call    loc_1406ACDBF
 * 00000001406ACDD1: add     rsp, 8
 * 00000001406ACDD5: call    loc_1406ACDC8
 * 00000001406ACDDA: add     rsp, 8
 * 00000001406ACDDE: call    loc_1406ACDD1
 * 00000001406ACDE3: add     rsp, 8
 * 00000001406ACDE7: call    loc_1406ACDDA
 * 00000001406ACDEC: add     rsp, 8
 * 00000001406ACDF0: call    loc_1406ACDE3
 * 00000001406ACDF5: add     rsp, 8
 * 00000001406ACDF9: mov     eax, 0DADAh
 * 00000001406ACDFE: test    byte ptr gs:85Ch, 8
 * 00000001406ACE07: jz      short loc_1406ACE10
 * 00000001406ACE09: mov     al, 20h ; ' '
 * 00000001406ACE0B: incsspq rax
 * 00000001406ACE10: test    word ptr gs:858h, 100h
 * 00000001406ACE1B: jz      short loc_1406ACE29
 * 00000001406ACE1D: xor     eax, eax
 * 00000001406ACE1F: xor     edx, edx
 * 00000001406ACE21: mov     ecx, 1
 * 00000001406ACE26: div     rcx
 * 00000001406ACE29: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406ACE2D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406ACE31: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406ACE35: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406ACE39: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406ACE3D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406ACE41: mov     r11, [rbp+0E8h+var_108]
 * 00000001406ACE45: mov     r10, [rbp+0E8h+var_110]
 * 00000001406ACE49: mov     r9, [rbp+0E8h+var_118]
 * 00000001406ACE4D: mov     r8, [rbp+0E8h+var_120]
 * 00000001406ACE51: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406ACE55: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406ACE59: mov     rax, [rbp+0E8h+var_138]
 * 00000001406ACE5D: mov     rsp, rbp
 * 00000001406ACE60: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406ACE67: add     rsp, 0E8h
 * 00000001406ACE6E: test    cs:KiKvaShadow, 1
 * 00000001406ACE75: jz      short loc_1406ACE7C
 * 00000001406ACE77: jmp     KiKernelExit
 * 00000001406ACE7C: test    word ptr gs:858h, 200h
 * 00000001406ACE87: jz      short loc_1406ACE8E
 * 00000001406ACE89: verw    [rsp+arg_18]
 * 00000001406ACE8E: swapgs
 * 00000001406ACE91: iretq
 * 00000001406ACE93: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406ACE97: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406ACE9B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406ACE9F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406ACEA3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406ACEA7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406ACEAB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406ACEAF: mov     r11, [rbp+0E8h+var_108]
 * 00000001406ACEB3: mov     r10, [rbp+0E8h+var_110]
 * 00000001406ACEB7: mov     r9, [rbp+0E8h+var_118]
 * 00000001406ACEBB: mov     r8, [rbp+0E8h+var_120]
 * 00000001406ACEBF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406ACEC3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406ACEC7: mov     rax, [rbp+0E8h+var_138]
 * 00000001406ACECB: mov     rsp, rbp
 * 00000001406ACECE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406ACED5: add     rsp, 0E8h
 * 00000001406ACEDC: iretq
 */
