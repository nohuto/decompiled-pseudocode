/*
 * XREFs of KiSystemService @ 0x1406BD640
 * Callers:
 *     KiSystemServiceShadow @ 0x140BBBEC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x1406BD640 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x1406BD640
 * Reason: Hex-Rays returned no pseudocode for 0x1406BD640
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BD640: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406BD646: jz      KiSystemService32User
 * 00000001406BD64C: test    cs:KiKvaShadow, 1
 * 00000001406BD653: jnz     short loc_1406BD658
 * 00000001406BD655: swapgs
 * 00000001406BD658: lfence
 * 00000001406BD65B: mov     rcx, gs:9D28h
 * 00000001406BD664: test    rcx, rcx
 * 00000001406BD667: jz      short loc_1406BD671
 * 00000001406BD669: rstorssp qword ptr [rcx]
 * 00000001406BD66D: saveprevssp
 * 00000001406BD671: mov     rcx, r10
 * 00000001406BD674: sub     rsp, 8
 * 00000001406BD678: push    rbp
 * 00000001406BD679: sub     rsp, 158h
 * 00000001406BD680: lea     rbp, [rsp+168h+var_E8]
 * 00000001406BD688: mov     [rbp+0C0h], rbx
 * 00000001406BD68F: mov     [rbp+0C8h], rdi
 * 00000001406BD696: mov     [rbp+0D0h], rsi
 * 00000001406BD69D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BD6A4: jz      short loc_1406BD6B2
 * 00000001406BD6A6: test    byte ptr [rbp+0F0h], 1
 * 00000001406BD6AD: jz      short loc_1406BD6B2
 * 00000001406BD6AF: stac
 * 00000001406BD6B2: mov     [rbp-50h], rax
 * 00000001406BD6B6: mov     [rbp-48h], rcx
 * 00000001406BD6BA: mov     [rbp-40h], rdx
 * 00000001406BD6BE: mov     rcx, gs:188h
 * 00000001406BD6C7: mov     rcx, [rcx+220h]
 * 00000001406BD6CE: mov     rcx, [rcx+760h]
 * 00000001406BD6D5: mov     gs:850h, rcx
 * 00000001406BD6DE: mov     cx, gs:862h
 * 00000001406BD6E7: mov     gs:864h, cx
 * 00000001406BD6F0: mov     cl, gs:858h
 * 00000001406BD6F8: mov     gs:85Ah, cl
 * 00000001406BD700: movzx   eax, word ptr gs:868h
 * 00000001406BD709: cmp     gs:866h, ax
 * 00000001406BD712: jz      short loc_1406BD726
 * 00000001406BD714: mov     gs:866h, ax
 * 00000001406BD71D: mov     ecx, 48h ; 'H'
 * 00000001406BD722: xor     edx, edx
 * 00000001406BD724: wrmsr
 * 00000001406BD726: movzx   edx, byte ptr gs:858h
 * 00000001406BD72F: test    edx, 8
 * 00000001406BD735: jz      short loc_1406BD74E
 * 00000001406BD737: mov     eax, 1
 * 00000001406BD73C: xor     edx, edx
 * 00000001406BD73E: mov     ecx, 49h ; 'I'
 * 00000001406BD743: wrmsr
 * 00000001406BD745: movzx   edx, byte ptr gs:858h
 * 00000001406BD74E: test    edx, 2
 * 00000001406BD754: jz      loc_1406BD891
 * 00000001406BD75A: call    loc_1406BD86D
 * 00000001406BD75F: add     rsp, 8
 * 00000001406BD763: call    loc_1406BD876
 * 00000001406BD768: add     rsp, 8
 * 00000001406BD76C: call    loc_1406BD75F
 * 00000001406BD771: add     rsp, 8
 * 00000001406BD775: call    loc_1406BD768
 * 00000001406BD77A: add     rsp, 8
 * 00000001406BD77E: call    loc_1406BD771
 * 00000001406BD783: add     rsp, 8
 * 00000001406BD787: call    loc_1406BD77A
 * 00000001406BD78C: add     rsp, 8
 * 00000001406BD790: call    loc_1406BD783
 * 00000001406BD795: add     rsp, 8
 * 00000001406BD799: call    loc_1406BD78C
 * 00000001406BD79E: add     rsp, 8
 * 00000001406BD7A2: call    loc_1406BD795
 * 00000001406BD7A7: add     rsp, 8
 * 00000001406BD7AB: call    loc_1406BD79E
 * 00000001406BD7B0: add     rsp, 8
 * 00000001406BD7B4: call    loc_1406BD7A7
 * 00000001406BD7B9: add     rsp, 8
 * 00000001406BD7BD: call    loc_1406BD7B0
 * 00000001406BD7C2: add     rsp, 8
 * 00000001406BD7C6: call    loc_1406BD7B9
 * 00000001406BD7CB: add     rsp, 8
 * 00000001406BD7CF: call    loc_1406BD7C2
 * 00000001406BD7D4: add     rsp, 8
 * 00000001406BD7D8: call    loc_1406BD7CB
 * 00000001406BD7DD: add     rsp, 8
 * 00000001406BD7E1: call    loc_1406BD7D4
 * 00000001406BD7E6: add     rsp, 8
 * 00000001406BD7EA: call    loc_1406BD7DD
 * 00000001406BD7EF: add     rsp, 8
 * 00000001406BD7F3: call    loc_1406BD7E6
 * 00000001406BD7F8: add     rsp, 8
 * 00000001406BD7FC: call    loc_1406BD7EF
 * 00000001406BD801: add     rsp, 8
 * 00000001406BD805: call    loc_1406BD7F8
 * 00000001406BD80A: add     rsp, 8
 * 00000001406BD80E: call    loc_1406BD801
 * 00000001406BD813: add     rsp, 8
 * 00000001406BD817: call    loc_1406BD80A
 * 00000001406BD81C: add     rsp, 8
 * 00000001406BD820: call    loc_1406BD813
 * 00000001406BD825: add     rsp, 8
 * 00000001406BD829: call    loc_1406BD81C
 * 00000001406BD82E: add     rsp, 8
 * 00000001406BD832: call    loc_1406BD825
 * 00000001406BD837: add     rsp, 8
 * 00000001406BD83B: call    loc_1406BD82E
 * 00000001406BD840: add     rsp, 8
 * 00000001406BD844: call    loc_1406BD837
 * 00000001406BD849: add     rsp, 8
 * 00000001406BD84D: call    loc_1406BD840
 * 00000001406BD852: add     rsp, 8
 * 00000001406BD856: call    loc_1406BD849
 * 00000001406BD85B: add     rsp, 8
 * 00000001406BD85F: call    loc_1406BD852
 * 00000001406BD864: add     rsp, 8
 * 00000001406BD868: call    loc_1406BD85B
 * 00000001406BD86D: add     rsp, 8
 * 00000001406BD871: call    loc_1406BD864
 * 00000001406BD876: add     rsp, 8
 * 00000001406BD87A: mov     eax, 0DADAh
 * 00000001406BD87F: test    byte ptr gs:85Ch, 8
 * 00000001406BD888: jz      short loc_1406BD891
 * 00000001406BD88A: mov     al, 20h ; ' '
 * 00000001406BD88C: incsspq rax
 * 00000001406BD891: test    edx, 80h
 * 00000001406BD897: jz      short loc_1406BD8A1
 * 00000001406BD899: lfence
 * 00000001406BD89C: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BD8A1: lfence
 * 00000001406BD8A4: mov     byte ptr gs:85Eh, 0
 * 00000001406BD8AD: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BD8B4: jz      short loc_1406BD8D5
 * 00000001406BD8B6: mov     ecx, 6A7h
 * 00000001406BD8BB: rdmsr
 * 00000001406BD8BD: cmp     edx, 0
 * 00000001406BD8C0: jz      short loc_1406BD8D5
 * 00000001406BD8C2: mov     ecx, edx
 * 00000001406BD8C4: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BD8CA: cmp     edx, ecx
 * 00000001406BD8CC: jz      short loc_1406BD8D5
 * 00000001406BD8CE: mov     ecx, 6A7h
 * 00000001406BD8D3: wrmsr
 * 00000001406BD8D5: jmp     KiSystemServiceUser
 * 00000001406BD8DA: retn
 */
