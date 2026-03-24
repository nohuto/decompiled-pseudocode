/*
 * XREFs of KiSystemCall64Shadow @ 0x140BBD200
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140BBD200 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140BBD200
 * Reason: Hex-Rays returned no pseudocode for 0x140BBD200
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BBD200: swapgs
 * 0000000140BBD203: mov     gs:0B010h, rsp
 * 0000000140BBD20C: mov     rsp, gs:0B000h
 * 0000000140BBD215: bt      dword ptr gs:0B018h, 1
 * 0000000140BBD21F: jb      short loc_140BBD224
 * 0000000140BBD221: mov     cr3, rsp
 * 0000000140BBD224: mov     rsp, gs:0B008h
 * 0000000140BBD22D: push    2Bh ; '+'
 * 0000000140BBD22F: push    qword ptr gs:0B010h
 * 0000000140BBD237: push    r11
 * 0000000140BBD239: push    33h ; '3'
 * 0000000140BBD23B: push    rcx
 * 0000000140BBD23C: mov     rcx, gs:9D28h
 * 0000000140BBD245: test    rcx, rcx
 * 0000000140BBD248: jz      short loc_140BBD256
 * 0000000140BBD24A: setssbsy
 * 0000000140BBD24E: rstorssp qword ptr [rcx]
 * 0000000140BBD252: saveprevssp
 * 0000000140BBD256: mov     rcx, r10
 * 0000000140BBD259: sub     rsp, 8
 * 0000000140BBD25D: push    rbp
 * 0000000140BBD25E: sub     rsp, 158h
 * 0000000140BBD265: lea     rbp, [rsp+190h+var_110]
 * 0000000140BBD26D: mov     [rbp+0C0h], rbx
 * 0000000140BBD274: mov     [rbp+0C8h], rdi
 * 0000000140BBD27B: mov     [rbp+0D0h], rsi
 * 0000000140BBD282: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140BBD289: jz      short loc_140BBD297
 * 0000000140BBD28B: test    byte ptr [rbp+0F0h], 1
 * 0000000140BBD292: jz      short loc_140BBD297
 * 0000000140BBD294: stac
 * 0000000140BBD297: mov     [rbp-50h], rax
 * 0000000140BBD29B: mov     [rbp-48h], rcx
 * 0000000140BBD29F: mov     [rbp-40h], rdx
 * 0000000140BBD2A3: mov     rcx, gs:188h
 * 0000000140BBD2AC: mov     rcx, [rcx+220h]
 * 0000000140BBD2B3: mov     rcx, [rcx+760h]
 * 0000000140BBD2BA: mov     gs:850h, rcx
 * 0000000140BBD2C3: mov     cx, gs:862h
 * 0000000140BBD2CC: mov     gs:864h, cx
 * 0000000140BBD2D5: mov     cl, gs:858h
 * 0000000140BBD2DD: mov     gs:85Ah, cl
 * 0000000140BBD2E5: movzx   eax, word ptr gs:868h
 * 0000000140BBD2EE: cmp     gs:866h, ax
 * 0000000140BBD2F7: jz      short loc_140BBD30B
 * 0000000140BBD2F9: mov     gs:866h, ax
 * 0000000140BBD302: mov     ecx, 48h ; 'H'
 * 0000000140BBD307: xor     edx, edx
 * 0000000140BBD309: wrmsr
 * 0000000140BBD30B: movzx   edx, byte ptr gs:858h
 * 0000000140BBD314: test    edx, 8
 * 0000000140BBD31A: jz      short loc_140BBD333
 * 0000000140BBD31C: mov     eax, 1
 * 0000000140BBD321: xor     edx, edx
 * 0000000140BBD323: mov     ecx, 49h ; 'I'
 * 0000000140BBD328: wrmsr
 * 0000000140BBD32A: movzx   edx, byte ptr gs:858h
 * 0000000140BBD333: test    edx, 2
 * 0000000140BBD339: jz      loc_140BBD476
 * 0000000140BBD33F: call    loc_140BBD452
 * 0000000140BBD344: add     rsp, 8
 * 0000000140BBD348: call    loc_140BBD45B
 * 0000000140BBD34D: add     rsp, 8
 * 0000000140BBD351: call    loc_140BBD344
 * 0000000140BBD356: add     rsp, 8
 * 0000000140BBD35A: call    loc_140BBD34D
 * 0000000140BBD35F: add     rsp, 8
 * 0000000140BBD363: call    loc_140BBD356
 * 0000000140BBD368: add     rsp, 8
 * 0000000140BBD36C: call    loc_140BBD35F
 * 0000000140BBD371: add     rsp, 8
 * 0000000140BBD375: call    loc_140BBD368
 * 0000000140BBD37A: add     rsp, 8
 * 0000000140BBD37E: call    loc_140BBD371
 * 0000000140BBD383: add     rsp, 8
 * 0000000140BBD387: call    loc_140BBD37A
 * 0000000140BBD38C: add     rsp, 8
 * 0000000140BBD390: call    loc_140BBD383
 * 0000000140BBD395: add     rsp, 8
 * 0000000140BBD399: call    loc_140BBD38C
 * 0000000140BBD39E: add     rsp, 8
 * 0000000140BBD3A2: call    loc_140BBD395
 * 0000000140BBD3A7: add     rsp, 8
 * 0000000140BBD3AB: call    loc_140BBD39E
 * 0000000140BBD3B0: add     rsp, 8
 * 0000000140BBD3B4: call    loc_140BBD3A7
 * 0000000140BBD3B9: add     rsp, 8
 * 0000000140BBD3BD: call    loc_140BBD3B0
 * 0000000140BBD3C2: add     rsp, 8
 * 0000000140BBD3C6: call    loc_140BBD3B9
 * 0000000140BBD3CB: add     rsp, 8
 * 0000000140BBD3CF: call    loc_140BBD3C2
 * 0000000140BBD3D4: add     rsp, 8
 * 0000000140BBD3D8: call    loc_140BBD3CB
 * 0000000140BBD3DD: add     rsp, 8
 * 0000000140BBD3E1: call    loc_140BBD3D4
 * 0000000140BBD3E6: add     rsp, 8
 * 0000000140BBD3EA: call    loc_140BBD3DD
 * 0000000140BBD3EF: add     rsp, 8
 * 0000000140BBD3F3: call    loc_140BBD3E6
 * 0000000140BBD3F8: add     rsp, 8
 * 0000000140BBD3FC: call    loc_140BBD3EF
 * 0000000140BBD401: add     rsp, 8
 * 0000000140BBD405: call    loc_140BBD3F8
 * 0000000140BBD40A: add     rsp, 8
 * 0000000140BBD40E: call    loc_140BBD401
 * 0000000140BBD413: add     rsp, 8
 * 0000000140BBD417: call    loc_140BBD40A
 * 0000000140BBD41C: add     rsp, 8
 * 0000000140BBD420: call    loc_140BBD413
 * 0000000140BBD425: add     rsp, 8
 * 0000000140BBD429: call    loc_140BBD41C
 * 0000000140BBD42E: add     rsp, 8
 * 0000000140BBD432: call    loc_140BBD425
 * 0000000140BBD437: add     rsp, 8
 * 0000000140BBD43B: call    loc_140BBD42E
 * 0000000140BBD440: add     rsp, 8
 * 0000000140BBD444: call    loc_140BBD437
 * 0000000140BBD449: add     rsp, 8
 * 0000000140BBD44D: call    loc_140BBD440
 * 0000000140BBD452: add     rsp, 8
 * 0000000140BBD456: call    loc_140BBD449
 * 0000000140BBD45B: add     rsp, 8
 * 0000000140BBD45F: mov     eax, 0DADAh
 * 0000000140BBD464: test    byte ptr gs:85Ch, 8
 * 0000000140BBD46D: jz      short loc_140BBD476
 * 0000000140BBD46F: mov     al, 20h ; ' '
 * 0000000140BBD471: incsspq rax
 * 0000000140BBD476: test    edx, 80h
 * 0000000140BBD47C: jz      short loc_140BBD486
 * 0000000140BBD47E: lfence
 * 0000000140BBD481: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140BBD486: lfence
 * 0000000140BBD489: mov     byte ptr gs:85Eh, 0
 * 0000000140BBD492: jmp     KiSystemServiceUser
 * 0000000140BBD497: retn
 */
