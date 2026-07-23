/*
 * XREFs of KiSystemService @ 0x1406BE540
 * Callers:
 *     KiSystemServiceShadow @ 0x140BBDEC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x1406BE540 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x1406BE540
 * Reason: Hex-Rays returned no pseudocode for 0x1406BE540
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BE540: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406BE546: jz      KiSystemService32User
 * 00000001406BE54C: test    cs:KiKvaShadow, 1
 * 00000001406BE553: jnz     short loc_1406BE558
 * 00000001406BE555: swapgs
 * 00000001406BE558: lfence
 * 00000001406BE55B: mov     rcx, gs:9D28h
 * 00000001406BE564: test    rcx, rcx
 * 00000001406BE567: jz      short loc_1406BE571
 * 00000001406BE569: rstorssp qword ptr [rcx]
 * 00000001406BE56D: saveprevssp
 * 00000001406BE571: mov     rcx, r10
 * 00000001406BE574: sub     rsp, 8
 * 00000001406BE578: push    rbp
 * 00000001406BE579: sub     rsp, 158h
 * 00000001406BE580: lea     rbp, [rsp+168h+var_E8]
 * 00000001406BE588: mov     [rbp+0C0h], rbx
 * 00000001406BE58F: mov     [rbp+0C8h], rdi
 * 00000001406BE596: mov     [rbp+0D0h], rsi
 * 00000001406BE59D: cld
 * 00000001406BE59E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BE5A5: jz      short loc_1406BE5B3
 * 00000001406BE5A7: test    byte ptr [rbp+0F0h], 1
 * 00000001406BE5AE: jz      short loc_1406BE5B3
 * 00000001406BE5B0: stac
 * 00000001406BE5B3: mov     [rbp-50h], rax
 * 00000001406BE5B7: mov     [rbp-48h], rcx
 * 00000001406BE5BB: mov     [rbp-40h], rdx
 * 00000001406BE5BF: mov     rcx, gs:188h
 * 00000001406BE5C8: mov     rcx, [rcx+220h]
 * 00000001406BE5CF: mov     rcx, [rcx+760h]
 * 00000001406BE5D6: mov     gs:850h, rcx
 * 00000001406BE5DF: mov     cx, gs:862h
 * 00000001406BE5E8: mov     gs:864h, cx
 * 00000001406BE5F1: mov     cl, gs:858h
 * 00000001406BE5F9: mov     gs:85Ah, cl
 * 00000001406BE601: movzx   eax, word ptr gs:868h
 * 00000001406BE60A: cmp     gs:866h, ax
 * 00000001406BE613: jz      short loc_1406BE627
 * 00000001406BE615: mov     gs:866h, ax
 * 00000001406BE61E: mov     ecx, 48h ; 'H'
 * 00000001406BE623: xor     edx, edx
 * 00000001406BE625: wrmsr
 * 00000001406BE627: movzx   edx, byte ptr gs:858h
 * 00000001406BE630: test    edx, 8
 * 00000001406BE636: jz      short loc_1406BE64F
 * 00000001406BE638: mov     eax, 1
 * 00000001406BE63D: xor     edx, edx
 * 00000001406BE63F: mov     ecx, 49h ; 'I'
 * 00000001406BE644: wrmsr
 * 00000001406BE646: movzx   edx, byte ptr gs:858h
 * 00000001406BE64F: test    edx, 2
 * 00000001406BE655: jz      loc_1406BE792
 * 00000001406BE65B: call    loc_1406BE76E
 * 00000001406BE660: add     rsp, 8
 * 00000001406BE664: call    loc_1406BE777
 * 00000001406BE669: add     rsp, 8
 * 00000001406BE66D: call    loc_1406BE660
 * 00000001406BE672: add     rsp, 8
 * 00000001406BE676: call    loc_1406BE669
 * 00000001406BE67B: add     rsp, 8
 * 00000001406BE67F: call    loc_1406BE672
 * 00000001406BE684: add     rsp, 8
 * 00000001406BE688: call    loc_1406BE67B
 * 00000001406BE68D: add     rsp, 8
 * 00000001406BE691: call    loc_1406BE684
 * 00000001406BE696: add     rsp, 8
 * 00000001406BE69A: call    loc_1406BE68D
 * 00000001406BE69F: add     rsp, 8
 * 00000001406BE6A3: call    loc_1406BE696
 * 00000001406BE6A8: add     rsp, 8
 * 00000001406BE6AC: call    loc_1406BE69F
 * 00000001406BE6B1: add     rsp, 8
 * 00000001406BE6B5: call    loc_1406BE6A8
 * 00000001406BE6BA: add     rsp, 8
 * 00000001406BE6BE: call    loc_1406BE6B1
 * 00000001406BE6C3: add     rsp, 8
 * 00000001406BE6C7: call    loc_1406BE6BA
 * 00000001406BE6CC: add     rsp, 8
 * 00000001406BE6D0: call    loc_1406BE6C3
 * 00000001406BE6D5: add     rsp, 8
 * 00000001406BE6D9: call    loc_1406BE6CC
 * 00000001406BE6DE: add     rsp, 8
 * 00000001406BE6E2: call    loc_1406BE6D5
 * 00000001406BE6E7: add     rsp, 8
 * 00000001406BE6EB: call    loc_1406BE6DE
 * 00000001406BE6F0: add     rsp, 8
 * 00000001406BE6F4: call    loc_1406BE6E7
 * 00000001406BE6F9: add     rsp, 8
 * 00000001406BE6FD: call    loc_1406BE6F0
 * 00000001406BE702: add     rsp, 8
 * 00000001406BE706: call    loc_1406BE6F9
 * 00000001406BE70B: add     rsp, 8
 * 00000001406BE70F: call    loc_1406BE702
 * 00000001406BE714: add     rsp, 8
 * 00000001406BE718: call    loc_1406BE70B
 * 00000001406BE71D: add     rsp, 8
 * 00000001406BE721: call    loc_1406BE714
 * 00000001406BE726: add     rsp, 8
 * 00000001406BE72A: call    loc_1406BE71D
 * 00000001406BE72F: add     rsp, 8
 * 00000001406BE733: call    loc_1406BE726
 * 00000001406BE738: add     rsp, 8
 * 00000001406BE73C: call    loc_1406BE72F
 * 00000001406BE741: add     rsp, 8
 * 00000001406BE745: call    loc_1406BE738
 * 00000001406BE74A: add     rsp, 8
 * 00000001406BE74E: call    loc_1406BE741
 * 00000001406BE753: add     rsp, 8
 * 00000001406BE757: call    loc_1406BE74A
 * 00000001406BE75C: add     rsp, 8
 * 00000001406BE760: call    loc_1406BE753
 * 00000001406BE765: add     rsp, 8
 * 00000001406BE769: call    loc_1406BE75C
 * 00000001406BE76E: add     rsp, 8
 * 00000001406BE772: call    loc_1406BE765
 * 00000001406BE777: add     rsp, 8
 * 00000001406BE77B: mov     eax, 0DADAh
 * 00000001406BE780: test    byte ptr gs:85Ch, 8
 * 00000001406BE789: jz      short loc_1406BE792
 * 00000001406BE78B: mov     al, 20h ; ' '
 * 00000001406BE78D: incsspq rax
 * 00000001406BE792: test    edx, 80h
 * 00000001406BE798: jz      short loc_1406BE7A2
 * 00000001406BE79A: lfence
 * 00000001406BE79D: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BE7A2: lfence
 * 00000001406BE7A5: mov     byte ptr gs:85Eh, 0
 * 00000001406BE7AE: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BE7B5: jz      short loc_1406BE7D6
 * 00000001406BE7B7: mov     ecx, 6A7h
 * 00000001406BE7BC: rdmsr
 * 00000001406BE7BE: cmp     edx, 0
 * 00000001406BE7C1: jz      short loc_1406BE7D6
 * 00000001406BE7C3: mov     ecx, edx
 * 00000001406BE7C5: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BE7CB: cmp     edx, ecx
 * 00000001406BE7CD: jz      short loc_1406BE7D6
 * 00000001406BE7CF: mov     ecx, 6A7h
 * 00000001406BE7D4: wrmsr
 * 00000001406BE7D6: jmp     KiSystemServiceUser
 * 00000001406BE7DB: retn
 */
