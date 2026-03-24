/*
 * XREFs of KiAlignmentFault @ 0x1406AF440
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140BAA940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x1406AF440 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x1406AF440
 * Reason: Hex-Rays returned no pseudocode for 0x1406AF440
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AF440: push    rbp
 * 00000001406AF441: sub     rsp, 158h
 * 00000001406AF448: lea     rbp, [rsp+80h]
 * 00000001406AF450: mov     [rbp+0D8h+var_12D], 1
 * 00000001406AF454: mov     [rbp+0D8h+var_128], rax
 * 00000001406AF458: mov     [rbp+0D8h+var_120], rcx
 * 00000001406AF45C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406AF460: mov     [rbp+0D8h+var_110], r8
 * 00000001406AF464: mov     [rbp+0D8h+var_108], r9
 * 00000001406AF468: mov     [rbp+0D8h+var_100], r10
 * 00000001406AF46C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406AF470: test    [rbp+0D8h+arg_8], 1
 * 00000001406AF477: jnz     short loc_1406AF4B1
 * 00000001406AF479: xor     edx, edx
 * 00000001406AF47B: rdsspq  rdx
 * 00000001406AF480: mov     [rbp+0D8h+var_80], rdx
 * 00000001406AF484: lfence
 * 00000001406AF487: test    byte ptr gs:858h, 1
 * 00000001406AF490: jnz     short loc_1406AF49A
 * 00000001406AF492: lfence
 * 00000001406AF495: jmp     loc_1406AF722
 * 00000001406AF49A: movzx   eax, word ptr gs:866h
 * 00000001406AF4A3: mov     ecx, 48h ; 'H'
 * 00000001406AF4A8: xor     edx, edx
 * 00000001406AF4AA: wrmsr
 * 00000001406AF4AC: jmp     loc_1406AF722
 * 00000001406AF4B1: test    cs:KiKvaShadow, 1
 * 00000001406AF4B8: jnz     short loc_1406AF4BD
 * 00000001406AF4BA: swapgs
 * 00000001406AF4BD: lfence
 * 00000001406AF4C0: mov     rcx, gs:9D28h
 * 00000001406AF4C9: test    rcx, rcx
 * 00000001406AF4CC: jz      short loc_1406AF4ED
 * 00000001406AF4CE: rdsspq  rdx
 * 00000001406AF4D3: mov     r10, gs:9D20h
 * 00000001406AF4DC: add     r10, 8
 * 00000001406AF4E0: cmp     rdx, r10
 * 00000001406AF4E3: jnz     short loc_1406AF4ED
 * 00000001406AF4E5: rstorssp qword ptr [rcx]
 * 00000001406AF4E9: saveprevssp
 * 00000001406AF4ED: mov     r10, gs:188h
 * 00000001406AF4F6: mov     rcx, gs:188h
 * 00000001406AF4FF: mov     rcx, [rcx+220h]
 * 00000001406AF506: mov     rcx, [rcx+760h]
 * 00000001406AF50D: mov     gs:850h, rcx
 * 00000001406AF516: mov     cx, gs:862h
 * 00000001406AF51F: mov     gs:864h, cx
 * 00000001406AF528: mov     cl, gs:858h
 * 00000001406AF530: mov     gs:85Ah, cl
 * 00000001406AF538: movzx   eax, word ptr gs:868h
 * 00000001406AF541: cmp     gs:866h, ax
 * 00000001406AF54A: jz      short loc_1406AF55E
 * 00000001406AF54C: mov     gs:866h, ax
 * 00000001406AF555: mov     ecx, 48h ; 'H'
 * 00000001406AF55A: xor     edx, edx
 * 00000001406AF55C: wrmsr
 * 00000001406AF55E: movzx   edx, byte ptr gs:858h
 * 00000001406AF567: test    edx, 8
 * 00000001406AF56D: jz      short loc_1406AF586
 * 00000001406AF56F: mov     eax, 1
 * 00000001406AF574: xor     edx, edx
 * 00000001406AF576: mov     ecx, 49h ; 'I'
 * 00000001406AF57B: wrmsr
 * 00000001406AF57D: movzx   edx, byte ptr gs:858h
 * 00000001406AF586: test    edx, 2
 * 00000001406AF58C: jz      loc_1406AF6C9
 * 00000001406AF592: call    loc_1406AF6A5
 * 00000001406AF597: add     rsp, 8
 * 00000001406AF59B: call    loc_1406AF6AE
 * 00000001406AF5A0: add     rsp, 8
 * 00000001406AF5A4: call    loc_1406AF597
 * 00000001406AF5A9: add     rsp, 8
 * 00000001406AF5AD: call    loc_1406AF5A0
 * 00000001406AF5B2: add     rsp, 8
 * 00000001406AF5B6: call    loc_1406AF5A9
 * 00000001406AF5BB: add     rsp, 8
 * 00000001406AF5BF: call    loc_1406AF5B2
 * 00000001406AF5C4: add     rsp, 8
 * 00000001406AF5C8: call    loc_1406AF5BB
 * 00000001406AF5CD: add     rsp, 8
 * 00000001406AF5D1: call    loc_1406AF5C4
 * 00000001406AF5D6: add     rsp, 8
 * 00000001406AF5DA: call    loc_1406AF5CD
 * 00000001406AF5DF: add     rsp, 8
 * 00000001406AF5E3: call    loc_1406AF5D6
 * 00000001406AF5E8: add     rsp, 8
 * 00000001406AF5EC: call    loc_1406AF5DF
 * 00000001406AF5F1: add     rsp, 8
 * 00000001406AF5F5: call    loc_1406AF5E8
 * 00000001406AF5FA: add     rsp, 8
 * 00000001406AF5FE: call    loc_1406AF5F1
 * 00000001406AF603: add     rsp, 8
 * 00000001406AF607: call    loc_1406AF5FA
 * 00000001406AF60C: add     rsp, 8
 * 00000001406AF610: call    loc_1406AF603
 * 00000001406AF615: add     rsp, 8
 * 00000001406AF619: call    loc_1406AF60C
 * 00000001406AF61E: add     rsp, 8
 * 00000001406AF622: call    loc_1406AF615
 * 00000001406AF627: add     rsp, 8
 * 00000001406AF62B: call    loc_1406AF61E
 * 00000001406AF630: add     rsp, 8
 * 00000001406AF634: call    loc_1406AF627
 * 00000001406AF639: add     rsp, 8
 * 00000001406AF63D: call    loc_1406AF630
 * 00000001406AF642: add     rsp, 8
 * 00000001406AF646: call    loc_1406AF639
 * 00000001406AF64B: add     rsp, 8
 * 00000001406AF64F: call    loc_1406AF642
 * 00000001406AF654: add     rsp, 8
 * 00000001406AF658: call    loc_1406AF64B
 * 00000001406AF65D: add     rsp, 8
 * 00000001406AF661: call    loc_1406AF654
 * 00000001406AF666: add     rsp, 8
 * 00000001406AF66A: call    loc_1406AF65D
 * 00000001406AF66F: add     rsp, 8
 * 00000001406AF673: call    loc_1406AF666
 * 00000001406AF678: add     rsp, 8
 * 00000001406AF67C: call    loc_1406AF66F
 * 00000001406AF681: add     rsp, 8
 * 00000001406AF685: call    loc_1406AF678
 * 00000001406AF68A: add     rsp, 8
 * 00000001406AF68E: call    loc_1406AF681
 * 00000001406AF693: add     rsp, 8
 * 00000001406AF697: call    loc_1406AF68A
 * 00000001406AF69C: add     rsp, 8
 * 00000001406AF6A0: call    loc_1406AF693
 * 00000001406AF6A5: add     rsp, 8
 * 00000001406AF6A9: call    loc_1406AF69C
 * 00000001406AF6AE: add     rsp, 8
 * 00000001406AF6B2: mov     eax, 0DADAh
 * 00000001406AF6B7: test    byte ptr gs:85Ch, 8
 * 00000001406AF6C0: jz      short loc_1406AF6C9
 * 00000001406AF6C2: mov     al, 20h ; ' '
 * 00000001406AF6C4: incsspq rax
 * 00000001406AF6C9: test    edx, 80h
 * 00000001406AF6CF: jz      short loc_1406AF6D9
 * 00000001406AF6D1: lfence
 * 00000001406AF6D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AF6D9: lfence
 * 00000001406AF6DC: mov     byte ptr gs:85Eh, 0
 * 00000001406AF6E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AF6EC: jz      short loc_1406AF70D
 * 00000001406AF6EE: mov     ecx, 6A7h
 * 00000001406AF6F3: rdmsr
 * 00000001406AF6F5: cmp     edx, 0
 * 00000001406AF6F8: jz      short loc_1406AF70D
 * 00000001406AF6FA: mov     ecx, edx
 * 00000001406AF6FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AF702: cmp     edx, ecx
 * 00000001406AF704: jz      short loc_1406AF70D
 * 00000001406AF706: mov     ecx, 6A7h
 * 00000001406AF70B: wrmsr
 * 00000001406AF70D: test    byte ptr [r10+3], 3
 * 00000001406AF712: mov     [rbp+0D8h+var_58], 0
 * 00000001406AF71B: jz      short loc_1406AF722
 * 00000001406AF71D: call    KiSaveDebugRegisterState
 * 00000001406AF722: cld
 * 00000001406AF723: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406AF727: ldmxcsr dword ptr gs:180h
 * 00000001406AF730: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406AF734: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406AF738: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406AF73C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406AF740: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406AF744: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406AF748: test    [rbp+0D8h+arg_8], 1
 * 00000001406AF74F: jz      short loc_1406AF756
 * 00000001406AF751: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AF756: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AF75D: jz      short loc_1406AF76B
 * 00000001406AF75F: test    [rbp+0D8h+arg_8], 1
 * 00000001406AF766: jz      short loc_1406AF76B
 * 00000001406AF768: stac
 * 00000001406AF76B: mov     eax, [rbp+0E0h]
 * 00000001406AF771: test    [rbp+0D8h+arg_10], 200h
 * 00000001406AF77B: jz      short loc_1406AF77E
 * 00000001406AF77D: sti
 * 00000001406AF77E: mov     ecx, 80000002h
 * 00000001406AF783: xor     edx, edx
 * 00000001406AF785: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406AF78C: call    KiExceptionDispatch
 * 00000001406AF791: nop
 * 00000001406AF792: retn
 */
