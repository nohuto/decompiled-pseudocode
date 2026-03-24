/*
 * XREFs of KiInvalidOpcodeFault @ 0x1406B7B40
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140BBB440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x1406B7B40 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x1406B7B40
 * Reason: Hex-Rays returned no pseudocode for 0x1406B7B40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B7B40: sub     rsp, 8
 * 00000001406B7B44: push    rbp
 * 00000001406B7B45: sub     rsp, 158h
 * 00000001406B7B4C: lea     rbp, [rsp+80h]
 * 00000001406B7B54: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B7B58: mov     [rbp+0E8h+var_138], rax
 * 00000001406B7B5C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B7B60: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B7B64: mov     [rbp+0E8h+var_120], r8
 * 00000001406B7B68: mov     [rbp+0E8h+var_118], r9
 * 00000001406B7B6C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B7B70: mov     [rbp+0E8h+var_108], r11
 * 00000001406B7B74: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7B7B: jnz     short loc_1406B7BB5
 * 00000001406B7B7D: xor     edx, edx
 * 00000001406B7B7F: rdsspq  rdx
 * 00000001406B7B84: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B7B88: lfence
 * 00000001406B7B8B: test    byte ptr gs:858h, 1
 * 00000001406B7B94: jnz     short loc_1406B7B9E
 * 00000001406B7B96: lfence
 * 00000001406B7B99: jmp     loc_1406B7E26
 * 00000001406B7B9E: movzx   eax, word ptr gs:866h
 * 00000001406B7BA7: mov     ecx, 48h ; 'H'
 * 00000001406B7BAC: xor     edx, edx
 * 00000001406B7BAE: wrmsr
 * 00000001406B7BB0: jmp     loc_1406B7E26
 * 00000001406B7BB5: test    cs:KiKvaShadow, 1
 * 00000001406B7BBC: jnz     short loc_1406B7BC1
 * 00000001406B7BBE: swapgs
 * 00000001406B7BC1: lfence
 * 00000001406B7BC4: mov     rcx, gs:9D28h
 * 00000001406B7BCD: test    rcx, rcx
 * 00000001406B7BD0: jz      short loc_1406B7BF1
 * 00000001406B7BD2: rdsspq  rdx
 * 00000001406B7BD7: mov     r10, gs:9D20h
 * 00000001406B7BE0: add     r10, 8
 * 00000001406B7BE4: cmp     rdx, r10
 * 00000001406B7BE7: jnz     short loc_1406B7BF1
 * 00000001406B7BE9: rstorssp qword ptr [rcx]
 * 00000001406B7BED: saveprevssp
 * 00000001406B7BF1: mov     r10, gs:188h
 * 00000001406B7BFA: mov     rcx, gs:188h
 * 00000001406B7C03: mov     rcx, [rcx+220h]
 * 00000001406B7C0A: mov     rcx, [rcx+760h]
 * 00000001406B7C11: mov     gs:850h, rcx
 * 00000001406B7C1A: mov     cx, gs:862h
 * 00000001406B7C23: mov     gs:864h, cx
 * 00000001406B7C2C: mov     cl, gs:858h
 * 00000001406B7C34: mov     gs:85Ah, cl
 * 00000001406B7C3C: movzx   eax, word ptr gs:868h
 * 00000001406B7C45: cmp     gs:866h, ax
 * 00000001406B7C4E: jz      short loc_1406B7C62
 * 00000001406B7C50: mov     gs:866h, ax
 * 00000001406B7C59: mov     ecx, 48h ; 'H'
 * 00000001406B7C5E: xor     edx, edx
 * 00000001406B7C60: wrmsr
 * 00000001406B7C62: movzx   edx, byte ptr gs:858h
 * 00000001406B7C6B: test    edx, 8
 * 00000001406B7C71: jz      short loc_1406B7C8A
 * 00000001406B7C73: mov     eax, 1
 * 00000001406B7C78: xor     edx, edx
 * 00000001406B7C7A: mov     ecx, 49h ; 'I'
 * 00000001406B7C7F: wrmsr
 * 00000001406B7C81: movzx   edx, byte ptr gs:858h
 * 00000001406B7C8A: test    edx, 2
 * 00000001406B7C90: jz      loc_1406B7DCD
 * 00000001406B7C96: call    loc_1406B7DA9
 * 00000001406B7C9B: add     rsp, 8
 * 00000001406B7C9F: call    loc_1406B7DB2
 * 00000001406B7CA4: add     rsp, 8
 * 00000001406B7CA8: call    loc_1406B7C9B
 * 00000001406B7CAD: add     rsp, 8
 * 00000001406B7CB1: call    loc_1406B7CA4
 * 00000001406B7CB6: add     rsp, 8
 * 00000001406B7CBA: call    loc_1406B7CAD
 * 00000001406B7CBF: add     rsp, 8
 * 00000001406B7CC3: call    loc_1406B7CB6
 * 00000001406B7CC8: add     rsp, 8
 * 00000001406B7CCC: call    loc_1406B7CBF
 * 00000001406B7CD1: add     rsp, 8
 * 00000001406B7CD5: call    loc_1406B7CC8
 * 00000001406B7CDA: add     rsp, 8
 * 00000001406B7CDE: call    loc_1406B7CD1
 * 00000001406B7CE3: add     rsp, 8
 * 00000001406B7CE7: call    loc_1406B7CDA
 * 00000001406B7CEC: add     rsp, 8
 * 00000001406B7CF0: call    loc_1406B7CE3
 * 00000001406B7CF5: add     rsp, 8
 * 00000001406B7CF9: call    loc_1406B7CEC
 * 00000001406B7CFE: add     rsp, 8
 * 00000001406B7D02: call    loc_1406B7CF5
 * 00000001406B7D07: add     rsp, 8
 * 00000001406B7D0B: call    loc_1406B7CFE
 * 00000001406B7D10: add     rsp, 8
 * 00000001406B7D14: call    loc_1406B7D07
 * 00000001406B7D19: add     rsp, 8
 * 00000001406B7D1D: call    loc_1406B7D10
 * 00000001406B7D22: add     rsp, 8
 * 00000001406B7D26: call    loc_1406B7D19
 * 00000001406B7D2B: add     rsp, 8
 * 00000001406B7D2F: call    loc_1406B7D22
 * 00000001406B7D34: add     rsp, 8
 * 00000001406B7D38: call    loc_1406B7D2B
 * 00000001406B7D3D: add     rsp, 8
 * 00000001406B7D41: call    loc_1406B7D34
 * 00000001406B7D46: add     rsp, 8
 * 00000001406B7D4A: call    loc_1406B7D3D
 * 00000001406B7D4F: add     rsp, 8
 * 00000001406B7D53: call    loc_1406B7D46
 * 00000001406B7D58: add     rsp, 8
 * 00000001406B7D5C: call    loc_1406B7D4F
 * 00000001406B7D61: add     rsp, 8
 * 00000001406B7D65: call    loc_1406B7D58
 * 00000001406B7D6A: add     rsp, 8
 * 00000001406B7D6E: call    loc_1406B7D61
 * 00000001406B7D73: add     rsp, 8
 * 00000001406B7D77: call    loc_1406B7D6A
 * 00000001406B7D7C: add     rsp, 8
 * 00000001406B7D80: call    loc_1406B7D73
 * 00000001406B7D85: add     rsp, 8
 * 00000001406B7D89: call    loc_1406B7D7C
 * 00000001406B7D8E: add     rsp, 8
 * 00000001406B7D92: call    loc_1406B7D85
 * 00000001406B7D97: add     rsp, 8
 * 00000001406B7D9B: call    loc_1406B7D8E
 * 00000001406B7DA0: add     rsp, 8
 * 00000001406B7DA4: call    loc_1406B7D97
 * 00000001406B7DA9: add     rsp, 8
 * 00000001406B7DAD: call    loc_1406B7DA0
 * 00000001406B7DB2: add     rsp, 8
 * 00000001406B7DB6: mov     eax, 0DADAh
 * 00000001406B7DBB: test    byte ptr gs:85Ch, 8
 * 00000001406B7DC4: jz      short loc_1406B7DCD
 * 00000001406B7DC6: mov     al, 20h ; ' '
 * 00000001406B7DC8: incsspq rax
 * 00000001406B7DCD: test    edx, 80h
 * 00000001406B7DD3: jz      short loc_1406B7DDD
 * 00000001406B7DD5: lfence
 * 00000001406B7DD8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B7DDD: lfence
 * 00000001406B7DE0: mov     byte ptr gs:85Eh, 0
 * 00000001406B7DE9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B7DF0: jz      short loc_1406B7E11
 * 00000001406B7DF2: mov     ecx, 6A7h
 * 00000001406B7DF7: rdmsr
 * 00000001406B7DF9: cmp     edx, 0
 * 00000001406B7DFC: jz      short loc_1406B7E11
 * 00000001406B7DFE: mov     ecx, edx
 * 00000001406B7E00: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B7E06: cmp     edx, ecx
 * 00000001406B7E08: jz      short loc_1406B7E11
 * 00000001406B7E0A: mov     ecx, 6A7h
 * 00000001406B7E0F: wrmsr
 * 00000001406B7E11: test    byte ptr [r10+3], 3
 * 00000001406B7E16: mov     [rbp+0E8h+var_68], 0
 * 00000001406B7E1F: jz      short loc_1406B7E26
 * 00000001406B7E21: call    KiSaveDebugRegisterState
 * 00000001406B7E26: cld
 * 00000001406B7E27: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B7E2B: ldmxcsr dword ptr gs:180h
 * 00000001406B7E34: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B7E38: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B7E3C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B7E40: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B7E44: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B7E48: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B7E4C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7E53: jz      short loc_1406B7E5A
 * 00000001406B7E55: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B7E5A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B7E61: jz      short loc_1406B7E6F
 * 00000001406B7E63: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7E6A: jz      short loc_1406B7E6F
 * 00000001406B7E6C: stac
 * 00000001406B7E6F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B7E79: jz      short loc_1406B7E7C
 * 00000001406B7E7B: sti
 * 00000001406B7E7C: mov     ecx, 10000002h
 * 00000001406B7E81: xor     edx, edx
 * 00000001406B7E83: mov     r8, [rbp+0E8h]
 * 00000001406B7E8A: call    KiExceptionDispatch
 * 00000001406B7E8F: nop
 * 00000001406B7E90: cli
 * 00000001406B7E91: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7E98: jz      loc_1406B8193
 * 00000001406B7E9E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B7EA5: jz      short loc_1406B7EAA
 * 00000001406B7EA7: stac
 * 00000001406B7EAA: mov     rcx, gs:188h
 * 00000001406B7EB3: test    byte ptr [rcx+0C2h], 3
 * 00000001406B7EBA: jz      short loc_1406B7ED7
 * 00000001406B7EBC: mov     ecx, 1
 * 00000001406B7EC1: mov     cr8, rcx
 * 00000001406B7EC5: sti
 * 00000001406B7EC6: call    KiInitiateUserApc
 * 00000001406B7ECB: cli
 * 00000001406B7ECC: mov     ecx, 0
 * 00000001406B7ED1: mov     cr8, rcx
 * 00000001406B7ED5: jmp     short loc_1406B7EAA
 * 00000001406B7ED7: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B7EDC: test    eax, eax
 * 00000001406B7EDE: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B7EE2: jnz     short loc_1406B7EAA
 * 00000001406B7EE4: test    byte ptr gs:860h, 2
 * 00000001406B7EED: jz      short loc_1406B7EF6
 * 00000001406B7EEF: xor     ecx, ecx
 * 00000001406B7EF1: call    KiUpdateStibpPairing
 * 00000001406B7EF6: mov     rcx, gs:188h
 * 00000001406B7EFF: test    dword ptr [rcx], 8000000h
 * 00000001406B7F05: jz      short loc_1406B7F0C
 * 00000001406B7F07: call    KiRestoreSetContextState
 * 00000001406B7F0C: mov     rcx, gs:188h
 * 00000001406B7F15: test    dword ptr [rcx], 10000h
 * 00000001406B7F1B: jz      short loc_1406B7F31
 * 00000001406B7F1D: test    byte ptr [rcx+2], 1
 * 00000001406B7F21: jz      short loc_1406B7F31
 * 00000001406B7F23: call    KiCopyCounters
 * 00000001406B7F28: mov     rcx, gs:188h
 * 00000001406B7F31: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B7F35: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B7F3D: jz      short loc_1406B7F44
 * 00000001406B7F3F: call    KiRestoreDebugRegisterState
 * 00000001406B7F44: mov     rcx, gs:188h
 * 00000001406B7F4D: bt      dword ptr [rcx+74h], 16h
 * 00000001406B7F52: jnb     short loc_1406B7F7E
 * 00000001406B7F54: xor     ecx, ecx
 * 00000001406B7F56: rdsspq  rcx
 * 00000001406B7F5B: mov     r8, gs:9D28h
 * 00000001406B7F64: add     r8, 8
 * 00000001406B7F68: cmp     rcx, r8
 * 00000001406B7F6B: jnz     short loc_1406B7F7E
 * 00000001406B7F6D: mov     rcx, gs:9D20h
 * 00000001406B7F76: rstorssp qword ptr [rcx]
 * 00000001406B7F7A: saveprevssp
 * 00000001406B7F7E: mov     byte ptr gs:85Eh, 0
 * 00000001406B7F87: movzx   eax, word ptr gs:86Ch
 * 00000001406B7F90: cmp     gs:866h, ax
 * 00000001406B7F99: jz      short loc_1406B7FAD
 * 00000001406B7F9B: mov     gs:866h, ax
 * 00000001406B7FA4: mov     ecx, 48h ; 'H'
 * 00000001406B7FA9: xor     edx, edx
 * 00000001406B7FAB: wrmsr
 * 00000001406B7FAD: btr     word ptr gs:858h, 2
 * 00000001406B7FB8: jnb     short loc_1406B7FC8
 * 00000001406B7FBA: mov     eax, 1
 * 00000001406B7FBF: xor     edx, edx
 * 00000001406B7FC1: mov     ecx, 49h ; 'I'
 * 00000001406B7FC6: wrmsr
 * 00000001406B7FC8: btr     word ptr gs:858h, 5
 * 00000001406B7FD3: jnb     loc_1406B8110
 * 00000001406B7FD9: call    loc_1406B80EC
 * 00000001406B7FDE: add     rsp, 8
 * 00000001406B7FE2: call    loc_1406B80F5
 * 00000001406B7FE7: add     rsp, 8
 * 00000001406B7FEB: call    loc_1406B7FDE
 * 00000001406B7FF0: add     rsp, 8
 * 00000001406B7FF4: call    loc_1406B7FE7
 * 00000001406B7FF9: add     rsp, 8
 * 00000001406B7FFD: call    loc_1406B7FF0
 * 00000001406B8002: add     rsp, 8
 * 00000001406B8006: call    loc_1406B7FF9
 * 00000001406B800B: add     rsp, 8
 * 00000001406B800F: call    loc_1406B8002
 * 00000001406B8014: add     rsp, 8
 * 00000001406B8018: call    loc_1406B800B
 * 00000001406B801D: add     rsp, 8
 * 00000001406B8021: call    loc_1406B8014
 * 00000001406B8026: add     rsp, 8
 * 00000001406B802A: call    loc_1406B801D
 * 00000001406B802F: add     rsp, 8
 * 00000001406B8033: call    loc_1406B8026
 * 00000001406B8038: add     rsp, 8
 * 00000001406B803C: call    loc_1406B802F
 * 00000001406B8041: add     rsp, 8
 * 00000001406B8045: call    loc_1406B8038
 * 00000001406B804A: add     rsp, 8
 * 00000001406B804E: call    loc_1406B8041
 * 00000001406B8053: add     rsp, 8
 * 00000001406B8057: call    loc_1406B804A
 * 00000001406B805C: add     rsp, 8
 * 00000001406B8060: call    loc_1406B8053
 * 00000001406B8065: add     rsp, 8
 * 00000001406B8069: call    loc_1406B805C
 * 00000001406B806E: add     rsp, 8
 * 00000001406B8072: call    loc_1406B8065
 * 00000001406B8077: add     rsp, 8
 * 00000001406B807B: call    loc_1406B806E
 * 00000001406B8080: add     rsp, 8
 * 00000001406B8084: call    loc_1406B8077
 * 00000001406B8089: add     rsp, 8
 * 00000001406B808D: call    loc_1406B8080
 * 00000001406B8092: add     rsp, 8
 * 00000001406B8096: call    loc_1406B8089
 * 00000001406B809B: add     rsp, 8
 * 00000001406B809F: call    loc_1406B8092
 * 00000001406B80A4: add     rsp, 8
 * 00000001406B80A8: call    loc_1406B809B
 * 00000001406B80AD: add     rsp, 8
 * 00000001406B80B1: call    loc_1406B80A4
 * 00000001406B80B6: add     rsp, 8
 * 00000001406B80BA: call    loc_1406B80AD
 * 00000001406B80BF: add     rsp, 8
 * 00000001406B80C3: call    loc_1406B80B6
 * 00000001406B80C8: add     rsp, 8
 * 00000001406B80CC: call    loc_1406B80BF
 * 00000001406B80D1: add     rsp, 8
 * 00000001406B80D5: call    loc_1406B80C8
 * 00000001406B80DA: add     rsp, 8
 * 00000001406B80DE: call    loc_1406B80D1
 * 00000001406B80E3: add     rsp, 8
 * 00000001406B80E7: call    loc_1406B80DA
 * 00000001406B80EC: add     rsp, 8
 * 00000001406B80F0: call    loc_1406B80E3
 * 00000001406B80F5: add     rsp, 8
 * 00000001406B80F9: mov     eax, 0DADAh
 * 00000001406B80FE: test    byte ptr gs:85Ch, 8
 * 00000001406B8107: jz      short loc_1406B8110
 * 00000001406B8109: mov     al, 20h ; ' '
 * 00000001406B810B: incsspq rax
 * 00000001406B8110: test    word ptr gs:858h, 100h
 * 00000001406B811B: jz      short loc_1406B8129
 * 00000001406B811D: xor     eax, eax
 * 00000001406B811F: xor     edx, edx
 * 00000001406B8121: mov     ecx, 1
 * 00000001406B8126: div     rcx
 * 00000001406B8129: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B812D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B8131: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B8135: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B8139: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B813D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B8141: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B8145: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B8149: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B814D: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B8151: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B8155: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B8159: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B815D: mov     rsp, rbp
 * 00000001406B8160: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B8167: add     rsp, 0E8h
 * 00000001406B816E: test    cs:KiKvaShadow, 1
 * 00000001406B8175: jz      short loc_1406B817C
 * 00000001406B8177: jmp     KiKernelExit
 * 00000001406B817C: test    word ptr gs:858h, 200h
 * 00000001406B8187: jz      short loc_1406B818E
 * 00000001406B8189: verw    [rsp+arg_18]
 * 00000001406B818E: swapgs
 * 00000001406B8191: iretq
 * 00000001406B8193: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B8197: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B819B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B819F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B81A3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B81A7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B81AB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B81AF: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B81B3: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B81B7: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B81BB: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B81BF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B81C3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B81C7: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B81CB: mov     rsp, rbp
 * 00000001406B81CE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B81D5: add     rsp, 0E8h
 * 00000001406B81DC: iretq
 */
