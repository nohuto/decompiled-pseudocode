/*
 * XREFs of KiStackFault @ 0x1406BA340
 * Callers:
 *     KiStackFaultShadow @ 0x140BBD740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x1406BA340 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x1406BA340
 * Reason: Hex-Rays returned no pseudocode for 0x1406BA340
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BA340: push    rbp
 * 00000001406BA341: sub     rsp, 158h
 * 00000001406BA348: lea     rbp, [rsp+80h]
 * 00000001406BA350: mov     [rbp+0D8h+var_12D], 1
 * 00000001406BA354: mov     [rbp+0D8h+var_128], rax
 * 00000001406BA358: mov     [rbp+0D8h+var_120], rcx
 * 00000001406BA35C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406BA360: mov     [rbp+0D8h+var_110], r8
 * 00000001406BA364: mov     [rbp+0D8h+var_108], r9
 * 00000001406BA368: mov     [rbp+0D8h+var_100], r10
 * 00000001406BA36C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406BA370: test    [rbp+0D8h+arg_8], 1
 * 00000001406BA377: jnz     short loc_1406BA3B1
 * 00000001406BA379: xor     edx, edx
 * 00000001406BA37B: rdsspq  rdx
 * 00000001406BA380: mov     [rbp+0D8h+var_80], rdx
 * 00000001406BA384: lfence
 * 00000001406BA387: test    byte ptr gs:858h, 1
 * 00000001406BA390: jnz     short loc_1406BA39A
 * 00000001406BA392: lfence
 * 00000001406BA395: jmp     loc_1406BA622
 * 00000001406BA39A: movzx   eax, word ptr gs:866h
 * 00000001406BA3A3: mov     ecx, 48h ; 'H'
 * 00000001406BA3A8: xor     edx, edx
 * 00000001406BA3AA: wrmsr
 * 00000001406BA3AC: jmp     loc_1406BA622
 * 00000001406BA3B1: test    cs:KiKvaShadow, 1
 * 00000001406BA3B8: jnz     short loc_1406BA3BD
 * 00000001406BA3BA: swapgs
 * 00000001406BA3BD: lfence
 * 00000001406BA3C0: mov     rcx, gs:9D28h
 * 00000001406BA3C9: test    rcx, rcx
 * 00000001406BA3CC: jz      short loc_1406BA3ED
 * 00000001406BA3CE: rdsspq  rdx
 * 00000001406BA3D3: mov     r10, gs:9D20h
 * 00000001406BA3DC: add     r10, 8
 * 00000001406BA3E0: cmp     rdx, r10
 * 00000001406BA3E3: jnz     short loc_1406BA3ED
 * 00000001406BA3E5: rstorssp qword ptr [rcx]
 * 00000001406BA3E9: saveprevssp
 * 00000001406BA3ED: mov     r10, gs:188h
 * 00000001406BA3F6: mov     rcx, gs:188h
 * 00000001406BA3FF: mov     rcx, [rcx+220h]
 * 00000001406BA406: mov     rcx, [rcx+760h]
 * 00000001406BA40D: mov     gs:850h, rcx
 * 00000001406BA416: mov     cx, gs:862h
 * 00000001406BA41F: mov     gs:864h, cx
 * 00000001406BA428: mov     cl, gs:858h
 * 00000001406BA430: mov     gs:85Ah, cl
 * 00000001406BA438: movzx   eax, word ptr gs:868h
 * 00000001406BA441: cmp     gs:866h, ax
 * 00000001406BA44A: jz      short loc_1406BA45E
 * 00000001406BA44C: mov     gs:866h, ax
 * 00000001406BA455: mov     ecx, 48h ; 'H'
 * 00000001406BA45A: xor     edx, edx
 * 00000001406BA45C: wrmsr
 * 00000001406BA45E: movzx   edx, byte ptr gs:858h
 * 00000001406BA467: test    edx, 8
 * 00000001406BA46D: jz      short loc_1406BA486
 * 00000001406BA46F: mov     eax, 1
 * 00000001406BA474: xor     edx, edx
 * 00000001406BA476: mov     ecx, 49h ; 'I'
 * 00000001406BA47B: wrmsr
 * 00000001406BA47D: movzx   edx, byte ptr gs:858h
 * 00000001406BA486: test    edx, 2
 * 00000001406BA48C: jz      loc_1406BA5C9
 * 00000001406BA492: call    loc_1406BA5A5
 * 00000001406BA497: add     rsp, 8
 * 00000001406BA49B: call    loc_1406BA5AE
 * 00000001406BA4A0: add     rsp, 8
 * 00000001406BA4A4: call    loc_1406BA497
 * 00000001406BA4A9: add     rsp, 8
 * 00000001406BA4AD: call    loc_1406BA4A0
 * 00000001406BA4B2: add     rsp, 8
 * 00000001406BA4B6: call    loc_1406BA4A9
 * 00000001406BA4BB: add     rsp, 8
 * 00000001406BA4BF: call    loc_1406BA4B2
 * 00000001406BA4C4: add     rsp, 8
 * 00000001406BA4C8: call    loc_1406BA4BB
 * 00000001406BA4CD: add     rsp, 8
 * 00000001406BA4D1: call    loc_1406BA4C4
 * 00000001406BA4D6: add     rsp, 8
 * 00000001406BA4DA: call    loc_1406BA4CD
 * 00000001406BA4DF: add     rsp, 8
 * 00000001406BA4E3: call    loc_1406BA4D6
 * 00000001406BA4E8: add     rsp, 8
 * 00000001406BA4EC: call    loc_1406BA4DF
 * 00000001406BA4F1: add     rsp, 8
 * 00000001406BA4F5: call    loc_1406BA4E8
 * 00000001406BA4FA: add     rsp, 8
 * 00000001406BA4FE: call    loc_1406BA4F1
 * 00000001406BA503: add     rsp, 8
 * 00000001406BA507: call    loc_1406BA4FA
 * 00000001406BA50C: add     rsp, 8
 * 00000001406BA510: call    loc_1406BA503
 * 00000001406BA515: add     rsp, 8
 * 00000001406BA519: call    loc_1406BA50C
 * 00000001406BA51E: add     rsp, 8
 * 00000001406BA522: call    loc_1406BA515
 * 00000001406BA527: add     rsp, 8
 * 00000001406BA52B: call    loc_1406BA51E
 * 00000001406BA530: add     rsp, 8
 * 00000001406BA534: call    loc_1406BA527
 * 00000001406BA539: add     rsp, 8
 * 00000001406BA53D: call    loc_1406BA530
 * 00000001406BA542: add     rsp, 8
 * 00000001406BA546: call    loc_1406BA539
 * 00000001406BA54B: add     rsp, 8
 * 00000001406BA54F: call    loc_1406BA542
 * 00000001406BA554: add     rsp, 8
 * 00000001406BA558: call    loc_1406BA54B
 * 00000001406BA55D: add     rsp, 8
 * 00000001406BA561: call    loc_1406BA554
 * 00000001406BA566: add     rsp, 8
 * 00000001406BA56A: call    loc_1406BA55D
 * 00000001406BA56F: add     rsp, 8
 * 00000001406BA573: call    loc_1406BA566
 * 00000001406BA578: add     rsp, 8
 * 00000001406BA57C: call    loc_1406BA56F
 * 00000001406BA581: add     rsp, 8
 * 00000001406BA585: call    loc_1406BA578
 * 00000001406BA58A: add     rsp, 8
 * 00000001406BA58E: call    loc_1406BA581
 * 00000001406BA593: add     rsp, 8
 * 00000001406BA597: call    loc_1406BA58A
 * 00000001406BA59C: add     rsp, 8
 * 00000001406BA5A0: call    loc_1406BA593
 * 00000001406BA5A5: add     rsp, 8
 * 00000001406BA5A9: call    loc_1406BA59C
 * 00000001406BA5AE: add     rsp, 8
 * 00000001406BA5B2: mov     eax, 0DADAh
 * 00000001406BA5B7: test    byte ptr gs:85Ch, 8
 * 00000001406BA5C0: jz      short loc_1406BA5C9
 * 00000001406BA5C2: mov     al, 20h ; ' '
 * 00000001406BA5C4: incsspq rax
 * 00000001406BA5C9: test    edx, 80h
 * 00000001406BA5CF: jz      short loc_1406BA5D9
 * 00000001406BA5D1: lfence
 * 00000001406BA5D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BA5D9: lfence
 * 00000001406BA5DC: mov     byte ptr gs:85Eh, 0
 * 00000001406BA5E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BA5EC: jz      short loc_1406BA60D
 * 00000001406BA5EE: mov     ecx, 6A7h
 * 00000001406BA5F3: rdmsr
 * 00000001406BA5F5: cmp     edx, 0
 * 00000001406BA5F8: jz      short loc_1406BA60D
 * 00000001406BA5FA: mov     ecx, edx
 * 00000001406BA5FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BA602: cmp     edx, ecx
 * 00000001406BA604: jz      short loc_1406BA60D
 * 00000001406BA606: mov     ecx, 6A7h
 * 00000001406BA60B: wrmsr
 * 00000001406BA60D: test    byte ptr [r10+3], 3
 * 00000001406BA612: mov     [rbp+0D8h+var_58], 0
 * 00000001406BA61B: jz      short loc_1406BA622
 * 00000001406BA61D: call    KiSaveDebugRegisterState
 * 00000001406BA622: cld
 * 00000001406BA623: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406BA627: ldmxcsr dword ptr gs:180h
 * 00000001406BA630: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406BA634: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406BA638: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406BA63C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406BA640: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406BA644: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406BA648: test    [rbp+0D8h+arg_8], 1
 * 00000001406BA64F: jz      short loc_1406BA656
 * 00000001406BA651: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BA656: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BA65D: jz      short loc_1406BA66B
 * 00000001406BA65F: test    [rbp+0D8h+arg_8], 1
 * 00000001406BA666: jz      short loc_1406BA66B
 * 00000001406BA668: stac
 * 00000001406BA66B: mov     eax, [rbp+0E0h]
 * 00000001406BA671: test    [rbp+0D8h+arg_10], 200h
 * 00000001406BA67B: jz      short loc_1406BA67E
 * 00000001406BA67D: sti
 * 00000001406BA67E: mov     ecx, 0C0000005h
 * 00000001406BA683: mov     edx, 2
 * 00000001406BA688: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406BA68F: mov     r9d, [rbp+0E0h]
 * 00000001406BA696: or      r9d, 3
 * 00000001406BA69A: and     r9d, 0FFFFh
 * 00000001406BA6A1: test    [rbp+0D8h+arg_8], 1
 * 00000001406BA6A8: jnz     short loc_1406BA6AE
 * 00000001406BA6AA: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001406BA6AE: xor     r10, r10
 * 00000001406BA6B1: call    KiExceptionDispatch
 * 00000001406BA6B6: nop
 * 00000001406BA6B7: retn
 */
