/*
 * XREFs of KiGeneralProtectionFault @ 0x1406AE4C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140BAA7C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x1406AE4C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x1406AE4C0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AE4C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AE4C0: push    rbp
 * 00000001406AE4C1: sub     rsp, 158h
 * 00000001406AE4C8: lea     rbp, [rsp+80h]
 * 00000001406AE4D0: mov     [rbp+0D8h+var_12D], 1
 * 00000001406AE4D4: mov     [rbp+0D8h+var_128], rax
 * 00000001406AE4D8: mov     [rbp+0D8h+var_120], rcx
 * 00000001406AE4DC: mov     [rbp+0D8h+var_118], rdx
 * 00000001406AE4E0: mov     [rbp+0D8h+var_110], r8
 * 00000001406AE4E4: mov     [rbp+0D8h+var_108], r9
 * 00000001406AE4E8: mov     [rbp+0D8h+var_100], r10
 * 00000001406AE4EC: mov     [rbp+0D8h+var_F8], r11
 * 00000001406AE4F0: test    [rbp+0D8h+arg_8], 1
 * 00000001406AE4F7: jnz     short loc_1406AE531
 * 00000001406AE4F9: xor     edx, edx
 * 00000001406AE4FB: rdsspq  rdx
 * 00000001406AE500: mov     [rbp+0D8h+var_80], rdx
 * 00000001406AE504: lfence
 * 00000001406AE507: test    byte ptr gs:858h, 1
 * 00000001406AE510: jnz     short loc_1406AE51A
 * 00000001406AE512: lfence
 * 00000001406AE515: jmp     loc_1406AE7A2
 * 00000001406AE51A: movzx   eax, word ptr gs:866h
 * 00000001406AE523: mov     ecx, 48h ; 'H'
 * 00000001406AE528: xor     edx, edx
 * 00000001406AE52A: wrmsr
 * 00000001406AE52C: jmp     loc_1406AE7A2
 * 00000001406AE531: test    cs:KiKvaShadow, 1
 * 00000001406AE538: jnz     short loc_1406AE53D
 * 00000001406AE53A: swapgs
 * 00000001406AE53D: lfence
 * 00000001406AE540: mov     rcx, gs:9D28h
 * 00000001406AE549: test    rcx, rcx
 * 00000001406AE54C: jz      short loc_1406AE56D
 * 00000001406AE54E: rdsspq  rdx
 * 00000001406AE553: mov     r10, gs:9D20h
 * 00000001406AE55C: add     r10, 8
 * 00000001406AE560: cmp     rdx, r10
 * 00000001406AE563: jnz     short loc_1406AE56D
 * 00000001406AE565: rstorssp qword ptr [rcx]
 * 00000001406AE569: saveprevssp
 * 00000001406AE56D: mov     r10, gs:188h
 * 00000001406AE576: mov     rcx, gs:188h
 * 00000001406AE57F: mov     rcx, [rcx+220h]
 * 00000001406AE586: mov     rcx, [rcx+760h]
 * 00000001406AE58D: mov     gs:850h, rcx
 * 00000001406AE596: mov     cx, gs:862h
 * 00000001406AE59F: mov     gs:864h, cx
 * 00000001406AE5A8: mov     cl, gs:858h
 * 00000001406AE5B0: mov     gs:85Ah, cl
 * 00000001406AE5B8: movzx   eax, word ptr gs:868h
 * 00000001406AE5C1: cmp     gs:866h, ax
 * 00000001406AE5CA: jz      short loc_1406AE5DE
 * 00000001406AE5CC: mov     gs:866h, ax
 * 00000001406AE5D5: mov     ecx, 48h ; 'H'
 * 00000001406AE5DA: xor     edx, edx
 * 00000001406AE5DC: wrmsr
 * 00000001406AE5DE: movzx   edx, byte ptr gs:858h
 * 00000001406AE5E7: test    edx, 8
 * 00000001406AE5ED: jz      short loc_1406AE606
 * 00000001406AE5EF: mov     eax, 1
 * 00000001406AE5F4: xor     edx, edx
 * 00000001406AE5F6: mov     ecx, 49h ; 'I'
 * 00000001406AE5FB: wrmsr
 * 00000001406AE5FD: movzx   edx, byte ptr gs:858h
 * 00000001406AE606: test    edx, 2
 * 00000001406AE60C: jz      loc_1406AE749
 * 00000001406AE612: call    loc_1406AE725
 * 00000001406AE617: add     rsp, 8
 * 00000001406AE61B: call    loc_1406AE72E
 * 00000001406AE620: add     rsp, 8
 * 00000001406AE624: call    loc_1406AE617
 * 00000001406AE629: add     rsp, 8
 * 00000001406AE62D: call    loc_1406AE620
 * 00000001406AE632: add     rsp, 8
 * 00000001406AE636: call    loc_1406AE629
 * 00000001406AE63B: add     rsp, 8
 * 00000001406AE63F: call    loc_1406AE632
 * 00000001406AE644: add     rsp, 8
 * 00000001406AE648: call    loc_1406AE63B
 * 00000001406AE64D: add     rsp, 8
 * 00000001406AE651: call    loc_1406AE644
 * 00000001406AE656: add     rsp, 8
 * 00000001406AE65A: call    loc_1406AE64D
 * 00000001406AE65F: add     rsp, 8
 * 00000001406AE663: call    loc_1406AE656
 * 00000001406AE668: add     rsp, 8
 * 00000001406AE66C: call    loc_1406AE65F
 * 00000001406AE671: add     rsp, 8
 * 00000001406AE675: call    loc_1406AE668
 * 00000001406AE67A: add     rsp, 8
 * 00000001406AE67E: call    loc_1406AE671
 * 00000001406AE683: add     rsp, 8
 * 00000001406AE687: call    loc_1406AE67A
 * 00000001406AE68C: add     rsp, 8
 * 00000001406AE690: call    loc_1406AE683
 * 00000001406AE695: add     rsp, 8
 * 00000001406AE699: call    loc_1406AE68C
 * 00000001406AE69E: add     rsp, 8
 * 00000001406AE6A2: call    loc_1406AE695
 * 00000001406AE6A7: add     rsp, 8
 * 00000001406AE6AB: call    loc_1406AE69E
 * 00000001406AE6B0: add     rsp, 8
 * 00000001406AE6B4: call    loc_1406AE6A7
 * 00000001406AE6B9: add     rsp, 8
 * 00000001406AE6BD: call    loc_1406AE6B0
 * 00000001406AE6C2: add     rsp, 8
 * 00000001406AE6C6: call    loc_1406AE6B9
 * 00000001406AE6CB: add     rsp, 8
 * 00000001406AE6CF: call    loc_1406AE6C2
 * 00000001406AE6D4: add     rsp, 8
 * 00000001406AE6D8: call    loc_1406AE6CB
 * 00000001406AE6DD: add     rsp, 8
 * 00000001406AE6E1: call    loc_1406AE6D4
 * 00000001406AE6E6: add     rsp, 8
 * 00000001406AE6EA: call    loc_1406AE6DD
 * 00000001406AE6EF: add     rsp, 8
 * 00000001406AE6F3: call    loc_1406AE6E6
 * 00000001406AE6F8: add     rsp, 8
 * 00000001406AE6FC: call    loc_1406AE6EF
 * 00000001406AE701: add     rsp, 8
 * 00000001406AE705: call    loc_1406AE6F8
 * 00000001406AE70A: add     rsp, 8
 * 00000001406AE70E: call    loc_1406AE701
 * 00000001406AE713: add     rsp, 8
 * 00000001406AE717: call    loc_1406AE70A
 * 00000001406AE71C: add     rsp, 8
 * 00000001406AE720: call    loc_1406AE713
 * 00000001406AE725: add     rsp, 8
 * 00000001406AE729: call    loc_1406AE71C
 * 00000001406AE72E: add     rsp, 8
 * 00000001406AE732: mov     eax, 0DADAh
 * 00000001406AE737: test    byte ptr gs:85Ch, 8
 * 00000001406AE740: jz      short loc_1406AE749
 * 00000001406AE742: mov     al, 20h ; ' '
 * 00000001406AE744: incsspq rax
 * 00000001406AE749: test    edx, 80h
 * 00000001406AE74F: jz      short loc_1406AE759
 * 00000001406AE751: lfence
 * 00000001406AE754: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AE759: lfence
 * 00000001406AE75C: mov     byte ptr gs:85Eh, 0
 * 00000001406AE765: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AE76C: jz      short loc_1406AE78D
 * 00000001406AE76E: mov     ecx, 6A7h
 * 00000001406AE773: rdmsr
 * 00000001406AE775: cmp     edx, 0
 * 00000001406AE778: jz      short loc_1406AE78D
 * 00000001406AE77A: mov     ecx, edx
 * 00000001406AE77C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AE782: cmp     edx, ecx
 * 00000001406AE784: jz      short loc_1406AE78D
 * 00000001406AE786: mov     ecx, 6A7h
 * 00000001406AE78B: wrmsr
 * 00000001406AE78D: test    byte ptr [r10+3], 3
 * 00000001406AE792: mov     [rbp+0D8h+var_58], 0
 * 00000001406AE79B: jz      short loc_1406AE7A2
 * 00000001406AE79D: call    KiSaveDebugRegisterState
 * 00000001406AE7A2: cld
 * 00000001406AE7A3: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406AE7A7: ldmxcsr dword ptr gs:180h
 * 00000001406AE7B0: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406AE7B4: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406AE7B8: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406AE7BC: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406AE7C0: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406AE7C4: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406AE7C8: test    [rbp+0D8h+arg_8], 1
 * 00000001406AE7CF: jz      short loc_1406AE7D6
 * 00000001406AE7D1: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AE7D6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AE7DD: jz      short loc_1406AE7EB
 * 00000001406AE7DF: test    [rbp+0D8h+arg_8], 1
 * 00000001406AE7E6: jz      short loc_1406AE7EB
 * 00000001406AE7E8: stac
 * 00000001406AE7EB: mov     eax, [rbp+0E0h]
 * 00000001406AE7F1: test    [rbp+0D8h+arg_10], 200h
 * 00000001406AE7FB: jz      short loc_1406AE7FE
 * 00000001406AE7FD: sti
 * 00000001406AE7FE: mov     ecx, 10000001h
 * 00000001406AE803: mov     edx, 2
 * 00000001406AE808: mov     r9d, [rbp+0E0h]
 * 00000001406AE80F: and     r9d, 0FFFFh
 * 00000001406AE816: xor     r10, r10
 * 00000001406AE819: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406AE820: call    KiExceptionDispatch
 * 00000001406AE825: nop
 * 00000001406AE826: retn
 */
