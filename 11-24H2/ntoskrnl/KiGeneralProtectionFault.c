/*
 * XREFs of KiGeneralProtectionFault @ 0x1406B97C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140BBB7C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x1406B97C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x1406B97C0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B97C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B97C0: push    rbp
 * 00000001406B97C1: sub     rsp, 158h
 * 00000001406B97C8: lea     rbp, [rsp+80h]
 * 00000001406B97D0: mov     [rbp+0D8h+var_12D], 1
 * 00000001406B97D4: mov     [rbp+0D8h+var_128], rax
 * 00000001406B97D8: mov     [rbp+0D8h+var_120], rcx
 * 00000001406B97DC: mov     [rbp+0D8h+var_118], rdx
 * 00000001406B97E0: mov     [rbp+0D8h+var_110], r8
 * 00000001406B97E4: mov     [rbp+0D8h+var_108], r9
 * 00000001406B97E8: mov     [rbp+0D8h+var_100], r10
 * 00000001406B97EC: mov     [rbp+0D8h+var_F8], r11
 * 00000001406B97F0: test    [rbp+0D8h+arg_8], 1
 * 00000001406B97F7: jnz     short loc_1406B9831
 * 00000001406B97F9: xor     edx, edx
 * 00000001406B97FB: rdsspq  rdx
 * 00000001406B9800: mov     [rbp+0D8h+var_80], rdx
 * 00000001406B9804: lfence
 * 00000001406B9807: test    byte ptr gs:858h, 1
 * 00000001406B9810: jnz     short loc_1406B981A
 * 00000001406B9812: lfence
 * 00000001406B9815: jmp     loc_1406B9AA2
 * 00000001406B981A: movzx   eax, word ptr gs:866h
 * 00000001406B9823: mov     ecx, 48h ; 'H'
 * 00000001406B9828: xor     edx, edx
 * 00000001406B982A: wrmsr
 * 00000001406B982C: jmp     loc_1406B9AA2
 * 00000001406B9831: test    cs:KiKvaShadow, 1
 * 00000001406B9838: jnz     short loc_1406B983D
 * 00000001406B983A: swapgs
 * 00000001406B983D: lfence
 * 00000001406B9840: mov     rcx, gs:9D28h
 * 00000001406B9849: test    rcx, rcx
 * 00000001406B984C: jz      short loc_1406B986D
 * 00000001406B984E: rdsspq  rdx
 * 00000001406B9853: mov     r10, gs:9D20h
 * 00000001406B985C: add     r10, 8
 * 00000001406B9860: cmp     rdx, r10
 * 00000001406B9863: jnz     short loc_1406B986D
 * 00000001406B9865: rstorssp qword ptr [rcx]
 * 00000001406B9869: saveprevssp
 * 00000001406B986D: mov     r10, gs:188h
 * 00000001406B9876: mov     rcx, gs:188h
 * 00000001406B987F: mov     rcx, [rcx+220h]
 * 00000001406B9886: mov     rcx, [rcx+760h]
 * 00000001406B988D: mov     gs:850h, rcx
 * 00000001406B9896: mov     cx, gs:862h
 * 00000001406B989F: mov     gs:864h, cx
 * 00000001406B98A8: mov     cl, gs:858h
 * 00000001406B98B0: mov     gs:85Ah, cl
 * 00000001406B98B8: movzx   eax, word ptr gs:868h
 * 00000001406B98C1: cmp     gs:866h, ax
 * 00000001406B98CA: jz      short loc_1406B98DE
 * 00000001406B98CC: mov     gs:866h, ax
 * 00000001406B98D5: mov     ecx, 48h ; 'H'
 * 00000001406B98DA: xor     edx, edx
 * 00000001406B98DC: wrmsr
 * 00000001406B98DE: movzx   edx, byte ptr gs:858h
 * 00000001406B98E7: test    edx, 8
 * 00000001406B98ED: jz      short loc_1406B9906
 * 00000001406B98EF: mov     eax, 1
 * 00000001406B98F4: xor     edx, edx
 * 00000001406B98F6: mov     ecx, 49h ; 'I'
 * 00000001406B98FB: wrmsr
 * 00000001406B98FD: movzx   edx, byte ptr gs:858h
 * 00000001406B9906: test    edx, 2
 * 00000001406B990C: jz      loc_1406B9A49
 * 00000001406B9912: call    loc_1406B9A25
 * 00000001406B9917: add     rsp, 8
 * 00000001406B991B: call    loc_1406B9A2E
 * 00000001406B9920: add     rsp, 8
 * 00000001406B9924: call    loc_1406B9917
 * 00000001406B9929: add     rsp, 8
 * 00000001406B992D: call    loc_1406B9920
 * 00000001406B9932: add     rsp, 8
 * 00000001406B9936: call    loc_1406B9929
 * 00000001406B993B: add     rsp, 8
 * 00000001406B993F: call    loc_1406B9932
 * 00000001406B9944: add     rsp, 8
 * 00000001406B9948: call    loc_1406B993B
 * 00000001406B994D: add     rsp, 8
 * 00000001406B9951: call    loc_1406B9944
 * 00000001406B9956: add     rsp, 8
 * 00000001406B995A: call    loc_1406B994D
 * 00000001406B995F: add     rsp, 8
 * 00000001406B9963: call    loc_1406B9956
 * 00000001406B9968: add     rsp, 8
 * 00000001406B996C: call    loc_1406B995F
 * 00000001406B9971: add     rsp, 8
 * 00000001406B9975: call    loc_1406B9968
 * 00000001406B997A: add     rsp, 8
 * 00000001406B997E: call    loc_1406B9971
 * 00000001406B9983: add     rsp, 8
 * 00000001406B9987: call    loc_1406B997A
 * 00000001406B998C: add     rsp, 8
 * 00000001406B9990: call    loc_1406B9983
 * 00000001406B9995: add     rsp, 8
 * 00000001406B9999: call    loc_1406B998C
 * 00000001406B999E: add     rsp, 8
 * 00000001406B99A2: call    loc_1406B9995
 * 00000001406B99A7: add     rsp, 8
 * 00000001406B99AB: call    loc_1406B999E
 * 00000001406B99B0: add     rsp, 8
 * 00000001406B99B4: call    loc_1406B99A7
 * 00000001406B99B9: add     rsp, 8
 * 00000001406B99BD: call    loc_1406B99B0
 * 00000001406B99C2: add     rsp, 8
 * 00000001406B99C6: call    loc_1406B99B9
 * 00000001406B99CB: add     rsp, 8
 * 00000001406B99CF: call    loc_1406B99C2
 * 00000001406B99D4: add     rsp, 8
 * 00000001406B99D8: call    loc_1406B99CB
 * 00000001406B99DD: add     rsp, 8
 * 00000001406B99E1: call    loc_1406B99D4
 * 00000001406B99E6: add     rsp, 8
 * 00000001406B99EA: call    loc_1406B99DD
 * 00000001406B99EF: add     rsp, 8
 * 00000001406B99F3: call    loc_1406B99E6
 * 00000001406B99F8: add     rsp, 8
 * 00000001406B99FC: call    loc_1406B99EF
 * 00000001406B9A01: add     rsp, 8
 * 00000001406B9A05: call    loc_1406B99F8
 * 00000001406B9A0A: add     rsp, 8
 * 00000001406B9A0E: call    loc_1406B9A01
 * 00000001406B9A13: add     rsp, 8
 * 00000001406B9A17: call    loc_1406B9A0A
 * 00000001406B9A1C: add     rsp, 8
 * 00000001406B9A20: call    loc_1406B9A13
 * 00000001406B9A25: add     rsp, 8
 * 00000001406B9A29: call    loc_1406B9A1C
 * 00000001406B9A2E: add     rsp, 8
 * 00000001406B9A32: mov     eax, 0DADAh
 * 00000001406B9A37: test    byte ptr gs:85Ch, 8
 * 00000001406B9A40: jz      short loc_1406B9A49
 * 00000001406B9A42: mov     al, 20h ; ' '
 * 00000001406B9A44: incsspq rax
 * 00000001406B9A49: test    edx, 80h
 * 00000001406B9A4F: jz      short loc_1406B9A59
 * 00000001406B9A51: lfence
 * 00000001406B9A54: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B9A59: lfence
 * 00000001406B9A5C: mov     byte ptr gs:85Eh, 0
 * 00000001406B9A65: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B9A6C: jz      short loc_1406B9A8D
 * 00000001406B9A6E: mov     ecx, 6A7h
 * 00000001406B9A73: rdmsr
 * 00000001406B9A75: cmp     edx, 0
 * 00000001406B9A78: jz      short loc_1406B9A8D
 * 00000001406B9A7A: mov     ecx, edx
 * 00000001406B9A7C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B9A82: cmp     edx, ecx
 * 00000001406B9A84: jz      short loc_1406B9A8D
 * 00000001406B9A86: mov     ecx, 6A7h
 * 00000001406B9A8B: wrmsr
 * 00000001406B9A8D: test    byte ptr [r10+3], 3
 * 00000001406B9A92: mov     [rbp+0D8h+var_58], 0
 * 00000001406B9A9B: jz      short loc_1406B9AA2
 * 00000001406B9A9D: call    KiSaveDebugRegisterState
 * 00000001406B9AA2: cld
 * 00000001406B9AA3: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406B9AA7: ldmxcsr dword ptr gs:180h
 * 00000001406B9AB0: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406B9AB4: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406B9AB8: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406B9ABC: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406B9AC0: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406B9AC4: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406B9AC8: test    [rbp+0D8h+arg_8], 1
 * 00000001406B9ACF: jz      short loc_1406B9AD6
 * 00000001406B9AD1: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B9AD6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B9ADD: jz      short loc_1406B9AEB
 * 00000001406B9ADF: test    [rbp+0D8h+arg_8], 1
 * 00000001406B9AE6: jz      short loc_1406B9AEB
 * 00000001406B9AE8: stac
 * 00000001406B9AEB: mov     eax, [rbp+0E0h]
 * 00000001406B9AF1: test    [rbp+0D8h+arg_10], 200h
 * 00000001406B9AFB: jz      short loc_1406B9AFE
 * 00000001406B9AFD: sti
 * 00000001406B9AFE: mov     ecx, 10000001h
 * 00000001406B9B03: mov     edx, 2
 * 00000001406B9B08: mov     r9d, [rbp+0E0h]
 * 00000001406B9B0F: and     r9d, 0FFFFh
 * 00000001406B9B16: xor     r10, r10
 * 00000001406B9B19: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406B9B20: call    KiExceptionDispatch
 * 00000001406B9B25: nop
 * 00000001406B9B26: retn
 */
