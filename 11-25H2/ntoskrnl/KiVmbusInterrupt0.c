/*
 * XREFs of KiVmbusInterrupt0 @ 0x1406A49E0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140BAB040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405B8E30 (KeWakeProcessor.c)
 *     KiVmbusInterrupt0 @ 0x1406A49E0 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1406A49E0
 * Reason: Hex-Rays returned no pseudocode for 0x1406A49E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A49E0: push    1
 * 00000001406A49E2: push    rbp
 * 00000001406A49E3: push    rsi
 * 00000001406A49E4: sub     rsp, 150h
 * 00000001406A49EB: lea     rbp, [rsp+168h+var_E8]
 * 00000001406A49F3: mov     byte ptr [rbp-55h], 0
 * 00000001406A49F7: mov     [rbp-50h], rax
 * 00000001406A49FB: mov     [rbp-48h], rcx
 * 00000001406A49FF: mov     [rbp-40h], rdx
 * 00000001406A4A03: mov     [rbp-38h], r8
 * 00000001406A4A07: mov     [rbp-30h], r9
 * 00000001406A4A0B: mov     [rbp-28h], r10
 * 00000001406A4A0F: mov     [rbp-20h], r11
 * 00000001406A4A13: test    byte ptr [rbp+0F0h], 1
 * 00000001406A4A1A: jnz     short loc_1406A4A54
 * 00000001406A4A1C: xor     edx, edx
 * 00000001406A4A1E: rdsspq  rdx
 * 00000001406A4A23: mov     [rbp+58h], rdx
 * 00000001406A4A27: lfence
 * 00000001406A4A2A: test    byte ptr gs:858h, 1
 * 00000001406A4A33: jnz     short loc_1406A4A3D
 * 00000001406A4A35: lfence
 * 00000001406A4A38: jmp     loc_1406A4CC5
 * 00000001406A4A3D: movzx   eax, word ptr gs:866h
 * 00000001406A4A46: mov     ecx, 48h ; 'H'
 * 00000001406A4A4B: xor     edx, edx
 * 00000001406A4A4D: wrmsr
 * 00000001406A4A4F: jmp     loc_1406A4CC5
 * 00000001406A4A54: test    cs:KiKvaShadow, 1
 * 00000001406A4A5B: jnz     short loc_1406A4A60
 * 00000001406A4A5D: swapgs
 * 00000001406A4A60: lfence
 * 00000001406A4A63: mov     rcx, gs:9D28h
 * 00000001406A4A6C: test    rcx, rcx
 * 00000001406A4A6F: jz      short loc_1406A4A90
 * 00000001406A4A71: rdsspq  rdx
 * 00000001406A4A76: mov     r10, gs:9D20h
 * 00000001406A4A7F: add     r10, 8
 * 00000001406A4A83: cmp     rdx, r10
 * 00000001406A4A86: jnz     short loc_1406A4A90
 * 00000001406A4A88: rstorssp qword ptr [rcx]
 * 00000001406A4A8C: saveprevssp
 * 00000001406A4A90: mov     r10, gs:188h
 * 00000001406A4A99: mov     rcx, gs:188h
 * 00000001406A4AA2: mov     rcx, [rcx+220h]
 * 00000001406A4AA9: mov     rcx, [rcx+760h]
 * 00000001406A4AB0: mov     gs:850h, rcx
 * 00000001406A4AB9: mov     cx, gs:862h
 * 00000001406A4AC2: mov     gs:864h, cx
 * 00000001406A4ACB: mov     cl, gs:858h
 * 00000001406A4AD3: mov     gs:85Ah, cl
 * 00000001406A4ADB: movzx   eax, word ptr gs:868h
 * 00000001406A4AE4: cmp     gs:866h, ax
 * 00000001406A4AED: jz      short loc_1406A4B01
 * 00000001406A4AEF: mov     gs:866h, ax
 * 00000001406A4AF8: mov     ecx, 48h ; 'H'
 * 00000001406A4AFD: xor     edx, edx
 * 00000001406A4AFF: wrmsr
 * 00000001406A4B01: movzx   edx, byte ptr gs:858h
 * 00000001406A4B0A: test    edx, 8
 * 00000001406A4B10: jz      short loc_1406A4B29
 * 00000001406A4B12: mov     eax, 1
 * 00000001406A4B17: xor     edx, edx
 * 00000001406A4B19: mov     ecx, 49h ; 'I'
 * 00000001406A4B1E: wrmsr
 * 00000001406A4B20: movzx   edx, byte ptr gs:858h
 * 00000001406A4B29: test    edx, 2
 * 00000001406A4B2F: jz      loc_1406A4C6C
 * 00000001406A4B35: call    loc_1406A4C48
 * 00000001406A4B3A: add     rsp, 8
 * 00000001406A4B3E: call    loc_1406A4C51
 * 00000001406A4B43: add     rsp, 8
 * 00000001406A4B47: call    loc_1406A4B3A
 * 00000001406A4B4C: add     rsp, 8
 * 00000001406A4B50: call    loc_1406A4B43
 * 00000001406A4B55: add     rsp, 8
 * 00000001406A4B59: call    loc_1406A4B4C
 * 00000001406A4B5E: add     rsp, 8
 * 00000001406A4B62: call    loc_1406A4B55
 * 00000001406A4B67: add     rsp, 8
 * 00000001406A4B6B: call    loc_1406A4B5E
 * 00000001406A4B70: add     rsp, 8
 * 00000001406A4B74: call    loc_1406A4B67
 * 00000001406A4B79: add     rsp, 8
 * 00000001406A4B7D: call    loc_1406A4B70
 * 00000001406A4B82: add     rsp, 8
 * 00000001406A4B86: call    loc_1406A4B79
 * 00000001406A4B8B: add     rsp, 8
 * 00000001406A4B8F: call    loc_1406A4B82
 * 00000001406A4B94: add     rsp, 8
 * 00000001406A4B98: call    loc_1406A4B8B
 * 00000001406A4B9D: add     rsp, 8
 * 00000001406A4BA1: call    loc_1406A4B94
 * 00000001406A4BA6: add     rsp, 8
 * 00000001406A4BAA: call    loc_1406A4B9D
 * 00000001406A4BAF: add     rsp, 8
 * 00000001406A4BB3: call    loc_1406A4BA6
 * 00000001406A4BB8: add     rsp, 8
 * 00000001406A4BBC: call    loc_1406A4BAF
 * 00000001406A4BC1: add     rsp, 8
 * 00000001406A4BC5: call    loc_1406A4BB8
 * 00000001406A4BCA: add     rsp, 8
 * 00000001406A4BCE: call    loc_1406A4BC1
 * 00000001406A4BD3: add     rsp, 8
 * 00000001406A4BD7: call    loc_1406A4BCA
 * 00000001406A4BDC: add     rsp, 8
 * 00000001406A4BE0: call    loc_1406A4BD3
 * 00000001406A4BE5: add     rsp, 8
 * 00000001406A4BE9: call    loc_1406A4BDC
 * 00000001406A4BEE: add     rsp, 8
 * 00000001406A4BF2: call    loc_1406A4BE5
 * 00000001406A4BF7: add     rsp, 8
 * 00000001406A4BFB: call    loc_1406A4BEE
 * 00000001406A4C00: add     rsp, 8
 * 00000001406A4C04: call    loc_1406A4BF7
 * 00000001406A4C09: add     rsp, 8
 * 00000001406A4C0D: call    loc_1406A4C00
 * 00000001406A4C12: add     rsp, 8
 * 00000001406A4C16: call    loc_1406A4C09
 * 00000001406A4C1B: add     rsp, 8
 * 00000001406A4C1F: call    loc_1406A4C12
 * 00000001406A4C24: add     rsp, 8
 * 00000001406A4C28: call    loc_1406A4C1B
 * 00000001406A4C2D: add     rsp, 8
 * 00000001406A4C31: call    loc_1406A4C24
 * 00000001406A4C36: add     rsp, 8
 * 00000001406A4C3A: call    loc_1406A4C2D
 * 00000001406A4C3F: add     rsp, 8
 * 00000001406A4C43: call    loc_1406A4C36
 * 00000001406A4C48: add     rsp, 8
 * 00000001406A4C4C: call    loc_1406A4C3F
 * 00000001406A4C51: add     rsp, 8
 * 00000001406A4C55: mov     eax, 0DADAh
 * 00000001406A4C5A: test    byte ptr gs:85Ch, 8
 * 00000001406A4C63: jz      short loc_1406A4C6C
 * 00000001406A4C65: mov     al, 20h ; ' '
 * 00000001406A4C67: incsspq rax
 * 00000001406A4C6C: test    edx, 80h
 * 00000001406A4C72: jz      short loc_1406A4C7C
 * 00000001406A4C74: lfence
 * 00000001406A4C77: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A4C7C: lfence
 * 00000001406A4C7F: mov     byte ptr gs:85Eh, 0
 * 00000001406A4C88: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A4C8F: jz      short loc_1406A4CB0
 * 00000001406A4C91: mov     ecx, 6A7h
 * 00000001406A4C96: rdmsr
 * 00000001406A4C98: cmp     edx, 0
 * 00000001406A4C9B: jz      short loc_1406A4CB0
 * 00000001406A4C9D: mov     ecx, edx
 * 00000001406A4C9F: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A4CA5: cmp     edx, ecx
 * 00000001406A4CA7: jz      short loc_1406A4CB0
 * 00000001406A4CA9: mov     ecx, 6A7h
 * 00000001406A4CAE: wrmsr
 * 00000001406A4CB0: test    byte ptr [r10+3], 3
 * 00000001406A4CB5: mov     word ptr [rbp+80h], 0
 * 00000001406A4CBE: jz      short loc_1406A4CC5
 * 00000001406A4CC0: call    KiSaveDebugRegisterState
 * 00000001406A4CC5: cld
 * 00000001406A4CC6: stmxcsr dword ptr [rbp-54h]
 * 00000001406A4CCA: ldmxcsr dword ptr gs:180h
 * 00000001406A4CD3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406A4CD7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406A4CDB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406A4CDF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406A4CE3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406A4CE7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406A4CEB: test    byte ptr [rbp+0F0h], 1
 * 00000001406A4CF2: jz      short loc_1406A4CF9
 * 00000001406A4CF4: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A4CF9: cmp     byte ptr gs:87DAh, 0
 * 00000001406A4D02: jz      short loc_1406A4D09
 * 00000001406A4D04: call    KeWakeProcessor
 * 00000001406A4D09: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406A4D10: cmp     rax, [rbp+0E8h]
 * 00000001406A4D17: jnb     short loc_1406A4D32
 * 00000001406A4D19: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406A4D20: cmp     rax, [rbp+0E8h]
 * 00000001406A4D27: jb      short loc_1406A4D32
 * 00000001406A4D29: lea     rcx, [rbp-80h]
 * 00000001406A4D2D: call    KiCheckForSListAddress
 * 00000001406A4D32: xor     esi, esi
 * 00000001406A4D34: inc     dword ptr gs:87C0h
 * 00000001406A4D3C: jmp     KiVmbusInterruptDispatch
 */
