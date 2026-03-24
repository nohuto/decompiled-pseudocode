/*
 * XREFs of KiVmbusInterrupt1 @ 0x1406A4D50
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140BAB0C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405B8E30 (KeWakeProcessor.c)
 *     KiVmbusInterrupt1 @ 0x1406A4D50 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1406A4D50
 * Reason: Hex-Rays returned no pseudocode for 0x1406A4D50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A4D50: push    2
 * 00000001406A4D52: push    rbp
 * 00000001406A4D53: push    rsi
 * 00000001406A4D54: sub     rsp, 150h
 * 00000001406A4D5B: lea     rbp, [rsp+168h+var_E8]
 * 00000001406A4D63: mov     byte ptr [rbp-55h], 0
 * 00000001406A4D67: mov     [rbp-50h], rax
 * 00000001406A4D6B: mov     [rbp-48h], rcx
 * 00000001406A4D6F: mov     [rbp-40h], rdx
 * 00000001406A4D73: mov     [rbp-38h], r8
 * 00000001406A4D77: mov     [rbp-30h], r9
 * 00000001406A4D7B: mov     [rbp-28h], r10
 * 00000001406A4D7F: mov     [rbp-20h], r11
 * 00000001406A4D83: test    byte ptr [rbp+0F0h], 1
 * 00000001406A4D8A: jnz     short loc_1406A4DC4
 * 00000001406A4D8C: xor     edx, edx
 * 00000001406A4D8E: rdsspq  rdx
 * 00000001406A4D93: mov     [rbp+58h], rdx
 * 00000001406A4D97: lfence
 * 00000001406A4D9A: test    byte ptr gs:858h, 1
 * 00000001406A4DA3: jnz     short loc_1406A4DAD
 * 00000001406A4DA5: lfence
 * 00000001406A4DA8: jmp     loc_1406A5035
 * 00000001406A4DAD: movzx   eax, word ptr gs:866h
 * 00000001406A4DB6: mov     ecx, 48h ; 'H'
 * 00000001406A4DBB: xor     edx, edx
 * 00000001406A4DBD: wrmsr
 * 00000001406A4DBF: jmp     loc_1406A5035
 * 00000001406A4DC4: test    cs:KiKvaShadow, 1
 * 00000001406A4DCB: jnz     short loc_1406A4DD0
 * 00000001406A4DCD: swapgs
 * 00000001406A4DD0: lfence
 * 00000001406A4DD3: mov     rcx, gs:9D28h
 * 00000001406A4DDC: test    rcx, rcx
 * 00000001406A4DDF: jz      short loc_1406A4E00
 * 00000001406A4DE1: rdsspq  rdx
 * 00000001406A4DE6: mov     r10, gs:9D20h
 * 00000001406A4DEF: add     r10, 8
 * 00000001406A4DF3: cmp     rdx, r10
 * 00000001406A4DF6: jnz     short loc_1406A4E00
 * 00000001406A4DF8: rstorssp qword ptr [rcx]
 * 00000001406A4DFC: saveprevssp
 * 00000001406A4E00: mov     r10, gs:188h
 * 00000001406A4E09: mov     rcx, gs:188h
 * 00000001406A4E12: mov     rcx, [rcx+220h]
 * 00000001406A4E19: mov     rcx, [rcx+760h]
 * 00000001406A4E20: mov     gs:850h, rcx
 * 00000001406A4E29: mov     cx, gs:862h
 * 00000001406A4E32: mov     gs:864h, cx
 * 00000001406A4E3B: mov     cl, gs:858h
 * 00000001406A4E43: mov     gs:85Ah, cl
 * 00000001406A4E4B: movzx   eax, word ptr gs:868h
 * 00000001406A4E54: cmp     gs:866h, ax
 * 00000001406A4E5D: jz      short loc_1406A4E71
 * 00000001406A4E5F: mov     gs:866h, ax
 * 00000001406A4E68: mov     ecx, 48h ; 'H'
 * 00000001406A4E6D: xor     edx, edx
 * 00000001406A4E6F: wrmsr
 * 00000001406A4E71: movzx   edx, byte ptr gs:858h
 * 00000001406A4E7A: test    edx, 8
 * 00000001406A4E80: jz      short loc_1406A4E99
 * 00000001406A4E82: mov     eax, 1
 * 00000001406A4E87: xor     edx, edx
 * 00000001406A4E89: mov     ecx, 49h ; 'I'
 * 00000001406A4E8E: wrmsr
 * 00000001406A4E90: movzx   edx, byte ptr gs:858h
 * 00000001406A4E99: test    edx, 2
 * 00000001406A4E9F: jz      loc_1406A4FDC
 * 00000001406A4EA5: call    loc_1406A4FB8
 * 00000001406A4EAA: add     rsp, 8
 * 00000001406A4EAE: call    loc_1406A4FC1
 * 00000001406A4EB3: add     rsp, 8
 * 00000001406A4EB7: call    loc_1406A4EAA
 * 00000001406A4EBC: add     rsp, 8
 * 00000001406A4EC0: call    loc_1406A4EB3
 * 00000001406A4EC5: add     rsp, 8
 * 00000001406A4EC9: call    loc_1406A4EBC
 * 00000001406A4ECE: add     rsp, 8
 * 00000001406A4ED2: call    loc_1406A4EC5
 * 00000001406A4ED7: add     rsp, 8
 * 00000001406A4EDB: call    loc_1406A4ECE
 * 00000001406A4EE0: add     rsp, 8
 * 00000001406A4EE4: call    loc_1406A4ED7
 * 00000001406A4EE9: add     rsp, 8
 * 00000001406A4EED: call    loc_1406A4EE0
 * 00000001406A4EF2: add     rsp, 8
 * 00000001406A4EF6: call    loc_1406A4EE9
 * 00000001406A4EFB: add     rsp, 8
 * 00000001406A4EFF: call    loc_1406A4EF2
 * 00000001406A4F04: add     rsp, 8
 * 00000001406A4F08: call    loc_1406A4EFB
 * 00000001406A4F0D: add     rsp, 8
 * 00000001406A4F11: call    loc_1406A4F04
 * 00000001406A4F16: add     rsp, 8
 * 00000001406A4F1A: call    loc_1406A4F0D
 * 00000001406A4F1F: add     rsp, 8
 * 00000001406A4F23: call    loc_1406A4F16
 * 00000001406A4F28: add     rsp, 8
 * 00000001406A4F2C: call    loc_1406A4F1F
 * 00000001406A4F31: add     rsp, 8
 * 00000001406A4F35: call    loc_1406A4F28
 * 00000001406A4F3A: add     rsp, 8
 * 00000001406A4F3E: call    loc_1406A4F31
 * 00000001406A4F43: add     rsp, 8
 * 00000001406A4F47: call    loc_1406A4F3A
 * 00000001406A4F4C: add     rsp, 8
 * 00000001406A4F50: call    loc_1406A4F43
 * 00000001406A4F55: add     rsp, 8
 * 00000001406A4F59: call    loc_1406A4F4C
 * 00000001406A4F5E: add     rsp, 8
 * 00000001406A4F62: call    loc_1406A4F55
 * 00000001406A4F67: add     rsp, 8
 * 00000001406A4F6B: call    loc_1406A4F5E
 * 00000001406A4F70: add     rsp, 8
 * 00000001406A4F74: call    loc_1406A4F67
 * 00000001406A4F79: add     rsp, 8
 * 00000001406A4F7D: call    loc_1406A4F70
 * 00000001406A4F82: add     rsp, 8
 * 00000001406A4F86: call    loc_1406A4F79
 * 00000001406A4F8B: add     rsp, 8
 * 00000001406A4F8F: call    loc_1406A4F82
 * 00000001406A4F94: add     rsp, 8
 * 00000001406A4F98: call    loc_1406A4F8B
 * 00000001406A4F9D: add     rsp, 8
 * 00000001406A4FA1: call    loc_1406A4F94
 * 00000001406A4FA6: add     rsp, 8
 * 00000001406A4FAA: call    loc_1406A4F9D
 * 00000001406A4FAF: add     rsp, 8
 * 00000001406A4FB3: call    loc_1406A4FA6
 * 00000001406A4FB8: add     rsp, 8
 * 00000001406A4FBC: call    loc_1406A4FAF
 * 00000001406A4FC1: add     rsp, 8
 * 00000001406A4FC5: mov     eax, 0DADAh
 * 00000001406A4FCA: test    byte ptr gs:85Ch, 8
 * 00000001406A4FD3: jz      short loc_1406A4FDC
 * 00000001406A4FD5: mov     al, 20h ; ' '
 * 00000001406A4FD7: incsspq rax
 * 00000001406A4FDC: test    edx, 80h
 * 00000001406A4FE2: jz      short loc_1406A4FEC
 * 00000001406A4FE4: lfence
 * 00000001406A4FE7: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A4FEC: lfence
 * 00000001406A4FEF: mov     byte ptr gs:85Eh, 0
 * 00000001406A4FF8: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A4FFF: jz      short loc_1406A5020
 * 00000001406A5001: mov     ecx, 6A7h
 * 00000001406A5006: rdmsr
 * 00000001406A5008: cmp     edx, 0
 * 00000001406A500B: jz      short loc_1406A5020
 * 00000001406A500D: mov     ecx, edx
 * 00000001406A500F: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A5015: cmp     edx, ecx
 * 00000001406A5017: jz      short loc_1406A5020
 * 00000001406A5019: mov     ecx, 6A7h
 * 00000001406A501E: wrmsr
 * 00000001406A5020: test    byte ptr [r10+3], 3
 * 00000001406A5025: mov     word ptr [rbp+80h], 0
 * 00000001406A502E: jz      short loc_1406A5035
 * 00000001406A5030: call    KiSaveDebugRegisterState
 * 00000001406A5035: cld
 * 00000001406A5036: stmxcsr dword ptr [rbp-54h]
 * 00000001406A503A: ldmxcsr dword ptr gs:180h
 * 00000001406A5043: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406A5047: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406A504B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406A504F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406A5053: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406A5057: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406A505B: test    byte ptr [rbp+0F0h], 1
 * 00000001406A5062: jz      short loc_1406A5069
 * 00000001406A5064: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A5069: cmp     byte ptr gs:87DAh, 0
 * 00000001406A5072: jz      short loc_1406A5079
 * 00000001406A5074: call    KeWakeProcessor
 * 00000001406A5079: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406A5080: cmp     rax, [rbp+0E8h]
 * 00000001406A5087: jnb     short loc_1406A50A2
 * 00000001406A5089: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406A5090: cmp     rax, [rbp+0E8h]
 * 00000001406A5097: jb      short loc_1406A50A2
 * 00000001406A5099: lea     rcx, [rbp-80h]
 * 00000001406A509D: call    KiCheckForSListAddress
 * 00000001406A50A2: xor     esi, esi
 * 00000001406A50A4: inc     dword ptr gs:87C0h
 * 00000001406A50AC: jmp     KiVmbusInterruptDispatch
 */
