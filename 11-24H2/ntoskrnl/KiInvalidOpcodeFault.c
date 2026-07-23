/*
 * XREFs of KiInvalidOpcodeFault @ 0x1406B8A40
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140BBD440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x1406B8A40 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x1406B8A40
 * Reason: Hex-Rays returned no pseudocode for 0x1406B8A40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B8A40: sub     rsp, 8
 * 00000001406B8A44: push    rbp
 * 00000001406B8A45: sub     rsp, 158h
 * 00000001406B8A4C: lea     rbp, [rsp+80h]
 * 00000001406B8A54: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B8A58: mov     [rbp+0E8h+var_138], rax
 * 00000001406B8A5C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B8A60: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B8A64: mov     [rbp+0E8h+var_120], r8
 * 00000001406B8A68: mov     [rbp+0E8h+var_118], r9
 * 00000001406B8A6C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B8A70: mov     [rbp+0E8h+var_108], r11
 * 00000001406B8A74: test    [rbp+0E8h+arg_0], 1
 * 00000001406B8A7B: jnz     short loc_1406B8AB5
 * 00000001406B8A7D: xor     edx, edx
 * 00000001406B8A7F: rdsspq  rdx
 * 00000001406B8A84: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B8A88: lfence
 * 00000001406B8A8B: test    byte ptr gs:858h, 1
 * 00000001406B8A94: jnz     short loc_1406B8A9E
 * 00000001406B8A96: lfence
 * 00000001406B8A99: jmp     loc_1406B8D26
 * 00000001406B8A9E: movzx   eax, word ptr gs:866h
 * 00000001406B8AA7: mov     ecx, 48h ; 'H'
 * 00000001406B8AAC: xor     edx, edx
 * 00000001406B8AAE: wrmsr
 * 00000001406B8AB0: jmp     loc_1406B8D26
 * 00000001406B8AB5: test    cs:KiKvaShadow, 1
 * 00000001406B8ABC: jnz     short loc_1406B8AC1
 * 00000001406B8ABE: swapgs
 * 00000001406B8AC1: lfence
 * 00000001406B8AC4: mov     rcx, gs:9D28h
 * 00000001406B8ACD: test    rcx, rcx
 * 00000001406B8AD0: jz      short loc_1406B8AF1
 * 00000001406B8AD2: rdsspq  rdx
 * 00000001406B8AD7: mov     r10, gs:9D20h
 * 00000001406B8AE0: add     r10, 8
 * 00000001406B8AE4: cmp     rdx, r10
 * 00000001406B8AE7: jnz     short loc_1406B8AF1
 * 00000001406B8AE9: rstorssp qword ptr [rcx]
 * 00000001406B8AED: saveprevssp
 * 00000001406B8AF1: mov     r10, gs:188h
 * 00000001406B8AFA: mov     rcx, gs:188h
 * 00000001406B8B03: mov     rcx, [rcx+220h]
 * 00000001406B8B0A: mov     rcx, [rcx+760h]
 * 00000001406B8B11: mov     gs:850h, rcx
 * 00000001406B8B1A: mov     cx, gs:862h
 * 00000001406B8B23: mov     gs:864h, cx
 * 00000001406B8B2C: mov     cl, gs:858h
 * 00000001406B8B34: mov     gs:85Ah, cl
 * 00000001406B8B3C: movzx   eax, word ptr gs:868h
 * 00000001406B8B45: cmp     gs:866h, ax
 * 00000001406B8B4E: jz      short loc_1406B8B62
 * 00000001406B8B50: mov     gs:866h, ax
 * 00000001406B8B59: mov     ecx, 48h ; 'H'
 * 00000001406B8B5E: xor     edx, edx
 * 00000001406B8B60: wrmsr
 * 00000001406B8B62: movzx   edx, byte ptr gs:858h
 * 00000001406B8B6B: test    edx, 8
 * 00000001406B8B71: jz      short loc_1406B8B8A
 * 00000001406B8B73: mov     eax, 1
 * 00000001406B8B78: xor     edx, edx
 * 00000001406B8B7A: mov     ecx, 49h ; 'I'
 * 00000001406B8B7F: wrmsr
 * 00000001406B8B81: movzx   edx, byte ptr gs:858h
 * 00000001406B8B8A: test    edx, 2
 * 00000001406B8B90: jz      loc_1406B8CCD
 * 00000001406B8B96: call    loc_1406B8CA9
 * 00000001406B8B9B: add     rsp, 8
 * 00000001406B8B9F: call    loc_1406B8CB2
 * 00000001406B8BA4: add     rsp, 8
 * 00000001406B8BA8: call    loc_1406B8B9B
 * 00000001406B8BAD: add     rsp, 8
 * 00000001406B8BB1: call    loc_1406B8BA4
 * 00000001406B8BB6: add     rsp, 8
 * 00000001406B8BBA: call    loc_1406B8BAD
 * 00000001406B8BBF: add     rsp, 8
 * 00000001406B8BC3: call    loc_1406B8BB6
 * 00000001406B8BC8: add     rsp, 8
 * 00000001406B8BCC: call    loc_1406B8BBF
 * 00000001406B8BD1: add     rsp, 8
 * 00000001406B8BD5: call    loc_1406B8BC8
 * 00000001406B8BDA: add     rsp, 8
 * 00000001406B8BDE: call    loc_1406B8BD1
 * 00000001406B8BE3: add     rsp, 8
 * 00000001406B8BE7: call    loc_1406B8BDA
 * 00000001406B8BEC: add     rsp, 8
 * 00000001406B8BF0: call    loc_1406B8BE3
 * 00000001406B8BF5: add     rsp, 8
 * 00000001406B8BF9: call    loc_1406B8BEC
 * 00000001406B8BFE: add     rsp, 8
 * 00000001406B8C02: call    loc_1406B8BF5
 * 00000001406B8C07: add     rsp, 8
 * 00000001406B8C0B: call    loc_1406B8BFE
 * 00000001406B8C10: add     rsp, 8
 * 00000001406B8C14: call    loc_1406B8C07
 * 00000001406B8C19: add     rsp, 8
 * 00000001406B8C1D: call    loc_1406B8C10
 * 00000001406B8C22: add     rsp, 8
 * 00000001406B8C26: call    loc_1406B8C19
 * 00000001406B8C2B: add     rsp, 8
 * 00000001406B8C2F: call    loc_1406B8C22
 * 00000001406B8C34: add     rsp, 8
 * 00000001406B8C38: call    loc_1406B8C2B
 * 00000001406B8C3D: add     rsp, 8
 * 00000001406B8C41: call    loc_1406B8C34
 * 00000001406B8C46: add     rsp, 8
 * 00000001406B8C4A: call    loc_1406B8C3D
 * 00000001406B8C4F: add     rsp, 8
 * 00000001406B8C53: call    loc_1406B8C46
 * 00000001406B8C58: add     rsp, 8
 * 00000001406B8C5C: call    loc_1406B8C4F
 * 00000001406B8C61: add     rsp, 8
 * 00000001406B8C65: call    loc_1406B8C58
 * 00000001406B8C6A: add     rsp, 8
 * 00000001406B8C6E: call    loc_1406B8C61
 * 00000001406B8C73: add     rsp, 8
 * 00000001406B8C77: call    loc_1406B8C6A
 * 00000001406B8C7C: add     rsp, 8
 * 00000001406B8C80: call    loc_1406B8C73
 * 00000001406B8C85: add     rsp, 8
 * 00000001406B8C89: call    loc_1406B8C7C
 * 00000001406B8C8E: add     rsp, 8
 * 00000001406B8C92: call    loc_1406B8C85
 * 00000001406B8C97: add     rsp, 8
 * 00000001406B8C9B: call    loc_1406B8C8E
 * 00000001406B8CA0: add     rsp, 8
 * 00000001406B8CA4: call    loc_1406B8C97
 * 00000001406B8CA9: add     rsp, 8
 * 00000001406B8CAD: call    loc_1406B8CA0
 * 00000001406B8CB2: add     rsp, 8
 * 00000001406B8CB6: mov     eax, 0DADAh
 * 00000001406B8CBB: test    byte ptr gs:85Ch, 8
 * 00000001406B8CC4: jz      short loc_1406B8CCD
 * 00000001406B8CC6: mov     al, 20h ; ' '
 * 00000001406B8CC8: incsspq rax
 * 00000001406B8CCD: test    edx, 80h
 * 00000001406B8CD3: jz      short loc_1406B8CDD
 * 00000001406B8CD5: lfence
 * 00000001406B8CD8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B8CDD: lfence
 * 00000001406B8CE0: mov     byte ptr gs:85Eh, 0
 * 00000001406B8CE9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B8CF0: jz      short loc_1406B8D11
 * 00000001406B8CF2: mov     ecx, 6A7h
 * 00000001406B8CF7: rdmsr
 * 00000001406B8CF9: cmp     edx, 0
 * 00000001406B8CFC: jz      short loc_1406B8D11
 * 00000001406B8CFE: mov     ecx, edx
 * 00000001406B8D00: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B8D06: cmp     edx, ecx
 * 00000001406B8D08: jz      short loc_1406B8D11
 * 00000001406B8D0A: mov     ecx, 6A7h
 * 00000001406B8D0F: wrmsr
 * 00000001406B8D11: test    byte ptr [r10+3], 3
 * 00000001406B8D16: mov     [rbp+0E8h+var_68], 0
 * 00000001406B8D1F: jz      short loc_1406B8D26
 * 00000001406B8D21: call    KiSaveDebugRegisterState
 * 00000001406B8D26: cld
 * 00000001406B8D27: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B8D2B: ldmxcsr dword ptr gs:180h
 * 00000001406B8D34: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B8D38: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B8D3C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B8D40: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B8D44: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B8D48: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B8D4C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B8D53: jz      short loc_1406B8D5A
 * 00000001406B8D55: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B8D5A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B8D61: jz      short loc_1406B8D6F
 * 00000001406B8D63: test    [rbp+0E8h+arg_0], 1
 * 00000001406B8D6A: jz      short loc_1406B8D6F
 * 00000001406B8D6C: stac
 * 00000001406B8D6F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B8D79: jz      short loc_1406B8D7C
 * 00000001406B8D7B: sti
 * 00000001406B8D7C: mov     ecx, 10000002h
 * 00000001406B8D81: xor     edx, edx
 * 00000001406B8D83: mov     r8, [rbp+0E8h]
 * 00000001406B8D8A: call    KiExceptionDispatch
 * 00000001406B8D8F: nop
 * 00000001406B8D90: cli
 * 00000001406B8D91: test    [rbp+0E8h+arg_0], 1
 * 00000001406B8D98: jz      loc_1406B9093
 * 00000001406B8D9E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B8DA5: jz      short loc_1406B8DAA
 * 00000001406B8DA7: stac
 * 00000001406B8DAA: mov     rcx, gs:188h
 * 00000001406B8DB3: test    byte ptr [rcx+0C2h], 3
 * 00000001406B8DBA: jz      short loc_1406B8DD7
 * 00000001406B8DBC: mov     ecx, 1
 * 00000001406B8DC1: mov     cr8, rcx
 * 00000001406B8DC5: sti
 * 00000001406B8DC6: call    KiInitiateUserApc
 * 00000001406B8DCB: cli
 * 00000001406B8DCC: mov     ecx, 0
 * 00000001406B8DD1: mov     cr8, rcx
 * 00000001406B8DD5: jmp     short loc_1406B8DAA
 * 00000001406B8DD7: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B8DDC: test    eax, eax
 * 00000001406B8DDE: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B8DE2: jnz     short loc_1406B8DAA
 * 00000001406B8DE4: test    byte ptr gs:860h, 2
 * 00000001406B8DED: jz      short loc_1406B8DF6
 * 00000001406B8DEF: xor     ecx, ecx
 * 00000001406B8DF1: call    KiUpdateStibpPairing
 * 00000001406B8DF6: mov     rcx, gs:188h
 * 00000001406B8DFF: test    dword ptr [rcx], 8000000h
 * 00000001406B8E05: jz      short loc_1406B8E0C
 * 00000001406B8E07: call    KiRestoreSetContextState
 * 00000001406B8E0C: mov     rcx, gs:188h
 * 00000001406B8E15: test    dword ptr [rcx], 10000h
 * 00000001406B8E1B: jz      short loc_1406B8E31
 * 00000001406B8E1D: test    byte ptr [rcx+2], 1
 * 00000001406B8E21: jz      short loc_1406B8E31
 * 00000001406B8E23: call    KiCopyCounters
 * 00000001406B8E28: mov     rcx, gs:188h
 * 00000001406B8E31: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B8E35: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B8E3D: jz      short loc_1406B8E44
 * 00000001406B8E3F: call    KiRestoreDebugRegisterState
 * 00000001406B8E44: mov     rcx, gs:188h
 * 00000001406B8E4D: bt      dword ptr [rcx+74h], 16h
 * 00000001406B8E52: jnb     short loc_1406B8E7E
 * 00000001406B8E54: xor     ecx, ecx
 * 00000001406B8E56: rdsspq  rcx
 * 00000001406B8E5B: mov     r8, gs:9D28h
 * 00000001406B8E64: add     r8, 8
 * 00000001406B8E68: cmp     rcx, r8
 * 00000001406B8E6B: jnz     short loc_1406B8E7E
 * 00000001406B8E6D: mov     rcx, gs:9D20h
 * 00000001406B8E76: rstorssp qword ptr [rcx]
 * 00000001406B8E7A: saveprevssp
 * 00000001406B8E7E: mov     byte ptr gs:85Eh, 0
 * 00000001406B8E87: movzx   eax, word ptr gs:86Ch
 * 00000001406B8E90: cmp     gs:866h, ax
 * 00000001406B8E99: jz      short loc_1406B8EAD
 * 00000001406B8E9B: mov     gs:866h, ax
 * 00000001406B8EA4: mov     ecx, 48h ; 'H'
 * 00000001406B8EA9: xor     edx, edx
 * 00000001406B8EAB: wrmsr
 * 00000001406B8EAD: btr     word ptr gs:858h, 2
 * 00000001406B8EB8: jnb     short loc_1406B8EC8
 * 00000001406B8EBA: mov     eax, 1
 * 00000001406B8EBF: xor     edx, edx
 * 00000001406B8EC1: mov     ecx, 49h ; 'I'
 * 00000001406B8EC6: wrmsr
 * 00000001406B8EC8: btr     word ptr gs:858h, 5
 * 00000001406B8ED3: jnb     loc_1406B9010
 * 00000001406B8ED9: call    loc_1406B8FEC
 * 00000001406B8EDE: add     rsp, 8
 * 00000001406B8EE2: call    loc_1406B8FF5
 * 00000001406B8EE7: add     rsp, 8
 * 00000001406B8EEB: call    loc_1406B8EDE
 * 00000001406B8EF0: add     rsp, 8
 * 00000001406B8EF4: call    loc_1406B8EE7
 * 00000001406B8EF9: add     rsp, 8
 * 00000001406B8EFD: call    loc_1406B8EF0
 * 00000001406B8F02: add     rsp, 8
 * 00000001406B8F06: call    loc_1406B8EF9
 * 00000001406B8F0B: add     rsp, 8
 * 00000001406B8F0F: call    loc_1406B8F02
 * 00000001406B8F14: add     rsp, 8
 * 00000001406B8F18: call    loc_1406B8F0B
 * 00000001406B8F1D: add     rsp, 8
 * 00000001406B8F21: call    loc_1406B8F14
 * 00000001406B8F26: add     rsp, 8
 * 00000001406B8F2A: call    loc_1406B8F1D
 * 00000001406B8F2F: add     rsp, 8
 * 00000001406B8F33: call    loc_1406B8F26
 * 00000001406B8F38: add     rsp, 8
 * 00000001406B8F3C: call    loc_1406B8F2F
 * 00000001406B8F41: add     rsp, 8
 * 00000001406B8F45: call    loc_1406B8F38
 * 00000001406B8F4A: add     rsp, 8
 * 00000001406B8F4E: call    loc_1406B8F41
 * 00000001406B8F53: add     rsp, 8
 * 00000001406B8F57: call    loc_1406B8F4A
 * 00000001406B8F5C: add     rsp, 8
 * 00000001406B8F60: call    loc_1406B8F53
 * 00000001406B8F65: add     rsp, 8
 * 00000001406B8F69: call    loc_1406B8F5C
 * 00000001406B8F6E: add     rsp, 8
 * 00000001406B8F72: call    loc_1406B8F65
 * 00000001406B8F77: add     rsp, 8
 * 00000001406B8F7B: call    loc_1406B8F6E
 * 00000001406B8F80: add     rsp, 8
 * 00000001406B8F84: call    loc_1406B8F77
 * 00000001406B8F89: add     rsp, 8
 * 00000001406B8F8D: call    loc_1406B8F80
 * 00000001406B8F92: add     rsp, 8
 * 00000001406B8F96: call    loc_1406B8F89
 * 00000001406B8F9B: add     rsp, 8
 * 00000001406B8F9F: call    loc_1406B8F92
 * 00000001406B8FA4: add     rsp, 8
 * 00000001406B8FA8: call    loc_1406B8F9B
 * 00000001406B8FAD: add     rsp, 8
 * 00000001406B8FB1: call    loc_1406B8FA4
 * 00000001406B8FB6: add     rsp, 8
 * 00000001406B8FBA: call    loc_1406B8FAD
 * 00000001406B8FBF: add     rsp, 8
 * 00000001406B8FC3: call    loc_1406B8FB6
 * 00000001406B8FC8: add     rsp, 8
 * 00000001406B8FCC: call    loc_1406B8FBF
 * 00000001406B8FD1: add     rsp, 8
 * 00000001406B8FD5: call    loc_1406B8FC8
 * 00000001406B8FDA: add     rsp, 8
 * 00000001406B8FDE: call    loc_1406B8FD1
 * 00000001406B8FE3: add     rsp, 8
 * 00000001406B8FE7: call    loc_1406B8FDA
 * 00000001406B8FEC: add     rsp, 8
 * 00000001406B8FF0: call    loc_1406B8FE3
 * 00000001406B8FF5: add     rsp, 8
 * 00000001406B8FF9: mov     eax, 0DADAh
 * 00000001406B8FFE: test    byte ptr gs:85Ch, 8
 * 00000001406B9007: jz      short loc_1406B9010
 * 00000001406B9009: mov     al, 20h ; ' '
 * 00000001406B900B: incsspq rax
 * 00000001406B9010: test    word ptr gs:858h, 100h
 * 00000001406B901B: jz      short loc_1406B9029
 * 00000001406B901D: xor     eax, eax
 * 00000001406B901F: xor     edx, edx
 * 00000001406B9021: mov     ecx, 1
 * 00000001406B9026: div     rcx
 * 00000001406B9029: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B902D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B9031: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B9035: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B9039: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B903D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B9041: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B9045: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B9049: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B904D: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B9051: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B9055: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B9059: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B905D: mov     rsp, rbp
 * 00000001406B9060: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B9067: add     rsp, 0E8h
 * 00000001406B906E: test    cs:KiKvaShadow, 1
 * 00000001406B9075: jz      short loc_1406B907C
 * 00000001406B9077: jmp     KiKernelExit
 * 00000001406B907C: test    word ptr gs:858h, 200h
 * 00000001406B9087: jz      short loc_1406B908E
 * 00000001406B9089: verw    [rsp+arg_18]
 * 00000001406B908E: swapgs
 * 00000001406B9091: iretq
 * 00000001406B9093: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B9097: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B909B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B909F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B90A3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B90A7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B90AB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B90AF: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B90B3: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B90B7: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B90BB: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B90BF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B90C3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B90C7: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B90CB: mov     rsp, rbp
 * 00000001406B90CE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B90D5: add     rsp, 0E8h
 * 00000001406B90DC: iretq
 */
