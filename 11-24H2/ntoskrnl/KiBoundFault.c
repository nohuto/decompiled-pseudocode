/*
 * XREFs of KiBoundFault @ 0x1406B8340
 * Callers:
 *     KiBoundFaultShadow @ 0x140BBD3C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiHandleBound @ 0x1405ADED0 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x1406B8340 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x1406BFB80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406C0140 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x1406B8340
 * Reason: Hex-Rays returned no pseudocode for 0x1406B8340
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B8340: sub     rsp, 8
 * 00000001406B8344: push    rbp
 * 00000001406B8345: sub     rsp, 158h
 * 00000001406B834C: lea     rbp, [rsp+80h]
 * 00000001406B8354: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B8358: mov     [rbp+0E8h+var_138], rax
 * 00000001406B835C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B8360: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B8364: mov     [rbp+0E8h+var_120], r8
 * 00000001406B8368: mov     [rbp+0E8h+var_118], r9
 * 00000001406B836C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B8370: mov     [rbp+0E8h+var_108], r11
 * 00000001406B8374: test    [rbp+0E8h+arg_0], 1
 * 00000001406B837B: jnz     short loc_1406B83B5
 * 00000001406B837D: xor     edx, edx
 * 00000001406B837F: rdsspq  rdx
 * 00000001406B8384: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B8388: lfence
 * 00000001406B838B: test    byte ptr gs:858h, 1
 * 00000001406B8394: jnz     short loc_1406B839E
 * 00000001406B8396: lfence
 * 00000001406B8399: jmp     loc_1406B8626
 * 00000001406B839E: movzx   eax, word ptr gs:866h
 * 00000001406B83A7: mov     ecx, 48h ; 'H'
 * 00000001406B83AC: xor     edx, edx
 * 00000001406B83AE: wrmsr
 * 00000001406B83B0: jmp     loc_1406B8626
 * 00000001406B83B5: test    cs:KiKvaShadow, 1
 * 00000001406B83BC: jnz     short loc_1406B83C1
 * 00000001406B83BE: swapgs
 * 00000001406B83C1: lfence
 * 00000001406B83C4: mov     rcx, gs:9D28h
 * 00000001406B83CD: test    rcx, rcx
 * 00000001406B83D0: jz      short loc_1406B83F1
 * 00000001406B83D2: rdsspq  rdx
 * 00000001406B83D7: mov     r10, gs:9D20h
 * 00000001406B83E0: add     r10, 8
 * 00000001406B83E4: cmp     rdx, r10
 * 00000001406B83E7: jnz     short loc_1406B83F1
 * 00000001406B83E9: rstorssp qword ptr [rcx]
 * 00000001406B83ED: saveprevssp
 * 00000001406B83F1: mov     r10, gs:188h
 * 00000001406B83FA: mov     rcx, gs:188h
 * 00000001406B8403: mov     rcx, [rcx+220h]
 * 00000001406B840A: mov     rcx, [rcx+760h]
 * 00000001406B8411: mov     gs:850h, rcx
 * 00000001406B841A: mov     cx, gs:862h
 * 00000001406B8423: mov     gs:864h, cx
 * 00000001406B842C: mov     cl, gs:858h
 * 00000001406B8434: mov     gs:85Ah, cl
 * 00000001406B843C: movzx   eax, word ptr gs:868h
 * 00000001406B8445: cmp     gs:866h, ax
 * 00000001406B844E: jz      short loc_1406B8462
 * 00000001406B8450: mov     gs:866h, ax
 * 00000001406B8459: mov     ecx, 48h ; 'H'
 * 00000001406B845E: xor     edx, edx
 * 00000001406B8460: wrmsr
 * 00000001406B8462: movzx   edx, byte ptr gs:858h
 * 00000001406B846B: test    edx, 8
 * 00000001406B8471: jz      short loc_1406B848A
 * 00000001406B8473: mov     eax, 1
 * 00000001406B8478: xor     edx, edx
 * 00000001406B847A: mov     ecx, 49h ; 'I'
 * 00000001406B847F: wrmsr
 * 00000001406B8481: movzx   edx, byte ptr gs:858h
 * 00000001406B848A: test    edx, 2
 * 00000001406B8490: jz      loc_1406B85CD
 * 00000001406B8496: call    loc_1406B85A9
 * 00000001406B849B: add     rsp, 8
 * 00000001406B849F: call    loc_1406B85B2
 * 00000001406B84A4: add     rsp, 8
 * 00000001406B84A8: call    loc_1406B849B
 * 00000001406B84AD: add     rsp, 8
 * 00000001406B84B1: call    loc_1406B84A4
 * 00000001406B84B6: add     rsp, 8
 * 00000001406B84BA: call    loc_1406B84AD
 * 00000001406B84BF: add     rsp, 8
 * 00000001406B84C3: call    loc_1406B84B6
 * 00000001406B84C8: add     rsp, 8
 * 00000001406B84CC: call    loc_1406B84BF
 * 00000001406B84D1: add     rsp, 8
 * 00000001406B84D5: call    loc_1406B84C8
 * 00000001406B84DA: add     rsp, 8
 * 00000001406B84DE: call    loc_1406B84D1
 * 00000001406B84E3: add     rsp, 8
 * 00000001406B84E7: call    loc_1406B84DA
 * 00000001406B84EC: add     rsp, 8
 * 00000001406B84F0: call    loc_1406B84E3
 * 00000001406B84F5: add     rsp, 8
 * 00000001406B84F9: call    loc_1406B84EC
 * 00000001406B84FE: add     rsp, 8
 * 00000001406B8502: call    loc_1406B84F5
 * 00000001406B8507: add     rsp, 8
 * 00000001406B850B: call    loc_1406B84FE
 * 00000001406B8510: add     rsp, 8
 * 00000001406B8514: call    loc_1406B8507
 * 00000001406B8519: add     rsp, 8
 * 00000001406B851D: call    loc_1406B8510
 * 00000001406B8522: add     rsp, 8
 * 00000001406B8526: call    loc_1406B8519
 * 00000001406B852B: add     rsp, 8
 * 00000001406B852F: call    loc_1406B8522
 * 00000001406B8534: add     rsp, 8
 * 00000001406B8538: call    loc_1406B852B
 * 00000001406B853D: add     rsp, 8
 * 00000001406B8541: call    loc_1406B8534
 * 00000001406B8546: add     rsp, 8
 * 00000001406B854A: call    loc_1406B853D
 * 00000001406B854F: add     rsp, 8
 * 00000001406B8553: call    loc_1406B8546
 * 00000001406B8558: add     rsp, 8
 * 00000001406B855C: call    loc_1406B854F
 * 00000001406B8561: add     rsp, 8
 * 00000001406B8565: call    loc_1406B8558
 * 00000001406B856A: add     rsp, 8
 * 00000001406B856E: call    loc_1406B8561
 * 00000001406B8573: add     rsp, 8
 * 00000001406B8577: call    loc_1406B856A
 * 00000001406B857C: add     rsp, 8
 * 00000001406B8580: call    loc_1406B8573
 * 00000001406B8585: add     rsp, 8
 * 00000001406B8589: call    loc_1406B857C
 * 00000001406B858E: add     rsp, 8
 * 00000001406B8592: call    loc_1406B8585
 * 00000001406B8597: add     rsp, 8
 * 00000001406B859B: call    loc_1406B858E
 * 00000001406B85A0: add     rsp, 8
 * 00000001406B85A4: call    loc_1406B8597
 * 00000001406B85A9: add     rsp, 8
 * 00000001406B85AD: call    loc_1406B85A0
 * 00000001406B85B2: add     rsp, 8
 * 00000001406B85B6: mov     eax, 0DADAh
 * 00000001406B85BB: test    byte ptr gs:85Ch, 8
 * 00000001406B85C4: jz      short loc_1406B85CD
 * 00000001406B85C6: mov     al, 20h ; ' '
 * 00000001406B85C8: incsspq rax
 * 00000001406B85CD: test    edx, 80h
 * 00000001406B85D3: jz      short loc_1406B85DD
 * 00000001406B85D5: lfence
 * 00000001406B85D8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B85DD: lfence
 * 00000001406B85E0: mov     byte ptr gs:85Eh, 0
 * 00000001406B85E9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B85F0: jz      short loc_1406B8611
 * 00000001406B85F2: mov     ecx, 6A7h
 * 00000001406B85F7: rdmsr
 * 00000001406B85F9: cmp     edx, 0
 * 00000001406B85FC: jz      short loc_1406B8611
 * 00000001406B85FE: mov     ecx, edx
 * 00000001406B8600: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B8606: cmp     edx, ecx
 * 00000001406B8608: jz      short loc_1406B8611
 * 00000001406B860A: mov     ecx, 6A7h
 * 00000001406B860F: wrmsr
 * 00000001406B8611: test    byte ptr [r10+3], 3
 * 00000001406B8616: mov     [rbp+0E8h+var_68], 0
 * 00000001406B861F: jz      short loc_1406B8626
 * 00000001406B8621: call    KiSaveDebugRegisterState
 * 00000001406B8626: cld
 * 00000001406B8627: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B862B: ldmxcsr dword ptr gs:180h
 * 00000001406B8634: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B8638: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B863C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B8640: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B8644: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B8648: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B864C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B8653: jz      short loc_1406B865A
 * 00000001406B8655: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B865A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B8661: jz      short loc_1406B866F
 * 00000001406B8663: test    [rbp+0E8h+arg_0], 1
 * 00000001406B866A: jz      short loc_1406B866F
 * 00000001406B866C: stac
 * 00000001406B866F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B8679: jz      short loc_1406B867C
 * 00000001406B867B: sti
 * 00000001406B867C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B8683: jz      short loc_1406B86C6
 * 00000001406B8685: call    KiHandleBound
 * 00000001406B868A: cmp     eax, 0
 * 00000001406B868D: jz      short loc_1406B86C6
 * 00000001406B868F: cmp     eax, 1
 * 00000001406B8692: jz      short loc_1406B86DA
 * 00000001406B8694: cmp     eax, 2
 * 00000001406B8697: jz      short loc_1406B86A8
 * 00000001406B8699: mov     edx, 5
 * 00000001406B869E: mov     ecx, 7Fh
 * 00000001406B86A3: call    KiBugCheckDispatch
 * 00000001406B86A8: mov     r9, 1Ch
 * 00000001406B86AF: mov     ecx, 0C0000409h
 * 00000001406B86B4: mov     edx, 1
 * 00000001406B86B9: mov     r8, [rbp+0E8h]
 * 00000001406B86C0: call    KiFastFailDispatch
 * 00000001406B86C5: nop
 * 00000001406B86C6: mov     ecx, 0C000008Ch
 * 00000001406B86CB: xor     edx, edx
 * 00000001406B86CD: mov     r8, [rbp+0E8h]
 * 00000001406B86D4: call    KiExceptionDispatch
 * 00000001406B86D9: nop
 * 00000001406B86DA: cli
 * 00000001406B86DB: test    [rbp+0E8h+arg_0], 1
 * 00000001406B86E2: jz      loc_1406B89DD
 * 00000001406B86E8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B86EF: jz      short loc_1406B86F4
 * 00000001406B86F1: stac
 * 00000001406B86F4: mov     rcx, gs:188h
 * 00000001406B86FD: test    byte ptr [rcx+0C2h], 3
 * 00000001406B8704: jz      short loc_1406B8721
 * 00000001406B8706: mov     ecx, 1
 * 00000001406B870B: mov     cr8, rcx
 * 00000001406B870F: sti
 * 00000001406B8710: call    KiInitiateUserApc
 * 00000001406B8715: cli
 * 00000001406B8716: mov     ecx, 0
 * 00000001406B871B: mov     cr8, rcx
 * 00000001406B871F: jmp     short loc_1406B86F4
 * 00000001406B8721: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B8726: test    eax, eax
 * 00000001406B8728: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B872C: jnz     short loc_1406B86F4
 * 00000001406B872E: test    byte ptr gs:860h, 2
 * 00000001406B8737: jz      short loc_1406B8740
 * 00000001406B8739: xor     ecx, ecx
 * 00000001406B873B: call    KiUpdateStibpPairing
 * 00000001406B8740: mov     rcx, gs:188h
 * 00000001406B8749: test    dword ptr [rcx], 8000000h
 * 00000001406B874F: jz      short loc_1406B8756
 * 00000001406B8751: call    KiRestoreSetContextState
 * 00000001406B8756: mov     rcx, gs:188h
 * 00000001406B875F: test    dword ptr [rcx], 10000h
 * 00000001406B8765: jz      short loc_1406B877B
 * 00000001406B8767: test    byte ptr [rcx+2], 1
 * 00000001406B876B: jz      short loc_1406B877B
 * 00000001406B876D: call    KiCopyCounters
 * 00000001406B8772: mov     rcx, gs:188h
 * 00000001406B877B: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B877F: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B8787: jz      short loc_1406B878E
 * 00000001406B8789: call    KiRestoreDebugRegisterState
 * 00000001406B878E: mov     rcx, gs:188h
 * 00000001406B8797: bt      dword ptr [rcx+74h], 16h
 * 00000001406B879C: jnb     short loc_1406B87C8
 * 00000001406B879E: xor     ecx, ecx
 * 00000001406B87A0: rdsspq  rcx
 * 00000001406B87A5: mov     r8, gs:9D28h
 * 00000001406B87AE: add     r8, 8
 * 00000001406B87B2: cmp     rcx, r8
 * 00000001406B87B5: jnz     short loc_1406B87C8
 * 00000001406B87B7: mov     rcx, gs:9D20h
 * 00000001406B87C0: rstorssp qword ptr [rcx]
 * 00000001406B87C4: saveprevssp
 * 00000001406B87C8: mov     byte ptr gs:85Eh, 0
 * 00000001406B87D1: movzx   eax, word ptr gs:86Ch
 * 00000001406B87DA: cmp     gs:866h, ax
 * 00000001406B87E3: jz      short loc_1406B87F7
 * 00000001406B87E5: mov     gs:866h, ax
 * 00000001406B87EE: mov     ecx, 48h ; 'H'
 * 00000001406B87F3: xor     edx, edx
 * 00000001406B87F5: wrmsr
 * 00000001406B87F7: btr     word ptr gs:858h, 2
 * 00000001406B8802: jnb     short loc_1406B8812
 * 00000001406B8804: mov     eax, 1
 * 00000001406B8809: xor     edx, edx
 * 00000001406B880B: mov     ecx, 49h ; 'I'
 * 00000001406B8810: wrmsr
 * 00000001406B8812: btr     word ptr gs:858h, 5
 * 00000001406B881D: jnb     loc_1406B895A
 * 00000001406B8823: call    loc_1406B8936
 * 00000001406B8828: add     rsp, 8
 * 00000001406B882C: call    loc_1406B893F
 * 00000001406B8831: add     rsp, 8
 * 00000001406B8835: call    loc_1406B8828
 * 00000001406B883A: add     rsp, 8
 * 00000001406B883E: call    loc_1406B8831
 * 00000001406B8843: add     rsp, 8
 * 00000001406B8847: call    loc_1406B883A
 * 00000001406B884C: add     rsp, 8
 * 00000001406B8850: call    loc_1406B8843
 * 00000001406B8855: add     rsp, 8
 * 00000001406B8859: call    loc_1406B884C
 * 00000001406B885E: add     rsp, 8
 * 00000001406B8862: call    loc_1406B8855
 * 00000001406B8867: add     rsp, 8
 * 00000001406B886B: call    loc_1406B885E
 * 00000001406B8870: add     rsp, 8
 * 00000001406B8874: call    loc_1406B8867
 * 00000001406B8879: add     rsp, 8
 * 00000001406B887D: call    loc_1406B8870
 * 00000001406B8882: add     rsp, 8
 * 00000001406B8886: call    loc_1406B8879
 * 00000001406B888B: add     rsp, 8
 * 00000001406B888F: call    loc_1406B8882
 * 00000001406B8894: add     rsp, 8
 * 00000001406B8898: call    loc_1406B888B
 * 00000001406B889D: add     rsp, 8
 * 00000001406B88A1: call    loc_1406B8894
 * 00000001406B88A6: add     rsp, 8
 * 00000001406B88AA: call    loc_1406B889D
 * 00000001406B88AF: add     rsp, 8
 * 00000001406B88B3: call    loc_1406B88A6
 * 00000001406B88B8: add     rsp, 8
 * 00000001406B88BC: call    loc_1406B88AF
 * 00000001406B88C1: add     rsp, 8
 * 00000001406B88C5: call    loc_1406B88B8
 * 00000001406B88CA: add     rsp, 8
 * 00000001406B88CE: call    loc_1406B88C1
 * 00000001406B88D3: add     rsp, 8
 * 00000001406B88D7: call    loc_1406B88CA
 * 00000001406B88DC: add     rsp, 8
 * 00000001406B88E0: call    loc_1406B88D3
 * 00000001406B88E5: add     rsp, 8
 * 00000001406B88E9: call    loc_1406B88DC
 * 00000001406B88EE: add     rsp, 8
 * 00000001406B88F2: call    loc_1406B88E5
 * 00000001406B88F7: add     rsp, 8
 * 00000001406B88FB: call    loc_1406B88EE
 * 00000001406B8900: add     rsp, 8
 * 00000001406B8904: call    loc_1406B88F7
 * 00000001406B8909: add     rsp, 8
 * 00000001406B890D: call    loc_1406B8900
 * 00000001406B8912: add     rsp, 8
 * 00000001406B8916: call    loc_1406B8909
 * 00000001406B891B: add     rsp, 8
 * 00000001406B891F: call    loc_1406B8912
 * 00000001406B8924: add     rsp, 8
 * 00000001406B8928: call    loc_1406B891B
 * 00000001406B892D: add     rsp, 8
 * 00000001406B8931: call    loc_1406B8924
 * 00000001406B8936: add     rsp, 8
 * 00000001406B893A: call    loc_1406B892D
 * 00000001406B893F: add     rsp, 8
 * 00000001406B8943: mov     eax, 0DADAh
 * 00000001406B8948: test    byte ptr gs:85Ch, 8
 * 00000001406B8951: jz      short loc_1406B895A
 * 00000001406B8953: mov     al, 20h ; ' '
 * 00000001406B8955: incsspq rax
 * 00000001406B895A: test    word ptr gs:858h, 100h
 * 00000001406B8965: jz      short loc_1406B8973
 * 00000001406B8967: xor     eax, eax
 * 00000001406B8969: xor     edx, edx
 * 00000001406B896B: mov     ecx, 1
 * 00000001406B8970: div     rcx
 * 00000001406B8973: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B8977: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B897B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B897F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B8983: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B8987: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B898B: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B898F: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B8993: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B8997: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B899B: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B899F: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B89A3: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B89A7: mov     rsp, rbp
 * 00000001406B89AA: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B89B1: add     rsp, 0E8h
 * 00000001406B89B8: test    cs:KiKvaShadow, 1
 * 00000001406B89BF: jz      short loc_1406B89C6
 * 00000001406B89C1: jmp     KiKernelExit
 * 00000001406B89C6: test    word ptr gs:858h, 200h
 * 00000001406B89D1: jz      short loc_1406B89D8
 * 00000001406B89D3: verw    [rsp+arg_18]
 * 00000001406B89D8: swapgs
 * 00000001406B89DB: iretq
 * 00000001406B89DD: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B89E1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B89E5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B89E9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B89ED: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B89F1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B89F5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B89F9: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B89FD: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B8A01: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B8A05: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B8A09: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B8A0D: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B8A11: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B8A15: mov     rsp, rbp
 * 00000001406B8A18: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B8A1F: add     rsp, 0E8h
 * 00000001406B8A26: iretq
 */
