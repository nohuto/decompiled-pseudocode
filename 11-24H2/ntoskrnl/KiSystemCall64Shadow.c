/*
 * XREFs of KiSystemCall64Shadow @ 0x140BBF200
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140BBF200 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140BBF200
 * Reason: Hex-Rays returned no pseudocode for 0x140BBF200
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BBF200: swapgs
 * 0000000140BBF203: mov     gs:0B010h, rsp
 * 0000000140BBF20C: mov     rsp, gs:0B000h
 * 0000000140BBF215: bt      dword ptr gs:0B018h, 1
 * 0000000140BBF21F: jb      short loc_140BBF224
 * 0000000140BBF221: mov     cr3, rsp
 * 0000000140BBF224: mov     rsp, gs:0B008h
 * 0000000140BBF22D: push    2Bh ; '+'
 * 0000000140BBF22F: push    qword ptr gs:0B010h
 * 0000000140BBF237: push    r11
 * 0000000140BBF239: push    33h ; '3'
 * 0000000140BBF23B: push    rcx
 * 0000000140BBF23C: mov     rcx, gs:9D28h
 * 0000000140BBF245: test    rcx, rcx
 * 0000000140BBF248: jz      short loc_140BBF256
 * 0000000140BBF24A: setssbsy
 * 0000000140BBF24E: rstorssp qword ptr [rcx]
 * 0000000140BBF252: saveprevssp
 * 0000000140BBF256: mov     rcx, r10
 * 0000000140BBF259: sub     rsp, 8
 * 0000000140BBF25D: push    rbp
 * 0000000140BBF25E: sub     rsp, 158h
 * 0000000140BBF265: lea     rbp, [rsp+190h+var_110]
 * 0000000140BBF26D: mov     [rbp+0C0h], rbx
 * 0000000140BBF274: mov     [rbp+0C8h], rdi
 * 0000000140BBF27B: mov     [rbp+0D0h], rsi
 * 0000000140BBF282: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140BBF289: jz      short loc_140BBF297
 * 0000000140BBF28B: test    byte ptr [rbp+0F0h], 1
 * 0000000140BBF292: jz      short loc_140BBF297
 * 0000000140BBF294: stac
 * 0000000140BBF297: mov     [rbp-50h], rax
 * 0000000140BBF29B: mov     [rbp-48h], rcx
 * 0000000140BBF29F: mov     [rbp-40h], rdx
 * 0000000140BBF2A3: mov     rcx, gs:188h
 * 0000000140BBF2AC: mov     rcx, [rcx+220h]
 * 0000000140BBF2B3: mov     rcx, [rcx+760h]
 * 0000000140BBF2BA: mov     gs:850h, rcx
 * 0000000140BBF2C3: mov     cx, gs:862h
 * 0000000140BBF2CC: mov     gs:864h, cx
 * 0000000140BBF2D5: mov     cl, gs:858h
 * 0000000140BBF2DD: mov     gs:85Ah, cl
 * 0000000140BBF2E5: movzx   eax, word ptr gs:868h
 * 0000000140BBF2EE: cmp     gs:866h, ax
 * 0000000140BBF2F7: jz      short loc_140BBF30B
 * 0000000140BBF2F9: mov     gs:866h, ax
 * 0000000140BBF302: mov     ecx, 48h ; 'H'
 * 0000000140BBF307: xor     edx, edx
 * 0000000140BBF309: wrmsr
 * 0000000140BBF30B: movzx   edx, byte ptr gs:858h
 * 0000000140BBF314: test    edx, 8
 * 0000000140BBF31A: jz      short loc_140BBF333
 * 0000000140BBF31C: mov     eax, 1
 * 0000000140BBF321: xor     edx, edx
 * 0000000140BBF323: mov     ecx, 49h ; 'I'
 * 0000000140BBF328: wrmsr
 * 0000000140BBF32A: movzx   edx, byte ptr gs:858h
 * 0000000140BBF333: test    edx, 2
 * 0000000140BBF339: jz      loc_140BBF476
 * 0000000140BBF33F: call    loc_140BBF452
 * 0000000140BBF344: add     rsp, 8
 * 0000000140BBF348: call    loc_140BBF45B
 * 0000000140BBF34D: add     rsp, 8
 * 0000000140BBF351: call    loc_140BBF344
 * 0000000140BBF356: add     rsp, 8
 * 0000000140BBF35A: call    loc_140BBF34D
 * 0000000140BBF35F: add     rsp, 8
 * 0000000140BBF363: call    loc_140BBF356
 * 0000000140BBF368: add     rsp, 8
 * 0000000140BBF36C: call    loc_140BBF35F
 * 0000000140BBF371: add     rsp, 8
 * 0000000140BBF375: call    loc_140BBF368
 * 0000000140BBF37A: add     rsp, 8
 * 0000000140BBF37E: call    loc_140BBF371
 * 0000000140BBF383: add     rsp, 8
 * 0000000140BBF387: call    loc_140BBF37A
 * 0000000140BBF38C: add     rsp, 8
 * 0000000140BBF390: call    loc_140BBF383
 * 0000000140BBF395: add     rsp, 8
 * 0000000140BBF399: call    loc_140BBF38C
 * 0000000140BBF39E: add     rsp, 8
 * 0000000140BBF3A2: call    loc_140BBF395
 * 0000000140BBF3A7: add     rsp, 8
 * 0000000140BBF3AB: call    loc_140BBF39E
 * 0000000140BBF3B0: add     rsp, 8
 * 0000000140BBF3B4: call    loc_140BBF3A7
 * 0000000140BBF3B9: add     rsp, 8
 * 0000000140BBF3BD: call    loc_140BBF3B0
 * 0000000140BBF3C2: add     rsp, 8
 * 0000000140BBF3C6: call    loc_140BBF3B9
 * 0000000140BBF3CB: add     rsp, 8
 * 0000000140BBF3CF: call    loc_140BBF3C2
 * 0000000140BBF3D4: add     rsp, 8
 * 0000000140BBF3D8: call    loc_140BBF3CB
 * 0000000140BBF3DD: add     rsp, 8
 * 0000000140BBF3E1: call    loc_140BBF3D4
 * 0000000140BBF3E6: add     rsp, 8
 * 0000000140BBF3EA: call    loc_140BBF3DD
 * 0000000140BBF3EF: add     rsp, 8
 * 0000000140BBF3F3: call    loc_140BBF3E6
 * 0000000140BBF3F8: add     rsp, 8
 * 0000000140BBF3FC: call    loc_140BBF3EF
 * 0000000140BBF401: add     rsp, 8
 * 0000000140BBF405: call    loc_140BBF3F8
 * 0000000140BBF40A: add     rsp, 8
 * 0000000140BBF40E: call    loc_140BBF401
 * 0000000140BBF413: add     rsp, 8
 * 0000000140BBF417: call    loc_140BBF40A
 * 0000000140BBF41C: add     rsp, 8
 * 0000000140BBF420: call    loc_140BBF413
 * 0000000140BBF425: add     rsp, 8
 * 0000000140BBF429: call    loc_140BBF41C
 * 0000000140BBF42E: add     rsp, 8
 * 0000000140BBF432: call    loc_140BBF425
 * 0000000140BBF437: add     rsp, 8
 * 0000000140BBF43B: call    loc_140BBF42E
 * 0000000140BBF440: add     rsp, 8
 * 0000000140BBF444: call    loc_140BBF437
 * 0000000140BBF449: add     rsp, 8
 * 0000000140BBF44D: call    loc_140BBF440
 * 0000000140BBF452: add     rsp, 8
 * 0000000140BBF456: call    loc_140BBF449
 * 0000000140BBF45B: add     rsp, 8
 * 0000000140BBF45F: mov     eax, 0DADAh
 * 0000000140BBF464: test    byte ptr gs:85Ch, 8
 * 0000000140BBF46D: jz      short loc_140BBF476
 * 0000000140BBF46F: mov     al, 20h ; ' '
 * 0000000140BBF471: incsspq rax
 * 0000000140BBF476: test    edx, 80h
 * 0000000140BBF47C: jz      short loc_140BBF486
 * 0000000140BBF47E: lfence
 * 0000000140BBF481: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140BBF486: lfence
 * 0000000140BBF489: mov     byte ptr gs:85Eh, 0
 * 0000000140BBF492: jmp     KiSystemServiceUser
 * 0000000140BBF497: retn
 */
