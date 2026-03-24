/*
 * XREFs of KiStackFault @ 0x1406AE140
 * Callers:
 *     KiStackFaultShadow @ 0x140BAA740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x1406AE140 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x1406AE140
 * Reason: Hex-Rays returned no pseudocode for 0x1406AE140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AE140: push    rbp
 * 00000001406AE141: sub     rsp, 158h
 * 00000001406AE148: lea     rbp, [rsp+80h]
 * 00000001406AE150: mov     [rbp+0D8h+var_12D], 1
 * 00000001406AE154: mov     [rbp+0D8h+var_128], rax
 * 00000001406AE158: mov     [rbp+0D8h+var_120], rcx
 * 00000001406AE15C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406AE160: mov     [rbp+0D8h+var_110], r8
 * 00000001406AE164: mov     [rbp+0D8h+var_108], r9
 * 00000001406AE168: mov     [rbp+0D8h+var_100], r10
 * 00000001406AE16C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406AE170: test    [rbp+0D8h+arg_8], 1
 * 00000001406AE177: jnz     short loc_1406AE1B1
 * 00000001406AE179: xor     edx, edx
 * 00000001406AE17B: rdsspq  rdx
 * 00000001406AE180: mov     [rbp+0D8h+var_80], rdx
 * 00000001406AE184: lfence
 * 00000001406AE187: test    byte ptr gs:858h, 1
 * 00000001406AE190: jnz     short loc_1406AE19A
 * 00000001406AE192: lfence
 * 00000001406AE195: jmp     loc_1406AE422
 * 00000001406AE19A: movzx   eax, word ptr gs:866h
 * 00000001406AE1A3: mov     ecx, 48h ; 'H'
 * 00000001406AE1A8: xor     edx, edx
 * 00000001406AE1AA: wrmsr
 * 00000001406AE1AC: jmp     loc_1406AE422
 * 00000001406AE1B1: test    cs:KiKvaShadow, 1
 * 00000001406AE1B8: jnz     short loc_1406AE1BD
 * 00000001406AE1BA: swapgs
 * 00000001406AE1BD: lfence
 * 00000001406AE1C0: mov     rcx, gs:9D28h
 * 00000001406AE1C9: test    rcx, rcx
 * 00000001406AE1CC: jz      short loc_1406AE1ED
 * 00000001406AE1CE: rdsspq  rdx
 * 00000001406AE1D3: mov     r10, gs:9D20h
 * 00000001406AE1DC: add     r10, 8
 * 00000001406AE1E0: cmp     rdx, r10
 * 00000001406AE1E3: jnz     short loc_1406AE1ED
 * 00000001406AE1E5: rstorssp qword ptr [rcx]
 * 00000001406AE1E9: saveprevssp
 * 00000001406AE1ED: mov     r10, gs:188h
 * 00000001406AE1F6: mov     rcx, gs:188h
 * 00000001406AE1FF: mov     rcx, [rcx+220h]
 * 00000001406AE206: mov     rcx, [rcx+760h]
 * 00000001406AE20D: mov     gs:850h, rcx
 * 00000001406AE216: mov     cx, gs:862h
 * 00000001406AE21F: mov     gs:864h, cx
 * 00000001406AE228: mov     cl, gs:858h
 * 00000001406AE230: mov     gs:85Ah, cl
 * 00000001406AE238: movzx   eax, word ptr gs:868h
 * 00000001406AE241: cmp     gs:866h, ax
 * 00000001406AE24A: jz      short loc_1406AE25E
 * 00000001406AE24C: mov     gs:866h, ax
 * 00000001406AE255: mov     ecx, 48h ; 'H'
 * 00000001406AE25A: xor     edx, edx
 * 00000001406AE25C: wrmsr
 * 00000001406AE25E: movzx   edx, byte ptr gs:858h
 * 00000001406AE267: test    edx, 8
 * 00000001406AE26D: jz      short loc_1406AE286
 * 00000001406AE26F: mov     eax, 1
 * 00000001406AE274: xor     edx, edx
 * 00000001406AE276: mov     ecx, 49h ; 'I'
 * 00000001406AE27B: wrmsr
 * 00000001406AE27D: movzx   edx, byte ptr gs:858h
 * 00000001406AE286: test    edx, 2
 * 00000001406AE28C: jz      loc_1406AE3C9
 * 00000001406AE292: call    loc_1406AE3A5
 * 00000001406AE297: add     rsp, 8
 * 00000001406AE29B: call    loc_1406AE3AE
 * 00000001406AE2A0: add     rsp, 8
 * 00000001406AE2A4: call    loc_1406AE297
 * 00000001406AE2A9: add     rsp, 8
 * 00000001406AE2AD: call    loc_1406AE2A0
 * 00000001406AE2B2: add     rsp, 8
 * 00000001406AE2B6: call    loc_1406AE2A9
 * 00000001406AE2BB: add     rsp, 8
 * 00000001406AE2BF: call    loc_1406AE2B2
 * 00000001406AE2C4: add     rsp, 8
 * 00000001406AE2C8: call    loc_1406AE2BB
 * 00000001406AE2CD: add     rsp, 8
 * 00000001406AE2D1: call    loc_1406AE2C4
 * 00000001406AE2D6: add     rsp, 8
 * 00000001406AE2DA: call    loc_1406AE2CD
 * 00000001406AE2DF: add     rsp, 8
 * 00000001406AE2E3: call    loc_1406AE2D6
 * 00000001406AE2E8: add     rsp, 8
 * 00000001406AE2EC: call    loc_1406AE2DF
 * 00000001406AE2F1: add     rsp, 8
 * 00000001406AE2F5: call    loc_1406AE2E8
 * 00000001406AE2FA: add     rsp, 8
 * 00000001406AE2FE: call    loc_1406AE2F1
 * 00000001406AE303: add     rsp, 8
 * 00000001406AE307: call    loc_1406AE2FA
 * 00000001406AE30C: add     rsp, 8
 * 00000001406AE310: call    loc_1406AE303
 * 00000001406AE315: add     rsp, 8
 * 00000001406AE319: call    loc_1406AE30C
 * 00000001406AE31E: add     rsp, 8
 * 00000001406AE322: call    loc_1406AE315
 * 00000001406AE327: add     rsp, 8
 * 00000001406AE32B: call    loc_1406AE31E
 * 00000001406AE330: add     rsp, 8
 * 00000001406AE334: call    loc_1406AE327
 * 00000001406AE339: add     rsp, 8
 * 00000001406AE33D: call    loc_1406AE330
 * 00000001406AE342: add     rsp, 8
 * 00000001406AE346: call    loc_1406AE339
 * 00000001406AE34B: add     rsp, 8
 * 00000001406AE34F: call    loc_1406AE342
 * 00000001406AE354: add     rsp, 8
 * 00000001406AE358: call    loc_1406AE34B
 * 00000001406AE35D: add     rsp, 8
 * 00000001406AE361: call    loc_1406AE354
 * 00000001406AE366: add     rsp, 8
 * 00000001406AE36A: call    loc_1406AE35D
 * 00000001406AE36F: add     rsp, 8
 * 00000001406AE373: call    loc_1406AE366
 * 00000001406AE378: add     rsp, 8
 * 00000001406AE37C: call    loc_1406AE36F
 * 00000001406AE381: add     rsp, 8
 * 00000001406AE385: call    loc_1406AE378
 * 00000001406AE38A: add     rsp, 8
 * 00000001406AE38E: call    loc_1406AE381
 * 00000001406AE393: add     rsp, 8
 * 00000001406AE397: call    loc_1406AE38A
 * 00000001406AE39C: add     rsp, 8
 * 00000001406AE3A0: call    loc_1406AE393
 * 00000001406AE3A5: add     rsp, 8
 * 00000001406AE3A9: call    loc_1406AE39C
 * 00000001406AE3AE: add     rsp, 8
 * 00000001406AE3B2: mov     eax, 0DADAh
 * 00000001406AE3B7: test    byte ptr gs:85Ch, 8
 * 00000001406AE3C0: jz      short loc_1406AE3C9
 * 00000001406AE3C2: mov     al, 20h ; ' '
 * 00000001406AE3C4: incsspq rax
 * 00000001406AE3C9: test    edx, 80h
 * 00000001406AE3CF: jz      short loc_1406AE3D9
 * 00000001406AE3D1: lfence
 * 00000001406AE3D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AE3D9: lfence
 * 00000001406AE3DC: mov     byte ptr gs:85Eh, 0
 * 00000001406AE3E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AE3EC: jz      short loc_1406AE40D
 * 00000001406AE3EE: mov     ecx, 6A7h
 * 00000001406AE3F3: rdmsr
 * 00000001406AE3F5: cmp     edx, 0
 * 00000001406AE3F8: jz      short loc_1406AE40D
 * 00000001406AE3FA: mov     ecx, edx
 * 00000001406AE3FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AE402: cmp     edx, ecx
 * 00000001406AE404: jz      short loc_1406AE40D
 * 00000001406AE406: mov     ecx, 6A7h
 * 00000001406AE40B: wrmsr
 * 00000001406AE40D: test    byte ptr [r10+3], 3
 * 00000001406AE412: mov     [rbp+0D8h+var_58], 0
 * 00000001406AE41B: jz      short loc_1406AE422
 * 00000001406AE41D: call    KiSaveDebugRegisterState
 * 00000001406AE422: cld
 * 00000001406AE423: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406AE427: ldmxcsr dword ptr gs:180h
 * 00000001406AE430: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406AE434: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406AE438: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406AE43C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406AE440: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406AE444: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406AE448: test    [rbp+0D8h+arg_8], 1
 * 00000001406AE44F: jz      short loc_1406AE456
 * 00000001406AE451: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AE456: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AE45D: jz      short loc_1406AE46B
 * 00000001406AE45F: test    [rbp+0D8h+arg_8], 1
 * 00000001406AE466: jz      short loc_1406AE46B
 * 00000001406AE468: stac
 * 00000001406AE46B: mov     eax, [rbp+0E0h]
 * 00000001406AE471: test    [rbp+0D8h+arg_10], 200h
 * 00000001406AE47B: jz      short loc_1406AE47E
 * 00000001406AE47D: sti
 * 00000001406AE47E: mov     ecx, 0C0000005h
 * 00000001406AE483: mov     edx, 2
 * 00000001406AE488: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406AE48F: mov     r9d, [rbp+0E0h]
 * 00000001406AE496: or      r9d, 3
 * 00000001406AE49A: and     r9d, 0FFFFh
 * 00000001406AE4A1: test    [rbp+0D8h+arg_8], 1
 * 00000001406AE4A8: jnz     short loc_1406AE4AE
 * 00000001406AE4AA: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001406AE4AE: xor     r10, r10
 * 00000001406AE4B1: call    KiExceptionDispatch
 * 00000001406AE4B6: nop
 * 00000001406AE4B7: retn
 */
