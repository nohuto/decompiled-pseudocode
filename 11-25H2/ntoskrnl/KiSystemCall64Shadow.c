/*
 * XREFs of KiSystemCall64Shadow @ 0x140BAC200
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140BAC200 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140BAC200
 * Reason: Hex-Rays returned no pseudocode for 0x140BAC200
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BAC200: swapgs
 * 0000000140BAC203: mov     gs:0B010h, rsp
 * 0000000140BAC20C: mov     rsp, gs:0B000h
 * 0000000140BAC215: bt      dword ptr gs:0B018h, 1
 * 0000000140BAC21F: jb      short loc_140BAC224
 * 0000000140BAC221: mov     cr3, rsp
 * 0000000140BAC224: mov     rsp, gs:0B008h
 * 0000000140BAC22D: push    2Bh ; '+'
 * 0000000140BAC22F: push    qword ptr gs:0B010h
 * 0000000140BAC237: push    r11
 * 0000000140BAC239: push    33h ; '3'
 * 0000000140BAC23B: push    rcx
 * 0000000140BAC23C: mov     rcx, gs:9D28h
 * 0000000140BAC245: test    rcx, rcx
 * 0000000140BAC248: jz      short loc_140BAC256
 * 0000000140BAC24A: setssbsy
 * 0000000140BAC24E: rstorssp qword ptr [rcx]
 * 0000000140BAC252: saveprevssp
 * 0000000140BAC256: mov     rcx, r10
 * 0000000140BAC259: sub     rsp, 8
 * 0000000140BAC25D: push    rbp
 * 0000000140BAC25E: sub     rsp, 158h
 * 0000000140BAC265: lea     rbp, [rsp+190h+var_110]
 * 0000000140BAC26D: mov     [rbp+0C0h], rbx
 * 0000000140BAC274: mov     [rbp+0C8h], rdi
 * 0000000140BAC27B: mov     [rbp+0D0h], rsi
 * 0000000140BAC282: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140BAC289: jz      short loc_140BAC297
 * 0000000140BAC28B: test    byte ptr [rbp+0F0h], 1
 * 0000000140BAC292: jz      short loc_140BAC297
 * 0000000140BAC294: stac
 * 0000000140BAC297: mov     [rbp-50h], rax
 * 0000000140BAC29B: mov     [rbp-48h], rcx
 * 0000000140BAC29F: mov     [rbp-40h], rdx
 * 0000000140BAC2A3: mov     rcx, gs:188h
 * 0000000140BAC2AC: mov     rcx, [rcx+220h]
 * 0000000140BAC2B3: mov     rcx, [rcx+760h]
 * 0000000140BAC2BA: mov     gs:850h, rcx
 * 0000000140BAC2C3: mov     cx, gs:862h
 * 0000000140BAC2CC: mov     gs:864h, cx
 * 0000000140BAC2D5: mov     cl, gs:858h
 * 0000000140BAC2DD: mov     gs:85Ah, cl
 * 0000000140BAC2E5: movzx   eax, word ptr gs:868h
 * 0000000140BAC2EE: cmp     gs:866h, ax
 * 0000000140BAC2F7: jz      short loc_140BAC30B
 * 0000000140BAC2F9: mov     gs:866h, ax
 * 0000000140BAC302: mov     ecx, 48h ; 'H'
 * 0000000140BAC307: xor     edx, edx
 * 0000000140BAC309: wrmsr
 * 0000000140BAC30B: movzx   edx, byte ptr gs:858h
 * 0000000140BAC314: test    edx, 8
 * 0000000140BAC31A: jz      short loc_140BAC333
 * 0000000140BAC31C: mov     eax, 1
 * 0000000140BAC321: xor     edx, edx
 * 0000000140BAC323: mov     ecx, 49h ; 'I'
 * 0000000140BAC328: wrmsr
 * 0000000140BAC32A: movzx   edx, byte ptr gs:858h
 * 0000000140BAC333: test    edx, 2
 * 0000000140BAC339: jz      loc_140BAC476
 * 0000000140BAC33F: call    loc_140BAC452
 * 0000000140BAC344: add     rsp, 8
 * 0000000140BAC348: call    loc_140BAC45B
 * 0000000140BAC34D: add     rsp, 8
 * 0000000140BAC351: call    loc_140BAC344
 * 0000000140BAC356: add     rsp, 8
 * 0000000140BAC35A: call    loc_140BAC34D
 * 0000000140BAC35F: add     rsp, 8
 * 0000000140BAC363: call    loc_140BAC356
 * 0000000140BAC368: add     rsp, 8
 * 0000000140BAC36C: call    loc_140BAC35F
 * 0000000140BAC371: add     rsp, 8
 * 0000000140BAC375: call    loc_140BAC368
 * 0000000140BAC37A: add     rsp, 8
 * 0000000140BAC37E: call    loc_140BAC371
 * 0000000140BAC383: add     rsp, 8
 * 0000000140BAC387: call    loc_140BAC37A
 * 0000000140BAC38C: add     rsp, 8
 * 0000000140BAC390: call    loc_140BAC383
 * 0000000140BAC395: add     rsp, 8
 * 0000000140BAC399: call    loc_140BAC38C
 * 0000000140BAC39E: add     rsp, 8
 * 0000000140BAC3A2: call    loc_140BAC395
 * 0000000140BAC3A7: add     rsp, 8
 * 0000000140BAC3AB: call    loc_140BAC39E
 * 0000000140BAC3B0: add     rsp, 8
 * 0000000140BAC3B4: call    loc_140BAC3A7
 * 0000000140BAC3B9: add     rsp, 8
 * 0000000140BAC3BD: call    loc_140BAC3B0
 * 0000000140BAC3C2: add     rsp, 8
 * 0000000140BAC3C6: call    loc_140BAC3B9
 * 0000000140BAC3CB: add     rsp, 8
 * 0000000140BAC3CF: call    loc_140BAC3C2
 * 0000000140BAC3D4: add     rsp, 8
 * 0000000140BAC3D8: call    loc_140BAC3CB
 * 0000000140BAC3DD: add     rsp, 8
 * 0000000140BAC3E1: call    loc_140BAC3D4
 * 0000000140BAC3E6: add     rsp, 8
 * 0000000140BAC3EA: call    loc_140BAC3DD
 * 0000000140BAC3EF: add     rsp, 8
 * 0000000140BAC3F3: call    loc_140BAC3E6
 * 0000000140BAC3F8: add     rsp, 8
 * 0000000140BAC3FC: call    loc_140BAC3EF
 * 0000000140BAC401: add     rsp, 8
 * 0000000140BAC405: call    loc_140BAC3F8
 * 0000000140BAC40A: add     rsp, 8
 * 0000000140BAC40E: call    loc_140BAC401
 * 0000000140BAC413: add     rsp, 8
 * 0000000140BAC417: call    loc_140BAC40A
 * 0000000140BAC41C: add     rsp, 8
 * 0000000140BAC420: call    loc_140BAC413
 * 0000000140BAC425: add     rsp, 8
 * 0000000140BAC429: call    loc_140BAC41C
 * 0000000140BAC42E: add     rsp, 8
 * 0000000140BAC432: call    loc_140BAC425
 * 0000000140BAC437: add     rsp, 8
 * 0000000140BAC43B: call    loc_140BAC42E
 * 0000000140BAC440: add     rsp, 8
 * 0000000140BAC444: call    loc_140BAC437
 * 0000000140BAC449: add     rsp, 8
 * 0000000140BAC44D: call    loc_140BAC440
 * 0000000140BAC452: add     rsp, 8
 * 0000000140BAC456: call    loc_140BAC449
 * 0000000140BAC45B: add     rsp, 8
 * 0000000140BAC45F: mov     eax, 0DADAh
 * 0000000140BAC464: test    byte ptr gs:85Ch, 8
 * 0000000140BAC46D: jz      short loc_140BAC476
 * 0000000140BAC46F: mov     al, 20h ; ' '
 * 0000000140BAC471: incsspq rax
 * 0000000140BAC476: test    edx, 80h
 * 0000000140BAC47C: jz      short loc_140BAC486
 * 0000000140BAC47E: lfence
 * 0000000140BAC481: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140BAC486: lfence
 * 0000000140BAC489: mov     byte ptr gs:85Eh, 0
 * 0000000140BAC492: jmp     KiSystemServiceUser
 * 0000000140BAC497: retn
 */
