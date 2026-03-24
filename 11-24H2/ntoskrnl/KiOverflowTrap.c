/*
 * XREFs of KiOverflowTrap @ 0x1406B70C0
 * Callers:
 *     KiOverflowTrapShadow @ 0x140BBB340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x1406B70C0 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x1406B70C0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B70C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B70C0: sub     rsp, 8
 * 00000001406B70C4: push    rbp
 * 00000001406B70C5: sub     rsp, 158h
 * 00000001406B70CC: lea     rbp, [rsp+80h]
 * 00000001406B70D4: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B70D8: mov     [rbp+0E8h+var_138], rax
 * 00000001406B70DC: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B70E0: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B70E4: mov     [rbp+0E8h+var_120], r8
 * 00000001406B70E8: mov     [rbp+0E8h+var_118], r9
 * 00000001406B70EC: mov     [rbp+0E8h+var_110], r10
 * 00000001406B70F0: mov     [rbp+0E8h+var_108], r11
 * 00000001406B70F4: test    [rbp+0E8h+arg_0], 1
 * 00000001406B70FB: jnz     short loc_1406B7135
 * 00000001406B70FD: xor     edx, edx
 * 00000001406B70FF: rdsspq  rdx
 * 00000001406B7104: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B7108: lfence
 * 00000001406B710B: test    byte ptr gs:858h, 1
 * 00000001406B7114: jnz     short loc_1406B711E
 * 00000001406B7116: lfence
 * 00000001406B7119: jmp     loc_1406B73A6
 * 00000001406B711E: movzx   eax, word ptr gs:866h
 * 00000001406B7127: mov     ecx, 48h ; 'H'
 * 00000001406B712C: xor     edx, edx
 * 00000001406B712E: wrmsr
 * 00000001406B7130: jmp     loc_1406B73A6
 * 00000001406B7135: test    cs:KiKvaShadow, 1
 * 00000001406B713C: jnz     short loc_1406B7141
 * 00000001406B713E: swapgs
 * 00000001406B7141: lfence
 * 00000001406B7144: mov     rcx, gs:9D28h
 * 00000001406B714D: test    rcx, rcx
 * 00000001406B7150: jz      short loc_1406B7171
 * 00000001406B7152: rdsspq  rdx
 * 00000001406B7157: mov     r10, gs:9D20h
 * 00000001406B7160: add     r10, 8
 * 00000001406B7164: cmp     rdx, r10
 * 00000001406B7167: jnz     short loc_1406B7171
 * 00000001406B7169: rstorssp qword ptr [rcx]
 * 00000001406B716D: saveprevssp
 * 00000001406B7171: mov     r10, gs:188h
 * 00000001406B717A: mov     rcx, gs:188h
 * 00000001406B7183: mov     rcx, [rcx+220h]
 * 00000001406B718A: mov     rcx, [rcx+760h]
 * 00000001406B7191: mov     gs:850h, rcx
 * 00000001406B719A: mov     cx, gs:862h
 * 00000001406B71A3: mov     gs:864h, cx
 * 00000001406B71AC: mov     cl, gs:858h
 * 00000001406B71B4: mov     gs:85Ah, cl
 * 00000001406B71BC: movzx   eax, word ptr gs:868h
 * 00000001406B71C5: cmp     gs:866h, ax
 * 00000001406B71CE: jz      short loc_1406B71E2
 * 00000001406B71D0: mov     gs:866h, ax
 * 00000001406B71D9: mov     ecx, 48h ; 'H'
 * 00000001406B71DE: xor     edx, edx
 * 00000001406B71E0: wrmsr
 * 00000001406B71E2: movzx   edx, byte ptr gs:858h
 * 00000001406B71EB: test    edx, 8
 * 00000001406B71F1: jz      short loc_1406B720A
 * 00000001406B71F3: mov     eax, 1
 * 00000001406B71F8: xor     edx, edx
 * 00000001406B71FA: mov     ecx, 49h ; 'I'
 * 00000001406B71FF: wrmsr
 * 00000001406B7201: movzx   edx, byte ptr gs:858h
 * 00000001406B720A: test    edx, 2
 * 00000001406B7210: jz      loc_1406B734D
 * 00000001406B7216: call    loc_1406B7329
 * 00000001406B721B: add     rsp, 8
 * 00000001406B721F: call    loc_1406B7332
 * 00000001406B7224: add     rsp, 8
 * 00000001406B7228: call    loc_1406B721B
 * 00000001406B722D: add     rsp, 8
 * 00000001406B7231: call    loc_1406B7224
 * 00000001406B7236: add     rsp, 8
 * 00000001406B723A: call    loc_1406B722D
 * 00000001406B723F: add     rsp, 8
 * 00000001406B7243: call    loc_1406B7236
 * 00000001406B7248: add     rsp, 8
 * 00000001406B724C: call    loc_1406B723F
 * 00000001406B7251: add     rsp, 8
 * 00000001406B7255: call    loc_1406B7248
 * 00000001406B725A: add     rsp, 8
 * 00000001406B725E: call    loc_1406B7251
 * 00000001406B7263: add     rsp, 8
 * 00000001406B7267: call    loc_1406B725A
 * 00000001406B726C: add     rsp, 8
 * 00000001406B7270: call    loc_1406B7263
 * 00000001406B7275: add     rsp, 8
 * 00000001406B7279: call    loc_1406B726C
 * 00000001406B727E: add     rsp, 8
 * 00000001406B7282: call    loc_1406B7275
 * 00000001406B7287: add     rsp, 8
 * 00000001406B728B: call    loc_1406B727E
 * 00000001406B7290: add     rsp, 8
 * 00000001406B7294: call    loc_1406B7287
 * 00000001406B7299: add     rsp, 8
 * 00000001406B729D: call    loc_1406B7290
 * 00000001406B72A2: add     rsp, 8
 * 00000001406B72A6: call    loc_1406B7299
 * 00000001406B72AB: add     rsp, 8
 * 00000001406B72AF: call    loc_1406B72A2
 * 00000001406B72B4: add     rsp, 8
 * 00000001406B72B8: call    loc_1406B72AB
 * 00000001406B72BD: add     rsp, 8
 * 00000001406B72C1: call    loc_1406B72B4
 * 00000001406B72C6: add     rsp, 8
 * 00000001406B72CA: call    loc_1406B72BD
 * 00000001406B72CF: add     rsp, 8
 * 00000001406B72D3: call    loc_1406B72C6
 * 00000001406B72D8: add     rsp, 8
 * 00000001406B72DC: call    loc_1406B72CF
 * 00000001406B72E1: add     rsp, 8
 * 00000001406B72E5: call    loc_1406B72D8
 * 00000001406B72EA: add     rsp, 8
 * 00000001406B72EE: call    loc_1406B72E1
 * 00000001406B72F3: add     rsp, 8
 * 00000001406B72F7: call    loc_1406B72EA
 * 00000001406B72FC: add     rsp, 8
 * 00000001406B7300: call    loc_1406B72F3
 * 00000001406B7305: add     rsp, 8
 * 00000001406B7309: call    loc_1406B72FC
 * 00000001406B730E: add     rsp, 8
 * 00000001406B7312: call    loc_1406B7305
 * 00000001406B7317: add     rsp, 8
 * 00000001406B731B: call    loc_1406B730E
 * 00000001406B7320: add     rsp, 8
 * 00000001406B7324: call    loc_1406B7317
 * 00000001406B7329: add     rsp, 8
 * 00000001406B732D: call    loc_1406B7320
 * 00000001406B7332: add     rsp, 8
 * 00000001406B7336: mov     eax, 0DADAh
 * 00000001406B733B: test    byte ptr gs:85Ch, 8
 * 00000001406B7344: jz      short loc_1406B734D
 * 00000001406B7346: mov     al, 20h ; ' '
 * 00000001406B7348: incsspq rax
 * 00000001406B734D: test    edx, 80h
 * 00000001406B7353: jz      short loc_1406B735D
 * 00000001406B7355: lfence
 * 00000001406B7358: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B735D: lfence
 * 00000001406B7360: mov     byte ptr gs:85Eh, 0
 * 00000001406B7369: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B7370: jz      short loc_1406B7391
 * 00000001406B7372: mov     ecx, 6A7h
 * 00000001406B7377: rdmsr
 * 00000001406B7379: cmp     edx, 0
 * 00000001406B737C: jz      short loc_1406B7391
 * 00000001406B737E: mov     ecx, edx
 * 00000001406B7380: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B7386: cmp     edx, ecx
 * 00000001406B7388: jz      short loc_1406B7391
 * 00000001406B738A: mov     ecx, 6A7h
 * 00000001406B738F: wrmsr
 * 00000001406B7391: test    byte ptr [r10+3], 3
 * 00000001406B7396: mov     [rbp+0E8h+var_68], 0
 * 00000001406B739F: jz      short loc_1406B73A6
 * 00000001406B73A1: call    KiSaveDebugRegisterState
 * 00000001406B73A6: cld
 * 00000001406B73A7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B73AB: ldmxcsr dword ptr gs:180h
 * 00000001406B73B4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B73B8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B73BC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B73C0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B73C4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B73C8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B73CC: test    [rbp+0E8h+arg_0], 1
 * 00000001406B73D3: jz      short loc_1406B73DA
 * 00000001406B73D5: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B73DA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B73E1: jz      short loc_1406B73EF
 * 00000001406B73E3: test    [rbp+0E8h+arg_0], 1
 * 00000001406B73EA: jz      short loc_1406B73EF
 * 00000001406B73EC: stac
 * 00000001406B73EF: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B73F9: jz      short loc_1406B73FC
 * 00000001406B73FB: sti
 * 00000001406B73FC: mov     ecx, 0C0000095h
 * 00000001406B7401: xor     edx, edx
 * 00000001406B7403: mov     r8, [rbp+0E8h]
 * 00000001406B740A: dec     r8
 * 00000001406B740D: call    KiExceptionDispatch
 * 00000001406B7412: nop
 * 00000001406B7413: retn
 */
