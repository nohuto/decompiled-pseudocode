/*
 * XREFs of KiSystemService @ 0x1406B2340
 * Callers:
 *     KiSystemServiceShadow @ 0x140BAAEC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x1406B2340 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x1406B2340
 * Reason: Hex-Rays returned no pseudocode for 0x1406B2340
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B2340: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406B2346: jz      KiSystemService32User
 * 00000001406B234C: test    cs:KiKvaShadow, 1
 * 00000001406B2353: jnz     short loc_1406B2358
 * 00000001406B2355: swapgs
 * 00000001406B2358: lfence
 * 00000001406B235B: mov     rcx, gs:9D28h
 * 00000001406B2364: test    rcx, rcx
 * 00000001406B2367: jz      short loc_1406B2371
 * 00000001406B2369: rstorssp qword ptr [rcx]
 * 00000001406B236D: saveprevssp
 * 00000001406B2371: mov     rcx, r10
 * 00000001406B2374: sub     rsp, 8
 * 00000001406B2378: push    rbp
 * 00000001406B2379: sub     rsp, 158h
 * 00000001406B2380: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B2388: mov     [rbp+0C0h], rbx
 * 00000001406B238F: mov     [rbp+0C8h], rdi
 * 00000001406B2396: mov     [rbp+0D0h], rsi
 * 00000001406B239D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B23A4: jz      short loc_1406B23B2
 * 00000001406B23A6: test    byte ptr [rbp+0F0h], 1
 * 00000001406B23AD: jz      short loc_1406B23B2
 * 00000001406B23AF: stac
 * 00000001406B23B2: mov     [rbp-50h], rax
 * 00000001406B23B6: mov     [rbp-48h], rcx
 * 00000001406B23BA: mov     [rbp-40h], rdx
 * 00000001406B23BE: mov     rcx, gs:188h
 * 00000001406B23C7: mov     rcx, [rcx+220h]
 * 00000001406B23CE: mov     rcx, [rcx+760h]
 * 00000001406B23D5: mov     gs:850h, rcx
 * 00000001406B23DE: mov     cx, gs:862h
 * 00000001406B23E7: mov     gs:864h, cx
 * 00000001406B23F0: mov     cl, gs:858h
 * 00000001406B23F8: mov     gs:85Ah, cl
 * 00000001406B2400: movzx   eax, word ptr gs:868h
 * 00000001406B2409: cmp     gs:866h, ax
 * 00000001406B2412: jz      short loc_1406B2426
 * 00000001406B2414: mov     gs:866h, ax
 * 00000001406B241D: mov     ecx, 48h ; 'H'
 * 00000001406B2422: xor     edx, edx
 * 00000001406B2424: wrmsr
 * 00000001406B2426: movzx   edx, byte ptr gs:858h
 * 00000001406B242F: test    edx, 8
 * 00000001406B2435: jz      short loc_1406B244E
 * 00000001406B2437: mov     eax, 1
 * 00000001406B243C: xor     edx, edx
 * 00000001406B243E: mov     ecx, 49h ; 'I'
 * 00000001406B2443: wrmsr
 * 00000001406B2445: movzx   edx, byte ptr gs:858h
 * 00000001406B244E: test    edx, 2
 * 00000001406B2454: jz      loc_1406B2591
 * 00000001406B245A: call    loc_1406B256D
 * 00000001406B245F: add     rsp, 8
 * 00000001406B2463: call    loc_1406B2576
 * 00000001406B2468: add     rsp, 8
 * 00000001406B246C: call    loc_1406B245F
 * 00000001406B2471: add     rsp, 8
 * 00000001406B2475: call    loc_1406B2468
 * 00000001406B247A: add     rsp, 8
 * 00000001406B247E: call    loc_1406B2471
 * 00000001406B2483: add     rsp, 8
 * 00000001406B2487: call    loc_1406B247A
 * 00000001406B248C: add     rsp, 8
 * 00000001406B2490: call    loc_1406B2483
 * 00000001406B2495: add     rsp, 8
 * 00000001406B2499: call    loc_1406B248C
 * 00000001406B249E: add     rsp, 8
 * 00000001406B24A2: call    loc_1406B2495
 * 00000001406B24A7: add     rsp, 8
 * 00000001406B24AB: call    loc_1406B249E
 * 00000001406B24B0: add     rsp, 8
 * 00000001406B24B4: call    loc_1406B24A7
 * 00000001406B24B9: add     rsp, 8
 * 00000001406B24BD: call    loc_1406B24B0
 * 00000001406B24C2: add     rsp, 8
 * 00000001406B24C6: call    loc_1406B24B9
 * 00000001406B24CB: add     rsp, 8
 * 00000001406B24CF: call    loc_1406B24C2
 * 00000001406B24D4: add     rsp, 8
 * 00000001406B24D8: call    loc_1406B24CB
 * 00000001406B24DD: add     rsp, 8
 * 00000001406B24E1: call    loc_1406B24D4
 * 00000001406B24E6: add     rsp, 8
 * 00000001406B24EA: call    loc_1406B24DD
 * 00000001406B24EF: add     rsp, 8
 * 00000001406B24F3: call    loc_1406B24E6
 * 00000001406B24F8: add     rsp, 8
 * 00000001406B24FC: call    loc_1406B24EF
 * 00000001406B2501: add     rsp, 8
 * 00000001406B2505: call    loc_1406B24F8
 * 00000001406B250A: add     rsp, 8
 * 00000001406B250E: call    loc_1406B2501
 * 00000001406B2513: add     rsp, 8
 * 00000001406B2517: call    loc_1406B250A
 * 00000001406B251C: add     rsp, 8
 * 00000001406B2520: call    loc_1406B2513
 * 00000001406B2525: add     rsp, 8
 * 00000001406B2529: call    loc_1406B251C
 * 00000001406B252E: add     rsp, 8
 * 00000001406B2532: call    loc_1406B2525
 * 00000001406B2537: add     rsp, 8
 * 00000001406B253B: call    loc_1406B252E
 * 00000001406B2540: add     rsp, 8
 * 00000001406B2544: call    loc_1406B2537
 * 00000001406B2549: add     rsp, 8
 * 00000001406B254D: call    loc_1406B2540
 * 00000001406B2552: add     rsp, 8
 * 00000001406B2556: call    loc_1406B2549
 * 00000001406B255B: add     rsp, 8
 * 00000001406B255F: call    loc_1406B2552
 * 00000001406B2564: add     rsp, 8
 * 00000001406B2568: call    loc_1406B255B
 * 00000001406B256D: add     rsp, 8
 * 00000001406B2571: call    loc_1406B2564
 * 00000001406B2576: add     rsp, 8
 * 00000001406B257A: mov     eax, 0DADAh
 * 00000001406B257F: test    byte ptr gs:85Ch, 8
 * 00000001406B2588: jz      short loc_1406B2591
 * 00000001406B258A: mov     al, 20h ; ' '
 * 00000001406B258C: incsspq rax
 * 00000001406B2591: test    edx, 80h
 * 00000001406B2597: jz      short loc_1406B25A1
 * 00000001406B2599: lfence
 * 00000001406B259C: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B25A1: lfence
 * 00000001406B25A4: mov     byte ptr gs:85Eh, 0
 * 00000001406B25AD: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B25B4: jz      short loc_1406B25D5
 * 00000001406B25B6: mov     ecx, 6A7h
 * 00000001406B25BB: rdmsr
 * 00000001406B25BD: cmp     edx, 0
 * 00000001406B25C0: jz      short loc_1406B25D5
 * 00000001406B25C2: mov     ecx, edx
 * 00000001406B25C4: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B25CA: cmp     edx, ecx
 * 00000001406B25CC: jz      short loc_1406B25D5
 * 00000001406B25CE: mov     ecx, 6A7h
 * 00000001406B25D3: wrmsr
 * 00000001406B25D5: jmp     KiSystemServiceUser
 * 00000001406B25DA: retn
 */
