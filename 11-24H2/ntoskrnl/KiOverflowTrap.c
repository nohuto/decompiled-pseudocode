/*
 * XREFs of KiOverflowTrap @ 0x1406B7FC0
 * Callers:
 *     KiOverflowTrapShadow @ 0x140BBD340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x1406B7FC0 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x1406B7FC0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B7FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B7FC0: sub     rsp, 8
 * 00000001406B7FC4: push    rbp
 * 00000001406B7FC5: sub     rsp, 158h
 * 00000001406B7FCC: lea     rbp, [rsp+80h]
 * 00000001406B7FD4: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B7FD8: mov     [rbp+0E8h+var_138], rax
 * 00000001406B7FDC: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B7FE0: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B7FE4: mov     [rbp+0E8h+var_120], r8
 * 00000001406B7FE8: mov     [rbp+0E8h+var_118], r9
 * 00000001406B7FEC: mov     [rbp+0E8h+var_110], r10
 * 00000001406B7FF0: mov     [rbp+0E8h+var_108], r11
 * 00000001406B7FF4: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7FFB: jnz     short loc_1406B8035
 * 00000001406B7FFD: xor     edx, edx
 * 00000001406B7FFF: rdsspq  rdx
 * 00000001406B8004: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B8008: lfence
 * 00000001406B800B: test    byte ptr gs:858h, 1
 * 00000001406B8014: jnz     short loc_1406B801E
 * 00000001406B8016: lfence
 * 00000001406B8019: jmp     loc_1406B82A6
 * 00000001406B801E: movzx   eax, word ptr gs:866h
 * 00000001406B8027: mov     ecx, 48h ; 'H'
 * 00000001406B802C: xor     edx, edx
 * 00000001406B802E: wrmsr
 * 00000001406B8030: jmp     loc_1406B82A6
 * 00000001406B8035: test    cs:KiKvaShadow, 1
 * 00000001406B803C: jnz     short loc_1406B8041
 * 00000001406B803E: swapgs
 * 00000001406B8041: lfence
 * 00000001406B8044: mov     rcx, gs:9D28h
 * 00000001406B804D: test    rcx, rcx
 * 00000001406B8050: jz      short loc_1406B8071
 * 00000001406B8052: rdsspq  rdx
 * 00000001406B8057: mov     r10, gs:9D20h
 * 00000001406B8060: add     r10, 8
 * 00000001406B8064: cmp     rdx, r10
 * 00000001406B8067: jnz     short loc_1406B8071
 * 00000001406B8069: rstorssp qword ptr [rcx]
 * 00000001406B806D: saveprevssp
 * 00000001406B8071: mov     r10, gs:188h
 * 00000001406B807A: mov     rcx, gs:188h
 * 00000001406B8083: mov     rcx, [rcx+220h]
 * 00000001406B808A: mov     rcx, [rcx+760h]
 * 00000001406B8091: mov     gs:850h, rcx
 * 00000001406B809A: mov     cx, gs:862h
 * 00000001406B80A3: mov     gs:864h, cx
 * 00000001406B80AC: mov     cl, gs:858h
 * 00000001406B80B4: mov     gs:85Ah, cl
 * 00000001406B80BC: movzx   eax, word ptr gs:868h
 * 00000001406B80C5: cmp     gs:866h, ax
 * 00000001406B80CE: jz      short loc_1406B80E2
 * 00000001406B80D0: mov     gs:866h, ax
 * 00000001406B80D9: mov     ecx, 48h ; 'H'
 * 00000001406B80DE: xor     edx, edx
 * 00000001406B80E0: wrmsr
 * 00000001406B80E2: movzx   edx, byte ptr gs:858h
 * 00000001406B80EB: test    edx, 8
 * 00000001406B80F1: jz      short loc_1406B810A
 * 00000001406B80F3: mov     eax, 1
 * 00000001406B80F8: xor     edx, edx
 * 00000001406B80FA: mov     ecx, 49h ; 'I'
 * 00000001406B80FF: wrmsr
 * 00000001406B8101: movzx   edx, byte ptr gs:858h
 * 00000001406B810A: test    edx, 2
 * 00000001406B8110: jz      loc_1406B824D
 * 00000001406B8116: call    loc_1406B8229
 * 00000001406B811B: add     rsp, 8
 * 00000001406B811F: call    loc_1406B8232
 * 00000001406B8124: add     rsp, 8
 * 00000001406B8128: call    loc_1406B811B
 * 00000001406B812D: add     rsp, 8
 * 00000001406B8131: call    loc_1406B8124
 * 00000001406B8136: add     rsp, 8
 * 00000001406B813A: call    loc_1406B812D
 * 00000001406B813F: add     rsp, 8
 * 00000001406B8143: call    loc_1406B8136
 * 00000001406B8148: add     rsp, 8
 * 00000001406B814C: call    loc_1406B813F
 * 00000001406B8151: add     rsp, 8
 * 00000001406B8155: call    loc_1406B8148
 * 00000001406B815A: add     rsp, 8
 * 00000001406B815E: call    loc_1406B8151
 * 00000001406B8163: add     rsp, 8
 * 00000001406B8167: call    loc_1406B815A
 * 00000001406B816C: add     rsp, 8
 * 00000001406B8170: call    loc_1406B8163
 * 00000001406B8175: add     rsp, 8
 * 00000001406B8179: call    loc_1406B816C
 * 00000001406B817E: add     rsp, 8
 * 00000001406B8182: call    loc_1406B8175
 * 00000001406B8187: add     rsp, 8
 * 00000001406B818B: call    loc_1406B817E
 * 00000001406B8190: add     rsp, 8
 * 00000001406B8194: call    loc_1406B8187
 * 00000001406B8199: add     rsp, 8
 * 00000001406B819D: call    loc_1406B8190
 * 00000001406B81A2: add     rsp, 8
 * 00000001406B81A6: call    loc_1406B8199
 * 00000001406B81AB: add     rsp, 8
 * 00000001406B81AF: call    loc_1406B81A2
 * 00000001406B81B4: add     rsp, 8
 * 00000001406B81B8: call    loc_1406B81AB
 * 00000001406B81BD: add     rsp, 8
 * 00000001406B81C1: call    loc_1406B81B4
 * 00000001406B81C6: add     rsp, 8
 * 00000001406B81CA: call    loc_1406B81BD
 * 00000001406B81CF: add     rsp, 8
 * 00000001406B81D3: call    loc_1406B81C6
 * 00000001406B81D8: add     rsp, 8
 * 00000001406B81DC: call    loc_1406B81CF
 * 00000001406B81E1: add     rsp, 8
 * 00000001406B81E5: call    loc_1406B81D8
 * 00000001406B81EA: add     rsp, 8
 * 00000001406B81EE: call    loc_1406B81E1
 * 00000001406B81F3: add     rsp, 8
 * 00000001406B81F7: call    loc_1406B81EA
 * 00000001406B81FC: add     rsp, 8
 * 00000001406B8200: call    loc_1406B81F3
 * 00000001406B8205: add     rsp, 8
 * 00000001406B8209: call    loc_1406B81FC
 * 00000001406B820E: add     rsp, 8
 * 00000001406B8212: call    loc_1406B8205
 * 00000001406B8217: add     rsp, 8
 * 00000001406B821B: call    loc_1406B820E
 * 00000001406B8220: add     rsp, 8
 * 00000001406B8224: call    loc_1406B8217
 * 00000001406B8229: add     rsp, 8
 * 00000001406B822D: call    loc_1406B8220
 * 00000001406B8232: add     rsp, 8
 * 00000001406B8236: mov     eax, 0DADAh
 * 00000001406B823B: test    byte ptr gs:85Ch, 8
 * 00000001406B8244: jz      short loc_1406B824D
 * 00000001406B8246: mov     al, 20h ; ' '
 * 00000001406B8248: incsspq rax
 * 00000001406B824D: test    edx, 80h
 * 00000001406B8253: jz      short loc_1406B825D
 * 00000001406B8255: lfence
 * 00000001406B8258: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B825D: lfence
 * 00000001406B8260: mov     byte ptr gs:85Eh, 0
 * 00000001406B8269: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B8270: jz      short loc_1406B8291
 * 00000001406B8272: mov     ecx, 6A7h
 * 00000001406B8277: rdmsr
 * 00000001406B8279: cmp     edx, 0
 * 00000001406B827C: jz      short loc_1406B8291
 * 00000001406B827E: mov     ecx, edx
 * 00000001406B8280: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B8286: cmp     edx, ecx
 * 00000001406B8288: jz      short loc_1406B8291
 * 00000001406B828A: mov     ecx, 6A7h
 * 00000001406B828F: wrmsr
 * 00000001406B8291: test    byte ptr [r10+3], 3
 * 00000001406B8296: mov     [rbp+0E8h+var_68], 0
 * 00000001406B829F: jz      short loc_1406B82A6
 * 00000001406B82A1: call    KiSaveDebugRegisterState
 * 00000001406B82A6: cld
 * 00000001406B82A7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B82AB: ldmxcsr dword ptr gs:180h
 * 00000001406B82B4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B82B8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B82BC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B82C0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B82C4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B82C8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B82CC: test    [rbp+0E8h+arg_0], 1
 * 00000001406B82D3: jz      short loc_1406B82DA
 * 00000001406B82D5: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B82DA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B82E1: jz      short loc_1406B82EF
 * 00000001406B82E3: test    [rbp+0E8h+arg_0], 1
 * 00000001406B82EA: jz      short loc_1406B82EF
 * 00000001406B82EC: stac
 * 00000001406B82EF: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B82F9: jz      short loc_1406B82FC
 * 00000001406B82FB: sti
 * 00000001406B82FC: mov     ecx, 0C0000095h
 * 00000001406B8301: xor     edx, edx
 * 00000001406B8303: mov     r8, [rbp+0E8h]
 * 00000001406B830A: dec     r8
 * 00000001406B830D: call    KiExceptionDispatch
 * 00000001406B8312: nop
 * 00000001406B8313: retn
 */
