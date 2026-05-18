/*
 * XREFs of sub_1800A5FF8 @ 0x1800A5FF8
 * Callers:
 *     sub_180003000 @ 0x180003000 (sub_180003000.c)
 *     sub_180003180 @ 0x180003180 (sub_180003180.c)
 *     sub_1800031F0 @ 0x1800031F0 (sub_1800031F0.c)
 *     sub_180003260 @ 0x180003260 (sub_180003260.c)
 *     sub_1800032D0 @ 0x1800032D0 (sub_1800032D0.c)
 *     sub_180003340 @ 0x180003340 (sub_180003340.c)
 *     sub_1800033B0 @ 0x1800033B0 (sub_1800033B0.c)
 *     sub_180003420 @ 0x180003420 (sub_180003420.c)
 *     sub_180003490 @ 0x180003490 (sub_180003490.c)
 *     sub_180003500 @ 0x180003500 (sub_180003500.c)
 *     sub_180003570 @ 0x180003570 (sub_180003570.c)
 *     sub_1800035E0 @ 0x1800035E0 (sub_1800035E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800737C8 @ 0x1800737C8 (sub_1800737C8.c)
 *     sub_18007386C @ 0x18007386C (sub_18007386C.c)
 *     sub_1800A5ED4 @ 0x1800A5ED4 (sub_1800A5ED4.c)
 *     __alloca_probe @ 0x1800D4F40 (__alloca_probe.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1800A5FF8 @ 0x1800A5FF8
 * Reason: Hex-Rays returned no pseudocode for 0x1800A5FF8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800A5FF8: mov     rax, rsp
 * 00000001800A5FFB: mov     [rax+8], rbx
 * 00000001800A5FFF: mov     [rax+10h], rsi
 * 00000001800A6003: mov     [rax+18h], rdi
 * 00000001800A6007: push    rbp
 * 00000001800A6008: push    r12
 * 00000001800A600A: push    r13
 * 00000001800A600C: push    r14
 * 00000001800A600E: push    r15
 * 00000001800A6010: lea     rbp, [rax-9E48h]
 * 00000001800A6017: mov     eax, 9F20h
 * 00000001800A601C: call    __alloca_probe
 * 00000001800A6021: sub     rsp, rax
 * 00000001800A6024: movaps  [rsp+9F40h+var_38+8], xmm6
 * 00000001800A602C: movaps  [rsp+9F40h+var_48+8], xmm7
 * 00000001800A6034: mov     rax, cs:__security_cookie
 * 00000001800A603B: xor     rax, rsp
 * 00000001800A603E: mov     [rbp+9E40h+var_50], rax
 * 00000001800A6045: mov     ebx, cs:TlsIndex
 * 00000001800A604B: mov     rdi, gs:58h
 * 00000001800A6054: mov     r15d, 10h
 * 00000001800A605A: mov     rax, [rdi+rbx*8]
 * 00000001800A605E: or      r14d, 0FFFFFFFFh
 * 00000001800A6062: lea     esi, [r14+2]
 * 00000001800A6066: lea     r12d, [r14+0Ah]
 * 00000001800A606A: lea     r13, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800A6071: mov     eax, [r15+rax]
 * 00000001800A6075: cmp     cs:dword_1801CA230, eax
 * 00000001800A607B: jle     loc_1800A6155
 * 00000001800A6081: lea     rcx, dword_1801CA230
 * 00000001800A6088: call    sub_18000CA40
 * 00000001800A608D: cmp     cs:dword_1801CA230, r14d
 * 00000001800A6094: jnz     loc_1800A6155
 * 00000001800A609A: lea     rax, unk_180180E90
 * 00000001800A60A1: mov     qword ptr [rbp+9E40h+var_91C0], rax
 * 00000001800A60A8: lea     rax, unk_180187274
 * 00000001800A60AF: mov     qword ptr [rbp+9E40h+var_91C0+8], rax
 * 00000001800A60B6: movups  xmm7, [rbp+9E40h+var_91C0]
 * 00000001800A60BD: mov     dword ptr [rbp+9E40h+var_6A20], 5
 * 00000001800A60C7: mov     dword ptr [rbp+9E40h+var_6A20+4], esi
 * 00000001800A60CD: movups  xmm6, [rbp+9E40h+var_6A20]
 * 00000001800A60D4: call    sub_1800A5ED4
 * 00000001800A60D9: mov     r8, rax
 * 00000001800A60DC: mov     r9d, r12d
 * 00000001800A60DF: xor     edx, edx
 * 00000001800A60E1: lea     rcx, [rbp+9E40h+var_3410]
 * 00000001800A60E8: call    sub_1800737C8
 * 00000001800A60ED: nop
 * 00000001800A60EE: mov     r8, rax
 * 00000001800A60F1: mov     rdx, r13
 * 00000001800A60F4: lea     rcx, [rbp+9E40h+var_3530]
 * 00000001800A60FB: call    sub_18001B678
 * 00000001800A6100: nop
 * 00000001800A6101: lea     r8, aPixel; "/Pixel"
 * 00000001800A6108: mov     rdx, rax
 * 00000001800A610B: lea     rcx, [rbp+9E40h+var_6A10]
 * 00000001800A6112: call    sub_18001B5A8
 * 00000001800A6117: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A611C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6121: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6126: mov     rcx, rax
 * 00000001800A6129: call    sub_18007386C
 * 00000001800A612E: nop
 * 00000001800A612F: lea     rcx, [rbp+9E40h+var_3530]
 * 00000001800A6136: call    sub_180011020
 * 00000001800A613B: nop
 * 00000001800A613C: lea     rcx, [rbp+9E40h+var_3410]
 * 00000001800A6143: call    sub_180011020
 * 00000001800A6148: nop
 * 00000001800A6149: lea     rcx, dword_1801CA230
 * 00000001800A6150: call    _Init_thread_footer
 * 00000001800A6155: mov     rax, [rdi+rbx*8]
 * 00000001800A6159: mov     eax, [r15+rax]
 * 00000001800A615D: cmp     cs:dword_1801CA234, eax
 * 00000001800A6163: jle     loc_1800A6238
 * 00000001800A6169: lea     rcx, dword_1801CA234
 * 00000001800A6170: call    sub_18000CA40
 * 00000001800A6175: cmp     cs:dword_1801CA234, r14d
 * 00000001800A617C: jnz     loc_1800A6238
 * 00000001800A6182: lea     rax, unk_180187280
 * 00000001800A6189: mov     qword ptr [rsp+9F40h+var_9EF8+8], rax
 * 00000001800A618E: lea     rax, unk_180187C78
 * 00000001800A6195: mov     qword ptr [rsp+9F40h+var_9EE8], rax
 * 00000001800A619A: movups  xmm7, [rsp+9F40h+var_9EF8+8]
 * 00000001800A619F: mov     dword ptr [rbp+9E40h+var_8D40], 5
 * 00000001800A61A9: mov     dword ptr [rbp+9E40h+var_8D40+4], esi
 * 00000001800A61AF: movups  xmm6, [rbp+9E40h+var_8D40]
 * 00000001800A61B6: call    sub_1800A5ED4
 * 00000001800A61BB: mov     r8, rax
 * 00000001800A61BE: mov     r9d, r12d
 * 00000001800A61C1: mov     rdx, rsi
 * 00000001800A61C4: lea     rcx, [rbp+9E40h+var_31D0]
 * 00000001800A61CB: call    sub_1800737C8
 * 00000001800A61D0: nop
 * 00000001800A61D1: mov     r8, rax
 * 00000001800A61D4: mov     rdx, r13
 * 00000001800A61D7: lea     rcx, [rbp+9E40h+var_32F0]
 * 00000001800A61DE: call    sub_18001B678
 * 00000001800A61E3: nop
 * 00000001800A61E4: lea     r8, aPixel; "/Pixel"
 * 00000001800A61EB: mov     rdx, rax
 * 00000001800A61EE: lea     rcx, [rbp+9E40h+var_69B0]
 * 00000001800A61F5: call    sub_18001B5A8
 * 00000001800A61FA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A61FF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6204: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6209: mov     rcx, rax
 * 00000001800A620C: call    sub_18007386C
 * 00000001800A6211: nop
 * 00000001800A6212: lea     rcx, [rbp+9E40h+var_32F0]
 * 00000001800A6219: call    sub_180011020
 * 00000001800A621E: nop
 * 00000001800A621F: lea     rcx, [rbp+9E40h+var_31D0]
 * 00000001800A6226: call    sub_180011020
 * 00000001800A622B: nop
 * 00000001800A622C: lea     rcx, dword_1801CA234
 * 00000001800A6233: call    _Init_thread_footer
 * 00000001800A6238: mov     rax, [rdi+rbx*8]
 * 00000001800A623C: mov     eax, [r15+rax]
 * 00000001800A6240: cmp     cs:dword_1801CA238, eax
 * 00000001800A6246: jle     loc_1800A631D
 * 00000001800A624C: lea     rcx, dword_1801CA238
 * 00000001800A6253: call    sub_18000CA40
 * 00000001800A6258: cmp     cs:dword_1801CA238, r14d
 * 00000001800A625F: jnz     loc_1800A631D
 * 00000001800A6265: lea     rax, unk_180180E90
 * 00000001800A626C: mov     qword ptr [rsp+9F40h+var_9EE8+8], rax
 * 00000001800A6271: lea     rax, unk_180187274
 * 00000001800A6278: mov     qword ptr [rsp+9F40h+var_9ED8], rax
 * 00000001800A627D: movups  xmm7, [rsp+9F40h+var_9EE8+8]
 * 00000001800A6282: mov     dword ptr [rbp+9E40h+var_8D20], 5
 * 00000001800A628C: mov     dword ptr [rbp+9E40h+var_8D20+4], esi
 * 00000001800A6292: movups  xmm6, [rbp+9E40h+var_8D20]
 * 00000001800A6299: call    sub_1800A5ED4
 * 00000001800A629E: mov     r8, rax
 * 00000001800A62A1: mov     r9d, r12d
 * 00000001800A62A4: mov     edx, 2
 * 00000001800A62A9: lea     rcx, [rbp+9E40h+var_2F90]
 * 00000001800A62B0: call    sub_1800737C8
 * 00000001800A62B5: nop
 * 00000001800A62B6: mov     r8, rax
 * 00000001800A62B9: mov     rdx, r13
 * 00000001800A62BC: lea     rcx, [rbp+9E40h+var_30B0]
 * 00000001800A62C3: call    sub_18001B678
 * 00000001800A62C8: nop
 * 00000001800A62C9: lea     r8, aPixel; "/Pixel"
 * 00000001800A62D0: mov     rdx, rax
 * 00000001800A62D3: lea     rcx, [rbp+9E40h+var_6950]
 * 00000001800A62DA: call    sub_18001B5A8
 * 00000001800A62DF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A62E4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A62E9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A62EE: mov     rcx, rax
 * 00000001800A62F1: call    sub_18007386C
 * 00000001800A62F6: nop
 * 00000001800A62F7: lea     rcx, [rbp+9E40h+var_30B0]
 * 00000001800A62FE: call    sub_180011020
 * 00000001800A6303: nop
 * 00000001800A6304: lea     rcx, [rbp+9E40h+var_2F90]
 * 00000001800A630B: call    sub_180011020
 * 00000001800A6310: nop
 * 00000001800A6311: lea     rcx, dword_1801CA238
 * 00000001800A6318: call    _Init_thread_footer
 * 00000001800A631D: mov     rax, [rdi+rbx*8]
 * 00000001800A6321: mov     eax, [r15+rax]
 * 00000001800A6325: cmp     cs:dword_1801CA23C, eax
 * 00000001800A632B: jle     loc_1800A6402
 * 00000001800A6331: lea     rcx, dword_1801CA23C
 * 00000001800A6338: call    sub_18000CA40
 * 00000001800A633D: cmp     cs:dword_1801CA23C, r14d
 * 00000001800A6344: jnz     loc_1800A6402
 * 00000001800A634A: lea     rax, unk_180187C80
 * 00000001800A6351: mov     qword ptr [rsp+9F40h+var_9ED8+8], rax
 * 00000001800A6356: lea     rax, unk_18018AE24
 * 00000001800A635D: mov     [rsp+9F40h+var_9EC8], rax
 * 00000001800A6362: movups  xmm7, [rsp+9F40h+var_9ED8+8]
 * 00000001800A6367: mov     dword ptr [rbp+9E40h+var_8D00], 5
 * 00000001800A6371: mov     dword ptr [rbp+9E40h+var_8D00+4], esi
 * 00000001800A6377: movups  xmm6, [rbp+9E40h+var_8D00]
 * 00000001800A637E: call    sub_1800A5ED4
 * 00000001800A6383: mov     r8, rax
 * 00000001800A6386: mov     r9d, r12d
 * 00000001800A6389: mov     edx, 4
 * 00000001800A638E: lea     rcx, [rbp+9E40h+var_2D50]
 * 00000001800A6395: call    sub_1800737C8
 * 00000001800A639A: nop
 * 00000001800A639B: mov     r8, rax
 * 00000001800A639E: mov     rdx, r13
 * 00000001800A63A1: lea     rcx, [rbp+9E40h+var_2E70]
 * 00000001800A63A8: call    sub_18001B678
 * 00000001800A63AD: nop
 * 00000001800A63AE: lea     r8, aPixel; "/Pixel"
 * 00000001800A63B5: mov     rdx, rax
 * 00000001800A63B8: lea     rcx, [rbp+9E40h+var_68F0]
 * 00000001800A63BF: call    sub_18001B5A8
 * 00000001800A63C4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A63C9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A63CE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A63D3: mov     rcx, rax
 * 00000001800A63D6: call    sub_18007386C
 * 00000001800A63DB: nop
 * 00000001800A63DC: lea     rcx, [rbp+9E40h+var_2E70]
 * 00000001800A63E3: call    sub_180011020
 * 00000001800A63E8: nop
 * 00000001800A63E9: lea     rcx, [rbp+9E40h+var_2D50]
 * 00000001800A63F0: call    sub_180011020
 * 00000001800A63F5: nop
 * 00000001800A63F6: lea     rcx, dword_1801CA23C
 * 00000001800A63FD: call    _Init_thread_footer
 * 00000001800A6402: mov     rax, [rdi+rbx*8]
 * 00000001800A6406: mov     ecx, [r15+rax]
 * 00000001800A640A: cmp     cs:dword_1801CA240, ecx
 * 00000001800A6410: jle     loc_1800A64E4
 * 00000001800A6416: lea     rcx, dword_1801CA240
 * 00000001800A641D: call    sub_18000CA40
 * 00000001800A6422: cmp     cs:dword_1801CA240, r14d
 * 00000001800A6429: jnz     loc_1800A64E4
 * 00000001800A642F: lea     rax, unk_180187280
 * 00000001800A6436: mov     qword ptr [rbp+9E40h+var_9EC0], rax
 * 00000001800A643A: lea     rax, unk_180187C78
 * 00000001800A6441: mov     qword ptr [rbp+9E40h+var_9EC0+8], rax
 * 00000001800A6445: movups  xmm7, [rbp+9E40h+var_9EC0]
 * 00000001800A6449: mov     dword ptr [rbp+9E40h+var_8CE0], 5
 * 00000001800A6453: mov     dword ptr [rbp+9E40h+var_8CE0+4], esi
 * 00000001800A6459: movups  xmm6, [rbp+9E40h+var_8CE0]
 * 00000001800A6460: call    sub_1800A5ED4
 * 00000001800A6465: mov     r8, rax
 * 00000001800A6468: mov     r9d, r12d
 * 00000001800A646B: mov     edx, 5
 * 00000001800A6470: lea     rcx, [rbp+9E40h+var_2B70]
 * 00000001800A6477: call    sub_1800737C8
 * 00000001800A647C: nop
 * 00000001800A647D: mov     r8, rax
 * 00000001800A6480: mov     rdx, r13
 * 00000001800A6483: lea     rcx, [rbp+9E40h+var_2C70]
 * 00000001800A648A: call    sub_18001B678
 * 00000001800A648F: nop
 * 00000001800A6490: lea     r8, aPixel; "/Pixel"
 * 00000001800A6497: mov     rdx, rax
 * 00000001800A649A: lea     rcx, [rbp+9E40h+var_6890]
 * 00000001800A64A1: call    sub_18001B5A8
 * 00000001800A64A6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A64AB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A64B0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A64B5: mov     rcx, rax
 * 00000001800A64B8: call    sub_18007386C
 * 00000001800A64BD: nop
 * 00000001800A64BE: lea     rcx, [rbp+9E40h+var_2C70]
 * 00000001800A64C5: call    sub_180011020
 * 00000001800A64CA: nop
 * 00000001800A64CB: lea     rcx, [rbp+9E40h+var_2B70]
 * 00000001800A64D2: call    sub_180011020
 * 00000001800A64D7: nop
 * 00000001800A64D8: lea     rcx, dword_1801CA240
 * 00000001800A64DF: call    _Init_thread_footer
 * 00000001800A64E4: mov     rax, [rdi+rbx*8]
 * 00000001800A64E8: mov     eax, [r15+rax]
 * 00000001800A64EC: cmp     cs:dword_1801CA244, eax
 * 00000001800A64F2: jle     loc_1800A65C6
 * 00000001800A64F8: lea     rcx, dword_1801CA244
 * 00000001800A64FF: call    sub_18000CA40
 * 00000001800A6504: cmp     cs:dword_1801CA244, r14d
 * 00000001800A650B: jnz     loc_1800A65C6
 * 00000001800A6511: lea     rax, unk_180187C80
 * 00000001800A6518: mov     qword ptr [rbp+9E40h+var_9EB0], rax
 * 00000001800A651C: lea     rax, unk_18018AE24
 * 00000001800A6523: mov     qword ptr [rbp+9E40h+var_9EB0+8], rax
 * 00000001800A6527: movups  xmm7, [rbp+9E40h+var_9EB0]
 * 00000001800A652B: mov     dword ptr [rbp+9E40h+var_8CC0], 5
 * 00000001800A6535: mov     dword ptr [rbp+9E40h+var_8CC0+4], esi
 * 00000001800A653B: movups  xmm6, [rbp+9E40h+var_8CC0]
 * 00000001800A6542: call    sub_1800A5ED4
 * 00000001800A6547: mov     r8, rax
 * 00000001800A654A: mov     r9d, r12d
 * 00000001800A654D: mov     edx, 6
 * 00000001800A6552: lea     rcx, [rbp+9E40h+var_2930]
 * 00000001800A6559: call    sub_1800737C8
 * 00000001800A655E: nop
 * 00000001800A655F: mov     r8, rax
 * 00000001800A6562: mov     rdx, r13
 * 00000001800A6565: lea     rcx, [rbp+9E40h+var_2A50]
 * 00000001800A656C: call    sub_18001B678
 * 00000001800A6571: nop
 * 00000001800A6572: lea     r8, aPixel; "/Pixel"
 * 00000001800A6579: mov     rdx, rax
 * 00000001800A657C: lea     rcx, [rbp+9E40h+var_6830]
 * 00000001800A6583: call    sub_18001B5A8
 * 00000001800A6588: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A658D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6592: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6597: mov     rcx, rax
 * 00000001800A659A: call    sub_18007386C
 * 00000001800A659F: nop
 * 00000001800A65A0: lea     rcx, [rbp+9E40h+var_2A50]
 * 00000001800A65A7: call    sub_180011020
 * 00000001800A65AC: nop
 * 00000001800A65AD: lea     rcx, [rbp+9E40h+var_2930]
 * 00000001800A65B4: call    sub_180011020
 * 00000001800A65B9: nop
 * 00000001800A65BA: lea     rcx, dword_1801CA244
 * 00000001800A65C1: call    _Init_thread_footer
 * 00000001800A65C6: mov     rax, [rdi+rbx*8]
 * 00000001800A65CA: mov     eax, [r15+rax]
 * 00000001800A65CE: cmp     cs:dword_1801CA248, eax
 * 00000001800A65D4: jle     loc_1800A66A8
 * 00000001800A65DA: lea     rcx, dword_1801CA248
 * 00000001800A65E1: call    sub_18000CA40
 * 00000001800A65E6: cmp     cs:dword_1801CA248, r14d
 * 00000001800A65ED: jnz     loc_1800A66A8
 * 00000001800A65F3: lea     rax, unk_180169670
 * 00000001800A65FA: mov     qword ptr [rbp+9E40h+var_9EA0], rax
 * 00000001800A65FE: lea     rax, unk_18016FBFC
 * 00000001800A6605: mov     qword ptr [rbp+9E40h+var_9EA0+8], rax
 * 00000001800A6609: movups  xmm7, [rbp+9E40h+var_9EA0]
 * 00000001800A660D: mov     dword ptr [rbp+9E40h+var_8CA0], 5
 * 00000001800A6617: mov     dword ptr [rbp+9E40h+var_8CA0+4], esi
 * 00000001800A661D: movups  xmm6, [rbp+9E40h+var_8CA0]
 * 00000001800A6624: call    sub_1800A5ED4
 * 00000001800A6629: mov     r8, rax
 * 00000001800A662C: mov     r9d, r12d
 * 00000001800A662F: mov     edx, 8
 * 00000001800A6634: lea     rcx, [rbp+9E40h+var_26F0]
 * 00000001800A663B: call    sub_1800737C8
 * 00000001800A6640: nop
 * 00000001800A6641: mov     r8, rax
 * 00000001800A6644: mov     rdx, r13
 * 00000001800A6647: lea     rcx, [rbp+9E40h+var_2810]
 * 00000001800A664E: call    sub_18001B678
 * 00000001800A6653: nop
 * 00000001800A6654: lea     r8, aPixel; "/Pixel"
 * 00000001800A665B: mov     rdx, rax
 * 00000001800A665E: lea     rcx, [rbp+9E40h+var_67D0]
 * 00000001800A6665: call    sub_18001B5A8
 * 00000001800A666A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A666F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6674: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6679: mov     rcx, rax
 * 00000001800A667C: call    sub_18007386C
 * 00000001800A6681: nop
 * 00000001800A6682: lea     rcx, [rbp+9E40h+var_2810]
 * 00000001800A6689: call    sub_180011020
 * 00000001800A668E: nop
 * 00000001800A668F: lea     rcx, [rbp+9E40h+var_26F0]
 * 00000001800A6696: call    sub_180011020
 * 00000001800A669B: nop
 * 00000001800A669C: lea     rcx, dword_1801CA248
 * 00000001800A66A3: call    _Init_thread_footer
 * 00000001800A66A8: mov     rax, [rdi+rbx*8]
 * 00000001800A66AC: mov     eax, [r15+rax]
 * 00000001800A66B0: cmp     cs:dword_1801CA24C, eax
 * 00000001800A66B6: jle     loc_1800A6788
 * 00000001800A66BC: lea     rcx, dword_1801CA24C
 * 00000001800A66C3: call    sub_18000CA40
 * 00000001800A66C8: cmp     cs:dword_1801CA24C, r14d
 * 00000001800A66CF: jnz     loc_1800A6788
 * 00000001800A66D5: lea     rax, unk_18016FC00
 * 00000001800A66DC: mov     qword ptr [rbp+9E40h+var_9E90], rax
 * 00000001800A66E0: lea     rax, unk_180170CC8
 * 00000001800A66E7: mov     qword ptr [rbp+9E40h+var_9E90+8], rax
 * 00000001800A66EB: movups  xmm7, [rbp+9E40h+var_9E90]
 * 00000001800A66EF: mov     dword ptr [rbp+9E40h+var_8C80], 5
 * 00000001800A66F9: mov     dword ptr [rbp+9E40h+var_8C80+4], esi
 * 00000001800A66FF: movups  xmm6, [rbp+9E40h+var_8C80]
 * 00000001800A6706: call    sub_1800A5ED4
 * 00000001800A670B: mov     r8, rax
 * 00000001800A670E: mov     r9d, r12d
 * 00000001800A6711: mov     rdx, r12
 * 00000001800A6714: lea     rcx, [rbp+9E40h+var_24B0]
 * 00000001800A671B: call    sub_1800737C8
 * 00000001800A6720: nop
 * 00000001800A6721: mov     r8, rax
 * 00000001800A6724: mov     rdx, r13
 * 00000001800A6727: lea     rcx, [rbp+9E40h+var_25D0]
 * 00000001800A672E: call    sub_18001B678
 * 00000001800A6733: nop
 * 00000001800A6734: lea     r8, aPixel; "/Pixel"
 * 00000001800A673B: mov     rdx, rax
 * 00000001800A673E: lea     rcx, [rbp+9E40h+var_6770]
 * 00000001800A6745: call    sub_18001B5A8
 * 00000001800A674A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A674F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6754: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6759: mov     rcx, rax
 * 00000001800A675C: call    sub_18007386C
 * 00000001800A6761: nop
 * 00000001800A6762: lea     rcx, [rbp+9E40h+var_25D0]
 * 00000001800A6769: call    sub_180011020
 * 00000001800A676E: nop
 * 00000001800A676F: lea     rcx, [rbp+9E40h+var_24B0]
 * 00000001800A6776: call    sub_180011020
 * 00000001800A677B: nop
 * 00000001800A677C: lea     rcx, dword_1801CA24C
 * 00000001800A6783: call    _Init_thread_footer
 * 00000001800A6788: mov     rax, [rdi+rbx*8]
 * 00000001800A678C: mov     eax, [r15+rax]
 * 00000001800A6790: cmp     cs:dword_1801CA250, eax
 * 00000001800A6796: jle     loc_1800A686A
 * 00000001800A679C: lea     rcx, dword_1801CA250
 * 00000001800A67A3: call    sub_18000CA40
 * 00000001800A67A8: cmp     cs:dword_1801CA250, r14d
 * 00000001800A67AF: jnz     loc_1800A686A
 * 00000001800A67B5: lea     rax, unk_180169670
 * 00000001800A67BC: mov     qword ptr [rbp+9E40h+var_9E80], rax
 * 00000001800A67C0: lea     rax, unk_18016FBFC
 * 00000001800A67C7: mov     qword ptr [rbp+9E40h+var_9E80+8], rax
 * 00000001800A67CB: movups  xmm7, [rbp+9E40h+var_9E80]
 * 00000001800A67CF: mov     dword ptr [rbp+9E40h+var_8C60], 5
 * 00000001800A67D9: mov     dword ptr [rbp+9E40h+var_8C60+4], esi
 * 00000001800A67DF: movups  xmm6, [rbp+9E40h+var_8C60]
 * 00000001800A67E6: call    sub_1800A5ED4
 * 00000001800A67EB: mov     r8, rax
 * 00000001800A67EE: mov     r9d, r12d
 * 00000001800A67F1: mov     edx, 0Ah
 * 00000001800A67F6: lea     rcx, [rbp+9E40h+var_2270]
 * 00000001800A67FD: call    sub_1800737C8
 * 00000001800A6802: nop
 * 00000001800A6803: mov     r8, rax
 * 00000001800A6806: mov     rdx, r13
 * 00000001800A6809: lea     rcx, [rbp+9E40h+var_2390]
 * 00000001800A6810: call    sub_18001B678
 * 00000001800A6815: nop
 * 00000001800A6816: lea     r8, aPixel; "/Pixel"
 * 00000001800A681D: mov     rdx, rax
 * 00000001800A6820: lea     rcx, [rbp+9E40h+var_6710]
 * 00000001800A6827: call    sub_18001B5A8
 * 00000001800A682C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6831: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6836: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A683B: mov     rcx, rax
 * 00000001800A683E: call    sub_18007386C
 * 00000001800A6843: nop
 * 00000001800A6844: lea     rcx, [rbp+9E40h+var_2390]
 * 00000001800A684B: call    sub_180011020
 * 00000001800A6850: nop
 * 00000001800A6851: lea     rcx, [rbp+9E40h+var_2270]
 * 00000001800A6858: call    sub_180011020
 * 00000001800A685D: nop
 * 00000001800A685E: lea     rcx, dword_1801CA250
 * 00000001800A6865: call    _Init_thread_footer
 * 00000001800A686A: mov     rax, [rdi+rbx*8]
 * 00000001800A686E: mov     eax, [r15+rax]
 * 00000001800A6872: cmp     cs:dword_1801CA254, eax
 * 00000001800A6878: jle     loc_1800A694C
 * 00000001800A687E: lea     rcx, dword_1801CA254
 * 00000001800A6885: call    sub_18000CA40
 * 00000001800A688A: cmp     cs:dword_1801CA254, r14d
 * 00000001800A6891: jnz     loc_1800A694C
 * 00000001800A6897: lea     rax, unk_1801630B0
 * 00000001800A689E: mov     qword ptr [rbp+9E40h+var_9E70], rax
 * 00000001800A68A2: lea     rax, unk_180169668
 * 00000001800A68A9: mov     qword ptr [rbp+9E40h+var_9E70+8], rax
 * 00000001800A68AD: movups  xmm7, [rbp+9E40h+var_9E70]
 * 00000001800A68B1: mov     dword ptr [rbp+9E40h+var_8C40], 5
 * 00000001800A68BB: mov     dword ptr [rbp+9E40h+var_8C40+4], esi
 * 00000001800A68C1: movups  xmm6, [rbp+9E40h+var_8C40]
 * 00000001800A68C8: call    sub_1800A5ED4
 * 00000001800A68CD: mov     r8, rax
 * 00000001800A68D0: mov     r9d, r12d
 * 00000001800A68D3: mov     edx, 10h
 * 00000001800A68D8: lea     rcx, [rbp+9E40h+var_2030]
 * 00000001800A68DF: call    sub_1800737C8
 * 00000001800A68E4: nop
 * 00000001800A68E5: mov     r8, rax
 * 00000001800A68E8: mov     rdx, r13
 * 00000001800A68EB: lea     rcx, [rbp+9E40h+var_2150]
 * 00000001800A68F2: call    sub_18001B678
 * 00000001800A68F7: nop
 * 00000001800A68F8: lea     r8, aPixel; "/Pixel"
 * 00000001800A68FF: mov     rdx, rax
 * 00000001800A6902: lea     rcx, [rbp+9E40h+var_66B0]
 * 00000001800A6909: call    sub_18001B5A8
 * 00000001800A690E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6913: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6918: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A691D: mov     rcx, rax
 * 00000001800A6920: call    sub_18007386C
 * 00000001800A6925: nop
 * 00000001800A6926: lea     rcx, [rbp+9E40h+var_2150]
 * 00000001800A692D: call    sub_180011020
 * 00000001800A6932: nop
 * 00000001800A6933: lea     rcx, [rbp+9E40h+var_2030]
 * 00000001800A693A: call    sub_180011020
 * 00000001800A693F: nop
 * 00000001800A6940: lea     rcx, dword_1801CA254
 * 00000001800A6947: call    _Init_thread_footer
 * 00000001800A694C: mov     rax, [rdi+rbx*8]
 * 00000001800A6950: mov     eax, [r15+rax]
 * 00000001800A6954: cmp     cs:dword_1801CA258, eax
 * 00000001800A695A: jle     loc_1800A6A2E
 * 00000001800A6960: lea     rcx, dword_1801CA258
 * 00000001800A6967: call    sub_18000CA40
 * 00000001800A696C: cmp     cs:dword_1801CA258, r14d
 * 00000001800A6973: jnz     loc_1800A6A2E
 * 00000001800A6979: lea     rax, unk_1801630B0
 * 00000001800A6980: mov     qword ptr [rbp+9E40h+var_9E60], rax
 * 00000001800A6984: lea     rax, unk_180169668
 * 00000001800A698B: mov     qword ptr [rbp+9E40h+var_9E60+8], rax
 * 00000001800A698F: movups  xmm7, [rbp+9E40h+var_9E60]
 * 00000001800A6993: mov     dword ptr [rbp+9E40h+var_8C20], 5
 * 00000001800A699D: mov     dword ptr [rbp+9E40h+var_8C20+4], esi
 * 00000001800A69A3: movups  xmm6, [rbp+9E40h+var_8C20]
 * 00000001800A69AA: call    sub_1800A5ED4
 * 00000001800A69AF: mov     r8, rax
 * 00000001800A69B2: mov     r9d, r12d
 * 00000001800A69B5: mov     edx, 12h
 * 00000001800A69BA: lea     rcx, [rbp+9E40h+var_1DF0]
 * 00000001800A69C1: call    sub_1800737C8
 * 00000001800A69C6: nop
 * 00000001800A69C7: mov     r8, rax
 * 00000001800A69CA: mov     rdx, r13
 * 00000001800A69CD: lea     rcx, [rbp+9E40h+var_1F10]
 * 00000001800A69D4: call    sub_18001B678
 * 00000001800A69D9: nop
 * 00000001800A69DA: lea     r8, aPixel; "/Pixel"
 * 00000001800A69E1: mov     rdx, rax
 * 00000001800A69E4: lea     rcx, [rbp+9E40h+var_6650]
 * 00000001800A69EB: call    sub_18001B5A8
 * 00000001800A69F0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A69F5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A69FA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A69FF: mov     rcx, rax
 * 00000001800A6A02: call    sub_18007386C
 * 00000001800A6A07: nop
 * 00000001800A6A08: lea     rcx, [rbp+9E40h+var_1F10]
 * 00000001800A6A0F: call    sub_180011020
 * 00000001800A6A14: nop
 * 00000001800A6A15: lea     rcx, [rbp+9E40h+var_1DF0]
 * 00000001800A6A1C: call    sub_180011020
 * 00000001800A6A21: nop
 * 00000001800A6A22: lea     rcx, dword_1801CA258
 * 00000001800A6A29: call    _Init_thread_footer
 * 00000001800A6A2E: mov     rax, [rdi+rbx*8]
 * 00000001800A6A32: mov     eax, [r15+rax]
 * 00000001800A6A36: cmp     cs:dword_1801CA25C, eax
 * 00000001800A6A3C: jle     loc_1800A6B10
 * 00000001800A6A42: lea     rcx, dword_1801CA25C
 * 00000001800A6A49: call    sub_18000CA40
 * 00000001800A6A4E: cmp     cs:dword_1801CA25C, r14d
 * 00000001800A6A55: jnz     loc_1800A6B10
 * 00000001800A6A5B: lea     rax, unk_18017DB90
 * 00000001800A6A62: mov     qword ptr [rbp+9E40h+var_9E50], rax
 * 00000001800A6A66: lea     rax, unk_180180E88
 * 00000001800A6A6D: mov     qword ptr [rbp+9E40h+var_9E50+8], rax
 * 00000001800A6A71: movups  xmm7, [rbp+9E40h+var_9E50]
 * 00000001800A6A75: mov     dword ptr [rbp+9E40h+var_8C00], 5
 * 00000001800A6A7F: mov     dword ptr [rbp+9E40h+var_8C00+4], esi
 * 00000001800A6A85: movups  xmm6, [rbp+9E40h+var_8C00]
 * 00000001800A6A8C: call    sub_1800A5ED4
 * 00000001800A6A91: mov     r8, rax
 * 00000001800A6A94: mov     r9d, r12d
 * 00000001800A6A97: mov     edx, 14h
 * 00000001800A6A9C: lea     rcx, [rbp+9E40h+var_1BB0]
 * 00000001800A6AA3: call    sub_1800737C8
 * 00000001800A6AA8: nop
 * 00000001800A6AA9: mov     r8, rax
 * 00000001800A6AAC: mov     rdx, r13
 * 00000001800A6AAF: lea     rcx, [rbp+9E40h+var_1CD0]
 * 00000001800A6AB6: call    sub_18001B678
 * 00000001800A6ABB: nop
 * 00000001800A6ABC: lea     r8, aPixel; "/Pixel"
 * 00000001800A6AC3: mov     rdx, rax
 * 00000001800A6AC6: lea     rcx, [rbp+9E40h+var_65F0]
 * 00000001800A6ACD: call    sub_18001B5A8
 * 00000001800A6AD2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6AD7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6ADC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6AE1: mov     rcx, rax
 * 00000001800A6AE4: call    sub_18007386C
 * 00000001800A6AE9: nop
 * 00000001800A6AEA: lea     rcx, [rbp+9E40h+var_1CD0]
 * 00000001800A6AF1: call    sub_180011020
 * 00000001800A6AF6: nop
 * 00000001800A6AF7: lea     rcx, [rbp+9E40h+var_1BB0]
 * 00000001800A6AFE: call    sub_180011020
 * 00000001800A6B03: nop
 * 00000001800A6B04: lea     rcx, dword_1801CA25C
 * 00000001800A6B0B: call    _Init_thread_footer
 * 00000001800A6B10: mov     rax, [rdi+rbx*8]
 * 00000001800A6B14: mov     eax, [r15+rax]
 * 00000001800A6B18: cmp     cs:dword_1801CA260, eax
 * 00000001800A6B1E: jle     loc_1800A6BF2
 * 00000001800A6B24: lea     rcx, dword_1801CA260
 * 00000001800A6B2B: call    sub_18000CA40
 * 00000001800A6B30: cmp     cs:dword_1801CA260, r14d
 * 00000001800A6B37: jnz     loc_1800A6BF2
 * 00000001800A6B3D: lea     rax, unk_18017DB90
 * 00000001800A6B44: mov     qword ptr [rbp+9E40h+var_9E40], rax
 * 00000001800A6B48: lea     rax, unk_180180E88
 * 00000001800A6B4F: mov     qword ptr [rbp+9E40h+var_9E40+8], rax
 * 00000001800A6B53: movups  xmm7, [rbp+9E40h+var_9E40]
 * 00000001800A6B57: mov     dword ptr [rbp+9E40h+var_8BE0], 5
 * 00000001800A6B61: mov     dword ptr [rbp+9E40h+var_8BE0+4], esi
 * 00000001800A6B67: movups  xmm6, [rbp+9E40h+var_8BE0]
 * 00000001800A6B6E: call    sub_1800A5ED4
 * 00000001800A6B73: mov     r8, rax
 * 00000001800A6B76: mov     r9d, r12d
 * 00000001800A6B79: mov     edx, 16h
 * 00000001800A6B7E: lea     rcx, [rbp+9E40h+var_1970]
 * 00000001800A6B85: call    sub_1800737C8
 * 00000001800A6B8A: nop
 * 00000001800A6B8B: mov     r8, rax
 * 00000001800A6B8E: mov     rdx, r13
 * 00000001800A6B91: lea     rcx, [rbp+9E40h+var_1A90]
 * 00000001800A6B98: call    sub_18001B678
 * 00000001800A6B9D: nop
 * 00000001800A6B9E: lea     r8, aPixel; "/Pixel"
 * 00000001800A6BA5: mov     rdx, rax
 * 00000001800A6BA8: lea     rcx, [rbp+9E40h+var_6590]
 * 00000001800A6BAF: call    sub_18001B5A8
 * 00000001800A6BB4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6BB9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6BBE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6BC3: mov     rcx, rax
 * 00000001800A6BC6: call    sub_18007386C
 * 00000001800A6BCB: nop
 * 00000001800A6BCC: lea     rcx, [rbp+9E40h+var_1A90]
 * 00000001800A6BD3: call    sub_180011020
 * 00000001800A6BD8: nop
 * 00000001800A6BD9: lea     rcx, [rbp+9E40h+var_1970]
 * 00000001800A6BE0: call    sub_180011020
 * 00000001800A6BE5: nop
 * 00000001800A6BE6: lea     rcx, dword_1801CA260
 * 00000001800A6BED: call    _Init_thread_footer
 * 00000001800A6BF2: mov     rax, [rdi+rbx*8]
 * 00000001800A6BF6: mov     eax, [r15+rax]
 * 00000001800A6BFA: cmp     cs:dword_1801CA264, eax
 * 00000001800A6C00: jle     loc_1800A6CD4
 * 00000001800A6C06: lea     rcx, dword_1801CA264
 * 00000001800A6C0D: call    sub_18000CA40
 * 00000001800A6C12: cmp     cs:dword_1801CA264, r14d
 * 00000001800A6C19: jnz     loc_1800A6CD4
 * 00000001800A6C1F: lea     rax, unk_180170CD0
 * 00000001800A6C26: mov     qword ptr [rbp+9E40h+var_9E30], rax
 * 00000001800A6C2A: lea     rax, unk_18017745C
 * 00000001800A6C31: mov     qword ptr [rbp+9E40h+var_9E30+8], rax
 * 00000001800A6C35: movups  xmm7, [rbp+9E40h+var_9E30]
 * 00000001800A6C39: mov     dword ptr [rbp+9E40h+var_8BC0], 5
 * 00000001800A6C43: mov     dword ptr [rbp+9E40h+var_8BC0+4], esi
 * 00000001800A6C49: movups  xmm6, [rbp+9E40h+var_8BC0]
 * 00000001800A6C50: call    sub_1800A5ED4
 * 00000001800A6C55: mov     r8, rax
 * 00000001800A6C58: mov     r9d, r12d
 * 00000001800A6C5B: mov     edx, 18h
 * 00000001800A6C60: lea     rcx, [rbp+9E40h+var_1730]
 * 00000001800A6C67: call    sub_1800737C8
 * 00000001800A6C6C: nop
 * 00000001800A6C6D: mov     r8, rax
 * 00000001800A6C70: mov     rdx, r13
 * 00000001800A6C73: lea     rcx, [rbp+9E40h+var_1850]
 * 00000001800A6C7A: call    sub_18001B678
 * 00000001800A6C7F: nop
 * 00000001800A6C80: lea     r8, aPixel; "/Pixel"
 * 00000001800A6C87: mov     rdx, rax
 * 00000001800A6C8A: lea     rcx, [rbp+9E40h+var_6530]
 * 00000001800A6C91: call    sub_18001B5A8
 * 00000001800A6C96: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6C9B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6CA0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6CA5: mov     rcx, rax
 * 00000001800A6CA8: call    sub_18007386C
 * 00000001800A6CAD: nop
 * 00000001800A6CAE: lea     rcx, [rbp+9E40h+var_1850]
 * 00000001800A6CB5: call    sub_180011020
 * 00000001800A6CBA: nop
 * 00000001800A6CBB: lea     rcx, [rbp+9E40h+var_1730]
 * 00000001800A6CC2: call    sub_180011020
 * 00000001800A6CC7: nop
 * 00000001800A6CC8: lea     rcx, dword_1801CA264
 * 00000001800A6CCF: call    _Init_thread_footer
 * 00000001800A6CD4: mov     rax, [rdi+rbx*8]
 * 00000001800A6CD8: mov     eax, [r15+rax]
 * 00000001800A6CDC: cmp     cs:dword_1801CA268, eax
 * 00000001800A6CE2: jle     loc_1800A6DB6
 * 00000001800A6CE8: lea     rcx, dword_1801CA268
 * 00000001800A6CEF: call    sub_18000CA40
 * 00000001800A6CF4: cmp     cs:dword_1801CA268, r14d
 * 00000001800A6CFB: jnz     loc_1800A6DB6
 * 00000001800A6D01: lea     rax, unk_180170CD0
 * 00000001800A6D08: mov     qword ptr [rbp+9E40h+var_9E20], rax
 * 00000001800A6D0C: lea     rax, unk_18017745C
 * 00000001800A6D13: mov     qword ptr [rbp+9E40h+var_9E20+8], rax
 * 00000001800A6D17: movups  xmm7, [rbp+9E40h+var_9E20]
 * 00000001800A6D1B: mov     dword ptr [rbp+9E40h+var_8BA0], 5
 * 00000001800A6D25: mov     dword ptr [rbp+9E40h+var_8BA0+4], esi
 * 00000001800A6D2B: movups  xmm6, [rbp+9E40h+var_8BA0]
 * 00000001800A6D32: call    sub_1800A5ED4
 * 00000001800A6D37: mov     r8, rax
 * 00000001800A6D3A: mov     r9d, r12d
 * 00000001800A6D3D: mov     edx, 1Ah
 * 00000001800A6D42: lea     rcx, [rbp+9E40h+var_1490]
 * 00000001800A6D49: call    sub_1800737C8
 * 00000001800A6D4E: nop
 * 00000001800A6D4F: mov     r8, rax
 * 00000001800A6D52: mov     rdx, r13
 * 00000001800A6D55: lea     rcx, [rbp+9E40h+var_15B0]
 * 00000001800A6D5C: call    sub_18001B678
 * 00000001800A6D61: nop
 * 00000001800A6D62: lea     r8, aPixel; "/Pixel"
 * 00000001800A6D69: mov     rdx, rax
 * 00000001800A6D6C: lea     rcx, [rbp+9E40h+var_64D0]
 * 00000001800A6D73: call    sub_18001B5A8
 * 00000001800A6D78: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6D7D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6D82: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6D87: mov     rcx, rax
 * 00000001800A6D8A: call    sub_18007386C
 * 00000001800A6D8F: nop
 * 00000001800A6D90: lea     rcx, [rbp+9E40h+var_15B0]
 * 00000001800A6D97: call    sub_180011020
 * 00000001800A6D9C: nop
 * 00000001800A6D9D: lea     rcx, [rbp+9E40h+var_1490]
 * 00000001800A6DA4: call    sub_180011020
 * 00000001800A6DA9: nop
 * 00000001800A6DAA: lea     rcx, dword_1801CA268
 * 00000001800A6DB1: call    _Init_thread_footer
 * 00000001800A6DB6: mov     rax, [rdi+rbx*8]
 * 00000001800A6DBA: mov     eax, [r15+rax]
 * 00000001800A6DBE: cmp     cs:dword_1801CA26C, eax
 * 00000001800A6DC4: jle     loc_1800A6E98
 * 00000001800A6DCA: lea     rcx, dword_1801CA26C
 * 00000001800A6DD1: call    sub_18000CA40
 * 00000001800A6DD6: cmp     cs:dword_1801CA26C, r14d
 * 00000001800A6DDD: jnz     loc_1800A6E98
 * 00000001800A6DE3: lea     rax, unk_180180E90
 * 00000001800A6DEA: mov     qword ptr [rbp+9E40h+var_9E10], rax
 * 00000001800A6DEE: lea     rax, unk_180187274
 * 00000001800A6DF5: mov     qword ptr [rbp+9E40h+var_9E10+8], rax
 * 00000001800A6DF9: movups  xmm7, [rbp+9E40h+var_9E10]
 * 00000001800A6DFD: mov     dword ptr [rbp+9E40h+var_8B80], 5
 * 00000001800A6E07: mov     dword ptr [rbp+9E40h+var_8B80+4], esi
 * 00000001800A6E0D: movups  xmm6, [rbp+9E40h+var_8B80]
 * 00000001800A6E14: call    sub_1800A5ED4
 * 00000001800A6E19: mov     r8, rax
 * 00000001800A6E1C: mov     r9d, r12d
 * 00000001800A6E1F: mov     edx, 20h ; ' '
 * 00000001800A6E24: lea     rcx, [rbp+9E40h+var_1250]
 * 00000001800A6E2B: call    sub_1800737C8
 * 00000001800A6E30: nop
 * 00000001800A6E31: mov     r8, rax
 * 00000001800A6E34: mov     rdx, r13
 * 00000001800A6E37: lea     rcx, [rbp+9E40h+var_1370]
 * 00000001800A6E3E: call    sub_18001B678
 * 00000001800A6E43: nop
 * 00000001800A6E44: lea     r8, aPixel; "/Pixel"
 * 00000001800A6E4B: mov     rdx, rax
 * 00000001800A6E4E: lea     rcx, [rbp+9E40h+var_6470]
 * 00000001800A6E55: call    sub_18001B5A8
 * 00000001800A6E5A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6E5F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6E64: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6E69: mov     rcx, rax
 * 00000001800A6E6C: call    sub_18007386C
 * 00000001800A6E71: nop
 * 00000001800A6E72: lea     rcx, [rbp+9E40h+var_1370]
 * 00000001800A6E79: call    sub_180011020
 * 00000001800A6E7E: nop
 * 00000001800A6E7F: lea     rcx, [rbp+9E40h+var_1250]
 * 00000001800A6E86: call    sub_180011020
 * 00000001800A6E8B: nop
 * 00000001800A6E8C: lea     rcx, dword_1801CA26C
 * 00000001800A6E93: call    _Init_thread_footer
 * 00000001800A6E98: mov     rax, [rdi+rbx*8]
 * 00000001800A6E9C: mov     eax, [r15+rax]
 * 00000001800A6EA0: cmp     cs:dword_1801CA270, eax
 * 00000001800A6EA6: jle     loc_1800A6F7A
 * 00000001800A6EAC: lea     rcx, dword_1801CA270
 * 00000001800A6EB3: call    sub_18000CA40
 * 00000001800A6EB8: cmp     cs:dword_1801CA270, r14d
 * 00000001800A6EBF: jnz     loc_1800A6F7A
 * 00000001800A6EC5: lea     rax, unk_180187280
 * 00000001800A6ECC: mov     qword ptr [rbp+9E40h+var_9E00], rax
 * 00000001800A6ED0: lea     rax, unk_180187C78
 * 00000001800A6ED7: mov     qword ptr [rbp+9E40h+var_9E00+8], rax
 * 00000001800A6EDB: movups  xmm7, [rbp+9E40h+var_9E00]
 * 00000001800A6EDF: mov     dword ptr [rbp+9E40h+var_8B60], 5
 * 00000001800A6EE9: mov     dword ptr [rbp+9E40h+var_8B60+4], esi
 * 00000001800A6EEF: movups  xmm6, [rbp+9E40h+var_8B60]
 * 00000001800A6EF6: call    sub_1800A5ED4
 * 00000001800A6EFB: mov     r8, rax
 * 00000001800A6EFE: mov     r9d, r12d
 * 00000001800A6F01: mov     edx, 21h ; '!'
 * 00000001800A6F06: lea     rcx, [rbp+9E40h+var_1010]
 * 00000001800A6F0D: call    sub_1800737C8
 * 00000001800A6F12: nop
 * 00000001800A6F13: mov     r8, rax
 * 00000001800A6F16: mov     rdx, r13
 * 00000001800A6F19: lea     rcx, [rbp+9E40h+var_1130]
 * 00000001800A6F20: call    sub_18001B678
 * 00000001800A6F25: nop
 * 00000001800A6F26: lea     r8, aPixel; "/Pixel"
 * 00000001800A6F2D: mov     rdx, rax
 * 00000001800A6F30: lea     rcx, [rbp+9E40h+var_69D0]
 * 00000001800A6F37: call    sub_18001B5A8
 * 00000001800A6F3C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6F41: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6F46: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6F4B: mov     rcx, rax
 * 00000001800A6F4E: call    sub_18007386C
 * 00000001800A6F53: nop
 * 00000001800A6F54: lea     rcx, [rbp+9E40h+var_1130]
 * 00000001800A6F5B: call    sub_180011020
 * 00000001800A6F60: nop
 * 00000001800A6F61: lea     rcx, [rbp+9E40h+var_1010]
 * 00000001800A6F68: call    sub_180011020
 * 00000001800A6F6D: nop
 * 00000001800A6F6E: lea     rcx, dword_1801CA270
 * 00000001800A6F75: call    _Init_thread_footer
 * 00000001800A6F7A: mov     rax, [rdi+rbx*8]
 * 00000001800A6F7E: mov     eax, [r15+rax]
 * 00000001800A6F82: cmp     cs:dword_1801CA274, eax
 * 00000001800A6F88: jle     loc_1800A705C
 * 00000001800A6F8E: lea     rcx, dword_1801CA274
 * 00000001800A6F95: call    sub_18000CA40
 * 00000001800A6F9A: cmp     cs:dword_1801CA274, r14d
 * 00000001800A6FA1: jnz     loc_1800A705C
 * 00000001800A6FA7: lea     rax, unk_180180E90
 * 00000001800A6FAE: mov     qword ptr [rbp+9E40h+var_9DF0], rax
 * 00000001800A6FB2: lea     rax, unk_180187274
 * 00000001800A6FB9: mov     qword ptr [rbp+9E40h+var_9DF0+8], rax
 * 00000001800A6FBD: movups  xmm7, [rbp+9E40h+var_9DF0]
 * 00000001800A6FC1: mov     dword ptr [rbp+9E40h+var_8B40], 5
 * 00000001800A6FCB: mov     dword ptr [rbp+9E40h+var_8B40+4], esi
 * 00000001800A6FD1: movups  xmm6, [rbp+9E40h+var_8B40]
 * 00000001800A6FD8: call    sub_1800A5ED4
 * 00000001800A6FDD: mov     r8, rax
 * 00000001800A6FE0: mov     r9d, r12d
 * 00000001800A6FE3: mov     edx, 22h ; '"'
 * 00000001800A6FE8: lea     rcx, [rbp+9E40h+var_DD0]
 * 00000001800A6FEF: call    sub_1800737C8
 * 00000001800A6FF4: nop
 * 00000001800A6FF5: mov     r8, rax
 * 00000001800A6FF8: mov     rdx, r13
 * 00000001800A6FFB: lea     rcx, [rbp+9E40h+var_EF0]
 * 00000001800A7002: call    sub_18001B678
 * 00000001800A7007: nop
 * 00000001800A7008: lea     r8, aPixel; "/Pixel"
 * 00000001800A700F: mov     rdx, rax
 * 00000001800A7012: lea     rcx, [rbp+9E40h+var_6930]
 * 00000001800A7019: call    sub_18001B5A8
 * 00000001800A701E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7023: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7028: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A702D: mov     rcx, rax
 * 00000001800A7030: call    sub_18007386C
 * 00000001800A7035: nop
 * 00000001800A7036: lea     rcx, [rbp+9E40h+var_EF0]
 * 00000001800A703D: call    sub_180011020
 * 00000001800A7042: nop
 * 00000001800A7043: lea     rcx, [rbp+9E40h+var_DD0]
 * 00000001800A704A: call    sub_180011020
 * 00000001800A704F: nop
 * 00000001800A7050: lea     rcx, dword_1801CA274
 * 00000001800A7057: call    _Init_thread_footer
 * 00000001800A705C: mov     rax, [rdi+rbx*8]
 * 00000001800A7060: mov     eax, [r15+rax]
 * 00000001800A7064: cmp     cs:dword_1801CA278, eax
 * 00000001800A706A: jle     loc_1800A713E
 * 00000001800A7070: lea     rcx, dword_1801CA278
 * 00000001800A7077: call    sub_18000CA40
 * 00000001800A707C: cmp     cs:dword_1801CA278, r14d
 * 00000001800A7083: jnz     loc_1800A713E
 * 00000001800A7089: lea     rax, unk_180169670
 * 00000001800A7090: mov     qword ptr [rbp+9E40h+var_9DE0], rax
 * 00000001800A7094: lea     rax, unk_18016FBFC
 * 00000001800A709B: mov     qword ptr [rbp+9E40h+var_9DE0+8], rax
 * 00000001800A709F: movups  xmm7, [rbp+9E40h+var_9DE0]
 * 00000001800A70A3: mov     dword ptr [rbp+9E40h+var_8B20], 5
 * 00000001800A70AD: mov     dword ptr [rbp+9E40h+var_8B20+4], esi
 * 00000001800A70B3: movups  xmm6, [rbp+9E40h+var_8B20]
 * 00000001800A70BA: call    sub_1800A5ED4
 * 00000001800A70BF: mov     r8, rax
 * 00000001800A70C2: mov     r9d, r12d
 * 00000001800A70C5: mov     edx, 28h ; '('
 * 00000001800A70CA: lea     rcx, [rbp+9E40h+var_B90]
 * 00000001800A70D1: call    sub_1800737C8
 * 00000001800A70D6: nop
 * 00000001800A70D7: mov     r8, rax
 * 00000001800A70DA: mov     rdx, r13
 * 00000001800A70DD: lea     rcx, [rbp+9E40h+var_CB0]
 * 00000001800A70E4: call    sub_18001B678
 * 00000001800A70E9: nop
 * 00000001800A70EA: lea     r8, aPixel; "/Pixel"
 * 00000001800A70F1: mov     rdx, rax
 * 00000001800A70F4: lea     rcx, [rbp+9E40h+var_68B0]
 * 00000001800A70FB: call    sub_18001B5A8
 * 00000001800A7100: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7105: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A710A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A710F: mov     rcx, rax
 * 00000001800A7112: call    sub_18007386C
 * 00000001800A7117: nop
 * 00000001800A7118: lea     rcx, [rbp+9E40h+var_CB0]
 * 00000001800A711F: call    sub_180011020
 * 00000001800A7124: nop
 * 00000001800A7125: lea     rcx, [rbp+9E40h+var_B90]
 * 00000001800A712C: call    sub_180011020
 * 00000001800A7131: nop
 * 00000001800A7132: lea     rcx, dword_1801CA278
 * 00000001800A7139: call    _Init_thread_footer
 * 00000001800A713E: mov     rax, [rdi+rbx*8]
 * 00000001800A7142: mov     eax, [r15+rax]
 * 00000001800A7146: cmp     cs:dword_1801CA27C, eax
 * 00000001800A714C: jle     loc_1800A7220
 * 00000001800A7152: lea     rcx, dword_1801CA27C
 * 00000001800A7159: call    sub_18000CA40
 * 00000001800A715E: cmp     cs:dword_1801CA27C, r14d
 * 00000001800A7165: jnz     loc_1800A7220
 * 00000001800A716B: lea     rax, unk_18016FC00
 * 00000001800A7172: mov     qword ptr [rbp+9E40h+var_9DD0], rax
 * 00000001800A7176: lea     rax, unk_180170CC8
 * 00000001800A717D: mov     qword ptr [rbp+9E40h+var_9DD0+8], rax
 * 00000001800A7181: movups  xmm7, [rbp+9E40h+var_9DD0]
 * 00000001800A7185: mov     dword ptr [rbp+9E40h+var_8B00], 5
 * 00000001800A718F: mov     dword ptr [rbp+9E40h+var_8B00+4], esi
 * 00000001800A7195: movups  xmm6, [rbp+9E40h+var_8B00]
 * 00000001800A719C: call    sub_1800A5ED4
 * 00000001800A71A1: mov     r8, rax
 * 00000001800A71A4: mov     r9d, r12d
 * 00000001800A71A7: mov     edx, 29h ; ')'
 * 00000001800A71AC: lea     rcx, [rbp+9E40h+var_950]
 * 00000001800A71B3: call    sub_1800737C8
 * 00000001800A71B8: nop
 * 00000001800A71B9: mov     r8, rax
 * 00000001800A71BC: mov     rdx, r13
 * 00000001800A71BF: lea     rcx, [rbp+9E40h+var_A70]
 * 00000001800A71C6: call    sub_18001B678
 * 00000001800A71CB: nop
 * 00000001800A71CC: lea     r8, aPixel; "/Pixel"
 * 00000001800A71D3: mov     rdx, rax
 * 00000001800A71D6: lea     rcx, [rbp+9E40h+var_6810]
 * 00000001800A71DD: call    sub_18001B5A8
 * 00000001800A71E2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A71E7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A71EC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A71F1: mov     rcx, rax
 * 00000001800A71F4: call    sub_18007386C
 * 00000001800A71F9: nop
 * 00000001800A71FA: lea     rcx, [rbp+9E40h+var_A70]
 * 00000001800A7201: call    sub_180011020
 * 00000001800A7206: nop
 * 00000001800A7207: lea     rcx, [rbp+9E40h+var_950]
 * 00000001800A720E: call    sub_180011020
 * 00000001800A7213: nop
 * 00000001800A7214: lea     rcx, dword_1801CA27C
 * 00000001800A721B: call    _Init_thread_footer
 * 00000001800A7220: mov     rax, [rdi+rbx*8]
 * 00000001800A7224: mov     eax, [r15+rax]
 * 00000001800A7228: cmp     cs:dword_1801CA280, eax
 * 00000001800A722E: jle     loc_1800A730B
 * 00000001800A7234: lea     rcx, dword_1801CA280
 * 00000001800A723B: call    sub_18000CA40
 * 00000001800A7240: cmp     cs:dword_1801CA280, r14d
 * 00000001800A7247: jnz     loc_1800A730B
 * 00000001800A724D: lea     rax, unk_180169670
 * 00000001800A7254: mov     qword ptr [rbp+9E40h+var_9DC0], rax
 * 00000001800A725B: lea     rax, unk_18016FBFC
 * 00000001800A7262: mov     qword ptr [rbp+9E40h+var_9DC0+8], rax
 * 00000001800A7269: movups  xmm7, [rbp+9E40h+var_9DC0]
 * 00000001800A7270: mov     dword ptr [rbp+9E40h+var_8AE0], 5
 * 00000001800A727A: mov     dword ptr [rbp+9E40h+var_8AE0+4], esi
 * 00000001800A7280: movups  xmm6, [rbp+9E40h+var_8AE0]
 * 00000001800A7287: call    sub_1800A5ED4
 * 00000001800A728C: mov     r8, rax
 * 00000001800A728F: mov     r9d, r12d
 * 00000001800A7292: mov     edx, 2Ah ; '*'
 * 00000001800A7297: lea     rcx, [rbp+9E40h+var_710]
 * 00000001800A729E: call    sub_1800737C8
 * 00000001800A72A3: nop
 * 00000001800A72A4: mov     r8, rax
 * 00000001800A72A7: mov     rdx, r13
 * 00000001800A72AA: lea     rcx, [rbp+9E40h+var_830]
 * 00000001800A72B1: call    sub_18001B678
 * 00000001800A72B6: nop
 * 00000001800A72B7: lea     r8, aPixel; "/Pixel"
 * 00000001800A72BE: mov     rdx, rax
 * 00000001800A72C1: lea     rcx, [rbp+9E40h+var_6790]
 * 00000001800A72C8: call    sub_18001B5A8
 * 00000001800A72CD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A72D2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A72D7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A72DC: mov     rcx, rax
 * 00000001800A72DF: call    sub_18007386C
 * 00000001800A72E4: nop
 * 00000001800A72E5: lea     rcx, [rbp+9E40h+var_830]
 * 00000001800A72EC: call    sub_180011020
 * 00000001800A72F1: nop
 * 00000001800A72F2: lea     rcx, [rbp+9E40h+var_710]
 * 00000001800A72F9: call    sub_180011020
 * 00000001800A72FE: nop
 * 00000001800A72FF: lea     rcx, dword_1801CA280
 * 00000001800A7306: call    _Init_thread_footer
 * 00000001800A730B: mov     rax, [rdi+rbx*8]
 * 00000001800A730F: mov     eax, [r15+rax]
 * 00000001800A7313: cmp     cs:dword_1801CA284, eax
 * 00000001800A7319: jle     loc_1800A73F6
 * 00000001800A731F: lea     rcx, dword_1801CA284
 * 00000001800A7326: call    sub_18000CA40
 * 00000001800A732B: cmp     cs:dword_1801CA284, r14d
 * 00000001800A7332: jnz     loc_1800A73F6
 * 00000001800A7338: lea     rax, unk_1801630B0
 * 00000001800A733F: mov     qword ptr [rbp+9E40h+var_9DB0], rax
 * 00000001800A7346: lea     rax, unk_180169668
 * 00000001800A734D: mov     qword ptr [rbp+9E40h+var_9DB0+8], rax
 * 00000001800A7354: movups  xmm7, [rbp+9E40h+var_9DB0]
 * 00000001800A735B: mov     dword ptr [rbp+9E40h+var_8AC0], 5
 * 00000001800A7365: mov     dword ptr [rbp+9E40h+var_8AC0+4], esi
 * 00000001800A736B: movups  xmm6, [rbp+9E40h+var_8AC0]
 * 00000001800A7372: call    sub_1800A5ED4
 * 00000001800A7377: mov     r8, rax
 * 00000001800A737A: mov     r9d, r12d
 * 00000001800A737D: mov     edx, 30h ; '0'
 * 00000001800A7382: lea     rcx, [rbp+9E40h+var_4D0]
 * 00000001800A7389: call    sub_1800737C8
 * 00000001800A738E: nop
 * 00000001800A738F: mov     r8, rax
 * 00000001800A7392: mov     rdx, r13
 * 00000001800A7395: lea     rcx, [rbp+9E40h+var_5F0]
 * 00000001800A739C: call    sub_18001B678
 * 00000001800A73A1: nop
 * 00000001800A73A2: lea     r8, aPixel; "/Pixel"
 * 00000001800A73A9: mov     rdx, rax
 * 00000001800A73AC: lea     rcx, [rbp+9E40h+var_66F0]
 * 00000001800A73B3: call    sub_18001B5A8
 * 00000001800A73B8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A73BD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A73C2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A73C7: mov     rcx, rax
 * 00000001800A73CA: call    sub_18007386C
 * 00000001800A73CF: nop
 * 00000001800A73D0: lea     rcx, [rbp+9E40h+var_5F0]
 * 00000001800A73D7: call    sub_180011020
 * 00000001800A73DC: nop
 * 00000001800A73DD: lea     rcx, [rbp+9E40h+var_4D0]
 * 00000001800A73E4: call    sub_180011020
 * 00000001800A73E9: nop
 * 00000001800A73EA: lea     rcx, dword_1801CA284
 * 00000001800A73F1: call    _Init_thread_footer
 * 00000001800A73F6: mov     rax, [rdi+rbx*8]
 * 00000001800A73FA: mov     eax, [r15+rax]
 * 00000001800A73FE: cmp     cs:dword_1801CA288, eax
 * 00000001800A7404: jle     loc_1800A74E1
 * 00000001800A740A: lea     rcx, dword_1801CA288
 * 00000001800A7411: call    sub_18000CA40
 * 00000001800A7416: cmp     cs:dword_1801CA288, r14d
 * 00000001800A741D: jnz     loc_1800A74E1
 * 00000001800A7423: lea     rax, unk_1801630B0
 * 00000001800A742A: mov     qword ptr [rbp+9E40h+var_9DA0], rax
 * 00000001800A7431: lea     rax, unk_180169668
 * 00000001800A7438: mov     qword ptr [rbp+9E40h+var_9DA0+8], rax
 * 00000001800A743F: movups  xmm7, [rbp+9E40h+var_9DA0]
 * 00000001800A7446: mov     dword ptr [rbp+9E40h+var_8AA0], 5
 * 00000001800A7450: mov     dword ptr [rbp+9E40h+var_8AA0+4], esi
 * 00000001800A7456: movups  xmm6, [rbp+9E40h+var_8AA0]
 * 00000001800A745D: call    sub_1800A5ED4
 * 00000001800A7462: mov     r8, rax
 * 00000001800A7465: mov     r9d, r12d
 * 00000001800A7468: mov     edx, 32h ; '2'
 * 00000001800A746D: lea     rcx, [rbp+9E40h+var_290]
 * 00000001800A7474: call    sub_1800737C8
 * 00000001800A7479: nop
 * 00000001800A747A: mov     r8, rax
 * 00000001800A747D: mov     rdx, r13
 * 00000001800A7480: lea     rcx, [rbp+9E40h+var_3B0]
 * 00000001800A7487: call    sub_18001B678
 * 00000001800A748C: nop
 * 00000001800A748D: lea     r8, aPixel; "/Pixel"
 * 00000001800A7494: mov     rdx, rax
 * 00000001800A7497: lea     rcx, [rbp+9E40h+var_6670]
 * 00000001800A749E: call    sub_18001B5A8
 * 00000001800A74A3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A74A8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A74AD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A74B2: mov     rcx, rax
 * 00000001800A74B5: call    sub_18007386C
 * 00000001800A74BA: nop
 * 00000001800A74BB: lea     rcx, [rbp+9E40h+var_3B0]
 * 00000001800A74C2: call    sub_180011020
 * 00000001800A74C7: nop
 * 00000001800A74C8: lea     rcx, [rbp+9E40h+var_290]
 * 00000001800A74CF: call    sub_180011020
 * 00000001800A74D4: nop
 * 00000001800A74D5: lea     rcx, dword_1801CA288
 * 00000001800A74DC: call    _Init_thread_footer
 * 00000001800A74E1: mov     rax, [rdi+rbx*8]
 * 00000001800A74E5: mov     eax, [r15+rax]
 * 00000001800A74E9: cmp     cs:dword_1801CA28C, eax
 * 00000001800A74EF: jle     loc_1800A75CC
 * 00000001800A74F5: lea     rcx, dword_1801CA28C
 * 00000001800A74FC: call    sub_18000CA40
 * 00000001800A7501: cmp     cs:dword_1801CA28C, r14d
 * 00000001800A7508: jnz     loc_1800A75CC
 * 00000001800A750E: lea     rax, unk_180170CD0
 * 00000001800A7515: mov     qword ptr [rbp+9E40h+var_9D90], rax
 * 00000001800A751C: lea     rax, unk_18017745C
 * 00000001800A7523: mov     qword ptr [rbp+9E40h+var_9D90+8], rax
 * 00000001800A752A: movups  xmm7, [rbp+9E40h+var_9D90]
 * 00000001800A7531: mov     dword ptr [rbp+9E40h+var_8A80], 5
 * 00000001800A753B: mov     dword ptr [rbp+9E40h+var_8A80+4], esi
 * 00000001800A7541: movups  xmm6, [rbp+9E40h+var_8A80]
 * 00000001800A7548: call    sub_1800A5ED4
 * 00000001800A754D: mov     r8, rax
 * 00000001800A7550: mov     r9d, r12d
 * 00000001800A7553: mov     edx, 38h ; '8'
 * 00000001800A7558: lea     rcx, [rbp+9E40h+var_46D0]
 * 00000001800A755F: call    sub_1800737C8
 * 00000001800A7564: nop
 * 00000001800A7565: mov     r8, rax
 * 00000001800A7568: mov     rdx, r13
 * 00000001800A756B: lea     rcx, [rbp+9E40h+var_170]
 * 00000001800A7572: call    sub_18001B678
 * 00000001800A7577: nop
 * 00000001800A7578: lea     r8, aPixel; "/Pixel"
 * 00000001800A757F: mov     rdx, rax
 * 00000001800A7582: lea     rcx, [rbp+9E40h+var_65D0]
 * 00000001800A7589: call    sub_18001B5A8
 * 00000001800A758E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7593: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7598: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A759D: mov     rcx, rax
 * 00000001800A75A0: call    sub_18007386C
 * 00000001800A75A5: nop
 * 00000001800A75A6: lea     rcx, [rbp+9E40h+var_170]
 * 00000001800A75AD: call    sub_180011020
 * 00000001800A75B2: nop
 * 00000001800A75B3: lea     rcx, [rbp+9E40h+var_46D0]
 * 00000001800A75BA: call    sub_180011020
 * 00000001800A75BF: nop
 * 00000001800A75C0: lea     rcx, dword_1801CA28C
 * 00000001800A75C7: call    _Init_thread_footer
 * 00000001800A75CC: mov     rax, [rdi+rbx*8]
 * 00000001800A75D0: mov     eax, [r15+rax]
 * 00000001800A75D4: cmp     cs:dword_1801CA290, eax
 * 00000001800A75DA: jle     loc_1800A76B7
 * 00000001800A75E0: lea     rcx, dword_1801CA290
 * 00000001800A75E7: call    sub_18000CA40
 * 00000001800A75EC: cmp     cs:dword_1801CA290, r14d
 * 00000001800A75F3: jnz     loc_1800A76B7
 * 00000001800A75F9: lea     rax, unk_180170CD0
 * 00000001800A7600: mov     qword ptr [rbp+9E40h+var_9D80], rax
 * 00000001800A7607: lea     rax, unk_18017745C
 * 00000001800A760E: mov     qword ptr [rbp+9E40h+var_9D80+8], rax
 * 00000001800A7615: movups  xmm7, [rbp+9E40h+var_9D80]
 * 00000001800A761C: mov     dword ptr [rbp+9E40h+var_8A60], 5
 * 00000001800A7626: mov     dword ptr [rbp+9E40h+var_8A60+4], esi
 * 00000001800A762C: movups  xmm6, [rbp+9E40h+var_8A60]
 * 00000001800A7633: call    sub_1800A5ED4
 * 00000001800A7638: mov     r8, rax
 * 00000001800A763B: mov     r9d, r12d
 * 00000001800A763E: mov     edx, 3Ah ; ':'
 * 00000001800A7643: lea     rcx, [rbp+9E40h+var_4610]
 * 00000001800A764A: call    sub_1800737C8
 * 00000001800A764F: nop
 * 00000001800A7650: mov     r8, rax
 * 00000001800A7653: mov     rdx, r13
 * 00000001800A7656: lea     rcx, [rbp+9E40h+var_4670]
 * 00000001800A765D: call    sub_18001B678
 * 00000001800A7662: nop
 * 00000001800A7663: lea     r8, aPixel; "/Pixel"
 * 00000001800A766A: mov     rdx, rax
 * 00000001800A766D: lea     rcx, [rbp+9E40h+var_6550]
 * 00000001800A7674: call    sub_18001B5A8
 * 00000001800A7679: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A767E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7683: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7688: mov     rcx, rax
 * 00000001800A768B: call    sub_18007386C
 * 00000001800A7690: nop
 * 00000001800A7691: lea     rcx, [rbp+9E40h+var_4670]
 * 00000001800A7698: call    sub_180011020
 * 00000001800A769D: nop
 * 00000001800A769E: lea     rcx, [rbp+9E40h+var_4610]
 * 00000001800A76A5: call    sub_180011020
 * 00000001800A76AA: nop
 * 00000001800A76AB: lea     rcx, dword_1801CA290
 * 00000001800A76B2: call    _Init_thread_footer
 * 00000001800A76B7: mov     rax, [rdi+rbx*8]
 * 00000001800A76BB: mov     eax, [r15+rax]
 * 00000001800A76BF: cmp     cs:dword_1801CA294, eax
 * 00000001800A76C5: jle     loc_1800A77A2
 * 00000001800A76CB: lea     rcx, dword_1801CA294
 * 00000001800A76D2: call    sub_18000CA40
 * 00000001800A76D7: cmp     cs:dword_1801CA294, r14d
 * 00000001800A76DE: jnz     loc_1800A77A2
 * 00000001800A76E4: lea     rax, unk_180180E90
 * 00000001800A76EB: mov     qword ptr [rbp+9E40h+var_9D70], rax
 * 00000001800A76F2: lea     rax, unk_180187274
 * 00000001800A76F9: mov     qword ptr [rbp+9E40h+var_9D70+8], rax
 * 00000001800A7700: movups  xmm7, [rbp+9E40h+var_9D70]
 * 00000001800A7707: mov     dword ptr [rbp+9E40h+var_8A40], 5
 * 00000001800A7711: mov     dword ptr [rbp+9E40h+var_8A40+4], esi
 * 00000001800A7717: movups  xmm6, [rbp+9E40h+var_8A40]
 * 00000001800A771E: call    sub_1800A5ED4
 * 00000001800A7723: mov     r8, rax
 * 00000001800A7726: mov     r9d, r12d
 * 00000001800A7729: mov     edx, 40h ; '@'
 * 00000001800A772E: lea     rcx, [rbp+9E40h+var_4550]
 * 00000001800A7735: call    sub_1800737C8
 * 00000001800A773A: nop
 * 00000001800A773B: mov     r8, rax
 * 00000001800A773E: mov     rdx, r13
 * 00000001800A7741: lea     rcx, [rbp+9E40h+var_45B0]
 * 00000001800A7748: call    sub_18001B678
 * 00000001800A774D: nop
 * 00000001800A774E: lea     r8, aPixel; "/Pixel"
 * 00000001800A7755: mov     rdx, rax
 * 00000001800A7758: lea     rcx, [rbp+9E40h+var_64B0]
 * 00000001800A775F: call    sub_18001B5A8
 * 00000001800A7764: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7769: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A776E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7773: mov     rcx, rax
 * 00000001800A7776: call    sub_18007386C
 * 00000001800A777B: nop
 * 00000001800A777C: lea     rcx, [rbp+9E40h+var_45B0]
 * 00000001800A7783: call    sub_180011020
 * 00000001800A7788: nop
 * 00000001800A7789: lea     rcx, [rbp+9E40h+var_4550]
 * 00000001800A7790: call    sub_180011020
 * 00000001800A7795: nop
 * 00000001800A7796: lea     rcx, dword_1801CA294
 * 00000001800A779D: call    _Init_thread_footer
 * 00000001800A77A2: mov     rax, [rdi+rbx*8]
 * 00000001800A77A6: mov     eax, [r15+rax]
 * 00000001800A77AA: cmp     cs:dword_1801CA298, eax
 * 00000001800A77B0: jle     loc_1800A788D
 * 00000001800A77B6: lea     rcx, dword_1801CA298
 * 00000001800A77BD: call    sub_18000CA40
 * 00000001800A77C2: cmp     cs:dword_1801CA298, r14d
 * 00000001800A77C9: jnz     loc_1800A788D
 * 00000001800A77CF: lea     rax, unk_180180E90
 * 00000001800A77D6: mov     qword ptr [rbp+9E40h+var_9D60], rax
 * 00000001800A77DD: lea     rax, unk_180187274
 * 00000001800A77E4: mov     qword ptr [rbp+9E40h+var_9D60+8], rax
 * 00000001800A77EB: movups  xmm7, [rbp+9E40h+var_9D60]
 * 00000001800A77F2: mov     dword ptr [rbp+9E40h+var_8A20], 5
 * 00000001800A77FC: mov     dword ptr [rbp+9E40h+var_8A20+4], esi
 * 00000001800A7802: movups  xmm6, [rbp+9E40h+var_8A20]
 * 00000001800A7809: call    sub_1800A5ED4
 * 00000001800A780E: mov     r8, rax
 * 00000001800A7811: mov     r9d, r12d
 * 00000001800A7814: mov     edx, 42h ; 'B'
 * 00000001800A7819: lea     rcx, [rbp+9E40h+var_4490]
 * 00000001800A7820: call    sub_1800737C8
 * 00000001800A7825: nop
 * 00000001800A7826: mov     r8, rax
 * 00000001800A7829: mov     rdx, r13
 * 00000001800A782C: lea     rcx, [rbp+9E40h+var_44F0]
 * 00000001800A7833: call    sub_18001B678
 * 00000001800A7838: nop
 * 00000001800A7839: lea     r8, aPixel; "/Pixel"
 * 00000001800A7840: mov     rdx, rax
 * 00000001800A7843: lea     rcx, [rbp+9E40h+var_69F0]
 * 00000001800A784A: call    sub_18001B5A8
 * 00000001800A784F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7854: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7859: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A785E: mov     rcx, rax
 * 00000001800A7861: call    sub_18007386C
 * 00000001800A7866: nop
 * 00000001800A7867: lea     rcx, [rbp+9E40h+var_44F0]
 * 00000001800A786E: call    sub_180011020
 * 00000001800A7873: nop
 * 00000001800A7874: lea     rcx, [rbp+9E40h+var_4490]
 * 00000001800A787B: call    sub_180011020
 * 00000001800A7880: nop
 * 00000001800A7881: lea     rcx, dword_1801CA298
 * 00000001800A7888: call    _Init_thread_footer
 * 00000001800A788D: mov     rax, [rdi+rbx*8]
 * 00000001800A7891: mov     eax, [r15+rax]
 * 00000001800A7895: cmp     cs:dword_1801CA29C, eax
 * 00000001800A789B: jle     loc_1800A7978
 * 00000001800A78A1: lea     rcx, dword_1801CA29C
 * 00000001800A78A8: call    sub_18000CA40
 * 00000001800A78AD: cmp     cs:dword_1801CA29C, r14d
 * 00000001800A78B4: jnz     loc_1800A7978
 * 00000001800A78BA: lea     rax, unk_180169670
 * 00000001800A78C1: mov     qword ptr [rbp+9E40h+var_9D50], rax
 * 00000001800A78C8: lea     rax, unk_18016FBFC
 * 00000001800A78CF: mov     qword ptr [rbp+9E40h+var_9D50+8], rax
 * 00000001800A78D6: movups  xmm7, [rbp+9E40h+var_9D50]
 * 00000001800A78DD: mov     dword ptr [rbp+9E40h+var_8A00], 5
 * 00000001800A78E7: mov     dword ptr [rbp+9E40h+var_8A00+4], esi
 * 00000001800A78ED: movups  xmm6, [rbp+9E40h+var_8A00]
 * 00000001800A78F4: call    sub_1800A5ED4
 * 00000001800A78F9: mov     r8, rax
 * 00000001800A78FC: mov     r9d, r12d
 * 00000001800A78FF: mov     edx, 48h ; 'H'
 * 00000001800A7904: lea     rcx, [rbp+9E40h+var_43D0]
 * 00000001800A790B: call    sub_1800737C8
 * 00000001800A7910: nop
 * 00000001800A7911: mov     r8, rax
 * 00000001800A7914: mov     rdx, r13
 * 00000001800A7917: lea     rcx, [rbp+9E40h+var_4430]
 * 00000001800A791E: call    sub_18001B678
 * 00000001800A7923: nop
 * 00000001800A7924: lea     r8, aPixel; "/Pixel"
 * 00000001800A792B: mov     rdx, rax
 * 00000001800A792E: lea     rcx, [rbp+9E40h+var_6910]
 * 00000001800A7935: call    sub_18001B5A8
 * 00000001800A793A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A793F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7944: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7949: mov     rcx, rax
 * 00000001800A794C: call    sub_18007386C
 * 00000001800A7951: nop
 * 00000001800A7952: lea     rcx, [rbp+9E40h+var_4430]
 * 00000001800A7959: call    sub_180011020
 * 00000001800A795E: nop
 * 00000001800A795F: lea     rcx, [rbp+9E40h+var_43D0]
 * 00000001800A7966: call    sub_180011020
 * 00000001800A796B: nop
 * 00000001800A796C: lea     rcx, dword_1801CA29C
 * 00000001800A7973: call    _Init_thread_footer
 * 00000001800A7978: mov     rax, [rdi+rbx*8]
 * 00000001800A797C: mov     eax, [r15+rax]
 * 00000001800A7980: cmp     cs:dword_1801CA2A0, eax
 * 00000001800A7986: jle     loc_1800A7A63
 * 00000001800A798C: lea     rcx, dword_1801CA2A0
 * 00000001800A7993: call    sub_18000CA40
 * 00000001800A7998: cmp     cs:dword_1801CA2A0, r14d
 * 00000001800A799F: jnz     loc_1800A7A63
 * 00000001800A79A5: lea     rax, unk_180169670
 * 00000001800A79AC: mov     qword ptr [rbp+9E40h+var_9D40], rax
 * 00000001800A79B3: lea     rax, unk_18016FBFC
 * 00000001800A79BA: mov     qword ptr [rbp+9E40h+var_9D40+8], rax
 * 00000001800A79C1: movups  xmm7, [rbp+9E40h+var_9D40]
 * 00000001800A79C8: mov     dword ptr [rbp+9E40h+var_89E0], 5
 * 00000001800A79D2: mov     dword ptr [rbp+9E40h+var_89E0+4], esi
 * 00000001800A79D8: movups  xmm6, [rbp+9E40h+var_89E0]
 * 00000001800A79DF: call    sub_1800A5ED4
 * 00000001800A79E4: mov     r8, rax
 * 00000001800A79E7: mov     r9d, r12d
 * 00000001800A79EA: mov     edx, 4Ah ; 'J'
 * 00000001800A79EF: lea     rcx, [rbp+9E40h+var_4310]
 * 00000001800A79F6: call    sub_1800737C8
 * 00000001800A79FB: nop
 * 00000001800A79FC: mov     r8, rax
 * 00000001800A79FF: mov     rdx, r13
 * 00000001800A7A02: lea     rcx, [rbp+9E40h+var_4370]
 * 00000001800A7A09: call    sub_18001B678
 * 00000001800A7A0E: nop
 * 00000001800A7A0F: lea     r8, aPixel; "/Pixel"
 * 00000001800A7A16: mov     rdx, rax
 * 00000001800A7A19: lea     rcx, [rbp+9E40h+var_6850]
 * 00000001800A7A20: call    sub_18001B5A8
 * 00000001800A7A25: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7A2A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7A2F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7A34: mov     rcx, rax
 * 00000001800A7A37: call    sub_18007386C
 * 00000001800A7A3C: nop
 * 00000001800A7A3D: lea     rcx, [rbp+9E40h+var_4370]
 * 00000001800A7A44: call    sub_180011020
 * 00000001800A7A49: nop
 * 00000001800A7A4A: lea     rcx, [rbp+9E40h+var_4310]
 * 00000001800A7A51: call    sub_180011020
 * 00000001800A7A56: nop
 * 00000001800A7A57: lea     rcx, dword_1801CA2A0
 * 00000001800A7A5E: call    _Init_thread_footer
 * 00000001800A7A63: mov     rax, [rdi+rbx*8]
 * 00000001800A7A67: mov     eax, [r15+rax]
 * 00000001800A7A6B: cmp     cs:dword_1801CA2A4, eax
 * 00000001800A7A71: jle     loc_1800A7B4E
 * 00000001800A7A77: lea     rcx, dword_1801CA2A4
 * 00000001800A7A7E: call    sub_18000CA40
 * 00000001800A7A83: cmp     cs:dword_1801CA2A4, r14d
 * 00000001800A7A8A: jnz     loc_1800A7B4E
 * 00000001800A7A90: lea     rax, unk_1801630B0
 * 00000001800A7A97: mov     qword ptr [rbp+9E40h+var_9D30], rax
 * 00000001800A7A9E: lea     rax, unk_180169668
 * 00000001800A7AA5: mov     qword ptr [rbp+9E40h+var_9D30+8], rax
 * 00000001800A7AAC: movups  xmm7, [rbp+9E40h+var_9D30]
 * 00000001800A7AB3: mov     dword ptr [rbp+9E40h+var_89C0], 5
 * 00000001800A7ABD: mov     dword ptr [rbp+9E40h+var_89C0+4], esi
 * 00000001800A7AC3: movups  xmm6, [rbp+9E40h+var_89C0]
 * 00000001800A7ACA: call    sub_1800A5ED4
 * 00000001800A7ACF: mov     r8, rax
 * 00000001800A7AD2: mov     r9d, r12d
 * 00000001800A7AD5: mov     edx, 50h ; 'P'
 * 00000001800A7ADA: lea     rcx, [rbp+9E40h+var_4250]
 * 00000001800A7AE1: call    sub_1800737C8
 * 00000001800A7AE6: nop
 * 00000001800A7AE7: mov     r8, rax
 * 00000001800A7AEA: mov     rdx, r13
 * 00000001800A7AED: lea     rcx, [rbp+9E40h+var_42B0]
 * 00000001800A7AF4: call    sub_18001B678
 * 00000001800A7AF9: nop
 * 00000001800A7AFA: lea     r8, aPixel; "/Pixel"
 * 00000001800A7B01: mov     rdx, rax
 * 00000001800A7B04: lea     rcx, [rbp+9E40h+var_6750]
 * 00000001800A7B0B: call    sub_18001B5A8
 * 00000001800A7B10: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7B15: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7B1A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7B1F: mov     rcx, rax
 * 00000001800A7B22: call    sub_18007386C
 * 00000001800A7B27: nop
 * 00000001800A7B28: lea     rcx, [rbp+9E40h+var_42B0]
 * 00000001800A7B2F: call    sub_180011020
 * 00000001800A7B34: nop
 * 00000001800A7B35: lea     rcx, [rbp+9E40h+var_4250]
 * 00000001800A7B3C: call    sub_180011020
 * 00000001800A7B41: nop
 * 00000001800A7B42: lea     rcx, dword_1801CA2A4
 * 00000001800A7B49: call    _Init_thread_footer
 * 00000001800A7B4E: mov     rax, [rdi+rbx*8]
 * 00000001800A7B52: mov     eax, [r15+rax]
 * 00000001800A7B56: cmp     cs:dword_1801CA2A8, eax
 * 00000001800A7B5C: jle     loc_1800A7C39
 * 00000001800A7B62: lea     rcx, dword_1801CA2A8
 * 00000001800A7B69: call    sub_18000CA40
 * 00000001800A7B6E: cmp     cs:dword_1801CA2A8, r14d
 * 00000001800A7B75: jnz     loc_1800A7C39
 * 00000001800A7B7B: lea     rax, unk_1801630B0
 * 00000001800A7B82: mov     qword ptr [rbp+9E40h+var_9D20], rax
 * 00000001800A7B89: lea     rax, unk_180169668
 * 00000001800A7B90: mov     qword ptr [rbp+9E40h+var_9D20+8], rax
 * 00000001800A7B97: movups  xmm7, [rbp+9E40h+var_9D20]
 * 00000001800A7B9E: mov     dword ptr [rbp+9E40h+var_89A0], 5
 * 00000001800A7BA8: mov     dword ptr [rbp+9E40h+var_89A0+4], esi
 * 00000001800A7BAE: movups  xmm6, [rbp+9E40h+var_89A0]
 * 00000001800A7BB5: call    sub_1800A5ED4
 * 00000001800A7BBA: mov     r8, rax
 * 00000001800A7BBD: mov     r9d, r12d
 * 00000001800A7BC0: mov     edx, 52h ; 'R'
 * 00000001800A7BC5: lea     rcx, [rbp+9E40h+var_4190]
 * 00000001800A7BCC: call    sub_1800737C8
 * 00000001800A7BD1: nop
 * 00000001800A7BD2: mov     r8, rax
 * 00000001800A7BD5: mov     rdx, r13
 * 00000001800A7BD8: lea     rcx, [rbp+9E40h+var_41F0]
 * 00000001800A7BDF: call    sub_18001B678
 * 00000001800A7BE4: nop
 * 00000001800A7BE5: lea     r8, aPixel; "/Pixel"
 * 00000001800A7BEC: mov     rdx, rax
 * 00000001800A7BEF: lea     rcx, [rbp+9E40h+var_6690]
 * 00000001800A7BF6: call    sub_18001B5A8
 * 00000001800A7BFB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7C00: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7C05: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7C0A: mov     rcx, rax
 * 00000001800A7C0D: call    sub_18007386C
 * 00000001800A7C12: nop
 * 00000001800A7C13: lea     rcx, [rbp+9E40h+var_41F0]
 * 00000001800A7C1A: call    sub_180011020
 * 00000001800A7C1F: nop
 * 00000001800A7C20: lea     rcx, [rbp+9E40h+var_4190]
 * 00000001800A7C27: call    sub_180011020
 * 00000001800A7C2C: nop
 * 00000001800A7C2D: lea     rcx, dword_1801CA2A8
 * 00000001800A7C34: call    _Init_thread_footer
 * 00000001800A7C39: mov     rax, [rdi+rbx*8]
 * 00000001800A7C3D: mov     eax, [r15+rax]
 * 00000001800A7C41: cmp     cs:dword_1801CA2AC, eax
 * 00000001800A7C47: jle     loc_1800A7D24
 * 00000001800A7C4D: lea     rcx, dword_1801CA2AC
 * 00000001800A7C54: call    sub_18000CA40
 * 00000001800A7C59: cmp     cs:dword_1801CA2AC, r14d
 * 00000001800A7C60: jnz     loc_1800A7D24
 * 00000001800A7C66: lea     rax, unk_180170CD0
 * 00000001800A7C6D: mov     qword ptr [rbp+9E40h+var_9D10], rax
 * 00000001800A7C74: lea     rax, unk_18017745C
 * 00000001800A7C7B: mov     qword ptr [rbp+9E40h+var_9D10+8], rax
 * 00000001800A7C82: movups  xmm7, [rbp+9E40h+var_9D10]
 * 00000001800A7C89: mov     dword ptr [rbp+9E40h+var_8980], 5
 * 00000001800A7C93: mov     dword ptr [rbp+9E40h+var_8980+4], esi
 * 00000001800A7C99: movups  xmm6, [rbp+9E40h+var_8980]
 * 00000001800A7CA0: call    sub_1800A5ED4
 * 00000001800A7CA5: mov     r8, rax
 * 00000001800A7CA8: mov     r9d, r12d
 * 00000001800A7CAB: mov     edx, 58h ; 'X'
 * 00000001800A7CB0: lea     rcx, [rbp+9E40h+var_40D0]
 * 00000001800A7CB7: call    sub_1800737C8
 * 00000001800A7CBC: nop
 * 00000001800A7CBD: mov     r8, rax
 * 00000001800A7CC0: mov     rdx, r13
 * 00000001800A7CC3: lea     rcx, [rbp+9E40h+var_4130]
 * 00000001800A7CCA: call    sub_18001B678
 * 00000001800A7CCF: nop
 * 00000001800A7CD0: lea     r8, aPixel; "/Pixel"
 * 00000001800A7CD7: mov     rdx, rax
 * 00000001800A7CDA: lea     rcx, [rbp+9E40h+var_65B0]
 * 00000001800A7CE1: call    sub_18001B5A8
 * 00000001800A7CE6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7CEB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7CF0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7CF5: mov     rcx, rax
 * 00000001800A7CF8: call    sub_18007386C
 * 00000001800A7CFD: nop
 * 00000001800A7CFE: lea     rcx, [rbp+9E40h+var_4130]
 * 00000001800A7D05: call    sub_180011020
 * 00000001800A7D0A: nop
 * 00000001800A7D0B: lea     rcx, [rbp+9E40h+var_40D0]
 * 00000001800A7D12: call    sub_180011020
 * 00000001800A7D17: nop
 * 00000001800A7D18: lea     rcx, dword_1801CA2AC
 * 00000001800A7D1F: call    _Init_thread_footer
 * 00000001800A7D24: mov     rax, [rdi+rbx*8]
 * 00000001800A7D28: mov     eax, [r15+rax]
 * 00000001800A7D2C: cmp     cs:dword_1801CA2B0, eax
 * 00000001800A7D32: jle     loc_1800A7E0F
 * 00000001800A7D38: lea     rcx, dword_1801CA2B0
 * 00000001800A7D3F: call    sub_18000CA40
 * 00000001800A7D44: cmp     cs:dword_1801CA2B0, r14d
 * 00000001800A7D4B: jnz     loc_1800A7E0F
 * 00000001800A7D51: lea     rax, unk_180170CD0
 * 00000001800A7D58: mov     qword ptr [rbp+9E40h+var_9D00], rax
 * 00000001800A7D5F: lea     rax, unk_18017745C
 * 00000001800A7D66: mov     qword ptr [rbp+9E40h+var_9D00+8], rax
 * 00000001800A7D6D: movups  xmm7, [rbp+9E40h+var_9D00]
 * 00000001800A7D74: mov     dword ptr [rbp+9E40h+var_8960], 5
 * 00000001800A7D7E: mov     dword ptr [rbp+9E40h+var_8960+4], esi
 * 00000001800A7D84: movups  xmm6, [rbp+9E40h+var_8960]
 * 00000001800A7D8B: call    sub_1800A5ED4
 * 00000001800A7D90: mov     r8, rax
 * 00000001800A7D93: mov     r9d, r12d
 * 00000001800A7D96: mov     edx, 5Ah ; 'Z'
 * 00000001800A7D9B: lea     rcx, [rbp+9E40h+var_4010]
 * 00000001800A7DA2: call    sub_1800737C8
 * 00000001800A7DA7: nop
 * 00000001800A7DA8: mov     r8, rax
 * 00000001800A7DAB: mov     rdx, r13
 * 00000001800A7DAE: lea     rcx, [rbp+9E40h+var_4070]
 * 00000001800A7DB5: call    sub_18001B678
 * 00000001800A7DBA: nop
 * 00000001800A7DBB: lea     r8, aPixel; "/Pixel"
 * 00000001800A7DC2: mov     rdx, rax
 * 00000001800A7DC5: lea     rcx, [rbp+9E40h+var_64F0]
 * 00000001800A7DCC: call    sub_18001B5A8
 * 00000001800A7DD1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7DD6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7DDB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7DE0: mov     rcx, rax
 * 00000001800A7DE3: call    sub_18007386C
 * 00000001800A7DE8: nop
 * 00000001800A7DE9: lea     rcx, [rbp+9E40h+var_4070]
 * 00000001800A7DF0: call    sub_180011020
 * 00000001800A7DF5: nop
 * 00000001800A7DF6: lea     rcx, [rbp+9E40h+var_4010]
 * 00000001800A7DFD: call    sub_180011020
 * 00000001800A7E02: nop
 * 00000001800A7E03: lea     rcx, dword_1801CA2B0
 * 00000001800A7E0A: call    _Init_thread_footer
 * 00000001800A7E0F: mov     rax, [rdi+rbx*8]
 * 00000001800A7E13: mov     eax, [r15+rax]
 * 00000001800A7E17: cmp     cs:dword_1801CA2B4, eax
 * 00000001800A7E1D: jle     loc_1800A7EFA
 * 00000001800A7E23: lea     rcx, dword_1801CA2B4
 * 00000001800A7E2A: call    sub_18000CA40
 * 00000001800A7E2F: cmp     cs:dword_1801CA2B4, r14d
 * 00000001800A7E36: jnz     loc_1800A7EFA
 * 00000001800A7E3C: lea     rax, unk_180180E90
 * 00000001800A7E43: mov     qword ptr [rbp+9E40h+var_9CF0], rax
 * 00000001800A7E4A: lea     rax, unk_180187274
 * 00000001800A7E51: mov     qword ptr [rbp+9E40h+var_9CF0+8], rax
 * 00000001800A7E58: movups  xmm7, [rbp+9E40h+var_9CF0]
 * 00000001800A7E5F: mov     dword ptr [rbp+9E40h+var_8940], 5
 * 00000001800A7E69: mov     dword ptr [rbp+9E40h+var_8940+4], esi
 * 00000001800A7E6F: movups  xmm6, [rbp+9E40h+var_8940]
 * 00000001800A7E76: call    sub_1800A5ED4
 * 00000001800A7E7B: mov     r8, rax
 * 00000001800A7E7E: mov     r9d, r12d
 * 00000001800A7E81: mov     edx, 60h ; '`'
 * 00000001800A7E86: lea     rcx, [rbp+9E40h+var_3F50]
 * 00000001800A7E8D: call    sub_1800737C8
 * 00000001800A7E92: nop
 * 00000001800A7E93: mov     r8, rax
 * 00000001800A7E96: mov     rdx, r13
 * 00000001800A7E99: lea     rcx, [rbp+9E40h+var_3FB0]
 * 00000001800A7EA0: call    sub_18001B678
 * 00000001800A7EA5: nop
 * 00000001800A7EA6: lea     r8, aPixel; "/Pixel"
 * 00000001800A7EAD: mov     rdx, rax
 * 00000001800A7EB0: lea     rcx, [rbp+9E40h+var_6990]
 * 00000001800A7EB7: call    sub_18001B5A8
 * 00000001800A7EBC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7EC1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7EC6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7ECB: mov     rcx, rax
 * 00000001800A7ECE: call    sub_18007386C
 * 00000001800A7ED3: nop
 * 00000001800A7ED4: lea     rcx, [rbp+9E40h+var_3FB0]
 * 00000001800A7EDB: call    sub_180011020
 * 00000001800A7EE0: nop
 * 00000001800A7EE1: lea     rcx, [rbp+9E40h+var_3F50]
 * 00000001800A7EE8: call    sub_180011020
 * 00000001800A7EED: nop
 * 00000001800A7EEE: lea     rcx, dword_1801CA2B4
 * 00000001800A7EF5: call    _Init_thread_footer
 * 00000001800A7EFA: mov     rax, [rdi+rbx*8]
 * 00000001800A7EFE: mov     eax, [r15+rax]
 * 00000001800A7F02: cmp     cs:dword_1801CA2B8, eax
 * 00000001800A7F08: jle     loc_1800A7FE5
 * 00000001800A7F0E: lea     rcx, dword_1801CA2B8
 * 00000001800A7F15: call    sub_18000CA40
 * 00000001800A7F1A: cmp     cs:dword_1801CA2B8, r14d
 * 00000001800A7F21: jnz     loc_1800A7FE5
 * 00000001800A7F27: lea     rax, unk_180180E90
 * 00000001800A7F2E: mov     qword ptr [rbp+9E40h+var_9CE0], rax
 * 00000001800A7F35: lea     rax, unk_180187274
 * 00000001800A7F3C: mov     qword ptr [rbp+9E40h+var_9CE0+8], rax
 * 00000001800A7F43: movups  xmm7, [rbp+9E40h+var_9CE0]
 * 00000001800A7F4A: mov     dword ptr [rbp+9E40h+var_8920], 5
 * 00000001800A7F54: mov     dword ptr [rbp+9E40h+var_8920+4], esi
 * 00000001800A7F5A: movups  xmm6, [rbp+9E40h+var_8920]
 * 00000001800A7F61: call    sub_1800A5ED4
 * 00000001800A7F66: mov     r8, rax
 * 00000001800A7F69: mov     r9d, r12d
 * 00000001800A7F6C: mov     edx, 62h ; 'b'
 * 00000001800A7F71: lea     rcx, [rbp+9E40h+var_3E90]
 * 00000001800A7F78: call    sub_1800737C8
 * 00000001800A7F7D: nop
 * 00000001800A7F7E: mov     r8, rax
 * 00000001800A7F81: mov     rdx, r13
 * 00000001800A7F84: lea     rcx, [rbp+9E40h+var_3EF0]
 * 00000001800A7F8B: call    sub_18001B678
 * 00000001800A7F90: nop
 * 00000001800A7F91: lea     r8, aPixel; "/Pixel"
 * 00000001800A7F98: mov     rdx, rax
 * 00000001800A7F9B: lea     rcx, [rbp+9E40h+var_6870]
 * 00000001800A7FA2: call    sub_18001B5A8
 * 00000001800A7FA7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7FAC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7FB1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7FB6: mov     rcx, rax
 * 00000001800A7FB9: call    sub_18007386C
 * 00000001800A7FBE: nop
 * 00000001800A7FBF: lea     rcx, [rbp+9E40h+var_3EF0]
 * 00000001800A7FC6: call    sub_180011020
 * 00000001800A7FCB: nop
 * 00000001800A7FCC: lea     rcx, [rbp+9E40h+var_3E90]
 * 00000001800A7FD3: call    sub_180011020
 * 00000001800A7FD8: nop
 * 00000001800A7FD9: lea     rcx, dword_1801CA2B8
 * 00000001800A7FE0: call    _Init_thread_footer
 * 00000001800A7FE5: mov     rax, [rdi+rbx*8]
 * 00000001800A7FE9: mov     eax, [r15+rax]
 * 00000001800A7FED: cmp     cs:dword_1801CA2BC, eax
 * 00000001800A7FF3: jle     loc_1800A80D0
 * 00000001800A7FF9: lea     rcx, dword_1801CA2BC
 * 00000001800A8000: call    sub_18000CA40
 * 00000001800A8005: cmp     cs:dword_1801CA2BC, r14d
 * 00000001800A800C: jnz     loc_1800A80D0
 * 00000001800A8012: lea     rax, unk_180169670
 * 00000001800A8019: mov     qword ptr [rbp+9E40h+var_9CD0], rax
 * 00000001800A8020: lea     rax, unk_18016FBFC
 * 00000001800A8027: mov     qword ptr [rbp+9E40h+var_9CD0+8], rax
 * 00000001800A802E: movups  xmm7, [rbp+9E40h+var_9CD0]
 * 00000001800A8035: mov     dword ptr [rbp+9E40h+var_8900], 5
 * 00000001800A803F: mov     dword ptr [rbp+9E40h+var_8900+4], esi
 * 00000001800A8045: movups  xmm6, [rbp+9E40h+var_8900]
 * 00000001800A804C: call    sub_1800A5ED4
 * 00000001800A8051: mov     r8, rax
 * 00000001800A8054: mov     r9d, r12d
 * 00000001800A8057: mov     edx, 68h ; 'h'
 * 00000001800A805C: lea     rcx, [rbp+9E40h+var_3DD0]
 * 00000001800A8063: call    sub_1800737C8
 * 00000001800A8068: nop
 * 00000001800A8069: mov     r8, rax
 * 00000001800A806C: mov     rdx, r13
 * 00000001800A806F: lea     rcx, [rbp+9E40h+var_3E30]
 * 00000001800A8076: call    sub_18001B678
 * 00000001800A807B: nop
 * 00000001800A807C: lea     r8, aPixel; "/Pixel"
 * 00000001800A8083: mov     rdx, rax
 * 00000001800A8086: lea     rcx, [rbp+9E40h+var_6730]
 * 00000001800A808D: call    sub_18001B5A8
 * 00000001800A8092: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8097: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A809C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A80A1: mov     rcx, rax
 * 00000001800A80A4: call    sub_18007386C
 * 00000001800A80A9: nop
 * 00000001800A80AA: lea     rcx, [rbp+9E40h+var_3E30]
 * 00000001800A80B1: call    sub_180011020
 * 00000001800A80B6: nop
 * 00000001800A80B7: lea     rcx, [rbp+9E40h+var_3DD0]
 * 00000001800A80BE: call    sub_180011020
 * 00000001800A80C3: nop
 * 00000001800A80C4: lea     rcx, dword_1801CA2BC
 * 00000001800A80CB: call    _Init_thread_footer
 * 00000001800A80D0: mov     rax, [rdi+rbx*8]
 * 00000001800A80D4: mov     eax, [r15+rax]
 * 00000001800A80D8: cmp     cs:dword_1801CA2C0, eax
 * 00000001800A80DE: jle     loc_1800A81BB
 * 00000001800A80E4: lea     rcx, dword_1801CA2C0
 * 00000001800A80EB: call    sub_18000CA40
 * 00000001800A80F0: cmp     cs:dword_1801CA2C0, r14d
 * 00000001800A80F7: jnz     loc_1800A81BB
 * 00000001800A80FD: lea     rax, unk_180169670
 * 00000001800A8104: mov     qword ptr [rbp+9E40h+var_9CC0], rax
 * 00000001800A810B: lea     rax, unk_18016FBFC
 * 00000001800A8112: mov     qword ptr [rbp+9E40h+var_9CC0+8], rax
 * 00000001800A8119: movups  xmm7, [rbp+9E40h+var_9CC0]
 * 00000001800A8120: mov     dword ptr [rbp+9E40h+var_88E0], 5
 * 00000001800A812A: mov     dword ptr [rbp+9E40h+var_88E0+4], esi
 * 00000001800A8130: movups  xmm6, [rbp+9E40h+var_88E0]
 * 00000001800A8137: call    sub_1800A5ED4
 * 00000001800A813C: mov     r8, rax
 * 00000001800A813F: mov     r9d, r12d
 * 00000001800A8142: mov     edx, 6Ah ; 'j'
 * 00000001800A8147: lea     rcx, [rbp+9E40h+var_3D10]
 * 00000001800A814E: call    sub_1800737C8
 * 00000001800A8153: nop
 * 00000001800A8154: mov     r8, rax
 * 00000001800A8157: mov     rdx, r13
 * 00000001800A815A: lea     rcx, [rbp+9E40h+var_3D70]
 * 00000001800A8161: call    sub_18001B678
 * 00000001800A8166: nop
 * 00000001800A8167: lea     r8, aPixel; "/Pixel"
 * 00000001800A816E: mov     rdx, rax
 * 00000001800A8171: lea     rcx, [rbp+9E40h+var_6610]
 * 00000001800A8178: call    sub_18001B5A8
 * 00000001800A817D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8182: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8187: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A818C: mov     rcx, rax
 * 00000001800A818F: call    sub_18007386C
 * 00000001800A8194: nop
 * 00000001800A8195: lea     rcx, [rbp+9E40h+var_3D70]
 * 00000001800A819C: call    sub_180011020
 * 00000001800A81A1: nop
 * 00000001800A81A2: lea     rcx, [rbp+9E40h+var_3D10]
 * 00000001800A81A9: call    sub_180011020
 * 00000001800A81AE: nop
 * 00000001800A81AF: lea     rcx, dword_1801CA2C0
 * 00000001800A81B6: call    _Init_thread_footer
 * 00000001800A81BB: mov     rax, [rdi+rbx*8]
 * 00000001800A81BF: mov     eax, [r15+rax]
 * 00000001800A81C3: cmp     cs:dword_1801CA2C4, eax
 * 00000001800A81C9: jle     loc_1800A82A6
 * 00000001800A81CF: lea     rcx, dword_1801CA2C4
 * 00000001800A81D6: call    sub_18000CA40
 * 00000001800A81DB: cmp     cs:dword_1801CA2C4, r14d
 * 00000001800A81E2: jnz     loc_1800A82A6
 * 00000001800A81E8: lea     rax, unk_1801630B0
 * 00000001800A81EF: mov     qword ptr [rbp+9E40h+var_9CB0], rax
 * 00000001800A81F6: lea     rax, unk_180169668
 * 00000001800A81FD: mov     qword ptr [rbp+9E40h+var_9CB0+8], rax
 * 00000001800A8204: movups  xmm7, [rbp+9E40h+var_9CB0]
 * 00000001800A820B: mov     dword ptr [rbp+9E40h+var_88C0], 5
 * 00000001800A8215: mov     dword ptr [rbp+9E40h+var_88C0+4], esi
 * 00000001800A821B: movups  xmm6, [rbp+9E40h+var_88C0]
 * 00000001800A8222: call    sub_1800A5ED4
 * 00000001800A8227: mov     r8, rax
 * 00000001800A822A: mov     r9d, r12d
 * 00000001800A822D: mov     edx, 70h ; 'p'
 * 00000001800A8232: lea     rcx, [rbp+9E40h+var_3C50]
 * 00000001800A8239: call    sub_1800737C8
 * 00000001800A823E: nop
 * 00000001800A823F: mov     r8, rax
 * 00000001800A8242: mov     rdx, r13
 * 00000001800A8245: lea     rcx, [rbp+9E40h+var_3CB0]
 * 00000001800A824C: call    sub_18001B678
 * 00000001800A8251: nop
 * 00000001800A8252: lea     r8, aPixel; "/Pixel"
 * 00000001800A8259: mov     rdx, rax
 * 00000001800A825C: lea     rcx, [rbp+9E40h+var_6490]
 * 00000001800A8263: call    sub_18001B5A8
 * 00000001800A8268: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A826D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8272: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8277: mov     rcx, rax
 * 00000001800A827A: call    sub_18007386C
 * 00000001800A827F: nop
 * 00000001800A8280: lea     rcx, [rbp+9E40h+var_3CB0]
 * 00000001800A8287: call    sub_180011020
 * 00000001800A828C: nop
 * 00000001800A828D: lea     rcx, [rbp+9E40h+var_3C50]
 * 00000001800A8294: call    sub_180011020
 * 00000001800A8299: nop
 * 00000001800A829A: lea     rcx, dword_1801CA2C4
 * 00000001800A82A1: call    _Init_thread_footer
 * 00000001800A82A6: mov     rax, [rdi+rbx*8]
 * 00000001800A82AA: mov     eax, [r15+rax]
 * 00000001800A82AE: cmp     cs:dword_1801CA2C8, eax
 * 00000001800A82B4: jle     loc_1800A8391
 * 00000001800A82BA: lea     rcx, dword_1801CA2C8
 * 00000001800A82C1: call    sub_18000CA40
 * 00000001800A82C6: cmp     cs:dword_1801CA2C8, r14d
 * 00000001800A82CD: jnz     loc_1800A8391
 * 00000001800A82D3: lea     rax, unk_1801630B0
 * 00000001800A82DA: mov     qword ptr [rbp+9E40h+var_9CA0], rax
 * 00000001800A82E1: lea     rax, unk_180169668
 * 00000001800A82E8: mov     qword ptr [rbp+9E40h+var_9CA0+8], rax
 * 00000001800A82EF: movups  xmm7, [rbp+9E40h+var_9CA0]
 * 00000001800A82F6: mov     dword ptr [rbp+9E40h+var_88A0], 5
 * 00000001800A8300: mov     dword ptr [rbp+9E40h+var_88A0+4], esi
 * 00000001800A8306: movups  xmm6, [rbp+9E40h+var_88A0]
 * 00000001800A830D: call    sub_1800A5ED4
 * 00000001800A8312: mov     r8, rax
 * 00000001800A8315: mov     r9d, r12d
 * 00000001800A8318: mov     edx, 72h ; 'r'
 * 00000001800A831D: lea     rcx, [rbp+9E40h+var_3B90]
 * 00000001800A8324: call    sub_1800737C8
 * 00000001800A8329: nop
 * 00000001800A832A: mov     r8, rax
 * 00000001800A832D: mov     rdx, r13
 * 00000001800A8330: lea     rcx, [rbp+9E40h+var_3BF0]
 * 00000001800A8337: call    sub_18001B678
 * 00000001800A833C: nop
 * 00000001800A833D: lea     r8, aPixel; "/Pixel"
 * 00000001800A8344: mov     rdx, rax
 * 00000001800A8347: lea     rcx, [rbp+9E40h+var_68D0]
 * 00000001800A834E: call    sub_18001B5A8
 * 00000001800A8353: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8358: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A835D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8362: mov     rcx, rax
 * 00000001800A8365: call    sub_18007386C
 * 00000001800A836A: nop
 * 00000001800A836B: lea     rcx, [rbp+9E40h+var_3BF0]
 * 00000001800A8372: call    sub_180011020
 * 00000001800A8377: nop
 * 00000001800A8378: lea     rcx, [rbp+9E40h+var_3B90]
 * 00000001800A837F: call    sub_180011020
 * 00000001800A8384: nop
 * 00000001800A8385: lea     rcx, dword_1801CA2C8
 * 00000001800A838C: call    _Init_thread_footer
 * 00000001800A8391: mov     rax, [rdi+rbx*8]
 * 00000001800A8395: mov     eax, [r15+rax]
 * 00000001800A8399: cmp     cs:dword_1801CA2CC, eax
 * 00000001800A839F: jle     loc_1800A847C
 * 00000001800A83A5: lea     rcx, dword_1801CA2CC
 * 00000001800A83AC: call    sub_18000CA40
 * 00000001800A83B1: cmp     cs:dword_1801CA2CC, r14d
 * 00000001800A83B8: jnz     loc_1800A847C
 * 00000001800A83BE: lea     rax, unk_180170CD0
 * 00000001800A83C5: mov     qword ptr [rbp+9E40h+var_9C90], rax
 * 00000001800A83CC: lea     rax, unk_18017745C
 * 00000001800A83D3: mov     qword ptr [rbp+9E40h+var_9C90+8], rax
 * 00000001800A83DA: movups  xmm7, [rbp+9E40h+var_9C90]
 * 00000001800A83E1: mov     dword ptr [rbp+9E40h+var_8880], 5
 * 00000001800A83EB: mov     dword ptr [rbp+9E40h+var_8880+4], esi
 * 00000001800A83F1: movups  xmm6, [rbp+9E40h+var_8880]
 * 00000001800A83F8: call    sub_1800A5ED4
 * 00000001800A83FD: mov     r8, rax
 * 00000001800A8400: mov     r9d, r12d
 * 00000001800A8403: mov     edx, 78h ; 'x'
 * 00000001800A8408: lea     rcx, [rbp+9E40h+var_3AD0]
 * 00000001800A840F: call    sub_1800737C8
 * 00000001800A8414: nop
 * 00000001800A8415: mov     r8, rax
 * 00000001800A8418: mov     rdx, r13
 * 00000001800A841B: lea     rcx, [rbp+9E40h+var_3B30]
 * 00000001800A8422: call    sub_18001B678
 * 00000001800A8427: nop
 * 00000001800A8428: lea     r8, aPixel; "/Pixel"
 * 00000001800A842F: mov     rdx, rax
 * 00000001800A8432: lea     rcx, [rbp+9E40h+var_66D0]
 * 00000001800A8439: call    sub_18001B5A8
 * 00000001800A843E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8443: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8448: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A844D: mov     rcx, rax
 * 00000001800A8450: call    sub_18007386C
 * 00000001800A8455: nop
 * 00000001800A8456: lea     rcx, [rbp+9E40h+var_3B30]
 * 00000001800A845D: call    sub_180011020
 * 00000001800A8462: nop
 * 00000001800A8463: lea     rcx, [rbp+9E40h+var_3AD0]
 * 00000001800A846A: call    sub_180011020
 * 00000001800A846F: nop
 * 00000001800A8470: lea     rcx, dword_1801CA2CC
 * 00000001800A8477: call    _Init_thread_footer
 * 00000001800A847C: mov     rax, [rdi+rbx*8]
 * 00000001800A8480: mov     eax, [r15+rax]
 * 00000001800A8484: cmp     cs:dword_1801CA2D0, eax
 * 00000001800A848A: jle     loc_1800A8567
 * 00000001800A8490: lea     rcx, dword_1801CA2D0
 * 00000001800A8497: call    sub_18000CA40
 * 00000001800A849C: cmp     cs:dword_1801CA2D0, r14d
 * 00000001800A84A3: jnz     loc_1800A8567
 * 00000001800A84A9: lea     rax, unk_180170CD0
 * 00000001800A84B0: mov     qword ptr [rbp+9E40h+var_9C80], rax
 * 00000001800A84B7: lea     rax, unk_18017745C
 * 00000001800A84BE: mov     qword ptr [rbp+9E40h+var_9C80+8], rax
 * 00000001800A84C5: movups  xmm7, [rbp+9E40h+var_9C80]
 * 00000001800A84CC: mov     dword ptr [rbp+9E40h+var_8860], 5
 * 00000001800A84D6: mov     dword ptr [rbp+9E40h+var_8860+4], esi
 * 00000001800A84DC: movups  xmm6, [rbp+9E40h+var_8860]
 * 00000001800A84E3: call    sub_1800A5ED4
 * 00000001800A84E8: mov     r8, rax
 * 00000001800A84EB: mov     r9d, r12d
 * 00000001800A84EE: mov     edx, 7Ah ; 'z'
 * 00000001800A84F3: lea     rcx, [rbp+9E40h+var_3A10]
 * 00000001800A84FA: call    sub_1800737C8
 * 00000001800A84FF: nop
 * 00000001800A8500: mov     r8, rax
 * 00000001800A8503: mov     rdx, r13
 * 00000001800A8506: lea     rcx, [rbp+9E40h+var_3A70]
 * 00000001800A850D: call    sub_18001B678
 * 00000001800A8512: nop
 * 00000001800A8513: lea     r8, aPixel; "/Pixel"
 * 00000001800A851A: mov     rdx, rax
 * 00000001800A851D: lea     rcx, [rbp+9E40h+var_6510]
 * 00000001800A8524: call    sub_18001B5A8
 * 00000001800A8529: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A852E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8533: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8538: mov     rcx, rax
 * 00000001800A853B: call    sub_18007386C
 * 00000001800A8540: nop
 * 00000001800A8541: lea     rcx, [rbp+9E40h+var_3A70]
 * 00000001800A8548: call    sub_180011020
 * 00000001800A854D: nop
 * 00000001800A854E: lea     rcx, [rbp+9E40h+var_3A10]
 * 00000001800A8555: call    sub_180011020
 * 00000001800A855A: nop
 * 00000001800A855B: lea     rcx, dword_1801CA2D0
 * 00000001800A8562: call    _Init_thread_footer
 * 00000001800A8567: mov     rax, [rdi+rbx*8]
 * 00000001800A856B: mov     eax, [r15+rax]
 * 00000001800A856F: cmp     cs:dword_1801CA2D4, eax
 * 00000001800A8575: jle     loc_1800A8652
 * 00000001800A857B: lea     rcx, dword_1801CA2D4
 * 00000001800A8582: call    sub_18000CA40
 * 00000001800A8587: cmp     cs:dword_1801CA2D4, r14d
 * 00000001800A858E: jnz     loc_1800A8652
 * 00000001800A8594: lea     rax, unk_180180E90
 * 00000001800A859B: mov     qword ptr [rbp+9E40h+var_9C70], rax
 * 00000001800A85A2: lea     rax, unk_180187274
 * 00000001800A85A9: mov     qword ptr [rbp+9E40h+var_9C70+8], rax
 * 00000001800A85B0: movups  xmm7, [rbp+9E40h+var_9C70]
 * 00000001800A85B7: mov     dword ptr [rbp+9E40h+var_8840], 5
 * 00000001800A85C1: mov     dword ptr [rbp+9E40h+var_8840+4], esi
 * 00000001800A85C7: movups  xmm6, [rbp+9E40h+var_8840]
 * 00000001800A85CE: call    sub_1800A5ED4
 * 00000001800A85D3: mov     r8, rax
 * 00000001800A85D6: mov     r9d, r12d
 * 00000001800A85D9: mov     edx, 80h
 * 00000001800A85DE: lea     rcx, [rbp+9E40h+var_3950]
 * 00000001800A85E5: call    sub_1800737C8
 * 00000001800A85EA: nop
 * 00000001800A85EB: mov     r8, rax
 * 00000001800A85EE: mov     rdx, r13
 * 00000001800A85F1: lea     rcx, [rbp+9E40h+var_39B0]
 * 00000001800A85F8: call    sub_18001B678
 * 00000001800A85FD: nop
 * 00000001800A85FE: lea     r8, aPixel; "/Pixel"
 * 00000001800A8605: mov     rdx, rax
 * 00000001800A8608: lea     rcx, [rbp+9E40h+var_67F0]
 * 00000001800A860F: call    sub_18001B5A8
 * 00000001800A8614: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8619: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A861E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8623: mov     rcx, rax
 * 00000001800A8626: call    sub_18007386C
 * 00000001800A862B: nop
 * 00000001800A862C: lea     rcx, [rbp+9E40h+var_39B0]
 * 00000001800A8633: call    sub_180011020
 * 00000001800A8638: nop
 * 00000001800A8639: lea     rcx, [rbp+9E40h+var_3950]
 * 00000001800A8640: call    sub_180011020
 * 00000001800A8645: nop
 * 00000001800A8646: lea     rcx, dword_1801CA2D4
 * 00000001800A864D: call    _Init_thread_footer
 * 00000001800A8652: mov     rax, [rdi+rbx*8]
 * 00000001800A8656: mov     eax, [r15+rax]
 * 00000001800A865A: cmp     cs:dword_1801CA2D8, eax
 * 00000001800A8660: jle     loc_1800A873D
 * 00000001800A8666: lea     rcx, dword_1801CA2D8
 * 00000001800A866D: call    sub_18000CA40
 * 00000001800A8672: cmp     cs:dword_1801CA2D8, r14d
 * 00000001800A8679: jnz     loc_1800A873D
 * 00000001800A867F: lea     rax, unk_180180E90
 * 00000001800A8686: mov     qword ptr [rbp+9E40h+var_9C60], rax
 * 00000001800A868D: lea     rax, unk_180187274
 * 00000001800A8694: mov     qword ptr [rbp+9E40h+var_9C60+8], rax
 * 00000001800A869B: movups  xmm7, [rbp+9E40h+var_9C60]
 * 00000001800A86A2: mov     dword ptr [rbp+9E40h+var_8820], 5
 * 00000001800A86AC: mov     dword ptr [rbp+9E40h+var_8820+4], esi
 * 00000001800A86B2: movups  xmm6, [rbp+9E40h+var_8820]
 * 00000001800A86B9: call    sub_1800A5ED4
 * 00000001800A86BE: mov     r8, rax
 * 00000001800A86C1: mov     r9d, r12d
 * 00000001800A86C4: mov     edx, 82h
 * 00000001800A86C9: lea     rcx, [rbp+9E40h+var_3890]
 * 00000001800A86D0: call    sub_1800737C8
 * 00000001800A86D5: nop
 * 00000001800A86D6: mov     r8, rax
 * 00000001800A86D9: mov     rdx, r13
 * 00000001800A86DC: lea     rcx, [rbp+9E40h+var_38F0]
 * 00000001800A86E3: call    sub_18001B678
 * 00000001800A86E8: nop
 * 00000001800A86E9: lea     r8, aPixel; "/Pixel"
 * 00000001800A86F0: mov     rdx, rax
 * 00000001800A86F3: lea     rcx, [rbp+9E40h+var_6570]
 * 00000001800A86FA: call    sub_18001B5A8
 * 00000001800A86FF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8704: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8709: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A870E: mov     rcx, rax
 * 00000001800A8711: call    sub_18007386C
 * 00000001800A8716: nop
 * 00000001800A8717: lea     rcx, [rbp+9E40h+var_38F0]
 * 00000001800A871E: call    sub_180011020
 * 00000001800A8723: nop
 * 00000001800A8724: lea     rcx, [rbp+9E40h+var_3890]
 * 00000001800A872B: call    sub_180011020
 * 00000001800A8730: nop
 * 00000001800A8731: lea     rcx, dword_1801CA2D8
 * 00000001800A8738: call    _Init_thread_footer
 * 00000001800A873D: mov     rax, [rdi+rbx*8]
 * 00000001800A8741: mov     eax, [r15+rax]
 * 00000001800A8745: cmp     cs:dword_1801CA2DC, eax
 * 00000001800A874B: jle     loc_1800A8828
 * 00000001800A8751: lea     rcx, dword_1801CA2DC
 * 00000001800A8758: call    sub_18000CA40
 * 00000001800A875D: cmp     cs:dword_1801CA2DC, r14d
 * 00000001800A8764: jnz     loc_1800A8828
 * 00000001800A876A: lea     rax, unk_180169670
 * 00000001800A8771: mov     qword ptr [rbp+9E40h+var_9C50], rax
 * 00000001800A8778: lea     rax, unk_18016FBFC
 * 00000001800A877F: mov     qword ptr [rbp+9E40h+var_9C50+8], rax
 * 00000001800A8786: movups  xmm7, [rbp+9E40h+var_9C50]
 * 00000001800A878D: mov     dword ptr [rbp+9E40h+var_8800], 5
 * 00000001800A8797: mov     dword ptr [rbp+9E40h+var_8800+4], esi
 * 00000001800A879D: movups  xmm6, [rbp+9E40h+var_8800]
 * 00000001800A87A4: call    sub_1800A5ED4
 * 00000001800A87A9: mov     r8, rax
 * 00000001800A87AC: mov     r9d, r12d
 * 00000001800A87AF: mov     edx, 88h
 * 00000001800A87B4: lea     rcx, [rbp+9E40h+var_37D0]
 * 00000001800A87BB: call    sub_1800737C8
 * 00000001800A87C0: nop
 * 00000001800A87C1: mov     r8, rax
 * 00000001800A87C4: mov     rdx, r13
 * 00000001800A87C7: lea     rcx, [rbp+9E40h+var_3830]
 * 00000001800A87CE: call    sub_18001B678
 * 00000001800A87D3: nop
 * 00000001800A87D4: lea     r8, aPixel; "/Pixel"
 * 00000001800A87DB: mov     rdx, rax
 * 00000001800A87DE: lea     rcx, [rbp+9E40h+var_67B0]
 * 00000001800A87E5: call    sub_18001B5A8
 * 00000001800A87EA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A87EF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A87F4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A87F9: mov     rcx, rax
 * 00000001800A87FC: call    sub_18007386C
 * 00000001800A8801: nop
 * 00000001800A8802: lea     rcx, [rbp+9E40h+var_3830]
 * 00000001800A8809: call    sub_180011020
 * 00000001800A880E: nop
 * 00000001800A880F: lea     rcx, [rbp+9E40h+var_37D0]
 * 00000001800A8816: call    sub_180011020
 * 00000001800A881B: nop
 * 00000001800A881C: lea     rcx, dword_1801CA2DC
 * 00000001800A8823: call    _Init_thread_footer
 * 00000001800A8828: mov     rax, [rdi+rbx*8]
 * 00000001800A882C: mov     eax, [r15+rax]
 * 00000001800A8830: cmp     cs:dword_1801CA2E0, eax
 * 00000001800A8836: jle     loc_1800A8913
 * 00000001800A883C: lea     rcx, dword_1801CA2E0
 * 00000001800A8843: call    sub_18000CA40
 * 00000001800A8848: cmp     cs:dword_1801CA2E0, r14d
 * 00000001800A884F: jnz     loc_1800A8913
 * 00000001800A8855: lea     rax, unk_180169670
 * 00000001800A885C: mov     qword ptr [rbp+9E40h+var_9C40], rax
 * 00000001800A8863: lea     rax, unk_18016FBFC
 * 00000001800A886A: mov     qword ptr [rbp+9E40h+var_9C40+8], rax
 * 00000001800A8871: movups  xmm7, [rbp+9E40h+var_9C40]
 * 00000001800A8878: mov     dword ptr [rbp+9E40h+var_87E0], 5
 * 00000001800A8882: mov     dword ptr [rbp+9E40h+var_87E0+4], esi
 * 00000001800A8888: movups  xmm6, [rbp+9E40h+var_87E0]
 * 00000001800A888F: call    sub_1800A5ED4
 * 00000001800A8894: mov     r8, rax
 * 00000001800A8897: mov     r9d, r12d
 * 00000001800A889A: mov     edx, 8Ah
 * 00000001800A889F: lea     rcx, [rbp+9E40h+var_3710]
 * 00000001800A88A6: call    sub_1800737C8
 * 00000001800A88AB: nop
 * 00000001800A88AC: mov     r8, rax
 * 00000001800A88AF: mov     rdx, r13
 * 00000001800A88B2: lea     rcx, [rbp+9E40h+var_3770]
 * 00000001800A88B9: call    sub_18001B678
 * 00000001800A88BE: nop
 * 00000001800A88BF: lea     r8, aPixel; "/Pixel"
 * 00000001800A88C6: mov     rdx, rax
 * 00000001800A88C9: lea     rcx, [rbp+9E40h+var_6970]
 * 00000001800A88D0: call    sub_18001B5A8
 * 00000001800A88D5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A88DA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A88DF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A88E4: mov     rcx, rax
 * 00000001800A88E7: call    sub_18007386C
 * 00000001800A88EC: nop
 * 00000001800A88ED: lea     rcx, [rbp+9E40h+var_3770]
 * 00000001800A88F4: call    sub_180011020
 * 00000001800A88F9: nop
 * 00000001800A88FA: lea     rcx, [rbp+9E40h+var_3710]
 * 00000001800A8901: call    sub_180011020
 * 00000001800A8906: nop
 * 00000001800A8907: lea     rcx, dword_1801CA2E0
 * 00000001800A890E: call    _Init_thread_footer
 * 00000001800A8913: mov     rax, [rdi+rbx*8]
 * 00000001800A8917: mov     eax, [r15+rax]
 * 00000001800A891B: cmp     cs:dword_1801CA2E4, eax
 * 00000001800A8921: jle     loc_1800A89FE
 * 00000001800A8927: lea     rcx, dword_1801CA2E4
 * 00000001800A892E: call    sub_18000CA40
 * 00000001800A8933: cmp     cs:dword_1801CA2E4, r14d
 * 00000001800A893A: jnz     loc_1800A89FE
 * 00000001800A8940: lea     rax, unk_1801630B0
 * 00000001800A8947: mov     qword ptr [rbp+9E40h+var_9C30], rax
 * 00000001800A894E: lea     rax, unk_180169668
 * 00000001800A8955: mov     qword ptr [rbp+9E40h+var_9C30+8], rax
 * 00000001800A895C: movups  xmm7, [rbp+9E40h+var_9C30]
 * 00000001800A8963: mov     dword ptr [rbp+9E40h+var_87C0], 5
 * 00000001800A896D: mov     dword ptr [rbp+9E40h+var_87C0+4], esi
 * 00000001800A8973: movups  xmm6, [rbp+9E40h+var_87C0]
 * 00000001800A897A: call    sub_1800A5ED4
 * 00000001800A897F: mov     r8, rax
 * 00000001800A8982: mov     r9d, r12d
 * 00000001800A8985: mov     edx, 90h
 * 00000001800A898A: lea     rcx, [rbp+9E40h+var_3650]
 * 00000001800A8991: call    sub_1800737C8
 * 00000001800A8996: nop
 * 00000001800A8997: mov     r8, rax
 * 00000001800A899A: mov     rdx, r13
 * 00000001800A899D: lea     rcx, [rbp+9E40h+var_36B0]
 * 00000001800A89A4: call    sub_18001B678
 * 00000001800A89A9: nop
 * 00000001800A89AA: lea     r8, aPixel; "/Pixel"
 * 00000001800A89B1: mov     rdx, rax
 * 00000001800A89B4: lea     rcx, [rbp+9E40h+var_6630]
 * 00000001800A89BB: call    sub_18001B5A8
 * 00000001800A89C0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A89C5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A89CA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A89CF: mov     rcx, rax
 * 00000001800A89D2: call    sub_18007386C
 * 00000001800A89D7: nop
 * 00000001800A89D8: lea     rcx, [rbp+9E40h+var_36B0]
 * 00000001800A89DF: call    sub_180011020
 * 00000001800A89E4: nop
 * 00000001800A89E5: lea     rcx, [rbp+9E40h+var_3650]
 * 00000001800A89EC: call    sub_180011020
 * 00000001800A89F1: nop
 * 00000001800A89F2: lea     rcx, dword_1801CA2E4
 * 00000001800A89F9: call    _Init_thread_footer
 * 00000001800A89FE: mov     rax, [rdi+rbx*8]
 * 00000001800A8A02: mov     eax, [r15+rax]
 * 00000001800A8A06: cmp     cs:dword_1801CA2E8, eax
 * 00000001800A8A0C: jle     loc_1800A8AE9
 * 00000001800A8A12: lea     rcx, dword_1801CA2E8
 * 00000001800A8A19: call    sub_18000CA40
 * 00000001800A8A1E: cmp     cs:dword_1801CA2E8, r14d
 * 00000001800A8A25: jnz     loc_1800A8AE9
 * 00000001800A8A2B: lea     rax, unk_1801630B0
 * 00000001800A8A32: mov     qword ptr [rbp+9E40h+var_9C20], rax
 * 00000001800A8A39: lea     rax, unk_180169668
 * 00000001800A8A40: mov     qword ptr [rbp+9E40h+var_9C20+8], rax
 * 00000001800A8A47: movups  xmm7, [rbp+9E40h+var_9C20]
 * 00000001800A8A4E: mov     dword ptr [rbp+9E40h+var_87A0], 5
 * 00000001800A8A58: mov     dword ptr [rbp+9E40h+var_87A0+4], esi
 * 00000001800A8A5E: movups  xmm6, [rbp+9E40h+var_87A0]
 * 00000001800A8A65: call    sub_1800A5ED4
 * 00000001800A8A6A: mov     r8, rax
 * 00000001800A8A6D: mov     r9d, r12d
 * 00000001800A8A70: mov     edx, 92h
 * 00000001800A8A75: lea     rcx, [rbp+9E40h+var_3590]
 * 00000001800A8A7C: call    sub_1800737C8
 * 00000001800A8A81: nop
 * 00000001800A8A82: mov     r8, rax
 * 00000001800A8A85: mov     rdx, r13
 * 00000001800A8A88: lea     rcx, [rbp+9E40h+var_35F0]
 * 00000001800A8A8F: call    sub_18001B678
 * 00000001800A8A94: nop
 * 00000001800A8A95: lea     r8, aPixel; "/Pixel"
 * 00000001800A8A9C: mov     rdx, rax
 * 00000001800A8A9F: lea     rcx, [rbp+9E40h+var_6450]
 * 00000001800A8AA6: call    sub_18001B5A8
 * 00000001800A8AAB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8AB0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8AB5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8ABA: mov     rcx, rax
 * 00000001800A8ABD: call    sub_18007386C
 * 00000001800A8AC2: nop
 * 00000001800A8AC3: lea     rcx, [rbp+9E40h+var_35F0]
 * 00000001800A8ACA: call    sub_180011020
 * 00000001800A8ACF: nop
 * 00000001800A8AD0: lea     rcx, [rbp+9E40h+var_3590]
 * 00000001800A8AD7: call    sub_180011020
 * 00000001800A8ADC: nop
 * 00000001800A8ADD: lea     rcx, dword_1801CA2E8
 * 00000001800A8AE4: call    _Init_thread_footer
 * 00000001800A8AE9: mov     rax, [rdi+rbx*8]
 * 00000001800A8AED: mov     eax, [r15+rax]
 * 00000001800A8AF1: cmp     cs:dword_1801CA2EC, eax
 * 00000001800A8AF7: jle     loc_1800A8BD4
 * 00000001800A8AFD: lea     rcx, dword_1801CA2EC
 * 00000001800A8B04: call    sub_18000CA40
 * 00000001800A8B09: cmp     cs:dword_1801CA2EC, r14d
 * 00000001800A8B10: jnz     loc_1800A8BD4
 * 00000001800A8B16: lea     rax, unk_180170CD0
 * 00000001800A8B1D: mov     qword ptr [rbp+9E40h+var_9C10], rax
 * 00000001800A8B24: lea     rax, unk_18017745C
 * 00000001800A8B2B: mov     qword ptr [rbp+9E40h+var_9C10+8], rax
 * 00000001800A8B32: movups  xmm7, [rbp+9E40h+var_9C10]
 * 00000001800A8B39: mov     dword ptr [rbp+9E40h+var_8780], 5
 * 00000001800A8B43: mov     dword ptr [rbp+9E40h+var_8780+4], esi
 * 00000001800A8B49: movups  xmm6, [rbp+9E40h+var_8780]
 * 00000001800A8B50: call    sub_1800A5ED4
 * 00000001800A8B55: mov     r8, rax
 * 00000001800A8B58: mov     r9d, r12d
 * 00000001800A8B5B: mov     edx, 98h
 * 00000001800A8B60: lea     rcx, [rbp+9E40h+var_3470]
 * 00000001800A8B67: call    sub_1800737C8
 * 00000001800A8B6C: nop
 * 00000001800A8B6D: mov     r8, rax
 * 00000001800A8B70: mov     rdx, r13
 * 00000001800A8B73: lea     rcx, [rbp+9E40h+var_34D0]
 * 00000001800A8B7A: call    sub_18001B678
 * 00000001800A8B7F: nop
 * 00000001800A8B80: lea     r8, aPixel; "/Pixel"
 * 00000001800A8B87: mov     rdx, rax
 * 00000001800A8B8A: lea     rcx, [rbp+9E40h+var_6430]
 * 00000001800A8B91: call    sub_18001B5A8
 * 00000001800A8B96: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8B9B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8BA0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8BA5: mov     rcx, rax
 * 00000001800A8BA8: call    sub_18007386C
 * 00000001800A8BAD: nop
 * 00000001800A8BAE: lea     rcx, [rbp+9E40h+var_34D0]
 * 00000001800A8BB5: call    sub_180011020
 * 00000001800A8BBA: nop
 * 00000001800A8BBB: lea     rcx, [rbp+9E40h+var_3470]
 * 00000001800A8BC2: call    sub_180011020
 * 00000001800A8BC7: nop
 * 00000001800A8BC8: lea     rcx, dword_1801CA2EC
 * 00000001800A8BCF: call    _Init_thread_footer
 * 00000001800A8BD4: mov     rax, [rdi+rbx*8]
 * 00000001800A8BD8: mov     eax, [r15+rax]
 * 00000001800A8BDC: cmp     cs:dword_1801CA2F0, eax
 * 00000001800A8BE2: jle     loc_1800A8CBF
 * 00000001800A8BE8: lea     rcx, dword_1801CA2F0
 * 00000001800A8BEF: call    sub_18000CA40
 * 00000001800A8BF4: cmp     cs:dword_1801CA2F0, r14d
 * 00000001800A8BFB: jnz     loc_1800A8CBF
 * 00000001800A8C01: lea     rax, unk_180170CD0
 * 00000001800A8C08: mov     qword ptr [rbp+9E40h+var_9C00], rax
 * 00000001800A8C0F: lea     rax, unk_18017745C
 * 00000001800A8C16: mov     qword ptr [rbp+9E40h+var_9C00+8], rax
 * 00000001800A8C1D: movups  xmm7, [rbp+9E40h+var_9C00]
 * 00000001800A8C24: mov     dword ptr [rbp+9E40h+var_8760], 5
 * 00000001800A8C2E: mov     dword ptr [rbp+9E40h+var_8760+4], esi
 * 00000001800A8C34: movups  xmm6, [rbp+9E40h+var_8760]
 * 00000001800A8C3B: call    sub_1800A5ED4
 * 00000001800A8C40: mov     r8, rax
 * 00000001800A8C43: mov     r9d, r12d
 * 00000001800A8C46: mov     edx, 9Ah
 * 00000001800A8C4B: lea     rcx, [rbp+9E40h+var_3350]
 * 00000001800A8C52: call    sub_1800737C8
 * 00000001800A8C57: nop
 * 00000001800A8C58: mov     r8, rax
 * 00000001800A8C5B: mov     rdx, r13
 * 00000001800A8C5E: lea     rcx, [rbp+9E40h+var_33B0]
 * 00000001800A8C65: call    sub_18001B678
 * 00000001800A8C6A: nop
 * 00000001800A8C6B: lea     r8, aPixel; "/Pixel"
 * 00000001800A8C72: mov     rdx, rax
 * 00000001800A8C75: lea     rcx, [rbp+9E40h+var_6410]
 * 00000001800A8C7C: call    sub_18001B5A8
 * 00000001800A8C81: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8C86: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8C8B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8C90: mov     rcx, rax
 * 00000001800A8C93: call    sub_18007386C
 * 00000001800A8C98: nop
 * 00000001800A8C99: lea     rcx, [rbp+9E40h+var_33B0]
 * 00000001800A8CA0: call    sub_180011020
 * 00000001800A8CA5: nop
 * 00000001800A8CA6: lea     rcx, [rbp+9E40h+var_3350]
 * 00000001800A8CAD: call    sub_180011020
 * 00000001800A8CB2: nop
 * 00000001800A8CB3: lea     rcx, dword_1801CA2F0
 * 00000001800A8CBA: call    _Init_thread_footer
 * 00000001800A8CBF: mov     rax, [rdi+rbx*8]
 * 00000001800A8CC3: mov     eax, [r15+rax]
 * 00000001800A8CC7: cmp     cs:dword_1801CA2F4, eax
 * 00000001800A8CCD: jle     loc_1800A8DAA
 * 00000001800A8CD3: lea     rcx, dword_1801CA2F4
 * 00000001800A8CDA: call    sub_18000CA40
 * 00000001800A8CDF: cmp     cs:dword_1801CA2F4, r14d
 * 00000001800A8CE6: jnz     loc_1800A8DAA
 * 00000001800A8CEC: lea     rax, unk_180180E90
 * 00000001800A8CF3: mov     qword ptr [rbp+9E40h+var_9BF0], rax
 * 00000001800A8CFA: lea     rax, unk_180187274
 * 00000001800A8D01: mov     qword ptr [rbp+9E40h+var_9BF0+8], rax
 * 00000001800A8D08: movups  xmm7, [rbp+9E40h+var_9BF0]
 * 00000001800A8D0F: mov     dword ptr [rbp+9E40h+var_8740], 5
 * 00000001800A8D19: mov     dword ptr [rbp+9E40h+var_8740+4], esi
 * 00000001800A8D1F: movups  xmm6, [rbp+9E40h+var_8740]
 * 00000001800A8D26: call    sub_1800A5ED4
 * 00000001800A8D2B: mov     r8, rax
 * 00000001800A8D2E: mov     r9d, r12d
 * 00000001800A8D31: mov     edx, 0A0h
 * 00000001800A8D36: lea     rcx, [rbp+9E40h+var_3230]
 * 00000001800A8D3D: call    sub_1800737C8
 * 00000001800A8D42: nop
 * 00000001800A8D43: mov     r8, rax
 * 00000001800A8D46: mov     rdx, r13
 * 00000001800A8D49: lea     rcx, [rbp+9E40h+var_3290]
 * 00000001800A8D50: call    sub_18001B678
 * 00000001800A8D55: nop
 * 00000001800A8D56: lea     r8, aPixel; "/Pixel"
 * 00000001800A8D5D: mov     rdx, rax
 * 00000001800A8D60: lea     rcx, [rbp+9E40h+var_63F0]
 * 00000001800A8D67: call    sub_18001B5A8
 * 00000001800A8D6C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8D71: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8D76: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8D7B: mov     rcx, rax
 * 00000001800A8D7E: call    sub_18007386C
 * 00000001800A8D83: nop
 * 00000001800A8D84: lea     rcx, [rbp+9E40h+var_3290]
 * 00000001800A8D8B: call    sub_180011020
 * 00000001800A8D90: nop
 * 00000001800A8D91: lea     rcx, [rbp+9E40h+var_3230]
 * 00000001800A8D98: call    sub_180011020
 * 00000001800A8D9D: nop
 * 00000001800A8D9E: lea     rcx, dword_1801CA2F4
 * 00000001800A8DA5: call    _Init_thread_footer
 * 00000001800A8DAA: mov     rax, [rdi+rbx*8]
 * 00000001800A8DAE: mov     eax, [r15+rax]
 * 00000001800A8DB2: cmp     cs:dword_1801CA2F8, eax
 * 00000001800A8DB8: jle     loc_1800A8E95
 * 00000001800A8DBE: lea     rcx, dword_1801CA2F8
 * 00000001800A8DC5: call    sub_18000CA40
 * 00000001800A8DCA: cmp     cs:dword_1801CA2F8, r14d
 * 00000001800A8DD1: jnz     loc_1800A8E95
 * 00000001800A8DD7: lea     rax, unk_180180E90
 * 00000001800A8DDE: mov     qword ptr [rbp+9E40h+var_9BE0], rax
 * 00000001800A8DE5: lea     rax, unk_180187274
 * 00000001800A8DEC: mov     qword ptr [rbp+9E40h+var_9BE0+8], rax
 * 00000001800A8DF3: movups  xmm7, [rbp+9E40h+var_9BE0]
 * 00000001800A8DFA: mov     dword ptr [rbp+9E40h+var_8720], 5
 * 00000001800A8E04: mov     dword ptr [rbp+9E40h+var_8720+4], esi
 * 00000001800A8E0A: movups  xmm6, [rbp+9E40h+var_8720]
 * 00000001800A8E11: call    sub_1800A5ED4
 * 00000001800A8E16: mov     r8, rax
 * 00000001800A8E19: mov     r9d, r12d
 * 00000001800A8E1C: mov     edx, 0A2h
 * 00000001800A8E21: lea     rcx, [rbp+9E40h+var_3110]
 * 00000001800A8E28: call    sub_1800737C8
 * 00000001800A8E2D: nop
 * 00000001800A8E2E: mov     r8, rax
 * 00000001800A8E31: mov     rdx, r13
 * 00000001800A8E34: lea     rcx, [rbp+9E40h+var_3170]
 * 00000001800A8E3B: call    sub_18001B678
 * 00000001800A8E40: nop
 * 00000001800A8E41: lea     r8, aPixel; "/Pixel"
 * 00000001800A8E48: mov     rdx, rax
 * 00000001800A8E4B: lea     rcx, [rbp+9E40h+var_63D0]
 * 00000001800A8E52: call    sub_18001B5A8
 * 00000001800A8E57: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8E5C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8E61: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8E66: mov     rcx, rax
 * 00000001800A8E69: call    sub_18007386C
 * 00000001800A8E6E: nop
 * 00000001800A8E6F: lea     rcx, [rbp+9E40h+var_3170]
 * 00000001800A8E76: call    sub_180011020
 * 00000001800A8E7B: nop
 * 00000001800A8E7C: lea     rcx, [rbp+9E40h+var_3110]
 * 00000001800A8E83: call    sub_180011020
 * 00000001800A8E88: nop
 * 00000001800A8E89: lea     rcx, dword_1801CA2F8
 * 00000001800A8E90: call    _Init_thread_footer
 * 00000001800A8E95: mov     rax, [rdi+rbx*8]
 * 00000001800A8E99: mov     eax, [r15+rax]
 * 00000001800A8E9D: cmp     cs:dword_1801CA2FC, eax
 * 00000001800A8EA3: jle     loc_1800A8F80
 * 00000001800A8EA9: lea     rcx, dword_1801CA2FC
 * 00000001800A8EB0: call    sub_18000CA40
 * 00000001800A8EB5: cmp     cs:dword_1801CA2FC, r14d
 * 00000001800A8EBC: jnz     loc_1800A8F80
 * 00000001800A8EC2: lea     rax, unk_180169670
 * 00000001800A8EC9: mov     qword ptr [rbp+9E40h+var_9BD0], rax
 * 00000001800A8ED0: lea     rax, unk_18016FBFC
 * 00000001800A8ED7: mov     qword ptr [rbp+9E40h+var_9BD0+8], rax
 * 00000001800A8EDE: movups  xmm7, [rbp+9E40h+var_9BD0]
 * 00000001800A8EE5: mov     dword ptr [rbp+9E40h+var_8700], 5
 * 00000001800A8EEF: mov     dword ptr [rbp+9E40h+var_8700+4], esi
 * 00000001800A8EF5: movups  xmm6, [rbp+9E40h+var_8700]
 * 00000001800A8EFC: call    sub_1800A5ED4
 * 00000001800A8F01: mov     r8, rax
 * 00000001800A8F04: mov     r9d, r12d
 * 00000001800A8F07: mov     edx, 0A8h
 * 00000001800A8F0C: lea     rcx, [rbp+9E40h+var_2FF0]
 * 00000001800A8F13: call    sub_1800737C8
 * 00000001800A8F18: nop
 * 00000001800A8F19: mov     r8, rax
 * 00000001800A8F1C: mov     rdx, r13
 * 00000001800A8F1F: lea     rcx, [rbp+9E40h+var_3050]
 * 00000001800A8F26: call    sub_18001B678
 * 00000001800A8F2B: nop
 * 00000001800A8F2C: lea     r8, aPixel; "/Pixel"
 * 00000001800A8F33: mov     rdx, rax
 * 00000001800A8F36: lea     rcx, [rbp+9E40h+var_63B0]
 * 00000001800A8F3D: call    sub_18001B5A8
 * 00000001800A8F42: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8F47: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8F4C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8F51: mov     rcx, rax
 * 00000001800A8F54: call    sub_18007386C
 * 00000001800A8F59: nop
 * 00000001800A8F5A: lea     rcx, [rbp+9E40h+var_3050]
 * 00000001800A8F61: call    sub_180011020
 * 00000001800A8F66: nop
 * 00000001800A8F67: lea     rcx, [rbp+9E40h+var_2FF0]
 * 00000001800A8F6E: call    sub_180011020
 * 00000001800A8F73: nop
 * 00000001800A8F74: lea     rcx, dword_1801CA2FC
 * 00000001800A8F7B: call    _Init_thread_footer
 * 00000001800A8F80: mov     rax, [rdi+rbx*8]
 * 00000001800A8F84: mov     eax, [r15+rax]
 * 00000001800A8F88: cmp     cs:dword_1801CA300, eax
 * 00000001800A8F8E: jle     loc_1800A906B
 * 00000001800A8F94: lea     rcx, dword_1801CA300
 * 00000001800A8F9B: call    sub_18000CA40
 * 00000001800A8FA0: cmp     cs:dword_1801CA300, r14d
 * 00000001800A8FA7: jnz     loc_1800A906B
 * 00000001800A8FAD: lea     rax, unk_180169670
 * 00000001800A8FB4: mov     qword ptr [rbp+9E40h+var_9BC0], rax
 * 00000001800A8FBB: lea     rax, unk_18016FBFC
 * 00000001800A8FC2: mov     qword ptr [rbp+9E40h+var_9BC0+8], rax
 * 00000001800A8FC9: movups  xmm7, [rbp+9E40h+var_9BC0]
 * 00000001800A8FD0: mov     dword ptr [rbp+9E40h+var_86E0], 5
 * 00000001800A8FDA: mov     dword ptr [rbp+9E40h+var_86E0+4], esi
 * 00000001800A8FE0: movups  xmm6, [rbp+9E40h+var_86E0]
 * 00000001800A8FE7: call    sub_1800A5ED4
 * 00000001800A8FEC: mov     r8, rax
 * 00000001800A8FEF: mov     r9d, r12d
 * 00000001800A8FF2: mov     edx, 0AAh
 * 00000001800A8FF7: lea     rcx, [rbp+9E40h+var_2ED0]
 * 00000001800A8FFE: call    sub_1800737C8
 * 00000001800A9003: nop
 * 00000001800A9004: mov     r8, rax
 * 00000001800A9007: mov     rdx, r13
 * 00000001800A900A: lea     rcx, [rbp+9E40h+var_2F30]
 * 00000001800A9011: call    sub_18001B678
 * 00000001800A9016: nop
 * 00000001800A9017: lea     r8, aPixel; "/Pixel"
 * 00000001800A901E: mov     rdx, rax
 * 00000001800A9021: lea     rcx, [rbp+9E40h+var_6390]
 * 00000001800A9028: call    sub_18001B5A8
 * 00000001800A902D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9032: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9037: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A903C: mov     rcx, rax
 * 00000001800A903F: call    sub_18007386C
 * 00000001800A9044: nop
 * 00000001800A9045: lea     rcx, [rbp+9E40h+var_2F30]
 * 00000001800A904C: call    sub_180011020
 * 00000001800A9051: nop
 * 00000001800A9052: lea     rcx, [rbp+9E40h+var_2ED0]
 * 00000001800A9059: call    sub_180011020
 * 00000001800A905E: nop
 * 00000001800A905F: lea     rcx, dword_1801CA300
 * 00000001800A9066: call    _Init_thread_footer
 * 00000001800A906B: mov     rax, [rdi+rbx*8]
 * 00000001800A906F: mov     eax, [r15+rax]
 * 00000001800A9073: cmp     cs:dword_1801CA304, eax
 * 00000001800A9079: jle     loc_1800A9156
 * 00000001800A907F: lea     rcx, dword_1801CA304
 * 00000001800A9086: call    sub_18000CA40
 * 00000001800A908B: cmp     cs:dword_1801CA304, r14d
 * 00000001800A9092: jnz     loc_1800A9156
 * 00000001800A9098: lea     rax, unk_1801630B0
 * 00000001800A909F: mov     qword ptr [rbp+9E40h+var_9BB0], rax
 * 00000001800A90A6: lea     rax, unk_180169668
 * 00000001800A90AD: mov     qword ptr [rbp+9E40h+var_9BB0+8], rax
 * 00000001800A90B4: movups  xmm7, [rbp+9E40h+var_9BB0]
 * 00000001800A90BB: mov     dword ptr [rbp+9E40h+var_86C0], 5
 * 00000001800A90C5: mov     dword ptr [rbp+9E40h+var_86C0+4], esi
 * 00000001800A90CB: movups  xmm6, [rbp+9E40h+var_86C0]
 * 00000001800A90D2: call    sub_1800A5ED4
 * 00000001800A90D7: mov     r8, rax
 * 00000001800A90DA: mov     r9d, r12d
 * 00000001800A90DD: mov     edx, 0B0h
 * 00000001800A90E2: lea     rcx, [rbp+9E40h+var_2DB0]
 * 00000001800A90E9: call    sub_1800737C8
 * 00000001800A90EE: nop
 * 00000001800A90EF: mov     r8, rax
 * 00000001800A90F2: mov     rdx, r13
 * 00000001800A90F5: lea     rcx, [rbp+9E40h+var_2E10]
 * 00000001800A90FC: call    sub_18001B678
 * 00000001800A9101: nop
 * 00000001800A9102: lea     r8, aPixel; "/Pixel"
 * 00000001800A9109: mov     rdx, rax
 * 00000001800A910C: lea     rcx, [rbp+9E40h+var_6370]
 * 00000001800A9113: call    sub_18001B5A8
 * 00000001800A9118: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A911D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9122: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9127: mov     rcx, rax
 * 00000001800A912A: call    sub_18007386C
 * 00000001800A912F: nop
 * 00000001800A9130: lea     rcx, [rbp+9E40h+var_2E10]
 * 00000001800A9137: call    sub_180011020
 * 00000001800A913C: nop
 * 00000001800A913D: lea     rcx, [rbp+9E40h+var_2DB0]
 * 00000001800A9144: call    sub_180011020
 * 00000001800A9149: nop
 * 00000001800A914A: lea     rcx, dword_1801CA304
 * 00000001800A9151: call    _Init_thread_footer
 * 00000001800A9156: mov     rax, [rdi+rbx*8]
 * 00000001800A915A: mov     eax, [r15+rax]
 * 00000001800A915E: cmp     cs:dword_1801CA308, eax
 * 00000001800A9164: jle     loc_1800A9241
 * 00000001800A916A: lea     rcx, dword_1801CA308
 * 00000001800A9171: call    sub_18000CA40
 * 00000001800A9176: cmp     cs:dword_1801CA308, r14d
 * 00000001800A917D: jnz     loc_1800A9241
 * 00000001800A9183: lea     rax, unk_1801630B0
 * 00000001800A918A: mov     qword ptr [rbp+9E40h+var_9BA0], rax
 * 00000001800A9191: lea     rax, unk_180169668
 * 00000001800A9198: mov     qword ptr [rbp+9E40h+var_9BA0+8], rax
 * 00000001800A919F: movups  xmm7, [rbp+9E40h+var_9BA0]
 * 00000001800A91A6: mov     dword ptr [rbp+9E40h+var_86A0], 5
 * 00000001800A91B0: mov     dword ptr [rbp+9E40h+var_86A0+4], esi
 * 00000001800A91B6: movups  xmm6, [rbp+9E40h+var_86A0]
 * 00000001800A91BD: call    sub_1800A5ED4
 * 00000001800A91C2: mov     r8, rax
 * 00000001800A91C5: mov     r9d, r12d
 * 00000001800A91C8: mov     edx, 0B2h
 * 00000001800A91CD: lea     rcx, [rbp+9E40h+var_2C90]
 * 00000001800A91D4: call    sub_1800737C8
 * 00000001800A91D9: nop
 * 00000001800A91DA: mov     r8, rax
 * 00000001800A91DD: mov     rdx, r13
 * 00000001800A91E0: lea     rcx, [rbp+9E40h+var_2CF0]
 * 00000001800A91E7: call    sub_18001B678
 * 00000001800A91EC: nop
 * 00000001800A91ED: lea     r8, aPixel; "/Pixel"
 * 00000001800A91F4: mov     rdx, rax
 * 00000001800A91F7: lea     rcx, [rbp+9E40h+var_6350]
 * 00000001800A91FE: call    sub_18001B5A8
 * 00000001800A9203: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9208: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A920D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9212: mov     rcx, rax
 * 00000001800A9215: call    sub_18007386C
 * 00000001800A921A: nop
 * 00000001800A921B: lea     rcx, [rbp+9E40h+var_2CF0]
 * 00000001800A9222: call    sub_180011020
 * 00000001800A9227: nop
 * 00000001800A9228: lea     rcx, [rbp+9E40h+var_2C90]
 * 00000001800A922F: call    sub_180011020
 * 00000001800A9234: nop
 * 00000001800A9235: lea     rcx, dword_1801CA308
 * 00000001800A923C: call    _Init_thread_footer
 * 00000001800A9241: mov     rax, [rdi+rbx*8]
 * 00000001800A9245: mov     eax, [r15+rax]
 * 00000001800A9249: cmp     cs:dword_1801CA30C, eax
 * 00000001800A924F: jle     loc_1800A932C
 * 00000001800A9255: lea     rcx, dword_1801CA30C
 * 00000001800A925C: call    sub_18000CA40
 * 00000001800A9261: cmp     cs:dword_1801CA30C, r14d
 * 00000001800A9268: jnz     loc_1800A932C
 * 00000001800A926E: lea     rax, unk_180170CD0
 * 00000001800A9275: mov     qword ptr [rbp+9E40h+var_9B90], rax
 * 00000001800A927C: lea     rax, unk_18017745C
 * 00000001800A9283: mov     qword ptr [rbp+9E40h+var_9B90+8], rax
 * 00000001800A928A: movups  xmm7, [rbp+9E40h+var_9B90]
 * 00000001800A9291: mov     dword ptr [rbp+9E40h+var_8680], 5
 * 00000001800A929B: mov     dword ptr [rbp+9E40h+var_8680+4], esi
 * 00000001800A92A1: movups  xmm6, [rbp+9E40h+var_8680]
 * 00000001800A92A8: call    sub_1800A5ED4
 * 00000001800A92AD: mov     r8, rax
 * 00000001800A92B0: mov     r9d, r12d
 * 00000001800A92B3: mov     edx, 0B8h
 * 00000001800A92B8: lea     rcx, [rbp+9E40h+var_2BD0]
 * 00000001800A92BF: call    sub_1800737C8
 * 00000001800A92C4: nop
 * 00000001800A92C5: mov     r8, rax
 * 00000001800A92C8: mov     rdx, r13
 * 00000001800A92CB: lea     rcx, [rbp+9E40h+var_2C30]
 * 00000001800A92D2: call    sub_18001B678
 * 00000001800A92D7: nop
 * 00000001800A92D8: lea     r8, aPixel; "/Pixel"
 * 00000001800A92DF: mov     rdx, rax
 * 00000001800A92E2: lea     rcx, [rbp+9E40h+var_6330]
 * 00000001800A92E9: call    sub_18001B5A8
 * 00000001800A92EE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A92F3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A92F8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A92FD: mov     rcx, rax
 * 00000001800A9300: call    sub_18007386C
 * 00000001800A9305: nop
 * 00000001800A9306: lea     rcx, [rbp+9E40h+var_2C30]
 * 00000001800A930D: call    sub_180011020
 * 00000001800A9312: nop
 * 00000001800A9313: lea     rcx, [rbp+9E40h+var_2BD0]
 * 00000001800A931A: call    sub_180011020
 * 00000001800A931F: nop
 * 00000001800A9320: lea     rcx, dword_1801CA30C
 * 00000001800A9327: call    _Init_thread_footer
 * 00000001800A932C: mov     rax, [rdi+rbx*8]
 * 00000001800A9330: mov     eax, [r15+rax]
 * 00000001800A9334: cmp     cs:dword_1801CA310, eax
 * 00000001800A933A: jle     loc_1800A9417
 * 00000001800A9340: lea     rcx, dword_1801CA310
 * 00000001800A9347: call    sub_18000CA40
 * 00000001800A934C: cmp     cs:dword_1801CA310, r14d
 * 00000001800A9353: jnz     loc_1800A9417
 * 00000001800A9359: lea     rax, unk_180170CD0
 * 00000001800A9360: mov     qword ptr [rbp+9E40h+var_9B80], rax
 * 00000001800A9367: lea     rax, unk_18017745C
 * 00000001800A936E: mov     qword ptr [rbp+9E40h+var_9B80+8], rax
 * 00000001800A9375: movups  xmm7, [rbp+9E40h+var_9B80]
 * 00000001800A937C: mov     dword ptr [rbp+9E40h+var_8660], 5
 * 00000001800A9386: mov     dword ptr [rbp+9E40h+var_8660+4], esi
 * 00000001800A938C: movups  xmm6, [rbp+9E40h+var_8660]
 * 00000001800A9393: call    sub_1800A5ED4
 * 00000001800A9398: mov     r8, rax
 * 00000001800A939B: mov     r9d, r12d
 * 00000001800A939E: mov     edx, 0BAh
 * 00000001800A93A3: lea     rcx, [rbp+9E40h+var_2AB0]
 * 00000001800A93AA: call    sub_1800737C8
 * 00000001800A93AF: nop
 * 00000001800A93B0: mov     r8, rax
 * 00000001800A93B3: mov     rdx, r13
 * 00000001800A93B6: lea     rcx, [rbp+9E40h+var_2B10]
 * 00000001800A93BD: call    sub_18001B678
 * 00000001800A93C2: nop
 * 00000001800A93C3: lea     r8, aPixel; "/Pixel"
 * 00000001800A93CA: mov     rdx, rax
 * 00000001800A93CD: lea     rcx, [rbp+9E40h+var_6310]
 * 00000001800A93D4: call    sub_18001B5A8
 * 00000001800A93D9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A93DE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A93E3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A93E8: mov     rcx, rax
 * 00000001800A93EB: call    sub_18007386C
 * 00000001800A93F0: nop
 * 00000001800A93F1: lea     rcx, [rbp+9E40h+var_2B10]
 * 00000001800A93F8: call    sub_180011020
 * 00000001800A93FD: nop
 * 00000001800A93FE: lea     rcx, [rbp+9E40h+var_2AB0]
 * 00000001800A9405: call    sub_180011020
 * 00000001800A940A: nop
 * 00000001800A940B: lea     rcx, dword_1801CA310
 * 00000001800A9412: call    _Init_thread_footer
 * 00000001800A9417: mov     rax, [rdi+rbx*8]
 * 00000001800A941B: mov     eax, [r15+rax]
 * 00000001800A941F: cmp     cs:dword_1801CA314, eax
 * 00000001800A9425: jle     loc_1800A9502
 * 00000001800A942B: lea     rcx, dword_1801CA314
 * 00000001800A9432: call    sub_18000CA40
 * 00000001800A9437: cmp     cs:dword_1801CA314, r14d
 * 00000001800A943E: jnz     loc_1800A9502
 * 00000001800A9444: lea     rax, unk_180180E90
 * 00000001800A944B: mov     qword ptr [rbp+9E40h+var_9B70], rax
 * 00000001800A9452: lea     rax, unk_180187274
 * 00000001800A9459: mov     qword ptr [rbp+9E40h+var_9B70+8], rax
 * 00000001800A9460: movups  xmm7, [rbp+9E40h+var_9B70]
 * 00000001800A9467: mov     dword ptr [rbp+9E40h+var_8640], 5
 * 00000001800A9471: mov     dword ptr [rbp+9E40h+var_8640+4], esi
 * 00000001800A9477: movups  xmm6, [rbp+9E40h+var_8640]
 * 00000001800A947E: call    sub_1800A5ED4
 * 00000001800A9483: mov     r8, rax
 * 00000001800A9486: mov     r9d, r12d
 * 00000001800A9489: mov     edx, 0C0h
 * 00000001800A948E: lea     rcx, [rbp+9E40h+var_2990]
 * 00000001800A9495: call    sub_1800737C8
 * 00000001800A949A: nop
 * 00000001800A949B: mov     r8, rax
 * 00000001800A949E: mov     rdx, r13
 * 00000001800A94A1: lea     rcx, [rbp+9E40h+var_29F0]
 * 00000001800A94A8: call    sub_18001B678
 * 00000001800A94AD: nop
 * 00000001800A94AE: lea     r8, aPixel; "/Pixel"
 * 00000001800A94B5: mov     rdx, rax
 * 00000001800A94B8: lea     rcx, [rbp+9E40h+var_62F0]
 * 00000001800A94BF: call    sub_18001B5A8
 * 00000001800A94C4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A94C9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A94CE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A94D3: mov     rcx, rax
 * 00000001800A94D6: call    sub_18007386C
 * 00000001800A94DB: nop
 * 00000001800A94DC: lea     rcx, [rbp+9E40h+var_29F0]
 * 00000001800A94E3: call    sub_180011020
 * 00000001800A94E8: nop
 * 00000001800A94E9: lea     rcx, [rbp+9E40h+var_2990]
 * 00000001800A94F0: call    sub_180011020
 * 00000001800A94F5: nop
 * 00000001800A94F6: lea     rcx, dword_1801CA314
 * 00000001800A94FD: call    _Init_thread_footer
 * 00000001800A9502: mov     rax, [rdi+rbx*8]
 * 00000001800A9506: mov     eax, [r15+rax]
 * 00000001800A950A: cmp     cs:dword_1801CA318, eax
 * 00000001800A9510: jle     loc_1800A95ED
 * 00000001800A9516: lea     rcx, dword_1801CA318
 * 00000001800A951D: call    sub_18000CA40
 * 00000001800A9522: cmp     cs:dword_1801CA318, r14d
 * 00000001800A9529: jnz     loc_1800A95ED
 * 00000001800A952F: lea     rax, unk_180180E90
 * 00000001800A9536: mov     qword ptr [rbp+9E40h+var_9B60], rax
 * 00000001800A953D: lea     rax, unk_180187274
 * 00000001800A9544: mov     qword ptr [rbp+9E40h+var_9B60+8], rax
 * 00000001800A954B: movups  xmm7, [rbp+9E40h+var_9B60]
 * 00000001800A9552: mov     dword ptr [rbp+9E40h+var_8620], 5
 * 00000001800A955C: mov     dword ptr [rbp+9E40h+var_8620+4], esi
 * 00000001800A9562: movups  xmm6, [rbp+9E40h+var_8620]
 * 00000001800A9569: call    sub_1800A5ED4
 * 00000001800A956E: mov     r8, rax
 * 00000001800A9571: mov     r9d, r12d
 * 00000001800A9574: mov     edx, 0C2h
 * 00000001800A9579: lea     rcx, [rbp+9E40h+var_2870]
 * 00000001800A9580: call    sub_1800737C8
 * 00000001800A9585: nop
 * 00000001800A9586: mov     r8, rax
 * 00000001800A9589: mov     rdx, r13
 * 00000001800A958C: lea     rcx, [rbp+9E40h+var_28D0]
 * 00000001800A9593: call    sub_18001B678
 * 00000001800A9598: nop
 * 00000001800A9599: lea     r8, aPixel; "/Pixel"
 * 00000001800A95A0: mov     rdx, rax
 * 00000001800A95A3: lea     rcx, [rbp+9E40h+var_62D0]
 * 00000001800A95AA: call    sub_18001B5A8
 * 00000001800A95AF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A95B4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A95B9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A95BE: mov     rcx, rax
 * 00000001800A95C1: call    sub_18007386C
 * 00000001800A95C6: nop
 * 00000001800A95C7: lea     rcx, [rbp+9E40h+var_28D0]
 * 00000001800A95CE: call    sub_180011020
 * 00000001800A95D3: nop
 * 00000001800A95D4: lea     rcx, [rbp+9E40h+var_2870]
 * 00000001800A95DB: call    sub_180011020
 * 00000001800A95E0: nop
 * 00000001800A95E1: lea     rcx, dword_1801CA318
 * 00000001800A95E8: call    _Init_thread_footer
 * 00000001800A95ED: mov     rax, [rdi+rbx*8]
 * 00000001800A95F1: mov     eax, [r15+rax]
 * 00000001800A95F5: cmp     cs:dword_1801CA31C, eax
 * 00000001800A95FB: jle     loc_1800A96D8
 * 00000001800A9601: lea     rcx, dword_1801CA31C
 * 00000001800A9608: call    sub_18000CA40
 * 00000001800A960D: cmp     cs:dword_1801CA31C, r14d
 * 00000001800A9614: jnz     loc_1800A96D8
 * 00000001800A961A: lea     rax, unk_180169670
 * 00000001800A9621: mov     qword ptr [rbp+9E40h+var_9B50], rax
 * 00000001800A9628: lea     rax, unk_18016FBFC
 * 00000001800A962F: mov     qword ptr [rbp+9E40h+var_9B50+8], rax
 * 00000001800A9636: movups  xmm7, [rbp+9E40h+var_9B50]
 * 00000001800A963D: mov     dword ptr [rbp+9E40h+var_8600], 5
 * 00000001800A9647: mov     dword ptr [rbp+9E40h+var_8600+4], esi
 * 00000001800A964D: movups  xmm6, [rbp+9E40h+var_8600]
 * 00000001800A9654: call    sub_1800A5ED4
 * 00000001800A9659: mov     r8, rax
 * 00000001800A965C: mov     r9d, r12d
 * 00000001800A965F: mov     edx, 0C8h
 * 00000001800A9664: lea     rcx, [rbp+9E40h+var_2750]
 * 00000001800A966B: call    sub_1800737C8
 * 00000001800A9670: nop
 * 00000001800A9671: mov     r8, rax
 * 00000001800A9674: mov     rdx, r13
 * 00000001800A9677: lea     rcx, [rbp+9E40h+var_27B0]
 * 00000001800A967E: call    sub_18001B678
 * 00000001800A9683: nop
 * 00000001800A9684: lea     r8, aPixel; "/Pixel"
 * 00000001800A968B: mov     rdx, rax
 * 00000001800A968E: lea     rcx, [rbp+9E40h+var_62B0]
 * 00000001800A9695: call    sub_18001B5A8
 * 00000001800A969A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A969F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A96A4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A96A9: mov     rcx, rax
 * 00000001800A96AC: call    sub_18007386C
 * 00000001800A96B1: nop
 * 00000001800A96B2: lea     rcx, [rbp+9E40h+var_27B0]
 * 00000001800A96B9: call    sub_180011020
 * 00000001800A96BE: nop
 * 00000001800A96BF: lea     rcx, [rbp+9E40h+var_2750]
 * 00000001800A96C6: call    sub_180011020
 * 00000001800A96CB: nop
 * 00000001800A96CC: lea     rcx, dword_1801CA31C
 * 00000001800A96D3: call    _Init_thread_footer
 * 00000001800A96D8: mov     rax, [rdi+rbx*8]
 * 00000001800A96DC: mov     eax, [r15+rax]
 * 00000001800A96E0: cmp     cs:dword_1801CA320, eax
 * 00000001800A96E6: jle     loc_1800A97C3
 * 00000001800A96EC: lea     rcx, dword_1801CA320
 * 00000001800A96F3: call    sub_18000CA40
 * 00000001800A96F8: cmp     cs:dword_1801CA320, r14d
 * 00000001800A96FF: jnz     loc_1800A97C3
 * 00000001800A9705: lea     rax, unk_180169670
 * 00000001800A970C: mov     qword ptr [rbp+9E40h+var_9B40], rax
 * 00000001800A9713: lea     rax, unk_18016FBFC
 * 00000001800A971A: mov     qword ptr [rbp+9E40h+var_9B40+8], rax
 * 00000001800A9721: movups  xmm7, [rbp+9E40h+var_9B40]
 * 00000001800A9728: mov     dword ptr [rbp+9E40h+var_85E0], 5
 * 00000001800A9732: mov     dword ptr [rbp+9E40h+var_85E0+4], esi
 * 00000001800A9738: movups  xmm6, [rbp+9E40h+var_85E0]
 * 00000001800A973F: call    sub_1800A5ED4
 * 00000001800A9744: mov     r8, rax
 * 00000001800A9747: mov     r9d, r12d
 * 00000001800A974A: mov     edx, 0CAh
 * 00000001800A974F: lea     rcx, [rbp+9E40h+var_2630]
 * 00000001800A9756: call    sub_1800737C8
 * 00000001800A975B: nop
 * 00000001800A975C: mov     r8, rax
 * 00000001800A975F: mov     rdx, r13
 * 00000001800A9762: lea     rcx, [rbp+9E40h+var_2690]
 * 00000001800A9769: call    sub_18001B678
 * 00000001800A976E: nop
 * 00000001800A976F: lea     r8, aPixel; "/Pixel"
 * 00000001800A9776: mov     rdx, rax
 * 00000001800A9779: lea     rcx, [rbp+9E40h+var_6290]
 * 00000001800A9780: call    sub_18001B5A8
 * 00000001800A9785: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A978A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A978F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9794: mov     rcx, rax
 * 00000001800A9797: call    sub_18007386C
 * 00000001800A979C: nop
 * 00000001800A979D: lea     rcx, [rbp+9E40h+var_2690]
 * 00000001800A97A4: call    sub_180011020
 * 00000001800A97A9: nop
 * 00000001800A97AA: lea     rcx, [rbp+9E40h+var_2630]
 * 00000001800A97B1: call    sub_180011020
 * 00000001800A97B6: nop
 * 00000001800A97B7: lea     rcx, dword_1801CA320
 * 00000001800A97BE: call    _Init_thread_footer
 * 00000001800A97C3: mov     rax, [rdi+rbx*8]
 * 00000001800A97C7: mov     eax, [r15+rax]
 * 00000001800A97CB: cmp     cs:dword_1801CA324, eax
 * 00000001800A97D1: jle     loc_1800A98AE
 * 00000001800A97D7: lea     rcx, dword_1801CA324
 * 00000001800A97DE: call    sub_18000CA40
 * 00000001800A97E3: cmp     cs:dword_1801CA324, r14d
 * 00000001800A97EA: jnz     loc_1800A98AE
 * 00000001800A97F0: lea     rax, unk_1801630B0
 * 00000001800A97F7: mov     qword ptr [rbp+9E40h+var_9B30], rax
 * 00000001800A97FE: lea     rax, unk_180169668
 * 00000001800A9805: mov     qword ptr [rbp+9E40h+var_9B30+8], rax
 * 00000001800A980C: movups  xmm7, [rbp+9E40h+var_9B30]
 * 00000001800A9813: mov     dword ptr [rbp+9E40h+var_85C0], 5
 * 00000001800A981D: mov     dword ptr [rbp+9E40h+var_85C0+4], esi
 * 00000001800A9823: movups  xmm6, [rbp+9E40h+var_85C0]
 * 00000001800A982A: call    sub_1800A5ED4
 * 00000001800A982F: mov     r8, rax
 * 00000001800A9832: mov     r9d, r12d
 * 00000001800A9835: mov     edx, 0D0h
 * 00000001800A983A: lea     rcx, [rbp+9E40h+var_2510]
 * 00000001800A9841: call    sub_1800737C8
 * 00000001800A9846: nop
 * 00000001800A9847: mov     r8, rax
 * 00000001800A984A: mov     rdx, r13
 * 00000001800A984D: lea     rcx, [rbp+9E40h+var_2570]
 * 00000001800A9854: call    sub_18001B678
 * 00000001800A9859: nop
 * 00000001800A985A: lea     r8, aPixel; "/Pixel"
 * 00000001800A9861: mov     rdx, rax
 * 00000001800A9864: lea     rcx, [rbp+9E40h+var_6270]
 * 00000001800A986B: call    sub_18001B5A8
 * 00000001800A9870: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9875: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A987A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A987F: mov     rcx, rax
 * 00000001800A9882: call    sub_18007386C
 * 00000001800A9887: nop
 * 00000001800A9888: lea     rcx, [rbp+9E40h+var_2570]
 * 00000001800A988F: call    sub_180011020
 * 00000001800A9894: nop
 * 00000001800A9895: lea     rcx, [rbp+9E40h+var_2510]
 * 00000001800A989C: call    sub_180011020
 * 00000001800A98A1: nop
 * 00000001800A98A2: lea     rcx, dword_1801CA324
 * 00000001800A98A9: call    _Init_thread_footer
 * 00000001800A98AE: mov     rax, [rdi+rbx*8]
 * 00000001800A98B2: mov     eax, [r15+rax]
 * 00000001800A98B6: cmp     cs:dword_1801CA328, eax
 * 00000001800A98BC: jle     loc_1800A9999
 * 00000001800A98C2: lea     rcx, dword_1801CA328
 * 00000001800A98C9: call    sub_18000CA40
 * 00000001800A98CE: cmp     cs:dword_1801CA328, r14d
 * 00000001800A98D5: jnz     loc_1800A9999
 * 00000001800A98DB: lea     rax, unk_1801630B0
 * 00000001800A98E2: mov     qword ptr [rbp+9E40h+var_9B20], rax
 * 00000001800A98E9: lea     rax, unk_180169668
 * 00000001800A98F0: mov     qword ptr [rbp+9E40h+var_9B20+8], rax
 * 00000001800A98F7: movups  xmm7, [rbp+9E40h+var_9B20]
 * 00000001800A98FE: mov     dword ptr [rbp+9E40h+var_85A0], 5
 * 00000001800A9908: mov     dword ptr [rbp+9E40h+var_85A0+4], esi
 * 00000001800A990E: movups  xmm6, [rbp+9E40h+var_85A0]
 * 00000001800A9915: call    sub_1800A5ED4
 * 00000001800A991A: mov     r8, rax
 * 00000001800A991D: mov     r9d, r12d
 * 00000001800A9920: mov     edx, 0D2h
 * 00000001800A9925: lea     rcx, [rbp+9E40h+var_23F0]
 * 00000001800A992C: call    sub_1800737C8
 * 00000001800A9931: nop
 * 00000001800A9932: mov     r8, rax
 * 00000001800A9935: mov     rdx, r13
 * 00000001800A9938: lea     rcx, [rbp+9E40h+var_2450]
 * 00000001800A993F: call    sub_18001B678
 * 00000001800A9944: nop
 * 00000001800A9945: lea     r8, aPixel; "/Pixel"
 * 00000001800A994C: mov     rdx, rax
 * 00000001800A994F: lea     rcx, [rbp+9E40h+var_6250]
 * 00000001800A9956: call    sub_18001B5A8
 * 00000001800A995B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9960: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9965: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A996A: mov     rcx, rax
 * 00000001800A996D: call    sub_18007386C
 * 00000001800A9972: nop
 * 00000001800A9973: lea     rcx, [rbp+9E40h+var_2450]
 * 00000001800A997A: call    sub_180011020
 * 00000001800A997F: nop
 * 00000001800A9980: lea     rcx, [rbp+9E40h+var_23F0]
 * 00000001800A9987: call    sub_180011020
 * 00000001800A998C: nop
 * 00000001800A998D: lea     rcx, dword_1801CA328
 * 00000001800A9994: call    _Init_thread_footer
 * 00000001800A9999: mov     rax, [rdi+rbx*8]
 * 00000001800A999D: mov     eax, [r15+rax]
 * 00000001800A99A1: cmp     cs:dword_1801CA32C, eax
 * 00000001800A99A7: jle     loc_1800A9A84
 * 00000001800A99AD: lea     rcx, dword_1801CA32C
 * 00000001800A99B4: call    sub_18000CA40
 * 00000001800A99B9: cmp     cs:dword_1801CA32C, r14d
 * 00000001800A99C0: jnz     loc_1800A9A84
 * 00000001800A99C6: lea     rax, unk_180170CD0
 * 00000001800A99CD: mov     qword ptr [rbp+9E40h+var_9B10], rax
 * 00000001800A99D4: lea     rax, unk_18017745C
 * 00000001800A99DB: mov     qword ptr [rbp+9E40h+var_9B10+8], rax
 * 00000001800A99E2: movups  xmm7, [rbp+9E40h+var_9B10]
 * 00000001800A99E9: mov     dword ptr [rbp+9E40h+var_8580], 5
 * 00000001800A99F3: mov     dword ptr [rbp+9E40h+var_8580+4], esi
 * 00000001800A99F9: movups  xmm6, [rbp+9E40h+var_8580]
 * 00000001800A9A00: call    sub_1800A5ED4
 * 00000001800A9A05: mov     r8, rax
 * 00000001800A9A08: mov     r9d, r12d
 * 00000001800A9A0B: mov     edx, 0D8h
 * 00000001800A9A10: lea     rcx, [rbp+9E40h+var_22D0]
 * 00000001800A9A17: call    sub_1800737C8
 * 00000001800A9A1C: nop
 * 00000001800A9A1D: mov     r8, rax
 * 00000001800A9A20: mov     rdx, r13
 * 00000001800A9A23: lea     rcx, [rbp+9E40h+var_2330]
 * 00000001800A9A2A: call    sub_18001B678
 * 00000001800A9A2F: nop
 * 00000001800A9A30: lea     r8, aPixel; "/Pixel"
 * 00000001800A9A37: mov     rdx, rax
 * 00000001800A9A3A: lea     rcx, [rbp+9E40h+var_6230]
 * 00000001800A9A41: call    sub_18001B5A8
 * 00000001800A9A46: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9A4B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9A50: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9A55: mov     rcx, rax
 * 00000001800A9A58: call    sub_18007386C
 * 00000001800A9A5D: nop
 * 00000001800A9A5E: lea     rcx, [rbp+9E40h+var_2330]
 * 00000001800A9A65: call    sub_180011020
 * 00000001800A9A6A: nop
 * 00000001800A9A6B: lea     rcx, [rbp+9E40h+var_22D0]
 * 00000001800A9A72: call    sub_180011020
 * 00000001800A9A77: nop
 * 00000001800A9A78: lea     rcx, dword_1801CA32C
 * 00000001800A9A7F: call    _Init_thread_footer
 * 00000001800A9A84: mov     rax, [rdi+rbx*8]
 * 00000001800A9A88: mov     eax, [r15+rax]
 * 00000001800A9A8C: cmp     cs:dword_1801CA330, eax
 * 00000001800A9A92: jle     loc_1800A9B6F
 * 00000001800A9A98: lea     rcx, dword_1801CA330
 * 00000001800A9A9F: call    sub_18000CA40
 * 00000001800A9AA4: cmp     cs:dword_1801CA330, r14d
 * 00000001800A9AAB: jnz     loc_1800A9B6F
 * 00000001800A9AB1: lea     rax, unk_180170CD0
 * 00000001800A9AB8: mov     qword ptr [rbp+9E40h+var_9B00], rax
 * 00000001800A9ABF: lea     rax, unk_18017745C
 * 00000001800A9AC6: mov     qword ptr [rbp+9E40h+var_9B00+8], rax
 * 00000001800A9ACD: movups  xmm7, [rbp+9E40h+var_9B00]
 * 00000001800A9AD4: mov     dword ptr [rbp+9E40h+var_8560], 5
 * 00000001800A9ADE: mov     dword ptr [rbp+9E40h+var_8560+4], esi
 * 00000001800A9AE4: movups  xmm6, [rbp+9E40h+var_8560]
 * 00000001800A9AEB: call    sub_1800A5ED4
 * 00000001800A9AF0: mov     r8, rax
 * 00000001800A9AF3: mov     r9d, r12d
 * 00000001800A9AF6: mov     edx, 0DAh
 * 00000001800A9AFB: lea     rcx, [rbp+9E40h+var_21B0]
 * 00000001800A9B02: call    sub_1800737C8
 * 00000001800A9B07: nop
 * 00000001800A9B08: mov     r8, rax
 * 00000001800A9B0B: mov     rdx, r13
 * 00000001800A9B0E: lea     rcx, [rbp+9E40h+var_2210]
 * 00000001800A9B15: call    sub_18001B678
 * 00000001800A9B1A: nop
 * 00000001800A9B1B: lea     r8, aPixel; "/Pixel"
 * 00000001800A9B22: mov     rdx, rax
 * 00000001800A9B25: lea     rcx, [rbp+9E40h+var_6210]
 * 00000001800A9B2C: call    sub_18001B5A8
 * 00000001800A9B31: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9B36: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9B3B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9B40: mov     rcx, rax
 * 00000001800A9B43: call    sub_18007386C
 * 00000001800A9B48: nop
 * 00000001800A9B49: lea     rcx, [rbp+9E40h+var_2210]
 * 00000001800A9B50: call    sub_180011020
 * 00000001800A9B55: nop
 * 00000001800A9B56: lea     rcx, [rbp+9E40h+var_21B0]
 * 00000001800A9B5D: call    sub_180011020
 * 00000001800A9B62: nop
 * 00000001800A9B63: lea     rcx, dword_1801CA330
 * 00000001800A9B6A: call    _Init_thread_footer
 * 00000001800A9B6F: mov     rax, [rdi+rbx*8]
 * 00000001800A9B73: mov     eax, [r15+rax]
 * 00000001800A9B77: cmp     cs:dword_1801CA334, eax
 * 00000001800A9B7D: jle     loc_1800A9C5A
 * 00000001800A9B83: lea     rcx, dword_1801CA334
 * 00000001800A9B8A: call    sub_18000CA40
 * 00000001800A9B8F: cmp     cs:dword_1801CA334, r14d
 * 00000001800A9B96: jnz     loc_1800A9C5A
 * 00000001800A9B9C: lea     rax, unk_180180E90
 * 00000001800A9BA3: mov     qword ptr [rbp+9E40h+var_9AF0], rax
 * 00000001800A9BAA: lea     rax, unk_180187274
 * 00000001800A9BB1: mov     qword ptr [rbp+9E40h+var_9AF0+8], rax
 * 00000001800A9BB8: movups  xmm7, [rbp+9E40h+var_9AF0]
 * 00000001800A9BBF: mov     dword ptr [rbp+9E40h+var_8540], 5
 * 00000001800A9BC9: mov     dword ptr [rbp+9E40h+var_8540+4], esi
 * 00000001800A9BCF: movups  xmm6, [rbp+9E40h+var_8540]
 * 00000001800A9BD6: call    sub_1800A5ED4
 * 00000001800A9BDB: mov     r8, rax
 * 00000001800A9BDE: mov     r9d, r12d
 * 00000001800A9BE1: mov     edx, 0E0h
 * 00000001800A9BE6: lea     rcx, [rbp+9E40h+var_2090]
 * 00000001800A9BED: call    sub_1800737C8
 * 00000001800A9BF2: nop
 * 00000001800A9BF3: mov     r8, rax
 * 00000001800A9BF6: mov     rdx, r13
 * 00000001800A9BF9: lea     rcx, [rbp+9E40h+var_20F0]
 * 00000001800A9C00: call    sub_18001B678
 * 00000001800A9C05: nop
 * 00000001800A9C06: lea     r8, aPixel; "/Pixel"
 * 00000001800A9C0D: mov     rdx, rax
 * 00000001800A9C10: lea     rcx, [rbp+9E40h+var_61F0]
 * 00000001800A9C17: call    sub_18001B5A8
 * 00000001800A9C1C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9C21: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9C26: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9C2B: mov     rcx, rax
 * 00000001800A9C2E: call    sub_18007386C
 * 00000001800A9C33: nop
 * 00000001800A9C34: lea     rcx, [rbp+9E40h+var_20F0]
 * 00000001800A9C3B: call    sub_180011020
 * 00000001800A9C40: nop
 * 00000001800A9C41: lea     rcx, [rbp+9E40h+var_2090]
 * 00000001800A9C48: call    sub_180011020
 * 00000001800A9C4D: nop
 * 00000001800A9C4E: lea     rcx, dword_1801CA334
 * 00000001800A9C55: call    _Init_thread_footer
 * 00000001800A9C5A: mov     rax, [rdi+rbx*8]
 * 00000001800A9C5E: mov     eax, [r15+rax]
 * 00000001800A9C62: cmp     cs:dword_1801CA338, eax
 * 00000001800A9C68: jle     loc_1800A9D45
 * 00000001800A9C6E: lea     rcx, dword_1801CA338
 * 00000001800A9C75: call    sub_18000CA40
 * 00000001800A9C7A: cmp     cs:dword_1801CA338, r14d
 * 00000001800A9C81: jnz     loc_1800A9D45
 * 00000001800A9C87: lea     rax, unk_180180E90
 * 00000001800A9C8E: mov     qword ptr [rbp+9E40h+var_9AE0], rax
 * 00000001800A9C95: lea     rax, unk_180187274
 * 00000001800A9C9C: mov     qword ptr [rbp+9E40h+var_9AE0+8], rax
 * 00000001800A9CA3: movups  xmm7, [rbp+9E40h+var_9AE0]
 * 00000001800A9CAA: mov     dword ptr [rbp+9E40h+var_8520], 5
 * 00000001800A9CB4: mov     dword ptr [rbp+9E40h+var_8520+4], esi
 * 00000001800A9CBA: movups  xmm6, [rbp+9E40h+var_8520]
 * 00000001800A9CC1: call    sub_1800A5ED4
 * 00000001800A9CC6: mov     r8, rax
 * 00000001800A9CC9: mov     r9d, r12d
 * 00000001800A9CCC: mov     edx, 0E2h
 * 00000001800A9CD1: lea     rcx, [rbp+9E40h+var_1F70]
 * 00000001800A9CD8: call    sub_1800737C8
 * 00000001800A9CDD: nop
 * 00000001800A9CDE: mov     r8, rax
 * 00000001800A9CE1: mov     rdx, r13
 * 00000001800A9CE4: lea     rcx, [rbp+9E40h+var_1FD0]
 * 00000001800A9CEB: call    sub_18001B678
 * 00000001800A9CF0: nop
 * 00000001800A9CF1: lea     r8, aPixel; "/Pixel"
 * 00000001800A9CF8: mov     rdx, rax
 * 00000001800A9CFB: lea     rcx, [rbp+9E40h+var_61D0]
 * 00000001800A9D02: call    sub_18001B5A8
 * 00000001800A9D07: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9D0C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9D11: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9D16: mov     rcx, rax
 * 00000001800A9D19: call    sub_18007386C
 * 00000001800A9D1E: nop
 * 00000001800A9D1F: lea     rcx, [rbp+9E40h+var_1FD0]
 * 00000001800A9D26: call    sub_180011020
 * 00000001800A9D2B: nop
 * 00000001800A9D2C: lea     rcx, [rbp+9E40h+var_1F70]
 * 00000001800A9D33: call    sub_180011020
 * 00000001800A9D38: nop
 * 00000001800A9D39: lea     rcx, dword_1801CA338
 * 00000001800A9D40: call    _Init_thread_footer
 * 00000001800A9D45: mov     rax, [rdi+rbx*8]
 * 00000001800A9D49: mov     eax, [r15+rax]
 * 00000001800A9D4D: cmp     cs:dword_1801CA33C, eax
 * 00000001800A9D53: jle     loc_1800A9E30
 * 00000001800A9D59: lea     rcx, dword_1801CA33C
 * 00000001800A9D60: call    sub_18000CA40
 * 00000001800A9D65: cmp     cs:dword_1801CA33C, r14d
 * 00000001800A9D6C: jnz     loc_1800A9E30
 * 00000001800A9D72: lea     rax, unk_180169670
 * 00000001800A9D79: mov     qword ptr [rbp+9E40h+var_9AD0], rax
 * 00000001800A9D80: lea     rax, unk_18016FBFC
 * 00000001800A9D87: mov     qword ptr [rbp+9E40h+var_9AD0+8], rax
 * 00000001800A9D8E: movups  xmm7, [rbp+9E40h+var_9AD0]
 * 00000001800A9D95: mov     dword ptr [rbp+9E40h+var_8500], 5
 * 00000001800A9D9F: mov     dword ptr [rbp+9E40h+var_8500+4], esi
 * 00000001800A9DA5: movups  xmm6, [rbp+9E40h+var_8500]
 * 00000001800A9DAC: call    sub_1800A5ED4
 * 00000001800A9DB1: mov     r8, rax
 * 00000001800A9DB4: mov     r9d, r12d
 * 00000001800A9DB7: mov     edx, 0E8h
 * 00000001800A9DBC: lea     rcx, [rbp+9E40h+var_1E50]
 * 00000001800A9DC3: call    sub_1800737C8
 * 00000001800A9DC8: nop
 * 00000001800A9DC9: mov     r8, rax
 * 00000001800A9DCC: mov     rdx, r13
 * 00000001800A9DCF: lea     rcx, [rbp+9E40h+var_1EB0]
 * 00000001800A9DD6: call    sub_18001B678
 * 00000001800A9DDB: nop
 * 00000001800A9DDC: lea     r8, aPixel; "/Pixel"
 * 00000001800A9DE3: mov     rdx, rax
 * 00000001800A9DE6: lea     rcx, [rbp+9E40h+var_61B0]
 * 00000001800A9DED: call    sub_18001B5A8
 * 00000001800A9DF2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9DF7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9DFC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9E01: mov     rcx, rax
 * 00000001800A9E04: call    sub_18007386C
 * 00000001800A9E09: nop
 * 00000001800A9E0A: lea     rcx, [rbp+9E40h+var_1EB0]
 * 00000001800A9E11: call    sub_180011020
 * 00000001800A9E16: nop
 * 00000001800A9E17: lea     rcx, [rbp+9E40h+var_1E50]
 * 00000001800A9E1E: call    sub_180011020
 * 00000001800A9E23: nop
 * 00000001800A9E24: lea     rcx, dword_1801CA33C
 * 00000001800A9E2B: call    _Init_thread_footer
 * 00000001800A9E30: mov     rax, [rdi+rbx*8]
 * 00000001800A9E34: mov     eax, [r15+rax]
 * 00000001800A9E38: cmp     cs:dword_1801CA340, eax
 * 00000001800A9E3E: jle     loc_1800A9F1B
 * 00000001800A9E44: lea     rcx, dword_1801CA340
 * 00000001800A9E4B: call    sub_18000CA40
 * 00000001800A9E50: cmp     cs:dword_1801CA340, r14d
 * 00000001800A9E57: jnz     loc_1800A9F1B
 * 00000001800A9E5D: lea     rax, unk_180169670
 * 00000001800A9E64: mov     qword ptr [rbp+9E40h+var_9AC0], rax
 * 00000001800A9E6B: lea     rax, unk_18016FBFC
 * 00000001800A9E72: mov     qword ptr [rbp+9E40h+var_9AC0+8], rax
 * 00000001800A9E79: movups  xmm7, [rbp+9E40h+var_9AC0]
 * 00000001800A9E80: mov     dword ptr [rbp+9E40h+var_84E0], 5
 * 00000001800A9E8A: mov     dword ptr [rbp+9E40h+var_84E0+4], esi
 * 00000001800A9E90: movups  xmm6, [rbp+9E40h+var_84E0]
 * 00000001800A9E97: call    sub_1800A5ED4
 * 00000001800A9E9C: mov     r8, rax
 * 00000001800A9E9F: mov     r9d, r12d
 * 00000001800A9EA2: mov     edx, 0EAh
 * 00000001800A9EA7: lea     rcx, [rbp+9E40h+var_1D30]
 * 00000001800A9EAE: call    sub_1800737C8
 * 00000001800A9EB3: nop
 * 00000001800A9EB4: mov     r8, rax
 * 00000001800A9EB7: mov     rdx, r13
 * 00000001800A9EBA: lea     rcx, [rbp+9E40h+var_1D90]
 * 00000001800A9EC1: call    sub_18001B678
 * 00000001800A9EC6: nop
 * 00000001800A9EC7: lea     r8, aPixel; "/Pixel"
 * 00000001800A9ECE: mov     rdx, rax
 * 00000001800A9ED1: lea     rcx, [rbp+9E40h+var_6190]
 * 00000001800A9ED8: call    sub_18001B5A8
 * 00000001800A9EDD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9EE2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9EE7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9EEC: mov     rcx, rax
 * 00000001800A9EEF: call    sub_18007386C
 * 00000001800A9EF4: nop
 * 00000001800A9EF5: lea     rcx, [rbp+9E40h+var_1D90]
 * 00000001800A9EFC: call    sub_180011020
 * 00000001800A9F01: nop
 * 00000001800A9F02: lea     rcx, [rbp+9E40h+var_1D30]
 * 00000001800A9F09: call    sub_180011020
 * 00000001800A9F0E: nop
 * 00000001800A9F0F: lea     rcx, dword_1801CA340
 * 00000001800A9F16: call    _Init_thread_footer
 * 00000001800A9F1B: mov     rax, [rdi+rbx*8]
 * 00000001800A9F1F: mov     eax, [r15+rax]
 * 00000001800A9F23: cmp     cs:dword_1801CA344, eax
 * 00000001800A9F29: jle     loc_1800AA006
 * 00000001800A9F2F: lea     rcx, dword_1801CA344
 * 00000001800A9F36: call    sub_18000CA40
 * 00000001800A9F3B: cmp     cs:dword_1801CA344, r14d
 * 00000001800A9F42: jnz     loc_1800AA006
 * 00000001800A9F48: lea     rax, unk_1801630B0
 * 00000001800A9F4F: mov     qword ptr [rbp+9E40h+var_9AB0], rax
 * 00000001800A9F56: lea     rax, unk_180169668
 * 00000001800A9F5D: mov     qword ptr [rbp+9E40h+var_9AB0+8], rax
 * 00000001800A9F64: movups  xmm7, [rbp+9E40h+var_9AB0]
 * 00000001800A9F6B: mov     dword ptr [rbp+9E40h+var_84C0], 5
 * 00000001800A9F75: mov     dword ptr [rbp+9E40h+var_84C0+4], esi
 * 00000001800A9F7B: movups  xmm6, [rbp+9E40h+var_84C0]
 * 00000001800A9F82: call    sub_1800A5ED4
 * 00000001800A9F87: mov     r8, rax
 * 00000001800A9F8A: mov     r9d, r12d
 * 00000001800A9F8D: mov     edx, 0F0h
 * 00000001800A9F92: lea     rcx, [rbp+9E40h+var_1C10]
 * 00000001800A9F99: call    sub_1800737C8
 * 00000001800A9F9E: nop
 * 00000001800A9F9F: mov     r8, rax
 * 00000001800A9FA2: mov     rdx, r13
 * 00000001800A9FA5: lea     rcx, [rbp+9E40h+var_1C70]
 * 00000001800A9FAC: call    sub_18001B678
 * 00000001800A9FB1: nop
 * 00000001800A9FB2: lea     r8, aPixel; "/Pixel"
 * 00000001800A9FB9: mov     rdx, rax
 * 00000001800A9FBC: lea     rcx, [rbp+9E40h+var_6170]
 * 00000001800A9FC3: call    sub_18001B5A8
 * 00000001800A9FC8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9FCD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9FD2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9FD7: mov     rcx, rax
 * 00000001800A9FDA: call    sub_18007386C
 * 00000001800A9FDF: nop
 * 00000001800A9FE0: lea     rcx, [rbp+9E40h+var_1C70]
 * 00000001800A9FE7: call    sub_180011020
 * 00000001800A9FEC: nop
 * 00000001800A9FED: lea     rcx, [rbp+9E40h+var_1C10]
 * 00000001800A9FF4: call    sub_180011020
 * 00000001800A9FF9: nop
 * 00000001800A9FFA: lea     rcx, dword_1801CA344
 * 00000001800AA001: call    _Init_thread_footer
 * 00000001800AA006: mov     rax, [rdi+rbx*8]
 * 00000001800AA00A: mov     eax, [r15+rax]
 * 00000001800AA00E: cmp     cs:dword_1801CA348, eax
 * 00000001800AA014: jle     loc_1800AA0F1
 * 00000001800AA01A: lea     rcx, dword_1801CA348
 * 00000001800AA021: call    sub_18000CA40
 * 00000001800AA026: cmp     cs:dword_1801CA348, r14d
 * 00000001800AA02D: jnz     loc_1800AA0F1
 * 00000001800AA033: lea     rax, unk_1801630B0
 * 00000001800AA03A: mov     qword ptr [rbp+9E40h+var_9AA0], rax
 * 00000001800AA041: lea     rax, unk_180169668
 * 00000001800AA048: mov     qword ptr [rbp+9E40h+var_9AA0+8], rax
 * 00000001800AA04F: movups  xmm7, [rbp+9E40h+var_9AA0]
 * 00000001800AA056: mov     dword ptr [rbp+9E40h+var_84A0], 5
 * 00000001800AA060: mov     dword ptr [rbp+9E40h+var_84A0+4], esi
 * 00000001800AA066: movups  xmm6, [rbp+9E40h+var_84A0]
 * 00000001800AA06D: call    sub_1800A5ED4
 * 00000001800AA072: mov     r8, rax
 * 00000001800AA075: mov     r9d, r12d
 * 00000001800AA078: mov     edx, 0F2h
 * 00000001800AA07D: lea     rcx, [rbp+9E40h+var_1AF0]
 * 00000001800AA084: call    sub_1800737C8
 * 00000001800AA089: nop
 * 00000001800AA08A: mov     r8, rax
 * 00000001800AA08D: mov     rdx, r13
 * 00000001800AA090: lea     rcx, [rbp+9E40h+var_1B50]
 * 00000001800AA097: call    sub_18001B678
 * 00000001800AA09C: nop
 * 00000001800AA09D: lea     r8, aPixel; "/Pixel"
 * 00000001800AA0A4: mov     rdx, rax
 * 00000001800AA0A7: lea     rcx, [rbp+9E40h+var_6150]
 * 00000001800AA0AE: call    sub_18001B5A8
 * 00000001800AA0B3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA0B8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA0BD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA0C2: mov     rcx, rax
 * 00000001800AA0C5: call    sub_18007386C
 * 00000001800AA0CA: nop
 * 00000001800AA0CB: lea     rcx, [rbp+9E40h+var_1B50]
 * 00000001800AA0D2: call    sub_180011020
 * 00000001800AA0D7: nop
 * 00000001800AA0D8: lea     rcx, [rbp+9E40h+var_1AF0]
 * 00000001800AA0DF: call    sub_180011020
 * 00000001800AA0E4: nop
 * 00000001800AA0E5: lea     rcx, dword_1801CA348
 * 00000001800AA0EC: call    _Init_thread_footer
 * 00000001800AA0F1: mov     rax, [rdi+rbx*8]
 * 00000001800AA0F5: mov     eax, [r15+rax]
 * 00000001800AA0F9: cmp     cs:dword_1801CA34C, eax
 * 00000001800AA0FF: jle     loc_1800AA1DC
 * 00000001800AA105: lea     rcx, dword_1801CA34C
 * 00000001800AA10C: call    sub_18000CA40
 * 00000001800AA111: cmp     cs:dword_1801CA34C, r14d
 * 00000001800AA118: jnz     loc_1800AA1DC
 * 00000001800AA11E: lea     rax, unk_180170CD0
 * 00000001800AA125: mov     qword ptr [rbp+9E40h+var_9A90], rax
 * 00000001800AA12C: lea     rax, unk_18017745C
 * 00000001800AA133: mov     qword ptr [rbp+9E40h+var_9A90+8], rax
 * 00000001800AA13A: movups  xmm7, [rbp+9E40h+var_9A90]
 * 00000001800AA141: mov     dword ptr [rbp+9E40h+var_8480], 5
 * 00000001800AA14B: mov     dword ptr [rbp+9E40h+var_8480+4], esi
 * 00000001800AA151: movups  xmm6, [rbp+9E40h+var_8480]
 * 00000001800AA158: call    sub_1800A5ED4
 * 00000001800AA15D: mov     r8, rax
 * 00000001800AA160: mov     r9d, r12d
 * 00000001800AA163: mov     edx, 0F8h
 * 00000001800AA168: lea     rcx, [rbp+9E40h+var_19D0]
 * 00000001800AA16F: call    sub_1800737C8
 * 00000001800AA174: nop
 * 00000001800AA175: mov     r8, rax
 * 00000001800AA178: mov     rdx, r13
 * 00000001800AA17B: lea     rcx, [rbp+9E40h+var_1A30]
 * 00000001800AA182: call    sub_18001B678
 * 00000001800AA187: nop
 * 00000001800AA188: lea     r8, aPixel; "/Pixel"
 * 00000001800AA18F: mov     rdx, rax
 * 00000001800AA192: lea     rcx, [rbp+9E40h+var_6130]
 * 00000001800AA199: call    sub_18001B5A8
 * 00000001800AA19E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA1A3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA1A8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA1AD: mov     rcx, rax
 * 00000001800AA1B0: call    sub_18007386C
 * 00000001800AA1B5: nop
 * 00000001800AA1B6: lea     rcx, [rbp+9E40h+var_1A30]
 * 00000001800AA1BD: call    sub_180011020
 * 00000001800AA1C2: nop
 * 00000001800AA1C3: lea     rcx, [rbp+9E40h+var_19D0]
 * 00000001800AA1CA: call    sub_180011020
 * 00000001800AA1CF: nop
 * 00000001800AA1D0: lea     rcx, dword_1801CA34C
 * 00000001800AA1D7: call    _Init_thread_footer
 * 00000001800AA1DC: mov     rax, [rdi+rbx*8]
 * 00000001800AA1E0: mov     eax, [r15+rax]
 * 00000001800AA1E4: cmp     cs:dword_1801CA350, eax
 * 00000001800AA1EA: jle     loc_1800AA2C7
 * 00000001800AA1F0: lea     rcx, dword_1801CA350
 * 00000001800AA1F7: call    sub_18000CA40
 * 00000001800AA1FC: cmp     cs:dword_1801CA350, r14d
 * 00000001800AA203: jnz     loc_1800AA2C7
 * 00000001800AA209: lea     rax, unk_180170CD0
 * 00000001800AA210: mov     qword ptr [rbp+9E40h+var_9A80], rax
 * 00000001800AA217: lea     rax, unk_18017745C
 * 00000001800AA21E: mov     qword ptr [rbp+9E40h+var_9A80+8], rax
 * 00000001800AA225: movups  xmm7, [rbp+9E40h+var_9A80]
 * 00000001800AA22C: mov     dword ptr [rbp+9E40h+var_8460], 5
 * 00000001800AA236: mov     dword ptr [rbp+9E40h+var_8460+4], esi
 * 00000001800AA23C: movups  xmm6, [rbp+9E40h+var_8460]
 * 00000001800AA243: call    sub_1800A5ED4
 * 00000001800AA248: mov     r8, rax
 * 00000001800AA24B: mov     r9d, r12d
 * 00000001800AA24E: mov     edx, 0FAh
 * 00000001800AA253: lea     rcx, [rbp+9E40h+var_18B0]
 * 00000001800AA25A: call    sub_1800737C8
 * 00000001800AA25F: nop
 * 00000001800AA260: mov     r8, rax
 * 00000001800AA263: mov     rdx, r13
 * 00000001800AA266: lea     rcx, [rbp+9E40h+var_1910]
 * 00000001800AA26D: call    sub_18001B678
 * 00000001800AA272: nop
 * 00000001800AA273: lea     r8, aPixel; "/Pixel"
 * 00000001800AA27A: mov     rdx, rax
 * 00000001800AA27D: lea     rcx, [rbp+9E40h+var_6110]
 * 00000001800AA284: call    sub_18001B5A8
 * 00000001800AA289: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA28E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA293: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA298: mov     rcx, rax
 * 00000001800AA29B: call    sub_18007386C
 * 00000001800AA2A0: nop
 * 00000001800AA2A1: lea     rcx, [rbp+9E40h+var_1910]
 * 00000001800AA2A8: call    sub_180011020
 * 00000001800AA2AD: nop
 * 00000001800AA2AE: lea     rcx, [rbp+9E40h+var_18B0]
 * 00000001800AA2B5: call    sub_180011020
 * 00000001800AA2BA: nop
 * 00000001800AA2BB: lea     rcx, dword_1801CA350
 * 00000001800AA2C2: call    _Init_thread_footer
 * 00000001800AA2C7: mov     rax, [rdi+rbx*8]
 * 00000001800AA2CB: mov     eax, [r15+rax]
 * 00000001800AA2CF: cmp     cs:dword_1801CA354, eax
 * 00000001800AA2D5: jle     loc_1800AA3B2
 * 00000001800AA2DB: lea     rcx, dword_1801CA354
 * 00000001800AA2E2: call    sub_18000CA40
 * 00000001800AA2E7: cmp     cs:dword_1801CA354, r14d
 * 00000001800AA2EE: jnz     loc_1800AA3B2
 * 00000001800AA2F4: lea     rax, unk_180177460
 * 00000001800AA2FB: mov     qword ptr [rbp+9E40h+var_9A70], rax
 * 00000001800AA302: lea     rax, unk_18017DB8C
 * 00000001800AA309: mov     qword ptr [rbp+9E40h+var_9A70+8], rax
 * 00000001800AA310: movups  xmm7, [rbp+9E40h+var_9A70]
 * 00000001800AA317: mov     dword ptr [rbp+9E40h+var_8440], 5
 * 00000001800AA321: mov     dword ptr [rbp+9E40h+var_8440+4], esi
 * 00000001800AA327: movups  xmm6, [rbp+9E40h+var_8440]
 * 00000001800AA32E: call    sub_1800A5ED4
 * 00000001800AA333: mov     r8, rax
 * 00000001800AA336: mov     r9d, r12d
 * 00000001800AA339: mov     edx, 100h
 * 00000001800AA33E: lea     rcx, [rbp+9E40h+var_1790]
 * 00000001800AA345: call    sub_1800737C8
 * 00000001800AA34A: nop
 * 00000001800AA34B: mov     r8, rax
 * 00000001800AA34E: mov     rdx, r13
 * 00000001800AA351: lea     rcx, [rbp+9E40h+var_17F0]
 * 00000001800AA358: call    sub_18001B678
 * 00000001800AA35D: nop
 * 00000001800AA35E: lea     r8, aPixel; "/Pixel"
 * 00000001800AA365: mov     rdx, rax
 * 00000001800AA368: lea     rcx, [rbp+9E40h+var_60F0]
 * 00000001800AA36F: call    sub_18001B5A8
 * 00000001800AA374: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA379: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA37E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA383: mov     rcx, rax
 * 00000001800AA386: call    sub_18007386C
 * 00000001800AA38B: nop
 * 00000001800AA38C: lea     rcx, [rbp+9E40h+var_17F0]
 * 00000001800AA393: call    sub_180011020
 * 00000001800AA398: nop
 * 00000001800AA399: lea     rcx, [rbp+9E40h+var_1790]
 * 00000001800AA3A0: call    sub_180011020
 * 00000001800AA3A5: nop
 * 00000001800AA3A6: lea     rcx, dword_1801CA354
 * 00000001800AA3AD: call    _Init_thread_footer
 * 00000001800AA3B2: mov     rax, [rdi+rbx*8]
 * 00000001800AA3B6: mov     eax, [r15+rax]
 * 00000001800AA3BA: cmp     cs:dword_1801CA358, eax
 * 00000001800AA3C0: jle     loc_1800AA49D
 * 00000001800AA3C6: lea     rcx, dword_1801CA358
 * 00000001800AA3CD: call    sub_18000CA40
 * 00000001800AA3D2: cmp     cs:dword_1801CA358, r14d
 * 00000001800AA3D9: jnz     loc_1800AA49D
 * 00000001800AA3DF: lea     rax, unk_180177460
 * 00000001800AA3E6: mov     qword ptr [rbp+9E40h+var_9A60], rax
 * 00000001800AA3ED: lea     rax, unk_18017DB8C
 * 00000001800AA3F4: mov     qword ptr [rbp+9E40h+var_9A60+8], rax
 * 00000001800AA3FB: movups  xmm7, [rbp+9E40h+var_9A60]
 * 00000001800AA402: mov     dword ptr [rbp+9E40h+var_8420], 5
 * 00000001800AA40C: mov     dword ptr [rbp+9E40h+var_8420+4], esi
 * 00000001800AA412: movups  xmm6, [rbp+9E40h+var_8420]
 * 00000001800AA419: call    sub_1800A5ED4
 * 00000001800AA41E: mov     r8, rax
 * 00000001800AA421: mov     r9d, r12d
 * 00000001800AA424: mov     edx, 102h
 * 00000001800AA429: lea     rcx, [rbp+9E40h+var_1610]
 * 00000001800AA430: call    sub_1800737C8
 * 00000001800AA435: nop
 * 00000001800AA436: mov     r8, rax
 * 00000001800AA439: mov     rdx, r13
 * 00000001800AA43C: lea     rcx, [rbp+9E40h+var_16D0]
 * 00000001800AA443: call    sub_18001B678
 * 00000001800AA448: nop
 * 00000001800AA449: lea     r8, aPixel; "/Pixel"
 * 00000001800AA450: mov     rdx, rax
 * 00000001800AA453: lea     rcx, [rbp+9E40h+var_60D0]
 * 00000001800AA45A: call    sub_18001B5A8
 * 00000001800AA45F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA464: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA469: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA46E: mov     rcx, rax
 * 00000001800AA471: call    sub_18007386C
 * 00000001800AA476: nop
 * 00000001800AA477: lea     rcx, [rbp+9E40h+var_16D0]
 * 00000001800AA47E: call    sub_180011020
 * 00000001800AA483: nop
 * 00000001800AA484: lea     rcx, [rbp+9E40h+var_1610]
 * 00000001800AA48B: call    sub_180011020
 * 00000001800AA490: nop
 * 00000001800AA491: lea     rcx, dword_1801CA358
 * 00000001800AA498: call    _Init_thread_footer
 * 00000001800AA49D: mov     rax, [rdi+rbx*8]
 * 00000001800AA4A1: mov     eax, [r15+rax]
 * 00000001800AA4A5: cmp     cs:dword_1801CA35C, eax
 * 00000001800AA4AB: jle     loc_1800AA588
 * 00000001800AA4B1: lea     rcx, dword_1801CA35C
 * 00000001800AA4B8: call    sub_18000CA40
 * 00000001800AA4BD: cmp     cs:dword_1801CA35C, r14d
 * 00000001800AA4C4: jnz     loc_1800AA588
 * 00000001800AA4CA: lea     rax, unk_18014F1E0
 * 00000001800AA4D1: mov     qword ptr [rbp+9E40h+var_9A50], rax
 * 00000001800AA4D8: lea     rax, unk_1801526C0
 * 00000001800AA4DF: mov     qword ptr [rbp+9E40h+var_9A50+8], rax
 * 00000001800AA4E6: movups  xmm7, [rbp+9E40h+var_9A50]
 * 00000001800AA4ED: mov     dword ptr [rbp+9E40h+var_8400], 5
 * 00000001800AA4F7: mov     dword ptr [rbp+9E40h+var_8400+4], esi
 * 00000001800AA4FD: movups  xmm6, [rbp+9E40h+var_8400]
 * 00000001800AA504: call    sub_1800A5ED4
 * 00000001800AA509: mov     r8, rax
 * 00000001800AA50C: mov     r9d, r12d
 * 00000001800AA50F: mov     edx, 104h
 * 00000001800AA514: lea     rcx, [rbp+9E40h+var_14F0]
 * 00000001800AA51B: call    sub_1800737C8
 * 00000001800AA520: nop
 * 00000001800AA521: mov     r8, rax
 * 00000001800AA524: mov     rdx, r13
 * 00000001800AA527: lea     rcx, [rbp+9E40h+var_1550]
 * 00000001800AA52E: call    sub_18001B678
 * 00000001800AA533: nop
 * 00000001800AA534: lea     r8, aPixel; "/Pixel"
 * 00000001800AA53B: mov     rdx, rax
 * 00000001800AA53E: lea     rcx, [rbp+9E40h+var_60B0]
 * 00000001800AA545: call    sub_18001B5A8
 * 00000001800AA54A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA54F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA554: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA559: mov     rcx, rax
 * 00000001800AA55C: call    sub_18007386C
 * 00000001800AA561: nop
 * 00000001800AA562: lea     rcx, [rbp+9E40h+var_1550]
 * 00000001800AA569: call    sub_180011020
 * 00000001800AA56E: nop
 * 00000001800AA56F: lea     rcx, [rbp+9E40h+var_14F0]
 * 00000001800AA576: call    sub_180011020
 * 00000001800AA57B: nop
 * 00000001800AA57C: lea     rcx, dword_1801CA35C
 * 00000001800AA583: call    _Init_thread_footer
 * 00000001800AA588: mov     rax, [rdi+rbx*8]
 * 00000001800AA58C: mov     eax, [r15+rax]
 * 00000001800AA590: cmp     cs:dword_1801CA360, eax
 * 00000001800AA596: jle     loc_1800AA673
 * 00000001800AA59C: lea     rcx, dword_1801CA360
 * 00000001800AA5A3: call    sub_18000CA40
 * 00000001800AA5A8: cmp     cs:dword_1801CA360, r14d
 * 00000001800AA5AF: jnz     loc_1800AA673
 * 00000001800AA5B5: lea     rax, unk_18014F1E0
 * 00000001800AA5BC: mov     qword ptr [rbp+9E40h+var_9A40], rax
 * 00000001800AA5C3: lea     rax, unk_1801526C0
 * 00000001800AA5CA: mov     qword ptr [rbp+9E40h+var_9A40+8], rax
 * 00000001800AA5D1: movups  xmm7, [rbp+9E40h+var_9A40]
 * 00000001800AA5D8: mov     dword ptr [rbp+9E40h+var_83E0], 5
 * 00000001800AA5E2: mov     dword ptr [rbp+9E40h+var_83E0+4], esi
 * 00000001800AA5E8: movups  xmm6, [rbp+9E40h+var_83E0]
 * 00000001800AA5EF: call    sub_1800A5ED4
 * 00000001800AA5F4: mov     r8, rax
 * 00000001800AA5F7: mov     r9d, r12d
 * 00000001800AA5FA: mov     edx, 106h
 * 00000001800AA5FF: lea     rcx, [rbp+9E40h+var_13D0]
 * 00000001800AA606: call    sub_1800737C8
 * 00000001800AA60B: nop
 * 00000001800AA60C: mov     r8, rax
 * 00000001800AA60F: mov     rdx, r13
 * 00000001800AA612: lea     rcx, [rbp+9E40h+var_1430]
 * 00000001800AA619: call    sub_18001B678
 * 00000001800AA61E: nop
 * 00000001800AA61F: lea     r8, aPixel; "/Pixel"
 * 00000001800AA626: mov     rdx, rax
 * 00000001800AA629: lea     rcx, [rbp+9E40h+var_6090]
 * 00000001800AA630: call    sub_18001B5A8
 * 00000001800AA635: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA63A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA63F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA644: mov     rcx, rax
 * 00000001800AA647: call    sub_18007386C
 * 00000001800AA64C: nop
 * 00000001800AA64D: lea     rcx, [rbp+9E40h+var_1430]
 * 00000001800AA654: call    sub_180011020
 * 00000001800AA659: nop
 * 00000001800AA65A: lea     rcx, [rbp+9E40h+var_13D0]
 * 00000001800AA661: call    sub_180011020
 * 00000001800AA666: nop
 * 00000001800AA667: lea     rcx, dword_1801CA360
 * 00000001800AA66E: call    _Init_thread_footer
 * 00000001800AA673: mov     rax, [rdi+rbx*8]
 * 00000001800AA677: mov     eax, [r15+rax]
 * 00000001800AA67B: cmp     cs:dword_1801CA364, eax
 * 00000001800AA681: jle     loc_1800AA75E
 * 00000001800AA687: lea     rcx, dword_1801CA364
 * 00000001800AA68E: call    sub_18000CA40
 * 00000001800AA693: cmp     cs:dword_1801CA364, r14d
 * 00000001800AA69A: jnz     loc_1800AA75E
 * 00000001800AA6A0: lea     rax, unk_180148920
 * 00000001800AA6A7: mov     qword ptr [rbp+9E40h+var_9A30], rax
 * 00000001800AA6AE: lea     rax, unk_18014F1DC
 * 00000001800AA6B5: mov     qword ptr [rbp+9E40h+var_9A30+8], rax
 * 00000001800AA6BC: movups  xmm7, [rbp+9E40h+var_9A30]
 * 00000001800AA6C3: mov     dword ptr [rbp+9E40h+var_83C0], 5
 * 00000001800AA6CD: mov     dword ptr [rbp+9E40h+var_83C0+4], esi
 * 00000001800AA6D3: movups  xmm6, [rbp+9E40h+var_83C0]
 * 00000001800AA6DA: call    sub_1800A5ED4
 * 00000001800AA6DF: mov     r8, rax
 * 00000001800AA6E2: mov     r9d, r12d
 * 00000001800AA6E5: mov     edx, 108h
 * 00000001800AA6EA: lea     rcx, [rbp+9E40h+var_12B0]
 * 00000001800AA6F1: call    sub_1800737C8
 * 00000001800AA6F6: nop
 * 00000001800AA6F7: mov     r8, rax
 * 00000001800AA6FA: mov     rdx, r13
 * 00000001800AA6FD: lea     rcx, [rbp+9E40h+var_1310]
 * 00000001800AA704: call    sub_18001B678
 * 00000001800AA709: nop
 * 00000001800AA70A: lea     r8, aPixel; "/Pixel"
 * 00000001800AA711: mov     rdx, rax
 * 00000001800AA714: lea     rcx, [rbp+9E40h+var_6070]
 * 00000001800AA71B: call    sub_18001B5A8
 * 00000001800AA720: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA725: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA72A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA72F: mov     rcx, rax
 * 00000001800AA732: call    sub_18007386C
 * 00000001800AA737: nop
 * 00000001800AA738: lea     rcx, [rbp+9E40h+var_1310]
 * 00000001800AA73F: call    sub_180011020
 * 00000001800AA744: nop
 * 00000001800AA745: lea     rcx, [rbp+9E40h+var_12B0]
 * 00000001800AA74C: call    sub_180011020
 * 00000001800AA751: nop
 * 00000001800AA752: lea     rcx, dword_1801CA364
 * 00000001800AA759: call    _Init_thread_footer
 * 00000001800AA75E: mov     rax, [rdi+rbx*8]
 * 00000001800AA762: mov     eax, [r15+rax]
 * 00000001800AA766: cmp     cs:dword_1801CA368, eax
 * 00000001800AA76C: jle     loc_1800AA849
 * 00000001800AA772: lea     rcx, dword_1801CA368
 * 00000001800AA779: call    sub_18000CA40
 * 00000001800AA77E: cmp     cs:dword_1801CA368, r14d
 * 00000001800AA785: jnz     loc_1800AA849
 * 00000001800AA78B: lea     rax, unk_180148920
 * 00000001800AA792: mov     qword ptr [rbp+9E40h+var_9A20], rax
 * 00000001800AA799: lea     rax, unk_18014F1DC
 * 00000001800AA7A0: mov     qword ptr [rbp+9E40h+var_9A20+8], rax
 * 00000001800AA7A7: movups  xmm7, [rbp+9E40h+var_9A20]
 * 00000001800AA7AE: mov     dword ptr [rbp+9E40h+var_83A0], 5
 * 00000001800AA7B8: mov     dword ptr [rbp+9E40h+var_83A0+4], esi
 * 00000001800AA7BE: movups  xmm6, [rbp+9E40h+var_83A0]
 * 00000001800AA7C5: call    sub_1800A5ED4
 * 00000001800AA7CA: mov     r8, rax
 * 00000001800AA7CD: mov     r9d, r12d
 * 00000001800AA7D0: mov     edx, 10Ah
 * 00000001800AA7D5: lea     rcx, [rbp+9E40h+var_1190]
 * 00000001800AA7DC: call    sub_1800737C8
 * 00000001800AA7E1: nop
 * 00000001800AA7E2: mov     r8, rax
 * 00000001800AA7E5: mov     rdx, r13
 * 00000001800AA7E8: lea     rcx, [rbp+9E40h+var_11F0]
 * 00000001800AA7EF: call    sub_18001B678
 * 00000001800AA7F4: nop
 * 00000001800AA7F5: lea     r8, aPixel; "/Pixel"
 * 00000001800AA7FC: mov     rdx, rax
 * 00000001800AA7FF: lea     rcx, [rbp+9E40h+var_6050]
 * 00000001800AA806: call    sub_18001B5A8
 * 00000001800AA80B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA810: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA815: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA81A: mov     rcx, rax
 * 00000001800AA81D: call    sub_18007386C
 * 00000001800AA822: nop
 * 00000001800AA823: lea     rcx, [rbp+9E40h+var_11F0]
 * 00000001800AA82A: call    sub_180011020
 * 00000001800AA82F: nop
 * 00000001800AA830: lea     rcx, [rbp+9E40h+var_1190]
 * 00000001800AA837: call    sub_180011020
 * 00000001800AA83C: nop
 * 00000001800AA83D: lea     rcx, dword_1801CA368
 * 00000001800AA844: call    _Init_thread_footer
 * 00000001800AA849: mov     rax, [rdi+rbx*8]
 * 00000001800AA84D: mov     eax, [r15+rax]
 * 00000001800AA851: cmp     cs:dword_1801CA36C, eax
 * 00000001800AA857: jle     loc_1800AA934
 * 00000001800AA85D: lea     rcx, dword_1801CA36C
 * 00000001800AA864: call    sub_18000CA40
 * 00000001800AA869: cmp     cs:dword_1801CA36C, r14d
 * 00000001800AA870: jnz     loc_1800AA934
 * 00000001800AA876: lea     rax, unk_180159180
 * 00000001800AA87D: mov     qword ptr [rbp+9E40h+var_9A10], rax
 * 00000001800AA884: lea     rax, unk_18015FA88
 * 00000001800AA88B: mov     qword ptr [rbp+9E40h+var_9A10+8], rax
 * 00000001800AA892: movups  xmm7, [rbp+9E40h+var_9A10]
 * 00000001800AA899: mov     dword ptr [rbp+9E40h+var_8380], 5
 * 00000001800AA8A3: mov     dword ptr [rbp+9E40h+var_8380+4], esi
 * 00000001800AA8A9: movups  xmm6, [rbp+9E40h+var_8380]
 * 00000001800AA8B0: call    sub_1800A5ED4
 * 00000001800AA8B5: mov     r8, rax
 * 00000001800AA8B8: mov     r9d, r12d
 * 00000001800AA8BB: mov     edx, 110h
 * 00000001800AA8C0: lea     rcx, [rbp+9E40h+var_1070]
 * 00000001800AA8C7: call    sub_1800737C8
 * 00000001800AA8CC: nop
 * 00000001800AA8CD: mov     r8, rax
 * 00000001800AA8D0: mov     rdx, r13
 * 00000001800AA8D3: lea     rcx, [rbp+9E40h+var_10D0]
 * 00000001800AA8DA: call    sub_18001B678
 * 00000001800AA8DF: nop
 * 00000001800AA8E0: lea     r8, aPixel; "/Pixel"
 * 00000001800AA8E7: mov     rdx, rax
 * 00000001800AA8EA: lea     rcx, [rbp+9E40h+var_6030]
 * 00000001800AA8F1: call    sub_18001B5A8
 * 00000001800AA8F6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA8FB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA900: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA905: mov     rcx, rax
 * 00000001800AA908: call    sub_18007386C
 * 00000001800AA90D: nop
 * 00000001800AA90E: lea     rcx, [rbp+9E40h+var_10D0]
 * 00000001800AA915: call    sub_180011020
 * 00000001800AA91A: nop
 * 00000001800AA91B: lea     rcx, [rbp+9E40h+var_1070]
 * 00000001800AA922: call    sub_180011020
 * 00000001800AA927: nop
 * 00000001800AA928: lea     rcx, dword_1801CA36C
 * 00000001800AA92F: call    _Init_thread_footer
 * 00000001800AA934: mov     rax, [rdi+rbx*8]
 * 00000001800AA938: mov     eax, [r15+rax]
 * 00000001800AA93C: cmp     cs:dword_1801CA370, eax
 * 00000001800AA942: jle     loc_1800AAA1F
 * 00000001800AA948: lea     rcx, dword_1801CA370
 * 00000001800AA94F: call    sub_18000CA40
 * 00000001800AA954: cmp     cs:dword_1801CA370, r14d
 * 00000001800AA95B: jnz     loc_1800AAA1F
 * 00000001800AA961: lea     rax, unk_180159180
 * 00000001800AA968: mov     qword ptr [rbp+9E40h+var_9A00], rax
 * 00000001800AA96F: lea     rax, unk_18015FA88
 * 00000001800AA976: mov     qword ptr [rbp+9E40h+var_9A00+8], rax
 * 00000001800AA97D: movups  xmm7, [rbp+9E40h+var_9A00]
 * 00000001800AA984: mov     dword ptr [rbp+9E40h+var_8360], 5
 * 00000001800AA98E: mov     dword ptr [rbp+9E40h+var_8360+4], esi
 * 00000001800AA994: movups  xmm6, [rbp+9E40h+var_8360]
 * 00000001800AA99B: call    sub_1800A5ED4
 * 00000001800AA9A0: mov     r8, rax
 * 00000001800AA9A3: mov     r9d, r12d
 * 00000001800AA9A6: mov     edx, 112h
 * 00000001800AA9AB: lea     rcx, [rbp+9E40h+var_F50]
 * 00000001800AA9B2: call    sub_1800737C8
 * 00000001800AA9B7: nop
 * 00000001800AA9B8: mov     r8, rax
 * 00000001800AA9BB: mov     rdx, r13
 * 00000001800AA9BE: lea     rcx, [rbp+9E40h+var_FB0]
 * 00000001800AA9C5: call    sub_18001B678
 * 00000001800AA9CA: nop
 * 00000001800AA9CB: lea     r8, aPixel; "/Pixel"
 * 00000001800AA9D2: mov     rdx, rax
 * 00000001800AA9D5: lea     rcx, [rbp+9E40h+var_6010]
 * 00000001800AA9DC: call    sub_18001B5A8
 * 00000001800AA9E1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA9E6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA9EB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA9F0: mov     rcx, rax
 * 00000001800AA9F3: call    sub_18007386C
 * 00000001800AA9F8: nop
 * 00000001800AA9F9: lea     rcx, [rbp+9E40h+var_FB0]
 * 00000001800AAA00: call    sub_180011020
 * 00000001800AAA05: nop
 * 00000001800AAA06: lea     rcx, [rbp+9E40h+var_F50]
 * 00000001800AAA0D: call    sub_180011020
 * 00000001800AAA12: nop
 * 00000001800AAA13: lea     rcx, dword_1801CA370
 * 00000001800AAA1A: call    _Init_thread_footer
 * 00000001800AAA1F: mov     rax, [rdi+rbx*8]
 * 00000001800AAA23: mov     eax, [r15+rax]
 * 00000001800AAA27: cmp     cs:dword_1801CA374, eax
 * 00000001800AAA2D: jle     loc_1800AAB0A
 * 00000001800AAA33: lea     rcx, dword_1801CA374
 * 00000001800AAA3A: call    sub_18000CA40
 * 00000001800AAA3F: cmp     cs:dword_1801CA374, r14d
 * 00000001800AAA46: jnz     loc_1800AAB0A
 * 00000001800AAA4C: lea     rax, unk_18015FA90
 * 00000001800AAA53: mov     qword ptr [rbp+9E40h+var_99F0], rax
 * 00000001800AAA5A: lea     rax, unk_1801630AC
 * 00000001800AAA61: mov     qword ptr [rbp+9E40h+var_99F0+8], rax
 * 00000001800AAA68: movups  xmm7, [rbp+9E40h+var_99F0]
 * 00000001800AAA6F: mov     dword ptr [rbp+9E40h+var_8340], 5
 * 00000001800AAA79: mov     dword ptr [rbp+9E40h+var_8340+4], esi
 * 00000001800AAA7F: movups  xmm6, [rbp+9E40h+var_8340]
 * 00000001800AAA86: call    sub_1800A5ED4
 * 00000001800AAA8B: mov     r8, rax
 * 00000001800AAA8E: mov     r9d, r12d
 * 00000001800AAA91: mov     edx, 114h
 * 00000001800AAA96: lea     rcx, [rbp+9E40h+var_E30]
 * 00000001800AAA9D: call    sub_1800737C8
 * 00000001800AAAA2: nop
 * 00000001800AAAA3: mov     r8, rax
 * 00000001800AAAA6: mov     rdx, r13
 * 00000001800AAAA9: lea     rcx, [rbp+9E40h+var_E90]
 * 00000001800AAAB0: call    sub_18001B678
 * 00000001800AAAB5: nop
 * 00000001800AAAB6: lea     r8, aPixel; "/Pixel"
 * 00000001800AAABD: mov     rdx, rax
 * 00000001800AAAC0: lea     rcx, [rbp+9E40h+var_5FF0]
 * 00000001800AAAC7: call    sub_18001B5A8
 * 00000001800AAACC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAAD1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAAD6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAADB: mov     rcx, rax
 * 00000001800AAADE: call    sub_18007386C
 * 00000001800AAAE3: nop
 * 00000001800AAAE4: lea     rcx, [rbp+9E40h+var_E90]
 * 00000001800AAAEB: call    sub_180011020
 * 00000001800AAAF0: nop
 * 00000001800AAAF1: lea     rcx, [rbp+9E40h+var_E30]
 * 00000001800AAAF8: call    sub_180011020
 * 00000001800AAAFD: nop
 * 00000001800AAAFE: lea     rcx, dword_1801CA374
 * 00000001800AAB05: call    _Init_thread_footer
 * 00000001800AAB0A: mov     rax, [rdi+rbx*8]
 * 00000001800AAB0E: mov     eax, [r15+rax]
 * 00000001800AAB12: cmp     cs:dword_1801CA378, eax
 * 00000001800AAB18: jle     loc_1800AABF5
 * 00000001800AAB1E: lea     rcx, dword_1801CA378
 * 00000001800AAB25: call    sub_18000CA40
 * 00000001800AAB2A: cmp     cs:dword_1801CA378, r14d
 * 00000001800AAB31: jnz     loc_1800AABF5
 * 00000001800AAB37: lea     rax, unk_18015FA90
 * 00000001800AAB3E: mov     qword ptr [rbp+9E40h+var_99E0], rax
 * 00000001800AAB45: lea     rax, unk_1801630AC
 * 00000001800AAB4C: mov     qword ptr [rbp+9E40h+var_99E0+8], rax
 * 00000001800AAB53: movups  xmm7, [rbp+9E40h+var_99E0]
 * 00000001800AAB5A: mov     dword ptr [rbp+9E40h+var_8320], 5
 * 00000001800AAB64: mov     dword ptr [rbp+9E40h+var_8320+4], esi
 * 00000001800AAB6A: movups  xmm6, [rbp+9E40h+var_8320]
 * 00000001800AAB71: call    sub_1800A5ED4
 * 00000001800AAB76: mov     r8, rax
 * 00000001800AAB79: mov     r9d, r12d
 * 00000001800AAB7C: mov     edx, 116h
 * 00000001800AAB81: lea     rcx, [rbp+9E40h+var_D10]
 * 00000001800AAB88: call    sub_1800737C8
 * 00000001800AAB8D: nop
 * 00000001800AAB8E: mov     r8, rax
 * 00000001800AAB91: mov     rdx, r13
 * 00000001800AAB94: lea     rcx, [rbp+9E40h+var_D70]
 * 00000001800AAB9B: call    sub_18001B678
 * 00000001800AABA0: nop
 * 00000001800AABA1: lea     r8, aPixel; "/Pixel"
 * 00000001800AABA8: mov     rdx, rax
 * 00000001800AABAB: lea     rcx, [rbp+9E40h+var_5FD0]
 * 00000001800AABB2: call    sub_18001B5A8
 * 00000001800AABB7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AABBC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AABC1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AABC6: mov     rcx, rax
 * 00000001800AABC9: call    sub_18007386C
 * 00000001800AABCE: nop
 * 00000001800AABCF: lea     rcx, [rbp+9E40h+var_D70]
 * 00000001800AABD6: call    sub_180011020
 * 00000001800AABDB: nop
 * 00000001800AABDC: lea     rcx, [rbp+9E40h+var_D10]
 * 00000001800AABE3: call    sub_180011020
 * 00000001800AABE8: nop
 * 00000001800AABE9: lea     rcx, dword_1801CA378
 * 00000001800AABF0: call    _Init_thread_footer
 * 00000001800AABF5: mov     rax, [rdi+rbx*8]
 * 00000001800AABF9: mov     eax, [r15+rax]
 * 00000001800AABFD: cmp     cs:dword_1801CA37C, eax
 * 00000001800AAC03: jle     loc_1800AACE0
 * 00000001800AAC09: lea     rcx, dword_1801CA37C
 * 00000001800AAC10: call    sub_18000CA40
 * 00000001800AAC15: cmp     cs:dword_1801CA37C, r14d
 * 00000001800AAC1C: jnz     loc_1800AACE0
 * 00000001800AAC22: lea     rax, unk_1801526C0
 * 00000001800AAC29: mov     qword ptr [rbp+9E40h+var_99D0], rax
 * 00000001800AAC30: lea     rax, unk_18015917C
 * 00000001800AAC37: mov     qword ptr [rbp+9E40h+var_99D0+8], rax
 * 00000001800AAC3E: movups  xmm7, [rbp+9E40h+var_99D0]
 * 00000001800AAC45: mov     dword ptr [rbp+9E40h+var_8300], 5
 * 00000001800AAC4F: mov     dword ptr [rbp+9E40h+var_8300+4], esi
 * 00000001800AAC55: movups  xmm6, [rbp+9E40h+var_8300]
 * 00000001800AAC5C: call    sub_1800A5ED4
 * 00000001800AAC61: mov     r8, rax
 * 00000001800AAC64: mov     r9d, r12d
 * 00000001800AAC67: mov     edx, 118h
 * 00000001800AAC6C: lea     rcx, [rbp+9E40h+var_BF0]
 * 00000001800AAC73: call    sub_1800737C8
 * 00000001800AAC78: nop
 * 00000001800AAC79: mov     r8, rax
 * 00000001800AAC7C: mov     rdx, r13
 * 00000001800AAC7F: lea     rcx, [rbp+9E40h+var_C50]
 * 00000001800AAC86: call    sub_18001B678
 * 00000001800AAC8B: nop
 * 00000001800AAC8C: lea     r8, aPixel; "/Pixel"
 * 00000001800AAC93: mov     rdx, rax
 * 00000001800AAC96: lea     rcx, [rbp+9E40h+var_5FB0]
 * 00000001800AAC9D: call    sub_18001B5A8
 * 00000001800AACA2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AACA7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AACAC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AACB1: mov     rcx, rax
 * 00000001800AACB4: call    sub_18007386C
 * 00000001800AACB9: nop
 * 00000001800AACBA: lea     rcx, [rbp+9E40h+var_C50]
 * 00000001800AACC1: call    sub_180011020
 * 00000001800AACC6: nop
 * 00000001800AACC7: lea     rcx, [rbp+9E40h+var_BF0]
 * 00000001800AACCE: call    sub_180011020
 * 00000001800AACD3: nop
 * 00000001800AACD4: lea     rcx, dword_1801CA37C
 * 00000001800AACDB: call    _Init_thread_footer
 * 00000001800AACE0: mov     rax, [rdi+rbx*8]
 * 00000001800AACE4: mov     eax, [r15+rax]
 * 00000001800AACE8: cmp     cs:dword_1801CA380, eax
 * 00000001800AACEE: jle     loc_1800AADCB
 * 00000001800AACF4: lea     rcx, dword_1801CA380
 * 00000001800AACFB: call    sub_18000CA40
 * 00000001800AAD00: cmp     cs:dword_1801CA380, r14d
 * 00000001800AAD07: jnz     loc_1800AADCB
 * 00000001800AAD0D: lea     rax, unk_1801526C0
 * 00000001800AAD14: mov     qword ptr [rbp+9E40h+var_99C0], rax
 * 00000001800AAD1B: lea     rax, unk_18015917C
 * 00000001800AAD22: mov     qword ptr [rbp+9E40h+var_99C0+8], rax
 * 00000001800AAD29: movups  xmm7, [rbp+9E40h+var_99C0]
 * 00000001800AAD30: mov     dword ptr [rbp+9E40h+var_82E0], 5
 * 00000001800AAD3A: mov     dword ptr [rbp+9E40h+var_82E0+4], esi
 * 00000001800AAD40: movups  xmm6, [rbp+9E40h+var_82E0]
 * 00000001800AAD47: call    sub_1800A5ED4
 * 00000001800AAD4C: mov     r8, rax
 * 00000001800AAD4F: mov     r9d, r12d
 * 00000001800AAD52: mov     edx, 11Ah
 * 00000001800AAD57: lea     rcx, [rbp+9E40h+var_AD0]
 * 00000001800AAD5E: call    sub_1800737C8
 * 00000001800AAD63: nop
 * 00000001800AAD64: mov     r8, rax
 * 00000001800AAD67: mov     rdx, r13
 * 00000001800AAD6A: lea     rcx, [rbp+9E40h+var_B30]
 * 00000001800AAD71: call    sub_18001B678
 * 00000001800AAD76: nop
 * 00000001800AAD77: lea     r8, aPixel; "/Pixel"
 * 00000001800AAD7E: mov     rdx, rax
 * 00000001800AAD81: lea     rcx, [rbp+9E40h+var_5F90]
 * 00000001800AAD88: call    sub_18001B5A8
 * 00000001800AAD8D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAD92: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAD97: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAD9C: mov     rcx, rax
 * 00000001800AAD9F: call    sub_18007386C
 * 00000001800AADA4: nop
 * 00000001800AADA5: lea     rcx, [rbp+9E40h+var_B30]
 * 00000001800AADAC: call    sub_180011020
 * 00000001800AADB1: nop
 * 00000001800AADB2: lea     rcx, [rbp+9E40h+var_AD0]
 * 00000001800AADB9: call    sub_180011020
 * 00000001800AADBE: nop
 * 00000001800AADBF: lea     rcx, dword_1801CA380
 * 00000001800AADC6: call    _Init_thread_footer
 * 00000001800AADCB: mov     rax, [rdi+rbx*8]
 * 00000001800AADCF: mov     eax, [r15+rax]
 * 00000001800AADD3: cmp     cs:dword_1801CA384, eax
 * 00000001800AADD9: jle     loc_1800AAEB6
 * 00000001800AADDF: lea     rcx, dword_1801CA384
 * 00000001800AADE6: call    sub_18000CA40
 * 00000001800AADEB: cmp     cs:dword_1801CA384, r14d
 * 00000001800AADF2: jnz     loc_1800AAEB6
 * 00000001800AADF8: lea     rax, unk_180177460
 * 00000001800AADFF: mov     qword ptr [rbp+9E40h+var_99B0], rax
 * 00000001800AAE06: lea     rax, unk_18017DB8C
 * 00000001800AAE0D: mov     qword ptr [rbp+9E40h+var_99B0+8], rax
 * 00000001800AAE14: movups  xmm7, [rbp+9E40h+var_99B0]
 * 00000001800AAE1B: mov     dword ptr [rbp+9E40h+var_82C0], 5
 * 00000001800AAE25: mov     dword ptr [rbp+9E40h+var_82C0+4], esi
 * 00000001800AAE2B: movups  xmm6, [rbp+9E40h+var_82C0]
 * 00000001800AAE32: call    sub_1800A5ED4
 * 00000001800AAE37: mov     r8, rax
 * 00000001800AAE3A: mov     r9d, r12d
 * 00000001800AAE3D: mov     edx, 120h
 * 00000001800AAE42: lea     rcx, [rbp+9E40h+var_9B0]
 * 00000001800AAE49: call    sub_1800737C8
 * 00000001800AAE4E: nop
 * 00000001800AAE4F: mov     r8, rax
 * 00000001800AAE52: mov     rdx, r13
 * 00000001800AAE55: lea     rcx, [rbp+9E40h+var_A10]
 * 00000001800AAE5C: call    sub_18001B678
 * 00000001800AAE61: nop
 * 00000001800AAE62: lea     r8, aPixel; "/Pixel"
 * 00000001800AAE69: mov     rdx, rax
 * 00000001800AAE6C: lea     rcx, [rbp+9E40h+var_5F70]
 * 00000001800AAE73: call    sub_18001B5A8
 * 00000001800AAE78: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAE7D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAE82: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAE87: mov     rcx, rax
 * 00000001800AAE8A: call    sub_18007386C
 * 00000001800AAE8F: nop
 * 00000001800AAE90: lea     rcx, [rbp+9E40h+var_A10]
 * 00000001800AAE97: call    sub_180011020
 * 00000001800AAE9C: nop
 * 00000001800AAE9D: lea     rcx, [rbp+9E40h+var_9B0]
 * 00000001800AAEA4: call    sub_180011020
 * 00000001800AAEA9: nop
 * 00000001800AAEAA: lea     rcx, dword_1801CA384
 * 00000001800AAEB1: call    _Init_thread_footer
 * 00000001800AAEB6: mov     rax, [rdi+rbx*8]
 * 00000001800AAEBA: mov     eax, [r15+rax]
 * 00000001800AAEBE: cmp     cs:dword_1801CA388, eax
 * 00000001800AAEC4: jle     loc_1800AAFA1
 * 00000001800AAECA: lea     rcx, dword_1801CA388
 * 00000001800AAED1: call    sub_18000CA40
 * 00000001800AAED6: cmp     cs:dword_1801CA388, r14d
 * 00000001800AAEDD: jnz     loc_1800AAFA1
 * 00000001800AAEE3: lea     rax, unk_180177460
 * 00000001800AAEEA: mov     qword ptr [rbp+9E40h+var_99A0], rax
 * 00000001800AAEF1: lea     rax, unk_18017DB8C
 * 00000001800AAEF8: mov     qword ptr [rbp+9E40h+var_99A0+8], rax
 * 00000001800AAEFF: movups  xmm7, [rbp+9E40h+var_99A0]
 * 00000001800AAF06: mov     dword ptr [rbp+9E40h+var_82A0], 5
 * 00000001800AAF10: mov     dword ptr [rbp+9E40h+var_82A0+4], esi
 * 00000001800AAF16: movups  xmm6, [rbp+9E40h+var_82A0]
 * 00000001800AAF1D: call    sub_1800A5ED4
 * 00000001800AAF22: mov     r8, rax
 * 00000001800AAF25: mov     r9d, r12d
 * 00000001800AAF28: mov     edx, 122h
 * 00000001800AAF2D: lea     rcx, [rbp+9E40h+var_890]
 * 00000001800AAF34: call    sub_1800737C8
 * 00000001800AAF39: nop
 * 00000001800AAF3A: mov     r8, rax
 * 00000001800AAF3D: mov     rdx, r13
 * 00000001800AAF40: lea     rcx, [rbp+9E40h+var_8F0]
 * 00000001800AAF47: call    sub_18001B678
 * 00000001800AAF4C: nop
 * 00000001800AAF4D: lea     r8, aPixel; "/Pixel"
 * 00000001800AAF54: mov     rdx, rax
 * 00000001800AAF57: lea     rcx, [rbp+9E40h+var_5F50]
 * 00000001800AAF5E: call    sub_18001B5A8
 * 00000001800AAF63: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAF68: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAF6D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAF72: mov     rcx, rax
 * 00000001800AAF75: call    sub_18007386C
 * 00000001800AAF7A: nop
 * 00000001800AAF7B: lea     rcx, [rbp+9E40h+var_8F0]
 * 00000001800AAF82: call    sub_180011020
 * 00000001800AAF87: nop
 * 00000001800AAF88: lea     rcx, [rbp+9E40h+var_890]
 * 00000001800AAF8F: call    sub_180011020
 * 00000001800AAF94: nop
 * 00000001800AAF95: lea     rcx, dword_1801CA388
 * 00000001800AAF9C: call    _Init_thread_footer
 * 00000001800AAFA1: mov     rax, [rdi+rbx*8]
 * 00000001800AAFA5: mov     eax, [r15+rax]
 * 00000001800AAFA9: cmp     cs:dword_1801CA38C, eax
 * 00000001800AAFAF: jle     loc_1800AB08C
 * 00000001800AAFB5: lea     rcx, dword_1801CA38C
 * 00000001800AAFBC: call    sub_18000CA40
 * 00000001800AAFC1: cmp     cs:dword_1801CA38C, r14d
 * 00000001800AAFC8: jnz     loc_1800AB08C
 * 00000001800AAFCE: lea     rax, unk_180148920
 * 00000001800AAFD5: mov     qword ptr [rbp+9E40h+var_9990], rax
 * 00000001800AAFDC: lea     rax, unk_18014F1DC
 * 00000001800AAFE3: mov     qword ptr [rbp+9E40h+var_9990+8], rax
 * 00000001800AAFEA: movups  xmm7, [rbp+9E40h+var_9990]
 * 00000001800AAFF1: mov     dword ptr [rbp+9E40h+var_8280], 5
 * 00000001800AAFFB: mov     dword ptr [rbp+9E40h+var_8280+4], esi
 * 00000001800AB001: movups  xmm6, [rbp+9E40h+var_8280]
 * 00000001800AB008: call    sub_1800A5ED4
 * 00000001800AB00D: mov     r8, rax
 * 00000001800AB010: mov     r9d, r12d
 * 00000001800AB013: mov     edx, 128h
 * 00000001800AB018: lea     rcx, [rbp+9E40h+var_770]
 * 00000001800AB01F: call    sub_1800737C8
 * 00000001800AB024: nop
 * 00000001800AB025: mov     r8, rax
 * 00000001800AB028: mov     rdx, r13
 * 00000001800AB02B: lea     rcx, [rbp+9E40h+var_7D0]
 * 00000001800AB032: call    sub_18001B678
 * 00000001800AB037: nop
 * 00000001800AB038: lea     r8, aPixel; "/Pixel"
 * 00000001800AB03F: mov     rdx, rax
 * 00000001800AB042: lea     rcx, [rbp+9E40h+var_5F30]
 * 00000001800AB049: call    sub_18001B5A8
 * 00000001800AB04E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB053: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB058: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB05D: mov     rcx, rax
 * 00000001800AB060: call    sub_18007386C
 * 00000001800AB065: nop
 * 00000001800AB066: lea     rcx, [rbp+9E40h+var_7D0]
 * 00000001800AB06D: call    sub_180011020
 * 00000001800AB072: nop
 * 00000001800AB073: lea     rcx, [rbp+9E40h+var_770]
 * 00000001800AB07A: call    sub_180011020
 * 00000001800AB07F: nop
 * 00000001800AB080: lea     rcx, dword_1801CA38C
 * 00000001800AB087: call    _Init_thread_footer
 * 00000001800AB08C: mov     rax, [rdi+rbx*8]
 * 00000001800AB090: mov     eax, [r15+rax]
 * 00000001800AB094: cmp     cs:dword_1801CA390, eax
 * 00000001800AB09A: jle     loc_1800AB177
 * 00000001800AB0A0: lea     rcx, dword_1801CA390
 * 00000001800AB0A7: call    sub_18000CA40
 * 00000001800AB0AC: cmp     cs:dword_1801CA390, r14d
 * 00000001800AB0B3: jnz     loc_1800AB177
 * 00000001800AB0B9: lea     rax, unk_180148920
 * 00000001800AB0C0: mov     qword ptr [rbp+9E40h+var_9980], rax
 * 00000001800AB0C7: lea     rax, unk_18014F1DC
 * 00000001800AB0CE: mov     qword ptr [rbp+9E40h+var_9980+8], rax
 * 00000001800AB0D5: movups  xmm7, [rbp+9E40h+var_9980]
 * 00000001800AB0DC: mov     dword ptr [rbp+9E40h+var_8260], 5
 * 00000001800AB0E6: mov     dword ptr [rbp+9E40h+var_8260+4], esi
 * 00000001800AB0EC: movups  xmm6, [rbp+9E40h+var_8260]
 * 00000001800AB0F3: call    sub_1800A5ED4
 * 00000001800AB0F8: mov     r8, rax
 * 00000001800AB0FB: mov     r9d, r12d
 * 00000001800AB0FE: mov     edx, 12Ah
 * 00000001800AB103: lea     rcx, [rbp+9E40h+var_650]
 * 00000001800AB10A: call    sub_1800737C8
 * 00000001800AB10F: nop
 * 00000001800AB110: mov     r8, rax
 * 00000001800AB113: mov     rdx, r13
 * 00000001800AB116: lea     rcx, [rbp+9E40h+var_6B0]
 * 00000001800AB11D: call    sub_18001B678
 * 00000001800AB122: nop
 * 00000001800AB123: lea     r8, aPixel; "/Pixel"
 * 00000001800AB12A: mov     rdx, rax
 * 00000001800AB12D: lea     rcx, [rbp+9E40h+var_5F10]
 * 00000001800AB134: call    sub_18001B5A8
 * 00000001800AB139: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB13E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB143: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB148: mov     rcx, rax
 * 00000001800AB14B: call    sub_18007386C
 * 00000001800AB150: nop
 * 00000001800AB151: lea     rcx, [rbp+9E40h+var_6B0]
 * 00000001800AB158: call    sub_180011020
 * 00000001800AB15D: nop
 * 00000001800AB15E: lea     rcx, [rbp+9E40h+var_650]
 * 00000001800AB165: call    sub_180011020
 * 00000001800AB16A: nop
 * 00000001800AB16B: lea     rcx, dword_1801CA390
 * 00000001800AB172: call    _Init_thread_footer
 * 00000001800AB177: mov     rax, [rdi+rbx*8]
 * 00000001800AB17B: mov     eax, [r15+rax]
 * 00000001800AB17F: cmp     cs:dword_1801CA394, eax
 * 00000001800AB185: jle     loc_1800AB262
 * 00000001800AB18B: lea     rcx, dword_1801CA394
 * 00000001800AB192: call    sub_18000CA40
 * 00000001800AB197: cmp     cs:dword_1801CA394, r14d
 * 00000001800AB19E: jnz     loc_1800AB262
 * 00000001800AB1A4: lea     rax, unk_180159180
 * 00000001800AB1AB: mov     qword ptr [rbp+9E40h+var_9970], rax
 * 00000001800AB1B2: lea     rax, unk_18015FA88
 * 00000001800AB1B9: mov     qword ptr [rbp+9E40h+var_9970+8], rax
 * 00000001800AB1C0: movups  xmm7, [rbp+9E40h+var_9970]
 * 00000001800AB1C7: mov     dword ptr [rbp+9E40h+var_8240], 5
 * 00000001800AB1D1: mov     dword ptr [rbp+9E40h+var_8240+4], esi
 * 00000001800AB1D7: movups  xmm6, [rbp+9E40h+var_8240]
 * 00000001800AB1DE: call    sub_1800A5ED4
 * 00000001800AB1E3: mov     r8, rax
 * 00000001800AB1E6: mov     r9d, r12d
 * 00000001800AB1E9: mov     edx, 130h
 * 00000001800AB1EE: lea     rcx, [rbp+9E40h+var_530]
 * 00000001800AB1F5: call    sub_1800737C8
 * 00000001800AB1FA: nop
 * 00000001800AB1FB: mov     r8, rax
 * 00000001800AB1FE: mov     rdx, r13
 * 00000001800AB201: lea     rcx, [rbp+9E40h+var_590]
 * 00000001800AB208: call    sub_18001B678
 * 00000001800AB20D: nop
 * 00000001800AB20E: lea     r8, aPixel; "/Pixel"
 * 00000001800AB215: mov     rdx, rax
 * 00000001800AB218: lea     rcx, [rbp+9E40h+var_5EF0]
 * 00000001800AB21F: call    sub_18001B5A8
 * 00000001800AB224: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB229: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB22E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB233: mov     rcx, rax
 * 00000001800AB236: call    sub_18007386C
 * 00000001800AB23B: nop
 * 00000001800AB23C: lea     rcx, [rbp+9E40h+var_590]
 * 00000001800AB243: call    sub_180011020
 * 00000001800AB248: nop
 * 00000001800AB249: lea     rcx, [rbp+9E40h+var_530]
 * 00000001800AB250: call    sub_180011020
 * 00000001800AB255: nop
 * 00000001800AB256: lea     rcx, dword_1801CA394
 * 00000001800AB25D: call    _Init_thread_footer
 * 00000001800AB262: mov     rax, [rdi+rbx*8]
 * 00000001800AB266: mov     eax, [r15+rax]
 * 00000001800AB26A: cmp     cs:dword_1801CA398, eax
 * 00000001800AB270: jle     loc_1800AB34D
 * 00000001800AB276: lea     rcx, dword_1801CA398
 * 00000001800AB27D: call    sub_18000CA40
 * 00000001800AB282: cmp     cs:dword_1801CA398, r14d
 * 00000001800AB289: jnz     loc_1800AB34D
 * 00000001800AB28F: lea     rax, unk_180159180
 * 00000001800AB296: mov     qword ptr [rbp+9E40h+var_9960], rax
 * 00000001800AB29D: lea     rax, unk_18015FA88
 * 00000001800AB2A4: mov     qword ptr [rbp+9E40h+var_9960+8], rax
 * 00000001800AB2AB: movups  xmm7, [rbp+9E40h+var_9960]
 * 00000001800AB2B2: mov     dword ptr [rbp+9E40h+var_8220], 5
 * 00000001800AB2BC: mov     dword ptr [rbp+9E40h+var_8220+4], esi
 * 00000001800AB2C2: movups  xmm6, [rbp+9E40h+var_8220]
 * 00000001800AB2C9: call    sub_1800A5ED4
 * 00000001800AB2CE: mov     r8, rax
 * 00000001800AB2D1: mov     r9d, r12d
 * 00000001800AB2D4: mov     edx, 132h
 * 00000001800AB2D9: lea     rcx, [rbp+9E40h+var_410]
 * 00000001800AB2E0: call    sub_1800737C8
 * 00000001800AB2E5: nop
 * 00000001800AB2E6: mov     r8, rax
 * 00000001800AB2E9: mov     rdx, r13
 * 00000001800AB2EC: lea     rcx, [rbp+9E40h+var_470]
 * 00000001800AB2F3: call    sub_18001B678
 * 00000001800AB2F8: nop
 * 00000001800AB2F9: lea     r8, aPixel; "/Pixel"
 * 00000001800AB300: mov     rdx, rax
 * 00000001800AB303: lea     rcx, [rbp+9E40h+var_5ED0]
 * 00000001800AB30A: call    sub_18001B5A8
 * 00000001800AB30F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB314: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB319: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB31E: mov     rcx, rax
 * 00000001800AB321: call    sub_18007386C
 * 00000001800AB326: nop
 * 00000001800AB327: lea     rcx, [rbp+9E40h+var_470]
 * 00000001800AB32E: call    sub_180011020
 * 00000001800AB333: nop
 * 00000001800AB334: lea     rcx, [rbp+9E40h+var_410]
 * 00000001800AB33B: call    sub_180011020
 * 00000001800AB340: nop
 * 00000001800AB341: lea     rcx, dword_1801CA398
 * 00000001800AB348: call    _Init_thread_footer
 * 00000001800AB34D: mov     rax, [rdi+rbx*8]
 * 00000001800AB351: mov     eax, [r15+rax]
 * 00000001800AB355: cmp     cs:dword_1801CA39C, eax
 * 00000001800AB35B: jle     loc_1800AB438
 * 00000001800AB361: lea     rcx, dword_1801CA39C
 * 00000001800AB368: call    sub_18000CA40
 * 00000001800AB36D: cmp     cs:dword_1801CA39C, r14d
 * 00000001800AB374: jnz     loc_1800AB438
 * 00000001800AB37A: lea     rax, unk_1801526C0
 * 00000001800AB381: mov     qword ptr [rbp+9E40h+var_9950], rax
 * 00000001800AB388: lea     rax, unk_18015917C
 * 00000001800AB38F: mov     qword ptr [rbp+9E40h+var_9950+8], rax
 * 00000001800AB396: movups  xmm7, [rbp+9E40h+var_9950]
 * 00000001800AB39D: mov     dword ptr [rbp+9E40h+var_8200], 5
 * 00000001800AB3A7: mov     dword ptr [rbp+9E40h+var_8200+4], esi
 * 00000001800AB3AD: movups  xmm6, [rbp+9E40h+var_8200]
 * 00000001800AB3B4: call    sub_1800A5ED4
 * 00000001800AB3B9: mov     r8, rax
 * 00000001800AB3BC: mov     r9d, r12d
 * 00000001800AB3BF: mov     edx, 138h
 * 00000001800AB3C4: lea     rcx, [rbp+9E40h+var_2F0]
 * 00000001800AB3CB: call    sub_1800737C8
 * 00000001800AB3D0: nop
 * 00000001800AB3D1: mov     r8, rax
 * 00000001800AB3D4: mov     rdx, r13
 * 00000001800AB3D7: lea     rcx, [rbp+9E40h+var_350]
 * 00000001800AB3DE: call    sub_18001B678
 * 00000001800AB3E3: nop
 * 00000001800AB3E4: lea     r8, aPixel; "/Pixel"
 * 00000001800AB3EB: mov     rdx, rax
 * 00000001800AB3EE: lea     rcx, [rbp+9E40h+var_5EB0]
 * 00000001800AB3F5: call    sub_18001B5A8
 * 00000001800AB3FA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB3FF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB404: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB409: mov     rcx, rax
 * 00000001800AB40C: call    sub_18007386C
 * 00000001800AB411: nop
 * 00000001800AB412: lea     rcx, [rbp+9E40h+var_350]
 * 00000001800AB419: call    sub_180011020
 * 00000001800AB41E: nop
 * 00000001800AB41F: lea     rcx, [rbp+9E40h+var_2F0]
 * 00000001800AB426: call    sub_180011020
 * 00000001800AB42B: nop
 * 00000001800AB42C: lea     rcx, dword_1801CA39C
 * 00000001800AB433: call    _Init_thread_footer
 * 00000001800AB438: mov     rax, [rdi+rbx*8]
 * 00000001800AB43C: mov     eax, [r15+rax]
 * 00000001800AB440: cmp     cs:dword_1801CA3A0, eax
 * 00000001800AB446: jle     loc_1800AB523
 * 00000001800AB44C: lea     rcx, dword_1801CA3A0
 * 00000001800AB453: call    sub_18000CA40
 * 00000001800AB458: cmp     cs:dword_1801CA3A0, r14d
 * 00000001800AB45F: jnz     loc_1800AB523
 * 00000001800AB465: lea     rax, unk_1801526C0
 * 00000001800AB46C: mov     qword ptr [rbp+9E40h+var_9940], rax
 * 00000001800AB473: lea     rax, unk_18015917C
 * 00000001800AB47A: mov     qword ptr [rbp+9E40h+var_9940+8], rax
 * 00000001800AB481: movups  xmm7, [rbp+9E40h+var_9940]
 * 00000001800AB488: mov     dword ptr [rbp+9E40h+var_81E0], 5
 * 00000001800AB492: mov     dword ptr [rbp+9E40h+var_81E0+4], esi
 * 00000001800AB498: movups  xmm6, [rbp+9E40h+var_81E0]
 * 00000001800AB49F: call    sub_1800A5ED4
 * 00000001800AB4A4: mov     r8, rax
 * 00000001800AB4A7: mov     r9d, r12d
 * 00000001800AB4AA: mov     edx, 13Ah
 * 00000001800AB4AF: lea     rcx, [rbp+9E40h+var_1D0]
 * 00000001800AB4B6: call    sub_1800737C8
 * 00000001800AB4BB: nop
 * 00000001800AB4BC: mov     r8, rax
 * 00000001800AB4BF: mov     rdx, r13
 * 00000001800AB4C2: lea     rcx, [rbp+9E40h+var_230]
 * 00000001800AB4C9: call    sub_18001B678
 * 00000001800AB4CE: nop
 * 00000001800AB4CF: lea     r8, aPixel; "/Pixel"
 * 00000001800AB4D6: mov     rdx, rax
 * 00000001800AB4D9: lea     rcx, [rbp+9E40h+var_5E90]
 * 00000001800AB4E0: call    sub_18001B5A8
 * 00000001800AB4E5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB4EA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB4EF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB4F4: mov     rcx, rax
 * 00000001800AB4F7: call    sub_18007386C
 * 00000001800AB4FC: nop
 * 00000001800AB4FD: lea     rcx, [rbp+9E40h+var_230]
 * 00000001800AB504: call    sub_180011020
 * 00000001800AB509: nop
 * 00000001800AB50A: lea     rcx, [rbp+9E40h+var_1D0]
 * 00000001800AB511: call    sub_180011020
 * 00000001800AB516: nop
 * 00000001800AB517: lea     rcx, dword_1801CA3A0
 * 00000001800AB51E: call    _Init_thread_footer
 * 00000001800AB523: mov     rax, [rdi+rbx*8]
 * 00000001800AB527: mov     eax, [r15+rax]
 * 00000001800AB52B: cmp     cs:dword_1801CA3A4, eax
 * 00000001800AB531: jle     loc_1800AB60E
 * 00000001800AB537: lea     rcx, dword_1801CA3A4
 * 00000001800AB53E: call    sub_18000CA40
 * 00000001800AB543: cmp     cs:dword_1801CA3A4, r14d
 * 00000001800AB54A: jnz     loc_1800AB60E
 * 00000001800AB550: lea     rax, unk_180177460
 * 00000001800AB557: mov     qword ptr [rbp+9E40h+var_9930], rax
 * 00000001800AB55E: lea     rax, unk_18017DB8C
 * 00000001800AB565: mov     qword ptr [rbp+9E40h+var_9930+8], rax
 * 00000001800AB56C: movups  xmm7, [rbp+9E40h+var_9930]
 * 00000001800AB573: mov     dword ptr [rbp+9E40h+var_81C0], 5
 * 00000001800AB57D: mov     dword ptr [rbp+9E40h+var_81C0+4], esi
 * 00000001800AB583: movups  xmm6, [rbp+9E40h+var_81C0]
 * 00000001800AB58A: call    sub_1800A5ED4
 * 00000001800AB58F: mov     r8, rax
 * 00000001800AB592: mov     r9d, r12d
 * 00000001800AB595: mov     edx, 140h
 * 00000001800AB59A: lea     rcx, [rbp+9E40h+var_B0]
 * 00000001800AB5A1: call    sub_1800737C8
 * 00000001800AB5A6: nop
 * 00000001800AB5A7: mov     r8, rax
 * 00000001800AB5AA: mov     rdx, r13
 * 00000001800AB5AD: lea     rcx, [rbp+9E40h+var_110]
 * 00000001800AB5B4: call    sub_18001B678
 * 00000001800AB5B9: nop
 * 00000001800AB5BA: lea     r8, aPixel; "/Pixel"
 * 00000001800AB5C1: mov     rdx, rax
 * 00000001800AB5C4: lea     rcx, [rbp+9E40h+var_5E70]
 * 00000001800AB5CB: call    sub_18001B5A8
 * 00000001800AB5D0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB5D5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB5DA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB5DF: mov     rcx, rax
 * 00000001800AB5E2: call    sub_18007386C
 * 00000001800AB5E7: nop
 * 00000001800AB5E8: lea     rcx, [rbp+9E40h+var_110]
 * 00000001800AB5EF: call    sub_180011020
 * 00000001800AB5F4: nop
 * 00000001800AB5F5: lea     rcx, [rbp+9E40h+var_B0]
 * 00000001800AB5FC: call    sub_180011020
 * 00000001800AB601: nop
 * 00000001800AB602: lea     rcx, dword_1801CA3A4
 * 00000001800AB609: call    _Init_thread_footer
 * 00000001800AB60E: mov     rax, [rdi+rbx*8]
 * 00000001800AB612: mov     eax, [r15+rax]
 * 00000001800AB616: cmp     cs:dword_1801CA3A8, eax
 * 00000001800AB61C: jle     loc_1800AB6F9
 * 00000001800AB622: lea     rcx, dword_1801CA3A8
 * 00000001800AB629: call    sub_18000CA40
 * 00000001800AB62E: cmp     cs:dword_1801CA3A8, r14d
 * 00000001800AB635: jnz     loc_1800AB6F9
 * 00000001800AB63B: lea     rax, unk_180177460
 * 00000001800AB642: mov     qword ptr [rbp+9E40h+var_9920], rax
 * 00000001800AB649: lea     rax, unk_18017DB8C
 * 00000001800AB650: mov     qword ptr [rbp+9E40h+var_9920+8], rax
 * 00000001800AB657: movups  xmm7, [rbp+9E40h+var_9920]
 * 00000001800AB65E: mov     dword ptr [rbp+9E40h+var_81A0], 5
 * 00000001800AB668: mov     dword ptr [rbp+9E40h+var_81A0+4], esi
 * 00000001800AB66E: movups  xmm6, [rbp+9E40h+var_81A0]
 * 00000001800AB675: call    sub_1800A5ED4
 * 00000001800AB67A: mov     r8, rax
 * 00000001800AB67D: mov     r9d, r12d
 * 00000001800AB680: mov     edx, 142h
 * 00000001800AB685: lea     rcx, [rbp+9E40h+var_4690]
 * 00000001800AB68C: call    sub_1800737C8
 * 00000001800AB691: nop
 * 00000001800AB692: mov     r8, rax
 * 00000001800AB695: mov     rdx, r13
 * 00000001800AB698: lea     rcx, [rbp+9E40h+var_46B0]
 * 00000001800AB69F: call    sub_18001B678
 * 00000001800AB6A4: nop
 * 00000001800AB6A5: lea     r8, aPixel; "/Pixel"
 * 00000001800AB6AC: mov     rdx, rax
 * 00000001800AB6AF: lea     rcx, [rbp+9E40h+var_5E50]
 * 00000001800AB6B6: call    sub_18001B5A8
 * 00000001800AB6BB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB6C0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB6C5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB6CA: mov     rcx, rax
 * 00000001800AB6CD: call    sub_18007386C
 * 00000001800AB6D2: nop
 * 00000001800AB6D3: lea     rcx, [rbp+9E40h+var_46B0]
 * 00000001800AB6DA: call    sub_180011020
 * 00000001800AB6DF: nop
 * 00000001800AB6E0: lea     rcx, [rbp+9E40h+var_4690]
 * 00000001800AB6E7: call    sub_180011020
 * 00000001800AB6EC: nop
 * 00000001800AB6ED: lea     rcx, dword_1801CA3A8
 * 00000001800AB6F4: call    _Init_thread_footer
 * 00000001800AB6F9: mov     rax, [rdi+rbx*8]
 * 00000001800AB6FD: mov     eax, [r15+rax]
 * 00000001800AB701: cmp     cs:dword_1801CA3AC, eax
 * 00000001800AB707: jle     loc_1800AB7E4
 * 00000001800AB70D: lea     rcx, dword_1801CA3AC
 * 00000001800AB714: call    sub_18000CA40
 * 00000001800AB719: cmp     cs:dword_1801CA3AC, r14d
 * 00000001800AB720: jnz     loc_1800AB7E4
 * 00000001800AB726: lea     rax, unk_180148920
 * 00000001800AB72D: mov     qword ptr [rbp+9E40h+var_9910], rax
 * 00000001800AB734: lea     rax, unk_18014F1DC
 * 00000001800AB73B: mov     qword ptr [rbp+9E40h+var_9910+8], rax
 * 00000001800AB742: movups  xmm7, [rbp+9E40h+var_9910]
 * 00000001800AB749: mov     dword ptr [rbp+9E40h+var_8180], 5
 * 00000001800AB753: mov     dword ptr [rbp+9E40h+var_8180+4], esi
 * 00000001800AB759: movups  xmm6, [rbp+9E40h+var_8180]
 * 00000001800AB760: call    sub_1800A5ED4
 * 00000001800AB765: mov     r8, rax
 * 00000001800AB768: mov     r9d, r12d
 * 00000001800AB76B: mov     edx, 148h
 * 00000001800AB770: lea     rcx, [rbp+9E40h+var_4630]
 * 00000001800AB777: call    sub_1800737C8
 * 00000001800AB77C: nop
 * 00000001800AB77D: mov     r8, rax
 * 00000001800AB780: mov     rdx, r13
 * 00000001800AB783: lea     rcx, [rbp+9E40h+var_4650]
 * 00000001800AB78A: call    sub_18001B678
 * 00000001800AB78F: nop
 * 00000001800AB790: lea     r8, aPixel; "/Pixel"
 * 00000001800AB797: mov     rdx, rax
 * 00000001800AB79A: lea     rcx, [rbp+9E40h+var_5E30]
 * 00000001800AB7A1: call    sub_18001B5A8
 * 00000001800AB7A6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB7AB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB7B0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB7B5: mov     rcx, rax
 * 00000001800AB7B8: call    sub_18007386C
 * 00000001800AB7BD: nop
 * 00000001800AB7BE: lea     rcx, [rbp+9E40h+var_4650]
 * 00000001800AB7C5: call    sub_180011020
 * 00000001800AB7CA: nop
 * 00000001800AB7CB: lea     rcx, [rbp+9E40h+var_4630]
 * 00000001800AB7D2: call    sub_180011020
 * 00000001800AB7D7: nop
 * 00000001800AB7D8: lea     rcx, dword_1801CA3AC
 * 00000001800AB7DF: call    _Init_thread_footer
 * 00000001800AB7E4: mov     rax, [rdi+rbx*8]
 * 00000001800AB7E8: mov     eax, [r15+rax]
 * 00000001800AB7EC: cmp     cs:dword_1801CA3B0, eax
 * 00000001800AB7F2: jle     loc_1800AB8CF
 * 00000001800AB7F8: lea     rcx, dword_1801CA3B0
 * 00000001800AB7FF: call    sub_18000CA40
 * 00000001800AB804: cmp     cs:dword_1801CA3B0, r14d
 * 00000001800AB80B: jnz     loc_1800AB8CF
 * 00000001800AB811: lea     rax, unk_180148920
 * 00000001800AB818: mov     qword ptr [rbp+9E40h+var_9900], rax
 * 00000001800AB81F: lea     rax, unk_18014F1DC
 * 00000001800AB826: mov     qword ptr [rbp+9E40h+var_9900+8], rax
 * 00000001800AB82D: movups  xmm7, [rbp+9E40h+var_9900]
 * 00000001800AB834: mov     dword ptr [rbp+9E40h+var_8160], 5
 * 00000001800AB83E: mov     dword ptr [rbp+9E40h+var_8160+4], esi
 * 00000001800AB844: movups  xmm6, [rbp+9E40h+var_8160]
 * 00000001800AB84B: call    sub_1800A5ED4
 * 00000001800AB850: mov     r8, rax
 * 00000001800AB853: mov     r9d, r12d
 * 00000001800AB856: mov     edx, 14Ah
 * 00000001800AB85B: lea     rcx, [rbp+9E40h+var_45D0]
 * 00000001800AB862: call    sub_1800737C8
 * 00000001800AB867: nop
 * 00000001800AB868: mov     r8, rax
 * 00000001800AB86B: mov     rdx, r13
 * 00000001800AB86E: lea     rcx, [rbp+9E40h+var_45F0]
 * 00000001800AB875: call    sub_18001B678
 * 00000001800AB87A: nop
 * 00000001800AB87B: lea     r8, aPixel; "/Pixel"
 * 00000001800AB882: mov     rdx, rax
 * 00000001800AB885: lea     rcx, [rbp+9E40h+var_5E10]
 * 00000001800AB88C: call    sub_18001B5A8
 * 00000001800AB891: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB896: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB89B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB8A0: mov     rcx, rax
 * 00000001800AB8A3: call    sub_18007386C
 * 00000001800AB8A8: nop
 * 00000001800AB8A9: lea     rcx, [rbp+9E40h+var_45F0]
 * 00000001800AB8B0: call    sub_180011020
 * 00000001800AB8B5: nop
 * 00000001800AB8B6: lea     rcx, [rbp+9E40h+var_45D0]
 * 00000001800AB8BD: call    sub_180011020
 * 00000001800AB8C2: nop
 * 00000001800AB8C3: lea     rcx, dword_1801CA3B0
 * 00000001800AB8CA: call    _Init_thread_footer
 * 00000001800AB8CF: mov     rax, [rdi+rbx*8]
 * 00000001800AB8D3: mov     eax, [r15+rax]
 * 00000001800AB8D7: cmp     cs:dword_1801CA3B4, eax
 * 00000001800AB8DD: jle     loc_1800AB9BA
 * 00000001800AB8E3: lea     rcx, dword_1801CA3B4
 * 00000001800AB8EA: call    sub_18000CA40
 * 00000001800AB8EF: cmp     cs:dword_1801CA3B4, r14d
 * 00000001800AB8F6: jnz     loc_1800AB9BA
 * 00000001800AB8FC: lea     rax, unk_180159180
 * 00000001800AB903: mov     qword ptr [rbp+9E40h+var_98F0], rax
 * 00000001800AB90A: lea     rax, unk_18015FA88
 * 00000001800AB911: mov     qword ptr [rbp+9E40h+var_98F0+8], rax
 * 00000001800AB918: movups  xmm7, [rbp+9E40h+var_98F0]
 * 00000001800AB91F: mov     dword ptr [rbp+9E40h+var_8140], 5
 * 00000001800AB929: mov     dword ptr [rbp+9E40h+var_8140+4], esi
 * 00000001800AB92F: movups  xmm6, [rbp+9E40h+var_8140]
 * 00000001800AB936: call    sub_1800A5ED4
 * 00000001800AB93B: mov     r8, rax
 * 00000001800AB93E: mov     r9d, r12d
 * 00000001800AB941: mov     edx, 150h
 * 00000001800AB946: lea     rcx, [rbp+9E40h+var_4570]
 * 00000001800AB94D: call    sub_1800737C8
 * 00000001800AB952: nop
 * 00000001800AB953: mov     r8, rax
 * 00000001800AB956: mov     rdx, r13
 * 00000001800AB959: lea     rcx, [rbp+9E40h+var_4590]
 * 00000001800AB960: call    sub_18001B678
 * 00000001800AB965: nop
 * 00000001800AB966: lea     r8, aPixel; "/Pixel"
 * 00000001800AB96D: mov     rdx, rax
 * 00000001800AB970: lea     rcx, [rbp+9E40h+var_5DF0]
 * 00000001800AB977: call    sub_18001B5A8
 * 00000001800AB97C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB981: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB986: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB98B: mov     rcx, rax
 * 00000001800AB98E: call    sub_18007386C
 * 00000001800AB993: nop
 * 00000001800AB994: lea     rcx, [rbp+9E40h+var_4590]
 * 00000001800AB99B: call    sub_180011020
 * 00000001800AB9A0: nop
 * 00000001800AB9A1: lea     rcx, [rbp+9E40h+var_4570]
 * 00000001800AB9A8: call    sub_180011020
 * 00000001800AB9AD: nop
 * 00000001800AB9AE: lea     rcx, dword_1801CA3B4
 * 00000001800AB9B5: call    _Init_thread_footer
 * 00000001800AB9BA: mov     rax, [rdi+rbx*8]
 * 00000001800AB9BE: mov     eax, [r15+rax]
 * 00000001800AB9C2: cmp     cs:dword_1801CA3B8, eax
 * 00000001800AB9C8: jle     loc_1800ABAA5
 * 00000001800AB9CE: lea     rcx, dword_1801CA3B8
 * 00000001800AB9D5: call    sub_18000CA40
 * 00000001800AB9DA: cmp     cs:dword_1801CA3B8, r14d
 * 00000001800AB9E1: jnz     loc_1800ABAA5
 * 00000001800AB9E7: lea     rax, unk_180159180
 * 00000001800AB9EE: mov     qword ptr [rbp+9E40h+var_98E0], rax
 * 00000001800AB9F5: lea     rax, unk_18015FA88
 * 00000001800AB9FC: mov     qword ptr [rbp+9E40h+var_98E0+8], rax
 * 00000001800ABA03: movups  xmm7, [rbp+9E40h+var_98E0]
 * 00000001800ABA0A: mov     dword ptr [rbp+9E40h+var_8120], 5
 * 00000001800ABA14: mov     dword ptr [rbp+9E40h+var_8120+4], esi
 * 00000001800ABA1A: movups  xmm6, [rbp+9E40h+var_8120]
 * 00000001800ABA21: call    sub_1800A5ED4
 * 00000001800ABA26: mov     r8, rax
 * 00000001800ABA29: mov     r9d, r12d
 * 00000001800ABA2C: mov     edx, 152h
 * 00000001800ABA31: lea     rcx, [rbp+9E40h+var_4510]
 * 00000001800ABA38: call    sub_1800737C8
 * 00000001800ABA3D: nop
 * 00000001800ABA3E: mov     r8, rax
 * 00000001800ABA41: mov     rdx, r13
 * 00000001800ABA44: lea     rcx, [rbp+9E40h+var_4530]
 * 00000001800ABA4B: call    sub_18001B678
 * 00000001800ABA50: nop
 * 00000001800ABA51: lea     r8, aPixel; "/Pixel"
 * 00000001800ABA58: mov     rdx, rax
 * 00000001800ABA5B: lea     rcx, [rbp+9E40h+var_5DD0]
 * 00000001800ABA62: call    sub_18001B5A8
 * 00000001800ABA67: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABA6C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABA71: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABA76: mov     rcx, rax
 * 00000001800ABA79: call    sub_18007386C
 * 00000001800ABA7E: nop
 * 00000001800ABA7F: lea     rcx, [rbp+9E40h+var_4530]
 * 00000001800ABA86: call    sub_180011020
 * 00000001800ABA8B: nop
 * 00000001800ABA8C: lea     rcx, [rbp+9E40h+var_4510]
 * 00000001800ABA93: call    sub_180011020
 * 00000001800ABA98: nop
 * 00000001800ABA99: lea     rcx, dword_1801CA3B8
 * 00000001800ABAA0: call    _Init_thread_footer
 * 00000001800ABAA5: mov     rax, [rdi+rbx*8]
 * 00000001800ABAA9: mov     eax, [r15+rax]
 * 00000001800ABAAD: cmp     cs:dword_1801CA3BC, eax
 * 00000001800ABAB3: jle     loc_1800ABB90
 * 00000001800ABAB9: lea     rcx, dword_1801CA3BC
 * 00000001800ABAC0: call    sub_18000CA40
 * 00000001800ABAC5: cmp     cs:dword_1801CA3BC, r14d
 * 00000001800ABACC: jnz     loc_1800ABB90
 * 00000001800ABAD2: lea     rax, unk_1801526C0
 * 00000001800ABAD9: mov     qword ptr [rbp+9E40h+var_98D0], rax
 * 00000001800ABAE0: lea     rax, unk_18015917C
 * 00000001800ABAE7: mov     qword ptr [rbp+9E40h+var_98D0+8], rax
 * 00000001800ABAEE: movups  xmm7, [rbp+9E40h+var_98D0]
 * 00000001800ABAF5: mov     dword ptr [rbp+9E40h+var_8100], 5
 * 00000001800ABAFF: mov     dword ptr [rbp+9E40h+var_8100+4], esi
 * 00000001800ABB05: movups  xmm6, [rbp+9E40h+var_8100]
 * 00000001800ABB0C: call    sub_1800A5ED4
 * 00000001800ABB11: mov     r8, rax
 * 00000001800ABB14: mov     r9d, r12d
 * 00000001800ABB17: mov     edx, 158h
 * 00000001800ABB1C: lea     rcx, [rbp+9E40h+var_44B0]
 * 00000001800ABB23: call    sub_1800737C8
 * 00000001800ABB28: nop
 * 00000001800ABB29: mov     r8, rax
 * 00000001800ABB2C: mov     rdx, r13
 * 00000001800ABB2F: lea     rcx, [rbp+9E40h+var_44D0]
 * 00000001800ABB36: call    sub_18001B678
 * 00000001800ABB3B: nop
 * 00000001800ABB3C: lea     r8, aPixel; "/Pixel"
 * 00000001800ABB43: mov     rdx, rax
 * 00000001800ABB46: lea     rcx, [rbp+9E40h+var_5DB0]
 * 00000001800ABB4D: call    sub_18001B5A8
 * 00000001800ABB52: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABB57: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABB5C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABB61: mov     rcx, rax
 * 00000001800ABB64: call    sub_18007386C
 * 00000001800ABB69: nop
 * 00000001800ABB6A: lea     rcx, [rbp+9E40h+var_44D0]
 * 00000001800ABB71: call    sub_180011020
 * 00000001800ABB76: nop
 * 00000001800ABB77: lea     rcx, [rbp+9E40h+var_44B0]
 * 00000001800ABB7E: call    sub_180011020
 * 00000001800ABB83: nop
 * 00000001800ABB84: lea     rcx, dword_1801CA3BC
 * 00000001800ABB8B: call    _Init_thread_footer
 * 00000001800ABB90: mov     rax, [rdi+rbx*8]
 * 00000001800ABB94: mov     eax, [r15+rax]
 * 00000001800ABB98: cmp     cs:dword_1801CA3C0, eax
 * 00000001800ABB9E: jle     loc_1800ABC7B
 * 00000001800ABBA4: lea     rcx, dword_1801CA3C0
 * 00000001800ABBAB: call    sub_18000CA40
 * 00000001800ABBB0: cmp     cs:dword_1801CA3C0, r14d
 * 00000001800ABBB7: jnz     loc_1800ABC7B
 * 00000001800ABBBD: lea     rax, unk_1801526C0
 * 00000001800ABBC4: mov     qword ptr [rbp+9E40h+var_98C0], rax
 * 00000001800ABBCB: lea     rax, unk_18015917C
 * 00000001800ABBD2: mov     qword ptr [rbp+9E40h+var_98C0+8], rax
 * 00000001800ABBD9: movups  xmm7, [rbp+9E40h+var_98C0]
 * 00000001800ABBE0: mov     dword ptr [rbp+9E40h+var_80E0], 5
 * 00000001800ABBEA: mov     dword ptr [rbp+9E40h+var_80E0+4], esi
 * 00000001800ABBF0: movups  xmm6, [rbp+9E40h+var_80E0]
 * 00000001800ABBF7: call    sub_1800A5ED4
 * 00000001800ABBFC: mov     r8, rax
 * 00000001800ABBFF: mov     r9d, r12d
 * 00000001800ABC02: mov     edx, 15Ah
 * 00000001800ABC07: lea     rcx, [rbp+9E40h+var_4450]
 * 00000001800ABC0E: call    sub_1800737C8
 * 00000001800ABC13: nop
 * 00000001800ABC14: mov     r8, rax
 * 00000001800ABC17: mov     rdx, r13
 * 00000001800ABC1A: lea     rcx, [rbp+9E40h+var_4470]
 * 00000001800ABC21: call    sub_18001B678
 * 00000001800ABC26: nop
 * 00000001800ABC27: lea     r8, aPixel; "/Pixel"
 * 00000001800ABC2E: mov     rdx, rax
 * 00000001800ABC31: lea     rcx, [rbp+9E40h+var_5D90]
 * 00000001800ABC38: call    sub_18001B5A8
 * 00000001800ABC3D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABC42: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABC47: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABC4C: mov     rcx, rax
 * 00000001800ABC4F: call    sub_18007386C
 * 00000001800ABC54: nop
 * 00000001800ABC55: lea     rcx, [rbp+9E40h+var_4470]
 * 00000001800ABC5C: call    sub_180011020
 * 00000001800ABC61: nop
 * 00000001800ABC62: lea     rcx, [rbp+9E40h+var_4450]
 * 00000001800ABC69: call    sub_180011020
 * 00000001800ABC6E: nop
 * 00000001800ABC6F: lea     rcx, dword_1801CA3C0
 * 00000001800ABC76: call    _Init_thread_footer
 * 00000001800ABC7B: mov     rax, [rdi+rbx*8]
 * 00000001800ABC7F: mov     eax, [r15+rax]
 * 00000001800ABC83: cmp     cs:dword_1801CA3C4, eax
 * 00000001800ABC89: jle     loc_1800ABD66
 * 00000001800ABC8F: lea     rcx, dword_1801CA3C4
 * 00000001800ABC96: call    sub_18000CA40
 * 00000001800ABC9B: cmp     cs:dword_1801CA3C4, r14d
 * 00000001800ABCA2: jnz     loc_1800ABD66
 * 00000001800ABCA8: lea     rax, unk_180177460
 * 00000001800ABCAF: mov     qword ptr [rbp+9E40h+var_98B0], rax
 * 00000001800ABCB6: lea     rax, unk_18017DB8C
 * 00000001800ABCBD: mov     qword ptr [rbp+9E40h+var_98B0+8], rax
 * 00000001800ABCC4: movups  xmm7, [rbp+9E40h+var_98B0]
 * 00000001800ABCCB: mov     dword ptr [rbp+9E40h+var_80C0], 5
 * 00000001800ABCD5: mov     dword ptr [rbp+9E40h+var_80C0+4], esi
 * 00000001800ABCDB: movups  xmm6, [rbp+9E40h+var_80C0]
 * 00000001800ABCE2: call    sub_1800A5ED4
 * 00000001800ABCE7: mov     r8, rax
 * 00000001800ABCEA: mov     r9d, r12d
 * 00000001800ABCED: mov     edx, 160h
 * 00000001800ABCF2: lea     rcx, [rbp+9E40h+var_43F0]
 * 00000001800ABCF9: call    sub_1800737C8
 * 00000001800ABCFE: nop
 * 00000001800ABCFF: mov     r8, rax
 * 00000001800ABD02: mov     rdx, r13
 * 00000001800ABD05: lea     rcx, [rbp+9E40h+var_4410]
 * 00000001800ABD0C: call    sub_18001B678
 * 00000001800ABD11: nop
 * 00000001800ABD12: lea     r8, aPixel; "/Pixel"
 * 00000001800ABD19: mov     rdx, rax
 * 00000001800ABD1C: lea     rcx, [rbp+9E40h+var_5D70]
 * 00000001800ABD23: call    sub_18001B5A8
 * 00000001800ABD28: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABD2D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABD32: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABD37: mov     rcx, rax
 * 00000001800ABD3A: call    sub_18007386C
 * 00000001800ABD3F: nop
 * 00000001800ABD40: lea     rcx, [rbp+9E40h+var_4410]
 * 00000001800ABD47: call    sub_180011020
 * 00000001800ABD4C: nop
 * 00000001800ABD4D: lea     rcx, [rbp+9E40h+var_43F0]
 * 00000001800ABD54: call    sub_180011020
 * 00000001800ABD59: nop
 * 00000001800ABD5A: lea     rcx, dword_1801CA3C4
 * 00000001800ABD61: call    _Init_thread_footer
 * 00000001800ABD66: mov     rax, [rdi+rbx*8]
 * 00000001800ABD6A: mov     eax, [r15+rax]
 * 00000001800ABD6E: cmp     cs:dword_1801CA3C8, eax
 * 00000001800ABD74: jle     loc_1800ABE51
 * 00000001800ABD7A: lea     rcx, dword_1801CA3C8
 * 00000001800ABD81: call    sub_18000CA40
 * 00000001800ABD86: cmp     cs:dword_1801CA3C8, r14d
 * 00000001800ABD8D: jnz     loc_1800ABE51
 * 00000001800ABD93: lea     rax, unk_180177460
 * 00000001800ABD9A: mov     qword ptr [rbp+9E40h+var_98A0], rax
 * 00000001800ABDA1: lea     rax, unk_18017DB8C
 * 00000001800ABDA8: mov     qword ptr [rbp+9E40h+var_98A0+8], rax
 * 00000001800ABDAF: movups  xmm7, [rbp+9E40h+var_98A0]
 * 00000001800ABDB6: mov     dword ptr [rbp+9E40h+var_80A0], 5
 * 00000001800ABDC0: mov     dword ptr [rbp+9E40h+var_80A0+4], esi
 * 00000001800ABDC6: movups  xmm6, [rbp+9E40h+var_80A0]
 * 00000001800ABDCD: call    sub_1800A5ED4
 * 00000001800ABDD2: mov     r8, rax
 * 00000001800ABDD5: mov     r9d, r12d
 * 00000001800ABDD8: mov     edx, 162h
 * 00000001800ABDDD: lea     rcx, [rbp+9E40h+var_4390]
 * 00000001800ABDE4: call    sub_1800737C8
 * 00000001800ABDE9: nop
 * 00000001800ABDEA: mov     r8, rax
 * 00000001800ABDED: mov     rdx, r13
 * 00000001800ABDF0: lea     rcx, [rbp+9E40h+var_43B0]
 * 00000001800ABDF7: call    sub_18001B678
 * 00000001800ABDFC: nop
 * 00000001800ABDFD: lea     r8, aPixel; "/Pixel"
 * 00000001800ABE04: mov     rdx, rax
 * 00000001800ABE07: lea     rcx, [rbp+9E40h+var_5D50]
 * 00000001800ABE0E: call    sub_18001B5A8
 * 00000001800ABE13: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABE18: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABE1D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABE22: mov     rcx, rax
 * 00000001800ABE25: call    sub_18007386C
 * 00000001800ABE2A: nop
 * 00000001800ABE2B: lea     rcx, [rbp+9E40h+var_43B0]
 * 00000001800ABE32: call    sub_180011020
 * 00000001800ABE37: nop
 * 00000001800ABE38: lea     rcx, [rbp+9E40h+var_4390]
 * 00000001800ABE3F: call    sub_180011020
 * 00000001800ABE44: nop
 * 00000001800ABE45: lea     rcx, dword_1801CA3C8
 * 00000001800ABE4C: call    _Init_thread_footer
 * 00000001800ABE51: mov     rax, [rdi+rbx*8]
 * 00000001800ABE55: mov     eax, [r15+rax]
 * 00000001800ABE59: cmp     cs:dword_1801CA3CC, eax
 * 00000001800ABE5F: jle     loc_1800ABF3C
 * 00000001800ABE65: lea     rcx, dword_1801CA3CC
 * 00000001800ABE6C: call    sub_18000CA40
 * 00000001800ABE71: cmp     cs:dword_1801CA3CC, r14d
 * 00000001800ABE78: jnz     loc_1800ABF3C
 * 00000001800ABE7E: lea     rax, unk_180148920
 * 00000001800ABE85: mov     qword ptr [rbp+9E40h+var_9890], rax
 * 00000001800ABE8C: lea     rax, unk_18014F1DC
 * 00000001800ABE93: mov     qword ptr [rbp+9E40h+var_9890+8], rax
 * 00000001800ABE9A: movups  xmm7, [rbp+9E40h+var_9890]
 * 00000001800ABEA1: mov     dword ptr [rbp+9E40h+var_8080], 5
 * 00000001800ABEAB: mov     dword ptr [rbp+9E40h+var_8080+4], esi
 * 00000001800ABEB1: movups  xmm6, [rbp+9E40h+var_8080]
 * 00000001800ABEB8: call    sub_1800A5ED4
 * 00000001800ABEBD: mov     r8, rax
 * 00000001800ABEC0: mov     r9d, r12d
 * 00000001800ABEC3: mov     edx, 168h
 * 00000001800ABEC8: lea     rcx, [rbp+9E40h+var_4330]
 * 00000001800ABECF: call    sub_1800737C8
 * 00000001800ABED4: nop
 * 00000001800ABED5: mov     r8, rax
 * 00000001800ABED8: mov     rdx, r13
 * 00000001800ABEDB: lea     rcx, [rbp+9E40h+var_4350]
 * 00000001800ABEE2: call    sub_18001B678
 * 00000001800ABEE7: nop
 * 00000001800ABEE8: lea     r8, aPixel; "/Pixel"
 * 00000001800ABEEF: mov     rdx, rax
 * 00000001800ABEF2: lea     rcx, [rbp+9E40h+var_5D30]
 * 00000001800ABEF9: call    sub_18001B5A8
 * 00000001800ABEFE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABF03: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABF08: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABF0D: mov     rcx, rax
 * 00000001800ABF10: call    sub_18007386C
 * 00000001800ABF15: nop
 * 00000001800ABF16: lea     rcx, [rbp+9E40h+var_4350]
 * 00000001800ABF1D: call    sub_180011020
 * 00000001800ABF22: nop
 * 00000001800ABF23: lea     rcx, [rbp+9E40h+var_4330]
 * 00000001800ABF2A: call    sub_180011020
 * 00000001800ABF2F: nop
 * 00000001800ABF30: lea     rcx, dword_1801CA3CC
 * 00000001800ABF37: call    _Init_thread_footer
 * 00000001800ABF3C: mov     rax, [rdi+rbx*8]
 * 00000001800ABF40: mov     eax, [r15+rax]
 * 00000001800ABF44: cmp     cs:dword_1801CA3D0, eax
 * 00000001800ABF4A: jle     loc_1800AC027
 * 00000001800ABF50: lea     rcx, dword_1801CA3D0
 * 00000001800ABF57: call    sub_18000CA40
 * 00000001800ABF5C: cmp     cs:dword_1801CA3D0, r14d
 * 00000001800ABF63: jnz     loc_1800AC027
 * 00000001800ABF69: lea     rax, unk_180148920
 * 00000001800ABF70: mov     qword ptr [rbp+9E40h+var_9880], rax
 * 00000001800ABF77: lea     rax, unk_18014F1DC
 * 00000001800ABF7E: mov     qword ptr [rbp+9E40h+var_9880+8], rax
 * 00000001800ABF85: movups  xmm7, [rbp+9E40h+var_9880]
 * 00000001800ABF8C: mov     dword ptr [rbp+9E40h+var_8060], 5
 * 00000001800ABF96: mov     dword ptr [rbp+9E40h+var_8060+4], esi
 * 00000001800ABF9C: movups  xmm6, [rbp+9E40h+var_8060]
 * 00000001800ABFA3: call    sub_1800A5ED4
 * 00000001800ABFA8: mov     r8, rax
 * 00000001800ABFAB: mov     r9d, r12d
 * 00000001800ABFAE: mov     edx, 16Ah
 * 00000001800ABFB3: lea     rcx, [rbp+9E40h+var_42D0]
 * 00000001800ABFBA: call    sub_1800737C8
 * 00000001800ABFBF: nop
 * 00000001800ABFC0: mov     r8, rax
 * 00000001800ABFC3: mov     rdx, r13
 * 00000001800ABFC6: lea     rcx, [rbp+9E40h+var_42F0]
 * 00000001800ABFCD: call    sub_18001B678
 * 00000001800ABFD2: nop
 * 00000001800ABFD3: lea     r8, aPixel; "/Pixel"
 * 00000001800ABFDA: mov     rdx, rax
 * 00000001800ABFDD: lea     rcx, [rbp+9E40h+var_5D10]
 * 00000001800ABFE4: call    sub_18001B5A8
 * 00000001800ABFE9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABFEE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABFF3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABFF8: mov     rcx, rax
 * 00000001800ABFFB: call    sub_18007386C
 * 00000001800AC000: nop
 * 00000001800AC001: lea     rcx, [rbp+9E40h+var_42F0]
 * 00000001800AC008: call    sub_180011020
 * 00000001800AC00D: nop
 * 00000001800AC00E: lea     rcx, [rbp+9E40h+var_42D0]
 * 00000001800AC015: call    sub_180011020
 * 00000001800AC01A: nop
 * 00000001800AC01B: lea     rcx, dword_1801CA3D0
 * 00000001800AC022: call    _Init_thread_footer
 * 00000001800AC027: mov     rax, [rdi+rbx*8]
 * 00000001800AC02B: mov     eax, [r15+rax]
 * 00000001800AC02F: cmp     cs:dword_1801CA3D4, eax
 * 00000001800AC035: jle     loc_1800AC112
 * 00000001800AC03B: lea     rcx, dword_1801CA3D4
 * 00000001800AC042: call    sub_18000CA40
 * 00000001800AC047: cmp     cs:dword_1801CA3D4, r14d
 * 00000001800AC04E: jnz     loc_1800AC112
 * 00000001800AC054: lea     rax, unk_180159180
 * 00000001800AC05B: mov     qword ptr [rbp+9E40h+var_9870], rax
 * 00000001800AC062: lea     rax, unk_18015FA88
 * 00000001800AC069: mov     qword ptr [rbp+9E40h+var_9870+8], rax
 * 00000001800AC070: movups  xmm7, [rbp+9E40h+var_9870]
 * 00000001800AC077: mov     dword ptr [rbp+9E40h+var_8040], 5
 * 00000001800AC081: mov     dword ptr [rbp+9E40h+var_8040+4], esi
 * 00000001800AC087: movups  xmm6, [rbp+9E40h+var_8040]
 * 00000001800AC08E: call    sub_1800A5ED4
 * 00000001800AC093: mov     r8, rax
 * 00000001800AC096: mov     r9d, r12d
 * 00000001800AC099: mov     edx, 170h
 * 00000001800AC09E: lea     rcx, [rbp+9E40h+var_4270]
 * 00000001800AC0A5: call    sub_1800737C8
 * 00000001800AC0AA: nop
 * 00000001800AC0AB: mov     r8, rax
 * 00000001800AC0AE: mov     rdx, r13
 * 00000001800AC0B1: lea     rcx, [rbp+9E40h+var_4290]
 * 00000001800AC0B8: call    sub_18001B678
 * 00000001800AC0BD: nop
 * 00000001800AC0BE: lea     r8, aPixel; "/Pixel"
 * 00000001800AC0C5: mov     rdx, rax
 * 00000001800AC0C8: lea     rcx, [rbp+9E40h+var_5CF0]
 * 00000001800AC0CF: call    sub_18001B5A8
 * 00000001800AC0D4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC0D9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC0DE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC0E3: mov     rcx, rax
 * 00000001800AC0E6: call    sub_18007386C
 * 00000001800AC0EB: nop
 * 00000001800AC0EC: lea     rcx, [rbp+9E40h+var_4290]
 * 00000001800AC0F3: call    sub_180011020
 * 00000001800AC0F8: nop
 * 00000001800AC0F9: lea     rcx, [rbp+9E40h+var_4270]
 * 00000001800AC100: call    sub_180011020
 * 00000001800AC105: nop
 * 00000001800AC106: lea     rcx, dword_1801CA3D4
 * 00000001800AC10D: call    _Init_thread_footer
 * 00000001800AC112: mov     rax, [rdi+rbx*8]
 * 00000001800AC116: mov     eax, [r15+rax]
 * 00000001800AC11A: cmp     cs:dword_1801CA3D8, eax
 * 00000001800AC120: jle     loc_1800AC1FD
 * 00000001800AC126: lea     rcx, dword_1801CA3D8
 * 00000001800AC12D: call    sub_18000CA40
 * 00000001800AC132: cmp     cs:dword_1801CA3D8, r14d
 * 00000001800AC139: jnz     loc_1800AC1FD
 * 00000001800AC13F: lea     rax, unk_180159180
 * 00000001800AC146: mov     qword ptr [rbp+9E40h+var_9860], rax
 * 00000001800AC14D: lea     rax, unk_18015FA88
 * 00000001800AC154: mov     qword ptr [rbp+9E40h+var_9860+8], rax
 * 00000001800AC15B: movups  xmm7, [rbp+9E40h+var_9860]
 * 00000001800AC162: mov     dword ptr [rbp+9E40h+var_8020], 5
 * 00000001800AC16C: mov     dword ptr [rbp+9E40h+var_8020+4], esi
 * 00000001800AC172: movups  xmm6, [rbp+9E40h+var_8020]
 * 00000001800AC179: call    sub_1800A5ED4
 * 00000001800AC17E: mov     r8, rax
 * 00000001800AC181: mov     r9d, r12d
 * 00000001800AC184: mov     edx, 172h
 * 00000001800AC189: lea     rcx, [rbp+9E40h+var_4210]
 * 00000001800AC190: call    sub_1800737C8
 * 00000001800AC195: nop
 * 00000001800AC196: mov     r8, rax
 * 00000001800AC199: mov     rdx, r13
 * 00000001800AC19C: lea     rcx, [rbp+9E40h+var_4230]
 * 00000001800AC1A3: call    sub_18001B678
 * 00000001800AC1A8: nop
 * 00000001800AC1A9: lea     r8, aPixel; "/Pixel"
 * 00000001800AC1B0: mov     rdx, rax
 * 00000001800AC1B3: lea     rcx, [rbp+9E40h+var_5CD0]
 * 00000001800AC1BA: call    sub_18001B5A8
 * 00000001800AC1BF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC1C4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC1C9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC1CE: mov     rcx, rax
 * 00000001800AC1D1: call    sub_18007386C
 * 00000001800AC1D6: nop
 * 00000001800AC1D7: lea     rcx, [rbp+9E40h+var_4230]
 * 00000001800AC1DE: call    sub_180011020
 * 00000001800AC1E3: nop
 * 00000001800AC1E4: lea     rcx, [rbp+9E40h+var_4210]
 * 00000001800AC1EB: call    sub_180011020
 * 00000001800AC1F0: nop
 * 00000001800AC1F1: lea     rcx, dword_1801CA3D8
 * 00000001800AC1F8: call    _Init_thread_footer
 * 00000001800AC1FD: mov     rax, [rdi+rbx*8]
 * 00000001800AC201: mov     eax, [r15+rax]
 * 00000001800AC205: cmp     cs:dword_1801CA3DC, eax
 * 00000001800AC20B: jle     loc_1800AC2E8
 * 00000001800AC211: lea     rcx, dword_1801CA3DC
 * 00000001800AC218: call    sub_18000CA40
 * 00000001800AC21D: cmp     cs:dword_1801CA3DC, r14d
 * 00000001800AC224: jnz     loc_1800AC2E8
 * 00000001800AC22A: lea     rax, unk_1801526C0
 * 00000001800AC231: mov     qword ptr [rbp+9E40h+var_9850], rax
 * 00000001800AC238: lea     rax, unk_18015917C
 * 00000001800AC23F: mov     qword ptr [rbp+9E40h+var_9850+8], rax
 * 00000001800AC246: movups  xmm7, [rbp+9E40h+var_9850]
 * 00000001800AC24D: mov     dword ptr [rbp+9E40h+var_8000], 5
 * 00000001800AC257: mov     dword ptr [rbp+9E40h+var_8000+4], esi
 * 00000001800AC25D: movups  xmm6, [rbp+9E40h+var_8000]
 * 00000001800AC264: call    sub_1800A5ED4
 * 00000001800AC269: mov     r8, rax
 * 00000001800AC26C: mov     r9d, r12d
 * 00000001800AC26F: mov     edx, 178h
 * 00000001800AC274: lea     rcx, [rbp+9E40h+var_41B0]
 * 00000001800AC27B: call    sub_1800737C8
 * 00000001800AC280: nop
 * 00000001800AC281: mov     r8, rax
 * 00000001800AC284: mov     rdx, r13
 * 00000001800AC287: lea     rcx, [rbp+9E40h+var_41D0]
 * 00000001800AC28E: call    sub_18001B678
 * 00000001800AC293: nop
 * 00000001800AC294: lea     r8, aPixel; "/Pixel"
 * 00000001800AC29B: mov     rdx, rax
 * 00000001800AC29E: lea     rcx, [rbp+9E40h+var_5CB0]
 * 00000001800AC2A5: call    sub_18001B5A8
 * 00000001800AC2AA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC2AF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC2B4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC2B9: mov     rcx, rax
 * 00000001800AC2BC: call    sub_18007386C
 * 00000001800AC2C1: nop
 * 00000001800AC2C2: lea     rcx, [rbp+9E40h+var_41D0]
 * 00000001800AC2C9: call    sub_180011020
 * 00000001800AC2CE: nop
 * 00000001800AC2CF: lea     rcx, [rbp+9E40h+var_41B0]
 * 00000001800AC2D6: call    sub_180011020
 * 00000001800AC2DB: nop
 * 00000001800AC2DC: lea     rcx, dword_1801CA3DC
 * 00000001800AC2E3: call    _Init_thread_footer
 * 00000001800AC2E8: mov     rax, [rdi+rbx*8]
 * 00000001800AC2EC: mov     eax, [r15+rax]
 * 00000001800AC2F0: cmp     cs:dword_1801CA3E0, eax
 * 00000001800AC2F6: jle     loc_1800AC3D3
 * 00000001800AC2FC: lea     rcx, dword_1801CA3E0
 * 00000001800AC303: call    sub_18000CA40
 * 00000001800AC308: cmp     cs:dword_1801CA3E0, r14d
 * 00000001800AC30F: jnz     loc_1800AC3D3
 * 00000001800AC315: lea     rax, unk_1801526C0
 * 00000001800AC31C: mov     qword ptr [rbp+9E40h+var_9840], rax
 * 00000001800AC323: lea     rax, unk_18015917C
 * 00000001800AC32A: mov     qword ptr [rbp+9E40h+var_9840+8], rax
 * 00000001800AC331: movups  xmm7, [rbp+9E40h+var_9840]
 * 00000001800AC338: mov     dword ptr [rbp+9E40h+var_7FE0], 5
 * 00000001800AC342: mov     dword ptr [rbp+9E40h+var_7FE0+4], esi
 * 00000001800AC348: movups  xmm6, [rbp+9E40h+var_7FE0]
 * 00000001800AC34F: call    sub_1800A5ED4
 * 00000001800AC354: mov     r8, rax
 * 00000001800AC357: mov     r9d, r12d
 * 00000001800AC35A: mov     edx, 17Ah
 * 00000001800AC35F: lea     rcx, [rbp+9E40h+var_4150]
 * 00000001800AC366: call    sub_1800737C8
 * 00000001800AC36B: nop
 * 00000001800AC36C: mov     r8, rax
 * 00000001800AC36F: mov     rdx, r13
 * 00000001800AC372: lea     rcx, [rbp+9E40h+var_4170]
 * 00000001800AC379: call    sub_18001B678
 * 00000001800AC37E: nop
 * 00000001800AC37F: lea     r8, aPixel; "/Pixel"
 * 00000001800AC386: mov     rdx, rax
 * 00000001800AC389: lea     rcx, [rbp+9E40h+var_5C90]
 * 00000001800AC390: call    sub_18001B5A8
 * 00000001800AC395: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC39A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC39F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC3A4: mov     rcx, rax
 * 00000001800AC3A7: call    sub_18007386C
 * 00000001800AC3AC: nop
 * 00000001800AC3AD: lea     rcx, [rbp+9E40h+var_4170]
 * 00000001800AC3B4: call    sub_180011020
 * 00000001800AC3B9: nop
 * 00000001800AC3BA: lea     rcx, [rbp+9E40h+var_4150]
 * 00000001800AC3C1: call    sub_180011020
 * 00000001800AC3C6: nop
 * 00000001800AC3C7: lea     rcx, dword_1801CA3E0
 * 00000001800AC3CE: call    _Init_thread_footer
 * 00000001800AC3D3: mov     rax, [rdi+rbx*8]
 * 00000001800AC3D7: mov     eax, [r15+rax]
 * 00000001800AC3DB: cmp     cs:dword_1801CA3E4, eax
 * 00000001800AC3E1: jle     loc_1800AC4BE
 * 00000001800AC3E7: lea     rcx, dword_1801CA3E4
 * 00000001800AC3EE: call    sub_18000CA40
 * 00000001800AC3F3: cmp     cs:dword_1801CA3E4, r14d
 * 00000001800AC3FA: jnz     loc_1800AC4BE
 * 00000001800AC400: lea     rax, unk_180177460
 * 00000001800AC407: mov     qword ptr [rbp+9E40h+var_9830], rax
 * 00000001800AC40E: lea     rax, unk_18017DB8C
 * 00000001800AC415: mov     qword ptr [rbp+9E40h+var_9830+8], rax
 * 00000001800AC41C: movups  xmm7, [rbp+9E40h+var_9830]
 * 00000001800AC423: mov     dword ptr [rbp+9E40h+var_7FC0], 5
 * 00000001800AC42D: mov     dword ptr [rbp+9E40h+var_7FC0+4], esi
 * 00000001800AC433: movups  xmm6, [rbp+9E40h+var_7FC0]
 * 00000001800AC43A: call    sub_1800A5ED4
 * 00000001800AC43F: mov     r8, rax
 * 00000001800AC442: mov     r9d, r12d
 * 00000001800AC445: mov     edx, 180h
 * 00000001800AC44A: lea     rcx, [rbp+9E40h+var_40F0]
 * 00000001800AC451: call    sub_1800737C8
 * 00000001800AC456: nop
 * 00000001800AC457: mov     r8, rax
 * 00000001800AC45A: mov     rdx, r13
 * 00000001800AC45D: lea     rcx, [rbp+9E40h+var_4110]
 * 00000001800AC464: call    sub_18001B678
 * 00000001800AC469: nop
 * 00000001800AC46A: lea     r8, aPixel; "/Pixel"
 * 00000001800AC471: mov     rdx, rax
 * 00000001800AC474: lea     rcx, [rbp+9E40h+var_5C70]
 * 00000001800AC47B: call    sub_18001B5A8
 * 00000001800AC480: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC485: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC48A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC48F: mov     rcx, rax
 * 00000001800AC492: call    sub_18007386C
 * 00000001800AC497: nop
 * 00000001800AC498: lea     rcx, [rbp+9E40h+var_4110]
 * 00000001800AC49F: call    sub_180011020
 * 00000001800AC4A4: nop
 * 00000001800AC4A5: lea     rcx, [rbp+9E40h+var_40F0]
 * 00000001800AC4AC: call    sub_180011020
 * 00000001800AC4B1: nop
 * 00000001800AC4B2: lea     rcx, dword_1801CA3E4
 * 00000001800AC4B9: call    _Init_thread_footer
 * 00000001800AC4BE: mov     rax, [rdi+rbx*8]
 * 00000001800AC4C2: mov     eax, [r15+rax]
 * 00000001800AC4C6: cmp     cs:dword_1801CA3E8, eax
 * 00000001800AC4CC: jle     loc_1800AC5A9
 * 00000001800AC4D2: lea     rcx, dword_1801CA3E8
 * 00000001800AC4D9: call    sub_18000CA40
 * 00000001800AC4DE: cmp     cs:dword_1801CA3E8, r14d
 * 00000001800AC4E5: jnz     loc_1800AC5A9
 * 00000001800AC4EB: lea     rax, unk_180177460
 * 00000001800AC4F2: mov     qword ptr [rbp+9E40h+var_9820], rax
 * 00000001800AC4F9: lea     rax, unk_18017DB8C
 * 00000001800AC500: mov     qword ptr [rbp+9E40h+var_9820+8], rax
 * 00000001800AC507: movups  xmm7, [rbp+9E40h+var_9820]
 * 00000001800AC50E: mov     dword ptr [rbp+9E40h+var_7FA0], 5
 * 00000001800AC518: mov     dword ptr [rbp+9E40h+var_7FA0+4], esi
 * 00000001800AC51E: movups  xmm6, [rbp+9E40h+var_7FA0]
 * 00000001800AC525: call    sub_1800A5ED4
 * 00000001800AC52A: mov     r8, rax
 * 00000001800AC52D: mov     r9d, r12d
 * 00000001800AC530: mov     edx, 182h
 * 00000001800AC535: lea     rcx, [rbp+9E40h+var_4090]
 * 00000001800AC53C: call    sub_1800737C8
 * 00000001800AC541: nop
 * 00000001800AC542: mov     r8, rax
 * 00000001800AC545: mov     rdx, r13
 * 00000001800AC548: lea     rcx, [rbp+9E40h+var_40B0]
 * 00000001800AC54F: call    sub_18001B678
 * 00000001800AC554: nop
 * 00000001800AC555: lea     r8, aPixel; "/Pixel"
 * 00000001800AC55C: mov     rdx, rax
 * 00000001800AC55F: lea     rcx, [rbp+9E40h+var_5C50]
 * 00000001800AC566: call    sub_18001B5A8
 * 00000001800AC56B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC570: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC575: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC57A: mov     rcx, rax
 * 00000001800AC57D: call    sub_18007386C
 * 00000001800AC582: nop
 * 00000001800AC583: lea     rcx, [rbp+9E40h+var_40B0]
 * 00000001800AC58A: call    sub_180011020
 * 00000001800AC58F: nop
 * 00000001800AC590: lea     rcx, [rbp+9E40h+var_4090]
 * 00000001800AC597: call    sub_180011020
 * 00000001800AC59C: nop
 * 00000001800AC59D: lea     rcx, dword_1801CA3E8
 * 00000001800AC5A4: call    _Init_thread_footer
 * 00000001800AC5A9: mov     rax, [rdi+rbx*8]
 * 00000001800AC5AD: mov     eax, [r15+rax]
 * 00000001800AC5B1: cmp     cs:dword_1801CA3EC, eax
 * 00000001800AC5B7: jle     loc_1800AC694
 * 00000001800AC5BD: lea     rcx, dword_1801CA3EC
 * 00000001800AC5C4: call    sub_18000CA40
 * 00000001800AC5C9: cmp     cs:dword_1801CA3EC, r14d
 * 00000001800AC5D0: jnz     loc_1800AC694
 * 00000001800AC5D6: lea     rax, unk_180148920
 * 00000001800AC5DD: mov     qword ptr [rbp+9E40h+var_9810], rax
 * 00000001800AC5E4: lea     rax, unk_18014F1DC
 * 00000001800AC5EB: mov     qword ptr [rbp+9E40h+var_9810+8], rax
 * 00000001800AC5F2: movups  xmm7, [rbp+9E40h+var_9810]
 * 00000001800AC5F9: mov     dword ptr [rbp+9E40h+var_7F80], 5
 * 00000001800AC603: mov     dword ptr [rbp+9E40h+var_7F80+4], esi
 * 00000001800AC609: movups  xmm6, [rbp+9E40h+var_7F80]
 * 00000001800AC610: call    sub_1800A5ED4
 * 00000001800AC615: mov     r8, rax
 * 00000001800AC618: mov     r9d, r12d
 * 00000001800AC61B: mov     edx, 188h
 * 00000001800AC620: lea     rcx, [rbp+9E40h+var_4030]
 * 00000001800AC627: call    sub_1800737C8
 * 00000001800AC62C: nop
 * 00000001800AC62D: mov     r8, rax
 * 00000001800AC630: mov     rdx, r13
 * 00000001800AC633: lea     rcx, [rbp+9E40h+var_4050]
 * 00000001800AC63A: call    sub_18001B678
 * 00000001800AC63F: nop
 * 00000001800AC640: lea     r8, aPixel; "/Pixel"
 * 00000001800AC647: mov     rdx, rax
 * 00000001800AC64A: lea     rcx, [rbp+9E40h+var_5C30]
 * 00000001800AC651: call    sub_18001B5A8
 * 00000001800AC656: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC65B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC660: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC665: mov     rcx, rax
 * 00000001800AC668: call    sub_18007386C
 * 00000001800AC66D: nop
 * 00000001800AC66E: lea     rcx, [rbp+9E40h+var_4050]
 * 00000001800AC675: call    sub_180011020
 * 00000001800AC67A: nop
 * 00000001800AC67B: lea     rcx, [rbp+9E40h+var_4030]
 * 00000001800AC682: call    sub_180011020
 * 00000001800AC687: nop
 * 00000001800AC688: lea     rcx, dword_1801CA3EC
 * 00000001800AC68F: call    _Init_thread_footer
 * 00000001800AC694: mov     rax, [rdi+rbx*8]
 * 00000001800AC698: mov     eax, [r15+rax]
 * 00000001800AC69C: cmp     cs:dword_1801CA3F0, eax
 * 00000001800AC6A2: jle     loc_1800AC77F
 * 00000001800AC6A8: lea     rcx, dword_1801CA3F0
 * 00000001800AC6AF: call    sub_18000CA40
 * 00000001800AC6B4: cmp     cs:dword_1801CA3F0, r14d
 * 00000001800AC6BB: jnz     loc_1800AC77F
 * 00000001800AC6C1: lea     rax, unk_180148920
 * 00000001800AC6C8: mov     qword ptr [rbp+9E40h+var_9800], rax
 * 00000001800AC6CF: lea     rax, unk_18014F1DC
 * 00000001800AC6D6: mov     qword ptr [rbp+9E40h+var_9800+8], rax
 * 00000001800AC6DD: movups  xmm7, [rbp+9E40h+var_9800]
 * 00000001800AC6E4: mov     dword ptr [rbp+9E40h+var_7F60], 5
 * 00000001800AC6EE: mov     dword ptr [rbp+9E40h+var_7F60+4], esi
 * 00000001800AC6F4: movups  xmm6, [rbp+9E40h+var_7F60]
 * 00000001800AC6FB: call    sub_1800A5ED4
 * 00000001800AC700: mov     r8, rax
 * 00000001800AC703: mov     r9d, r12d
 * 00000001800AC706: mov     edx, 18Ah
 * 00000001800AC70B: lea     rcx, [rbp+9E40h+var_3FD0]
 * 00000001800AC712: call    sub_1800737C8
 * 00000001800AC717: nop
 * 00000001800AC718: mov     r8, rax
 * 00000001800AC71B: mov     rdx, r13
 * 00000001800AC71E: lea     rcx, [rbp+9E40h+var_3FF0]
 * 00000001800AC725: call    sub_18001B678
 * 00000001800AC72A: nop
 * 00000001800AC72B: lea     r8, aPixel; "/Pixel"
 * 00000001800AC732: mov     rdx, rax
 * 00000001800AC735: lea     rcx, [rbp+9E40h+var_5C10]
 * 00000001800AC73C: call    sub_18001B5A8
 * 00000001800AC741: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC746: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC74B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC750: mov     rcx, rax
 * 00000001800AC753: call    sub_18007386C
 * 00000001800AC758: nop
 * 00000001800AC759: lea     rcx, [rbp+9E40h+var_3FF0]
 * 00000001800AC760: call    sub_180011020
 * 00000001800AC765: nop
 * 00000001800AC766: lea     rcx, [rbp+9E40h+var_3FD0]
 * 00000001800AC76D: call    sub_180011020
 * 00000001800AC772: nop
 * 00000001800AC773: lea     rcx, dword_1801CA3F0
 * 00000001800AC77A: call    _Init_thread_footer
 * 00000001800AC77F: mov     rax, [rdi+rbx*8]
 * 00000001800AC783: mov     eax, [r15+rax]
 * 00000001800AC787: cmp     cs:dword_1801CA3F4, eax
 * 00000001800AC78D: jle     loc_1800AC86A
 * 00000001800AC793: lea     rcx, dword_1801CA3F4
 * 00000001800AC79A: call    sub_18000CA40
 * 00000001800AC79F: cmp     cs:dword_1801CA3F4, r14d
 * 00000001800AC7A6: jnz     loc_1800AC86A
 * 00000001800AC7AC: lea     rax, unk_180159180
 * 00000001800AC7B3: mov     qword ptr [rbp+9E40h+var_97F0], rax
 * 00000001800AC7BA: lea     rax, unk_18015FA88
 * 00000001800AC7C1: mov     qword ptr [rbp+9E40h+var_97F0+8], rax
 * 00000001800AC7C8: movups  xmm7, [rbp+9E40h+var_97F0]
 * 00000001800AC7CF: mov     dword ptr [rbp+9E40h+var_7F40], 5
 * 00000001800AC7D9: mov     dword ptr [rbp+9E40h+var_7F40+4], esi
 * 00000001800AC7DF: movups  xmm6, [rbp+9E40h+var_7F40]
 * 00000001800AC7E6: call    sub_1800A5ED4
 * 00000001800AC7EB: mov     r8, rax
 * 00000001800AC7EE: mov     r9d, r12d
 * 00000001800AC7F1: mov     edx, 190h
 * 00000001800AC7F6: lea     rcx, [rbp+9E40h+var_3F70]
 * 00000001800AC7FD: call    sub_1800737C8
 * 00000001800AC802: nop
 * 00000001800AC803: mov     r8, rax
 * 00000001800AC806: mov     rdx, r13
 * 00000001800AC809: lea     rcx, [rbp+9E40h+var_3F90]
 * 00000001800AC810: call    sub_18001B678
 * 00000001800AC815: nop
 * 00000001800AC816: lea     r8, aPixel; "/Pixel"
 * 00000001800AC81D: mov     rdx, rax
 * 00000001800AC820: lea     rcx, [rbp+9E40h+var_5BF0]
 * 00000001800AC827: call    sub_18001B5A8
 * 00000001800AC82C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC831: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC836: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC83B: mov     rcx, rax
 * 00000001800AC83E: call    sub_18007386C
 * 00000001800AC843: nop
 * 00000001800AC844: lea     rcx, [rbp+9E40h+var_3F90]
 * 00000001800AC84B: call    sub_180011020
 * 00000001800AC850: nop
 * 00000001800AC851: lea     rcx, [rbp+9E40h+var_3F70]
 * 00000001800AC858: call    sub_180011020
 * 00000001800AC85D: nop
 * 00000001800AC85E: lea     rcx, dword_1801CA3F4
 * 00000001800AC865: call    _Init_thread_footer
 * 00000001800AC86A: mov     rax, [rdi+rbx*8]
 * 00000001800AC86E: mov     eax, [r15+rax]
 * 00000001800AC872: cmp     cs:dword_1801CA3F8, eax
 * 00000001800AC878: jle     loc_1800AC955
 * 00000001800AC87E: lea     rcx, dword_1801CA3F8
 * 00000001800AC885: call    sub_18000CA40
 * 00000001800AC88A: cmp     cs:dword_1801CA3F8, r14d
 * 00000001800AC891: jnz     loc_1800AC955
 * 00000001800AC897: lea     rax, unk_180159180
 * 00000001800AC89E: mov     qword ptr [rbp+9E40h+var_97E0], rax
 * 00000001800AC8A5: lea     rax, unk_18015FA88
 * 00000001800AC8AC: mov     qword ptr [rbp+9E40h+var_97E0+8], rax
 * 00000001800AC8B3: movups  xmm7, [rbp+9E40h+var_97E0]
 * 00000001800AC8BA: mov     dword ptr [rbp+9E40h+var_7F20], 5
 * 00000001800AC8C4: mov     dword ptr [rbp+9E40h+var_7F20+4], esi
 * 00000001800AC8CA: movups  xmm6, [rbp+9E40h+var_7F20]
 * 00000001800AC8D1: call    sub_1800A5ED4
 * 00000001800AC8D6: mov     r8, rax
 * 00000001800AC8D9: mov     r9d, r12d
 * 00000001800AC8DC: mov     edx, 192h
 * 00000001800AC8E1: lea     rcx, [rbp+9E40h+var_3F10]
 * 00000001800AC8E8: call    sub_1800737C8
 * 00000001800AC8ED: nop
 * 00000001800AC8EE: mov     r8, rax
 * 00000001800AC8F1: mov     rdx, r13
 * 00000001800AC8F4: lea     rcx, [rbp+9E40h+var_3F30]
 * 00000001800AC8FB: call    sub_18001B678
 * 00000001800AC900: nop
 * 00000001800AC901: lea     r8, aPixel; "/Pixel"
 * 00000001800AC908: mov     rdx, rax
 * 00000001800AC90B: lea     rcx, [rbp+9E40h+var_5BD0]
 * 00000001800AC912: call    sub_18001B5A8
 * 00000001800AC917: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC91C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC921: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC926: mov     rcx, rax
 * 00000001800AC929: call    sub_18007386C
 * 00000001800AC92E: nop
 * 00000001800AC92F: lea     rcx, [rbp+9E40h+var_3F30]
 * 00000001800AC936: call    sub_180011020
 * 00000001800AC93B: nop
 * 00000001800AC93C: lea     rcx, [rbp+9E40h+var_3F10]
 * 00000001800AC943: call    sub_180011020
 * 00000001800AC948: nop
 * 00000001800AC949: lea     rcx, dword_1801CA3F8
 * 00000001800AC950: call    _Init_thread_footer
 * 00000001800AC955: mov     rax, [rdi+rbx*8]
 * 00000001800AC959: mov     eax, [r15+rax]
 * 00000001800AC95D: cmp     cs:dword_1801CA3FC, eax
 * 00000001800AC963: jle     loc_1800ACA40
 * 00000001800AC969: lea     rcx, dword_1801CA3FC
 * 00000001800AC970: call    sub_18000CA40
 * 00000001800AC975: cmp     cs:dword_1801CA3FC, r14d
 * 00000001800AC97C: jnz     loc_1800ACA40
 * 00000001800AC982: lea     rax, unk_1801526C0
 * 00000001800AC989: mov     qword ptr [rbp+9E40h+var_97D0], rax
 * 00000001800AC990: lea     rax, unk_18015917C
 * 00000001800AC997: mov     qword ptr [rbp+9E40h+var_97D0+8], rax
 * 00000001800AC99E: movups  xmm7, [rbp+9E40h+var_97D0]
 * 00000001800AC9A5: mov     dword ptr [rbp+9E40h+var_7F00], 5
 * 00000001800AC9AF: mov     dword ptr [rbp+9E40h+var_7F00+4], esi
 * 00000001800AC9B5: movups  xmm6, [rbp+9E40h+var_7F00]
 * 00000001800AC9BC: call    sub_1800A5ED4
 * 00000001800AC9C1: mov     r8, rax
 * 00000001800AC9C4: mov     r9d, r12d
 * 00000001800AC9C7: mov     edx, 198h
 * 00000001800AC9CC: lea     rcx, [rbp+9E40h+var_3EB0]
 * 00000001800AC9D3: call    sub_1800737C8
 * 00000001800AC9D8: nop
 * 00000001800AC9D9: mov     r8, rax
 * 00000001800AC9DC: mov     rdx, r13
 * 00000001800AC9DF: lea     rcx, [rbp+9E40h+var_3ED0]
 * 00000001800AC9E6: call    sub_18001B678
 * 00000001800AC9EB: nop
 * 00000001800AC9EC: lea     r8, aPixel; "/Pixel"
 * 00000001800AC9F3: mov     rdx, rax
 * 00000001800AC9F6: lea     rcx, [rbp+9E40h+var_5BB0]
 * 00000001800AC9FD: call    sub_18001B5A8
 * 00000001800ACA02: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACA07: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACA0C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACA11: mov     rcx, rax
 * 00000001800ACA14: call    sub_18007386C
 * 00000001800ACA19: nop
 * 00000001800ACA1A: lea     rcx, [rbp+9E40h+var_3ED0]
 * 00000001800ACA21: call    sub_180011020
 * 00000001800ACA26: nop
 * 00000001800ACA27: lea     rcx, [rbp+9E40h+var_3EB0]
 * 00000001800ACA2E: call    sub_180011020
 * 00000001800ACA33: nop
 * 00000001800ACA34: lea     rcx, dword_1801CA3FC
 * 00000001800ACA3B: call    _Init_thread_footer
 * 00000001800ACA40: mov     rax, [rdi+rbx*8]
 * 00000001800ACA44: mov     eax, [r15+rax]
 * 00000001800ACA48: cmp     cs:dword_1801CA400, eax
 * 00000001800ACA4E: jle     loc_1800ACB2B
 * 00000001800ACA54: lea     rcx, dword_1801CA400
 * 00000001800ACA5B: call    sub_18000CA40
 * 00000001800ACA60: cmp     cs:dword_1801CA400, r14d
 * 00000001800ACA67: jnz     loc_1800ACB2B
 * 00000001800ACA6D: lea     rax, unk_1801526C0
 * 00000001800ACA74: mov     qword ptr [rbp+9E40h+var_97C0], rax
 * 00000001800ACA7B: lea     rax, unk_18015917C
 * 00000001800ACA82: mov     qword ptr [rbp+9E40h+var_97C0+8], rax
 * 00000001800ACA89: movups  xmm7, [rbp+9E40h+var_97C0]
 * 00000001800ACA90: mov     dword ptr [rbp+9E40h+var_7EE0], 5
 * 00000001800ACA9A: mov     dword ptr [rbp+9E40h+var_7EE0+4], esi
 * 00000001800ACAA0: movups  xmm6, [rbp+9E40h+var_7EE0]
 * 00000001800ACAA7: call    sub_1800A5ED4
 * 00000001800ACAAC: mov     r8, rax
 * 00000001800ACAAF: mov     r9d, r12d
 * 00000001800ACAB2: mov     edx, 19Ah
 * 00000001800ACAB7: lea     rcx, [rbp+9E40h+var_3E50]
 * 00000001800ACABE: call    sub_1800737C8
 * 00000001800ACAC3: nop
 * 00000001800ACAC4: mov     r8, rax
 * 00000001800ACAC7: mov     rdx, r13
 * 00000001800ACACA: lea     rcx, [rbp+9E40h+var_3E70]
 * 00000001800ACAD1: call    sub_18001B678
 * 00000001800ACAD6: nop
 * 00000001800ACAD7: lea     r8, aPixel; "/Pixel"
 * 00000001800ACADE: mov     rdx, rax
 * 00000001800ACAE1: lea     rcx, [rbp+9E40h+var_5B90]
 * 00000001800ACAE8: call    sub_18001B5A8
 * 00000001800ACAED: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACAF2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACAF7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACAFC: mov     rcx, rax
 * 00000001800ACAFF: call    sub_18007386C
 * 00000001800ACB04: nop
 * 00000001800ACB05: lea     rcx, [rbp+9E40h+var_3E70]
 * 00000001800ACB0C: call    sub_180011020
 * 00000001800ACB11: nop
 * 00000001800ACB12: lea     rcx, [rbp+9E40h+var_3E50]
 * 00000001800ACB19: call    sub_180011020
 * 00000001800ACB1E: nop
 * 00000001800ACB1F: lea     rcx, dword_1801CA400
 * 00000001800ACB26: call    _Init_thread_footer
 * 00000001800ACB2B: mov     rax, [rdi+rbx*8]
 * 00000001800ACB2F: mov     eax, [r15+rax]
 * 00000001800ACB33: cmp     cs:dword_1801CA404, eax
 * 00000001800ACB39: jle     loc_1800ACC16
 * 00000001800ACB3F: lea     rcx, dword_1801CA404
 * 00000001800ACB46: call    sub_18000CA40
 * 00000001800ACB4B: cmp     cs:dword_1801CA404, r14d
 * 00000001800ACB52: jnz     loc_1800ACC16
 * 00000001800ACB58: lea     rax, unk_180177460
 * 00000001800ACB5F: mov     qword ptr [rbp+9E40h+var_97B0], rax
 * 00000001800ACB66: lea     rax, unk_18017DB8C
 * 00000001800ACB6D: mov     qword ptr [rbp+9E40h+var_97B0+8], rax
 * 00000001800ACB74: movups  xmm7, [rbp+9E40h+var_97B0]
 * 00000001800ACB7B: mov     dword ptr [rbp+9E40h+var_7EC0], 5
 * 00000001800ACB85: mov     dword ptr [rbp+9E40h+var_7EC0+4], esi
 * 00000001800ACB8B: movups  xmm6, [rbp+9E40h+var_7EC0]
 * 00000001800ACB92: call    sub_1800A5ED4
 * 00000001800ACB97: mov     r8, rax
 * 00000001800ACB9A: mov     r9d, r12d
 * 00000001800ACB9D: mov     edx, 1A0h
 * 00000001800ACBA2: lea     rcx, [rbp+9E40h+var_3DF0]
 * 00000001800ACBA9: call    sub_1800737C8
 * 00000001800ACBAE: nop
 * 00000001800ACBAF: mov     r8, rax
 * 00000001800ACBB2: mov     rdx, r13
 * 00000001800ACBB5: lea     rcx, [rbp+9E40h+var_3E10]
 * 00000001800ACBBC: call    sub_18001B678
 * 00000001800ACBC1: nop
 * 00000001800ACBC2: lea     r8, aPixel; "/Pixel"
 * 00000001800ACBC9: mov     rdx, rax
 * 00000001800ACBCC: lea     rcx, [rbp+9E40h+var_5B70]
 * 00000001800ACBD3: call    sub_18001B5A8
 * 00000001800ACBD8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACBDD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACBE2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACBE7: mov     rcx, rax
 * 00000001800ACBEA: call    sub_18007386C
 * 00000001800ACBEF: nop
 * 00000001800ACBF0: lea     rcx, [rbp+9E40h+var_3E10]
 * 00000001800ACBF7: call    sub_180011020
 * 00000001800ACBFC: nop
 * 00000001800ACBFD: lea     rcx, [rbp+9E40h+var_3DF0]
 * 00000001800ACC04: call    sub_180011020
 * 00000001800ACC09: nop
 * 00000001800ACC0A: lea     rcx, dword_1801CA404
 * 00000001800ACC11: call    _Init_thread_footer
 * 00000001800ACC16: mov     rax, [rdi+rbx*8]
 * 00000001800ACC1A: mov     eax, [r15+rax]
 * 00000001800ACC1E: cmp     cs:dword_1801CA408, eax
 * 00000001800ACC24: jle     loc_1800ACD01
 * 00000001800ACC2A: lea     rcx, dword_1801CA408
 * 00000001800ACC31: call    sub_18000CA40
 * 00000001800ACC36: cmp     cs:dword_1801CA408, r14d
 * 00000001800ACC3D: jnz     loc_1800ACD01
 * 00000001800ACC43: lea     rax, unk_180177460
 * 00000001800ACC4A: mov     qword ptr [rbp+9E40h+var_97A0], rax
 * 00000001800ACC51: lea     rax, unk_18017DB8C
 * 00000001800ACC58: mov     qword ptr [rbp+9E40h+var_97A0+8], rax
 * 00000001800ACC5F: movups  xmm7, [rbp+9E40h+var_97A0]
 * 00000001800ACC66: mov     dword ptr [rbp+9E40h+var_7EA0], 5
 * 00000001800ACC70: mov     dword ptr [rbp+9E40h+var_7EA0+4], esi
 * 00000001800ACC76: movups  xmm6, [rbp+9E40h+var_7EA0]
 * 00000001800ACC7D: call    sub_1800A5ED4
 * 00000001800ACC82: mov     r8, rax
 * 00000001800ACC85: mov     r9d, r12d
 * 00000001800ACC88: mov     edx, 1A2h
 * 00000001800ACC8D: lea     rcx, [rbp+9E40h+var_3D90]
 * 00000001800ACC94: call    sub_1800737C8
 * 00000001800ACC99: nop
 * 00000001800ACC9A: mov     r8, rax
 * 00000001800ACC9D: mov     rdx, r13
 * 00000001800ACCA0: lea     rcx, [rbp+9E40h+var_3DB0]
 * 00000001800ACCA7: call    sub_18001B678
 * 00000001800ACCAC: nop
 * 00000001800ACCAD: lea     r8, aPixel; "/Pixel"
 * 00000001800ACCB4: mov     rdx, rax
 * 00000001800ACCB7: lea     rcx, [rbp+9E40h+var_5B50]
 * 00000001800ACCBE: call    sub_18001B5A8
 * 00000001800ACCC3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACCC8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACCCD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACCD2: mov     rcx, rax
 * 00000001800ACCD5: call    sub_18007386C
 * 00000001800ACCDA: nop
 * 00000001800ACCDB: lea     rcx, [rbp+9E40h+var_3DB0]
 * 00000001800ACCE2: call    sub_180011020
 * 00000001800ACCE7: nop
 * 00000001800ACCE8: lea     rcx, [rbp+9E40h+var_3D90]
 * 00000001800ACCEF: call    sub_180011020
 * 00000001800ACCF4: nop
 * 00000001800ACCF5: lea     rcx, dword_1801CA408
 * 00000001800ACCFC: call    _Init_thread_footer
 * 00000001800ACD01: mov     rax, [rdi+rbx*8]
 * 00000001800ACD05: mov     eax, [r15+rax]
 * 00000001800ACD09: cmp     cs:dword_1801CA40C, eax
 * 00000001800ACD0F: jle     loc_1800ACDEC
 * 00000001800ACD15: lea     rcx, dword_1801CA40C
 * 00000001800ACD1C: call    sub_18000CA40
 * 00000001800ACD21: cmp     cs:dword_1801CA40C, r14d
 * 00000001800ACD28: jnz     loc_1800ACDEC
 * 00000001800ACD2E: lea     rax, unk_180148920
 * 00000001800ACD35: mov     qword ptr [rbp+9E40h+var_9790], rax
 * 00000001800ACD3C: lea     rax, unk_18014F1DC
 * 00000001800ACD43: mov     qword ptr [rbp+9E40h+var_9790+8], rax
 * 00000001800ACD4A: movups  xmm7, [rbp+9E40h+var_9790]
 * 00000001800ACD51: mov     dword ptr [rbp+9E40h+var_7E80], 5
 * 00000001800ACD5B: mov     dword ptr [rbp+9E40h+var_7E80+4], esi
 * 00000001800ACD61: movups  xmm6, [rbp+9E40h+var_7E80]
 * 00000001800ACD68: call    sub_1800A5ED4
 * 00000001800ACD6D: mov     r8, rax
 * 00000001800ACD70: mov     r9d, r12d
 * 00000001800ACD73: mov     edx, 1A8h
 * 00000001800ACD78: lea     rcx, [rbp+9E40h+var_3D30]
 * 00000001800ACD7F: call    sub_1800737C8
 * 00000001800ACD84: nop
 * 00000001800ACD85: mov     r8, rax
 * 00000001800ACD88: mov     rdx, r13
 * 00000001800ACD8B: lea     rcx, [rbp+9E40h+var_3D50]
 * 00000001800ACD92: call    sub_18001B678
 * 00000001800ACD97: nop
 * 00000001800ACD98: lea     r8, aPixel; "/Pixel"
 * 00000001800ACD9F: mov     rdx, rax
 * 00000001800ACDA2: lea     rcx, [rbp+9E40h+var_5B30]
 * 00000001800ACDA9: call    sub_18001B5A8
 * 00000001800ACDAE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACDB3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACDB8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACDBD: mov     rcx, rax
 * 00000001800ACDC0: call    sub_18007386C
 * 00000001800ACDC5: nop
 * 00000001800ACDC6: lea     rcx, [rbp+9E40h+var_3D50]
 * 00000001800ACDCD: call    sub_180011020
 * 00000001800ACDD2: nop
 * 00000001800ACDD3: lea     rcx, [rbp+9E40h+var_3D30]
 * 00000001800ACDDA: call    sub_180011020
 * 00000001800ACDDF: nop
 * 00000001800ACDE0: lea     rcx, dword_1801CA40C
 * 00000001800ACDE7: call    _Init_thread_footer
 * 00000001800ACDEC: mov     rax, [rdi+rbx*8]
 * 00000001800ACDF0: mov     eax, [r15+rax]
 * 00000001800ACDF4: cmp     cs:dword_1801CA410, eax
 * 00000001800ACDFA: jle     loc_1800ACED7
 * 00000001800ACE00: lea     rcx, dword_1801CA410
 * 00000001800ACE07: call    sub_18000CA40
 * 00000001800ACE0C: cmp     cs:dword_1801CA410, r14d
 * 00000001800ACE13: jnz     loc_1800ACED7
 * 00000001800ACE19: lea     rax, unk_180148920
 * 00000001800ACE20: mov     qword ptr [rbp+9E40h+var_9780], rax
 * 00000001800ACE27: lea     rax, unk_18014F1DC
 * 00000001800ACE2E: mov     qword ptr [rbp+9E40h+var_9780+8], rax
 * 00000001800ACE35: movups  xmm7, [rbp+9E40h+var_9780]
 * 00000001800ACE3C: mov     dword ptr [rbp+9E40h+var_7E60], 5
 * 00000001800ACE46: mov     dword ptr [rbp+9E40h+var_7E60+4], esi
 * 00000001800ACE4C: movups  xmm6, [rbp+9E40h+var_7E60]
 * 00000001800ACE53: call    sub_1800A5ED4
 * 00000001800ACE58: mov     r8, rax
 * 00000001800ACE5B: mov     r9d, r12d
 * 00000001800ACE5E: mov     edx, 1AAh
 * 00000001800ACE63: lea     rcx, [rbp+9E40h+var_3CD0]
 * 00000001800ACE6A: call    sub_1800737C8
 * 00000001800ACE6F: nop
 * 00000001800ACE70: mov     r8, rax
 * 00000001800ACE73: mov     rdx, r13
 * 00000001800ACE76: lea     rcx, [rbp+9E40h+var_3CF0]
 * 00000001800ACE7D: call    sub_18001B678
 * 00000001800ACE82: nop
 * 00000001800ACE83: lea     r8, aPixel; "/Pixel"
 * 00000001800ACE8A: mov     rdx, rax
 * 00000001800ACE8D: lea     rcx, [rbp+9E40h+var_5B10]
 * 00000001800ACE94: call    sub_18001B5A8
 * 00000001800ACE99: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACE9E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACEA3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACEA8: mov     rcx, rax
 * 00000001800ACEAB: call    sub_18007386C
 * 00000001800ACEB0: nop
 * 00000001800ACEB1: lea     rcx, [rbp+9E40h+var_3CF0]
 * 00000001800ACEB8: call    sub_180011020
 * 00000001800ACEBD: nop
 * 00000001800ACEBE: lea     rcx, [rbp+9E40h+var_3CD0]
 * 00000001800ACEC5: call    sub_180011020
 * 00000001800ACECA: nop
 * 00000001800ACECB: lea     rcx, dword_1801CA410
 * 00000001800ACED2: call    _Init_thread_footer
 * 00000001800ACED7: mov     rax, [rdi+rbx*8]
 * 00000001800ACEDB: mov     eax, [r15+rax]
 * 00000001800ACEDF: cmp     cs:dword_1801CA414, eax
 * 00000001800ACEE5: jle     loc_1800ACFC2
 * 00000001800ACEEB: lea     rcx, dword_1801CA414
 * 00000001800ACEF2: call    sub_18000CA40
 * 00000001800ACEF7: cmp     cs:dword_1801CA414, r14d
 * 00000001800ACEFE: jnz     loc_1800ACFC2
 * 00000001800ACF04: lea     rax, unk_180159180
 * 00000001800ACF0B: mov     qword ptr [rbp+9E40h+var_9770], rax
 * 00000001800ACF12: lea     rax, unk_18015FA88
 * 00000001800ACF19: mov     qword ptr [rbp+9E40h+var_9770+8], rax
 * 00000001800ACF20: movups  xmm7, [rbp+9E40h+var_9770]
 * 00000001800ACF27: mov     dword ptr [rbp+9E40h+var_7E40], 5
 * 00000001800ACF31: mov     dword ptr [rbp+9E40h+var_7E40+4], esi
 * 00000001800ACF37: movups  xmm6, [rbp+9E40h+var_7E40]
 * 00000001800ACF3E: call    sub_1800A5ED4
 * 00000001800ACF43: mov     r8, rax
 * 00000001800ACF46: mov     r9d, r12d
 * 00000001800ACF49: mov     edx, 1B0h
 * 00000001800ACF4E: lea     rcx, [rbp+9E40h+var_3C70]
 * 00000001800ACF55: call    sub_1800737C8
 * 00000001800ACF5A: nop
 * 00000001800ACF5B: mov     r8, rax
 * 00000001800ACF5E: mov     rdx, r13
 * 00000001800ACF61: lea     rcx, [rbp+9E40h+var_3C90]
 * 00000001800ACF68: call    sub_18001B678
 * 00000001800ACF6D: nop
 * 00000001800ACF6E: lea     r8, aPixel; "/Pixel"
 * 00000001800ACF75: mov     rdx, rax
 * 00000001800ACF78: lea     rcx, [rbp+9E40h+var_5AF0]
 * 00000001800ACF7F: call    sub_18001B5A8
 * 00000001800ACF84: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACF89: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACF8E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACF93: mov     rcx, rax
 * 00000001800ACF96: call    sub_18007386C
 * 00000001800ACF9B: nop
 * 00000001800ACF9C: lea     rcx, [rbp+9E40h+var_3C90]
 * 00000001800ACFA3: call    sub_180011020
 * 00000001800ACFA8: nop
 * 00000001800ACFA9: lea     rcx, [rbp+9E40h+var_3C70]
 * 00000001800ACFB0: call    sub_180011020
 * 00000001800ACFB5: nop
 * 00000001800ACFB6: lea     rcx, dword_1801CA414
 * 00000001800ACFBD: call    _Init_thread_footer
 * 00000001800ACFC2: mov     rax, [rdi+rbx*8]
 * 00000001800ACFC6: mov     eax, [r15+rax]
 * 00000001800ACFCA: cmp     cs:dword_1801CA418, eax
 * 00000001800ACFD0: jle     loc_1800AD0AD
 * 00000001800ACFD6: lea     rcx, dword_1801CA418
 * 00000001800ACFDD: call    sub_18000CA40
 * 00000001800ACFE2: cmp     cs:dword_1801CA418, r14d
 * 00000001800ACFE9: jnz     loc_1800AD0AD
 * 00000001800ACFEF: lea     rax, unk_180159180
 * 00000001800ACFF6: mov     qword ptr [rbp+9E40h+var_9760], rax
 * 00000001800ACFFD: lea     rax, unk_18015FA88
 * 00000001800AD004: mov     qword ptr [rbp+9E40h+var_9760+8], rax
 * 00000001800AD00B: movups  xmm7, [rbp+9E40h+var_9760]
 * 00000001800AD012: mov     dword ptr [rbp+9E40h+var_7E20], 5
 * 00000001800AD01C: mov     dword ptr [rbp+9E40h+var_7E20+4], esi
 * 00000001800AD022: movups  xmm6, [rbp+9E40h+var_7E20]
 * 00000001800AD029: call    sub_1800A5ED4
 * 00000001800AD02E: mov     r8, rax
 * 00000001800AD031: mov     r9d, r12d
 * 00000001800AD034: mov     edx, 1B2h
 * 00000001800AD039: lea     rcx, [rbp+9E40h+var_3C10]
 * 00000001800AD040: call    sub_1800737C8
 * 00000001800AD045: nop
 * 00000001800AD046: mov     r8, rax
 * 00000001800AD049: mov     rdx, r13
 * 00000001800AD04C: lea     rcx, [rbp+9E40h+var_3C30]
 * 00000001800AD053: call    sub_18001B678
 * 00000001800AD058: nop
 * 00000001800AD059: lea     r8, aPixel; "/Pixel"
 * 00000001800AD060: mov     rdx, rax
 * 00000001800AD063: lea     rcx, [rbp+9E40h+var_5AD0]
 * 00000001800AD06A: call    sub_18001B5A8
 * 00000001800AD06F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD074: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD079: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD07E: mov     rcx, rax
 * 00000001800AD081: call    sub_18007386C
 * 00000001800AD086: nop
 * 00000001800AD087: lea     rcx, [rbp+9E40h+var_3C30]
 * 00000001800AD08E: call    sub_180011020
 * 00000001800AD093: nop
 * 00000001800AD094: lea     rcx, [rbp+9E40h+var_3C10]
 * 00000001800AD09B: call    sub_180011020
 * 00000001800AD0A0: nop
 * 00000001800AD0A1: lea     rcx, dword_1801CA418
 * 00000001800AD0A8: call    _Init_thread_footer
 * 00000001800AD0AD: mov     rax, [rdi+rbx*8]
 * 00000001800AD0B1: mov     eax, [r15+rax]
 * 00000001800AD0B5: cmp     cs:dword_1801CA41C, eax
 * 00000001800AD0BB: jle     loc_1800AD198
 * 00000001800AD0C1: lea     rcx, dword_1801CA41C
 * 00000001800AD0C8: call    sub_18000CA40
 * 00000001800AD0CD: cmp     cs:dword_1801CA41C, r14d
 * 00000001800AD0D4: jnz     loc_1800AD198
 * 00000001800AD0DA: lea     rax, unk_1801526C0
 * 00000001800AD0E1: mov     qword ptr [rbp+9E40h+var_9750], rax
 * 00000001800AD0E8: lea     rax, unk_18015917C
 * 00000001800AD0EF: mov     qword ptr [rbp+9E40h+var_9750+8], rax
 * 00000001800AD0F6: movups  xmm7, [rbp+9E40h+var_9750]
 * 00000001800AD0FD: mov     dword ptr [rbp+9E40h+var_7E00], 5
 * 00000001800AD107: mov     dword ptr [rbp+9E40h+var_7E00+4], esi
 * 00000001800AD10D: movups  xmm6, [rbp+9E40h+var_7E00]
 * 00000001800AD114: call    sub_1800A5ED4
 * 00000001800AD119: mov     r8, rax
 * 00000001800AD11C: mov     r9d, r12d
 * 00000001800AD11F: mov     edx, 1B8h
 * 00000001800AD124: lea     rcx, [rbp+9E40h+var_3BB0]
 * 00000001800AD12B: call    sub_1800737C8
 * 00000001800AD130: nop
 * 00000001800AD131: mov     r8, rax
 * 00000001800AD134: mov     rdx, r13
 * 00000001800AD137: lea     rcx, [rbp+9E40h+var_3BD0]
 * 00000001800AD13E: call    sub_18001B678
 * 00000001800AD143: nop
 * 00000001800AD144: lea     r8, aPixel; "/Pixel"
 * 00000001800AD14B: mov     rdx, rax
 * 00000001800AD14E: lea     rcx, [rbp+9E40h+var_5AB0]
 * 00000001800AD155: call    sub_18001B5A8
 * 00000001800AD15A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD15F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD164: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD169: mov     rcx, rax
 * 00000001800AD16C: call    sub_18007386C
 * 00000001800AD171: nop
 * 00000001800AD172: lea     rcx, [rbp+9E40h+var_3BD0]
 * 00000001800AD179: call    sub_180011020
 * 00000001800AD17E: nop
 * 00000001800AD17F: lea     rcx, [rbp+9E40h+var_3BB0]
 * 00000001800AD186: call    sub_180011020
 * 00000001800AD18B: nop
 * 00000001800AD18C: lea     rcx, dword_1801CA41C
 * 00000001800AD193: call    _Init_thread_footer
 * 00000001800AD198: mov     rax, [rdi+rbx*8]
 * 00000001800AD19C: mov     eax, [r15+rax]
 * 00000001800AD1A0: cmp     cs:dword_1801CA420, eax
 * 00000001800AD1A6: jle     loc_1800AD283
 * 00000001800AD1AC: lea     rcx, dword_1801CA420
 * 00000001800AD1B3: call    sub_18000CA40
 * 00000001800AD1B8: cmp     cs:dword_1801CA420, r14d
 * 00000001800AD1BF: jnz     loc_1800AD283
 * 00000001800AD1C5: lea     rax, unk_1801526C0
 * 00000001800AD1CC: mov     qword ptr [rbp+9E40h+var_9740], rax
 * 00000001800AD1D3: lea     rax, unk_18015917C
 * 00000001800AD1DA: mov     qword ptr [rbp+9E40h+var_9740+8], rax
 * 00000001800AD1E1: movups  xmm7, [rbp+9E40h+var_9740]
 * 00000001800AD1E8: mov     dword ptr [rbp+9E40h+var_7DE0], 5
 * 00000001800AD1F2: mov     dword ptr [rbp+9E40h+var_7DE0+4], esi
 * 00000001800AD1F8: movups  xmm6, [rbp+9E40h+var_7DE0]
 * 00000001800AD1FF: call    sub_1800A5ED4
 * 00000001800AD204: mov     r8, rax
 * 00000001800AD207: mov     r9d, r12d
 * 00000001800AD20A: mov     edx, 1BAh
 * 00000001800AD20F: lea     rcx, [rbp+9E40h+var_3B50]
 * 00000001800AD216: call    sub_1800737C8
 * 00000001800AD21B: nop
 * 00000001800AD21C: mov     r8, rax
 * 00000001800AD21F: mov     rdx, r13
 * 00000001800AD222: lea     rcx, [rbp+9E40h+var_3B70]
 * 00000001800AD229: call    sub_18001B678
 * 00000001800AD22E: nop
 * 00000001800AD22F: lea     r8, aPixel; "/Pixel"
 * 00000001800AD236: mov     rdx, rax
 * 00000001800AD239: lea     rcx, [rbp+9E40h+var_5A90]
 * 00000001800AD240: call    sub_18001B5A8
 * 00000001800AD245: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD24A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD24F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD254: mov     rcx, rax
 * 00000001800AD257: call    sub_18007386C
 * 00000001800AD25C: nop
 * 00000001800AD25D: lea     rcx, [rbp+9E40h+var_3B70]
 * 00000001800AD264: call    sub_180011020
 * 00000001800AD269: nop
 * 00000001800AD26A: lea     rcx, [rbp+9E40h+var_3B50]
 * 00000001800AD271: call    sub_180011020
 * 00000001800AD276: nop
 * 00000001800AD277: lea     rcx, dword_1801CA420
 * 00000001800AD27E: call    _Init_thread_footer
 * 00000001800AD283: mov     rax, [rdi+rbx*8]
 * 00000001800AD287: mov     eax, [r15+rax]
 * 00000001800AD28B: cmp     cs:dword_1801CA424, eax
 * 00000001800AD291: jle     loc_1800AD36E
 * 00000001800AD297: lea     rcx, dword_1801CA424
 * 00000001800AD29E: call    sub_18000CA40
 * 00000001800AD2A3: cmp     cs:dword_1801CA424, r14d
 * 00000001800AD2AA: jnz     loc_1800AD36E
 * 00000001800AD2B0: lea     rax, unk_180177460
 * 00000001800AD2B7: mov     qword ptr [rbp+9E40h+var_9730], rax
 * 00000001800AD2BE: lea     rax, unk_18017DB8C
 * 00000001800AD2C5: mov     qword ptr [rbp+9E40h+var_9730+8], rax
 * 00000001800AD2CC: movups  xmm7, [rbp+9E40h+var_9730]
 * 00000001800AD2D3: mov     dword ptr [rbp+9E40h+var_7DC0], 5
 * 00000001800AD2DD: mov     dword ptr [rbp+9E40h+var_7DC0+4], esi
 * 00000001800AD2E3: movups  xmm6, [rbp+9E40h+var_7DC0]
 * 00000001800AD2EA: call    sub_1800A5ED4
 * 00000001800AD2EF: mov     r8, rax
 * 00000001800AD2F2: mov     r9d, r12d
 * 00000001800AD2F5: mov     edx, 1C0h
 * 00000001800AD2FA: lea     rcx, [rbp+9E40h+var_3AF0]
 * 00000001800AD301: call    sub_1800737C8
 * 00000001800AD306: nop
 * 00000001800AD307: mov     r8, rax
 * 00000001800AD30A: mov     rdx, r13
 * 00000001800AD30D: lea     rcx, [rbp+9E40h+var_3B10]
 * 00000001800AD314: call    sub_18001B678
 * 00000001800AD319: nop
 * 00000001800AD31A: lea     r8, aPixel; "/Pixel"
 * 00000001800AD321: mov     rdx, rax
 * 00000001800AD324: lea     rcx, [rbp+9E40h+var_5A70]
 * 00000001800AD32B: call    sub_18001B5A8
 * 00000001800AD330: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD335: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD33A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD33F: mov     rcx, rax
 * 00000001800AD342: call    sub_18007386C
 * 00000001800AD347: nop
 * 00000001800AD348: lea     rcx, [rbp+9E40h+var_3B10]
 * 00000001800AD34F: call    sub_180011020
 * 00000001800AD354: nop
 * 00000001800AD355: lea     rcx, [rbp+9E40h+var_3AF0]
 * 00000001800AD35C: call    sub_180011020
 * 00000001800AD361: nop
 * 00000001800AD362: lea     rcx, dword_1801CA424
 * 00000001800AD369: call    _Init_thread_footer
 * 00000001800AD36E: mov     rax, [rdi+rbx*8]
 * 00000001800AD372: mov     eax, [r15+rax]
 * 00000001800AD376: cmp     cs:dword_1801CA428, eax
 * 00000001800AD37C: jle     loc_1800AD459
 * 00000001800AD382: lea     rcx, dword_1801CA428
 * 00000001800AD389: call    sub_18000CA40
 * 00000001800AD38E: cmp     cs:dword_1801CA428, r14d
 * 00000001800AD395: jnz     loc_1800AD459
 * 00000001800AD39B: lea     rax, unk_180177460
 * 00000001800AD3A2: mov     qword ptr [rbp+9E40h+var_9720], rax
 * 00000001800AD3A9: lea     rax, unk_18017DB8C
 * 00000001800AD3B0: mov     qword ptr [rbp+9E40h+var_9720+8], rax
 * 00000001800AD3B7: movups  xmm7, [rbp+9E40h+var_9720]
 * 00000001800AD3BE: mov     dword ptr [rbp+9E40h+var_7DA0], 5
 * 00000001800AD3C8: mov     dword ptr [rbp+9E40h+var_7DA0+4], esi
 * 00000001800AD3CE: movups  xmm6, [rbp+9E40h+var_7DA0]
 * 00000001800AD3D5: call    sub_1800A5ED4
 * 00000001800AD3DA: mov     r8, rax
 * 00000001800AD3DD: mov     r9d, r12d
 * 00000001800AD3E0: mov     edx, 1C2h
 * 00000001800AD3E5: lea     rcx, [rbp+9E40h+var_3A90]
 * 00000001800AD3EC: call    sub_1800737C8
 * 00000001800AD3F1: nop
 * 00000001800AD3F2: mov     r8, rax
 * 00000001800AD3F5: mov     rdx, r13
 * 00000001800AD3F8: lea     rcx, [rbp+9E40h+var_3AB0]
 * 00000001800AD3FF: call    sub_18001B678
 * 00000001800AD404: nop
 * 00000001800AD405: lea     r8, aPixel; "/Pixel"
 * 00000001800AD40C: mov     rdx, rax
 * 00000001800AD40F: lea     rcx, [rbp+9E40h+var_5A50]
 * 00000001800AD416: call    sub_18001B5A8
 * 00000001800AD41B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD420: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD425: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD42A: mov     rcx, rax
 * 00000001800AD42D: call    sub_18007386C
 * 00000001800AD432: nop
 * 00000001800AD433: lea     rcx, [rbp+9E40h+var_3AB0]
 * 00000001800AD43A: call    sub_180011020
 * 00000001800AD43F: nop
 * 00000001800AD440: lea     rcx, [rbp+9E40h+var_3A90]
 * 00000001800AD447: call    sub_180011020
 * 00000001800AD44C: nop
 * 00000001800AD44D: lea     rcx, dword_1801CA428
 * 00000001800AD454: call    _Init_thread_footer
 * 00000001800AD459: mov     rax, [rdi+rbx*8]
 * 00000001800AD45D: mov     eax, [r15+rax]
 * 00000001800AD461: cmp     cs:dword_1801CA42C, eax
 * 00000001800AD467: jle     loc_1800AD544
 * 00000001800AD46D: lea     rcx, dword_1801CA42C
 * 00000001800AD474: call    sub_18000CA40
 * 00000001800AD479: cmp     cs:dword_1801CA42C, r14d
 * 00000001800AD480: jnz     loc_1800AD544
 * 00000001800AD486: lea     rax, unk_180148920
 * 00000001800AD48D: mov     qword ptr [rbp+9E40h+var_9710], rax
 * 00000001800AD494: lea     rax, unk_18014F1DC
 * 00000001800AD49B: mov     qword ptr [rbp+9E40h+var_9710+8], rax
 * 00000001800AD4A2: movups  xmm7, [rbp+9E40h+var_9710]
 * 00000001800AD4A9: mov     dword ptr [rbp+9E40h+var_7D80], 5
 * 00000001800AD4B3: mov     dword ptr [rbp+9E40h+var_7D80+4], esi
 * 00000001800AD4B9: movups  xmm6, [rbp+9E40h+var_7D80]
 * 00000001800AD4C0: call    sub_1800A5ED4
 * 00000001800AD4C5: mov     r8, rax
 * 00000001800AD4C8: mov     r9d, r12d
 * 00000001800AD4CB: mov     edx, 1C8h
 * 00000001800AD4D0: lea     rcx, [rbp+9E40h+var_3A30]
 * 00000001800AD4D7: call    sub_1800737C8
 * 00000001800AD4DC: nop
 * 00000001800AD4DD: mov     r8, rax
 * 00000001800AD4E0: mov     rdx, r13
 * 00000001800AD4E3: lea     rcx, [rbp+9E40h+var_3A50]
 * 00000001800AD4EA: call    sub_18001B678
 * 00000001800AD4EF: nop
 * 00000001800AD4F0: lea     r8, aPixel; "/Pixel"
 * 00000001800AD4F7: mov     rdx, rax
 * 00000001800AD4FA: lea     rcx, [rbp+9E40h+var_5A30]
 * 00000001800AD501: call    sub_18001B5A8
 * 00000001800AD506: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD50B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD510: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD515: mov     rcx, rax
 * 00000001800AD518: call    sub_18007386C
 * 00000001800AD51D: nop
 * 00000001800AD51E: lea     rcx, [rbp+9E40h+var_3A50]
 * 00000001800AD525: call    sub_180011020
 * 00000001800AD52A: nop
 * 00000001800AD52B: lea     rcx, [rbp+9E40h+var_3A30]
 * 00000001800AD532: call    sub_180011020
 * 00000001800AD537: nop
 * 00000001800AD538: lea     rcx, dword_1801CA42C
 * 00000001800AD53F: call    _Init_thread_footer
 * 00000001800AD544: mov     rax, [rdi+rbx*8]
 * 00000001800AD548: mov     eax, [r15+rax]
 * 00000001800AD54C: cmp     cs:dword_1801CA430, eax
 * 00000001800AD552: jle     loc_1800AD62F
 * 00000001800AD558: lea     rcx, dword_1801CA430
 * 00000001800AD55F: call    sub_18000CA40
 * 00000001800AD564: cmp     cs:dword_1801CA430, r14d
 * 00000001800AD56B: jnz     loc_1800AD62F
 * 00000001800AD571: lea     rax, unk_180148920
 * 00000001800AD578: mov     qword ptr [rbp+9E40h+var_9700], rax
 * 00000001800AD57F: lea     rax, unk_18014F1DC
 * 00000001800AD586: mov     qword ptr [rbp+9E40h+var_9700+8], rax
 * 00000001800AD58D: movups  xmm7, [rbp+9E40h+var_9700]
 * 00000001800AD594: mov     dword ptr [rbp+9E40h+var_7D60], 5
 * 00000001800AD59E: mov     dword ptr [rbp+9E40h+var_7D60+4], esi
 * 00000001800AD5A4: movups  xmm6, [rbp+9E40h+var_7D60]
 * 00000001800AD5AB: call    sub_1800A5ED4
 * 00000001800AD5B0: mov     r8, rax
 * 00000001800AD5B3: mov     r9d, r12d
 * 00000001800AD5B6: mov     edx, 1CAh
 * 00000001800AD5BB: lea     rcx, [rbp+9E40h+var_39D0]
 * 00000001800AD5C2: call    sub_1800737C8
 * 00000001800AD5C7: nop
 * 00000001800AD5C8: mov     r8, rax
 * 00000001800AD5CB: mov     rdx, r13
 * 00000001800AD5CE: lea     rcx, [rbp+9E40h+var_39F0]
 * 00000001800AD5D5: call    sub_18001B678
 * 00000001800AD5DA: nop
 * 00000001800AD5DB: lea     r8, aPixel; "/Pixel"
 * 00000001800AD5E2: mov     rdx, rax
 * 00000001800AD5E5: lea     rcx, [rbp+9E40h+var_5A10]
 * 00000001800AD5EC: call    sub_18001B5A8
 * 00000001800AD5F1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD5F6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD5FB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD600: mov     rcx, rax
 * 00000001800AD603: call    sub_18007386C
 * 00000001800AD608: nop
 * 00000001800AD609: lea     rcx, [rbp+9E40h+var_39F0]
 * 00000001800AD610: call    sub_180011020
 * 00000001800AD615: nop
 * 00000001800AD616: lea     rcx, [rbp+9E40h+var_39D0]
 * 00000001800AD61D: call    sub_180011020
 * 00000001800AD622: nop
 * 00000001800AD623: lea     rcx, dword_1801CA430
 * 00000001800AD62A: call    _Init_thread_footer
 * 00000001800AD62F: mov     rax, [rdi+rbx*8]
 * 00000001800AD633: mov     eax, [r15+rax]
 * 00000001800AD637: cmp     cs:dword_1801CA434, eax
 * 00000001800AD63D: jle     loc_1800AD71A
 * 00000001800AD643: lea     rcx, dword_1801CA434
 * 00000001800AD64A: call    sub_18000CA40
 * 00000001800AD64F: cmp     cs:dword_1801CA434, r14d
 * 00000001800AD656: jnz     loc_1800AD71A
 * 00000001800AD65C: lea     rax, unk_180159180
 * 00000001800AD663: mov     qword ptr [rbp+9E40h+var_96F0], rax
 * 00000001800AD66A: lea     rax, unk_18015FA88
 * 00000001800AD671: mov     qword ptr [rbp+9E40h+var_96F0+8], rax
 * 00000001800AD678: movups  xmm7, [rbp+9E40h+var_96F0]
 * 00000001800AD67F: mov     dword ptr [rbp+9E40h+var_7D40], 5
 * 00000001800AD689: mov     dword ptr [rbp+9E40h+var_7D40+4], esi
 * 00000001800AD68F: movups  xmm6, [rbp+9E40h+var_7D40]
 * 00000001800AD696: call    sub_1800A5ED4
 * 00000001800AD69B: mov     r8, rax
 * 00000001800AD69E: mov     r9d, r12d
 * 00000001800AD6A1: mov     edx, 1D0h
 * 00000001800AD6A6: lea     rcx, [rbp+9E40h+var_3970]
 * 00000001800AD6AD: call    sub_1800737C8
 * 00000001800AD6B2: nop
 * 00000001800AD6B3: mov     r8, rax
 * 00000001800AD6B6: mov     rdx, r13
 * 00000001800AD6B9: lea     rcx, [rbp+9E40h+var_3990]
 * 00000001800AD6C0: call    sub_18001B678
 * 00000001800AD6C5: nop
 * 00000001800AD6C6: lea     r8, aPixel; "/Pixel"
 * 00000001800AD6CD: mov     rdx, rax
 * 00000001800AD6D0: lea     rcx, [rbp+9E40h+var_59F0]
 * 00000001800AD6D7: call    sub_18001B5A8
 * 00000001800AD6DC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD6E1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD6E6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD6EB: mov     rcx, rax
 * 00000001800AD6EE: call    sub_18007386C
 * 00000001800AD6F3: nop
 * 00000001800AD6F4: lea     rcx, [rbp+9E40h+var_3990]
 * 00000001800AD6FB: call    sub_180011020
 * 00000001800AD700: nop
 * 00000001800AD701: lea     rcx, [rbp+9E40h+var_3970]
 * 00000001800AD708: call    sub_180011020
 * 00000001800AD70D: nop
 * 00000001800AD70E: lea     rcx, dword_1801CA434
 * 00000001800AD715: call    _Init_thread_footer
 * 00000001800AD71A: mov     rax, [rdi+rbx*8]
 * 00000001800AD71E: mov     eax, [r15+rax]
 * 00000001800AD722: cmp     cs:dword_1801CA438, eax
 * 00000001800AD728: jle     loc_1800AD805
 * 00000001800AD72E: lea     rcx, dword_1801CA438
 * 00000001800AD735: call    sub_18000CA40
 * 00000001800AD73A: cmp     cs:dword_1801CA438, r14d
 * 00000001800AD741: jnz     loc_1800AD805
 * 00000001800AD747: lea     rax, unk_180159180
 * 00000001800AD74E: mov     qword ptr [rbp+9E40h+var_96E0], rax
 * 00000001800AD755: lea     rax, unk_18015FA88
 * 00000001800AD75C: mov     qword ptr [rbp+9E40h+var_96E0+8], rax
 * 00000001800AD763: movups  xmm7, [rbp+9E40h+var_96E0]
 * 00000001800AD76A: mov     dword ptr [rbp+9E40h+var_7D20], 5
 * 00000001800AD774: mov     dword ptr [rbp+9E40h+var_7D20+4], esi
 * 00000001800AD77A: movups  xmm6, [rbp+9E40h+var_7D20]
 * 00000001800AD781: call    sub_1800A5ED4
 * 00000001800AD786: mov     r8, rax
 * 00000001800AD789: mov     r9d, r12d
 * 00000001800AD78C: mov     edx, 1D2h
 * 00000001800AD791: lea     rcx, [rbp+9E40h+var_3910]
 * 00000001800AD798: call    sub_1800737C8
 * 00000001800AD79D: nop
 * 00000001800AD79E: mov     r8, rax
 * 00000001800AD7A1: mov     rdx, r13
 * 00000001800AD7A4: lea     rcx, [rbp+9E40h+var_3930]
 * 00000001800AD7AB: call    sub_18001B678
 * 00000001800AD7B0: nop
 * 00000001800AD7B1: lea     r8, aPixel; "/Pixel"
 * 00000001800AD7B8: mov     rdx, rax
 * 00000001800AD7BB: lea     rcx, [rbp+9E40h+var_59D0]
 * 00000001800AD7C2: call    sub_18001B5A8
 * 00000001800AD7C7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD7CC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD7D1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD7D6: mov     rcx, rax
 * 00000001800AD7D9: call    sub_18007386C
 * 00000001800AD7DE: nop
 * 00000001800AD7DF: lea     rcx, [rbp+9E40h+var_3930]
 * 00000001800AD7E6: call    sub_180011020
 * 00000001800AD7EB: nop
 * 00000001800AD7EC: lea     rcx, [rbp+9E40h+var_3910]
 * 00000001800AD7F3: call    sub_180011020
 * 00000001800AD7F8: nop
 * 00000001800AD7F9: lea     rcx, dword_1801CA438
 * 00000001800AD800: call    _Init_thread_footer
 * 00000001800AD805: mov     rax, [rdi+rbx*8]
 * 00000001800AD809: mov     eax, [r15+rax]
 * 00000001800AD80D: cmp     cs:dword_1801CA43C, eax
 * 00000001800AD813: jle     loc_1800AD8F0
 * 00000001800AD819: lea     rcx, dword_1801CA43C
 * 00000001800AD820: call    sub_18000CA40
 * 00000001800AD825: cmp     cs:dword_1801CA43C, r14d
 * 00000001800AD82C: jnz     loc_1800AD8F0
 * 00000001800AD832: lea     rax, unk_1801526C0
 * 00000001800AD839: mov     qword ptr [rbp+9E40h+var_96D0], rax
 * 00000001800AD840: lea     rax, unk_18015917C
 * 00000001800AD847: mov     qword ptr [rbp+9E40h+var_96D0+8], rax
 * 00000001800AD84E: movups  xmm7, [rbp+9E40h+var_96D0]
 * 00000001800AD855: mov     dword ptr [rbp+9E40h+var_7D00], 5
 * 00000001800AD85F: mov     dword ptr [rbp+9E40h+var_7D00+4], esi
 * 00000001800AD865: movups  xmm6, [rbp+9E40h+var_7D00]
 * 00000001800AD86C: call    sub_1800A5ED4
 * 00000001800AD871: mov     r8, rax
 * 00000001800AD874: mov     r9d, r12d
 * 00000001800AD877: mov     edx, 1D8h
 * 00000001800AD87C: lea     rcx, [rbp+9E40h+var_38B0]
 * 00000001800AD883: call    sub_1800737C8
 * 00000001800AD888: nop
 * 00000001800AD889: mov     r8, rax
 * 00000001800AD88C: mov     rdx, r13
 * 00000001800AD88F: lea     rcx, [rbp+9E40h+var_38D0]
 * 00000001800AD896: call    sub_18001B678
 * 00000001800AD89B: nop
 * 00000001800AD89C: lea     r8, aPixel; "/Pixel"
 * 00000001800AD8A3: mov     rdx, rax
 * 00000001800AD8A6: lea     rcx, [rbp+9E40h+var_59B0]
 * 00000001800AD8AD: call    sub_18001B5A8
 * 00000001800AD8B2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD8B7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD8BC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD8C1: mov     rcx, rax
 * 00000001800AD8C4: call    sub_18007386C
 * 00000001800AD8C9: nop
 * 00000001800AD8CA: lea     rcx, [rbp+9E40h+var_38D0]
 * 00000001800AD8D1: call    sub_180011020
 * 00000001800AD8D6: nop
 * 00000001800AD8D7: lea     rcx, [rbp+9E40h+var_38B0]
 * 00000001800AD8DE: call    sub_180011020
 * 00000001800AD8E3: nop
 * 00000001800AD8E4: lea     rcx, dword_1801CA43C
 * 00000001800AD8EB: call    _Init_thread_footer
 * 00000001800AD8F0: mov     rax, [rdi+rbx*8]
 * 00000001800AD8F4: mov     eax, [r15+rax]
 * 00000001800AD8F8: cmp     cs:dword_1801CA440, eax
 * 00000001800AD8FE: jle     loc_1800AD9DB
 * 00000001800AD904: lea     rcx, dword_1801CA440
 * 00000001800AD90B: call    sub_18000CA40
 * 00000001800AD910: cmp     cs:dword_1801CA440, r14d
 * 00000001800AD917: jnz     loc_1800AD9DB
 * 00000001800AD91D: lea     rax, unk_1801526C0
 * 00000001800AD924: mov     qword ptr [rbp+9E40h+var_96C0], rax
 * 00000001800AD92B: lea     rax, unk_18015917C
 * 00000001800AD932: mov     qword ptr [rbp+9E40h+var_96C0+8], rax
 * 00000001800AD939: movups  xmm7, [rbp+9E40h+var_96C0]
 * 00000001800AD940: mov     dword ptr [rbp+9E40h+var_7CE0], 5
 * 00000001800AD94A: mov     dword ptr [rbp+9E40h+var_7CE0+4], esi
 * 00000001800AD950: movups  xmm6, [rbp+9E40h+var_7CE0]
 * 00000001800AD957: call    sub_1800A5ED4
 * 00000001800AD95C: mov     r8, rax
 * 00000001800AD95F: mov     r9d, r12d
 * 00000001800AD962: mov     edx, 1DAh
 * 00000001800AD967: lea     rcx, [rbp+9E40h+var_3850]
 * 00000001800AD96E: call    sub_1800737C8
 * 00000001800AD973: nop
 * 00000001800AD974: mov     r8, rax
 * 00000001800AD977: mov     rdx, r13
 * 00000001800AD97A: lea     rcx, [rbp+9E40h+var_3870]
 * 00000001800AD981: call    sub_18001B678
 * 00000001800AD986: nop
 * 00000001800AD987: lea     r8, aPixel; "/Pixel"
 * 00000001800AD98E: mov     rdx, rax
 * 00000001800AD991: lea     rcx, [rbp+9E40h+var_5990]
 * 00000001800AD998: call    sub_18001B5A8
 * 00000001800AD99D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD9A2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD9A7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD9AC: mov     rcx, rax
 * 00000001800AD9AF: call    sub_18007386C
 * 00000001800AD9B4: nop
 * 00000001800AD9B5: lea     rcx, [rbp+9E40h+var_3870]
 * 00000001800AD9BC: call    sub_180011020
 * 00000001800AD9C1: nop
 * 00000001800AD9C2: lea     rcx, [rbp+9E40h+var_3850]
 * 00000001800AD9C9: call    sub_180011020
 * 00000001800AD9CE: nop
 * 00000001800AD9CF: lea     rcx, dword_1801CA440
 * 00000001800AD9D6: call    _Init_thread_footer
 * 00000001800AD9DB: mov     rax, [rdi+rbx*8]
 * 00000001800AD9DF: mov     eax, [r15+rax]
 * 00000001800AD9E3: cmp     cs:dword_1801CA444, eax
 * 00000001800AD9E9: jle     loc_1800ADAC6
 * 00000001800AD9EF: lea     rcx, dword_1801CA444
 * 00000001800AD9F6: call    sub_18000CA40
 * 00000001800AD9FB: cmp     cs:dword_1801CA444, r14d
 * 00000001800ADA02: jnz     loc_1800ADAC6
 * 00000001800ADA08: lea     rax, unk_180177460
 * 00000001800ADA0F: mov     qword ptr [rbp+9E40h+var_96B0], rax
 * 00000001800ADA16: lea     rax, unk_18017DB8C
 * 00000001800ADA1D: mov     qword ptr [rbp+9E40h+var_96B0+8], rax
 * 00000001800ADA24: movups  xmm7, [rbp+9E40h+var_96B0]
 * 00000001800ADA2B: mov     dword ptr [rbp+9E40h+var_7CC0], 5
 * 00000001800ADA35: mov     dword ptr [rbp+9E40h+var_7CC0+4], esi
 * 00000001800ADA3B: movups  xmm6, [rbp+9E40h+var_7CC0]
 * 00000001800ADA42: call    sub_1800A5ED4
 * 00000001800ADA47: mov     r8, rax
 * 00000001800ADA4A: mov     r9d, r12d
 * 00000001800ADA4D: mov     edx, 1E0h
 * 00000001800ADA52: lea     rcx, [rbp+9E40h+var_37F0]
 * 00000001800ADA59: call    sub_1800737C8
 * 00000001800ADA5E: nop
 * 00000001800ADA5F: mov     r8, rax
 * 00000001800ADA62: mov     rdx, r13
 * 00000001800ADA65: lea     rcx, [rbp+9E40h+var_3810]
 * 00000001800ADA6C: call    sub_18001B678
 * 00000001800ADA71: nop
 * 00000001800ADA72: lea     r8, aPixel; "/Pixel"
 * 00000001800ADA79: mov     rdx, rax
 * 00000001800ADA7C: lea     rcx, [rbp+9E40h+var_5970]
 * 00000001800ADA83: call    sub_18001B5A8
 * 00000001800ADA88: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADA8D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADA92: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADA97: mov     rcx, rax
 * 00000001800ADA9A: call    sub_18007386C
 * 00000001800ADA9F: nop
 * 00000001800ADAA0: lea     rcx, [rbp+9E40h+var_3810]
 * 00000001800ADAA7: call    sub_180011020
 * 00000001800ADAAC: nop
 * 00000001800ADAAD: lea     rcx, [rbp+9E40h+var_37F0]
 * 00000001800ADAB4: call    sub_180011020
 * 00000001800ADAB9: nop
 * 00000001800ADABA: lea     rcx, dword_1801CA444
 * 00000001800ADAC1: call    _Init_thread_footer
 * 00000001800ADAC6: mov     rax, [rdi+rbx*8]
 * 00000001800ADACA: mov     eax, [r15+rax]
 * 00000001800ADACE: cmp     cs:dword_1801CA448, eax
 * 00000001800ADAD4: jle     loc_1800ADBB1
 * 00000001800ADADA: lea     rcx, dword_1801CA448
 * 00000001800ADAE1: call    sub_18000CA40
 * 00000001800ADAE6: cmp     cs:dword_1801CA448, r14d
 * 00000001800ADAED: jnz     loc_1800ADBB1
 * 00000001800ADAF3: lea     rax, unk_180177460
 * 00000001800ADAFA: mov     qword ptr [rbp+9E40h+var_96A0], rax
 * 00000001800ADB01: lea     rax, unk_18017DB8C
 * 00000001800ADB08: mov     qword ptr [rbp+9E40h+var_96A0+8], rax
 * 00000001800ADB0F: movups  xmm7, [rbp+9E40h+var_96A0]
 * 00000001800ADB16: mov     dword ptr [rbp+9E40h+var_7CA0], 5
 * 00000001800ADB20: mov     dword ptr [rbp+9E40h+var_7CA0+4], esi
 * 00000001800ADB26: movups  xmm6, [rbp+9E40h+var_7CA0]
 * 00000001800ADB2D: call    sub_1800A5ED4
 * 00000001800ADB32: mov     r8, rax
 * 00000001800ADB35: mov     r9d, r12d
 * 00000001800ADB38: mov     edx, 1E2h
 * 00000001800ADB3D: lea     rcx, [rbp+9E40h+var_3790]
 * 00000001800ADB44: call    sub_1800737C8
 * 00000001800ADB49: nop
 * 00000001800ADB4A: mov     r8, rax
 * 00000001800ADB4D: mov     rdx, r13
 * 00000001800ADB50: lea     rcx, [rbp+9E40h+var_37B0]
 * 00000001800ADB57: call    sub_18001B678
 * 00000001800ADB5C: nop
 * 00000001800ADB5D: lea     r8, aPixel; "/Pixel"
 * 00000001800ADB64: mov     rdx, rax
 * 00000001800ADB67: lea     rcx, [rbp+9E40h+var_5950]
 * 00000001800ADB6E: call    sub_18001B5A8
 * 00000001800ADB73: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADB78: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADB7D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADB82: mov     rcx, rax
 * 00000001800ADB85: call    sub_18007386C
 * 00000001800ADB8A: nop
 * 00000001800ADB8B: lea     rcx, [rbp+9E40h+var_37B0]
 * 00000001800ADB92: call    sub_180011020
 * 00000001800ADB97: nop
 * 00000001800ADB98: lea     rcx, [rbp+9E40h+var_3790]
 * 00000001800ADB9F: call    sub_180011020
 * 00000001800ADBA4: nop
 * 00000001800ADBA5: lea     rcx, dword_1801CA448
 * 00000001800ADBAC: call    _Init_thread_footer
 * 00000001800ADBB1: mov     rax, [rdi+rbx*8]
 * 00000001800ADBB5: mov     eax, [r15+rax]
 * 00000001800ADBB9: cmp     cs:dword_1801CA44C, eax
 * 00000001800ADBBF: jle     loc_1800ADC9C
 * 00000001800ADBC5: lea     rcx, dword_1801CA44C
 * 00000001800ADBCC: call    sub_18000CA40
 * 00000001800ADBD1: cmp     cs:dword_1801CA44C, r14d
 * 00000001800ADBD8: jnz     loc_1800ADC9C
 * 00000001800ADBDE: lea     rax, unk_180148920
 * 00000001800ADBE5: mov     qword ptr [rbp+9E40h+var_9690], rax
 * 00000001800ADBEC: lea     rax, unk_18014F1DC
 * 00000001800ADBF3: mov     qword ptr [rbp+9E40h+var_9690+8], rax
 * 00000001800ADBFA: movups  xmm7, [rbp+9E40h+var_9690]
 * 00000001800ADC01: mov     dword ptr [rbp+9E40h+var_7C80], 5
 * 00000001800ADC0B: mov     dword ptr [rbp+9E40h+var_7C80+4], esi
 * 00000001800ADC11: movups  xmm6, [rbp+9E40h+var_7C80]
 * 00000001800ADC18: call    sub_1800A5ED4
 * 00000001800ADC1D: mov     r8, rax
 * 00000001800ADC20: mov     r9d, r12d
 * 00000001800ADC23: mov     edx, 1E8h
 * 00000001800ADC28: lea     rcx, [rbp+9E40h+var_3730]
 * 00000001800ADC2F: call    sub_1800737C8
 * 00000001800ADC34: nop
 * 00000001800ADC35: mov     r8, rax
 * 00000001800ADC38: mov     rdx, r13
 * 00000001800ADC3B: lea     rcx, [rbp+9E40h+var_3750]
 * 00000001800ADC42: call    sub_18001B678
 * 00000001800ADC47: nop
 * 00000001800ADC48: lea     r8, aPixel; "/Pixel"
 * 00000001800ADC4F: mov     rdx, rax
 * 00000001800ADC52: lea     rcx, [rbp+9E40h+var_5930]
 * 00000001800ADC59: call    sub_18001B5A8
 * 00000001800ADC5E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADC63: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADC68: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADC6D: mov     rcx, rax
 * 00000001800ADC70: call    sub_18007386C
 * 00000001800ADC75: nop
 * 00000001800ADC76: lea     rcx, [rbp+9E40h+var_3750]
 * 00000001800ADC7D: call    sub_180011020
 * 00000001800ADC82: nop
 * 00000001800ADC83: lea     rcx, [rbp+9E40h+var_3730]
 * 00000001800ADC8A: call    sub_180011020
 * 00000001800ADC8F: nop
 * 00000001800ADC90: lea     rcx, dword_1801CA44C
 * 00000001800ADC97: call    _Init_thread_footer
 * 00000001800ADC9C: mov     rax, [rdi+rbx*8]
 * 00000001800ADCA0: mov     eax, [r15+rax]
 * 00000001800ADCA4: cmp     cs:dword_1801CA450, eax
 * 00000001800ADCAA: jle     loc_1800ADD87
 * 00000001800ADCB0: lea     rcx, dword_1801CA450
 * 00000001800ADCB7: call    sub_18000CA40
 * 00000001800ADCBC: cmp     cs:dword_1801CA450, r14d
 * 00000001800ADCC3: jnz     loc_1800ADD87
 * 00000001800ADCC9: lea     rax, unk_180148920
 * 00000001800ADCD0: mov     qword ptr [rbp+9E40h+var_9680], rax
 * 00000001800ADCD7: lea     rax, unk_18014F1DC
 * 00000001800ADCDE: mov     qword ptr [rbp+9E40h+var_9680+8], rax
 * 00000001800ADCE5: movups  xmm7, [rbp+9E40h+var_9680]
 * 00000001800ADCEC: mov     dword ptr [rbp+9E40h+var_7C60], 5
 * 00000001800ADCF6: mov     dword ptr [rbp+9E40h+var_7C60+4], esi
 * 00000001800ADCFC: movups  xmm6, [rbp+9E40h+var_7C60]
 * 00000001800ADD03: call    sub_1800A5ED4
 * 00000001800ADD08: mov     r8, rax
 * 00000001800ADD0B: mov     r9d, r12d
 * 00000001800ADD0E: mov     edx, 1EAh
 * 00000001800ADD13: lea     rcx, [rbp+9E40h+var_36D0]
 * 00000001800ADD1A: call    sub_1800737C8
 * 00000001800ADD1F: nop
 * 00000001800ADD20: mov     r8, rax
 * 00000001800ADD23: mov     rdx, r13
 * 00000001800ADD26: lea     rcx, [rbp+9E40h+var_36F0]
 * 00000001800ADD2D: call    sub_18001B678
 * 00000001800ADD32: nop
 * 00000001800ADD33: lea     r8, aPixel; "/Pixel"
 * 00000001800ADD3A: mov     rdx, rax
 * 00000001800ADD3D: lea     rcx, [rbp+9E40h+var_5910]
 * 00000001800ADD44: call    sub_18001B5A8
 * 00000001800ADD49: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADD4E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADD53: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADD58: mov     rcx, rax
 * 00000001800ADD5B: call    sub_18007386C
 * 00000001800ADD60: nop
 * 00000001800ADD61: lea     rcx, [rbp+9E40h+var_36F0]
 * 00000001800ADD68: call    sub_180011020
 * 00000001800ADD6D: nop
 * 00000001800ADD6E: lea     rcx, [rbp+9E40h+var_36D0]
 * 00000001800ADD75: call    sub_180011020
 * 00000001800ADD7A: nop
 * 00000001800ADD7B: lea     rcx, dword_1801CA450
 * 00000001800ADD82: call    _Init_thread_footer
 * 00000001800ADD87: mov     rax, [rdi+rbx*8]
 * 00000001800ADD8B: mov     eax, [r15+rax]
 * 00000001800ADD8F: cmp     cs:dword_1801CA454, eax
 * 00000001800ADD95: jle     loc_1800ADE72
 * 00000001800ADD9B: lea     rcx, dword_1801CA454
 * 00000001800ADDA2: call    sub_18000CA40
 * 00000001800ADDA7: cmp     cs:dword_1801CA454, r14d
 * 00000001800ADDAE: jnz     loc_1800ADE72
 * 00000001800ADDB4: lea     rax, unk_180159180
 * 00000001800ADDBB: mov     qword ptr [rbp+9E40h+var_9670], rax
 * 00000001800ADDC2: lea     rax, unk_18015FA88
 * 00000001800ADDC9: mov     qword ptr [rbp+9E40h+var_9670+8], rax
 * 00000001800ADDD0: movups  xmm7, [rbp+9E40h+var_9670]
 * 00000001800ADDD7: mov     dword ptr [rbp+9E40h+var_7C40], 5
 * 00000001800ADDE1: mov     dword ptr [rbp+9E40h+var_7C40+4], esi
 * 00000001800ADDE7: movups  xmm6, [rbp+9E40h+var_7C40]
 * 00000001800ADDEE: call    sub_1800A5ED4
 * 00000001800ADDF3: mov     r8, rax
 * 00000001800ADDF6: mov     r9d, r12d
 * 00000001800ADDF9: mov     edx, 1F0h
 * 00000001800ADDFE: lea     rcx, [rbp+9E40h+var_3670]
 * 00000001800ADE05: call    sub_1800737C8
 * 00000001800ADE0A: nop
 * 00000001800ADE0B: mov     r8, rax
 * 00000001800ADE0E: mov     rdx, r13
 * 00000001800ADE11: lea     rcx, [rbp+9E40h+var_3690]
 * 00000001800ADE18: call    sub_18001B678
 * 00000001800ADE1D: nop
 * 00000001800ADE1E: lea     r8, aPixel; "/Pixel"
 * 00000001800ADE25: mov     rdx, rax
 * 00000001800ADE28: lea     rcx, [rbp+9E40h+var_58F0]
 * 00000001800ADE2F: call    sub_18001B5A8
 * 00000001800ADE34: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADE39: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADE3E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADE43: mov     rcx, rax
 * 00000001800ADE46: call    sub_18007386C
 * 00000001800ADE4B: nop
 * 00000001800ADE4C: lea     rcx, [rbp+9E40h+var_3690]
 * 00000001800ADE53: call    sub_180011020
 * 00000001800ADE58: nop
 * 00000001800ADE59: lea     rcx, [rbp+9E40h+var_3670]
 * 00000001800ADE60: call    sub_180011020
 * 00000001800ADE65: nop
 * 00000001800ADE66: lea     rcx, dword_1801CA454
 * 00000001800ADE6D: call    _Init_thread_footer
 * 00000001800ADE72: mov     rax, [rdi+rbx*8]
 * 00000001800ADE76: mov     eax, [r15+rax]
 * 00000001800ADE7A: cmp     cs:dword_1801CA458, eax
 * 00000001800ADE80: jle     loc_1800ADF5D
 * 00000001800ADE86: lea     rcx, dword_1801CA458
 * 00000001800ADE8D: call    sub_18000CA40
 * 00000001800ADE92: cmp     cs:dword_1801CA458, r14d
 * 00000001800ADE99: jnz     loc_1800ADF5D
 * 00000001800ADE9F: lea     rax, unk_180159180
 * 00000001800ADEA6: mov     qword ptr [rbp+9E40h+var_9660], rax
 * 00000001800ADEAD: lea     rax, unk_18015FA88
 * 00000001800ADEB4: mov     qword ptr [rbp+9E40h+var_9660+8], rax
 * 00000001800ADEBB: movups  xmm7, [rbp+9E40h+var_9660]
 * 00000001800ADEC2: mov     dword ptr [rbp+9E40h+var_7C20], 5
 * 00000001800ADECC: mov     dword ptr [rbp+9E40h+var_7C20+4], esi
 * 00000001800ADED2: movups  xmm6, [rbp+9E40h+var_7C20]
 * 00000001800ADED9: call    sub_1800A5ED4
 * 00000001800ADEDE: mov     r8, rax
 * 00000001800ADEE1: mov     r9d, r12d
 * 00000001800ADEE4: mov     edx, 1F2h
 * 00000001800ADEE9: lea     rcx, [rbp+9E40h+var_3610]
 * 00000001800ADEF0: call    sub_1800737C8
 * 00000001800ADEF5: nop
 * 00000001800ADEF6: mov     r8, rax
 * 00000001800ADEF9: mov     rdx, r13
 * 00000001800ADEFC: lea     rcx, [rbp+9E40h+var_3630]
 * 00000001800ADF03: call    sub_18001B678
 * 00000001800ADF08: nop
 * 00000001800ADF09: lea     r8, aPixel; "/Pixel"
 * 00000001800ADF10: mov     rdx, rax
 * 00000001800ADF13: lea     rcx, [rbp+9E40h+var_58D0]
 * 00000001800ADF1A: call    sub_18001B5A8
 * 00000001800ADF1F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADF24: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADF29: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADF2E: mov     rcx, rax
 * 00000001800ADF31: call    sub_18007386C
 * 00000001800ADF36: nop
 * 00000001800ADF37: lea     rcx, [rbp+9E40h+var_3630]
 * 00000001800ADF3E: call    sub_180011020
 * 00000001800ADF43: nop
 * 00000001800ADF44: lea     rcx, [rbp+9E40h+var_3610]
 * 00000001800ADF4B: call    sub_180011020
 * 00000001800ADF50: nop
 * 00000001800ADF51: lea     rcx, dword_1801CA458
 * 00000001800ADF58: call    _Init_thread_footer
 * 00000001800ADF5D: mov     rax, [rdi+rbx*8]
 * 00000001800ADF61: mov     eax, [r15+rax]
 * 00000001800ADF65: cmp     cs:dword_1801CA45C, eax
 * 00000001800ADF6B: jle     loc_1800AE048
 * 00000001800ADF71: lea     rcx, dword_1801CA45C
 * 00000001800ADF78: call    sub_18000CA40
 * 00000001800ADF7D: cmp     cs:dword_1801CA45C, r14d
 * 00000001800ADF84: jnz     loc_1800AE048
 * 00000001800ADF8A: lea     rax, unk_1801526C0
 * 00000001800ADF91: mov     qword ptr [rbp+9E40h+var_9650], rax
 * 00000001800ADF98: lea     rax, unk_18015917C
 * 00000001800ADF9F: mov     qword ptr [rbp+9E40h+var_9650+8], rax
 * 00000001800ADFA6: movups  xmm7, [rbp+9E40h+var_9650]
 * 00000001800ADFAD: mov     dword ptr [rbp+9E40h+var_7C00], 5
 * 00000001800ADFB7: mov     dword ptr [rbp+9E40h+var_7C00+4], esi
 * 00000001800ADFBD: movups  xmm6, [rbp+9E40h+var_7C00]
 * 00000001800ADFC4: call    sub_1800A5ED4
 * 00000001800ADFC9: mov     r8, rax
 * 00000001800ADFCC: mov     r9d, r12d
 * 00000001800ADFCF: mov     edx, 1F8h
 * 00000001800ADFD4: lea     rcx, [rbp+9E40h+var_35B0]
 * 00000001800ADFDB: call    sub_1800737C8
 * 00000001800ADFE0: nop
 * 00000001800ADFE1: mov     r8, rax
 * 00000001800ADFE4: mov     rdx, r13
 * 00000001800ADFE7: lea     rcx, [rbp+9E40h+var_35D0]
 * 00000001800ADFEE: call    sub_18001B678
 * 00000001800ADFF3: nop
 * 00000001800ADFF4: lea     r8, aPixel; "/Pixel"
 * 00000001800ADFFB: mov     rdx, rax
 * 00000001800ADFFE: lea     rcx, [rbp+9E40h+var_58B0]
 * 00000001800AE005: call    sub_18001B5A8
 * 00000001800AE00A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE00F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE014: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE019: mov     rcx, rax
 * 00000001800AE01C: call    sub_18007386C
 * 00000001800AE021: nop
 * 00000001800AE022: lea     rcx, [rbp+9E40h+var_35D0]
 * 00000001800AE029: call    sub_180011020
 * 00000001800AE02E: nop
 * 00000001800AE02F: lea     rcx, [rbp+9E40h+var_35B0]
 * 00000001800AE036: call    sub_180011020
 * 00000001800AE03B: nop
 * 00000001800AE03C: lea     rcx, dword_1801CA45C
 * 00000001800AE043: call    _Init_thread_footer
 * 00000001800AE048: mov     rax, [rdi+rbx*8]
 * 00000001800AE04C: mov     eax, [r15+rax]
 * 00000001800AE050: cmp     cs:dword_1801CA460, eax
 * 00000001800AE056: jle     loc_1800AE133
 * 00000001800AE05C: lea     rcx, dword_1801CA460
 * 00000001800AE063: call    sub_18000CA40
 * 00000001800AE068: cmp     cs:dword_1801CA460, r14d
 * 00000001800AE06F: jnz     loc_1800AE133
 * 00000001800AE075: lea     rax, unk_1801526C0
 * 00000001800AE07C: mov     qword ptr [rbp+9E40h+var_9640], rax
 * 00000001800AE083: lea     rax, unk_18015917C
 * 00000001800AE08A: mov     qword ptr [rbp+9E40h+var_9640+8], rax
 * 00000001800AE091: movups  xmm7, [rbp+9E40h+var_9640]
 * 00000001800AE098: mov     dword ptr [rbp+9E40h+var_7BE0], 5
 * 00000001800AE0A2: mov     dword ptr [rbp+9E40h+var_7BE0+4], esi
 * 00000001800AE0A8: movups  xmm6, [rbp+9E40h+var_7BE0]
 * 00000001800AE0AF: call    sub_1800A5ED4
 * 00000001800AE0B4: mov     r8, rax
 * 00000001800AE0B7: mov     r9d, r12d
 * 00000001800AE0BA: mov     edx, 1FAh
 * 00000001800AE0BF: lea     rcx, [rbp+9E40h+var_3550]
 * 00000001800AE0C6: call    sub_1800737C8
 * 00000001800AE0CB: nop
 * 00000001800AE0CC: mov     r8, rax
 * 00000001800AE0CF: mov     rdx, r13
 * 00000001800AE0D2: lea     rcx, [rbp+9E40h+var_3570]
 * 00000001800AE0D9: call    sub_18001B678
 * 00000001800AE0DE: nop
 * 00000001800AE0DF: lea     r8, aPixel; "/Pixel"
 * 00000001800AE0E6: mov     rdx, rax
 * 00000001800AE0E9: lea     rcx, [rbp+9E40h+var_5890]
 * 00000001800AE0F0: call    sub_18001B5A8
 * 00000001800AE0F5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE0FA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE0FF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE104: mov     rcx, rax
 * 00000001800AE107: call    sub_18007386C
 * 00000001800AE10C: nop
 * 00000001800AE10D: lea     rcx, [rbp+9E40h+var_3570]
 * 00000001800AE114: call    sub_180011020
 * 00000001800AE119: nop
 * 00000001800AE11A: lea     rcx, [rbp+9E40h+var_3550]
 * 00000001800AE121: call    sub_180011020
 * 00000001800AE126: nop
 * 00000001800AE127: lea     rcx, dword_1801CA460
 * 00000001800AE12E: call    _Init_thread_footer
 * 00000001800AE133: mov     rax, [rdi+rbx*8]
 * 00000001800AE137: mov     eax, [r15+rax]
 * 00000001800AE13B: cmp     cs:dword_1801CA464, eax
 * 00000001800AE141: jle     loc_1800AE217
 * 00000001800AE147: lea     rcx, dword_1801CA464
 * 00000001800AE14E: call    sub_18000CA40
 * 00000001800AE153: cmp     cs:dword_1801CA464, r14d
 * 00000001800AE15A: jnz     loc_1800AE217
 * 00000001800AE160: lea     rax, unk_180145EE0
 * 00000001800AE167: mov     qword ptr [rbp+9E40h+var_9630], rax
 * 00000001800AE16E: lea     rax, unk_180146EF8
 * 00000001800AE175: mov     qword ptr [rbp+9E40h+var_9630+8], rax
 * 00000001800AE17C: movups  xmm7, [rbp+9E40h+var_9630]
 * 00000001800AE183: mov     dword ptr [rbp+9E40h+var_7BC0], esi
 * 00000001800AE189: mov     dword ptr [rbp+9E40h+var_7BC0+4], esi
 * 00000001800AE18F: movups  xmm6, [rbp+9E40h+var_7BC0]
 * 00000001800AE196: call    sub_1800A5ED4
 * 00000001800AE19B: mov     r8, rax
 * 00000001800AE19E: mov     r9d, r12d
 * 00000001800AE1A1: xor     edx, edx
 * 00000001800AE1A3: lea     rcx, [rbp+9E40h+var_34F0]
 * 00000001800AE1AA: call    sub_1800737C8
 * 00000001800AE1AF: nop
 * 00000001800AE1B0: mov     r8, rax
 * 00000001800AE1B3: mov     rdx, r13
 * 00000001800AE1B6: lea     rcx, [rbp+9E40h+var_3510]
 * 00000001800AE1BD: call    sub_18001B678
 * 00000001800AE1C2: nop
 * 00000001800AE1C3: lea     r8, aVertex; "/Vertex"
 * 00000001800AE1CA: mov     rdx, rax
 * 00000001800AE1CD: lea     rcx, [rbp+9E40h+var_5870]
 * 00000001800AE1D4: call    sub_18001B5A8
 * 00000001800AE1D9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE1DE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE1E3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE1E8: mov     rcx, rax
 * 00000001800AE1EB: call    sub_18007386C
 * 00000001800AE1F0: nop
 * 00000001800AE1F1: lea     rcx, [rbp+9E40h+var_3510]
 * 00000001800AE1F8: call    sub_180011020
 * 00000001800AE1FD: nop
 * 00000001800AE1FE: lea     rcx, [rbp+9E40h+var_34F0]
 * 00000001800AE205: call    sub_180011020
 * 00000001800AE20A: nop
 * 00000001800AE20B: lea     rcx, dword_1801CA464
 * 00000001800AE212: call    _Init_thread_footer
 * 00000001800AE217: mov     rax, [rdi+rbx*8]
 * 00000001800AE21B: mov     eax, [r15+rax]
 * 00000001800AE21F: cmp     cs:dword_1801CA468, eax
 * 00000001800AE225: jle     loc_1800AE2FC
 * 00000001800AE22B: lea     rcx, dword_1801CA468
 * 00000001800AE232: call    sub_18000CA40
 * 00000001800AE237: cmp     cs:dword_1801CA468, r14d
 * 00000001800AE23E: jnz     loc_1800AE2FC
 * 00000001800AE244: lea     rax, unk_18013C210
 * 00000001800AE24B: mov     qword ptr [rbp+9E40h+var_9620], rax
 * 00000001800AE252: lea     rax, unk_18013C794
 * 00000001800AE259: mov     qword ptr [rbp+9E40h+var_9620+8], rax
 * 00000001800AE260: movups  xmm7, [rbp+9E40h+var_9620]
 * 00000001800AE267: mov     dword ptr [rbp+9E40h+var_7BA0], esi
 * 00000001800AE26D: mov     dword ptr [rbp+9E40h+var_7BA0+4], esi
 * 00000001800AE273: movups  xmm6, [rbp+9E40h+var_7BA0]
 * 00000001800AE27A: call    sub_1800A5ED4
 * 00000001800AE27F: mov     r8, rax
 * 00000001800AE282: mov     r9d, r12d
 * 00000001800AE285: mov     rdx, rsi
 * 00000001800AE288: lea     rcx, [rbp+9E40h+var_3490]
 * 00000001800AE28F: call    sub_1800737C8
 * 00000001800AE294: nop
 * 00000001800AE295: mov     r8, rax
 * 00000001800AE298: mov     rdx, r13
 * 00000001800AE29B: lea     rcx, [rbp+9E40h+var_34B0]
 * 00000001800AE2A2: call    sub_18001B678
 * 00000001800AE2A7: nop
 * 00000001800AE2A8: lea     r8, aVertex; "/Vertex"
 * 00000001800AE2AF: mov     rdx, rax
 * 00000001800AE2B2: lea     rcx, [rbp+9E40h+var_5850]
 * 00000001800AE2B9: call    sub_18001B5A8
 * 00000001800AE2BE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE2C3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE2C8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE2CD: mov     rcx, rax
 * 00000001800AE2D0: call    sub_18007386C
 * 00000001800AE2D5: nop
 * 00000001800AE2D6: lea     rcx, [rbp+9E40h+var_34B0]
 * 00000001800AE2DD: call    sub_180011020
 * 00000001800AE2E2: nop
 * 00000001800AE2E3: lea     rcx, [rbp+9E40h+var_3490]
 * 00000001800AE2EA: call    sub_180011020
 * 00000001800AE2EF: nop
 * 00000001800AE2F0: lea     rcx, dword_1801CA468
 * 00000001800AE2F7: call    _Init_thread_footer
 * 00000001800AE2FC: mov     rax, [rdi+rbx*8]
 * 00000001800AE300: mov     ecx, [r15+rax]
 * 00000001800AE304: cmp     cs:dword_1801CA46C, ecx
 * 00000001800AE30A: jle     loc_1800AE3E3
 * 00000001800AE310: lea     rcx, dword_1801CA46C
 * 00000001800AE317: call    sub_18000CA40
 * 00000001800AE31C: cmp     cs:dword_1801CA46C, r14d
 * 00000001800AE323: jnz     loc_1800AE3E3
 * 00000001800AE329: lea     rax, unk_180145EE0
 * 00000001800AE330: mov     qword ptr [rbp+9E40h+var_9610], rax
 * 00000001800AE337: lea     rax, unk_180146EF8
 * 00000001800AE33E: mov     qword ptr [rbp+9E40h+var_9610+8], rax
 * 00000001800AE345: movups  xmm7, [rbp+9E40h+var_9610]
 * 00000001800AE34C: mov     dword ptr [rbp+9E40h+var_7B80], esi
 * 00000001800AE352: mov     dword ptr [rbp+9E40h+var_7B80+4], esi
 * 00000001800AE358: movups  xmm6, [rbp+9E40h+var_7B80]
 * 00000001800AE35F: call    sub_1800A5ED4
 * 00000001800AE364: mov     r8, rax
 * 00000001800AE367: mov     r9d, r12d
 * 00000001800AE36A: mov     edx, 2
 * 00000001800AE36F: lea     rcx, [rbp+9E40h+var_3430]
 * 00000001800AE376: call    sub_1800737C8
 * 00000001800AE37B: nop
 * 00000001800AE37C: mov     r8, rax
 * 00000001800AE37F: mov     rdx, r13
 * 00000001800AE382: lea     rcx, [rbp+9E40h+var_3450]
 * 00000001800AE389: call    sub_18001B678
 * 00000001800AE38E: nop
 * 00000001800AE38F: lea     r8, aVertex; "/Vertex"
 * 00000001800AE396: mov     rdx, rax
 * 00000001800AE399: lea     rcx, [rbp+9E40h+var_5830]
 * 00000001800AE3A0: call    sub_18001B5A8
 * 00000001800AE3A5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE3AA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE3AF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE3B4: mov     rcx, rax
 * 00000001800AE3B7: call    sub_18007386C
 * 00000001800AE3BC: nop
 * 00000001800AE3BD: lea     rcx, [rbp+9E40h+var_3450]
 * 00000001800AE3C4: call    sub_180011020
 * 00000001800AE3C9: nop
 * 00000001800AE3CA: lea     rcx, [rbp+9E40h+var_3430]
 * 00000001800AE3D1: call    sub_180011020
 * 00000001800AE3D6: nop
 * 00000001800AE3D7: lea     rcx, dword_1801CA46C
 * 00000001800AE3DE: call    _Init_thread_footer
 * 00000001800AE3E3: mov     rax, [rdi+rbx*8]
 * 00000001800AE3E7: mov     ecx, [r15+rax]
 * 00000001800AE3EB: cmp     cs:dword_1801CA470, ecx
 * 00000001800AE3F1: jle     loc_1800AE4CA
 * 00000001800AE3F7: lea     rcx, dword_1801CA470
 * 00000001800AE3FE: call    sub_18000CA40
 * 00000001800AE403: cmp     cs:dword_1801CA470, r14d
 * 00000001800AE40A: jnz     loc_1800AE4CA
 * 00000001800AE410: lea     rax, unk_180145EE0
 * 00000001800AE417: mov     qword ptr [rbp+9E40h+var_9600], rax
 * 00000001800AE41E: lea     rax, unk_180146EF8
 * 00000001800AE425: mov     qword ptr [rbp+9E40h+var_9600+8], rax
 * 00000001800AE42C: movups  xmm7, [rbp+9E40h+var_9600]
 * 00000001800AE433: mov     dword ptr [rbp+9E40h+var_7B60], esi
 * 00000001800AE439: mov     dword ptr [rbp+9E40h+var_7B60+4], esi
 * 00000001800AE43F: movups  xmm6, [rbp+9E40h+var_7B60]
 * 00000001800AE446: call    sub_1800A5ED4
 * 00000001800AE44B: mov     r8, rax
 * 00000001800AE44E: mov     r9d, r12d
 * 00000001800AE451: mov     edx, 4
 * 00000001800AE456: lea     rcx, [rbp+9E40h+var_33D0]
 * 00000001800AE45D: call    sub_1800737C8
 * 00000001800AE462: nop
 * 00000001800AE463: mov     r8, rax
 * 00000001800AE466: mov     rdx, r13
 * 00000001800AE469: lea     rcx, [rbp+9E40h+var_33F0]
 * 00000001800AE470: call    sub_18001B678
 * 00000001800AE475: nop
 * 00000001800AE476: lea     r8, aVertex; "/Vertex"
 * 00000001800AE47D: mov     rdx, rax
 * 00000001800AE480: lea     rcx, [rbp+9E40h+var_5810]
 * 00000001800AE487: call    sub_18001B5A8
 * 00000001800AE48C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE491: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE496: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE49B: mov     rcx, rax
 * 00000001800AE49E: call    sub_18007386C
 * 00000001800AE4A3: nop
 * 00000001800AE4A4: lea     rcx, [rbp+9E40h+var_33F0]
 * 00000001800AE4AB: call    sub_180011020
 * 00000001800AE4B0: nop
 * 00000001800AE4B1: lea     rcx, [rbp+9E40h+var_33D0]
 * 00000001800AE4B8: call    sub_180011020
 * 00000001800AE4BD: nop
 * 00000001800AE4BE: lea     rcx, dword_1801CA470
 * 00000001800AE4C5: call    _Init_thread_footer
 * 00000001800AE4CA: mov     rax, [rdi+rbx*8]
 * 00000001800AE4CE: mov     ecx, [r15+rax]
 * 00000001800AE4D2: cmp     cs:dword_1801CA474, ecx
 * 00000001800AE4D8: jle     loc_1800AE5B1
 * 00000001800AE4DE: lea     rcx, dword_1801CA474
 * 00000001800AE4E5: call    sub_18000CA40
 * 00000001800AE4EA: cmp     cs:dword_1801CA474, r14d
 * 00000001800AE4F1: jnz     loc_1800AE5B1
 * 00000001800AE4F7: lea     rax, unk_18013C210
 * 00000001800AE4FE: mov     qword ptr [rbp+9E40h+var_95F0], rax
 * 00000001800AE505: lea     rax, unk_18013C794
 * 00000001800AE50C: mov     qword ptr [rbp+9E40h+var_95F0+8], rax
 * 00000001800AE513: movups  xmm7, [rbp+9E40h+var_95F0]
 * 00000001800AE51A: mov     dword ptr [rbp+9E40h+var_7B40], esi
 * 00000001800AE520: mov     dword ptr [rbp+9E40h+var_7B40+4], esi
 * 00000001800AE526: movups  xmm6, [rbp+9E40h+var_7B40]
 * 00000001800AE52D: call    sub_1800A5ED4
 * 00000001800AE532: mov     r8, rax
 * 00000001800AE535: mov     r9d, r12d
 * 00000001800AE538: mov     edx, 5
 * 00000001800AE53D: lea     rcx, [rbp+9E40h+var_3370]
 * 00000001800AE544: call    sub_1800737C8
 * 00000001800AE549: nop
 * 00000001800AE54A: mov     r8, rax
 * 00000001800AE54D: mov     rdx, r13
 * 00000001800AE550: lea     rcx, [rbp+9E40h+var_3390]
 * 00000001800AE557: call    sub_18001B678
 * 00000001800AE55C: nop
 * 00000001800AE55D: lea     r8, aVertex; "/Vertex"
 * 00000001800AE564: mov     rdx, rax
 * 00000001800AE567: lea     rcx, [rbp+9E40h+var_57F0]
 * 00000001800AE56E: call    sub_18001B5A8
 * 00000001800AE573: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE578: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE57D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE582: mov     rcx, rax
 * 00000001800AE585: call    sub_18007386C
 * 00000001800AE58A: nop
 * 00000001800AE58B: lea     rcx, [rbp+9E40h+var_3390]
 * 00000001800AE592: call    sub_180011020
 * 00000001800AE597: nop
 * 00000001800AE598: lea     rcx, [rbp+9E40h+var_3370]
 * 00000001800AE59F: call    sub_180011020
 * 00000001800AE5A4: nop
 * 00000001800AE5A5: lea     rcx, dword_1801CA474
 * 00000001800AE5AC: call    _Init_thread_footer
 * 00000001800AE5B1: mov     rax, [rdi+rbx*8]
 * 00000001800AE5B5: mov     ecx, [r15+rax]
 * 00000001800AE5B9: cmp     cs:dword_1801CA478, ecx
 * 00000001800AE5BF: jle     loc_1800AE698
 * 00000001800AE5C5: lea     rcx, dword_1801CA478
 * 00000001800AE5CC: call    sub_18000CA40
 * 00000001800AE5D1: cmp     cs:dword_1801CA478, r14d
 * 00000001800AE5D8: jnz     loc_1800AE698
 * 00000001800AE5DE: lea     rax, unk_180145EE0
 * 00000001800AE5E5: mov     qword ptr [rbp+9E40h+var_95E0], rax
 * 00000001800AE5EC: lea     rax, unk_180146EF8
 * 00000001800AE5F3: mov     qword ptr [rbp+9E40h+var_95E0+8], rax
 * 00000001800AE5FA: movups  xmm7, [rbp+9E40h+var_95E0]
 * 00000001800AE601: mov     dword ptr [rbp+9E40h+var_7B20], esi
 * 00000001800AE607: mov     dword ptr [rbp+9E40h+var_7B20+4], esi
 * 00000001800AE60D: movups  xmm6, [rbp+9E40h+var_7B20]
 * 00000001800AE614: call    sub_1800A5ED4
 * 00000001800AE619: mov     r8, rax
 * 00000001800AE61C: mov     r9d, r12d
 * 00000001800AE61F: mov     edx, 6
 * 00000001800AE624: lea     rcx, [rbp+9E40h+var_3310]
 * 00000001800AE62B: call    sub_1800737C8
 * 00000001800AE630: nop
 * 00000001800AE631: mov     r8, rax
 * 00000001800AE634: mov     rdx, r13
 * 00000001800AE637: lea     rcx, [rbp+9E40h+var_3330]
 * 00000001800AE63E: call    sub_18001B678
 * 00000001800AE643: nop
 * 00000001800AE644: lea     r8, aVertex; "/Vertex"
 * 00000001800AE64B: mov     rdx, rax
 * 00000001800AE64E: lea     rcx, [rbp+9E40h+var_57D0]
 * 00000001800AE655: call    sub_18001B5A8
 * 00000001800AE65A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE65F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE664: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE669: mov     rcx, rax
 * 00000001800AE66C: call    sub_18007386C
 * 00000001800AE671: nop
 * 00000001800AE672: lea     rcx, [rbp+9E40h+var_3330]
 * 00000001800AE679: call    sub_180011020
 * 00000001800AE67E: nop
 * 00000001800AE67F: lea     rcx, [rbp+9E40h+var_3310]
 * 00000001800AE686: call    sub_180011020
 * 00000001800AE68B: nop
 * 00000001800AE68C: lea     rcx, dword_1801CA478
 * 00000001800AE693: call    _Init_thread_footer
 * 00000001800AE698: mov     rax, [rdi+rbx*8]
 * 00000001800AE69C: mov     ecx, [r15+rax]
 * 00000001800AE6A0: cmp     cs:dword_1801CA47C, ecx
 * 00000001800AE6A6: jle     loc_1800AE77F
 * 00000001800AE6AC: lea     rcx, dword_1801CA47C
 * 00000001800AE6B3: call    sub_18000CA40
 * 00000001800AE6B8: cmp     cs:dword_1801CA47C, r14d
 * 00000001800AE6BF: jnz     loc_1800AE77F
 * 00000001800AE6C5: lea     rax, unk_180145EE0
 * 00000001800AE6CC: mov     qword ptr [rbp+9E40h+var_95D0], rax
 * 00000001800AE6D3: lea     rax, unk_180146EF8
 * 00000001800AE6DA: mov     qword ptr [rbp+9E40h+var_95D0+8], rax
 * 00000001800AE6E1: movups  xmm7, [rbp+9E40h+var_95D0]
 * 00000001800AE6E8: mov     dword ptr [rbp+9E40h+var_7B00], esi
 * 00000001800AE6EE: mov     dword ptr [rbp+9E40h+var_7B00+4], esi
 * 00000001800AE6F4: movups  xmm6, [rbp+9E40h+var_7B00]
 * 00000001800AE6FB: call    sub_1800A5ED4
 * 00000001800AE700: mov     r8, rax
 * 00000001800AE703: mov     r9d, r12d
 * 00000001800AE706: mov     edx, 8
 * 00000001800AE70B: lea     rcx, [rbp+9E40h+var_32B0]
 * 00000001800AE712: call    sub_1800737C8
 * 00000001800AE717: nop
 * 00000001800AE718: mov     r8, rax
 * 00000001800AE71B: mov     rdx, r13
 * 00000001800AE71E: lea     rcx, [rbp+9E40h+var_32D0]
 * 00000001800AE725: call    sub_18001B678
 * 00000001800AE72A: nop
 * 00000001800AE72B: lea     r8, aVertex; "/Vertex"
 * 00000001800AE732: mov     rdx, rax
 * 00000001800AE735: lea     rcx, [rbp+9E40h+var_57B0]
 * 00000001800AE73C: call    sub_18001B5A8
 * 00000001800AE741: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE746: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE74B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE750: mov     rcx, rax
 * 00000001800AE753: call    sub_18007386C
 * 00000001800AE758: nop
 * 00000001800AE759: lea     rcx, [rbp+9E40h+var_32D0]
 * 00000001800AE760: call    sub_180011020
 * 00000001800AE765: nop
 * 00000001800AE766: lea     rcx, [rbp+9E40h+var_32B0]
 * 00000001800AE76D: call    sub_180011020
 * 00000001800AE772: nop
 * 00000001800AE773: lea     rcx, dword_1801CA47C
 * 00000001800AE77A: call    _Init_thread_footer
 * 00000001800AE77F: mov     rax, [rdi+rbx*8]
 * 00000001800AE783: mov     ecx, [r15+rax]
 * 00000001800AE787: cmp     cs:dword_1801CA480, ecx
 * 00000001800AE78D: jle     loc_1800AE864
 * 00000001800AE793: lea     rcx, dword_1801CA480
 * 00000001800AE79A: call    sub_18000CA40
 * 00000001800AE79F: cmp     cs:dword_1801CA480, r14d
 * 00000001800AE7A6: jnz     loc_1800AE864
 * 00000001800AE7AC: lea     rax, unk_1801457D0
 * 00000001800AE7B3: mov     qword ptr [rbp+9E40h+var_95C0], rax
 * 00000001800AE7BA: lea     rax, unk_180145EDC
 * 00000001800AE7C1: mov     qword ptr [rbp+9E40h+var_95C0+8], rax
 * 00000001800AE7C8: movups  xmm7, [rbp+9E40h+var_95C0]
 * 00000001800AE7CF: mov     dword ptr [rbp+9E40h+var_7AE0], esi
 * 00000001800AE7D5: mov     dword ptr [rbp+9E40h+var_7AE0+4], esi
 * 00000001800AE7DB: movups  xmm6, [rbp+9E40h+var_7AE0]
 * 00000001800AE7E2: call    sub_1800A5ED4
 * 00000001800AE7E7: mov     r8, rax
 * 00000001800AE7EA: mov     r9d, r12d
 * 00000001800AE7ED: mov     rdx, r12
 * 00000001800AE7F0: lea     rcx, [rbp+9E40h+var_3250]
 * 00000001800AE7F7: call    sub_1800737C8
 * 00000001800AE7FC: nop
 * 00000001800AE7FD: mov     r8, rax
 * 00000001800AE800: mov     rdx, r13
 * 00000001800AE803: lea     rcx, [rbp+9E40h+var_3270]
 * 00000001800AE80A: call    sub_18001B678
 * 00000001800AE80F: nop
 * 00000001800AE810: lea     r8, aVertex; "/Vertex"
 * 00000001800AE817: mov     rdx, rax
 * 00000001800AE81A: lea     rcx, [rbp+9E40h+var_5790]
 * 00000001800AE821: call    sub_18001B5A8
 * 00000001800AE826: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE82B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE830: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE835: mov     rcx, rax
 * 00000001800AE838: call    sub_18007386C
 * 00000001800AE83D: nop
 * 00000001800AE83E: lea     rcx, [rbp+9E40h+var_3270]
 * 00000001800AE845: call    sub_180011020
 * 00000001800AE84A: nop
 * 00000001800AE84B: lea     rcx, [rbp+9E40h+var_3250]
 * 00000001800AE852: call    sub_180011020
 * 00000001800AE857: nop
 * 00000001800AE858: lea     rcx, dword_1801CA480
 * 00000001800AE85F: call    _Init_thread_footer
 * 00000001800AE864: mov     rax, [rdi+rbx*8]
 * 00000001800AE868: mov     ecx, [r15+rax]
 * 00000001800AE86C: cmp     cs:dword_1801CA484, ecx
 * 00000001800AE872: jle     loc_1800AE94B
 * 00000001800AE878: lea     rcx, dword_1801CA484
 * 00000001800AE87F: call    sub_18000CA40
 * 00000001800AE884: cmp     cs:dword_1801CA484, r14d
 * 00000001800AE88B: jnz     loc_1800AE94B
 * 00000001800AE891: lea     rax, unk_180145EE0
 * 00000001800AE898: mov     qword ptr [rbp+9E40h+var_95B0], rax
 * 00000001800AE89F: lea     rax, unk_180146EF8
 * 00000001800AE8A6: mov     qword ptr [rbp+9E40h+var_95B0+8], rax
 * 00000001800AE8AD: movups  xmm7, [rbp+9E40h+var_95B0]
 * 00000001800AE8B4: mov     dword ptr [rbp+9E40h+var_7AC0], esi
 * 00000001800AE8BA: mov     dword ptr [rbp+9E40h+var_7AC0+4], esi
 * 00000001800AE8C0: movups  xmm6, [rbp+9E40h+var_7AC0]
 * 00000001800AE8C7: call    sub_1800A5ED4
 * 00000001800AE8CC: mov     r8, rax
 * 00000001800AE8CF: mov     r9d, r12d
 * 00000001800AE8D2: mov     edx, 0Ah
 * 00000001800AE8D7: lea     rcx, [rbp+9E40h+var_31F0]
 * 00000001800AE8DE: call    sub_1800737C8
 * 00000001800AE8E3: nop
 * 00000001800AE8E4: mov     r8, rax
 * 00000001800AE8E7: mov     rdx, r13
 * 00000001800AE8EA: lea     rcx, [rbp+9E40h+var_3210]
 * 00000001800AE8F1: call    sub_18001B678
 * 00000001800AE8F6: nop
 * 00000001800AE8F7: lea     r8, aVertex; "/Vertex"
 * 00000001800AE8FE: mov     rdx, rax
 * 00000001800AE901: lea     rcx, [rbp+9E40h+var_5770]
 * 00000001800AE908: call    sub_18001B5A8
 * 00000001800AE90D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE912: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE917: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE91C: mov     rcx, rax
 * 00000001800AE91F: call    sub_18007386C
 * 00000001800AE924: nop
 * 00000001800AE925: lea     rcx, [rbp+9E40h+var_3210]
 * 00000001800AE92C: call    sub_180011020
 * 00000001800AE931: nop
 * 00000001800AE932: lea     rcx, [rbp+9E40h+var_31F0]
 * 00000001800AE939: call    sub_180011020
 * 00000001800AE93E: nop
 * 00000001800AE93F: lea     rcx, dword_1801CA484
 * 00000001800AE946: call    _Init_thread_footer
 * 00000001800AE94B: mov     rax, [rdi+rbx*8]
 * 00000001800AE94F: mov     ecx, [r15+rax]
 * 00000001800AE953: cmp     cs:dword_1801CA488, ecx
 * 00000001800AE959: jle     loc_1800AEA32
 * 00000001800AE95F: lea     rcx, dword_1801CA488
 * 00000001800AE966: call    sub_18000CA40
 * 00000001800AE96B: cmp     cs:dword_1801CA488, r14d
 * 00000001800AE972: jnz     loc_1800AEA32
 * 00000001800AE978: lea     rax, unk_180145EE0
 * 00000001800AE97F: mov     qword ptr [rbp+9E40h+var_95A0], rax
 * 00000001800AE986: lea     rax, unk_180146EF8
 * 00000001800AE98D: mov     qword ptr [rbp+9E40h+var_95A0+8], rax
 * 00000001800AE994: movups  xmm7, [rbp+9E40h+var_95A0]
 * 00000001800AE99B: mov     dword ptr [rbp+9E40h+var_7AA0], esi
 * 00000001800AE9A1: mov     dword ptr [rbp+9E40h+var_7AA0+4], esi
 * 00000001800AE9A7: movups  xmm6, [rbp+9E40h+var_7AA0]
 * 00000001800AE9AE: call    sub_1800A5ED4
 * 00000001800AE9B3: mov     r8, rax
 * 00000001800AE9B6: mov     r9d, r12d
 * 00000001800AE9B9: mov     edx, 10h
 * 00000001800AE9BE: lea     rcx, [rbp+9E40h+var_3190]
 * 00000001800AE9C5: call    sub_1800737C8
 * 00000001800AE9CA: nop
 * 00000001800AE9CB: mov     r8, rax
 * 00000001800AE9CE: mov     rdx, r13
 * 00000001800AE9D1: lea     rcx, [rbp+9E40h+var_31B0]
 * 00000001800AE9D8: call    sub_18001B678
 * 00000001800AE9DD: nop
 * 00000001800AE9DE: lea     r8, aVertex; "/Vertex"
 * 00000001800AE9E5: mov     rdx, rax
 * 00000001800AE9E8: lea     rcx, [rbp+9E40h+var_5750]
 * 00000001800AE9EF: call    sub_18001B5A8
 * 00000001800AE9F4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE9F9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE9FE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEA03: mov     rcx, rax
 * 00000001800AEA06: call    sub_18007386C
 * 00000001800AEA0B: nop
 * 00000001800AEA0C: lea     rcx, [rbp+9E40h+var_31B0]
 * 00000001800AEA13: call    sub_180011020
 * 00000001800AEA18: nop
 * 00000001800AEA19: lea     rcx, [rbp+9E40h+var_3190]
 * 00000001800AEA20: call    sub_180011020
 * 00000001800AEA25: nop
 * 00000001800AEA26: lea     rcx, dword_1801CA488
 * 00000001800AEA2D: call    _Init_thread_footer
 * 00000001800AEA32: mov     rax, [rdi+rbx*8]
 * 00000001800AEA36: mov     ecx, [r15+rax]
 * 00000001800AEA3A: cmp     cs:dword_1801CA48C, ecx
 * 00000001800AEA40: jle     loc_1800AEB19
 * 00000001800AEA46: lea     rcx, dword_1801CA48C
 * 00000001800AEA4D: call    sub_18000CA40
 * 00000001800AEA52: cmp     cs:dword_1801CA48C, r14d
 * 00000001800AEA59: jnz     loc_1800AEB19
 * 00000001800AEA5F: lea     rax, unk_180145EE0
 * 00000001800AEA66: mov     qword ptr [rbp+9E40h+var_9590], rax
 * 00000001800AEA6D: lea     rax, unk_180146EF8
 * 00000001800AEA74: mov     qword ptr [rbp+9E40h+var_9590+8], rax
 * 00000001800AEA7B: movups  xmm7, [rbp+9E40h+var_9590]
 * 00000001800AEA82: mov     dword ptr [rbp+9E40h+var_7A80], esi
 * 00000001800AEA88: mov     dword ptr [rbp+9E40h+var_7A80+4], esi
 * 00000001800AEA8E: movups  xmm6, [rbp+9E40h+var_7A80]
 * 00000001800AEA95: call    sub_1800A5ED4
 * 00000001800AEA9A: mov     r8, rax
 * 00000001800AEA9D: mov     r9d, r12d
 * 00000001800AEAA0: mov     edx, 12h
 * 00000001800AEAA5: lea     rcx, [rbp+9E40h+var_3130]
 * 00000001800AEAAC: call    sub_1800737C8
 * 00000001800AEAB1: nop
 * 00000001800AEAB2: mov     r8, rax
 * 00000001800AEAB5: mov     rdx, r13
 * 00000001800AEAB8: lea     rcx, [rbp+9E40h+var_3150]
 * 00000001800AEABF: call    sub_18001B678
 * 00000001800AEAC4: nop
 * 00000001800AEAC5: lea     r8, aVertex; "/Vertex"
 * 00000001800AEACC: mov     rdx, rax
 * 00000001800AEACF: lea     rcx, [rbp+9E40h+var_5730]
 * 00000001800AEAD6: call    sub_18001B5A8
 * 00000001800AEADB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AEAE0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AEAE5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEAEA: mov     rcx, rax
 * 00000001800AEAED: call    sub_18007386C
 * 00000001800AEAF2: nop
 * 00000001800AEAF3: lea     rcx, [rbp+9E40h+var_3150]
 * 00000001800AEAFA: call    sub_180011020
 * 00000001800AEAFF: nop
 * 00000001800AEB00: lea     rcx, [rbp+9E40h+var_3130]
 * 00000001800AEB07: call    sub_180011020
 * 00000001800AEB0C: nop
 * 00000001800AEB0D: lea     rcx, dword_1801CA48C
 * 00000001800AEB14: call    _Init_thread_footer
 * 00000001800AEB19: mov     rax, [rdi+rbx*8]
 * 00000001800AEB1D: mov     ecx, [r15+rax]
 * 00000001800AEB21: cmp     cs:dword_1801CA490, ecx
 * 00000001800AEB27: jle     loc_1800AEC00
 * 00000001800AEB2D: lea     rcx, dword_1801CA490
 * 00000001800AEB34: call    sub_18000CA40
 * 00000001800AEB39: cmp     cs:dword_1801CA490, r14d
 * 00000001800AEB40: jnz     loc_1800AEC00
 * 00000001800AEB46: lea     rax, unk_180145EE0
 * 00000001800AEB4D: mov     qword ptr [rbp+9E40h+var_9580], rax
 * 00000001800AEB54: lea     rax, unk_180146EF8
 * 00000001800AEB5B: mov     qword ptr [rbp+9E40h+var_9580+8], rax
 * 00000001800AEB62: movups  xmm7, [rbp+9E40h+var_9580]
 * 00000001800AEB69: mov     dword ptr [rbp+9E40h+var_7A60], esi
 * 00000001800AEB6F: mov     dword ptr [rbp+9E40h+var_7A60+4], esi
 * 00000001800AEB75: movups  xmm6, [rbp+9E40h+var_7A60]
 * 00000001800AEB7C: call    sub_1800A5ED4
 * 00000001800AEB81: mov     r8, rax
 * 00000001800AEB84: mov     r9d, r12d
 * 00000001800AEB87: mov     edx, 14h
 * 00000001800AEB8C: lea     rcx, [rbp+9E40h+var_30D0]
 * 00000001800AEB93: call    sub_1800737C8
 * 00000001800AEB98: nop
 * 00000001800AEB99: mov     r8, rax
 * 00000001800AEB9C: mov     rdx, r13
 * 00000001800AEB9F: lea     rcx, [rbp+9E40h+var_30F0]
 * 00000001800AEBA6: call    sub_18001B678
 * 00000001800AEBAB: nop
 * 00000001800AEBAC: lea     r8, aVertex; "/Vertex"
 * 00000001800AEBB3: mov     rdx, rax
 * 00000001800AEBB6: lea     rcx, [rbp+9E40h+var_5710]
 * 00000001800AEBBD: call    sub_18001B5A8
 * 00000001800AEBC2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AEBC7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AEBCC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEBD1: mov     rcx, rax
 * 00000001800AEBD4: call    sub_18007386C
 * 00000001800AEBD9: nop
 * 00000001800AEBDA: lea     rcx, [rbp+9E40h+var_30F0]
 * 00000001800AEBE1: call    sub_180011020
 * 00000001800AEBE6: nop
 * 00000001800AEBE7: lea     rcx, [rbp+9E40h+var_30D0]
 * 00000001800AEBEE: call    sub_180011020
 * 00000001800AEBF3: nop
 * 00000001800AEBF4: lea     rcx, dword_1801CA490
 * 00000001800AEBFB: call    _Init_thread_footer
 * 00000001800AEC00: mov     rax, [rdi+rbx*8]
 * 00000001800AEC04: mov     ecx, [r15+rax]
 * 00000001800AEC08: cmp     cs:dword_1801CA494, ecx
 * 00000001800AEC0E: jle     loc_1800AECE7
 * 00000001800AEC14: lea     rcx, dword_1801CA494
 * 00000001800AEC1B: call    sub_18000CA40
 * 00000001800AEC20: cmp     cs:dword_1801CA494, r14d
 * 00000001800AEC27: jnz     loc_1800AECE7
 * 00000001800AEC2D: lea     rax, unk_180145EE0
 * 00000001800AEC34: mov     qword ptr [rbp+9E40h+var_9570], rax
 * 00000001800AEC3B: lea     rax, unk_180146EF8
 * 00000001800AEC42: mov     qword ptr [rbp+9E40h+var_9570+8], rax
 * 00000001800AEC49: movups  xmm7, [rbp+9E40h+var_9570]
 * 00000001800AEC50: mov     dword ptr [rbp+9E40h+var_7A40], esi
 * 00000001800AEC56: mov     dword ptr [rbp+9E40h+var_7A40+4], esi
 * 00000001800AEC5C: movups  xmm6, [rbp+9E40h+var_7A40]
 * 00000001800AEC63: call    sub_1800A5ED4
 * 00000001800AEC68: mov     r8, rax
 * 00000001800AEC6B: mov     r9d, r12d
 * 00000001800AEC6E: mov     edx, 16h
 * 00000001800AEC73: lea     rcx, [rbp+9E40h+var_3070]
 * 00000001800AEC7A: call    sub_1800737C8
 * 00000001800AEC7F: nop
 * 00000001800AEC80: mov     r8, rax
 * 00000001800AEC83: mov     rdx, r13
 * 00000001800AEC86: lea     rcx, [rbp+9E40h+var_3090]
 * 00000001800AEC8D: call    sub_18001B678
 * 00000001800AEC92: nop
 * 00000001800AEC93: lea     r8, aVertex; "/Vertex"
 * 00000001800AEC9A: mov     rdx, rax
 * 00000001800AEC9D: lea     rcx, [rbp+9E40h+var_56F0]
 * 00000001800AECA4: call    sub_18001B5A8
 * 00000001800AECA9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AECAE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AECB3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AECB8: mov     rcx, rax
 * 00000001800AECBB: call    sub_18007386C
 * 00000001800AECC0: nop
 * 00000001800AECC1: lea     rcx, [rbp+9E40h+var_3090]
 * 00000001800AECC8: call    sub_180011020
 * 00000001800AECCD: nop
 * 00000001800AECCE: lea     rcx, [rbp+9E40h+var_3070]
 * 00000001800AECD5: call    sub_180011020
 * 00000001800AECDA: nop
 * 00000001800AECDB: lea     rcx, dword_1801CA494
 * 00000001800AECE2: call    _Init_thread_footer
 * 00000001800AECE7: mov     rax, [rdi+rbx*8]
 * 00000001800AECEB: mov     ecx, [r15+rax]
 * 00000001800AECEF: cmp     cs:dword_1801CA498, ecx
 * 00000001800AECF5: jle     loc_1800AEDCE
 * 00000001800AECFB: lea     rcx, dword_1801CA498
 * 00000001800AED02: call    sub_18000CA40
 * 00000001800AED07: cmp     cs:dword_1801CA498, r14d
 * 00000001800AED0E: jnz     loc_1800AEDCE
 * 00000001800AED14: lea     rax, unk_180145EE0
 * 00000001800AED1B: mov     qword ptr [rbp+9E40h+var_9560], rax
 * 00000001800AED22: lea     rax, unk_180146EF8
 * 00000001800AED29: mov     qword ptr [rbp+9E40h+var_9560+8], rax
 * 00000001800AED30: movups  xmm7, [rbp+9E40h+var_9560]
 * 00000001800AED37: mov     dword ptr [rbp+9E40h+var_7A20], esi
 * 00000001800AED3D: mov     dword ptr [rbp+9E40h+var_7A20+4], esi
 * 00000001800AED43: movups  xmm6, [rbp+9E40h+var_7A20]
 * 00000001800AED4A: call    sub_1800A5ED4
 * 00000001800AED4F: mov     r8, rax
 * 00000001800AED52: mov     r9d, r12d
 * 00000001800AED55: mov     edx, 18h
 * 00000001800AED5A: lea     rcx, [rbp+9E40h+var_3010]
 * 00000001800AED61: call    sub_1800737C8
 * 00000001800AED66: nop
 * 00000001800AED67: mov     r8, rax
 * 00000001800AED6A: mov     rdx, r13
 * 00000001800AED6D: lea     rcx, [rbp+9E40h+var_3030]
 * 00000001800AED74: call    sub_18001B678
 * 00000001800AED79: nop
 * 00000001800AED7A: lea     r8, aVertex; "/Vertex"
 * 00000001800AED81: mov     rdx, rax
 * 00000001800AED84: lea     rcx, [rbp+9E40h+var_56D0]
 * 00000001800AED8B: call    sub_18001B5A8
 * 00000001800AED90: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AED95: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AED9A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AED9F: mov     rcx, rax
 * 00000001800AEDA2: call    sub_18007386C
 * 00000001800AEDA7: nop
 * 00000001800AEDA8: lea     rcx, [rbp+9E40h+var_3030]
 * 00000001800AEDAF: call    sub_180011020
 * 00000001800AEDB4: nop
 * 00000001800AEDB5: lea     rcx, [rbp+9E40h+var_3010]
 * 00000001800AEDBC: call    sub_180011020
 * 00000001800AEDC1: nop
 * 00000001800AEDC2: lea     rcx, dword_1801CA498
 * 00000001800AEDC9: call    _Init_thread_footer
 * 00000001800AEDCE: mov     rax, [rdi+rbx*8]
 * 00000001800AEDD2: mov     ecx, [r15+rax]
 * 00000001800AEDD6: cmp     cs:dword_1801CA49C, ecx
 * 00000001800AEDDC: jle     loc_1800AEEB5
 * 00000001800AEDE2: lea     rcx, dword_1801CA49C
 * 00000001800AEDE9: call    sub_18000CA40
 * 00000001800AEDEE: cmp     cs:dword_1801CA49C, r14d
 * 00000001800AEDF5: jnz     loc_1800AEEB5
 * 00000001800AEDFB: lea     rax, unk_180145EE0
 * 00000001800AEE02: mov     qword ptr [rbp+9E40h+var_9550], rax
 * 00000001800AEE09: lea     rax, unk_180146EF8
 * 00000001800AEE10: mov     qword ptr [rbp+9E40h+var_9550+8], rax
 * 00000001800AEE17: movups  xmm7, [rbp+9E40h+var_9550]
 * 00000001800AEE1E: mov     dword ptr [rbp+9E40h+var_7A00], esi
 * 00000001800AEE24: mov     dword ptr [rbp+9E40h+var_7A00+4], esi
 * 00000001800AEE2A: movups  xmm6, [rbp+9E40h+var_7A00]
 * 00000001800AEE31: call    sub_1800A5ED4
 * 00000001800AEE36: mov     r8, rax
 * 00000001800AEE39: mov     r9d, r12d
 * 00000001800AEE3C: mov     edx, 1Ah
 * 00000001800AEE41: lea     rcx, [rbp+9E40h+var_2FB0]
 * 00000001800AEE48: call    sub_1800737C8
 * 00000001800AEE4D: nop
 * 00000001800AEE4E: mov     r8, rax
 * 00000001800AEE51: mov     rdx, r13
 * 00000001800AEE54: lea     rcx, [rbp+9E40h+var_2FD0]
 * 00000001800AEE5B: call    sub_18001B678
 * 00000001800AEE60: nop
 * 00000001800AEE61: lea     r8, aVertex; "/Vertex"
 * 00000001800AEE68: mov     rdx, rax
 * 00000001800AEE6B: lea     rcx, [rbp+9E40h+var_56B0]
 * 00000001800AEE72: call    sub_18001B5A8
 * 00000001800AEE77: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AEE7C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AEE81: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEE86: mov     rcx, rax
 * 00000001800AEE89: call    sub_18007386C
 * 00000001800AEE8E: nop
 * 00000001800AEE8F: lea     rcx, [rbp+9E40h+var_2FD0]
 * 00000001800AEE96: call    sub_180011020
 * 00000001800AEE9B: nop
 * 00000001800AEE9C: lea     rcx, [rbp+9E40h+var_2FB0]
 * 00000001800AEEA3: call    sub_180011020
 * 00000001800AEEA8: nop
 * 00000001800AEEA9: lea     rcx, dword_1801CA49C
 * 00000001800AEEB0: call    _Init_thread_footer
 * 00000001800AEEB5: mov     rax, [rdi+rbx*8]
 * 00000001800AEEB9: mov     eax, [r15+rax]
 * 00000001800AEEBD: cmp     cs:dword_1801CA4A0, eax
 * 00000001800AEEC3: jle     loc_1800AEF9C
 * 00000001800AEEC9: lea     rcx, dword_1801CA4A0
 * 00000001800AEED0: call    sub_18000CA40
 * 00000001800AEED5: cmp     cs:dword_1801CA4A0, r14d
 * 00000001800AEEDC: jnz     loc_1800AEF9C
 * 00000001800AEEE2: lea     rax, unk_180146F00
 * 00000001800AEEE9: mov     qword ptr [rbp+9E40h+var_9540], rax
 * 00000001800AEEF0: lea     rax, unk_180148918
 * 00000001800AEEF7: mov     qword ptr [rbp+9E40h+var_9540+8], rax
 * 00000001800AEEFE: movups  xmm7, [rbp+9E40h+var_9540]
 * 00000001800AEF05: mov     dword ptr [rbp+9E40h+var_79E0], esi
 * 00000001800AEF0B: mov     dword ptr [rbp+9E40h+var_79E0+4], esi
 * 00000001800AEF11: movups  xmm6, [rbp+9E40h+var_79E0]
 * 00000001800AEF18: call    sub_1800A5ED4
 * 00000001800AEF1D: mov     r8, rax
 * 00000001800AEF20: mov     r9d, r12d
 * 00000001800AEF23: mov     edx, 20h ; ' '
 * 00000001800AEF28: lea     rcx, [rbp+9E40h+var_2F50]
 * 00000001800AEF2F: call    sub_1800737C8
 * 00000001800AEF34: nop
 * 00000001800AEF35: mov     r8, rax
 * 00000001800AEF38: mov     rdx, r13
 * 00000001800AEF3B: lea     rcx, [rbp+9E40h+var_2F70]
 * 00000001800AEF42: call    sub_18001B678
 * 00000001800AEF47: nop
 * 00000001800AEF48: lea     r8, aVertex; "/Vertex"
 * 00000001800AEF4F: mov     rdx, rax
 * 00000001800AEF52: lea     rcx, [rbp+9E40h+var_5690]
 * 00000001800AEF59: call    sub_18001B5A8
 * 00000001800AEF5E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AEF63: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AEF68: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEF6D: mov     rcx, rax
 * 00000001800AEF70: call    sub_18007386C
 * 00000001800AEF75: nop
 * 00000001800AEF76: lea     rcx, [rbp+9E40h+var_2F70]
 * 00000001800AEF7D: call    sub_180011020
 * 00000001800AEF82: nop
 * 00000001800AEF83: lea     rcx, [rbp+9E40h+var_2F50]
 * 00000001800AEF8A: call    sub_180011020
 * 00000001800AEF8F: nop
 * 00000001800AEF90: lea     rcx, dword_1801CA4A0
 * 00000001800AEF97: call    _Init_thread_footer
 * 00000001800AEF9C: mov     rax, [rdi+rbx*8]
 * 00000001800AEFA0: mov     ecx, [r15+rax]
 * 00000001800AEFA4: cmp     cs:dword_1801CA4A4, ecx
 * 00000001800AEFAA: jle     loc_1800AF083
 * 00000001800AEFB0: lea     rcx, dword_1801CA4A4
 * 00000001800AEFB7: call    sub_18000CA40
 * 00000001800AEFBC: cmp     cs:dword_1801CA4A4, r14d
 * 00000001800AEFC3: jnz     loc_1800AF083
 * 00000001800AEFC9: lea     rax, unk_18013D280
 * 00000001800AEFD0: mov     qword ptr [rbp+9E40h+var_9530], rax
 * 00000001800AEFD7: lea     rax, unk_18013DC28
 * 00000001800AEFDE: mov     qword ptr [rbp+9E40h+var_9530+8], rax
 * 00000001800AEFE5: movups  xmm7, [rbp+9E40h+var_9530]
 * 00000001800AEFEC: mov     dword ptr [rbp+9E40h+var_79C0], esi
 * 00000001800AEFF2: mov     dword ptr [rbp+9E40h+var_79C0+4], esi
 * 00000001800AEFF8: movups  xmm6, [rbp+9E40h+var_79C0]
 * 00000001800AEFFF: call    sub_1800A5ED4
 * 00000001800AF004: mov     r8, rax
 * 00000001800AF007: mov     r9d, r12d
 * 00000001800AF00A: mov     edx, 21h ; '!'
 * 00000001800AF00F: lea     rcx, [rbp+9E40h+var_2EF0]
 * 00000001800AF016: call    sub_1800737C8
 * 00000001800AF01B: nop
 * 00000001800AF01C: mov     r8, rax
 * 00000001800AF01F: mov     rdx, r13
 * 00000001800AF022: lea     rcx, [rbp+9E40h+var_2F10]
 * 00000001800AF029: call    sub_18001B678
 * 00000001800AF02E: nop
 * 00000001800AF02F: lea     r8, aVertex; "/Vertex"
 * 00000001800AF036: mov     rdx, rax
 * 00000001800AF039: lea     rcx, [rbp+9E40h+var_5670]
 * 00000001800AF040: call    sub_18001B5A8
 * 00000001800AF045: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF04A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF04F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF054: mov     rcx, rax
 * 00000001800AF057: call    sub_18007386C
 * 00000001800AF05C: nop
 * 00000001800AF05D: lea     rcx, [rbp+9E40h+var_2F10]
 * 00000001800AF064: call    sub_180011020
 * 00000001800AF069: nop
 * 00000001800AF06A: lea     rcx, [rbp+9E40h+var_2EF0]
 * 00000001800AF071: call    sub_180011020
 * 00000001800AF076: nop
 * 00000001800AF077: lea     rcx, dword_1801CA4A4
 * 00000001800AF07E: call    _Init_thread_footer
 * 00000001800AF083: mov     rax, [rdi+rbx*8]
 * 00000001800AF087: mov     ecx, [r15+rax]
 * 00000001800AF08B: cmp     cs:dword_1801CA4A8, ecx
 * 00000001800AF091: jle     loc_1800AF16A
 * 00000001800AF097: lea     rcx, dword_1801CA4A8
 * 00000001800AF09E: call    sub_18000CA40
 * 00000001800AF0A3: cmp     cs:dword_1801CA4A8, r14d
 * 00000001800AF0AA: jnz     loc_1800AF16A
 * 00000001800AF0B0: lea     rax, unk_180146F00
 * 00000001800AF0B7: mov     qword ptr [rbp+9E40h+var_9520], rax
 * 00000001800AF0BE: lea     rax, unk_180148918
 * 00000001800AF0C5: mov     qword ptr [rbp+9E40h+var_9520+8], rax
 * 00000001800AF0CC: movups  xmm7, [rbp+9E40h+var_9520]
 * 00000001800AF0D3: mov     dword ptr [rbp+9E40h+var_79A0], esi
 * 00000001800AF0D9: mov     dword ptr [rbp+9E40h+var_79A0+4], esi
 * 00000001800AF0DF: movups  xmm6, [rbp+9E40h+var_79A0]
 * 00000001800AF0E6: call    sub_1800A5ED4
 * 00000001800AF0EB: mov     r8, rax
 * 00000001800AF0EE: mov     r9d, r12d
 * 00000001800AF0F1: mov     edx, 22h ; '"'
 * 00000001800AF0F6: lea     rcx, [rbp+9E40h+var_2E90]
 * 00000001800AF0FD: call    sub_1800737C8
 * 00000001800AF102: nop
 * 00000001800AF103: mov     r8, rax
 * 00000001800AF106: mov     rdx, r13
 * 00000001800AF109: lea     rcx, [rbp+9E40h+var_2EB0]
 * 00000001800AF110: call    sub_18001B678
 * 00000001800AF115: nop
 * 00000001800AF116: lea     r8, aVertex; "/Vertex"
 * 00000001800AF11D: mov     rdx, rax
 * 00000001800AF120: lea     rcx, [rbp+9E40h+var_5650]
 * 00000001800AF127: call    sub_18001B5A8
 * 00000001800AF12C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF131: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF136: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF13B: mov     rcx, rax
 * 00000001800AF13E: call    sub_18007386C
 * 00000001800AF143: nop
 * 00000001800AF144: lea     rcx, [rbp+9E40h+var_2EB0]
 * 00000001800AF14B: call    sub_180011020
 * 00000001800AF150: nop
 * 00000001800AF151: lea     rcx, [rbp+9E40h+var_2E90]
 * 00000001800AF158: call    sub_180011020
 * 00000001800AF15D: nop
 * 00000001800AF15E: lea     rcx, dword_1801CA4A8
 * 00000001800AF165: call    _Init_thread_footer
 * 00000001800AF16A: mov     rax, [rdi+rbx*8]
 * 00000001800AF16E: mov     ecx, [r15+rax]
 * 00000001800AF172: cmp     cs:dword_1801CA4AC, ecx
 * 00000001800AF178: jle     loc_1800AF251
 * 00000001800AF17E: lea     rcx, dword_1801CA4AC
 * 00000001800AF185: call    sub_18000CA40
 * 00000001800AF18A: cmp     cs:dword_1801CA4AC, r14d
 * 00000001800AF191: jnz     loc_1800AF251
 * 00000001800AF197: lea     rax, unk_180146F00
 * 00000001800AF19E: mov     qword ptr [rbp+9E40h+var_9510], rax
 * 00000001800AF1A5: lea     rax, unk_180148918
 * 00000001800AF1AC: mov     qword ptr [rbp+9E40h+var_9510+8], rax
 * 00000001800AF1B3: movups  xmm7, [rbp+9E40h+var_9510]
 * 00000001800AF1BA: mov     dword ptr [rbp+9E40h+var_7980], esi
 * 00000001800AF1C0: mov     dword ptr [rbp+9E40h+var_7980+4], esi
 * 00000001800AF1C6: movups  xmm6, [rbp+9E40h+var_7980]
 * 00000001800AF1CD: call    sub_1800A5ED4
 * 00000001800AF1D2: mov     r8, rax
 * 00000001800AF1D5: mov     r9d, r12d
 * 00000001800AF1D8: mov     edx, 28h ; '('
 * 00000001800AF1DD: lea     rcx, [rbp+9E40h+var_2E30]
 * 00000001800AF1E4: call    sub_1800737C8
 * 00000001800AF1E9: nop
 * 00000001800AF1EA: mov     r8, rax
 * 00000001800AF1ED: mov     rdx, r13
 * 00000001800AF1F0: lea     rcx, [rbp+9E40h+var_2E50]
 * 00000001800AF1F7: call    sub_18001B678
 * 00000001800AF1FC: nop
 * 00000001800AF1FD: lea     r8, aVertex; "/Vertex"
 * 00000001800AF204: mov     rdx, rax
 * 00000001800AF207: lea     rcx, [rbp+9E40h+var_5630]
 * 00000001800AF20E: call    sub_18001B5A8
 * 00000001800AF213: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF218: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF21D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF222: mov     rcx, rax
 * 00000001800AF225: call    sub_18007386C
 * 00000001800AF22A: nop
 * 00000001800AF22B: lea     rcx, [rbp+9E40h+var_2E50]
 * 00000001800AF232: call    sub_180011020
 * 00000001800AF237: nop
 * 00000001800AF238: lea     rcx, [rbp+9E40h+var_2E30]
 * 00000001800AF23F: call    sub_180011020
 * 00000001800AF244: nop
 * 00000001800AF245: lea     rcx, dword_1801CA4AC
 * 00000001800AF24C: call    _Init_thread_footer
 * 00000001800AF251: mov     rax, [rdi+rbx*8]
 * 00000001800AF255: mov     ecx, [r15+rax]
 * 00000001800AF259: cmp     cs:dword_1801CA4B0, ecx
 * 00000001800AF25F: jle     loc_1800AF338
 * 00000001800AF265: lea     rcx, dword_1801CA4B0
 * 00000001800AF26C: call    sub_18000CA40
 * 00000001800AF271: cmp     cs:dword_1801CA4B0, r14d
 * 00000001800AF278: jnz     loc_1800AF338
 * 00000001800AF27E: lea     rax, unk_180143C40
 * 00000001800AF285: mov     qword ptr [rbp+9E40h+var_9500], rax
 * 00000001800AF28C: lea     rax, unk_18014477C
 * 00000001800AF293: mov     qword ptr [rbp+9E40h+var_9500+8], rax
 * 00000001800AF29A: movups  xmm7, [rbp+9E40h+var_9500]
 * 00000001800AF2A1: mov     dword ptr [rbp+9E40h+var_7960], esi
 * 00000001800AF2A7: mov     dword ptr [rbp+9E40h+var_7960+4], esi
 * 00000001800AF2AD: movups  xmm6, [rbp+9E40h+var_7960]
 * 00000001800AF2B4: call    sub_1800A5ED4
 * 00000001800AF2B9: mov     r8, rax
 * 00000001800AF2BC: mov     r9d, r12d
 * 00000001800AF2BF: mov     edx, 29h ; ')'
 * 00000001800AF2C4: lea     rcx, [rbp+9E40h+var_2DD0]
 * 00000001800AF2CB: call    sub_1800737C8
 * 00000001800AF2D0: nop
 * 00000001800AF2D1: mov     r8, rax
 * 00000001800AF2D4: mov     rdx, r13
 * 00000001800AF2D7: lea     rcx, [rbp+9E40h+var_2DF0]
 * 00000001800AF2DE: call    sub_18001B678
 * 00000001800AF2E3: nop
 * 00000001800AF2E4: lea     r8, aVertex; "/Vertex"
 * 00000001800AF2EB: mov     rdx, rax
 * 00000001800AF2EE: lea     rcx, [rbp+9E40h+var_5610]
 * 00000001800AF2F5: call    sub_18001B5A8
 * 00000001800AF2FA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF2FF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF304: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF309: mov     rcx, rax
 * 00000001800AF30C: call    sub_18007386C
 * 00000001800AF311: nop
 * 00000001800AF312: lea     rcx, [rbp+9E40h+var_2DF0]
 * 00000001800AF319: call    sub_180011020
 * 00000001800AF31E: nop
 * 00000001800AF31F: lea     rcx, [rbp+9E40h+var_2DD0]
 * 00000001800AF326: call    sub_180011020
 * 00000001800AF32B: nop
 * 00000001800AF32C: lea     rcx, dword_1801CA4B0
 * 00000001800AF333: call    _Init_thread_footer
 * 00000001800AF338: mov     rax, [rdi+rbx*8]
 * 00000001800AF33C: mov     ecx, [r15+rax]
 * 00000001800AF340: cmp     cs:dword_1801CA4B4, ecx
 * 00000001800AF346: jle     loc_1800AF41F
 * 00000001800AF34C: lea     rcx, dword_1801CA4B4
 * 00000001800AF353: call    sub_18000CA40
 * 00000001800AF358: cmp     cs:dword_1801CA4B4, r14d
 * 00000001800AF35F: jnz     loc_1800AF41F
 * 00000001800AF365: lea     rax, unk_180146F00
 * 00000001800AF36C: mov     qword ptr [rbp+9E40h+var_94F0], rax
 * 00000001800AF373: lea     rax, unk_180148918
 * 00000001800AF37A: mov     qword ptr [rbp+9E40h+var_94F0+8], rax
 * 00000001800AF381: movups  xmm7, [rbp+9E40h+var_94F0]
 * 00000001800AF388: mov     dword ptr [rbp+9E40h+var_7940], esi
 * 00000001800AF38E: mov     dword ptr [rbp+9E40h+var_7940+4], esi
 * 00000001800AF394: movups  xmm6, [rbp+9E40h+var_7940]
 * 00000001800AF39B: call    sub_1800A5ED4
 * 00000001800AF3A0: mov     r8, rax
 * 00000001800AF3A3: mov     r9d, r12d
 * 00000001800AF3A6: mov     edx, 2Ah ; '*'
 * 00000001800AF3AB: lea     rcx, [rbp+9E40h+var_2D70]
 * 00000001800AF3B2: call    sub_1800737C8
 * 00000001800AF3B7: nop
 * 00000001800AF3B8: mov     r8, rax
 * 00000001800AF3BB: mov     rdx, r13
 * 00000001800AF3BE: lea     rcx, [rbp+9E40h+var_2D90]
 * 00000001800AF3C5: call    sub_18001B678
 * 00000001800AF3CA: nop
 * 00000001800AF3CB: lea     r8, aVertex; "/Vertex"
 * 00000001800AF3D2: mov     rdx, rax
 * 00000001800AF3D5: lea     rcx, [rbp+9E40h+var_55F0]
 * 00000001800AF3DC: call    sub_18001B5A8
 * 00000001800AF3E1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF3E6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF3EB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF3F0: mov     rcx, rax
 * 00000001800AF3F3: call    sub_18007386C
 * 00000001800AF3F8: nop
 * 00000001800AF3F9: lea     rcx, [rbp+9E40h+var_2D90]
 * 00000001800AF400: call    sub_180011020
 * 00000001800AF405: nop
 * 00000001800AF406: lea     rcx, [rbp+9E40h+var_2D70]
 * 00000001800AF40D: call    sub_180011020
 * 00000001800AF412: nop
 * 00000001800AF413: lea     rcx, dword_1801CA4B4
 * 00000001800AF41A: call    _Init_thread_footer
 * 00000001800AF41F: mov     rax, [rdi+rbx*8]
 * 00000001800AF423: mov     ecx, [r15+rax]
 * 00000001800AF427: cmp     cs:dword_1801CA4B8, ecx
 * 00000001800AF42D: jle     loc_1800AF506
 * 00000001800AF433: lea     rcx, dword_1801CA4B8
 * 00000001800AF43A: call    sub_18000CA40
 * 00000001800AF43F: cmp     cs:dword_1801CA4B8, r14d
 * 00000001800AF446: jnz     loc_1800AF506
 * 00000001800AF44C: lea     rax, unk_180146F00
 * 00000001800AF453: mov     qword ptr [rbp+9E40h+var_94E0], rax
 * 00000001800AF45A: lea     rax, unk_180148918
 * 00000001800AF461: mov     qword ptr [rbp+9E40h+var_94E0+8], rax
 * 00000001800AF468: movups  xmm7, [rbp+9E40h+var_94E0]
 * 00000001800AF46F: mov     dword ptr [rbp+9E40h+var_7920], esi
 * 00000001800AF475: mov     dword ptr [rbp+9E40h+var_7920+4], esi
 * 00000001800AF47B: movups  xmm6, [rbp+9E40h+var_7920]
 * 00000001800AF482: call    sub_1800A5ED4
 * 00000001800AF487: mov     r8, rax
 * 00000001800AF48A: mov     r9d, r12d
 * 00000001800AF48D: mov     edx, 30h ; '0'
 * 00000001800AF492: lea     rcx, [rbp+9E40h+var_2D10]
 * 00000001800AF499: call    sub_1800737C8
 * 00000001800AF49E: nop
 * 00000001800AF49F: mov     r8, rax
 * 00000001800AF4A2: mov     rdx, r13
 * 00000001800AF4A5: lea     rcx, [rbp+9E40h+var_2D30]
 * 00000001800AF4AC: call    sub_18001B678
 * 00000001800AF4B1: nop
 * 00000001800AF4B2: lea     r8, aVertex; "/Vertex"
 * 00000001800AF4B9: mov     rdx, rax
 * 00000001800AF4BC: lea     rcx, [rbp+9E40h+var_55D0]
 * 00000001800AF4C3: call    sub_18001B5A8
 * 00000001800AF4C8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF4CD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF4D2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF4D7: mov     rcx, rax
 * 00000001800AF4DA: call    sub_18007386C
 * 00000001800AF4DF: nop
 * 00000001800AF4E0: lea     rcx, [rbp+9E40h+var_2D30]
 * 00000001800AF4E7: call    sub_180011020
 * 00000001800AF4EC: nop
 * 00000001800AF4ED: lea     rcx, [rbp+9E40h+var_2D10]
 * 00000001800AF4F4: call    sub_180011020
 * 00000001800AF4F9: nop
 * 00000001800AF4FA: lea     rcx, dword_1801CA4B8
 * 00000001800AF501: call    _Init_thread_footer
 * 00000001800AF506: mov     rax, [rdi+rbx*8]
 * 00000001800AF50A: mov     ecx, [r15+rax]
 * 00000001800AF50E: cmp     cs:dword_1801CA4BC, ecx
 * 00000001800AF514: jle     loc_1800AF5ED
 * 00000001800AF51A: lea     rcx, dword_1801CA4BC
 * 00000001800AF521: call    sub_18000CA40
 * 00000001800AF526: cmp     cs:dword_1801CA4BC, r14d
 * 00000001800AF52D: jnz     loc_1800AF5ED
 * 00000001800AF533: lea     rax, unk_180146F00
 * 00000001800AF53A: mov     qword ptr [rbp+9E40h+var_94D0], rax
 * 00000001800AF541: lea     rax, unk_180148918
 * 00000001800AF548: mov     qword ptr [rbp+9E40h+var_94D0+8], rax
 * 00000001800AF54F: movups  xmm7, [rbp+9E40h+var_94D0]
 * 00000001800AF556: mov     dword ptr [rbp+9E40h+var_7900], esi
 * 00000001800AF55C: mov     dword ptr [rbp+9E40h+var_7900+4], esi
 * 00000001800AF562: movups  xmm6, [rbp+9E40h+var_7900]
 * 00000001800AF569: call    sub_1800A5ED4
 * 00000001800AF56E: mov     r8, rax
 * 00000001800AF571: mov     r9d, r12d
 * 00000001800AF574: mov     edx, 32h ; '2'
 * 00000001800AF579: lea     rcx, [rbp+9E40h+var_2CB0]
 * 00000001800AF580: call    sub_1800737C8
 * 00000001800AF585: nop
 * 00000001800AF586: mov     r8, rax
 * 00000001800AF589: mov     rdx, r13
 * 00000001800AF58C: lea     rcx, [rbp+9E40h+var_2CD0]
 * 00000001800AF593: call    sub_18001B678
 * 00000001800AF598: nop
 * 00000001800AF599: lea     r8, aVertex; "/Vertex"
 * 00000001800AF5A0: mov     rdx, rax
 * 00000001800AF5A3: lea     rcx, [rbp+9E40h+var_55B0]
 * 00000001800AF5AA: call    sub_18001B5A8
 * 00000001800AF5AF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF5B4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF5B9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF5BE: mov     rcx, rax
 * 00000001800AF5C1: call    sub_18007386C
 * 00000001800AF5C6: nop
 * 00000001800AF5C7: lea     rcx, [rbp+9E40h+var_2CD0]
 * 00000001800AF5CE: call    sub_180011020
 * 00000001800AF5D3: nop
 * 00000001800AF5D4: lea     rcx, [rbp+9E40h+var_2CB0]
 * 00000001800AF5DB: call    sub_180011020
 * 00000001800AF5E0: nop
 * 00000001800AF5E1: lea     rcx, dword_1801CA4BC
 * 00000001800AF5E8: call    _Init_thread_footer
 * 00000001800AF5ED: mov     rax, [rdi+rbx*8]
 * 00000001800AF5F1: mov     ecx, [r15+rax]
 * 00000001800AF5F5: cmp     cs:dword_1801CA4C0, ecx
 * 00000001800AF5FB: jle     loc_1800AF6D4
 * 00000001800AF601: lea     rcx, dword_1801CA4C0
 * 00000001800AF608: call    sub_18000CA40
 * 00000001800AF60D: cmp     cs:dword_1801CA4C0, r14d
 * 00000001800AF614: jnz     loc_1800AF6D4
 * 00000001800AF61A: lea     rax, unk_180146F00
 * 00000001800AF621: mov     qword ptr [rbp+9E40h+var_94C0], rax
 * 00000001800AF628: lea     rax, unk_180148918
 * 00000001800AF62F: mov     qword ptr [rbp+9E40h+var_94C0+8], rax
 * 00000001800AF636: movups  xmm7, [rbp+9E40h+var_94C0]
 * 00000001800AF63D: mov     dword ptr [rbp+9E40h+var_78E0], esi
 * 00000001800AF643: mov     dword ptr [rbp+9E40h+var_78E0+4], esi
 * 00000001800AF649: movups  xmm6, [rbp+9E40h+var_78E0]
 * 00000001800AF650: call    sub_1800A5ED4
 * 00000001800AF655: mov     r8, rax
 * 00000001800AF658: mov     r9d, r12d
 * 00000001800AF65B: mov     edx, 38h ; '8'
 * 00000001800AF660: lea     rcx, [rbp+9E40h+var_2C50]
 * 00000001800AF667: call    sub_1800737C8
 * 00000001800AF66C: nop
 * 00000001800AF66D: mov     r8, rax
 * 00000001800AF670: mov     rdx, r13
 * 00000001800AF673: lea     rcx, [rbp+9E40h+var_1670]
 * 00000001800AF67A: call    sub_18001B678
 * 00000001800AF67F: nop
 * 00000001800AF680: lea     r8, aVertex; "/Vertex"
 * 00000001800AF687: mov     rdx, rax
 * 00000001800AF68A: lea     rcx, [rbp+9E40h+var_5590]
 * 00000001800AF691: call    sub_18001B5A8
 * 00000001800AF696: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF69B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF6A0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF6A5: mov     rcx, rax
 * 00000001800AF6A8: call    sub_18007386C
 * 00000001800AF6AD: nop
 * 00000001800AF6AE: lea     rcx, [rbp+9E40h+var_1670]
 * 00000001800AF6B5: call    sub_180011020
 * 00000001800AF6BA: nop
 * 00000001800AF6BB: lea     rcx, [rbp+9E40h+var_2C50]
 * 00000001800AF6C2: call    sub_180011020
 * 00000001800AF6C7: nop
 * 00000001800AF6C8: lea     rcx, dword_1801CA4C0
 * 00000001800AF6CF: call    _Init_thread_footer
 * 00000001800AF6D4: mov     rax, [rdi+rbx*8]
 * 00000001800AF6D8: mov     ecx, [r15+rax]
 * 00000001800AF6DC: cmp     cs:dword_1801CA4C4, ecx
 * 00000001800AF6E2: jle     loc_1800AF7BB
 * 00000001800AF6E8: lea     rcx, dword_1801CA4C4
 * 00000001800AF6EF: call    sub_18000CA40
 * 00000001800AF6F4: cmp     cs:dword_1801CA4C4, r14d
 * 00000001800AF6FB: jnz     loc_1800AF7BB
 * 00000001800AF701: lea     rax, unk_180146F00
 * 00000001800AF708: mov     qword ptr [rbp+9E40h+var_94B0], rax
 * 00000001800AF70F: lea     rax, unk_180148918
 * 00000001800AF716: mov     qword ptr [rbp+9E40h+var_94B0+8], rax
 * 00000001800AF71D: movups  xmm7, [rbp+9E40h+var_94B0]
 * 00000001800AF724: mov     dword ptr [rbp+9E40h+var_78C0], esi
 * 00000001800AF72A: mov     dword ptr [rbp+9E40h+var_78C0+4], esi
 * 00000001800AF730: movups  xmm6, [rbp+9E40h+var_78C0]
 * 00000001800AF737: call    sub_1800A5ED4
 * 00000001800AF73C: mov     r8, rax
 * 00000001800AF73F: mov     r9d, r12d
 * 00000001800AF742: mov     edx, 3Ah ; ':'
 * 00000001800AF747: lea     rcx, [rbp+9E40h+var_2BF0]
 * 00000001800AF74E: call    sub_1800737C8
 * 00000001800AF753: nop
 * 00000001800AF754: mov     r8, rax
 * 00000001800AF757: mov     rdx, r13
 * 00000001800AF75A: lea     rcx, [rbp+9E40h+var_2C10]
 * 00000001800AF761: call    sub_18001B678
 * 00000001800AF766: nop
 * 00000001800AF767: lea     r8, aVertex; "/Vertex"
 * 00000001800AF76E: mov     rdx, rax
 * 00000001800AF771: lea     rcx, [rbp+9E40h+var_5550]
 * 00000001800AF778: call    sub_18001B5A8
 * 00000001800AF77D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF782: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF787: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF78C: mov     rcx, rax
 * 00000001800AF78F: call    sub_18007386C
 * 00000001800AF794: nop
 * 00000001800AF795: lea     rcx, [rbp+9E40h+var_2C10]
 * 00000001800AF79C: call    sub_180011020
 * 00000001800AF7A1: nop
 * 00000001800AF7A2: lea     rcx, [rbp+9E40h+var_2BF0]
 * 00000001800AF7A9: call    sub_180011020
 * 00000001800AF7AE: nop
 * 00000001800AF7AF: lea     rcx, dword_1801CA4C4
 * 00000001800AF7B6: call    _Init_thread_footer
 * 00000001800AF7BB: mov     rax, [rdi+rbx*8]
 * 00000001800AF7BF: mov     eax, [r15+rax]
 * 00000001800AF7C3: cmp     cs:dword_1801CA4C8, eax
 * 00000001800AF7C9: jle     loc_1800AF8A2
 * 00000001800AF7CF: lea     rcx, dword_1801CA4C8
 * 00000001800AF7D6: call    sub_18000CA40
 * 00000001800AF7DB: cmp     cs:dword_1801CA4C8, r14d
 * 00000001800AF7E2: jnz     loc_1800AF8A2
 * 00000001800AF7E8: lea     rax, unk_180144780
 * 00000001800AF7EF: mov     qword ptr [rbp+9E40h+var_94A0], rax
 * 00000001800AF7F6: lea     rax, unk_1801457D0
 * 00000001800AF7FD: mov     qword ptr [rbp+9E40h+var_94A0+8], rax
 * 00000001800AF804: movups  xmm7, [rbp+9E40h+var_94A0]
 * 00000001800AF80B: mov     dword ptr [rbp+9E40h+var_78A0], esi
 * 00000001800AF811: mov     dword ptr [rbp+9E40h+var_78A0+4], esi
 * 00000001800AF817: movups  xmm6, [rbp+9E40h+var_78A0]
 * 00000001800AF81E: call    sub_1800A5ED4
 * 00000001800AF823: mov     r8, rax
 * 00000001800AF826: mov     r9d, r12d
 * 00000001800AF829: mov     edx, 40h ; '@'
 * 00000001800AF82E: lea     rcx, [rbp+9E40h+var_2B90]
 * 00000001800AF835: call    sub_1800737C8
 * 00000001800AF83A: nop
 * 00000001800AF83B: mov     r8, rax
 * 00000001800AF83E: mov     rdx, r13
 * 00000001800AF841: lea     rcx, [rbp+9E40h+var_2BB0]
 * 00000001800AF848: call    sub_18001B678
 * 00000001800AF84D: nop
 * 00000001800AF84E: lea     r8, aVertex; "/Vertex"
 * 00000001800AF855: mov     rdx, rax
 * 00000001800AF858: lea     rcx, [rbp+9E40h+var_5530]
 * 00000001800AF85F: call    sub_18001B5A8
 * 00000001800AF864: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF869: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF86E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF873: mov     rcx, rax
 * 00000001800AF876: call    sub_18007386C
 * 00000001800AF87B: nop
 * 00000001800AF87C: lea     rcx, [rbp+9E40h+var_2BB0]
 * 00000001800AF883: call    sub_180011020
 * 00000001800AF888: nop
 * 00000001800AF889: lea     rcx, [rbp+9E40h+var_2B90]
 * 00000001800AF890: call    sub_180011020
 * 00000001800AF895: nop
 * 00000001800AF896: lea     rcx, dword_1801CA4C8
 * 00000001800AF89D: call    _Init_thread_footer
 * 00000001800AF8A2: mov     rax, [rdi+rbx*8]
 * 00000001800AF8A6: mov     ecx, [r15+rax]
 * 00000001800AF8AA: cmp     cs:dword_1801CA4CC, ecx
 * 00000001800AF8B0: jle     loc_1800AF989
 * 00000001800AF8B6: lea     rcx, dword_1801CA4CC
 * 00000001800AF8BD: call    sub_18000CA40
 * 00000001800AF8C2: cmp     cs:dword_1801CA4CC, r14d
 * 00000001800AF8C9: jnz     loc_1800AF989
 * 00000001800AF8CF: lea     rax, unk_180144780
 * 00000001800AF8D6: mov     qword ptr [rbp+9E40h+var_9490], rax
 * 00000001800AF8DD: lea     rax, unk_1801457D0
 * 00000001800AF8E4: mov     qword ptr [rbp+9E40h+var_9490+8], rax
 * 00000001800AF8EB: movups  xmm7, [rbp+9E40h+var_9490]
 * 00000001800AF8F2: mov     dword ptr [rbp+9E40h+var_7880], esi
 * 00000001800AF8F8: mov     dword ptr [rbp+9E40h+var_7880+4], esi
 * 00000001800AF8FE: movups  xmm6, [rbp+9E40h+var_7880]
 * 00000001800AF905: call    sub_1800A5ED4
 * 00000001800AF90A: mov     r8, rax
 * 00000001800AF90D: mov     r9d, r12d
 * 00000001800AF910: mov     edx, 42h ; 'B'
 * 00000001800AF915: lea     rcx, [rbp+9E40h+var_2B30]
 * 00000001800AF91C: call    sub_1800737C8
 * 00000001800AF921: nop
 * 00000001800AF922: mov     r8, rax
 * 00000001800AF925: mov     rdx, r13
 * 00000001800AF928: lea     rcx, [rbp+9E40h+var_2B50]
 * 00000001800AF92F: call    sub_18001B678
 * 00000001800AF934: nop
 * 00000001800AF935: lea     r8, aVertex; "/Vertex"
 * 00000001800AF93C: mov     rdx, rax
 * 00000001800AF93F: lea     rcx, [rbp+9E40h+var_5510]
 * 00000001800AF946: call    sub_18001B5A8
 * 00000001800AF94B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF950: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF955: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF95A: mov     rcx, rax
 * 00000001800AF95D: call    sub_18007386C
 * 00000001800AF962: nop
 * 00000001800AF963: lea     rcx, [rbp+9E40h+var_2B50]
 * 00000001800AF96A: call    sub_180011020
 * 00000001800AF96F: nop
 * 00000001800AF970: lea     rcx, [rbp+9E40h+var_2B30]
 * 00000001800AF977: call    sub_180011020
 * 00000001800AF97C: nop
 * 00000001800AF97D: lea     rcx, dword_1801CA4CC
 * 00000001800AF984: call    _Init_thread_footer
 * 00000001800AF989: mov     rax, [rdi+rbx*8]
 * 00000001800AF98D: mov     ecx, [r15+rax]
 * 00000001800AF991: cmp     cs:dword_1801CA4D0, ecx
 * 00000001800AF997: jle     loc_1800AFA70
 * 00000001800AF99D: lea     rcx, dword_1801CA4D0
 * 00000001800AF9A4: call    sub_18000CA40
 * 00000001800AF9A9: cmp     cs:dword_1801CA4D0, r14d
 * 00000001800AF9B0: jnz     loc_1800AFA70
 * 00000001800AF9B6: lea     rax, unk_180144780
 * 00000001800AF9BD: mov     qword ptr [rbp+9E40h+var_9480], rax
 * 00000001800AF9C4: lea     rax, unk_1801457D0
 * 00000001800AF9CB: mov     qword ptr [rbp+9E40h+var_9480+8], rax
 * 00000001800AF9D2: movups  xmm7, [rbp+9E40h+var_9480]
 * 00000001800AF9D9: mov     dword ptr [rbp+9E40h+var_7860], esi
 * 00000001800AF9DF: mov     dword ptr [rbp+9E40h+var_7860+4], esi
 * 00000001800AF9E5: movups  xmm6, [rbp+9E40h+var_7860]
 * 00000001800AF9EC: call    sub_1800A5ED4
 * 00000001800AF9F1: mov     r8, rax
 * 00000001800AF9F4: mov     r9d, r12d
 * 00000001800AF9F7: mov     edx, 48h ; 'H'
 * 00000001800AF9FC: lea     rcx, [rbp+9E40h+var_2AD0]
 * 00000001800AFA03: call    sub_1800737C8
 * 00000001800AFA08: nop
 * 00000001800AFA09: mov     r8, rax
 * 00000001800AFA0C: mov     rdx, r13
 * 00000001800AFA0F: lea     rcx, [rbp+9E40h+var_2AF0]
 * 00000001800AFA16: call    sub_18001B678
 * 00000001800AFA1B: nop
 * 00000001800AFA1C: lea     r8, aVertex; "/Vertex"
 * 00000001800AFA23: mov     rdx, rax
 * 00000001800AFA26: lea     rcx, [rbp+9E40h+var_54F0]
 * 00000001800AFA2D: call    sub_18001B5A8
 * 00000001800AFA32: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFA37: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFA3C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFA41: mov     rcx, rax
 * 00000001800AFA44: call    sub_18007386C
 * 00000001800AFA49: nop
 * 00000001800AFA4A: lea     rcx, [rbp+9E40h+var_2AF0]
 * 00000001800AFA51: call    sub_180011020
 * 00000001800AFA56: nop
 * 00000001800AFA57: lea     rcx, [rbp+9E40h+var_2AD0]
 * 00000001800AFA5E: call    sub_180011020
 * 00000001800AFA63: nop
 * 00000001800AFA64: lea     rcx, dword_1801CA4D0
 * 00000001800AFA6B: call    _Init_thread_footer
 * 00000001800AFA70: mov     rax, [rdi+rbx*8]
 * 00000001800AFA74: mov     ecx, [r15+rax]
 * 00000001800AFA78: cmp     cs:dword_1801CA4D4, ecx
 * 00000001800AFA7E: jle     loc_1800AFB57
 * 00000001800AFA84: lea     rcx, dword_1801CA4D4
 * 00000001800AFA8B: call    sub_18000CA40
 * 00000001800AFA90: cmp     cs:dword_1801CA4D4, r14d
 * 00000001800AFA97: jnz     loc_1800AFB57
 * 00000001800AFA9D: lea     rax, unk_180144780
 * 00000001800AFAA4: mov     qword ptr [rbp+9E40h+var_9470], rax
 * 00000001800AFAAB: lea     rax, unk_1801457D0
 * 00000001800AFAB2: mov     qword ptr [rbp+9E40h+var_9470+8], rax
 * 00000001800AFAB9: movups  xmm7, [rbp+9E40h+var_9470]
 * 00000001800AFAC0: mov     dword ptr [rbp+9E40h+var_7840], esi
 * 00000001800AFAC6: mov     dword ptr [rbp+9E40h+var_7840+4], esi
 * 00000001800AFACC: movups  xmm6, [rbp+9E40h+var_7840]
 * 00000001800AFAD3: call    sub_1800A5ED4
 * 00000001800AFAD8: mov     r8, rax
 * 00000001800AFADB: mov     r9d, r12d
 * 00000001800AFADE: mov     edx, 4Ah ; 'J'
 * 00000001800AFAE3: lea     rcx, [rbp+9E40h+var_2A70]
 * 00000001800AFAEA: call    sub_1800737C8
 * 00000001800AFAEF: nop
 * 00000001800AFAF0: mov     r8, rax
 * 00000001800AFAF3: mov     rdx, r13
 * 00000001800AFAF6: lea     rcx, [rbp+9E40h+var_2A90]
 * 00000001800AFAFD: call    sub_18001B678
 * 00000001800AFB02: nop
 * 00000001800AFB03: lea     r8, aVertex; "/Vertex"
 * 00000001800AFB0A: mov     rdx, rax
 * 00000001800AFB0D: lea     rcx, [rbp+9E40h+var_54D0]
 * 00000001800AFB14: call    sub_18001B5A8
 * 00000001800AFB19: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFB1E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFB23: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFB28: mov     rcx, rax
 * 00000001800AFB2B: call    sub_18007386C
 * 00000001800AFB30: nop
 * 00000001800AFB31: lea     rcx, [rbp+9E40h+var_2A90]
 * 00000001800AFB38: call    sub_180011020
 * 00000001800AFB3D: nop
 * 00000001800AFB3E: lea     rcx, [rbp+9E40h+var_2A70]
 * 00000001800AFB45: call    sub_180011020
 * 00000001800AFB4A: nop
 * 00000001800AFB4B: lea     rcx, dword_1801CA4D4
 * 00000001800AFB52: call    _Init_thread_footer
 * 00000001800AFB57: mov     rax, [rdi+rbx*8]
 * 00000001800AFB5B: mov     ecx, [r15+rax]
 * 00000001800AFB5F: cmp     cs:dword_1801CA4D8, ecx
 * 00000001800AFB65: jle     loc_1800AFC3E
 * 00000001800AFB6B: lea     rcx, dword_1801CA4D8
 * 00000001800AFB72: call    sub_18000CA40
 * 00000001800AFB77: cmp     cs:dword_1801CA4D8, r14d
 * 00000001800AFB7E: jnz     loc_1800AFC3E
 * 00000001800AFB84: lea     rax, unk_180144780
 * 00000001800AFB8B: mov     qword ptr [rbp+9E40h+var_9460], rax
 * 00000001800AFB92: lea     rax, unk_1801457D0
 * 00000001800AFB99: mov     qword ptr [rbp+9E40h+var_9460+8], rax
 * 00000001800AFBA0: movups  xmm7, [rbp+9E40h+var_9460]
 * 00000001800AFBA7: mov     dword ptr [rbp+9E40h+var_7820], esi
 * 00000001800AFBAD: mov     dword ptr [rbp+9E40h+var_7820+4], esi
 * 00000001800AFBB3: movups  xmm6, [rbp+9E40h+var_7820]
 * 00000001800AFBBA: call    sub_1800A5ED4
 * 00000001800AFBBF: mov     r8, rax
 * 00000001800AFBC2: mov     r9d, r12d
 * 00000001800AFBC5: mov     edx, 50h ; 'P'
 * 00000001800AFBCA: lea     rcx, [rbp+9E40h+var_2A10]
 * 00000001800AFBD1: call    sub_1800737C8
 * 00000001800AFBD6: nop
 * 00000001800AFBD7: mov     r8, rax
 * 00000001800AFBDA: mov     rdx, r13
 * 00000001800AFBDD: lea     rcx, [rbp+9E40h+var_2A30]
 * 00000001800AFBE4: call    sub_18001B678
 * 00000001800AFBE9: nop
 * 00000001800AFBEA: lea     r8, aVertex; "/Vertex"
 * 00000001800AFBF1: mov     rdx, rax
 * 00000001800AFBF4: lea     rcx, [rbp+9E40h+var_54B0]
 * 00000001800AFBFB: call    sub_18001B5A8
 * 00000001800AFC00: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFC05: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFC0A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFC0F: mov     rcx, rax
 * 00000001800AFC12: call    sub_18007386C
 * 00000001800AFC17: nop
 * 00000001800AFC18: lea     rcx, [rbp+9E40h+var_2A30]
 * 00000001800AFC1F: call    sub_180011020
 * 00000001800AFC24: nop
 * 00000001800AFC25: lea     rcx, [rbp+9E40h+var_2A10]
 * 00000001800AFC2C: call    sub_180011020
 * 00000001800AFC31: nop
 * 00000001800AFC32: lea     rcx, dword_1801CA4D8
 * 00000001800AFC39: call    _Init_thread_footer
 * 00000001800AFC3E: mov     rax, [rdi+rbx*8]
 * 00000001800AFC42: mov     ecx, [r15+rax]
 * 00000001800AFC46: cmp     cs:dword_1801CA4DC, ecx
 * 00000001800AFC4C: jle     loc_1800AFD25
 * 00000001800AFC52: lea     rcx, dword_1801CA4DC
 * 00000001800AFC59: call    sub_18000CA40
 * 00000001800AFC5E: cmp     cs:dword_1801CA4DC, r14d
 * 00000001800AFC65: jnz     loc_1800AFD25
 * 00000001800AFC6B: lea     rax, unk_180144780
 * 00000001800AFC72: mov     qword ptr [rbp+9E40h+var_9450], rax
 * 00000001800AFC79: lea     rax, unk_1801457D0
 * 00000001800AFC80: mov     qword ptr [rbp+9E40h+var_9450+8], rax
 * 00000001800AFC87: movups  xmm7, [rbp+9E40h+var_9450]
 * 00000001800AFC8E: mov     dword ptr [rbp+9E40h+var_7800], esi
 * 00000001800AFC94: mov     dword ptr [rbp+9E40h+var_7800+4], esi
 * 00000001800AFC9A: movups  xmm6, [rbp+9E40h+var_7800]
 * 00000001800AFCA1: call    sub_1800A5ED4
 * 00000001800AFCA6: mov     r8, rax
 * 00000001800AFCA9: mov     r9d, r12d
 * 00000001800AFCAC: mov     edx, 52h ; 'R'
 * 00000001800AFCB1: lea     rcx, [rbp+9E40h+var_29B0]
 * 00000001800AFCB8: call    sub_1800737C8
 * 00000001800AFCBD: nop
 * 00000001800AFCBE: mov     r8, rax
 * 00000001800AFCC1: mov     rdx, r13
 * 00000001800AFCC4: lea     rcx, [rbp+9E40h+var_29D0]
 * 00000001800AFCCB: call    sub_18001B678
 * 00000001800AFCD0: nop
 * 00000001800AFCD1: lea     r8, aVertex; "/Vertex"
 * 00000001800AFCD8: mov     rdx, rax
 * 00000001800AFCDB: lea     rcx, [rbp+9E40h+var_5490]
 * 00000001800AFCE2: call    sub_18001B5A8
 * 00000001800AFCE7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFCEC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFCF1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFCF6: mov     rcx, rax
 * 00000001800AFCF9: call    sub_18007386C
 * 00000001800AFCFE: nop
 * 00000001800AFCFF: lea     rcx, [rbp+9E40h+var_29D0]
 * 00000001800AFD06: call    sub_180011020
 * 00000001800AFD0B: nop
 * 00000001800AFD0C: lea     rcx, [rbp+9E40h+var_29B0]
 * 00000001800AFD13: call    sub_180011020
 * 00000001800AFD18: nop
 * 00000001800AFD19: lea     rcx, dword_1801CA4DC
 * 00000001800AFD20: call    _Init_thread_footer
 * 00000001800AFD25: mov     rax, [rdi+rbx*8]
 * 00000001800AFD29: mov     ecx, [r15+rax]
 * 00000001800AFD2D: cmp     cs:dword_1801CA4E0, ecx
 * 00000001800AFD33: jle     loc_1800AFE0C
 * 00000001800AFD39: lea     rcx, dword_1801CA4E0
 * 00000001800AFD40: call    sub_18000CA40
 * 00000001800AFD45: cmp     cs:dword_1801CA4E0, r14d
 * 00000001800AFD4C: jnz     loc_1800AFE0C
 * 00000001800AFD52: lea     rax, unk_180144780
 * 00000001800AFD59: mov     qword ptr [rbp+9E40h+var_9440], rax
 * 00000001800AFD60: lea     rax, unk_1801457D0
 * 00000001800AFD67: mov     qword ptr [rbp+9E40h+var_9440+8], rax
 * 00000001800AFD6E: movups  xmm7, [rbp+9E40h+var_9440]
 * 00000001800AFD75: mov     dword ptr [rbp+9E40h+var_77E0], esi
 * 00000001800AFD7B: mov     dword ptr [rbp+9E40h+var_77E0+4], esi
 * 00000001800AFD81: movups  xmm6, [rbp+9E40h+var_77E0]
 * 00000001800AFD88: call    sub_1800A5ED4
 * 00000001800AFD8D: mov     r8, rax
 * 00000001800AFD90: mov     r9d, r12d
 * 00000001800AFD93: mov     edx, 58h ; 'X'
 * 00000001800AFD98: lea     rcx, [rbp+9E40h+var_2950]
 * 00000001800AFD9F: call    sub_1800737C8
 * 00000001800AFDA4: nop
 * 00000001800AFDA5: mov     r8, rax
 * 00000001800AFDA8: mov     rdx, r13
 * 00000001800AFDAB: lea     rcx, [rbp+9E40h+var_2970]
 * 00000001800AFDB2: call    sub_18001B678
 * 00000001800AFDB7: nop
 * 00000001800AFDB8: lea     r8, aVertex; "/Vertex"
 * 00000001800AFDBF: mov     rdx, rax
 * 00000001800AFDC2: lea     rcx, [rbp+9E40h+var_5470]
 * 00000001800AFDC9: call    sub_18001B5A8
 * 00000001800AFDCE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFDD3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFDD8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFDDD: mov     rcx, rax
 * 00000001800AFDE0: call    sub_18007386C
 * 00000001800AFDE5: nop
 * 00000001800AFDE6: lea     rcx, [rbp+9E40h+var_2970]
 * 00000001800AFDED: call    sub_180011020
 * 00000001800AFDF2: nop
 * 00000001800AFDF3: lea     rcx, [rbp+9E40h+var_2950]
 * 00000001800AFDFA: call    sub_180011020
 * 00000001800AFDFF: nop
 * 00000001800AFE00: lea     rcx, dword_1801CA4E0
 * 00000001800AFE07: call    _Init_thread_footer
 * 00000001800AFE0C: mov     rax, [rdi+rbx*8]
 * 00000001800AFE10: mov     ecx, [r15+rax]
 * 00000001800AFE14: cmp     cs:dword_1801CA4E4, ecx
 * 00000001800AFE1A: jle     loc_1800AFEF3
 * 00000001800AFE20: lea     rcx, dword_1801CA4E4
 * 00000001800AFE27: call    sub_18000CA40
 * 00000001800AFE2C: cmp     cs:dword_1801CA4E4, r14d
 * 00000001800AFE33: jnz     loc_1800AFEF3
 * 00000001800AFE39: lea     rax, unk_180144780
 * 00000001800AFE40: mov     qword ptr [rbp+9E40h+var_9430], rax
 * 00000001800AFE47: lea     rax, unk_1801457D0
 * 00000001800AFE4E: mov     qword ptr [rbp+9E40h+var_9430+8], rax
 * 00000001800AFE55: movups  xmm7, [rbp+9E40h+var_9430]
 * 00000001800AFE5C: mov     dword ptr [rbp+9E40h+var_77C0], esi
 * 00000001800AFE62: mov     dword ptr [rbp+9E40h+var_77C0+4], esi
 * 00000001800AFE68: movups  xmm6, [rbp+9E40h+var_77C0]
 * 00000001800AFE6F: call    sub_1800A5ED4
 * 00000001800AFE74: mov     r8, rax
 * 00000001800AFE77: mov     r9d, r12d
 * 00000001800AFE7A: mov     edx, 5Ah ; 'Z'
 * 00000001800AFE7F: lea     rcx, [rbp+9E40h+var_28F0]
 * 00000001800AFE86: call    sub_1800737C8
 * 00000001800AFE8B: nop
 * 00000001800AFE8C: mov     r8, rax
 * 00000001800AFE8F: mov     rdx, r13
 * 00000001800AFE92: lea     rcx, [rbp+9E40h+var_2910]
 * 00000001800AFE99: call    sub_18001B678
 * 00000001800AFE9E: nop
 * 00000001800AFE9F: lea     r8, aVertex; "/Vertex"
 * 00000001800AFEA6: mov     rdx, rax
 * 00000001800AFEA9: lea     rcx, [rbp+9E40h+var_5450]
 * 00000001800AFEB0: call    sub_18001B5A8
 * 00000001800AFEB5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFEBA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFEBF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFEC4: mov     rcx, rax
 * 00000001800AFEC7: call    sub_18007386C
 * 00000001800AFECC: nop
 * 00000001800AFECD: lea     rcx, [rbp+9E40h+var_2910]
 * 00000001800AFED4: call    sub_180011020
 * 00000001800AFED9: nop
 * 00000001800AFEDA: lea     rcx, [rbp+9E40h+var_28F0]
 * 00000001800AFEE1: call    sub_180011020
 * 00000001800AFEE6: nop
 * 00000001800AFEE7: lea     rcx, dword_1801CA4E4
 * 00000001800AFEEE: call    _Init_thread_footer
 * 00000001800AFEF3: mov     rax, [rdi+rbx*8]
 * 00000001800AFEF7: mov     eax, [r15+rax]
 * 00000001800AFEFB: cmp     cs:dword_1801CA4E8, eax
 * 00000001800AFF01: jle     loc_1800AFFDA
 * 00000001800AFF07: lea     rcx, dword_1801CA4E8
 * 00000001800AFF0E: call    sub_18000CA40
 * 00000001800AFF13: cmp     cs:dword_1801CA4E8, r14d
 * 00000001800AFF1A: jnz     loc_1800AFFDA
 * 00000001800AFF20: lea     rax, unk_1801421F0
 * 00000001800AFF27: mov     qword ptr [rbp+9E40h+var_9420], rax
 * 00000001800AFF2E: lea     rax, unk_180143C40
 * 00000001800AFF35: mov     qword ptr [rbp+9E40h+var_9420+8], rax
 * 00000001800AFF3C: movups  xmm7, [rbp+9E40h+var_9420]
 * 00000001800AFF43: mov     dword ptr [rbp+9E40h+var_77A0], esi
 * 00000001800AFF49: mov     dword ptr [rbp+9E40h+var_77A0+4], esi
 * 00000001800AFF4F: movups  xmm6, [rbp+9E40h+var_77A0]
 * 00000001800AFF56: call    sub_1800A5ED4
 * 00000001800AFF5B: mov     r8, rax
 * 00000001800AFF5E: mov     r9d, r12d
 * 00000001800AFF61: mov     edx, 60h ; '`'
 * 00000001800AFF66: lea     rcx, [rbp+9E40h+var_2890]
 * 00000001800AFF6D: call    sub_1800737C8
 * 00000001800AFF72: nop
 * 00000001800AFF73: mov     r8, rax
 * 00000001800AFF76: mov     rdx, r13
 * 00000001800AFF79: lea     rcx, [rbp+9E40h+var_28B0]
 * 00000001800AFF80: call    sub_18001B678
 * 00000001800AFF85: nop
 * 00000001800AFF86: lea     r8, aVertex; "/Vertex"
 * 00000001800AFF8D: mov     rdx, rax
 * 00000001800AFF90: lea     rcx, [rbp+9E40h+var_5430]
 * 00000001800AFF97: call    sub_18001B5A8
 * 00000001800AFF9C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFFA1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFFA6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFFAB: mov     rcx, rax
 * 00000001800AFFAE: call    sub_18007386C
 * 00000001800AFFB3: nop
 * 00000001800AFFB4: lea     rcx, [rbp+9E40h+var_28B0]
 * 00000001800AFFBB: call    sub_180011020
 * 00000001800AFFC0: nop
 * 00000001800AFFC1: lea     rcx, [rbp+9E40h+var_2890]
 * 00000001800AFFC8: call    sub_180011020
 * 00000001800AFFCD: nop
 * 00000001800AFFCE: lea     rcx, dword_1801CA4E8
 * 00000001800AFFD5: call    _Init_thread_footer
 * 00000001800AFFDA: mov     rax, [rdi+rbx*8]
 * 00000001800AFFDE: mov     ecx, [r15+rax]
 * 00000001800AFFE2: cmp     cs:dword_1801CA4EC, ecx
 * 00000001800AFFE8: jle     loc_1800B00C1
 * 00000001800AFFEE: lea     rcx, dword_1801CA4EC
 * 00000001800AFFF5: call    sub_18000CA40
 * 00000001800AFFFA: cmp     cs:dword_1801CA4EC, r14d
 * 00000001800B0001: jnz     loc_1800B00C1
 * 00000001800B0007: lea     rax, unk_1801421F0
 * 00000001800B000E: mov     qword ptr [rbp+9E40h+var_9410], rax
 * 00000001800B0015: lea     rax, unk_180143C40
 * 00000001800B001C: mov     qword ptr [rbp+9E40h+var_9410+8], rax
 * 00000001800B0023: movups  xmm7, [rbp+9E40h+var_9410]
 * 00000001800B002A: mov     dword ptr [rbp+9E40h+var_7780], esi
 * 00000001800B0030: mov     dword ptr [rbp+9E40h+var_7780+4], esi
 * 00000001800B0036: movups  xmm6, [rbp+9E40h+var_7780]
 * 00000001800B003D: call    sub_1800A5ED4
 * 00000001800B0042: mov     r8, rax
 * 00000001800B0045: mov     r9d, r12d
 * 00000001800B0048: mov     edx, 62h ; 'b'
 * 00000001800B004D: lea     rcx, [rbp+9E40h+var_2830]
 * 00000001800B0054: call    sub_1800737C8
 * 00000001800B0059: nop
 * 00000001800B005A: mov     r8, rax
 * 00000001800B005D: mov     rdx, r13
 * 00000001800B0060: lea     rcx, [rbp+9E40h+var_2850]
 * 00000001800B0067: call    sub_18001B678
 * 00000001800B006C: nop
 * 00000001800B006D: lea     r8, aVertex; "/Vertex"
 * 00000001800B0074: mov     rdx, rax
 * 00000001800B0077: lea     rcx, [rbp+9E40h+var_5410]
 * 00000001800B007E: call    sub_18001B5A8
 * 00000001800B0083: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0088: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B008D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0092: mov     rcx, rax
 * 00000001800B0095: call    sub_18007386C
 * 00000001800B009A: nop
 * 00000001800B009B: lea     rcx, [rbp+9E40h+var_2850]
 * 00000001800B00A2: call    sub_180011020
 * 00000001800B00A7: nop
 * 00000001800B00A8: lea     rcx, [rbp+9E40h+var_2830]
 * 00000001800B00AF: call    sub_180011020
 * 00000001800B00B4: nop
 * 00000001800B00B5: lea     rcx, dword_1801CA4EC
 * 00000001800B00BC: call    _Init_thread_footer
 * 00000001800B00C1: mov     rax, [rdi+rbx*8]
 * 00000001800B00C5: mov     ecx, [r15+rax]
 * 00000001800B00C9: cmp     cs:dword_1801CA4F0, ecx
 * 00000001800B00CF: jle     loc_1800B01A8
 * 00000001800B00D5: lea     rcx, dword_1801CA4F0
 * 00000001800B00DC: call    sub_18000CA40
 * 00000001800B00E1: cmp     cs:dword_1801CA4F0, r14d
 * 00000001800B00E8: jnz     loc_1800B01A8
 * 00000001800B00EE: lea     rax, unk_1801421F0
 * 00000001800B00F5: mov     qword ptr [rbp+9E40h+var_9400], rax
 * 00000001800B00FC: lea     rax, unk_180143C40
 * 00000001800B0103: mov     qword ptr [rbp+9E40h+var_9400+8], rax
 * 00000001800B010A: movups  xmm7, [rbp+9E40h+var_9400]
 * 00000001800B0111: mov     dword ptr [rbp+9E40h+var_7760], esi
 * 00000001800B0117: mov     dword ptr [rbp+9E40h+var_7760+4], esi
 * 00000001800B011D: movups  xmm6, [rbp+9E40h+var_7760]
 * 00000001800B0124: call    sub_1800A5ED4
 * 00000001800B0129: mov     r8, rax
 * 00000001800B012C: mov     r9d, r12d
 * 00000001800B012F: mov     edx, 68h ; 'h'
 * 00000001800B0134: lea     rcx, [rbp+9E40h+var_27D0]
 * 00000001800B013B: call    sub_1800737C8
 * 00000001800B0140: nop
 * 00000001800B0141: mov     r8, rax
 * 00000001800B0144: mov     rdx, r13
 * 00000001800B0147: lea     rcx, [rbp+9E40h+var_27F0]
 * 00000001800B014E: call    sub_18001B678
 * 00000001800B0153: nop
 * 00000001800B0154: lea     r8, aVertex; "/Vertex"
 * 00000001800B015B: mov     rdx, rax
 * 00000001800B015E: lea     rcx, [rbp+9E40h+var_53F0]
 * 00000001800B0165: call    sub_18001B5A8
 * 00000001800B016A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B016F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0174: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0179: mov     rcx, rax
 * 00000001800B017C: call    sub_18007386C
 * 00000001800B0181: nop
 * 00000001800B0182: lea     rcx, [rbp+9E40h+var_27F0]
 * 00000001800B0189: call    sub_180011020
 * 00000001800B018E: nop
 * 00000001800B018F: lea     rcx, [rbp+9E40h+var_27D0]
 * 00000001800B0196: call    sub_180011020
 * 00000001800B019B: nop
 * 00000001800B019C: lea     rcx, dword_1801CA4F0
 * 00000001800B01A3: call    _Init_thread_footer
 * 00000001800B01A8: mov     rax, [rdi+rbx*8]
 * 00000001800B01AC: mov     ecx, [r15+rax]
 * 00000001800B01B0: cmp     cs:dword_1801CA4F4, ecx
 * 00000001800B01B6: jle     loc_1800B028F
 * 00000001800B01BC: lea     rcx, dword_1801CA4F4
 * 00000001800B01C3: call    sub_18000CA40
 * 00000001800B01C8: cmp     cs:dword_1801CA4F4, r14d
 * 00000001800B01CF: jnz     loc_1800B028F
 * 00000001800B01D5: lea     rax, unk_1801421F0
 * 00000001800B01DC: mov     qword ptr [rbp+9E40h+var_93F0], rax
 * 00000001800B01E3: lea     rax, unk_180143C40
 * 00000001800B01EA: mov     qword ptr [rbp+9E40h+var_93F0+8], rax
 * 00000001800B01F1: movups  xmm7, [rbp+9E40h+var_93F0]
 * 00000001800B01F8: mov     dword ptr [rbp+9E40h+var_7740], esi
 * 00000001800B01FE: mov     dword ptr [rbp+9E40h+var_7740+4], esi
 * 00000001800B0204: movups  xmm6, [rbp+9E40h+var_7740]
 * 00000001800B020B: call    sub_1800A5ED4
 * 00000001800B0210: mov     r8, rax
 * 00000001800B0213: mov     r9d, r12d
 * 00000001800B0216: mov     edx, 6Ah ; 'j'
 * 00000001800B021B: lea     rcx, [rbp+9E40h+var_2770]
 * 00000001800B0222: call    sub_1800737C8
 * 00000001800B0227: nop
 * 00000001800B0228: mov     r8, rax
 * 00000001800B022B: mov     rdx, r13
 * 00000001800B022E: lea     rcx, [rbp+9E40h+var_2790]
 * 00000001800B0235: call    sub_18001B678
 * 00000001800B023A: nop
 * 00000001800B023B: lea     r8, aVertex; "/Vertex"
 * 00000001800B0242: mov     rdx, rax
 * 00000001800B0245: lea     rcx, [rbp+9E40h+var_53D0]
 * 00000001800B024C: call    sub_18001B5A8
 * 00000001800B0251: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0256: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B025B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0260: mov     rcx, rax
 * 00000001800B0263: call    sub_18007386C
 * 00000001800B0268: nop
 * 00000001800B0269: lea     rcx, [rbp+9E40h+var_2790]
 * 00000001800B0270: call    sub_180011020
 * 00000001800B0275: nop
 * 00000001800B0276: lea     rcx, [rbp+9E40h+var_2770]
 * 00000001800B027D: call    sub_180011020
 * 00000001800B0282: nop
 * 00000001800B0283: lea     rcx, dword_1801CA4F4
 * 00000001800B028A: call    _Init_thread_footer
 * 00000001800B028F: mov     rax, [rdi+rbx*8]
 * 00000001800B0293: mov     ecx, [r15+rax]
 * 00000001800B0297: cmp     cs:dword_1801CA4F8, ecx
 * 00000001800B029D: jle     loc_1800B0376
 * 00000001800B02A3: lea     rcx, dword_1801CA4F8
 * 00000001800B02AA: call    sub_18000CA40
 * 00000001800B02AF: cmp     cs:dword_1801CA4F8, r14d
 * 00000001800B02B6: jnz     loc_1800B0376
 * 00000001800B02BC: lea     rax, unk_1801421F0
 * 00000001800B02C3: mov     qword ptr [rbp+9E40h+var_93E0], rax
 * 00000001800B02CA: lea     rax, unk_180143C40
 * 00000001800B02D1: mov     qword ptr [rbp+9E40h+var_93E0+8], rax
 * 00000001800B02D8: movups  xmm7, [rbp+9E40h+var_93E0]
 * 00000001800B02DF: mov     dword ptr [rbp+9E40h+var_7720], esi
 * 00000001800B02E5: mov     dword ptr [rbp+9E40h+var_7720+4], esi
 * 00000001800B02EB: movups  xmm6, [rbp+9E40h+var_7720]
 * 00000001800B02F2: call    sub_1800A5ED4
 * 00000001800B02F7: mov     r8, rax
 * 00000001800B02FA: mov     r9d, r12d
 * 00000001800B02FD: mov     edx, 70h ; 'p'
 * 00000001800B0302: lea     rcx, [rbp+9E40h+var_2710]
 * 00000001800B0309: call    sub_1800737C8
 * 00000001800B030E: nop
 * 00000001800B030F: mov     r8, rax
 * 00000001800B0312: mov     rdx, r13
 * 00000001800B0315: lea     rcx, [rbp+9E40h+var_2730]
 * 00000001800B031C: call    sub_18001B678
 * 00000001800B0321: nop
 * 00000001800B0322: lea     r8, aVertex; "/Vertex"
 * 00000001800B0329: mov     rdx, rax
 * 00000001800B032C: lea     rcx, [rbp+9E40h+var_53B0]
 * 00000001800B0333: call    sub_18001B5A8
 * 00000001800B0338: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B033D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0342: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0347: mov     rcx, rax
 * 00000001800B034A: call    sub_18007386C
 * 00000001800B034F: nop
 * 00000001800B0350: lea     rcx, [rbp+9E40h+var_2730]
 * 00000001800B0357: call    sub_180011020
 * 00000001800B035C: nop
 * 00000001800B035D: lea     rcx, [rbp+9E40h+var_2710]
 * 00000001800B0364: call    sub_180011020
 * 00000001800B0369: nop
 * 00000001800B036A: lea     rcx, dword_1801CA4F8
 * 00000001800B0371: call    _Init_thread_footer
 * 00000001800B0376: mov     rax, [rdi+rbx*8]
 * 00000001800B037A: mov     ecx, [r15+rax]
 * 00000001800B037E: cmp     cs:dword_1801CA4FC, ecx
 * 00000001800B0384: jle     loc_1800B045D
 * 00000001800B038A: lea     rcx, dword_1801CA4FC
 * 00000001800B0391: call    sub_18000CA40
 * 00000001800B0396: cmp     cs:dword_1801CA4FC, r14d
 * 00000001800B039D: jnz     loc_1800B045D
 * 00000001800B03A3: lea     rax, unk_1801421F0
 * 00000001800B03AA: mov     qword ptr [rbp+9E40h+var_93D0], rax
 * 00000001800B03B1: lea     rax, unk_180143C40
 * 00000001800B03B8: mov     qword ptr [rbp+9E40h+var_93D0+8], rax
 * 00000001800B03BF: movups  xmm7, [rbp+9E40h+var_93D0]
 * 00000001800B03C6: mov     dword ptr [rbp+9E40h+var_7700], esi
 * 00000001800B03CC: mov     dword ptr [rbp+9E40h+var_7700+4], esi
 * 00000001800B03D2: movups  xmm6, [rbp+9E40h+var_7700]
 * 00000001800B03D9: call    sub_1800A5ED4
 * 00000001800B03DE: mov     r8, rax
 * 00000001800B03E1: mov     r9d, r12d
 * 00000001800B03E4: mov     edx, 72h ; 'r'
 * 00000001800B03E9: lea     rcx, [rbp+9E40h+var_26B0]
 * 00000001800B03F0: call    sub_1800737C8
 * 00000001800B03F5: nop
 * 00000001800B03F6: mov     r8, rax
 * 00000001800B03F9: mov     rdx, r13
 * 00000001800B03FC: lea     rcx, [rbp+9E40h+var_26D0]
 * 00000001800B0403: call    sub_18001B678
 * 00000001800B0408: nop
 * 00000001800B0409: lea     r8, aVertex; "/Vertex"
 * 00000001800B0410: mov     rdx, rax
 * 00000001800B0413: lea     rcx, [rbp+9E40h+var_5390]
 * 00000001800B041A: call    sub_18001B5A8
 * 00000001800B041F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0424: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0429: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B042E: mov     rcx, rax
 * 00000001800B0431: call    sub_18007386C
 * 00000001800B0436: nop
 * 00000001800B0437: lea     rcx, [rbp+9E40h+var_26D0]
 * 00000001800B043E: call    sub_180011020
 * 00000001800B0443: nop
 * 00000001800B0444: lea     rcx, [rbp+9E40h+var_26B0]
 * 00000001800B044B: call    sub_180011020
 * 00000001800B0450: nop
 * 00000001800B0451: lea     rcx, dword_1801CA4FC
 * 00000001800B0458: call    _Init_thread_footer
 * 00000001800B045D: mov     rax, [rdi+rbx*8]
 * 00000001800B0461: mov     ecx, [r15+rax]
 * 00000001800B0465: cmp     cs:dword_1801CA500, ecx
 * 00000001800B046B: jle     loc_1800B0544
 * 00000001800B0471: lea     rcx, dword_1801CA500
 * 00000001800B0478: call    sub_18000CA40
 * 00000001800B047D: cmp     cs:dword_1801CA500, r14d
 * 00000001800B0484: jnz     loc_1800B0544
 * 00000001800B048A: lea     rax, unk_1801421F0
 * 00000001800B0491: mov     qword ptr [rbp+9E40h+var_93C0], rax
 * 00000001800B0498: lea     rax, unk_180143C40
 * 00000001800B049F: mov     qword ptr [rbp+9E40h+var_93C0+8], rax
 * 00000001800B04A6: movups  xmm7, [rbp+9E40h+var_93C0]
 * 00000001800B04AD: mov     dword ptr [rbp+9E40h+var_76E0], esi
 * 00000001800B04B3: mov     dword ptr [rbp+9E40h+var_76E0+4], esi
 * 00000001800B04B9: movups  xmm6, [rbp+9E40h+var_76E0]
 * 00000001800B04C0: call    sub_1800A5ED4
 * 00000001800B04C5: mov     r8, rax
 * 00000001800B04C8: mov     r9d, r12d
 * 00000001800B04CB: mov     edx, 78h ; 'x'
 * 00000001800B04D0: lea     rcx, [rbp+9E40h+var_2650]
 * 00000001800B04D7: call    sub_1800737C8
 * 00000001800B04DC: nop
 * 00000001800B04DD: mov     r8, rax
 * 00000001800B04E0: mov     rdx, r13
 * 00000001800B04E3: lea     rcx, [rbp+9E40h+var_2670]
 * 00000001800B04EA: call    sub_18001B678
 * 00000001800B04EF: nop
 * 00000001800B04F0: lea     r8, aVertex; "/Vertex"
 * 00000001800B04F7: mov     rdx, rax
 * 00000001800B04FA: lea     rcx, [rbp+9E40h+var_5370]
 * 00000001800B0501: call    sub_18001B5A8
 * 00000001800B0506: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B050B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0510: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0515: mov     rcx, rax
 * 00000001800B0518: call    sub_18007386C
 * 00000001800B051D: nop
 * 00000001800B051E: lea     rcx, [rbp+9E40h+var_2670]
 * 00000001800B0525: call    sub_180011020
 * 00000001800B052A: nop
 * 00000001800B052B: lea     rcx, [rbp+9E40h+var_2650]
 * 00000001800B0532: call    sub_180011020
 * 00000001800B0537: nop
 * 00000001800B0538: lea     rcx, dword_1801CA500
 * 00000001800B053F: call    _Init_thread_footer
 * 00000001800B0544: mov     rax, [rdi+rbx*8]
 * 00000001800B0548: mov     ecx, [r15+rax]
 * 00000001800B054C: cmp     cs:dword_1801CA504, ecx
 * 00000001800B0552: jle     loc_1800B062B
 * 00000001800B0558: lea     rcx, dword_1801CA504
 * 00000001800B055F: call    sub_18000CA40
 * 00000001800B0564: cmp     cs:dword_1801CA504, r14d
 * 00000001800B056B: jnz     loc_1800B062B
 * 00000001800B0571: lea     rax, unk_1801421F0
 * 00000001800B0578: mov     qword ptr [rbp+9E40h+var_93B0], rax
 * 00000001800B057F: lea     rax, unk_180143C40
 * 00000001800B0586: mov     qword ptr [rbp+9E40h+var_93B0+8], rax
 * 00000001800B058D: movups  xmm7, [rbp+9E40h+var_93B0]
 * 00000001800B0594: mov     dword ptr [rbp+9E40h+var_76C0], esi
 * 00000001800B059A: mov     dword ptr [rbp+9E40h+var_76C0+4], esi
 * 00000001800B05A0: movups  xmm6, [rbp+9E40h+var_76C0]
 * 00000001800B05A7: call    sub_1800A5ED4
 * 00000001800B05AC: mov     r8, rax
 * 00000001800B05AF: mov     r9d, r12d
 * 00000001800B05B2: mov     edx, 7Ah ; 'z'
 * 00000001800B05B7: lea     rcx, [rbp+9E40h+var_25F0]
 * 00000001800B05BE: call    sub_1800737C8
 * 00000001800B05C3: nop
 * 00000001800B05C4: mov     r8, rax
 * 00000001800B05C7: mov     rdx, r13
 * 00000001800B05CA: lea     rcx, [rbp+9E40h+var_2610]
 * 00000001800B05D1: call    sub_18001B678
 * 00000001800B05D6: nop
 * 00000001800B05D7: lea     r8, aVertex; "/Vertex"
 * 00000001800B05DE: mov     rdx, rax
 * 00000001800B05E1: lea     rcx, [rbp+9E40h+var_5350]
 * 00000001800B05E8: call    sub_18001B5A8
 * 00000001800B05ED: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B05F2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B05F7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B05FC: mov     rcx, rax
 * 00000001800B05FF: call    sub_18007386C
 * 00000001800B0604: nop
 * 00000001800B0605: lea     rcx, [rbp+9E40h+var_2610]
 * 00000001800B060C: call    sub_180011020
 * 00000001800B0611: nop
 * 00000001800B0612: lea     rcx, [rbp+9E40h+var_25F0]
 * 00000001800B0619: call    sub_180011020
 * 00000001800B061E: nop
 * 00000001800B061F: lea     rcx, dword_1801CA504
 * 00000001800B0626: call    _Init_thread_footer
 * 00000001800B062B: mov     rax, [rdi+rbx*8]
 * 00000001800B062F: mov     ecx, [r15+rax]
 * 00000001800B0633: cmp     cs:dword_1801CA508, ecx
 * 00000001800B0639: jle     loc_1800B0712
 * 00000001800B063F: lea     rcx, dword_1801CA508
 * 00000001800B0646: call    sub_18000CA40
 * 00000001800B064B: cmp     cs:dword_1801CA508, r14d
 * 00000001800B0652: jnz     loc_1800B0712
 * 00000001800B0658: lea     rax, unk_180144780
 * 00000001800B065F: mov     qword ptr [rbp+9E40h+var_93A0], rax
 * 00000001800B0666: lea     rax, unk_1801457D0
 * 00000001800B066D: mov     qword ptr [rbp+9E40h+var_93A0+8], rax
 * 00000001800B0674: movups  xmm7, [rbp+9E40h+var_93A0]
 * 00000001800B067B: mov     dword ptr [rbp+9E40h+var_76A0], esi
 * 00000001800B0681: mov     dword ptr [rbp+9E40h+var_76A0+4], esi
 * 00000001800B0687: movups  xmm6, [rbp+9E40h+var_76A0]
 * 00000001800B068E: call    sub_1800A5ED4
 * 00000001800B0693: mov     r8, rax
 * 00000001800B0696: mov     r9d, r12d
 * 00000001800B0699: mov     edx, 80h
 * 00000001800B069E: lea     rcx, [rbp+9E40h+var_2590]
 * 00000001800B06A5: call    sub_1800737C8
 * 00000001800B06AA: nop
 * 00000001800B06AB: mov     r8, rax
 * 00000001800B06AE: mov     rdx, r13
 * 00000001800B06B1: lea     rcx, [rbp+9E40h+var_25B0]
 * 00000001800B06B8: call    sub_18001B678
 * 00000001800B06BD: nop
 * 00000001800B06BE: lea     r8, aVertex; "/Vertex"
 * 00000001800B06C5: mov     rdx, rax
 * 00000001800B06C8: lea     rcx, [rbp+9E40h+var_5330]
 * 00000001800B06CF: call    sub_18001B5A8
 * 00000001800B06D4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B06D9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B06DE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B06E3: mov     rcx, rax
 * 00000001800B06E6: call    sub_18007386C
 * 00000001800B06EB: nop
 * 00000001800B06EC: lea     rcx, [rbp+9E40h+var_25B0]
 * 00000001800B06F3: call    sub_180011020
 * 00000001800B06F8: nop
 * 00000001800B06F9: lea     rcx, [rbp+9E40h+var_2590]
 * 00000001800B0700: call    sub_180011020
 * 00000001800B0705: nop
 * 00000001800B0706: lea     rcx, dword_1801CA508
 * 00000001800B070D: call    _Init_thread_footer
 * 00000001800B0712: mov     rax, [rdi+rbx*8]
 * 00000001800B0716: mov     ecx, [r15+rax]
 * 00000001800B071A: cmp     cs:dword_1801CA50C, ecx
 * 00000001800B0720: jle     loc_1800B07F9
 * 00000001800B0726: lea     rcx, dword_1801CA50C
 * 00000001800B072D: call    sub_18000CA40
 * 00000001800B0732: cmp     cs:dword_1801CA50C, r14d
 * 00000001800B0739: jnz     loc_1800B07F9
 * 00000001800B073F: lea     rax, unk_180144780
 * 00000001800B0746: mov     qword ptr [rbp+9E40h+var_9390], rax
 * 00000001800B074D: lea     rax, unk_1801457D0
 * 00000001800B0754: mov     qword ptr [rbp+9E40h+var_9390+8], rax
 * 00000001800B075B: movups  xmm7, [rbp+9E40h+var_9390]
 * 00000001800B0762: mov     dword ptr [rbp+9E40h+var_7680], esi
 * 00000001800B0768: mov     dword ptr [rbp+9E40h+var_7680+4], esi
 * 00000001800B076E: movups  xmm6, [rbp+9E40h+var_7680]
 * 00000001800B0775: call    sub_1800A5ED4
 * 00000001800B077A: mov     r8, rax
 * 00000001800B077D: mov     r9d, r12d
 * 00000001800B0780: mov     edx, 82h
 * 00000001800B0785: lea     rcx, [rbp+9E40h+var_2530]
 * 00000001800B078C: call    sub_1800737C8
 * 00000001800B0791: nop
 * 00000001800B0792: mov     r8, rax
 * 00000001800B0795: mov     rdx, r13
 * 00000001800B0798: lea     rcx, [rbp+9E40h+var_2550]
 * 00000001800B079F: call    sub_18001B678
 * 00000001800B07A4: nop
 * 00000001800B07A5: lea     r8, aVertex; "/Vertex"
 * 00000001800B07AC: mov     rdx, rax
 * 00000001800B07AF: lea     rcx, [rbp+9E40h+var_5310]
 * 00000001800B07B6: call    sub_18001B5A8
 * 00000001800B07BB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B07C0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B07C5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B07CA: mov     rcx, rax
 * 00000001800B07CD: call    sub_18007386C
 * 00000001800B07D2: nop
 * 00000001800B07D3: lea     rcx, [rbp+9E40h+var_2550]
 * 00000001800B07DA: call    sub_180011020
 * 00000001800B07DF: nop
 * 00000001800B07E0: lea     rcx, [rbp+9E40h+var_2530]
 * 00000001800B07E7: call    sub_180011020
 * 00000001800B07EC: nop
 * 00000001800B07ED: lea     rcx, dword_1801CA50C
 * 00000001800B07F4: call    _Init_thread_footer
 * 00000001800B07F9: mov     rax, [rdi+rbx*8]
 * 00000001800B07FD: mov     ecx, [r15+rax]
 * 00000001800B0801: cmp     cs:dword_1801CA510, ecx
 * 00000001800B0807: jle     loc_1800B08E0
 * 00000001800B080D: lea     rcx, dword_1801CA510
 * 00000001800B0814: call    sub_18000CA40
 * 00000001800B0819: cmp     cs:dword_1801CA510, r14d
 * 00000001800B0820: jnz     loc_1800B08E0
 * 00000001800B0826: lea     rax, unk_180144780
 * 00000001800B082D: mov     qword ptr [rbp+9E40h+var_9380], rax
 * 00000001800B0834: lea     rax, unk_1801457D0
 * 00000001800B083B: mov     qword ptr [rbp+9E40h+var_9380+8], rax
 * 00000001800B0842: movups  xmm7, [rbp+9E40h+var_9380]
 * 00000001800B0849: mov     dword ptr [rbp+9E40h+var_7660], esi
 * 00000001800B084F: mov     dword ptr [rbp+9E40h+var_7660+4], esi
 * 00000001800B0855: movups  xmm6, [rbp+9E40h+var_7660]
 * 00000001800B085C: call    sub_1800A5ED4
 * 00000001800B0861: mov     r8, rax
 * 00000001800B0864: mov     r9d, r12d
 * 00000001800B0867: mov     edx, 88h
 * 00000001800B086C: lea     rcx, [rbp+9E40h+var_24D0]
 * 00000001800B0873: call    sub_1800737C8
 * 00000001800B0878: nop
 * 00000001800B0879: mov     r8, rax
 * 00000001800B087C: mov     rdx, r13
 * 00000001800B087F: lea     rcx, [rbp+9E40h+var_24F0]
 * 00000001800B0886: call    sub_18001B678
 * 00000001800B088B: nop
 * 00000001800B088C: lea     r8, aVertex; "/Vertex"
 * 00000001800B0893: mov     rdx, rax
 * 00000001800B0896: lea     rcx, [rbp+9E40h+var_52F0]
 * 00000001800B089D: call    sub_18001B5A8
 * 00000001800B08A2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B08A7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B08AC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B08B1: mov     rcx, rax
 * 00000001800B08B4: call    sub_18007386C
 * 00000001800B08B9: nop
 * 00000001800B08BA: lea     rcx, [rbp+9E40h+var_24F0]
 * 00000001800B08C1: call    sub_180011020
 * 00000001800B08C6: nop
 * 00000001800B08C7: lea     rcx, [rbp+9E40h+var_24D0]
 * 00000001800B08CE: call    sub_180011020
 * 00000001800B08D3: nop
 * 00000001800B08D4: lea     rcx, dword_1801CA510
 * 00000001800B08DB: call    _Init_thread_footer
 * 00000001800B08E0: mov     rax, [rdi+rbx*8]
 * 00000001800B08E4: mov     ecx, [r15+rax]
 * 00000001800B08E8: cmp     cs:dword_1801CA514, ecx
 * 00000001800B08EE: jle     loc_1800B09C7
 * 00000001800B08F4: lea     rcx, dword_1801CA514
 * 00000001800B08FB: call    sub_18000CA40
 * 00000001800B0900: cmp     cs:dword_1801CA514, r14d
 * 00000001800B0907: jnz     loc_1800B09C7
 * 00000001800B090D: lea     rax, unk_180144780
 * 00000001800B0914: mov     qword ptr [rbp+9E40h+var_9370], rax
 * 00000001800B091B: lea     rax, unk_1801457D0
 * 00000001800B0922: mov     qword ptr [rbp+9E40h+var_9370+8], rax
 * 00000001800B0929: movups  xmm7, [rbp+9E40h+var_9370]
 * 00000001800B0930: mov     dword ptr [rbp+9E40h+var_7640], esi
 * 00000001800B0936: mov     dword ptr [rbp+9E40h+var_7640+4], esi
 * 00000001800B093C: movups  xmm6, [rbp+9E40h+var_7640]
 * 00000001800B0943: call    sub_1800A5ED4
 * 00000001800B0948: mov     r8, rax
 * 00000001800B094B: mov     r9d, r12d
 * 00000001800B094E: mov     edx, 8Ah
 * 00000001800B0953: lea     rcx, [rbp+9E40h+var_2470]
 * 00000001800B095A: call    sub_1800737C8
 * 00000001800B095F: nop
 * 00000001800B0960: mov     r8, rax
 * 00000001800B0963: mov     rdx, r13
 * 00000001800B0966: lea     rcx, [rbp+9E40h+var_2490]
 * 00000001800B096D: call    sub_18001B678
 * 00000001800B0972: nop
 * 00000001800B0973: lea     r8, aVertex; "/Vertex"
 * 00000001800B097A: mov     rdx, rax
 * 00000001800B097D: lea     rcx, [rbp+9E40h+var_52D0]
 * 00000001800B0984: call    sub_18001B5A8
 * 00000001800B0989: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B098E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0993: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0998: mov     rcx, rax
 * 00000001800B099B: call    sub_18007386C
 * 00000001800B09A0: nop
 * 00000001800B09A1: lea     rcx, [rbp+9E40h+var_2490]
 * 00000001800B09A8: call    sub_180011020
 * 00000001800B09AD: nop
 * 00000001800B09AE: lea     rcx, [rbp+9E40h+var_2470]
 * 00000001800B09B5: call    sub_180011020
 * 00000001800B09BA: nop
 * 00000001800B09BB: lea     rcx, dword_1801CA514
 * 00000001800B09C2: call    _Init_thread_footer
 * 00000001800B09C7: mov     rax, [rdi+rbx*8]
 * 00000001800B09CB: mov     ecx, [r15+rax]
 * 00000001800B09CF: cmp     cs:dword_1801CA518, ecx
 * 00000001800B09D5: jle     loc_1800B0AAE
 * 00000001800B09DB: lea     rcx, dword_1801CA518
 * 00000001800B09E2: call    sub_18000CA40
 * 00000001800B09E7: cmp     cs:dword_1801CA518, r14d
 * 00000001800B09EE: jnz     loc_1800B0AAE
 * 00000001800B09F4: lea     rax, unk_180144780
 * 00000001800B09FB: mov     qword ptr [rbp+9E40h+var_9360], rax
 * 00000001800B0A02: lea     rax, unk_1801457D0
 * 00000001800B0A09: mov     qword ptr [rbp+9E40h+var_9360+8], rax
 * 00000001800B0A10: movups  xmm7, [rbp+9E40h+var_9360]
 * 00000001800B0A17: mov     dword ptr [rbp+9E40h+var_7620], esi
 * 00000001800B0A1D: mov     dword ptr [rbp+9E40h+var_7620+4], esi
 * 00000001800B0A23: movups  xmm6, [rbp+9E40h+var_7620]
 * 00000001800B0A2A: call    sub_1800A5ED4
 * 00000001800B0A2F: mov     r8, rax
 * 00000001800B0A32: mov     r9d, r12d
 * 00000001800B0A35: mov     edx, 90h
 * 00000001800B0A3A: lea     rcx, [rbp+9E40h+var_2410]
 * 00000001800B0A41: call    sub_1800737C8
 * 00000001800B0A46: nop
 * 00000001800B0A47: mov     r8, rax
 * 00000001800B0A4A: mov     rdx, r13
 * 00000001800B0A4D: lea     rcx, [rbp+9E40h+var_2430]
 * 00000001800B0A54: call    sub_18001B678
 * 00000001800B0A59: nop
 * 00000001800B0A5A: lea     r8, aVertex; "/Vertex"
 * 00000001800B0A61: mov     rdx, rax
 * 00000001800B0A64: lea     rcx, [rbp+9E40h+var_52B0]
 * 00000001800B0A6B: call    sub_18001B5A8
 * 00000001800B0A70: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0A75: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0A7A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0A7F: mov     rcx, rax
 * 00000001800B0A82: call    sub_18007386C
 * 00000001800B0A87: nop
 * 00000001800B0A88: lea     rcx, [rbp+9E40h+var_2430]
 * 00000001800B0A8F: call    sub_180011020
 * 00000001800B0A94: nop
 * 00000001800B0A95: lea     rcx, [rbp+9E40h+var_2410]
 * 00000001800B0A9C: call    sub_180011020
 * 00000001800B0AA1: nop
 * 00000001800B0AA2: lea     rcx, dword_1801CA518
 * 00000001800B0AA9: call    _Init_thread_footer
 * 00000001800B0AAE: mov     rax, [rdi+rbx*8]
 * 00000001800B0AB2: mov     ecx, [r15+rax]
 * 00000001800B0AB6: cmp     cs:dword_1801CA51C, ecx
 * 00000001800B0ABC: jle     loc_1800B0B95
 * 00000001800B0AC2: lea     rcx, dword_1801CA51C
 * 00000001800B0AC9: call    sub_18000CA40
 * 00000001800B0ACE: cmp     cs:dword_1801CA51C, r14d
 * 00000001800B0AD5: jnz     loc_1800B0B95
 * 00000001800B0ADB: lea     rax, unk_180144780
 * 00000001800B0AE2: mov     qword ptr [rbp+9E40h+var_9350], rax
 * 00000001800B0AE9: lea     rax, unk_1801457D0
 * 00000001800B0AF0: mov     qword ptr [rbp+9E40h+var_9350+8], rax
 * 00000001800B0AF7: movups  xmm7, [rbp+9E40h+var_9350]
 * 00000001800B0AFE: mov     dword ptr [rbp+9E40h+var_7600], esi
 * 00000001800B0B04: mov     dword ptr [rbp+9E40h+var_7600+4], esi
 * 00000001800B0B0A: movups  xmm6, [rbp+9E40h+var_7600]
 * 00000001800B0B11: call    sub_1800A5ED4
 * 00000001800B0B16: mov     r8, rax
 * 00000001800B0B19: mov     r9d, r12d
 * 00000001800B0B1C: mov     edx, 92h
 * 00000001800B0B21: lea     rcx, [rbp+9E40h+var_23B0]
 * 00000001800B0B28: call    sub_1800737C8
 * 00000001800B0B2D: nop
 * 00000001800B0B2E: mov     r8, rax
 * 00000001800B0B31: mov     rdx, r13
 * 00000001800B0B34: lea     rcx, [rbp+9E40h+var_23D0]
 * 00000001800B0B3B: call    sub_18001B678
 * 00000001800B0B40: nop
 * 00000001800B0B41: lea     r8, aVertex; "/Vertex"
 * 00000001800B0B48: mov     rdx, rax
 * 00000001800B0B4B: lea     rcx, [rbp+9E40h+var_5290]
 * 00000001800B0B52: call    sub_18001B5A8
 * 00000001800B0B57: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0B5C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0B61: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0B66: mov     rcx, rax
 * 00000001800B0B69: call    sub_18007386C
 * 00000001800B0B6E: nop
 * 00000001800B0B6F: lea     rcx, [rbp+9E40h+var_23D0]
 * 00000001800B0B76: call    sub_180011020
 * 00000001800B0B7B: nop
 * 00000001800B0B7C: lea     rcx, [rbp+9E40h+var_23B0]
 * 00000001800B0B83: call    sub_180011020
 * 00000001800B0B88: nop
 * 00000001800B0B89: lea     rcx, dword_1801CA51C
 * 00000001800B0B90: call    _Init_thread_footer
 * 00000001800B0B95: mov     rax, [rdi+rbx*8]
 * 00000001800B0B99: mov     ecx, [r15+rax]
 * 00000001800B0B9D: cmp     cs:dword_1801CA520, ecx
 * 00000001800B0BA3: jle     loc_1800B0C7C
 * 00000001800B0BA9: lea     rcx, dword_1801CA520
 * 00000001800B0BB0: call    sub_18000CA40
 * 00000001800B0BB5: cmp     cs:dword_1801CA520, r14d
 * 00000001800B0BBC: jnz     loc_1800B0C7C
 * 00000001800B0BC2: lea     rax, unk_180144780
 * 00000001800B0BC9: mov     qword ptr [rbp+9E40h+var_9340], rax
 * 00000001800B0BD0: lea     rax, unk_1801457D0
 * 00000001800B0BD7: mov     qword ptr [rbp+9E40h+var_9340+8], rax
 * 00000001800B0BDE: movups  xmm7, [rbp+9E40h+var_9340]
 * 00000001800B0BE5: mov     dword ptr [rbp+9E40h+var_75E0], esi
 * 00000001800B0BEB: mov     dword ptr [rbp+9E40h+var_75E0+4], esi
 * 00000001800B0BF1: movups  xmm6, [rbp+9E40h+var_75E0]
 * 00000001800B0BF8: call    sub_1800A5ED4
 * 00000001800B0BFD: mov     r8, rax
 * 00000001800B0C00: mov     r9d, r12d
 * 00000001800B0C03: mov     edx, 98h
 * 00000001800B0C08: lea     rcx, [rbp+9E40h+var_2350]
 * 00000001800B0C0F: call    sub_1800737C8
 * 00000001800B0C14: nop
 * 00000001800B0C15: mov     r8, rax
 * 00000001800B0C18: mov     rdx, r13
 * 00000001800B0C1B: lea     rcx, [rbp+9E40h+var_2370]
 * 00000001800B0C22: call    sub_18001B678
 * 00000001800B0C27: nop
 * 00000001800B0C28: lea     r8, aVertex; "/Vertex"
 * 00000001800B0C2F: mov     rdx, rax
 * 00000001800B0C32: lea     rcx, [rbp+9E40h+var_5270]
 * 00000001800B0C39: call    sub_18001B5A8
 * 00000001800B0C3E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0C43: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0C48: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0C4D: mov     rcx, rax
 * 00000001800B0C50: call    sub_18007386C
 * 00000001800B0C55: nop
 * 00000001800B0C56: lea     rcx, [rbp+9E40h+var_2370]
 * 00000001800B0C5D: call    sub_180011020
 * 00000001800B0C62: nop
 * 00000001800B0C63: lea     rcx, [rbp+9E40h+var_2350]
 * 00000001800B0C6A: call    sub_180011020
 * 00000001800B0C6F: nop
 * 00000001800B0C70: lea     rcx, dword_1801CA520
 * 00000001800B0C77: call    _Init_thread_footer
 * 00000001800B0C7C: mov     rax, [rdi+rbx*8]
 * 00000001800B0C80: mov     ecx, [r15+rax]
 * 00000001800B0C84: cmp     cs:dword_1801CA524, ecx
 * 00000001800B0C8A: jle     loc_1800B0D63
 * 00000001800B0C90: lea     rcx, dword_1801CA524
 * 00000001800B0C97: call    sub_18000CA40
 * 00000001800B0C9C: cmp     cs:dword_1801CA524, r14d
 * 00000001800B0CA3: jnz     loc_1800B0D63
 * 00000001800B0CA9: lea     rax, unk_180144780
 * 00000001800B0CB0: mov     qword ptr [rbp+9E40h+var_9330], rax
 * 00000001800B0CB7: lea     rax, unk_1801457D0
 * 00000001800B0CBE: mov     qword ptr [rbp+9E40h+var_9330+8], rax
 * 00000001800B0CC5: movups  xmm7, [rbp+9E40h+var_9330]
 * 00000001800B0CCC: mov     dword ptr [rbp+9E40h+var_75C0], esi
 * 00000001800B0CD2: mov     dword ptr [rbp+9E40h+var_75C0+4], esi
 * 00000001800B0CD8: movups  xmm6, [rbp+9E40h+var_75C0]
 * 00000001800B0CDF: call    sub_1800A5ED4
 * 00000001800B0CE4: mov     r8, rax
 * 00000001800B0CE7: mov     r9d, r12d
 * 00000001800B0CEA: mov     edx, 9Ah
 * 00000001800B0CEF: lea     rcx, [rbp+9E40h+var_22F0]
 * 00000001800B0CF6: call    sub_1800737C8
 * 00000001800B0CFB: nop
 * 00000001800B0CFC: mov     r8, rax
 * 00000001800B0CFF: mov     rdx, r13
 * 00000001800B0D02: lea     rcx, [rbp+9E40h+var_2310]
 * 00000001800B0D09: call    sub_18001B678
 * 00000001800B0D0E: nop
 * 00000001800B0D0F: lea     r8, aVertex; "/Vertex"
 * 00000001800B0D16: mov     rdx, rax
 * 00000001800B0D19: lea     rcx, [rbp+9E40h+var_5250]
 * 00000001800B0D20: call    sub_18001B5A8
 * 00000001800B0D25: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0D2A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0D2F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0D34: mov     rcx, rax
 * 00000001800B0D37: call    sub_18007386C
 * 00000001800B0D3C: nop
 * 00000001800B0D3D: lea     rcx, [rbp+9E40h+var_2310]
 * 00000001800B0D44: call    sub_180011020
 * 00000001800B0D49: nop
 * 00000001800B0D4A: lea     rcx, [rbp+9E40h+var_22F0]
 * 00000001800B0D51: call    sub_180011020
 * 00000001800B0D56: nop
 * 00000001800B0D57: lea     rcx, dword_1801CA524
 * 00000001800B0D5E: call    _Init_thread_footer
 * 00000001800B0D63: mov     rax, [rdi+rbx*8]
 * 00000001800B0D67: mov     ecx, [r15+rax]
 * 00000001800B0D6B: cmp     cs:dword_1801CA528, ecx
 * 00000001800B0D71: jle     loc_1800B0E4A
 * 00000001800B0D77: lea     rcx, dword_1801CA528
 * 00000001800B0D7E: call    sub_18000CA40
 * 00000001800B0D83: cmp     cs:dword_1801CA528, r14d
 * 00000001800B0D8A: jnz     loc_1800B0E4A
 * 00000001800B0D90: lea     rax, unk_1801421F0
 * 00000001800B0D97: mov     qword ptr [rbp+9E40h+var_9320], rax
 * 00000001800B0D9E: lea     rax, unk_180143C40
 * 00000001800B0DA5: mov     qword ptr [rbp+9E40h+var_9320+8], rax
 * 00000001800B0DAC: movups  xmm7, [rbp+9E40h+var_9320]
 * 00000001800B0DB3: mov     dword ptr [rbp+9E40h+var_75A0], esi
 * 00000001800B0DB9: mov     dword ptr [rbp+9E40h+var_75A0+4], esi
 * 00000001800B0DBF: movups  xmm6, [rbp+9E40h+var_75A0]
 * 00000001800B0DC6: call    sub_1800A5ED4
 * 00000001800B0DCB: mov     r8, rax
 * 00000001800B0DCE: mov     r9d, r12d
 * 00000001800B0DD1: mov     edx, 0A0h
 * 00000001800B0DD6: lea     rcx, [rbp+9E40h+var_2290]
 * 00000001800B0DDD: call    sub_1800737C8
 * 00000001800B0DE2: nop
 * 00000001800B0DE3: mov     r8, rax
 * 00000001800B0DE6: mov     rdx, r13
 * 00000001800B0DE9: lea     rcx, [rbp+9E40h+var_22B0]
 * 00000001800B0DF0: call    sub_18001B678
 * 00000001800B0DF5: nop
 * 00000001800B0DF6: lea     r8, aVertex; "/Vertex"
 * 00000001800B0DFD: mov     rdx, rax
 * 00000001800B0E00: lea     rcx, [rbp+9E40h+var_5230]
 * 00000001800B0E07: call    sub_18001B5A8
 * 00000001800B0E0C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0E11: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0E16: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0E1B: mov     rcx, rax
 * 00000001800B0E1E: call    sub_18007386C
 * 00000001800B0E23: nop
 * 00000001800B0E24: lea     rcx, [rbp+9E40h+var_22B0]
 * 00000001800B0E2B: call    sub_180011020
 * 00000001800B0E30: nop
 * 00000001800B0E31: lea     rcx, [rbp+9E40h+var_2290]
 * 00000001800B0E38: call    sub_180011020
 * 00000001800B0E3D: nop
 * 00000001800B0E3E: lea     rcx, dword_1801CA528
 * 00000001800B0E45: call    _Init_thread_footer
 * 00000001800B0E4A: mov     rax, [rdi+rbx*8]
 * 00000001800B0E4E: mov     ecx, [r15+rax]
 * 00000001800B0E52: cmp     cs:dword_1801CA52C, ecx
 * 00000001800B0E58: jle     loc_1800B0F31
 * 00000001800B0E5E: lea     rcx, dword_1801CA52C
 * 00000001800B0E65: call    sub_18000CA40
 * 00000001800B0E6A: cmp     cs:dword_1801CA52C, r14d
 * 00000001800B0E71: jnz     loc_1800B0F31
 * 00000001800B0E77: lea     rax, unk_1801421F0
 * 00000001800B0E7E: mov     qword ptr [rbp+9E40h+var_9310], rax
 * 00000001800B0E85: lea     rax, unk_180143C40
 * 00000001800B0E8C: mov     qword ptr [rbp+9E40h+var_9310+8], rax
 * 00000001800B0E93: movups  xmm7, [rbp+9E40h+var_9310]
 * 00000001800B0E9A: mov     dword ptr [rbp+9E40h+var_7580], esi
 * 00000001800B0EA0: mov     dword ptr [rbp+9E40h+var_7580+4], esi
 * 00000001800B0EA6: movups  xmm6, [rbp+9E40h+var_7580]
 * 00000001800B0EAD: call    sub_1800A5ED4
 * 00000001800B0EB2: mov     r8, rax
 * 00000001800B0EB5: mov     r9d, r12d
 * 00000001800B0EB8: mov     edx, 0A2h
 * 00000001800B0EBD: lea     rcx, [rbp+9E40h+var_2230]
 * 00000001800B0EC4: call    sub_1800737C8
 * 00000001800B0EC9: nop
 * 00000001800B0ECA: mov     r8, rax
 * 00000001800B0ECD: mov     rdx, r13
 * 00000001800B0ED0: lea     rcx, [rbp+9E40h+var_2250]
 * 00000001800B0ED7: call    sub_18001B678
 * 00000001800B0EDC: nop
 * 00000001800B0EDD: lea     r8, aVertex; "/Vertex"
 * 00000001800B0EE4: mov     rdx, rax
 * 00000001800B0EE7: lea     rcx, [rbp+9E40h+var_5210]
 * 00000001800B0EEE: call    sub_18001B5A8
 * 00000001800B0EF3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0EF8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0EFD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0F02: mov     rcx, rax
 * 00000001800B0F05: call    sub_18007386C
 * 00000001800B0F0A: nop
 * 00000001800B0F0B: lea     rcx, [rbp+9E40h+var_2250]
 * 00000001800B0F12: call    sub_180011020
 * 00000001800B0F17: nop
 * 00000001800B0F18: lea     rcx, [rbp+9E40h+var_2230]
 * 00000001800B0F1F: call    sub_180011020
 * 00000001800B0F24: nop
 * 00000001800B0F25: lea     rcx, dword_1801CA52C
 * 00000001800B0F2C: call    _Init_thread_footer
 * 00000001800B0F31: mov     rax, [rdi+rbx*8]
 * 00000001800B0F35: mov     ecx, [r15+rax]
 * 00000001800B0F39: cmp     cs:dword_1801CA530, ecx
 * 00000001800B0F3F: jle     loc_1800B1018
 * 00000001800B0F45: lea     rcx, dword_1801CA530
 * 00000001800B0F4C: call    sub_18000CA40
 * 00000001800B0F51: cmp     cs:dword_1801CA530, r14d
 * 00000001800B0F58: jnz     loc_1800B1018
 * 00000001800B0F5E: lea     rax, unk_1801421F0
 * 00000001800B0F65: mov     qword ptr [rbp+9E40h+var_9300], rax
 * 00000001800B0F6C: lea     rax, unk_180143C40
 * 00000001800B0F73: mov     qword ptr [rbp+9E40h+var_9300+8], rax
 * 00000001800B0F7A: movups  xmm7, [rbp+9E40h+var_9300]
 * 00000001800B0F81: mov     dword ptr [rbp+9E40h+var_7560], esi
 * 00000001800B0F87: mov     dword ptr [rbp+9E40h+var_7560+4], esi
 * 00000001800B0F8D: movups  xmm6, [rbp+9E40h+var_7560]
 * 00000001800B0F94: call    sub_1800A5ED4
 * 00000001800B0F99: mov     r8, rax
 * 00000001800B0F9C: mov     r9d, r12d
 * 00000001800B0F9F: mov     edx, 0A8h
 * 00000001800B0FA4: lea     rcx, [rbp+9E40h+var_21D0]
 * 00000001800B0FAB: call    sub_1800737C8
 * 00000001800B0FB0: nop
 * 00000001800B0FB1: mov     r8, rax
 * 00000001800B0FB4: mov     rdx, r13
 * 00000001800B0FB7: lea     rcx, [rbp+9E40h+var_21F0]
 * 00000001800B0FBE: call    sub_18001B678
 * 00000001800B0FC3: nop
 * 00000001800B0FC4: lea     r8, aVertex; "/Vertex"
 * 00000001800B0FCB: mov     rdx, rax
 * 00000001800B0FCE: lea     rcx, [rbp+9E40h+var_51F0]
 * 00000001800B0FD5: call    sub_18001B5A8
 * 00000001800B0FDA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0FDF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0FE4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0FE9: mov     rcx, rax
 * 00000001800B0FEC: call    sub_18007386C
 * 00000001800B0FF1: nop
 * 00000001800B0FF2: lea     rcx, [rbp+9E40h+var_21F0]
 * 00000001800B0FF9: call    sub_180011020
 * 00000001800B0FFE: nop
 * 00000001800B0FFF: lea     rcx, [rbp+9E40h+var_21D0]
 * 00000001800B1006: call    sub_180011020
 * 00000001800B100B: nop
 * 00000001800B100C: lea     rcx, dword_1801CA530
 * 00000001800B1013: call    _Init_thread_footer
 * 00000001800B1018: mov     rax, [rdi+rbx*8]
 * 00000001800B101C: mov     ecx, [r15+rax]
 * 00000001800B1020: cmp     cs:dword_1801CA534, ecx
 * 00000001800B1026: jle     loc_1800B10FF
 * 00000001800B102C: lea     rcx, dword_1801CA534
 * 00000001800B1033: call    sub_18000CA40
 * 00000001800B1038: cmp     cs:dword_1801CA534, r14d
 * 00000001800B103F: jnz     loc_1800B10FF
 * 00000001800B1045: lea     rax, unk_1801421F0
 * 00000001800B104C: mov     qword ptr [rbp+9E40h+var_92F0], rax
 * 00000001800B1053: lea     rax, unk_180143C40
 * 00000001800B105A: mov     qword ptr [rbp+9E40h+var_92F0+8], rax
 * 00000001800B1061: movups  xmm7, [rbp+9E40h+var_92F0]
 * 00000001800B1068: mov     dword ptr [rbp+9E40h+var_7540], esi
 * 00000001800B106E: mov     dword ptr [rbp+9E40h+var_7540+4], esi
 * 00000001800B1074: movups  xmm6, [rbp+9E40h+var_7540]
 * 00000001800B107B: call    sub_1800A5ED4
 * 00000001800B1080: mov     r8, rax
 * 00000001800B1083: mov     r9d, r12d
 * 00000001800B1086: mov     edx, 0AAh
 * 00000001800B108B: lea     rcx, [rbp+9E40h+var_2170]
 * 00000001800B1092: call    sub_1800737C8
 * 00000001800B1097: nop
 * 00000001800B1098: mov     r8, rax
 * 00000001800B109B: mov     rdx, r13
 * 00000001800B109E: lea     rcx, [rbp+9E40h+var_2190]
 * 00000001800B10A5: call    sub_18001B678
 * 00000001800B10AA: nop
 * 00000001800B10AB: lea     r8, aVertex; "/Vertex"
 * 00000001800B10B2: mov     rdx, rax
 * 00000001800B10B5: lea     rcx, [rbp+9E40h+var_51D0]
 * 00000001800B10BC: call    sub_18001B5A8
 * 00000001800B10C1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B10C6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B10CB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B10D0: mov     rcx, rax
 * 00000001800B10D3: call    sub_18007386C
 * 00000001800B10D8: nop
 * 00000001800B10D9: lea     rcx, [rbp+9E40h+var_2190]
 * 00000001800B10E0: call    sub_180011020
 * 00000001800B10E5: nop
 * 00000001800B10E6: lea     rcx, [rbp+9E40h+var_2170]
 * 00000001800B10ED: call    sub_180011020
 * 00000001800B10F2: nop
 * 00000001800B10F3: lea     rcx, dword_1801CA534
 * 00000001800B10FA: call    _Init_thread_footer
 * 00000001800B10FF: mov     rax, [rdi+rbx*8]
 * 00000001800B1103: mov     ecx, [r15+rax]
 * 00000001800B1107: cmp     cs:dword_1801CA538, ecx
 * 00000001800B110D: jle     loc_1800B11E6
 * 00000001800B1113: lea     rcx, dword_1801CA538
 * 00000001800B111A: call    sub_18000CA40
 * 00000001800B111F: cmp     cs:dword_1801CA538, r14d
 * 00000001800B1126: jnz     loc_1800B11E6
 * 00000001800B112C: lea     rax, unk_1801421F0
 * 00000001800B1133: mov     qword ptr [rbp+9E40h+var_92E0], rax
 * 00000001800B113A: lea     rax, unk_180143C40
 * 00000001800B1141: mov     qword ptr [rbp+9E40h+var_92E0+8], rax
 * 00000001800B1148: movups  xmm7, [rbp+9E40h+var_92E0]
 * 00000001800B114F: mov     dword ptr [rbp+9E40h+var_7520], esi
 * 00000001800B1155: mov     dword ptr [rbp+9E40h+var_7520+4], esi
 * 00000001800B115B: movups  xmm6, [rbp+9E40h+var_7520]
 * 00000001800B1162: call    sub_1800A5ED4
 * 00000001800B1167: mov     r8, rax
 * 00000001800B116A: mov     r9d, r12d
 * 00000001800B116D: mov     edx, 0B0h
 * 00000001800B1172: lea     rcx, [rbp+9E40h+var_2110]
 * 00000001800B1179: call    sub_1800737C8
 * 00000001800B117E: nop
 * 00000001800B117F: mov     r8, rax
 * 00000001800B1182: mov     rdx, r13
 * 00000001800B1185: lea     rcx, [rbp+9E40h+var_2130]
 * 00000001800B118C: call    sub_18001B678
 * 00000001800B1191: nop
 * 00000001800B1192: lea     r8, aVertex; "/Vertex"
 * 00000001800B1199: mov     rdx, rax
 * 00000001800B119C: lea     rcx, [rbp+9E40h+var_51B0]
 * 00000001800B11A3: call    sub_18001B5A8
 * 00000001800B11A8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B11AD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B11B2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B11B7: mov     rcx, rax
 * 00000001800B11BA: call    sub_18007386C
 * 00000001800B11BF: nop
 * 00000001800B11C0: lea     rcx, [rbp+9E40h+var_2130]
 * 00000001800B11C7: call    sub_180011020
 * 00000001800B11CC: nop
 * 00000001800B11CD: lea     rcx, [rbp+9E40h+var_2110]
 * 00000001800B11D4: call    sub_180011020
 * 00000001800B11D9: nop
 * 00000001800B11DA: lea     rcx, dword_1801CA538
 * 00000001800B11E1: call    _Init_thread_footer
 * 00000001800B11E6: mov     rax, [rdi+rbx*8]
 * 00000001800B11EA: mov     ecx, [r15+rax]
 * 00000001800B11EE: cmp     cs:dword_1801CA53C, ecx
 * 00000001800B11F4: jle     loc_1800B12CD
 * 00000001800B11FA: lea     rcx, dword_1801CA53C
 * 00000001800B1201: call    sub_18000CA40
 * 00000001800B1206: cmp     cs:dword_1801CA53C, r14d
 * 00000001800B120D: jnz     loc_1800B12CD
 * 00000001800B1213: lea     rax, unk_1801421F0
 * 00000001800B121A: mov     qword ptr [rbp+9E40h+var_92D0], rax
 * 00000001800B1221: lea     rax, unk_180143C40
 * 00000001800B1228: mov     qword ptr [rbp+9E40h+var_92D0+8], rax
 * 00000001800B122F: movups  xmm7, [rbp+9E40h+var_92D0]
 * 00000001800B1236: mov     dword ptr [rbp+9E40h+var_7500], esi
 * 00000001800B123C: mov     dword ptr [rbp+9E40h+var_7500+4], esi
 * 00000001800B1242: movups  xmm6, [rbp+9E40h+var_7500]
 * 00000001800B1249: call    sub_1800A5ED4
 * 00000001800B124E: mov     r8, rax
 * 00000001800B1251: mov     r9d, r12d
 * 00000001800B1254: mov     edx, 0B2h
 * 00000001800B1259: lea     rcx, [rbp+9E40h+var_20B0]
 * 00000001800B1260: call    sub_1800737C8
 * 00000001800B1265: nop
 * 00000001800B1266: mov     r8, rax
 * 00000001800B1269: mov     rdx, r13
 * 00000001800B126C: lea     rcx, [rbp+9E40h+var_20D0]
 * 00000001800B1273: call    sub_18001B678
 * 00000001800B1278: nop
 * 00000001800B1279: lea     r8, aVertex; "/Vertex"
 * 00000001800B1280: mov     rdx, rax
 * 00000001800B1283: lea     rcx, [rbp+9E40h+var_5190]
 * 00000001800B128A: call    sub_18001B5A8
 * 00000001800B128F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1294: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1299: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B129E: mov     rcx, rax
 * 00000001800B12A1: call    sub_18007386C
 * 00000001800B12A6: nop
 * 00000001800B12A7: lea     rcx, [rbp+9E40h+var_20D0]
 * 00000001800B12AE: call    sub_180011020
 * 00000001800B12B3: nop
 * 00000001800B12B4: lea     rcx, [rbp+9E40h+var_20B0]
 * 00000001800B12BB: call    sub_180011020
 * 00000001800B12C0: nop
 * 00000001800B12C1: lea     rcx, dword_1801CA53C
 * 00000001800B12C8: call    _Init_thread_footer
 * 00000001800B12CD: mov     rax, [rdi+rbx*8]
 * 00000001800B12D1: mov     ecx, [r15+rax]
 * 00000001800B12D5: cmp     cs:dword_1801CA540, ecx
 * 00000001800B12DB: jle     loc_1800B13B4
 * 00000001800B12E1: lea     rcx, dword_1801CA540
 * 00000001800B12E8: call    sub_18000CA40
 * 00000001800B12ED: cmp     cs:dword_1801CA540, r14d
 * 00000001800B12F4: jnz     loc_1800B13B4
 * 00000001800B12FA: lea     rax, unk_1801421F0
 * 00000001800B1301: mov     qword ptr [rbp+9E40h+var_92C0], rax
 * 00000001800B1308: lea     rax, unk_180143C40
 * 00000001800B130F: mov     qword ptr [rbp+9E40h+var_92C0+8], rax
 * 00000001800B1316: movups  xmm7, [rbp+9E40h+var_92C0]
 * 00000001800B131D: mov     dword ptr [rbp+9E40h+var_74E0], esi
 * 00000001800B1323: mov     dword ptr [rbp+9E40h+var_74E0+4], esi
 * 00000001800B1329: movups  xmm6, [rbp+9E40h+var_74E0]
 * 00000001800B1330: call    sub_1800A5ED4
 * 00000001800B1335: mov     r8, rax
 * 00000001800B1338: mov     r9d, r12d
 * 00000001800B133B: mov     edx, 0B8h
 * 00000001800B1340: lea     rcx, [rbp+9E40h+var_2050]
 * 00000001800B1347: call    sub_1800737C8
 * 00000001800B134C: nop
 * 00000001800B134D: mov     r8, rax
 * 00000001800B1350: mov     rdx, r13
 * 00000001800B1353: lea     rcx, [rbp+9E40h+var_2070]
 * 00000001800B135A: call    sub_18001B678
 * 00000001800B135F: nop
 * 00000001800B1360: lea     r8, aVertex; "/Vertex"
 * 00000001800B1367: mov     rdx, rax
 * 00000001800B136A: lea     rcx, [rbp+9E40h+var_5170]
 * 00000001800B1371: call    sub_18001B5A8
 * 00000001800B1376: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B137B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1380: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1385: mov     rcx, rax
 * 00000001800B1388: call    sub_18007386C
 * 00000001800B138D: nop
 * 00000001800B138E: lea     rcx, [rbp+9E40h+var_2070]
 * 00000001800B1395: call    sub_180011020
 * 00000001800B139A: nop
 * 00000001800B139B: lea     rcx, [rbp+9E40h+var_2050]
 * 00000001800B13A2: call    sub_180011020
 * 00000001800B13A7: nop
 * 00000001800B13A8: lea     rcx, dword_1801CA540
 * 00000001800B13AF: call    _Init_thread_footer
 * 00000001800B13B4: mov     rax, [rdi+rbx*8]
 * 00000001800B13B8: mov     ecx, [r15+rax]
 * 00000001800B13BC: cmp     cs:dword_1801CA544, ecx
 * 00000001800B13C2: jle     loc_1800B149B
 * 00000001800B13C8: lea     rcx, dword_1801CA544
 * 00000001800B13CF: call    sub_18000CA40
 * 00000001800B13D4: cmp     cs:dword_1801CA544, r14d
 * 00000001800B13DB: jnz     loc_1800B149B
 * 00000001800B13E1: lea     rax, unk_1801421F0
 * 00000001800B13E8: mov     qword ptr [rbp+9E40h+var_92B0], rax
 * 00000001800B13EF: lea     rax, unk_180143C40
 * 00000001800B13F6: mov     qword ptr [rbp+9E40h+var_92B0+8], rax
 * 00000001800B13FD: movups  xmm7, [rbp+9E40h+var_92B0]
 * 00000001800B1404: mov     dword ptr [rbp+9E40h+var_74C0], esi
 * 00000001800B140A: mov     dword ptr [rbp+9E40h+var_74C0+4], esi
 * 00000001800B1410: movups  xmm6, [rbp+9E40h+var_74C0]
 * 00000001800B1417: call    sub_1800A5ED4
 * 00000001800B141C: mov     r8, rax
 * 00000001800B141F: mov     r9d, r12d
 * 00000001800B1422: mov     edx, 0BAh
 * 00000001800B1427: lea     rcx, [rbp+9E40h+var_1FF0]
 * 00000001800B142E: call    sub_1800737C8
 * 00000001800B1433: nop
 * 00000001800B1434: mov     r8, rax
 * 00000001800B1437: mov     rdx, r13
 * 00000001800B143A: lea     rcx, [rbp+9E40h+var_2010]
 * 00000001800B1441: call    sub_18001B678
 * 00000001800B1446: nop
 * 00000001800B1447: lea     r8, aVertex; "/Vertex"
 * 00000001800B144E: mov     rdx, rax
 * 00000001800B1451: lea     rcx, [rbp+9E40h+var_5150]
 * 00000001800B1458: call    sub_18001B5A8
 * 00000001800B145D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1462: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1467: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B146C: mov     rcx, rax
 * 00000001800B146F: call    sub_18007386C
 * 00000001800B1474: nop
 * 00000001800B1475: lea     rcx, [rbp+9E40h+var_2010]
 * 00000001800B147C: call    sub_180011020
 * 00000001800B1481: nop
 * 00000001800B1482: lea     rcx, [rbp+9E40h+var_1FF0]
 * 00000001800B1489: call    sub_180011020
 * 00000001800B148E: nop
 * 00000001800B148F: lea     rcx, dword_1801CA544
 * 00000001800B1496: call    _Init_thread_footer
 * 00000001800B149B: mov     rax, [rdi+rbx*8]
 * 00000001800B149F: mov     ecx, [r15+rax]
 * 00000001800B14A3: cmp     cs:dword_1801CA548, ecx
 * 00000001800B14A9: jle     loc_1800B1582
 * 00000001800B14AF: lea     rcx, dword_1801CA548
 * 00000001800B14B6: call    sub_18000CA40
 * 00000001800B14BB: cmp     cs:dword_1801CA548, r14d
 * 00000001800B14C2: jnz     loc_1800B1582
 * 00000001800B14C8: lea     rax, unk_180144780
 * 00000001800B14CF: mov     qword ptr [rbp+9E40h+var_92A0], rax
 * 00000001800B14D6: lea     rax, unk_1801457D0
 * 00000001800B14DD: mov     qword ptr [rbp+9E40h+var_92A0+8], rax
 * 00000001800B14E4: movups  xmm7, [rbp+9E40h+var_92A0]
 * 00000001800B14EB: mov     dword ptr [rbp+9E40h+var_74A0], esi
 * 00000001800B14F1: mov     dword ptr [rbp+9E40h+var_74A0+4], esi
 * 00000001800B14F7: movups  xmm6, [rbp+9E40h+var_74A0]
 * 00000001800B14FE: call    sub_1800A5ED4
 * 00000001800B1503: mov     r8, rax
 * 00000001800B1506: mov     r9d, r12d
 * 00000001800B1509: mov     edx, 0C0h
 * 00000001800B150E: lea     rcx, [rbp+9E40h+var_1F90]
 * 00000001800B1515: call    sub_1800737C8
 * 00000001800B151A: nop
 * 00000001800B151B: mov     r8, rax
 * 00000001800B151E: mov     rdx, r13
 * 00000001800B1521: lea     rcx, [rbp+9E40h+var_1FB0]
 * 00000001800B1528: call    sub_18001B678
 * 00000001800B152D: nop
 * 00000001800B152E: lea     r8, aVertex; "/Vertex"
 * 00000001800B1535: mov     rdx, rax
 * 00000001800B1538: lea     rcx, [rbp+9E40h+var_5130]
 * 00000001800B153F: call    sub_18001B5A8
 * 00000001800B1544: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1549: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B154E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1553: mov     rcx, rax
 * 00000001800B1556: call    sub_18007386C
 * 00000001800B155B: nop
 * 00000001800B155C: lea     rcx, [rbp+9E40h+var_1FB0]
 * 00000001800B1563: call    sub_180011020
 * 00000001800B1568: nop
 * 00000001800B1569: lea     rcx, [rbp+9E40h+var_1F90]
 * 00000001800B1570: call    sub_180011020
 * 00000001800B1575: nop
 * 00000001800B1576: lea     rcx, dword_1801CA548
 * 00000001800B157D: call    _Init_thread_footer
 * 00000001800B1582: mov     rax, [rdi+rbx*8]
 * 00000001800B1586: mov     ecx, [r15+rax]
 * 00000001800B158A: cmp     cs:dword_1801CA54C, ecx
 * 00000001800B1590: jle     loc_1800B1669
 * 00000001800B1596: lea     rcx, dword_1801CA54C
 * 00000001800B159D: call    sub_18000CA40
 * 00000001800B15A2: cmp     cs:dword_1801CA54C, r14d
 * 00000001800B15A9: jnz     loc_1800B1669
 * 00000001800B15AF: lea     rax, unk_180144780
 * 00000001800B15B6: mov     qword ptr [rbp+9E40h+var_9290], rax
 * 00000001800B15BD: lea     rax, unk_1801457D0
 * 00000001800B15C4: mov     qword ptr [rbp+9E40h+var_9290+8], rax
 * 00000001800B15CB: movups  xmm7, [rbp+9E40h+var_9290]
 * 00000001800B15D2: mov     dword ptr [rbp+9E40h+var_7480], esi
 * 00000001800B15D8: mov     dword ptr [rbp+9E40h+var_7480+4], esi
 * 00000001800B15DE: movups  xmm6, [rbp+9E40h+var_7480]
 * 00000001800B15E5: call    sub_1800A5ED4
 * 00000001800B15EA: mov     r8, rax
 * 00000001800B15ED: mov     r9d, r12d
 * 00000001800B15F0: mov     edx, 0C2h
 * 00000001800B15F5: lea     rcx, [rbp+9E40h+var_1F30]
 * 00000001800B15FC: call    sub_1800737C8
 * 00000001800B1601: nop
 * 00000001800B1602: mov     r8, rax
 * 00000001800B1605: mov     rdx, r13
 * 00000001800B1608: lea     rcx, [rbp+9E40h+var_1F50]
 * 00000001800B160F: call    sub_18001B678
 * 00000001800B1614: nop
 * 00000001800B1615: lea     r8, aVertex; "/Vertex"
 * 00000001800B161C: mov     rdx, rax
 * 00000001800B161F: lea     rcx, [rbp+9E40h+var_5110]
 * 00000001800B1626: call    sub_18001B5A8
 * 00000001800B162B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1630: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1635: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B163A: mov     rcx, rax
 * 00000001800B163D: call    sub_18007386C
 * 00000001800B1642: nop
 * 00000001800B1643: lea     rcx, [rbp+9E40h+var_1F50]
 * 00000001800B164A: call    sub_180011020
 * 00000001800B164F: nop
 * 00000001800B1650: lea     rcx, [rbp+9E40h+var_1F30]
 * 00000001800B1657: call    sub_180011020
 * 00000001800B165C: nop
 * 00000001800B165D: lea     rcx, dword_1801CA54C
 * 00000001800B1664: call    _Init_thread_footer
 * 00000001800B1669: mov     rax, [rdi+rbx*8]
 * 00000001800B166D: mov     ecx, [r15+rax]
 * 00000001800B1671: cmp     cs:dword_1801CA550, ecx
 * 00000001800B1677: jle     loc_1800B1750
 * 00000001800B167D: lea     rcx, dword_1801CA550
 * 00000001800B1684: call    sub_18000CA40
 * 00000001800B1689: cmp     cs:dword_1801CA550, r14d
 * 00000001800B1690: jnz     loc_1800B1750
 * 00000001800B1696: lea     rax, unk_180144780
 * 00000001800B169D: mov     qword ptr [rbp+9E40h+var_9280], rax
 * 00000001800B16A4: lea     rax, unk_1801457D0
 * 00000001800B16AB: mov     qword ptr [rbp+9E40h+var_9280+8], rax
 * 00000001800B16B2: movups  xmm7, [rbp+9E40h+var_9280]
 * 00000001800B16B9: mov     dword ptr [rbp+9E40h+var_7460], esi
 * 00000001800B16BF: mov     dword ptr [rbp+9E40h+var_7460+4], esi
 * 00000001800B16C5: movups  xmm6, [rbp+9E40h+var_7460]
 * 00000001800B16CC: call    sub_1800A5ED4
 * 00000001800B16D1: mov     r8, rax
 * 00000001800B16D4: mov     r9d, r12d
 * 00000001800B16D7: mov     edx, 0C8h
 * 00000001800B16DC: lea     rcx, [rbp+9E40h+var_1ED0]
 * 00000001800B16E3: call    sub_1800737C8
 * 00000001800B16E8: nop
 * 00000001800B16E9: mov     r8, rax
 * 00000001800B16EC: mov     rdx, r13
 * 00000001800B16EF: lea     rcx, [rbp+9E40h+var_1EF0]
 * 00000001800B16F6: call    sub_18001B678
 * 00000001800B16FB: nop
 * 00000001800B16FC: lea     r8, aVertex; "/Vertex"
 * 00000001800B1703: mov     rdx, rax
 * 00000001800B1706: lea     rcx, [rbp+9E40h+var_50F0]
 * 00000001800B170D: call    sub_18001B5A8
 * 00000001800B1712: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1717: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B171C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1721: mov     rcx, rax
 * 00000001800B1724: call    sub_18007386C
 * 00000001800B1729: nop
 * 00000001800B172A: lea     rcx, [rbp+9E40h+var_1EF0]
 * 00000001800B1731: call    sub_180011020
 * 00000001800B1736: nop
 * 00000001800B1737: lea     rcx, [rbp+9E40h+var_1ED0]
 * 00000001800B173E: call    sub_180011020
 * 00000001800B1743: nop
 * 00000001800B1744: lea     rcx, dword_1801CA550
 * 00000001800B174B: call    _Init_thread_footer
 * 00000001800B1750: mov     rax, [rdi+rbx*8]
 * 00000001800B1754: mov     ecx, [r15+rax]
 * 00000001800B1758: cmp     cs:dword_1801CA554, ecx
 * 00000001800B175E: jle     loc_1800B1837
 * 00000001800B1764: lea     rcx, dword_1801CA554
 * 00000001800B176B: call    sub_18000CA40
 * 00000001800B1770: cmp     cs:dword_1801CA554, r14d
 * 00000001800B1777: jnz     loc_1800B1837
 * 00000001800B177D: lea     rax, unk_180144780
 * 00000001800B1784: mov     qword ptr [rbp+9E40h+var_9270], rax
 * 00000001800B178B: lea     rax, unk_1801457D0
 * 00000001800B1792: mov     qword ptr [rbp+9E40h+var_9270+8], rax
 * 00000001800B1799: movups  xmm7, [rbp+9E40h+var_9270]
 * 00000001800B17A0: mov     dword ptr [rbp+9E40h+var_7440], esi
 * 00000001800B17A6: mov     dword ptr [rbp+9E40h+var_7440+4], esi
 * 00000001800B17AC: movups  xmm6, [rbp+9E40h+var_7440]
 * 00000001800B17B3: call    sub_1800A5ED4
 * 00000001800B17B8: mov     r8, rax
 * 00000001800B17BB: mov     r9d, r12d
 * 00000001800B17BE: mov     edx, 0CAh
 * 00000001800B17C3: lea     rcx, [rbp+9E40h+var_1E70]
 * 00000001800B17CA: call    sub_1800737C8
 * 00000001800B17CF: nop
 * 00000001800B17D0: mov     r8, rax
 * 00000001800B17D3: mov     rdx, r13
 * 00000001800B17D6: lea     rcx, [rbp+9E40h+var_1E90]
 * 00000001800B17DD: call    sub_18001B678
 * 00000001800B17E2: nop
 * 00000001800B17E3: lea     r8, aVertex; "/Vertex"
 * 00000001800B17EA: mov     rdx, rax
 * 00000001800B17ED: lea     rcx, [rbp+9E40h+var_50D0]
 * 00000001800B17F4: call    sub_18001B5A8
 * 00000001800B17F9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B17FE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1803: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1808: mov     rcx, rax
 * 00000001800B180B: call    sub_18007386C
 * 00000001800B1810: nop
 * 00000001800B1811: lea     rcx, [rbp+9E40h+var_1E90]
 * 00000001800B1818: call    sub_180011020
 * 00000001800B181D: nop
 * 00000001800B181E: lea     rcx, [rbp+9E40h+var_1E70]
 * 00000001800B1825: call    sub_180011020
 * 00000001800B182A: nop
 * 00000001800B182B: lea     rcx, dword_1801CA554
 * 00000001800B1832: call    _Init_thread_footer
 * 00000001800B1837: mov     rax, [rdi+rbx*8]
 * 00000001800B183B: mov     ecx, [r15+rax]
 * 00000001800B183F: cmp     cs:dword_1801CA558, ecx
 * 00000001800B1845: jle     loc_1800B191E
 * 00000001800B184B: lea     rcx, dword_1801CA558
 * 00000001800B1852: call    sub_18000CA40
 * 00000001800B1857: cmp     cs:dword_1801CA558, r14d
 * 00000001800B185E: jnz     loc_1800B191E
 * 00000001800B1864: lea     rax, unk_180144780
 * 00000001800B186B: mov     qword ptr [rbp+9E40h+var_9260], rax
 * 00000001800B1872: lea     rax, unk_1801457D0
 * 00000001800B1879: mov     qword ptr [rbp+9E40h+var_9260+8], rax
 * 00000001800B1880: movups  xmm7, [rbp+9E40h+var_9260]
 * 00000001800B1887: mov     dword ptr [rbp+9E40h+var_7420], esi
 * 00000001800B188D: mov     dword ptr [rbp+9E40h+var_7420+4], esi
 * 00000001800B1893: movups  xmm6, [rbp+9E40h+var_7420]
 * 00000001800B189A: call    sub_1800A5ED4
 * 00000001800B189F: mov     r8, rax
 * 00000001800B18A2: mov     r9d, r12d
 * 00000001800B18A5: mov     edx, 0D0h
 * 00000001800B18AA: lea     rcx, [rbp+9E40h+var_1E10]
 * 00000001800B18B1: call    sub_1800737C8
 * 00000001800B18B6: nop
 * 00000001800B18B7: mov     r8, rax
 * 00000001800B18BA: mov     rdx, r13
 * 00000001800B18BD: lea     rcx, [rbp+9E40h+var_1E30]
 * 00000001800B18C4: call    sub_18001B678
 * 00000001800B18C9: nop
 * 00000001800B18CA: lea     r8, aVertex; "/Vertex"
 * 00000001800B18D1: mov     rdx, rax
 * 00000001800B18D4: lea     rcx, [rbp+9E40h+var_50B0]
 * 00000001800B18DB: call    sub_18001B5A8
 * 00000001800B18E0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B18E5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B18EA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B18EF: mov     rcx, rax
 * 00000001800B18F2: call    sub_18007386C
 * 00000001800B18F7: nop
 * 00000001800B18F8: lea     rcx, [rbp+9E40h+var_1E30]
 * 00000001800B18FF: call    sub_180011020
 * 00000001800B1904: nop
 * 00000001800B1905: lea     rcx, [rbp+9E40h+var_1E10]
 * 00000001800B190C: call    sub_180011020
 * 00000001800B1911: nop
 * 00000001800B1912: lea     rcx, dword_1801CA558
 * 00000001800B1919: call    _Init_thread_footer
 * 00000001800B191E: mov     rax, [rdi+rbx*8]
 * 00000001800B1922: mov     ecx, [r15+rax]
 * 00000001800B1926: cmp     cs:dword_1801CA55C, ecx
 * 00000001800B192C: jle     loc_1800B1A05
 * 00000001800B1932: lea     rcx, dword_1801CA55C
 * 00000001800B1939: call    sub_18000CA40
 * 00000001800B193E: cmp     cs:dword_1801CA55C, r14d
 * 00000001800B1945: jnz     loc_1800B1A05
 * 00000001800B194B: lea     rax, unk_180144780
 * 00000001800B1952: mov     qword ptr [rbp+9E40h+var_9250], rax
 * 00000001800B1959: lea     rax, unk_1801457D0
 * 00000001800B1960: mov     qword ptr [rbp+9E40h+var_9250+8], rax
 * 00000001800B1967: movups  xmm7, [rbp+9E40h+var_9250]
 * 00000001800B196E: mov     dword ptr [rbp+9E40h+var_7400], esi
 * 00000001800B1974: mov     dword ptr [rbp+9E40h+var_7400+4], esi
 * 00000001800B197A: movups  xmm6, [rbp+9E40h+var_7400]
 * 00000001800B1981: call    sub_1800A5ED4
 * 00000001800B1986: mov     r8, rax
 * 00000001800B1989: mov     r9d, r12d
 * 00000001800B198C: mov     edx, 0D2h
 * 00000001800B1991: lea     rcx, [rbp+9E40h+var_1DB0]
 * 00000001800B1998: call    sub_1800737C8
 * 00000001800B199D: nop
 * 00000001800B199E: mov     r8, rax
 * 00000001800B19A1: mov     rdx, r13
 * 00000001800B19A4: lea     rcx, [rbp+9E40h+var_1DD0]
 * 00000001800B19AB: call    sub_18001B678
 * 00000001800B19B0: nop
 * 00000001800B19B1: lea     r8, aVertex; "/Vertex"
 * 00000001800B19B8: mov     rdx, rax
 * 00000001800B19BB: lea     rcx, [rbp+9E40h+var_5090]
 * 00000001800B19C2: call    sub_18001B5A8
 * 00000001800B19C7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B19CC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B19D1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B19D6: mov     rcx, rax
 * 00000001800B19D9: call    sub_18007386C
 * 00000001800B19DE: nop
 * 00000001800B19DF: lea     rcx, [rbp+9E40h+var_1DD0]
 * 00000001800B19E6: call    sub_180011020
 * 00000001800B19EB: nop
 * 00000001800B19EC: lea     rcx, [rbp+9E40h+var_1DB0]
 * 00000001800B19F3: call    sub_180011020
 * 00000001800B19F8: nop
 * 00000001800B19F9: lea     rcx, dword_1801CA55C
 * 00000001800B1A00: call    _Init_thread_footer
 * 00000001800B1A05: mov     rax, [rdi+rbx*8]
 * 00000001800B1A09: mov     ecx, [r15+rax]
 * 00000001800B1A0D: cmp     cs:dword_1801CA560, ecx
 * 00000001800B1A13: jle     loc_1800B1AEC
 * 00000001800B1A19: lea     rcx, dword_1801CA560
 * 00000001800B1A20: call    sub_18000CA40
 * 00000001800B1A25: cmp     cs:dword_1801CA560, r14d
 * 00000001800B1A2C: jnz     loc_1800B1AEC
 * 00000001800B1A32: lea     rax, unk_180144780
 * 00000001800B1A39: mov     qword ptr [rbp+9E40h+var_9240], rax
 * 00000001800B1A40: lea     rax, unk_1801457D0
 * 00000001800B1A47: mov     qword ptr [rbp+9E40h+var_9240+8], rax
 * 00000001800B1A4E: movups  xmm7, [rbp+9E40h+var_9240]
 * 00000001800B1A55: mov     dword ptr [rbp+9E40h+var_73E0], esi
 * 00000001800B1A5B: mov     dword ptr [rbp+9E40h+var_73E0+4], esi
 * 00000001800B1A61: movups  xmm6, [rbp+9E40h+var_73E0]
 * 00000001800B1A68: call    sub_1800A5ED4
 * 00000001800B1A6D: mov     r8, rax
 * 00000001800B1A70: mov     r9d, r12d
 * 00000001800B1A73: mov     edx, 0D8h
 * 00000001800B1A78: lea     rcx, [rbp+9E40h+var_1D50]
 * 00000001800B1A7F: call    sub_1800737C8
 * 00000001800B1A84: nop
 * 00000001800B1A85: mov     r8, rax
 * 00000001800B1A88: mov     rdx, r13
 * 00000001800B1A8B: lea     rcx, [rbp+9E40h+var_1D70]
 * 00000001800B1A92: call    sub_18001B678
 * 00000001800B1A97: nop
 * 00000001800B1A98: lea     r8, aVertex; "/Vertex"
 * 00000001800B1A9F: mov     rdx, rax
 * 00000001800B1AA2: lea     rcx, [rbp+9E40h+var_5070]
 * 00000001800B1AA9: call    sub_18001B5A8
 * 00000001800B1AAE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1AB3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1AB8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1ABD: mov     rcx, rax
 * 00000001800B1AC0: call    sub_18007386C
 * 00000001800B1AC5: nop
 * 00000001800B1AC6: lea     rcx, [rbp+9E40h+var_1D70]
 * 00000001800B1ACD: call    sub_180011020
 * 00000001800B1AD2: nop
 * 00000001800B1AD3: lea     rcx, [rbp+9E40h+var_1D50]
 * 00000001800B1ADA: call    sub_180011020
 * 00000001800B1ADF: nop
 * 00000001800B1AE0: lea     rcx, dword_1801CA560
 * 00000001800B1AE7: call    _Init_thread_footer
 * 00000001800B1AEC: mov     rax, [rdi+rbx*8]
 * 00000001800B1AF0: mov     ecx, [r15+rax]
 * 00000001800B1AF4: cmp     cs:dword_1801CA564, ecx
 * 00000001800B1AFA: jle     loc_1800B1BD3
 * 00000001800B1B00: lea     rcx, dword_1801CA564
 * 00000001800B1B07: call    sub_18000CA40
 * 00000001800B1B0C: cmp     cs:dword_1801CA564, r14d
 * 00000001800B1B13: jnz     loc_1800B1BD3
 * 00000001800B1B19: lea     rax, unk_180144780
 * 00000001800B1B20: mov     qword ptr [rbp+9E40h+var_9230], rax
 * 00000001800B1B27: lea     rax, unk_1801457D0
 * 00000001800B1B2E: mov     qword ptr [rbp+9E40h+var_9230+8], rax
 * 00000001800B1B35: movups  xmm7, [rbp+9E40h+var_9230]
 * 00000001800B1B3C: mov     dword ptr [rbp+9E40h+var_73C0], esi
 * 00000001800B1B42: mov     dword ptr [rbp+9E40h+var_73C0+4], esi
 * 00000001800B1B48: movups  xmm6, [rbp+9E40h+var_73C0]
 * 00000001800B1B4F: call    sub_1800A5ED4
 * 00000001800B1B54: mov     r8, rax
 * 00000001800B1B57: mov     r9d, r12d
 * 00000001800B1B5A: mov     edx, 0DAh
 * 00000001800B1B5F: lea     rcx, [rbp+9E40h+var_1CF0]
 * 00000001800B1B66: call    sub_1800737C8
 * 00000001800B1B6B: nop
 * 00000001800B1B6C: mov     r8, rax
 * 00000001800B1B6F: mov     rdx, r13
 * 00000001800B1B72: lea     rcx, [rbp+9E40h+var_1D10]
 * 00000001800B1B79: call    sub_18001B678
 * 00000001800B1B7E: nop
 * 00000001800B1B7F: lea     r8, aVertex; "/Vertex"
 * 00000001800B1B86: mov     rdx, rax
 * 00000001800B1B89: lea     rcx, [rbp+9E40h+var_5050]
 * 00000001800B1B90: call    sub_18001B5A8
 * 00000001800B1B95: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1B9A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1B9F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1BA4: mov     rcx, rax
 * 00000001800B1BA7: call    sub_18007386C
 * 00000001800B1BAC: nop
 * 00000001800B1BAD: lea     rcx, [rbp+9E40h+var_1D10]
 * 00000001800B1BB4: call    sub_180011020
 * 00000001800B1BB9: nop
 * 00000001800B1BBA: lea     rcx, [rbp+9E40h+var_1CF0]
 * 00000001800B1BC1: call    sub_180011020
 * 00000001800B1BC6: nop
 * 00000001800B1BC7: lea     rcx, dword_1801CA564
 * 00000001800B1BCE: call    _Init_thread_footer
 * 00000001800B1BD3: mov     rax, [rdi+rbx*8]
 * 00000001800B1BD7: mov     ecx, [r15+rax]
 * 00000001800B1BDB: cmp     cs:dword_1801CA568, ecx
 * 00000001800B1BE1: jle     loc_1800B1CBA
 * 00000001800B1BE7: lea     rcx, dword_1801CA568
 * 00000001800B1BEE: call    sub_18000CA40
 * 00000001800B1BF3: cmp     cs:dword_1801CA568, r14d
 * 00000001800B1BFA: jnz     loc_1800B1CBA
 * 00000001800B1C00: lea     rax, unk_1801421F0
 * 00000001800B1C07: mov     qword ptr [rbp+9E40h+var_9220], rax
 * 00000001800B1C0E: lea     rax, unk_180143C40
 * 00000001800B1C15: mov     qword ptr [rbp+9E40h+var_9220+8], rax
 * 00000001800B1C1C: movups  xmm7, [rbp+9E40h+var_9220]
 * 00000001800B1C23: mov     dword ptr [rbp+9E40h+var_73A0], esi
 * 00000001800B1C29: mov     dword ptr [rbp+9E40h+var_73A0+4], esi
 * 00000001800B1C2F: movups  xmm6, [rbp+9E40h+var_73A0]
 * 00000001800B1C36: call    sub_1800A5ED4
 * 00000001800B1C3B: mov     r8, rax
 * 00000001800B1C3E: mov     r9d, r12d
 * 00000001800B1C41: mov     edx, 0E0h
 * 00000001800B1C46: lea     rcx, [rbp+9E40h+var_1C90]
 * 00000001800B1C4D: call    sub_1800737C8
 * 00000001800B1C52: nop
 * 00000001800B1C53: mov     r8, rax
 * 00000001800B1C56: mov     rdx, r13
 * 00000001800B1C59: lea     rcx, [rbp+9E40h+var_1CB0]
 * 00000001800B1C60: call    sub_18001B678
 * 00000001800B1C65: nop
 * 00000001800B1C66: lea     r8, aVertex; "/Vertex"
 * 00000001800B1C6D: mov     rdx, rax
 * 00000001800B1C70: lea     rcx, [rbp+9E40h+var_5030]
 * 00000001800B1C77: call    sub_18001B5A8
 * 00000001800B1C7C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1C81: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1C86: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1C8B: mov     rcx, rax
 * 00000001800B1C8E: call    sub_18007386C
 * 00000001800B1C93: nop
 * 00000001800B1C94: lea     rcx, [rbp+9E40h+var_1CB0]
 * 00000001800B1C9B: call    sub_180011020
 * 00000001800B1CA0: nop
 * 00000001800B1CA1: lea     rcx, [rbp+9E40h+var_1C90]
 * 00000001800B1CA8: call    sub_180011020
 * 00000001800B1CAD: nop
 * 00000001800B1CAE: lea     rcx, dword_1801CA568
 * 00000001800B1CB5: call    _Init_thread_footer
 * 00000001800B1CBA: mov     rax, [rdi+rbx*8]
 * 00000001800B1CBE: mov     ecx, [r15+rax]
 * 00000001800B1CC2: cmp     cs:dword_1801CA56C, ecx
 * 00000001800B1CC8: jle     loc_1800B1DA1
 * 00000001800B1CCE: lea     rcx, dword_1801CA56C
 * 00000001800B1CD5: call    sub_18000CA40
 * 00000001800B1CDA: cmp     cs:dword_1801CA56C, r14d
 * 00000001800B1CE1: jnz     loc_1800B1DA1
 * 00000001800B1CE7: lea     rax, unk_1801421F0
 * 00000001800B1CEE: mov     qword ptr [rbp+9E40h+var_9210], rax
 * 00000001800B1CF5: lea     rax, unk_180143C40
 * 00000001800B1CFC: mov     qword ptr [rbp+9E40h+var_9210+8], rax
 * 00000001800B1D03: movups  xmm7, [rbp+9E40h+var_9210]
 * 00000001800B1D0A: mov     dword ptr [rbp+9E40h+var_7380], esi
 * 00000001800B1D10: mov     dword ptr [rbp+9E40h+var_7380+4], esi
 * 00000001800B1D16: movups  xmm6, [rbp+9E40h+var_7380]
 * 00000001800B1D1D: call    sub_1800A5ED4
 * 00000001800B1D22: mov     r8, rax
 * 00000001800B1D25: mov     r9d, r12d
 * 00000001800B1D28: mov     edx, 0E2h
 * 00000001800B1D2D: lea     rcx, [rbp+9E40h+var_1C30]
 * 00000001800B1D34: call    sub_1800737C8
 * 00000001800B1D39: nop
 * 00000001800B1D3A: mov     r8, rax
 * 00000001800B1D3D: mov     rdx, r13
 * 00000001800B1D40: lea     rcx, [rbp+9E40h+var_1C50]
 * 00000001800B1D47: call    sub_18001B678
 * 00000001800B1D4C: nop
 * 00000001800B1D4D: lea     r8, aVertex; "/Vertex"
 * 00000001800B1D54: mov     rdx, rax
 * 00000001800B1D57: lea     rcx, [rbp+9E40h+var_5010]
 * 00000001800B1D5E: call    sub_18001B5A8
 * 00000001800B1D63: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1D68: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1D6D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1D72: mov     rcx, rax
 * 00000001800B1D75: call    sub_18007386C
 * 00000001800B1D7A: nop
 * 00000001800B1D7B: lea     rcx, [rbp+9E40h+var_1C50]
 * 00000001800B1D82: call    sub_180011020
 * 00000001800B1D87: nop
 * 00000001800B1D88: lea     rcx, [rbp+9E40h+var_1C30]
 * 00000001800B1D8F: call    sub_180011020
 * 00000001800B1D94: nop
 * 00000001800B1D95: lea     rcx, dword_1801CA56C
 * 00000001800B1D9C: call    _Init_thread_footer
 * 00000001800B1DA1: mov     rax, [rdi+rbx*8]
 * 00000001800B1DA5: mov     ecx, [r15+rax]
 * 00000001800B1DA9: cmp     cs:dword_1801CA570, ecx
 * 00000001800B1DAF: jle     loc_1800B1E88
 * 00000001800B1DB5: lea     rcx, dword_1801CA570
 * 00000001800B1DBC: call    sub_18000CA40
 * 00000001800B1DC1: cmp     cs:dword_1801CA570, r14d
 * 00000001800B1DC8: jnz     loc_1800B1E88
 * 00000001800B1DCE: lea     rax, unk_1801421F0
 * 00000001800B1DD5: mov     qword ptr [rbp+9E40h+var_9200], rax
 * 00000001800B1DDC: lea     rax, unk_180143C40
 * 00000001800B1DE3: mov     qword ptr [rbp+9E40h+var_9200+8], rax
 * 00000001800B1DEA: movups  xmm7, [rbp+9E40h+var_9200]
 * 00000001800B1DF1: mov     dword ptr [rbp+9E40h+var_7360], esi
 * 00000001800B1DF7: mov     dword ptr [rbp+9E40h+var_7360+4], esi
 * 00000001800B1DFD: movups  xmm6, [rbp+9E40h+var_7360]
 * 00000001800B1E04: call    sub_1800A5ED4
 * 00000001800B1E09: mov     r8, rax
 * 00000001800B1E0C: mov     r9d, r12d
 * 00000001800B1E0F: mov     edx, 0E8h
 * 00000001800B1E14: lea     rcx, [rbp+9E40h+var_1BD0]
 * 00000001800B1E1B: call    sub_1800737C8
 * 00000001800B1E20: nop
 * 00000001800B1E21: mov     r8, rax
 * 00000001800B1E24: mov     rdx, r13
 * 00000001800B1E27: lea     rcx, [rbp+9E40h+var_1BF0]
 * 00000001800B1E2E: call    sub_18001B678
 * 00000001800B1E33: nop
 * 00000001800B1E34: lea     r8, aVertex; "/Vertex"
 * 00000001800B1E3B: mov     rdx, rax
 * 00000001800B1E3E: lea     rcx, [rbp+9E40h+var_4FF0]
 * 00000001800B1E45: call    sub_18001B5A8
 * 00000001800B1E4A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1E4F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1E54: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1E59: mov     rcx, rax
 * 00000001800B1E5C: call    sub_18007386C
 * 00000001800B1E61: nop
 * 00000001800B1E62: lea     rcx, [rbp+9E40h+var_1BF0]
 * 00000001800B1E69: call    sub_180011020
 * 00000001800B1E6E: nop
 * 00000001800B1E6F: lea     rcx, [rbp+9E40h+var_1BD0]
 * 00000001800B1E76: call    sub_180011020
 * 00000001800B1E7B: nop
 * 00000001800B1E7C: lea     rcx, dword_1801CA570
 * 00000001800B1E83: call    _Init_thread_footer
 * 00000001800B1E88: mov     rax, [rdi+rbx*8]
 * 00000001800B1E8C: mov     ecx, [r15+rax]
 * 00000001800B1E90: cmp     cs:dword_1801CA574, ecx
 * 00000001800B1E96: jle     loc_1800B1F6F
 * 00000001800B1E9C: lea     rcx, dword_1801CA574
 * 00000001800B1EA3: call    sub_18000CA40
 * 00000001800B1EA8: cmp     cs:dword_1801CA574, r14d
 * 00000001800B1EAF: jnz     loc_1800B1F6F
 * 00000001800B1EB5: lea     rax, unk_1801421F0
 * 00000001800B1EBC: mov     qword ptr [rbp+9E40h+var_91F0], rax
 * 00000001800B1EC3: lea     rax, unk_180143C40
 * 00000001800B1ECA: mov     qword ptr [rbp+9E40h+var_91F0+8], rax
 * 00000001800B1ED1: movups  xmm7, [rbp+9E40h+var_91F0]
 * 00000001800B1ED8: mov     dword ptr [rbp+9E40h+var_7340], esi
 * 00000001800B1EDE: mov     dword ptr [rbp+9E40h+var_7340+4], esi
 * 00000001800B1EE4: movups  xmm6, [rbp+9E40h+var_7340]
 * 00000001800B1EEB: call    sub_1800A5ED4
 * 00000001800B1EF0: mov     r8, rax
 * 00000001800B1EF3: mov     r9d, r12d
 * 00000001800B1EF6: mov     edx, 0EAh
 * 00000001800B1EFB: lea     rcx, [rbp+9E40h+var_1B70]
 * 00000001800B1F02: call    sub_1800737C8
 * 00000001800B1F07: nop
 * 00000001800B1F08: mov     r8, rax
 * 00000001800B1F0B: mov     rdx, r13
 * 00000001800B1F0E: lea     rcx, [rbp+9E40h+var_1B90]
 * 00000001800B1F15: call    sub_18001B678
 * 00000001800B1F1A: nop
 * 00000001800B1F1B: lea     r8, aVertex; "/Vertex"
 * 00000001800B1F22: mov     rdx, rax
 * 00000001800B1F25: lea     rcx, [rbp+9E40h+var_4FD0]
 * 00000001800B1F2C: call    sub_18001B5A8
 * 00000001800B1F31: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1F36: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1F3B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1F40: mov     rcx, rax
 * 00000001800B1F43: call    sub_18007386C
 * 00000001800B1F48: nop
 * 00000001800B1F49: lea     rcx, [rbp+9E40h+var_1B90]
 * 00000001800B1F50: call    sub_180011020
 * 00000001800B1F55: nop
 * 00000001800B1F56: lea     rcx, [rbp+9E40h+var_1B70]
 * 00000001800B1F5D: call    sub_180011020
 * 00000001800B1F62: nop
 * 00000001800B1F63: lea     rcx, dword_1801CA574
 * 00000001800B1F6A: call    _Init_thread_footer
 * 00000001800B1F6F: mov     rax, [rdi+rbx*8]
 * 00000001800B1F73: mov     ecx, [r15+rax]
 * 00000001800B1F77: cmp     cs:dword_1801CA578, ecx
 * 00000001800B1F7D: jle     loc_1800B2056
 * 00000001800B1F83: lea     rcx, dword_1801CA578
 * 00000001800B1F8A: call    sub_18000CA40
 * 00000001800B1F8F: cmp     cs:dword_1801CA578, r14d
 * 00000001800B1F96: jnz     loc_1800B2056
 * 00000001800B1F9C: lea     rax, unk_1801421F0
 * 00000001800B1FA3: mov     qword ptr [rbp+9E40h+var_91E0], rax
 * 00000001800B1FAA: lea     rax, unk_180143C40
 * 00000001800B1FB1: mov     qword ptr [rbp+9E40h+var_91E0+8], rax
 * 00000001800B1FB8: movups  xmm7, [rbp+9E40h+var_91E0]
 * 00000001800B1FBF: mov     dword ptr [rbp+9E40h+var_7320], esi
 * 00000001800B1FC5: mov     dword ptr [rbp+9E40h+var_7320+4], esi
 * 00000001800B1FCB: movups  xmm6, [rbp+9E40h+var_7320]
 * 00000001800B1FD2: call    sub_1800A5ED4
 * 00000001800B1FD7: mov     r8, rax
 * 00000001800B1FDA: mov     r9d, r12d
 * 00000001800B1FDD: mov     edx, 0F0h
 * 00000001800B1FE2: lea     rcx, [rbp+9E40h+var_1B10]
 * 00000001800B1FE9: call    sub_1800737C8
 * 00000001800B1FEE: nop
 * 00000001800B1FEF: mov     r8, rax
 * 00000001800B1FF2: mov     rdx, r13
 * 00000001800B1FF5: lea     rcx, [rbp+9E40h+var_1B30]
 * 00000001800B1FFC: call    sub_18001B678
 * 00000001800B2001: nop
 * 00000001800B2002: lea     r8, aVertex; "/Vertex"
 * 00000001800B2009: mov     rdx, rax
 * 00000001800B200C: lea     rcx, [rbp+9E40h+var_4FB0]
 * 00000001800B2013: call    sub_18001B5A8
 * 00000001800B2018: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B201D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2022: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2027: mov     rcx, rax
 * 00000001800B202A: call    sub_18007386C
 * 00000001800B202F: nop
 * 00000001800B2030: lea     rcx, [rbp+9E40h+var_1B30]
 * 00000001800B2037: call    sub_180011020
 * 00000001800B203C: nop
 * 00000001800B203D: lea     rcx, [rbp+9E40h+var_1B10]
 * 00000001800B2044: call    sub_180011020
 * 00000001800B2049: nop
 * 00000001800B204A: lea     rcx, dword_1801CA578
 * 00000001800B2051: call    _Init_thread_footer
 * 00000001800B2056: mov     rax, [rdi+rbx*8]
 * 00000001800B205A: mov     ecx, [r15+rax]
 * 00000001800B205E: cmp     cs:dword_1801CA57C, ecx
 * 00000001800B2064: jle     loc_1800B213D
 * 00000001800B206A: lea     rcx, dword_1801CA57C
 * 00000001800B2071: call    sub_18000CA40
 * 00000001800B2076: cmp     cs:dword_1801CA57C, r14d
 * 00000001800B207D: jnz     loc_1800B213D
 * 00000001800B2083: lea     rax, unk_1801421F0
 * 00000001800B208A: mov     qword ptr [rbp+9E40h+var_91D0], rax
 * 00000001800B2091: lea     rax, unk_180143C40
 * 00000001800B2098: mov     qword ptr [rbp+9E40h+var_91D0+8], rax
 * 00000001800B209F: movups  xmm7, [rbp+9E40h+var_91D0]
 * 00000001800B20A6: mov     dword ptr [rbp+9E40h+var_7300], esi
 * 00000001800B20AC: mov     dword ptr [rbp+9E40h+var_7300+4], esi
 * 00000001800B20B2: movups  xmm6, [rbp+9E40h+var_7300]
 * 00000001800B20B9: call    sub_1800A5ED4
 * 00000001800B20BE: mov     r8, rax
 * 00000001800B20C1: mov     r9d, r12d
 * 00000001800B20C4: mov     edx, 0F2h
 * 00000001800B20C9: lea     rcx, [rbp+9E40h+var_1AB0]
 * 00000001800B20D0: call    sub_1800737C8
 * 00000001800B20D5: nop
 * 00000001800B20D6: mov     r8, rax
 * 00000001800B20D9: mov     rdx, r13
 * 00000001800B20DC: lea     rcx, [rbp+9E40h+var_1AD0]
 * 00000001800B20E3: call    sub_18001B678
 * 00000001800B20E8: nop
 * 00000001800B20E9: lea     r8, aVertex; "/Vertex"
 * 00000001800B20F0: mov     rdx, rax
 * 00000001800B20F3: lea     rcx, [rbp+9E40h+var_4F90]
 * 00000001800B20FA: call    sub_18001B5A8
 * 00000001800B20FF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2104: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2109: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B210E: mov     rcx, rax
 * 00000001800B2111: call    sub_18007386C
 * 00000001800B2116: nop
 * 00000001800B2117: lea     rcx, [rbp+9E40h+var_1AD0]
 * 00000001800B211E: call    sub_180011020
 * 00000001800B2123: nop
 * 00000001800B2124: lea     rcx, [rbp+9E40h+var_1AB0]
 * 00000001800B212B: call    sub_180011020
 * 00000001800B2130: nop
 * 00000001800B2131: lea     rcx, dword_1801CA57C
 * 00000001800B2138: call    _Init_thread_footer
 * 00000001800B213D: mov     rax, [rdi+rbx*8]
 * 00000001800B2141: mov     ecx, [r15+rax]
 * 00000001800B2145: cmp     cs:dword_1801CA580, ecx
 * 00000001800B214B: jle     loc_1800B2224
 * 00000001800B2151: lea     rcx, dword_1801CA580
 * 00000001800B2158: call    sub_18000CA40
 * 00000001800B215D: cmp     cs:dword_1801CA580, r14d
 * 00000001800B2164: jnz     loc_1800B2224
 * 00000001800B216A: lea     rax, unk_1801421F0
 * 00000001800B2171: mov     qword ptr [rbp+9E40h+var_8F90], rax
 * 00000001800B2178: lea     rax, unk_180143C40
 * 00000001800B217F: mov     qword ptr [rbp+9E40h+var_8F90+8], rax
 * 00000001800B2186: movups  xmm7, [rbp+9E40h+var_8F90]
 * 00000001800B218D: mov     dword ptr [rbp+9E40h+var_72E0], esi
 * 00000001800B2193: mov     dword ptr [rbp+9E40h+var_72E0+4], esi
 * 00000001800B2199: movups  xmm6, [rbp+9E40h+var_72E0]
 * 00000001800B21A0: call    sub_1800A5ED4
 * 00000001800B21A5: mov     r8, rax
 * 00000001800B21A8: mov     r9d, r12d
 * 00000001800B21AB: mov     edx, 0F8h
 * 00000001800B21B0: lea     rcx, [rbp+9E40h+var_1A50]
 * 00000001800B21B7: call    sub_1800737C8
 * 00000001800B21BC: nop
 * 00000001800B21BD: mov     r8, rax
 * 00000001800B21C0: mov     rdx, r13
 * 00000001800B21C3: lea     rcx, [rbp+9E40h+var_1A70]
 * 00000001800B21CA: call    sub_18001B678
 * 00000001800B21CF: nop
 * 00000001800B21D0: lea     r8, aVertex; "/Vertex"
 * 00000001800B21D7: mov     rdx, rax
 * 00000001800B21DA: lea     rcx, [rbp+9E40h+var_4F70]
 * 00000001800B21E1: call    sub_18001B5A8
 * 00000001800B21E6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B21EB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B21F0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B21F5: mov     rcx, rax
 * 00000001800B21F8: call    sub_18007386C
 * 00000001800B21FD: nop
 * 00000001800B21FE: lea     rcx, [rbp+9E40h+var_1A70]
 * 00000001800B2205: call    sub_180011020
 * 00000001800B220A: nop
 * 00000001800B220B: lea     rcx, [rbp+9E40h+var_1A50]
 * 00000001800B2212: call    sub_180011020
 * 00000001800B2217: nop
 * 00000001800B2218: lea     rcx, dword_1801CA580
 * 00000001800B221F: call    _Init_thread_footer
 * 00000001800B2224: mov     rax, [rdi+rbx*8]
 * 00000001800B2228: mov     ecx, [r15+rax]
 * 00000001800B222C: cmp     cs:dword_1801CA584, ecx
 * 00000001800B2232: jle     loc_1800B230B
 * 00000001800B2238: lea     rcx, dword_1801CA584
 * 00000001800B223F: call    sub_18000CA40
 * 00000001800B2244: cmp     cs:dword_1801CA584, r14d
 * 00000001800B224B: jnz     loc_1800B230B
 * 00000001800B2251: lea     rax, unk_1801421F0
 * 00000001800B2258: mov     qword ptr [rbp+9E40h+var_91B0], rax
 * 00000001800B225F: lea     rax, unk_180143C40
 * 00000001800B2266: mov     qword ptr [rbp+9E40h+var_91B0+8], rax
 * 00000001800B226D: movups  xmm7, [rbp+9E40h+var_91B0]
 * 00000001800B2274: mov     dword ptr [rbp+9E40h+var_72C0], esi
 * 00000001800B227A: mov     dword ptr [rbp+9E40h+var_72C0+4], esi
 * 00000001800B2280: movups  xmm6, [rbp+9E40h+var_72C0]
 * 00000001800B2287: call    sub_1800A5ED4
 * 00000001800B228C: mov     r8, rax
 * 00000001800B228F: mov     r9d, r12d
 * 00000001800B2292: mov     edx, 0FAh
 * 00000001800B2297: lea     rcx, [rbp+9E40h+var_19F0]
 * 00000001800B229E: call    sub_1800737C8
 * 00000001800B22A3: nop
 * 00000001800B22A4: mov     r8, rax
 * 00000001800B22A7: mov     rdx, r13
 * 00000001800B22AA: lea     rcx, [rbp+9E40h+var_1A10]
 * 00000001800B22B1: call    sub_18001B678
 * 00000001800B22B6: nop
 * 00000001800B22B7: lea     r8, aVertex; "/Vertex"
 * 00000001800B22BE: mov     rdx, rax
 * 00000001800B22C1: lea     rcx, [rbp+9E40h+var_4F50]
 * 00000001800B22C8: call    sub_18001B5A8
 * 00000001800B22CD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B22D2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B22D7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B22DC: mov     rcx, rax
 * 00000001800B22DF: call    sub_18007386C
 * 00000001800B22E4: nop
 * 00000001800B22E5: lea     rcx, [rbp+9E40h+var_1A10]
 * 00000001800B22EC: call    sub_180011020
 * 00000001800B22F1: nop
 * 00000001800B22F2: lea     rcx, [rbp+9E40h+var_19F0]
 * 00000001800B22F9: call    sub_180011020
 * 00000001800B22FE: nop
 * 00000001800B22FF: lea     rcx, dword_1801CA584
 * 00000001800B2306: call    _Init_thread_footer
 * 00000001800B230B: mov     rax, [rdi+rbx*8]
 * 00000001800B230F: mov     ecx, [r15+rax]
 * 00000001800B2313: cmp     cs:dword_1801CA588, ecx
 * 00000001800B2319: jle     loc_1800B23F2
 * 00000001800B231F: lea     rcx, dword_1801CA588
 * 00000001800B2326: call    sub_18000CA40
 * 00000001800B232B: cmp     cs:dword_1801CA588, r14d
 * 00000001800B2332: jnz     loc_1800B23F2
 * 00000001800B2338: lea     rax, unk_180145EE0
 * 00000001800B233F: mov     qword ptr [rbp+9E40h+var_91A0], rax
 * 00000001800B2346: lea     rax, unk_180146EF8
 * 00000001800B234D: mov     qword ptr [rbp+9E40h+var_91A0+8], rax
 * 00000001800B2354: movups  xmm7, [rbp+9E40h+var_91A0]
 * 00000001800B235B: mov     dword ptr [rbp+9E40h+var_72A0], esi
 * 00000001800B2361: mov     dword ptr [rbp+9E40h+var_72A0+4], esi
 * 00000001800B2367: movups  xmm6, [rbp+9E40h+var_72A0]
 * 00000001800B236E: call    sub_1800A5ED4
 * 00000001800B2373: mov     r8, rax
 * 00000001800B2376: mov     r9d, r12d
 * 00000001800B2379: mov     edx, 100h
 * 00000001800B237E: lea     rcx, [rbp+9E40h+var_1990]
 * 00000001800B2385: call    sub_1800737C8
 * 00000001800B238A: nop
 * 00000001800B238B: mov     r8, rax
 * 00000001800B238E: mov     rdx, r13
 * 00000001800B2391: lea     rcx, [rbp+9E40h+var_19B0]
 * 00000001800B2398: call    sub_18001B678
 * 00000001800B239D: nop
 * 00000001800B239E: lea     r8, aVertex; "/Vertex"
 * 00000001800B23A5: mov     rdx, rax
 * 00000001800B23A8: lea     rcx, [rbp+9E40h+var_4F30]
 * 00000001800B23AF: call    sub_18001B5A8
 * 00000001800B23B4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B23B9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B23BE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B23C3: mov     rcx, rax
 * 00000001800B23C6: call    sub_18007386C
 * 00000001800B23CB: nop
 * 00000001800B23CC: lea     rcx, [rbp+9E40h+var_19B0]
 * 00000001800B23D3: call    sub_180011020
 * 00000001800B23D8: nop
 * 00000001800B23D9: lea     rcx, [rbp+9E40h+var_1990]
 * 00000001800B23E0: call    sub_180011020
 * 00000001800B23E5: nop
 * 00000001800B23E6: lea     rcx, dword_1801CA588
 * 00000001800B23ED: call    _Init_thread_footer
 * 00000001800B23F2: mov     rax, [rdi+rbx*8]
 * 00000001800B23F6: mov     ecx, [r15+rax]
 * 00000001800B23FA: cmp     cs:dword_1801CA58C, ecx
 * 00000001800B2400: jle     loc_1800B24D9
 * 00000001800B2406: lea     rcx, dword_1801CA58C
 * 00000001800B240D: call    sub_18000CA40
 * 00000001800B2412: cmp     cs:dword_1801CA58C, r14d
 * 00000001800B2419: jnz     loc_1800B24D9
 * 00000001800B241F: lea     rax, unk_180145EE0
 * 00000001800B2426: mov     qword ptr [rbp+9E40h+var_9190], rax
 * 00000001800B242D: lea     rax, unk_180146EF8
 * 00000001800B2434: mov     qword ptr [rbp+9E40h+var_9190+8], rax
 * 00000001800B243B: movups  xmm7, [rbp+9E40h+var_9190]
 * 00000001800B2442: mov     dword ptr [rbp+9E40h+var_7280], esi
 * 00000001800B2448: mov     dword ptr [rbp+9E40h+var_7280+4], esi
 * 00000001800B244E: movups  xmm6, [rbp+9E40h+var_7280]
 * 00000001800B2455: call    sub_1800A5ED4
 * 00000001800B245A: mov     r8, rax
 * 00000001800B245D: mov     r9d, r12d
 * 00000001800B2460: mov     edx, 102h
 * 00000001800B2465: lea     rcx, [rbp+9E40h+var_1930]
 * 00000001800B246C: call    sub_1800737C8
 * 00000001800B2471: nop
 * 00000001800B2472: mov     r8, rax
 * 00000001800B2475: mov     rdx, r13
 * 00000001800B2478: lea     rcx, [rbp+9E40h+var_1950]
 * 00000001800B247F: call    sub_18001B678
 * 00000001800B2484: nop
 * 00000001800B2485: lea     r8, aVertex; "/Vertex"
 * 00000001800B248C: mov     rdx, rax
 * 00000001800B248F: lea     rcx, [rbp+9E40h+var_4F10]
 * 00000001800B2496: call    sub_18001B5A8
 * 00000001800B249B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B24A0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B24A5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B24AA: mov     rcx, rax
 * 00000001800B24AD: call    sub_18007386C
 * 00000001800B24B2: nop
 * 00000001800B24B3: lea     rcx, [rbp+9E40h+var_1950]
 * 00000001800B24BA: call    sub_180011020
 * 00000001800B24BF: nop
 * 00000001800B24C0: lea     rcx, [rbp+9E40h+var_1930]
 * 00000001800B24C7: call    sub_180011020
 * 00000001800B24CC: nop
 * 00000001800B24CD: lea     rcx, dword_1801CA58C
 * 00000001800B24D4: call    _Init_thread_footer
 * 00000001800B24D9: mov     rax, [rdi+rbx*8]
 * 00000001800B24DD: mov     ecx, [r15+rax]
 * 00000001800B24E1: cmp     cs:dword_1801CA590, ecx
 * 00000001800B24E7: jle     loc_1800B25C0
 * 00000001800B24ED: lea     rcx, dword_1801CA590
 * 00000001800B24F4: call    sub_18000CA40
 * 00000001800B24F9: cmp     cs:dword_1801CA590, r14d
 * 00000001800B2500: jnz     loc_1800B25C0
 * 00000001800B2506: lea     rax, unk_180145EE0
 * 00000001800B250D: mov     qword ptr [rbp+9E40h+var_9180], rax
 * 00000001800B2514: lea     rax, unk_180146EF8
 * 00000001800B251B: mov     qword ptr [rbp+9E40h+var_9180+8], rax
 * 00000001800B2522: movups  xmm7, [rbp+9E40h+var_9180]
 * 00000001800B2529: mov     dword ptr [rbp+9E40h+var_7260], esi
 * 00000001800B252F: mov     dword ptr [rbp+9E40h+var_7260+4], esi
 * 00000001800B2535: movups  xmm6, [rbp+9E40h+var_7260]
 * 00000001800B253C: call    sub_1800A5ED4
 * 00000001800B2541: mov     r8, rax
 * 00000001800B2544: mov     r9d, r12d
 * 00000001800B2547: mov     edx, 104h
 * 00000001800B254C: lea     rcx, [rbp+9E40h+var_18D0]
 * 00000001800B2553: call    sub_1800737C8
 * 00000001800B2558: nop
 * 00000001800B2559: mov     r8, rax
 * 00000001800B255C: mov     rdx, r13
 * 00000001800B255F: lea     rcx, [rbp+9E40h+var_18F0]
 * 00000001800B2566: call    sub_18001B678
 * 00000001800B256B: nop
 * 00000001800B256C: lea     r8, aVertex; "/Vertex"
 * 00000001800B2573: mov     rdx, rax
 * 00000001800B2576: lea     rcx, [rbp+9E40h+var_4EF0]
 * 00000001800B257D: call    sub_18001B5A8
 * 00000001800B2582: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2587: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B258C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2591: mov     rcx, rax
 * 00000001800B2594: call    sub_18007386C
 * 00000001800B2599: nop
 * 00000001800B259A: lea     rcx, [rbp+9E40h+var_18F0]
 * 00000001800B25A1: call    sub_180011020
 * 00000001800B25A6: nop
 * 00000001800B25A7: lea     rcx, [rbp+9E40h+var_18D0]
 * 00000001800B25AE: call    sub_180011020
 * 00000001800B25B3: nop
 * 00000001800B25B4: lea     rcx, dword_1801CA590
 * 00000001800B25BB: call    _Init_thread_footer
 * 00000001800B25C0: mov     rax, [rdi+rbx*8]
 * 00000001800B25C4: mov     ecx, [r15+rax]
 * 00000001800B25C8: cmp     cs:dword_1801CA594, ecx
 * 00000001800B25CE: jle     loc_1800B26A7
 * 00000001800B25D4: lea     rcx, dword_1801CA594
 * 00000001800B25DB: call    sub_18000CA40
 * 00000001800B25E0: cmp     cs:dword_1801CA594, r14d
 * 00000001800B25E7: jnz     loc_1800B26A7
 * 00000001800B25ED: lea     rax, unk_180145EE0
 * 00000001800B25F4: mov     qword ptr [rbp+9E40h+var_9170], rax
 * 00000001800B25FB: lea     rax, unk_180146EF8
 * 00000001800B2602: mov     qword ptr [rbp+9E40h+var_9170+8], rax
 * 00000001800B2609: movups  xmm7, [rbp+9E40h+var_9170]
 * 00000001800B2610: mov     dword ptr [rbp+9E40h+var_7240], esi
 * 00000001800B2616: mov     dword ptr [rbp+9E40h+var_7240+4], esi
 * 00000001800B261C: movups  xmm6, [rbp+9E40h+var_7240]
 * 00000001800B2623: call    sub_1800A5ED4
 * 00000001800B2628: mov     r8, rax
 * 00000001800B262B: mov     r9d, r12d
 * 00000001800B262E: mov     edx, 106h
 * 00000001800B2633: lea     rcx, [rbp+9E40h+var_1870]
 * 00000001800B263A: call    sub_1800737C8
 * 00000001800B263F: nop
 * 00000001800B2640: mov     r8, rax
 * 00000001800B2643: mov     rdx, r13
 * 00000001800B2646: lea     rcx, [rbp+9E40h+var_1890]
 * 00000001800B264D: call    sub_18001B678
 * 00000001800B2652: nop
 * 00000001800B2653: lea     r8, aVertex; "/Vertex"
 * 00000001800B265A: mov     rdx, rax
 * 00000001800B265D: lea     rcx, [rbp+9E40h+var_4ED0]
 * 00000001800B2664: call    sub_18001B5A8
 * 00000001800B2669: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B266E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2673: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2678: mov     rcx, rax
 * 00000001800B267B: call    sub_18007386C
 * 00000001800B2680: nop
 * 00000001800B2681: lea     rcx, [rbp+9E40h+var_1890]
 * 00000001800B2688: call    sub_180011020
 * 00000001800B268D: nop
 * 00000001800B268E: lea     rcx, [rbp+9E40h+var_1870]
 * 00000001800B2695: call    sub_180011020
 * 00000001800B269A: nop
 * 00000001800B269B: lea     rcx, dword_1801CA594
 * 00000001800B26A2: call    _Init_thread_footer
 * 00000001800B26A7: mov     rax, [rdi+rbx*8]
 * 00000001800B26AB: mov     ecx, [r15+rax]
 * 00000001800B26AF: cmp     cs:dword_1801CA598, ecx
 * 00000001800B26B5: jle     loc_1800B278E
 * 00000001800B26BB: lea     rcx, dword_1801CA598
 * 00000001800B26C2: call    sub_18000CA40
 * 00000001800B26C7: cmp     cs:dword_1801CA598, r14d
 * 00000001800B26CE: jnz     loc_1800B278E
 * 00000001800B26D4: lea     rax, unk_180145EE0
 * 00000001800B26DB: mov     qword ptr [rbp+9E40h+var_9160], rax
 * 00000001800B26E2: lea     rax, unk_180146EF8
 * 00000001800B26E9: mov     qword ptr [rbp+9E40h+var_9160+8], rax
 * 00000001800B26F0: movups  xmm7, [rbp+9E40h+var_9160]
 * 00000001800B26F7: mov     dword ptr [rbp+9E40h+var_7220], esi
 * 00000001800B26FD: mov     dword ptr [rbp+9E40h+var_7220+4], esi
 * 00000001800B2703: movups  xmm6, [rbp+9E40h+var_7220]
 * 00000001800B270A: call    sub_1800A5ED4
 * 00000001800B270F: mov     r8, rax
 * 00000001800B2712: mov     r9d, r12d
 * 00000001800B2715: mov     edx, 108h
 * 00000001800B271A: lea     rcx, [rbp+9E40h+var_1810]
 * 00000001800B2721: call    sub_1800737C8
 * 00000001800B2726: nop
 * 00000001800B2727: mov     r8, rax
 * 00000001800B272A: mov     rdx, r13
 * 00000001800B272D: lea     rcx, [rbp+9E40h+var_1830]
 * 00000001800B2734: call    sub_18001B678
 * 00000001800B2739: nop
 * 00000001800B273A: lea     r8, aVertex; "/Vertex"
 * 00000001800B2741: mov     rdx, rax
 * 00000001800B2744: lea     rcx, [rbp+9E40h+var_4EB0]
 * 00000001800B274B: call    sub_18001B5A8
 * 00000001800B2750: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2755: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B275A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B275F: mov     rcx, rax
 * 00000001800B2762: call    sub_18007386C
 * 00000001800B2767: nop
 * 00000001800B2768: lea     rcx, [rbp+9E40h+var_1830]
 * 00000001800B276F: call    sub_180011020
 * 00000001800B2774: nop
 * 00000001800B2775: lea     rcx, [rbp+9E40h+var_1810]
 * 00000001800B277C: call    sub_180011020
 * 00000001800B2781: nop
 * 00000001800B2782: lea     rcx, dword_1801CA598
 * 00000001800B2789: call    _Init_thread_footer
 * 00000001800B278E: mov     rax, [rdi+rbx*8]
 * 00000001800B2792: mov     ecx, [r15+rax]
 * 00000001800B2796: cmp     cs:dword_1801CA59C, ecx
 * 00000001800B279C: jle     loc_1800B2875
 * 00000001800B27A2: lea     rcx, dword_1801CA59C
 * 00000001800B27A9: call    sub_18000CA40
 * 00000001800B27AE: cmp     cs:dword_1801CA59C, r14d
 * 00000001800B27B5: jnz     loc_1800B2875
 * 00000001800B27BB: lea     rax, unk_180145EE0
 * 00000001800B27C2: mov     qword ptr [rbp+9E40h+var_9150], rax
 * 00000001800B27C9: lea     rax, unk_180146EF8
 * 00000001800B27D0: mov     qword ptr [rbp+9E40h+var_9150+8], rax
 * 00000001800B27D7: movups  xmm7, [rbp+9E40h+var_9150]
 * 00000001800B27DE: mov     dword ptr [rbp+9E40h+var_7200], esi
 * 00000001800B27E4: mov     dword ptr [rbp+9E40h+var_7200+4], esi
 * 00000001800B27EA: movups  xmm6, [rbp+9E40h+var_7200]
 * 00000001800B27F1: call    sub_1800A5ED4
 * 00000001800B27F6: mov     r8, rax
 * 00000001800B27F9: mov     r9d, r12d
 * 00000001800B27FC: mov     edx, 10Ah
 * 00000001800B2801: lea     rcx, [rbp+9E40h+var_17B0]
 * 00000001800B2808: call    sub_1800737C8
 * 00000001800B280D: nop
 * 00000001800B280E: mov     r8, rax
 * 00000001800B2811: mov     rdx, r13
 * 00000001800B2814: lea     rcx, [rbp+9E40h+var_17D0]
 * 00000001800B281B: call    sub_18001B678
 * 00000001800B2820: nop
 * 00000001800B2821: lea     r8, aVertex; "/Vertex"
 * 00000001800B2828: mov     rdx, rax
 * 00000001800B282B: lea     rcx, [rbp+9E40h+var_4E90]
 * 00000001800B2832: call    sub_18001B5A8
 * 00000001800B2837: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B283C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2841: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2846: mov     rcx, rax
 * 00000001800B2849: call    sub_18007386C
 * 00000001800B284E: nop
 * 00000001800B284F: lea     rcx, [rbp+9E40h+var_17D0]
 * 00000001800B2856: call    sub_180011020
 * 00000001800B285B: nop
 * 00000001800B285C: lea     rcx, [rbp+9E40h+var_17B0]
 * 00000001800B2863: call    sub_180011020
 * 00000001800B2868: nop
 * 00000001800B2869: lea     rcx, dword_1801CA59C
 * 00000001800B2870: call    _Init_thread_footer
 * 00000001800B2875: mov     rax, [rdi+rbx*8]
 * 00000001800B2879: mov     ecx, [r15+rax]
 * 00000001800B287D: cmp     cs:dword_1801CA5A0, ecx
 * 00000001800B2883: jle     loc_1800B295C
 * 00000001800B2889: lea     rcx, dword_1801CA5A0
 * 00000001800B2890: call    sub_18000CA40
 * 00000001800B2895: cmp     cs:dword_1801CA5A0, r14d
 * 00000001800B289C: jnz     loc_1800B295C
 * 00000001800B28A2: lea     rax, unk_180145EE0
 * 00000001800B28A9: mov     qword ptr [rbp+9E40h+var_9140], rax
 * 00000001800B28B0: lea     rax, unk_180146EF8
 * 00000001800B28B7: mov     qword ptr [rbp+9E40h+var_9140+8], rax
 * 00000001800B28BE: movups  xmm7, [rbp+9E40h+var_9140]
 * 00000001800B28C5: mov     dword ptr [rbp+9E40h+var_71E0], esi
 * 00000001800B28CB: mov     dword ptr [rbp+9E40h+var_71E0+4], esi
 * 00000001800B28D1: movups  xmm6, [rbp+9E40h+var_71E0]
 * 00000001800B28D8: call    sub_1800A5ED4
 * 00000001800B28DD: mov     r8, rax
 * 00000001800B28E0: mov     r9d, r12d
 * 00000001800B28E3: mov     edx, 110h
 * 00000001800B28E8: lea     rcx, [rbp+9E40h+var_1750]
 * 00000001800B28EF: call    sub_1800737C8
 * 00000001800B28F4: nop
 * 00000001800B28F5: mov     r8, rax
 * 00000001800B28F8: mov     rdx, r13
 * 00000001800B28FB: lea     rcx, [rbp+9E40h+var_1770]
 * 00000001800B2902: call    sub_18001B678
 * 00000001800B2907: nop
 * 00000001800B2908: lea     r8, aVertex; "/Vertex"
 * 00000001800B290F: mov     rdx, rax
 * 00000001800B2912: lea     rcx, [rbp+9E40h+var_4E70]
 * 00000001800B2919: call    sub_18001B5A8
 * 00000001800B291E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2923: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2928: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B292D: mov     rcx, rax
 * 00000001800B2930: call    sub_18007386C
 * 00000001800B2935: nop
 * 00000001800B2936: lea     rcx, [rbp+9E40h+var_1770]
 * 00000001800B293D: call    sub_180011020
 * 00000001800B2942: nop
 * 00000001800B2943: lea     rcx, [rbp+9E40h+var_1750]
 * 00000001800B294A: call    sub_180011020
 * 00000001800B294F: nop
 * 00000001800B2950: lea     rcx, dword_1801CA5A0
 * 00000001800B2957: call    _Init_thread_footer
 * 00000001800B295C: mov     rax, [rdi+rbx*8]
 * 00000001800B2960: mov     ecx, [r15+rax]
 * 00000001800B2964: cmp     cs:dword_1801CA5A4, ecx
 * 00000001800B296A: jle     loc_1800B2A43
 * 00000001800B2970: lea     rcx, dword_1801CA5A4
 * 00000001800B2977: call    sub_18000CA40
 * 00000001800B297C: cmp     cs:dword_1801CA5A4, r14d
 * 00000001800B2983: jnz     loc_1800B2A43
 * 00000001800B2989: lea     rax, unk_180145EE0
 * 00000001800B2990: mov     qword ptr [rbp+9E40h+var_9130], rax
 * 00000001800B2997: lea     rax, unk_180146EF8
 * 00000001800B299E: mov     qword ptr [rbp+9E40h+var_9130+8], rax
 * 00000001800B29A5: movups  xmm7, [rbp+9E40h+var_9130]
 * 00000001800B29AC: mov     dword ptr [rbp+9E40h+var_71C0], esi
 * 00000001800B29B2: mov     dword ptr [rbp+9E40h+var_71C0+4], esi
 * 00000001800B29B8: movups  xmm6, [rbp+9E40h+var_71C0]
 * 00000001800B29BF: call    sub_1800A5ED4
 * 00000001800B29C4: mov     r8, rax
 * 00000001800B29C7: mov     r9d, r12d
 * 00000001800B29CA: mov     edx, 112h
 * 00000001800B29CF: lea     rcx, [rbp+9E40h+var_16F0]
 * 00000001800B29D6: call    sub_1800737C8
 * 00000001800B29DB: nop
 * 00000001800B29DC: mov     r8, rax
 * 00000001800B29DF: mov     rdx, r13
 * 00000001800B29E2: lea     rcx, [rbp+9E40h+var_1710]
 * 00000001800B29E9: call    sub_18001B678
 * 00000001800B29EE: nop
 * 00000001800B29EF: lea     r8, aVertex; "/Vertex"
 * 00000001800B29F6: mov     rdx, rax
 * 00000001800B29F9: lea     rcx, [rbp+9E40h+var_4E50]
 * 00000001800B2A00: call    sub_18001B5A8
 * 00000001800B2A05: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2A0A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2A0F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2A14: mov     rcx, rax
 * 00000001800B2A17: call    sub_18007386C
 * 00000001800B2A1C: nop
 * 00000001800B2A1D: lea     rcx, [rbp+9E40h+var_1710]
 * 00000001800B2A24: call    sub_180011020
 * 00000001800B2A29: nop
 * 00000001800B2A2A: lea     rcx, [rbp+9E40h+var_16F0]
 * 00000001800B2A31: call    sub_180011020
 * 00000001800B2A36: nop
 * 00000001800B2A37: lea     rcx, dword_1801CA5A4
 * 00000001800B2A3E: call    _Init_thread_footer
 * 00000001800B2A43: mov     rax, [rdi+rbx*8]
 * 00000001800B2A47: mov     ecx, [r15+rax]
 * 00000001800B2A4B: cmp     cs:dword_1801CA5A8, ecx
 * 00000001800B2A51: jle     loc_1800B2B2A
 * 00000001800B2A57: lea     rcx, dword_1801CA5A8
 * 00000001800B2A5E: call    sub_18000CA40
 * 00000001800B2A63: cmp     cs:dword_1801CA5A8, r14d
 * 00000001800B2A6A: jnz     loc_1800B2B2A
 * 00000001800B2A70: lea     rax, unk_180145EE0
 * 00000001800B2A77: mov     qword ptr [rbp+9E40h+var_9120], rax
 * 00000001800B2A7E: lea     rax, unk_180146EF8
 * 00000001800B2A85: mov     qword ptr [rbp+9E40h+var_9120+8], rax
 * 00000001800B2A8C: movups  xmm7, [rbp+9E40h+var_9120]
 * 00000001800B2A93: mov     dword ptr [rbp+9E40h+var_71A0], esi
 * 00000001800B2A99: mov     dword ptr [rbp+9E40h+var_71A0+4], esi
 * 00000001800B2A9F: movups  xmm6, [rbp+9E40h+var_71A0]
 * 00000001800B2AA6: call    sub_1800A5ED4
 * 00000001800B2AAB: mov     r8, rax
 * 00000001800B2AAE: mov     r9d, r12d
 * 00000001800B2AB1: mov     edx, 114h
 * 00000001800B2AB6: lea     rcx, [rbp+9E40h+var_1690]
 * 00000001800B2ABD: call    sub_1800737C8
 * 00000001800B2AC2: nop
 * 00000001800B2AC3: mov     r8, rax
 * 00000001800B2AC6: mov     rdx, r13
 * 00000001800B2AC9: lea     rcx, [rbp+9E40h+var_16B0]
 * 00000001800B2AD0: call    sub_18001B678
 * 00000001800B2AD5: nop
 * 00000001800B2AD6: lea     r8, aVertex; "/Vertex"
 * 00000001800B2ADD: mov     rdx, rax
 * 00000001800B2AE0: lea     rcx, [rbp+9E40h+var_4E30]
 * 00000001800B2AE7: call    sub_18001B5A8
 * 00000001800B2AEC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2AF1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2AF6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2AFB: mov     rcx, rax
 * 00000001800B2AFE: call    sub_18007386C
 * 00000001800B2B03: nop
 * 00000001800B2B04: lea     rcx, [rbp+9E40h+var_16B0]
 * 00000001800B2B0B: call    sub_180011020
 * 00000001800B2B10: nop
 * 00000001800B2B11: lea     rcx, [rbp+9E40h+var_1690]
 * 00000001800B2B18: call    sub_180011020
 * 00000001800B2B1D: nop
 * 00000001800B2B1E: lea     rcx, dword_1801CA5A8
 * 00000001800B2B25: call    _Init_thread_footer
 * 00000001800B2B2A: mov     rax, [rdi+rbx*8]
 * 00000001800B2B2E: mov     ecx, [r15+rax]
 * 00000001800B2B32: cmp     cs:dword_1801CA5AC, ecx
 * 00000001800B2B38: jle     loc_1800B2C11
 * 00000001800B2B3E: lea     rcx, dword_1801CA5AC
 * 00000001800B2B45: call    sub_18000CA40
 * 00000001800B2B4A: cmp     cs:dword_1801CA5AC, r14d
 * 00000001800B2B51: jnz     loc_1800B2C11
 * 00000001800B2B57: lea     rax, unk_180145EE0
 * 00000001800B2B5E: mov     qword ptr [rbp+9E40h+var_9110], rax
 * 00000001800B2B65: lea     rax, unk_180146EF8
 * 00000001800B2B6C: mov     qword ptr [rbp+9E40h+var_9110+8], rax
 * 00000001800B2B73: movups  xmm7, [rbp+9E40h+var_9110]
 * 00000001800B2B7A: mov     dword ptr [rbp+9E40h+var_7180], esi
 * 00000001800B2B80: mov     dword ptr [rbp+9E40h+var_7180+4], esi
 * 00000001800B2B86: movups  xmm6, [rbp+9E40h+var_7180]
 * 00000001800B2B8D: call    sub_1800A5ED4
 * 00000001800B2B92: mov     r8, rax
 * 00000001800B2B95: mov     r9d, r12d
 * 00000001800B2B98: mov     edx, 116h
 * 00000001800B2B9D: lea     rcx, [rbp+9E40h+var_1630]
 * 00000001800B2BA4: call    sub_1800737C8
 * 00000001800B2BA9: nop
 * 00000001800B2BAA: mov     r8, rax
 * 00000001800B2BAD: mov     rdx, r13
 * 00000001800B2BB0: lea     rcx, [rbp+9E40h+var_1650]
 * 00000001800B2BB7: call    sub_18001B678
 * 00000001800B2BBC: nop
 * 00000001800B2BBD: lea     r8, aVertex; "/Vertex"
 * 00000001800B2BC4: mov     rdx, rax
 * 00000001800B2BC7: lea     rcx, [rbp+9E40h+var_5570]
 * 00000001800B2BCE: call    sub_18001B5A8
 * 00000001800B2BD3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2BD8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2BDD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2BE2: mov     rcx, rax
 * 00000001800B2BE5: call    sub_18007386C
 * 00000001800B2BEA: nop
 * 00000001800B2BEB: lea     rcx, [rbp+9E40h+var_1650]
 * 00000001800B2BF2: call    sub_180011020
 * 00000001800B2BF7: nop
 * 00000001800B2BF8: lea     rcx, [rbp+9E40h+var_1630]
 * 00000001800B2BFF: call    sub_180011020
 * 00000001800B2C04: nop
 * 00000001800B2C05: lea     rcx, dword_1801CA5AC
 * 00000001800B2C0C: call    _Init_thread_footer
 * 00000001800B2C11: mov     rax, [rdi+rbx*8]
 * 00000001800B2C15: mov     ecx, [r15+rax]
 * 00000001800B2C19: cmp     cs:dword_1801CA5B0, ecx
 * 00000001800B2C1F: jle     loc_1800B2CF8
 * 00000001800B2C25: lea     rcx, dword_1801CA5B0
 * 00000001800B2C2C: call    sub_18000CA40
 * 00000001800B2C31: cmp     cs:dword_1801CA5B0, r14d
 * 00000001800B2C38: jnz     loc_1800B2CF8
 * 00000001800B2C3E: lea     rax, unk_180145EE0
 * 00000001800B2C45: mov     qword ptr [rbp+9E40h+var_9100], rax
 * 00000001800B2C4C: lea     rax, unk_180146EF8
 * 00000001800B2C53: mov     qword ptr [rbp+9E40h+var_9100+8], rax
 * 00000001800B2C5A: movups  xmm7, [rbp+9E40h+var_9100]
 * 00000001800B2C61: mov     dword ptr [rbp+9E40h+var_7160], esi
 * 00000001800B2C67: mov     dword ptr [rbp+9E40h+var_7160+4], esi
 * 00000001800B2C6D: movups  xmm6, [rbp+9E40h+var_7160]
 * 00000001800B2C74: call    sub_1800A5ED4
 * 00000001800B2C79: mov     r8, rax
 * 00000001800B2C7C: mov     r9d, r12d
 * 00000001800B2C7F: mov     edx, 118h
 * 00000001800B2C84: lea     rcx, [rbp+9E40h+var_15D0]
 * 00000001800B2C8B: call    sub_1800737C8
 * 00000001800B2C90: nop
 * 00000001800B2C91: mov     r8, rax
 * 00000001800B2C94: mov     rdx, r13
 * 00000001800B2C97: lea     rcx, [rbp+9E40h+var_15F0]
 * 00000001800B2C9E: call    sub_18001B678
 * 00000001800B2CA3: nop
 * 00000001800B2CA4: lea     r8, aVertex; "/Vertex"
 * 00000001800B2CAB: mov     rdx, rax
 * 00000001800B2CAE: lea     rcx, [rbp+9E40h+var_4E10]
 * 00000001800B2CB5: call    sub_18001B5A8
 * 00000001800B2CBA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2CBF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2CC4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2CC9: mov     rcx, rax
 * 00000001800B2CCC: call    sub_18007386C
 * 00000001800B2CD1: nop
 * 00000001800B2CD2: lea     rcx, [rbp+9E40h+var_15F0]
 * 00000001800B2CD9: call    sub_180011020
 * 00000001800B2CDE: nop
 * 00000001800B2CDF: lea     rcx, [rbp+9E40h+var_15D0]
 * 00000001800B2CE6: call    sub_180011020
 * 00000001800B2CEB: nop
 * 00000001800B2CEC: lea     rcx, dword_1801CA5B0
 * 00000001800B2CF3: call    _Init_thread_footer
 * 00000001800B2CF8: mov     rax, [rdi+rbx*8]
 * 00000001800B2CFC: mov     ecx, [r15+rax]
 * 00000001800B2D00: cmp     cs:dword_1801CA5B4, ecx
 * 00000001800B2D06: jle     loc_1800B2DDF
 * 00000001800B2D0C: lea     rcx, dword_1801CA5B4
 * 00000001800B2D13: call    sub_18000CA40
 * 00000001800B2D18: cmp     cs:dword_1801CA5B4, r14d
 * 00000001800B2D1F: jnz     loc_1800B2DDF
 * 00000001800B2D25: lea     rax, unk_180145EE0
 * 00000001800B2D2C: mov     qword ptr [rbp+9E40h+var_90F0], rax
 * 00000001800B2D33: lea     rax, unk_180146EF8
 * 00000001800B2D3A: mov     qword ptr [rbp+9E40h+var_90F0+8], rax
 * 00000001800B2D41: movups  xmm7, [rbp+9E40h+var_90F0]
 * 00000001800B2D48: mov     dword ptr [rbp+9E40h+var_7140], esi
 * 00000001800B2D4E: mov     dword ptr [rbp+9E40h+var_7140+4], esi
 * 00000001800B2D54: movups  xmm6, [rbp+9E40h+var_7140]
 * 00000001800B2D5B: call    sub_1800A5ED4
 * 00000001800B2D60: mov     r8, rax
 * 00000001800B2D63: mov     r9d, r12d
 * 00000001800B2D66: mov     edx, 11Ah
 * 00000001800B2D6B: lea     rcx, [rbp+9E40h+var_1570]
 * 00000001800B2D72: call    sub_1800737C8
 * 00000001800B2D77: nop
 * 00000001800B2D78: mov     r8, rax
 * 00000001800B2D7B: mov     rdx, r13
 * 00000001800B2D7E: lea     rcx, [rbp+9E40h+var_1590]
 * 00000001800B2D85: call    sub_18001B678
 * 00000001800B2D8A: nop
 * 00000001800B2D8B: lea     r8, aVertex; "/Vertex"
 * 00000001800B2D92: mov     rdx, rax
 * 00000001800B2D95: lea     rcx, [rbp+9E40h+var_4DF0]
 * 00000001800B2D9C: call    sub_18001B5A8
 * 00000001800B2DA1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2DA6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2DAB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2DB0: mov     rcx, rax
 * 00000001800B2DB3: call    sub_18007386C
 * 00000001800B2DB8: nop
 * 00000001800B2DB9: lea     rcx, [rbp+9E40h+var_1590]
 * 00000001800B2DC0: call    sub_180011020
 * 00000001800B2DC5: nop
 * 00000001800B2DC6: lea     rcx, [rbp+9E40h+var_1570]
 * 00000001800B2DCD: call    sub_180011020
 * 00000001800B2DD2: nop
 * 00000001800B2DD3: lea     rcx, dword_1801CA5B4
 * 00000001800B2DDA: call    _Init_thread_footer
 * 00000001800B2DDF: mov     rax, [rdi+rbx*8]
 * 00000001800B2DE3: mov     ecx, [r15+rax]
 * 00000001800B2DE7: cmp     cs:dword_1801CA5B8, ecx
 * 00000001800B2DED: jle     loc_1800B2EC6
 * 00000001800B2DF3: lea     rcx, dword_1801CA5B8
 * 00000001800B2DFA: call    sub_18000CA40
 * 00000001800B2DFF: cmp     cs:dword_1801CA5B8, r14d
 * 00000001800B2E06: jnz     loc_1800B2EC6
 * 00000001800B2E0C: lea     rax, unk_180146F00
 * 00000001800B2E13: mov     qword ptr [rbp+9E40h+var_90E0], rax
 * 00000001800B2E1A: lea     rax, unk_180148918
 * 00000001800B2E21: mov     qword ptr [rbp+9E40h+var_90E0+8], rax
 * 00000001800B2E28: movups  xmm7, [rbp+9E40h+var_90E0]
 * 00000001800B2E2F: mov     dword ptr [rbp+9E40h+var_7120], esi
 * 00000001800B2E35: mov     dword ptr [rbp+9E40h+var_7120+4], esi
 * 00000001800B2E3B: movups  xmm6, [rbp+9E40h+var_7120]
 * 00000001800B2E42: call    sub_1800A5ED4
 * 00000001800B2E47: mov     r8, rax
 * 00000001800B2E4A: mov     r9d, r12d
 * 00000001800B2E4D: mov     edx, 120h
 * 00000001800B2E52: lea     rcx, [rbp+9E40h+var_1510]
 * 00000001800B2E59: call    sub_1800737C8
 * 00000001800B2E5E: nop
 * 00000001800B2E5F: mov     r8, rax
 * 00000001800B2E62: mov     rdx, r13
 * 00000001800B2E65: lea     rcx, [rbp+9E40h+var_1530]
 * 00000001800B2E6C: call    sub_18001B678
 * 00000001800B2E71: nop
 * 00000001800B2E72: lea     r8, aVertex; "/Vertex"
 * 00000001800B2E79: mov     rdx, rax
 * 00000001800B2E7C: lea     rcx, [rbp+9E40h+var_4DD0]
 * 00000001800B2E83: call    sub_18001B5A8
 * 00000001800B2E88: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2E8D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2E92: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2E97: mov     rcx, rax
 * 00000001800B2E9A: call    sub_18007386C
 * 00000001800B2E9F: nop
 * 00000001800B2EA0: lea     rcx, [rbp+9E40h+var_1530]
 * 00000001800B2EA7: call    sub_180011020
 * 00000001800B2EAC: nop
 * 00000001800B2EAD: lea     rcx, [rbp+9E40h+var_1510]
 * 00000001800B2EB4: call    sub_180011020
 * 00000001800B2EB9: nop
 * 00000001800B2EBA: lea     rcx, dword_1801CA5B8
 * 00000001800B2EC1: call    _Init_thread_footer
 * 00000001800B2EC6: mov     rax, [rdi+rbx*8]
 * 00000001800B2ECA: mov     ecx, [r15+rax]
 * 00000001800B2ECE: cmp     cs:dword_1801CA5BC, ecx
 * 00000001800B2ED4: jle     loc_1800B2FAD
 * 00000001800B2EDA: lea     rcx, dword_1801CA5BC
 * 00000001800B2EE1: call    sub_18000CA40
 * 00000001800B2EE6: cmp     cs:dword_1801CA5BC, r14d
 * 00000001800B2EED: jnz     loc_1800B2FAD
 * 00000001800B2EF3: lea     rax, unk_180146F00
 * 00000001800B2EFA: mov     qword ptr [rbp+9E40h+var_90D0], rax
 * 00000001800B2F01: lea     rax, unk_180148918
 * 00000001800B2F08: mov     qword ptr [rbp+9E40h+var_90D0+8], rax
 * 00000001800B2F0F: movups  xmm7, [rbp+9E40h+var_90D0]
 * 00000001800B2F16: mov     dword ptr [rbp+9E40h+var_7100], esi
 * 00000001800B2F1C: mov     dword ptr [rbp+9E40h+var_7100+4], esi
 * 00000001800B2F22: movups  xmm6, [rbp+9E40h+var_7100]
 * 00000001800B2F29: call    sub_1800A5ED4
 * 00000001800B2F2E: mov     r8, rax
 * 00000001800B2F31: mov     r9d, r12d
 * 00000001800B2F34: mov     edx, 122h
 * 00000001800B2F39: lea     rcx, [rbp+9E40h+var_14B0]
 * 00000001800B2F40: call    sub_1800737C8
 * 00000001800B2F45: nop
 * 00000001800B2F46: mov     r8, rax
 * 00000001800B2F49: mov     rdx, r13
 * 00000001800B2F4C: lea     rcx, [rbp+9E40h+var_14D0]
 * 00000001800B2F53: call    sub_18001B678
 * 00000001800B2F58: nop
 * 00000001800B2F59: lea     r8, aVertex; "/Vertex"
 * 00000001800B2F60: mov     rdx, rax
 * 00000001800B2F63: lea     rcx, [rbp+9E40h+var_4DB0]
 * 00000001800B2F6A: call    sub_18001B5A8
 * 00000001800B2F6F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2F74: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2F79: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2F7E: mov     rcx, rax
 * 00000001800B2F81: call    sub_18007386C
 * 00000001800B2F86: nop
 * 00000001800B2F87: lea     rcx, [rbp+9E40h+var_14D0]
 * 00000001800B2F8E: call    sub_180011020
 * 00000001800B2F93: nop
 * 00000001800B2F94: lea     rcx, [rbp+9E40h+var_14B0]
 * 00000001800B2F9B: call    sub_180011020
 * 00000001800B2FA0: nop
 * 00000001800B2FA1: lea     rcx, dword_1801CA5BC
 * 00000001800B2FA8: call    _Init_thread_footer
 * 00000001800B2FAD: mov     rax, [rdi+rbx*8]
 * 00000001800B2FB1: mov     ecx, [r15+rax]
 * 00000001800B2FB5: cmp     cs:dword_1801CA5C0, ecx
 * 00000001800B2FBB: jle     loc_1800B3094
 * 00000001800B2FC1: lea     rcx, dword_1801CA5C0
 * 00000001800B2FC8: call    sub_18000CA40
 * 00000001800B2FCD: cmp     cs:dword_1801CA5C0, r14d
 * 00000001800B2FD4: jnz     loc_1800B3094
 * 00000001800B2FDA: lea     rax, unk_180146F00
 * 00000001800B2FE1: mov     qword ptr [rbp+9E40h+var_90C0], rax
 * 00000001800B2FE8: lea     rax, unk_180148918
 * 00000001800B2FEF: mov     qword ptr [rbp+9E40h+var_90C0+8], rax
 * 00000001800B2FF6: movups  xmm7, [rbp+9E40h+var_90C0]
 * 00000001800B2FFD: mov     dword ptr [rbp+9E40h+var_70E0], esi
 * 00000001800B3003: mov     dword ptr [rbp+9E40h+var_70E0+4], esi
 * 00000001800B3009: movups  xmm6, [rbp+9E40h+var_70E0]
 * 00000001800B3010: call    sub_1800A5ED4
 * 00000001800B3015: mov     r8, rax
 * 00000001800B3018: mov     r9d, r12d
 * 00000001800B301B: mov     edx, 128h
 * 00000001800B3020: lea     rcx, [rbp+9E40h+var_1450]
 * 00000001800B3027: call    sub_1800737C8
 * 00000001800B302C: nop
 * 00000001800B302D: mov     r8, rax
 * 00000001800B3030: mov     rdx, r13
 * 00000001800B3033: lea     rcx, [rbp+9E40h+var_1470]
 * 00000001800B303A: call    sub_18001B678
 * 00000001800B303F: nop
 * 00000001800B3040: lea     r8, aVertex; "/Vertex"
 * 00000001800B3047: mov     rdx, rax
 * 00000001800B304A: lea     rcx, [rbp+9E40h+var_4D90]
 * 00000001800B3051: call    sub_18001B5A8
 * 00000001800B3056: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B305B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3060: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3065: mov     rcx, rax
 * 00000001800B3068: call    sub_18007386C
 * 00000001800B306D: nop
 * 00000001800B306E: lea     rcx, [rbp+9E40h+var_1470]
 * 00000001800B3075: call    sub_180011020
 * 00000001800B307A: nop
 * 00000001800B307B: lea     rcx, [rbp+9E40h+var_1450]
 * 00000001800B3082: call    sub_180011020
 * 00000001800B3087: nop
 * 00000001800B3088: lea     rcx, dword_1801CA5C0
 * 00000001800B308F: call    _Init_thread_footer
 * 00000001800B3094: mov     rax, [rdi+rbx*8]
 * 00000001800B3098: mov     ecx, [r15+rax]
 * 00000001800B309C: cmp     cs:dword_1801CA5C4, ecx
 * 00000001800B30A2: jle     loc_1800B317B
 * 00000001800B30A8: lea     rcx, dword_1801CA5C4
 * 00000001800B30AF: call    sub_18000CA40
 * 00000001800B30B4: cmp     cs:dword_1801CA5C4, r14d
 * 00000001800B30BB: jnz     loc_1800B317B
 * 00000001800B30C1: lea     rax, unk_180146F00
 * 00000001800B30C8: mov     qword ptr [rbp+9E40h+var_90B0], rax
 * 00000001800B30CF: lea     rax, unk_180148918
 * 00000001800B30D6: mov     qword ptr [rbp+9E40h+var_90B0+8], rax
 * 00000001800B30DD: movups  xmm7, [rbp+9E40h+var_90B0]
 * 00000001800B30E4: mov     dword ptr [rbp+9E40h+var_70C0], esi
 * 00000001800B30EA: mov     dword ptr [rbp+9E40h+var_70C0+4], esi
 * 00000001800B30F0: movups  xmm6, [rbp+9E40h+var_70C0]
 * 00000001800B30F7: call    sub_1800A5ED4
 * 00000001800B30FC: mov     r8, rax
 * 00000001800B30FF: mov     r9d, r12d
 * 00000001800B3102: mov     edx, 12Ah
 * 00000001800B3107: lea     rcx, [rbp+9E40h+var_13F0]
 * 00000001800B310E: call    sub_1800737C8
 * 00000001800B3113: nop
 * 00000001800B3114: mov     r8, rax
 * 00000001800B3117: mov     rdx, r13
 * 00000001800B311A: lea     rcx, [rbp+9E40h+var_1410]
 * 00000001800B3121: call    sub_18001B678
 * 00000001800B3126: nop
 * 00000001800B3127: lea     r8, aVertex; "/Vertex"
 * 00000001800B312E: mov     rdx, rax
 * 00000001800B3131: lea     rcx, [rbp+9E40h+var_4D70]
 * 00000001800B3138: call    sub_18001B5A8
 * 00000001800B313D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3142: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3147: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B314C: mov     rcx, rax
 * 00000001800B314F: call    sub_18007386C
 * 00000001800B3154: nop
 * 00000001800B3155: lea     rcx, [rbp+9E40h+var_1410]
 * 00000001800B315C: call    sub_180011020
 * 00000001800B3161: nop
 * 00000001800B3162: lea     rcx, [rbp+9E40h+var_13F0]
 * 00000001800B3169: call    sub_180011020
 * 00000001800B316E: nop
 * 00000001800B316F: lea     rcx, dword_1801CA5C4
 * 00000001800B3176: call    _Init_thread_footer
 * 00000001800B317B: mov     rax, [rdi+rbx*8]
 * 00000001800B317F: mov     ecx, [r15+rax]
 * 00000001800B3183: cmp     cs:dword_1801CA5C8, ecx
 * 00000001800B3189: jle     loc_1800B3262
 * 00000001800B318F: lea     rcx, dword_1801CA5C8
 * 00000001800B3196: call    sub_18000CA40
 * 00000001800B319B: cmp     cs:dword_1801CA5C8, r14d
 * 00000001800B31A2: jnz     loc_1800B3262
 * 00000001800B31A8: lea     rax, unk_180146F00
 * 00000001800B31AF: mov     qword ptr [rbp+9E40h+var_90A0], rax
 * 00000001800B31B6: lea     rax, unk_180148918
 * 00000001800B31BD: mov     qword ptr [rbp+9E40h+var_90A0+8], rax
 * 00000001800B31C4: movups  xmm7, [rbp+9E40h+var_90A0]
 * 00000001800B31CB: mov     dword ptr [rbp+9E40h+var_70A0], esi
 * 00000001800B31D1: mov     dword ptr [rbp+9E40h+var_70A0+4], esi
 * 00000001800B31D7: movups  xmm6, [rbp+9E40h+var_70A0]
 * 00000001800B31DE: call    sub_1800A5ED4
 * 00000001800B31E3: mov     r8, rax
 * 00000001800B31E6: mov     r9d, r12d
 * 00000001800B31E9: mov     edx, 130h
 * 00000001800B31EE: lea     rcx, [rbp+9E40h+var_1390]
 * 00000001800B31F5: call    sub_1800737C8
 * 00000001800B31FA: nop
 * 00000001800B31FB: mov     r8, rax
 * 00000001800B31FE: mov     rdx, r13
 * 00000001800B3201: lea     rcx, [rbp+9E40h+var_13B0]
 * 00000001800B3208: call    sub_18001B678
 * 00000001800B320D: nop
 * 00000001800B320E: lea     r8, aVertex; "/Vertex"
 * 00000001800B3215: mov     rdx, rax
 * 00000001800B3218: lea     rcx, [rbp+9E40h+var_4D50]
 * 00000001800B321F: call    sub_18001B5A8
 * 00000001800B3224: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3229: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B322E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3233: mov     rcx, rax
 * 00000001800B3236: call    sub_18007386C
 * 00000001800B323B: nop
 * 00000001800B323C: lea     rcx, [rbp+9E40h+var_13B0]
 * 00000001800B3243: call    sub_180011020
 * 00000001800B3248: nop
 * 00000001800B3249: lea     rcx, [rbp+9E40h+var_1390]
 * 00000001800B3250: call    sub_180011020
 * 00000001800B3255: nop
 * 00000001800B3256: lea     rcx, dword_1801CA5C8
 * 00000001800B325D: call    _Init_thread_footer
 * 00000001800B3262: mov     rax, [rdi+rbx*8]
 * 00000001800B3266: mov     ecx, [r15+rax]
 * 00000001800B326A: cmp     cs:dword_1801CA5CC, ecx
 * 00000001800B3270: jle     loc_1800B3349
 * 00000001800B3276: lea     rcx, dword_1801CA5CC
 * 00000001800B327D: call    sub_18000CA40
 * 00000001800B3282: cmp     cs:dword_1801CA5CC, r14d
 * 00000001800B3289: jnz     loc_1800B3349
 * 00000001800B328F: lea     rax, unk_180146F00
 * 00000001800B3296: mov     qword ptr [rbp+9E40h+var_9090], rax
 * 00000001800B329D: lea     rax, unk_180148918
 * 00000001800B32A4: mov     qword ptr [rbp+9E40h+var_9090+8], rax
 * 00000001800B32AB: movups  xmm7, [rbp+9E40h+var_9090]
 * 00000001800B32B2: mov     dword ptr [rbp+9E40h+var_7080], esi
 * 00000001800B32B8: mov     dword ptr [rbp+9E40h+var_7080+4], esi
 * 00000001800B32BE: movups  xmm6, [rbp+9E40h+var_7080]
 * 00000001800B32C5: call    sub_1800A5ED4
 * 00000001800B32CA: mov     r8, rax
 * 00000001800B32CD: mov     r9d, r12d
 * 00000001800B32D0: mov     edx, 132h
 * 00000001800B32D5: lea     rcx, [rbp+9E40h+var_1330]
 * 00000001800B32DC: call    sub_1800737C8
 * 00000001800B32E1: nop
 * 00000001800B32E2: mov     r8, rax
 * 00000001800B32E5: mov     rdx, r13
 * 00000001800B32E8: lea     rcx, [rbp+9E40h+var_1350]
 * 00000001800B32EF: call    sub_18001B678
 * 00000001800B32F4: nop
 * 00000001800B32F5: lea     r8, aVertex; "/Vertex"
 * 00000001800B32FC: mov     rdx, rax
 * 00000001800B32FF: lea     rcx, [rbp+9E40h+var_4D30]
 * 00000001800B3306: call    sub_18001B5A8
 * 00000001800B330B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3310: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3315: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B331A: mov     rcx, rax
 * 00000001800B331D: call    sub_18007386C
 * 00000001800B3322: nop
 * 00000001800B3323: lea     rcx, [rbp+9E40h+var_1350]
 * 00000001800B332A: call    sub_180011020
 * 00000001800B332F: nop
 * 00000001800B3330: lea     rcx, [rbp+9E40h+var_1330]
 * 00000001800B3337: call    sub_180011020
 * 00000001800B333C: nop
 * 00000001800B333D: lea     rcx, dword_1801CA5CC
 * 00000001800B3344: call    _Init_thread_footer
 * 00000001800B3349: mov     rax, [rdi+rbx*8]
 * 00000001800B334D: mov     ecx, [r15+rax]
 * 00000001800B3351: cmp     cs:dword_1801CA5D0, ecx
 * 00000001800B3357: jle     loc_1800B3430
 * 00000001800B335D: lea     rcx, dword_1801CA5D0
 * 00000001800B3364: call    sub_18000CA40
 * 00000001800B3369: cmp     cs:dword_1801CA5D0, r14d
 * 00000001800B3370: jnz     loc_1800B3430
 * 00000001800B3376: lea     rax, unk_180146F00
 * 00000001800B337D: mov     qword ptr [rbp+9E40h+var_9080], rax
 * 00000001800B3384: lea     rax, unk_180148918
 * 00000001800B338B: mov     qword ptr [rbp+9E40h+var_9080+8], rax
 * 00000001800B3392: movups  xmm7, [rbp+9E40h+var_9080]
 * 00000001800B3399: mov     dword ptr [rbp+9E40h+var_7060], esi
 * 00000001800B339F: mov     dword ptr [rbp+9E40h+var_7060+4], esi
 * 00000001800B33A5: movups  xmm6, [rbp+9E40h+var_7060]
 * 00000001800B33AC: call    sub_1800A5ED4
 * 00000001800B33B1: mov     r8, rax
 * 00000001800B33B4: mov     r9d, r12d
 * 00000001800B33B7: mov     edx, 138h
 * 00000001800B33BC: lea     rcx, [rbp+9E40h+var_12D0]
 * 00000001800B33C3: call    sub_1800737C8
 * 00000001800B33C8: nop
 * 00000001800B33C9: mov     r8, rax
 * 00000001800B33CC: mov     rdx, r13
 * 00000001800B33CF: lea     rcx, [rbp+9E40h+var_12F0]
 * 00000001800B33D6: call    sub_18001B678
 * 00000001800B33DB: nop
 * 00000001800B33DC: lea     r8, aVertex; "/Vertex"
 * 00000001800B33E3: mov     rdx, rax
 * 00000001800B33E6: lea     rcx, [rbp+9E40h+var_4D10]
 * 00000001800B33ED: call    sub_18001B5A8
 * 00000001800B33F2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B33F7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B33FC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3401: mov     rcx, rax
 * 00000001800B3404: call    sub_18007386C
 * 00000001800B3409: nop
 * 00000001800B340A: lea     rcx, [rbp+9E40h+var_12F0]
 * 00000001800B3411: call    sub_180011020
 * 00000001800B3416: nop
 * 00000001800B3417: lea     rcx, [rbp+9E40h+var_12D0]
 * 00000001800B341E: call    sub_180011020
 * 00000001800B3423: nop
 * 00000001800B3424: lea     rcx, dword_1801CA5D0
 * 00000001800B342B: call    _Init_thread_footer
 * 00000001800B3430: mov     rax, [rdi+rbx*8]
 * 00000001800B3434: mov     ecx, [r15+rax]
 * 00000001800B3438: cmp     cs:dword_1801CA5D4, ecx
 * 00000001800B343E: jle     loc_1800B3517
 * 00000001800B3444: lea     rcx, dword_1801CA5D4
 * 00000001800B344B: call    sub_18000CA40
 * 00000001800B3450: cmp     cs:dword_1801CA5D4, r14d
 * 00000001800B3457: jnz     loc_1800B3517
 * 00000001800B345D: lea     rax, unk_180146F00
 * 00000001800B3464: mov     qword ptr [rbp+9E40h+var_9070], rax
 * 00000001800B346B: lea     rax, unk_180148918
 * 00000001800B3472: mov     qword ptr [rbp+9E40h+var_9070+8], rax
 * 00000001800B3479: movups  xmm7, [rbp+9E40h+var_9070]
 * 00000001800B3480: mov     dword ptr [rbp+9E40h+var_7040], esi
 * 00000001800B3486: mov     dword ptr [rbp+9E40h+var_7040+4], esi
 * 00000001800B348C: movups  xmm6, [rbp+9E40h+var_7040]
 * 00000001800B3493: call    sub_1800A5ED4
 * 00000001800B3498: mov     r8, rax
 * 00000001800B349B: mov     r9d, r12d
 * 00000001800B349E: mov     edx, 13Ah
 * 00000001800B34A3: lea     rcx, [rbp+9E40h+var_1270]
 * 00000001800B34AA: call    sub_1800737C8
 * 00000001800B34AF: nop
 * 00000001800B34B0: mov     r8, rax
 * 00000001800B34B3: mov     rdx, r13
 * 00000001800B34B6: lea     rcx, [rbp+9E40h+var_1290]
 * 00000001800B34BD: call    sub_18001B678
 * 00000001800B34C2: nop
 * 00000001800B34C3: lea     r8, aVertex; "/Vertex"
 * 00000001800B34CA: mov     rdx, rax
 * 00000001800B34CD: lea     rcx, [rbp+9E40h+var_4CF0]
 * 00000001800B34D4: call    sub_18001B5A8
 * 00000001800B34D9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B34DE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B34E3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B34E8: mov     rcx, rax
 * 00000001800B34EB: call    sub_18007386C
 * 00000001800B34F0: nop
 * 00000001800B34F1: lea     rcx, [rbp+9E40h+var_1290]
 * 00000001800B34F8: call    sub_180011020
 * 00000001800B34FD: nop
 * 00000001800B34FE: lea     rcx, [rbp+9E40h+var_1270]
 * 00000001800B3505: call    sub_180011020
 * 00000001800B350A: nop
 * 00000001800B350B: lea     rcx, dword_1801CA5D4
 * 00000001800B3512: call    _Init_thread_footer
 * 00000001800B3517: mov     rax, [rdi+rbx*8]
 * 00000001800B351B: mov     ecx, [r15+rax]
 * 00000001800B351F: cmp     cs:dword_1801CA5D8, ecx
 * 00000001800B3525: jle     loc_1800B35FE
 * 00000001800B352B: lea     rcx, dword_1801CA5D8
 * 00000001800B3532: call    sub_18000CA40
 * 00000001800B3537: cmp     cs:dword_1801CA5D8, r14d
 * 00000001800B353E: jnz     loc_1800B35FE
 * 00000001800B3544: lea     rax, unk_180144780
 * 00000001800B354B: mov     qword ptr [rbp+9E40h+var_9060], rax
 * 00000001800B3552: lea     rax, unk_1801457D0
 * 00000001800B3559: mov     qword ptr [rbp+9E40h+var_9060+8], rax
 * 00000001800B3560: movups  xmm7, [rbp+9E40h+var_9060]
 * 00000001800B3567: mov     dword ptr [rbp+9E40h+var_7020], esi
 * 00000001800B356D: mov     dword ptr [rbp+9E40h+var_7020+4], esi
 * 00000001800B3573: movups  xmm6, [rbp+9E40h+var_7020]
 * 00000001800B357A: call    sub_1800A5ED4
 * 00000001800B357F: mov     r8, rax
 * 00000001800B3582: mov     r9d, r12d
 * 00000001800B3585: mov     edx, 140h
 * 00000001800B358A: lea     rcx, [rbp+9E40h+var_1210]
 * 00000001800B3591: call    sub_1800737C8
 * 00000001800B3596: nop
 * 00000001800B3597: mov     r8, rax
 * 00000001800B359A: mov     rdx, r13
 * 00000001800B359D: lea     rcx, [rbp+9E40h+var_1230]
 * 00000001800B35A4: call    sub_18001B678
 * 00000001800B35A9: nop
 * 00000001800B35AA: lea     r8, aVertex; "/Vertex"
 * 00000001800B35B1: mov     rdx, rax
 * 00000001800B35B4: lea     rcx, [rbp+9E40h+var_4CD0]
 * 00000001800B35BB: call    sub_18001B5A8
 * 00000001800B35C0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B35C5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B35CA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B35CF: mov     rcx, rax
 * 00000001800B35D2: call    sub_18007386C
 * 00000001800B35D7: nop
 * 00000001800B35D8: lea     rcx, [rbp+9E40h+var_1230]
 * 00000001800B35DF: call    sub_180011020
 * 00000001800B35E4: nop
 * 00000001800B35E5: lea     rcx, [rbp+9E40h+var_1210]
 * 00000001800B35EC: call    sub_180011020
 * 00000001800B35F1: nop
 * 00000001800B35F2: lea     rcx, dword_1801CA5D8
 * 00000001800B35F9: call    _Init_thread_footer
 * 00000001800B35FE: mov     rax, [rdi+rbx*8]
 * 00000001800B3602: mov     ecx, [r15+rax]
 * 00000001800B3606: cmp     cs:dword_1801CA5DC, ecx
 * 00000001800B360C: jle     loc_1800B36E5
 * 00000001800B3612: lea     rcx, dword_1801CA5DC
 * 00000001800B3619: call    sub_18000CA40
 * 00000001800B361E: cmp     cs:dword_1801CA5DC, r14d
 * 00000001800B3625: jnz     loc_1800B36E5
 * 00000001800B362B: lea     rax, unk_180144780
 * 00000001800B3632: mov     qword ptr [rbp+9E40h+var_9050], rax
 * 00000001800B3639: lea     rax, unk_1801457D0
 * 00000001800B3640: mov     qword ptr [rbp+9E40h+var_9050+8], rax
 * 00000001800B3647: movups  xmm7, [rbp+9E40h+var_9050]
 * 00000001800B364E: mov     dword ptr [rbp+9E40h+var_7000], esi
 * 00000001800B3654: mov     dword ptr [rbp+9E40h+var_7000+4], esi
 * 00000001800B365A: movups  xmm6, [rbp+9E40h+var_7000]
 * 00000001800B3661: call    sub_1800A5ED4
 * 00000001800B3666: mov     r8, rax
 * 00000001800B3669: mov     r9d, r12d
 * 00000001800B366C: mov     edx, 142h
 * 00000001800B3671: lea     rcx, [rbp+9E40h+var_11B0]
 * 00000001800B3678: call    sub_1800737C8
 * 00000001800B367D: nop
 * 00000001800B367E: mov     r8, rax
 * 00000001800B3681: mov     rdx, r13
 * 00000001800B3684: lea     rcx, [rbp+9E40h+var_11D0]
 * 00000001800B368B: call    sub_18001B678
 * 00000001800B3690: nop
 * 00000001800B3691: lea     r8, aVertex; "/Vertex"
 * 00000001800B3698: mov     rdx, rax
 * 00000001800B369B: lea     rcx, [rbp+9E40h+var_4CB0]
 * 00000001800B36A2: call    sub_18001B5A8
 * 00000001800B36A7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B36AC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B36B1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B36B6: mov     rcx, rax
 * 00000001800B36B9: call    sub_18007386C
 * 00000001800B36BE: nop
 * 00000001800B36BF: lea     rcx, [rbp+9E40h+var_11D0]
 * 00000001800B36C6: call    sub_180011020
 * 00000001800B36CB: nop
 * 00000001800B36CC: lea     rcx, [rbp+9E40h+var_11B0]
 * 00000001800B36D3: call    sub_180011020
 * 00000001800B36D8: nop
 * 00000001800B36D9: lea     rcx, dword_1801CA5DC
 * 00000001800B36E0: call    _Init_thread_footer
 * 00000001800B36E5: mov     rax, [rdi+rbx*8]
 * 00000001800B36E9: mov     ecx, [r15+rax]
 * 00000001800B36ED: cmp     cs:dword_1801CA5E0, ecx
 * 00000001800B36F3: jle     loc_1800B37CC
 * 00000001800B36F9: lea     rcx, dword_1801CA5E0
 * 00000001800B3700: call    sub_18000CA40
 * 00000001800B3705: cmp     cs:dword_1801CA5E0, r14d
 * 00000001800B370C: jnz     loc_1800B37CC
 * 00000001800B3712: lea     rax, unk_180144780
 * 00000001800B3719: mov     qword ptr [rbp+9E40h+var_9040], rax
 * 00000001800B3720: lea     rax, unk_1801457D0
 * 00000001800B3727: mov     qword ptr [rbp+9E40h+var_9040+8], rax
 * 00000001800B372E: movups  xmm7, [rbp+9E40h+var_9040]
 * 00000001800B3735: mov     dword ptr [rbp+9E40h+var_6FE0], esi
 * 00000001800B373B: mov     dword ptr [rbp+9E40h+var_6FE0+4], esi
 * 00000001800B3741: movups  xmm6, [rbp+9E40h+var_6FE0]
 * 00000001800B3748: call    sub_1800A5ED4
 * 00000001800B374D: mov     r8, rax
 * 00000001800B3750: mov     r9d, r12d
 * 00000001800B3753: mov     edx, 148h
 * 00000001800B3758: lea     rcx, [rbp+9E40h+var_1150]
 * 00000001800B375F: call    sub_1800737C8
 * 00000001800B3764: nop
 * 00000001800B3765: mov     r8, rax
 * 00000001800B3768: mov     rdx, r13
 * 00000001800B376B: lea     rcx, [rbp+9E40h+var_1170]
 * 00000001800B3772: call    sub_18001B678
 * 00000001800B3777: nop
 * 00000001800B3778: lea     r8, aVertex; "/Vertex"
 * 00000001800B377F: mov     rdx, rax
 * 00000001800B3782: lea     rcx, [rbp+9E40h+var_4C90]
 * 00000001800B3789: call    sub_18001B5A8
 * 00000001800B378E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3793: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3798: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B379D: mov     rcx, rax
 * 00000001800B37A0: call    sub_18007386C
 * 00000001800B37A5: nop
 * 00000001800B37A6: lea     rcx, [rbp+9E40h+var_1170]
 * 00000001800B37AD: call    sub_180011020
 * 00000001800B37B2: nop
 * 00000001800B37B3: lea     rcx, [rbp+9E40h+var_1150]
 * 00000001800B37BA: call    sub_180011020
 * 00000001800B37BF: nop
 * 00000001800B37C0: lea     rcx, dword_1801CA5E0
 * 00000001800B37C7: call    _Init_thread_footer
 * 00000001800B37CC: mov     rax, [rdi+rbx*8]
 * 00000001800B37D0: mov     ecx, [r15+rax]
 * 00000001800B37D4: cmp     cs:dword_1801CA5E4, ecx
 * 00000001800B37DA: jle     loc_1800B38B3
 * 00000001800B37E0: lea     rcx, dword_1801CA5E4
 * 00000001800B37E7: call    sub_18000CA40
 * 00000001800B37EC: cmp     cs:dword_1801CA5E4, r14d
 * 00000001800B37F3: jnz     loc_1800B38B3
 * 00000001800B37F9: lea     rax, unk_180144780
 * 00000001800B3800: mov     qword ptr [rbp+9E40h+var_9030], rax
 * 00000001800B3807: lea     rax, unk_1801457D0
 * 00000001800B380E: mov     qword ptr [rbp+9E40h+var_9030+8], rax
 * 00000001800B3815: movups  xmm7, [rbp+9E40h+var_9030]
 * 00000001800B381C: mov     dword ptr [rbp+9E40h+var_6FC0], esi
 * 00000001800B3822: mov     dword ptr [rbp+9E40h+var_6FC0+4], esi
 * 00000001800B3828: movups  xmm6, [rbp+9E40h+var_6FC0]
 * 00000001800B382F: call    sub_1800A5ED4
 * 00000001800B3834: mov     r8, rax
 * 00000001800B3837: mov     r9d, r12d
 * 00000001800B383A: mov     edx, 14Ah
 * 00000001800B383F: lea     rcx, [rbp+9E40h+var_10F0]
 * 00000001800B3846: call    sub_1800737C8
 * 00000001800B384B: nop
 * 00000001800B384C: mov     r8, rax
 * 00000001800B384F: mov     rdx, r13
 * 00000001800B3852: lea     rcx, [rbp+9E40h+var_1110]
 * 00000001800B3859: call    sub_18001B678
 * 00000001800B385E: nop
 * 00000001800B385F: lea     r8, aVertex; "/Vertex"
 * 00000001800B3866: mov     rdx, rax
 * 00000001800B3869: lea     rcx, [rbp+9E40h+var_4C70]
 * 00000001800B3870: call    sub_18001B5A8
 * 00000001800B3875: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B387A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B387F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3884: mov     rcx, rax
 * 00000001800B3887: call    sub_18007386C
 * 00000001800B388C: nop
 * 00000001800B388D: lea     rcx, [rbp+9E40h+var_1110]
 * 00000001800B3894: call    sub_180011020
 * 00000001800B3899: nop
 * 00000001800B389A: lea     rcx, [rbp+9E40h+var_10F0]
 * 00000001800B38A1: call    sub_180011020
 * 00000001800B38A6: nop
 * 00000001800B38A7: lea     rcx, dword_1801CA5E4
 * 00000001800B38AE: call    _Init_thread_footer
 * 00000001800B38B3: mov     rax, [rdi+rbx*8]
 * 00000001800B38B7: mov     ecx, [r15+rax]
 * 00000001800B38BB: cmp     cs:dword_1801CA5E8, ecx
 * 00000001800B38C1: jle     loc_1800B399A
 * 00000001800B38C7: lea     rcx, dword_1801CA5E8
 * 00000001800B38CE: call    sub_18000CA40
 * 00000001800B38D3: cmp     cs:dword_1801CA5E8, r14d
 * 00000001800B38DA: jnz     loc_1800B399A
 * 00000001800B38E0: lea     rax, unk_180144780
 * 00000001800B38E7: mov     qword ptr [rbp+9E40h+var_9020], rax
 * 00000001800B38EE: lea     rax, unk_1801457D0
 * 00000001800B38F5: mov     qword ptr [rbp+9E40h+var_9020+8], rax
 * 00000001800B38FC: movups  xmm7, [rbp+9E40h+var_9020]
 * 00000001800B3903: mov     dword ptr [rbp+9E40h+var_6FA0], esi
 * 00000001800B3909: mov     dword ptr [rbp+9E40h+var_6FA0+4], esi
 * 00000001800B390F: movups  xmm6, [rbp+9E40h+var_6FA0]
 * 00000001800B3916: call    sub_1800A5ED4
 * 00000001800B391B: mov     r8, rax
 * 00000001800B391E: mov     r9d, r12d
 * 00000001800B3921: mov     edx, 150h
 * 00000001800B3926: lea     rcx, [rbp+9E40h+var_1090]
 * 00000001800B392D: call    sub_1800737C8
 * 00000001800B3932: nop
 * 00000001800B3933: mov     r8, rax
 * 00000001800B3936: mov     rdx, r13
 * 00000001800B3939: lea     rcx, [rbp+9E40h+var_10B0]
 * 00000001800B3940: call    sub_18001B678
 * 00000001800B3945: nop
 * 00000001800B3946: lea     r8, aVertex; "/Vertex"
 * 00000001800B394D: mov     rdx, rax
 * 00000001800B3950: lea     rcx, [rbp+9E40h+var_4C50]
 * 00000001800B3957: call    sub_18001B5A8
 * 00000001800B395C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3961: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3966: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B396B: mov     rcx, rax
 * 00000001800B396E: call    sub_18007386C
 * 00000001800B3973: nop
 * 00000001800B3974: lea     rcx, [rbp+9E40h+var_10B0]
 * 00000001800B397B: call    sub_180011020
 * 00000001800B3980: nop
 * 00000001800B3981: lea     rcx, [rbp+9E40h+var_1090]
 * 00000001800B3988: call    sub_180011020
 * 00000001800B398D: nop
 * 00000001800B398E: lea     rcx, dword_1801CA5E8
 * 00000001800B3995: call    _Init_thread_footer
 * 00000001800B399A: mov     rax, [rdi+rbx*8]
 * 00000001800B399E: mov     ecx, [r15+rax]
 * 00000001800B39A2: cmp     cs:dword_1801CA5EC, ecx
 * 00000001800B39A8: jle     loc_1800B3A81
 * 00000001800B39AE: lea     rcx, dword_1801CA5EC
 * 00000001800B39B5: call    sub_18000CA40
 * 00000001800B39BA: cmp     cs:dword_1801CA5EC, r14d
 * 00000001800B39C1: jnz     loc_1800B3A81
 * 00000001800B39C7: lea     rax, unk_180144780
 * 00000001800B39CE: mov     qword ptr [rbp+9E40h+var_9010], rax
 * 00000001800B39D5: lea     rax, unk_1801457D0
 * 00000001800B39DC: mov     qword ptr [rbp+9E40h+var_9010+8], rax
 * 00000001800B39E3: movups  xmm7, [rbp+9E40h+var_9010]
 * 00000001800B39EA: mov     dword ptr [rbp+9E40h+var_6F80], esi
 * 00000001800B39F0: mov     dword ptr [rbp+9E40h+var_6F80+4], esi
 * 00000001800B39F6: movups  xmm6, [rbp+9E40h+var_6F80]
 * 00000001800B39FD: call    sub_1800A5ED4
 * 00000001800B3A02: mov     r8, rax
 * 00000001800B3A05: mov     r9d, r12d
 * 00000001800B3A08: mov     edx, 152h
 * 00000001800B3A0D: lea     rcx, [rbp+9E40h+var_1030]
 * 00000001800B3A14: call    sub_1800737C8
 * 00000001800B3A19: nop
 * 00000001800B3A1A: mov     r8, rax
 * 00000001800B3A1D: mov     rdx, r13
 * 00000001800B3A20: lea     rcx, [rbp+9E40h+var_1050]
 * 00000001800B3A27: call    sub_18001B678
 * 00000001800B3A2C: nop
 * 00000001800B3A2D: lea     r8, aVertex; "/Vertex"
 * 00000001800B3A34: mov     rdx, rax
 * 00000001800B3A37: lea     rcx, [rbp+9E40h+var_4C30]
 * 00000001800B3A3E: call    sub_18001B5A8
 * 00000001800B3A43: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3A48: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3A4D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3A52: mov     rcx, rax
 * 00000001800B3A55: call    sub_18007386C
 * 00000001800B3A5A: nop
 * 00000001800B3A5B: lea     rcx, [rbp+9E40h+var_1050]
 * 00000001800B3A62: call    sub_180011020
 * 00000001800B3A67: nop
 * 00000001800B3A68: lea     rcx, [rbp+9E40h+var_1030]
 * 00000001800B3A6F: call    sub_180011020
 * 00000001800B3A74: nop
 * 00000001800B3A75: lea     rcx, dword_1801CA5EC
 * 00000001800B3A7C: call    _Init_thread_footer
 * 00000001800B3A81: mov     rax, [rdi+rbx*8]
 * 00000001800B3A85: mov     ecx, [r15+rax]
 * 00000001800B3A89: cmp     cs:dword_1801CA5F0, ecx
 * 00000001800B3A8F: jle     loc_1800B3B68
 * 00000001800B3A95: lea     rcx, dword_1801CA5F0
 * 00000001800B3A9C: call    sub_18000CA40
 * 00000001800B3AA1: cmp     cs:dword_1801CA5F0, r14d
 * 00000001800B3AA8: jnz     loc_1800B3B68
 * 00000001800B3AAE: lea     rax, unk_180144780
 * 00000001800B3AB5: mov     qword ptr [rbp+9E40h+var_9000], rax
 * 00000001800B3ABC: lea     rax, unk_1801457D0
 * 00000001800B3AC3: mov     qword ptr [rbp+9E40h+var_9000+8], rax
 * 00000001800B3ACA: movups  xmm7, [rbp+9E40h+var_9000]
 * 00000001800B3AD1: mov     dword ptr [rbp+9E40h+var_6F60], esi
 * 00000001800B3AD7: mov     dword ptr [rbp+9E40h+var_6F60+4], esi
 * 00000001800B3ADD: movups  xmm6, [rbp+9E40h+var_6F60]
 * 00000001800B3AE4: call    sub_1800A5ED4
 * 00000001800B3AE9: mov     r8, rax
 * 00000001800B3AEC: mov     r9d, r12d
 * 00000001800B3AEF: mov     edx, 158h
 * 00000001800B3AF4: lea     rcx, [rbp+9E40h+var_FD0]
 * 00000001800B3AFB: call    sub_1800737C8
 * 00000001800B3B00: nop
 * 00000001800B3B01: mov     r8, rax
 * 00000001800B3B04: mov     rdx, r13
 * 00000001800B3B07: lea     rcx, [rbp+9E40h+var_FF0]
 * 00000001800B3B0E: call    sub_18001B678
 * 00000001800B3B13: nop
 * 00000001800B3B14: lea     r8, aVertex; "/Vertex"
 * 00000001800B3B1B: mov     rdx, rax
 * 00000001800B3B1E: lea     rcx, [rbp+9E40h+var_4C10]
 * 00000001800B3B25: call    sub_18001B5A8
 * 00000001800B3B2A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3B2F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3B34: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3B39: mov     rcx, rax
 * 00000001800B3B3C: call    sub_18007386C
 * 00000001800B3B41: nop
 * 00000001800B3B42: lea     rcx, [rbp+9E40h+var_FF0]
 * 00000001800B3B49: call    sub_180011020
 * 00000001800B3B4E: nop
 * 00000001800B3B4F: lea     rcx, [rbp+9E40h+var_FD0]
 * 00000001800B3B56: call    sub_180011020
 * 00000001800B3B5B: nop
 * 00000001800B3B5C: lea     rcx, dword_1801CA5F0
 * 00000001800B3B63: call    _Init_thread_footer
 * 00000001800B3B68: mov     rax, [rdi+rbx*8]
 * 00000001800B3B6C: mov     ecx, [r15+rax]
 * 00000001800B3B70: cmp     cs:dword_1801CA5F4, ecx
 * 00000001800B3B76: jle     loc_1800B3C4F
 * 00000001800B3B7C: lea     rcx, dword_1801CA5F4
 * 00000001800B3B83: call    sub_18000CA40
 * 00000001800B3B88: cmp     cs:dword_1801CA5F4, r14d
 * 00000001800B3B8F: jnz     loc_1800B3C4F
 * 00000001800B3B95: lea     rax, unk_180144780
 * 00000001800B3B9C: mov     qword ptr [rbp+9E40h+var_8FF0], rax
 * 00000001800B3BA3: lea     rax, unk_1801457D0
 * 00000001800B3BAA: mov     qword ptr [rbp+9E40h+var_8FF0+8], rax
 * 00000001800B3BB1: movups  xmm7, [rbp+9E40h+var_8FF0]
 * 00000001800B3BB8: mov     dword ptr [rbp+9E40h+var_6F40], esi
 * 00000001800B3BBE: mov     dword ptr [rbp+9E40h+var_6F40+4], esi
 * 00000001800B3BC4: movups  xmm6, [rbp+9E40h+var_6F40]
 * 00000001800B3BCB: call    sub_1800A5ED4
 * 00000001800B3BD0: mov     r8, rax
 * 00000001800B3BD3: mov     r9d, r12d
 * 00000001800B3BD6: mov     edx, 15Ah
 * 00000001800B3BDB: lea     rcx, [rbp+9E40h+var_F70]
 * 00000001800B3BE2: call    sub_1800737C8
 * 00000001800B3BE7: nop
 * 00000001800B3BE8: mov     r8, rax
 * 00000001800B3BEB: mov     rdx, r13
 * 00000001800B3BEE: lea     rcx, [rbp+9E40h+var_F90]
 * 00000001800B3BF5: call    sub_18001B678
 * 00000001800B3BFA: nop
 * 00000001800B3BFB: lea     r8, aVertex; "/Vertex"
 * 00000001800B3C02: mov     rdx, rax
 * 00000001800B3C05: lea     rcx, [rbp+9E40h+var_4BF0]
 * 00000001800B3C0C: call    sub_18001B5A8
 * 00000001800B3C11: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3C16: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3C1B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3C20: mov     rcx, rax
 * 00000001800B3C23: call    sub_18007386C
 * 00000001800B3C28: nop
 * 00000001800B3C29: lea     rcx, [rbp+9E40h+var_F90]
 * 00000001800B3C30: call    sub_180011020
 * 00000001800B3C35: nop
 * 00000001800B3C36: lea     rcx, [rbp+9E40h+var_F70]
 * 00000001800B3C3D: call    sub_180011020
 * 00000001800B3C42: nop
 * 00000001800B3C43: lea     rcx, dword_1801CA5F4
 * 00000001800B3C4A: call    _Init_thread_footer
 * 00000001800B3C4F: mov     rax, [rdi+rbx*8]
 * 00000001800B3C53: mov     ecx, [r15+rax]
 * 00000001800B3C57: cmp     cs:dword_1801CA5F8, ecx
 * 00000001800B3C5D: jle     loc_1800B3D36
 * 00000001800B3C63: lea     rcx, dword_1801CA5F8
 * 00000001800B3C6A: call    sub_18000CA40
 * 00000001800B3C6F: cmp     cs:dword_1801CA5F8, r14d
 * 00000001800B3C76: jnz     loc_1800B3D36
 * 00000001800B3C7C: lea     rax, unk_1801421F0
 * 00000001800B3C83: mov     qword ptr [rbp+9E40h+var_8FE0], rax
 * 00000001800B3C8A: lea     rax, unk_180143C40
 * 00000001800B3C91: mov     qword ptr [rbp+9E40h+var_8FE0+8], rax
 * 00000001800B3C98: movups  xmm7, [rbp+9E40h+var_8FE0]
 * 00000001800B3C9F: mov     dword ptr [rbp+9E40h+var_6F20], esi
 * 00000001800B3CA5: mov     dword ptr [rbp+9E40h+var_6F20+4], esi
 * 00000001800B3CAB: movups  xmm6, [rbp+9E40h+var_6F20]
 * 00000001800B3CB2: call    sub_1800A5ED4
 * 00000001800B3CB7: mov     r8, rax
 * 00000001800B3CBA: mov     r9d, r12d
 * 00000001800B3CBD: mov     edx, 160h
 * 00000001800B3CC2: lea     rcx, [rbp+9E40h+var_F10]
 * 00000001800B3CC9: call    sub_1800737C8
 * 00000001800B3CCE: nop
 * 00000001800B3CCF: mov     r8, rax
 * 00000001800B3CD2: mov     rdx, r13
 * 00000001800B3CD5: lea     rcx, [rbp+9E40h+var_F30]
 * 00000001800B3CDC: call    sub_18001B678
 * 00000001800B3CE1: nop
 * 00000001800B3CE2: lea     r8, aVertex; "/Vertex"
 * 00000001800B3CE9: mov     rdx, rax
 * 00000001800B3CEC: lea     rcx, [rbp+9E40h+var_4BD0]
 * 00000001800B3CF3: call    sub_18001B5A8
 * 00000001800B3CF8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3CFD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3D02: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3D07: mov     rcx, rax
 * 00000001800B3D0A: call    sub_18007386C
 * 00000001800B3D0F: nop
 * 00000001800B3D10: lea     rcx, [rbp+9E40h+var_F30]
 * 00000001800B3D17: call    sub_180011020
 * 00000001800B3D1C: nop
 * 00000001800B3D1D: lea     rcx, [rbp+9E40h+var_F10]
 * 00000001800B3D24: call    sub_180011020
 * 00000001800B3D29: nop
 * 00000001800B3D2A: lea     rcx, dword_1801CA5F8
 * 00000001800B3D31: call    _Init_thread_footer
 * 00000001800B3D36: mov     rax, [rdi+rbx*8]
 * 00000001800B3D3A: mov     ecx, [r15+rax]
 * 00000001800B3D3E: cmp     cs:dword_1801CA5FC, ecx
 * 00000001800B3D44: jle     loc_1800B3E1D
 * 00000001800B3D4A: lea     rcx, dword_1801CA5FC
 * 00000001800B3D51: call    sub_18000CA40
 * 00000001800B3D56: cmp     cs:dword_1801CA5FC, r14d
 * 00000001800B3D5D: jnz     loc_1800B3E1D
 * 00000001800B3D63: lea     rax, unk_1801421F0
 * 00000001800B3D6A: mov     qword ptr [rbp+9E40h+var_8FD0], rax
 * 00000001800B3D71: lea     rax, unk_180143C40
 * 00000001800B3D78: mov     qword ptr [rbp+9E40h+var_8FD0+8], rax
 * 00000001800B3D7F: movups  xmm7, [rbp+9E40h+var_8FD0]
 * 00000001800B3D86: mov     dword ptr [rbp+9E40h+var_6F00], esi
 * 00000001800B3D8C: mov     dword ptr [rbp+9E40h+var_6F00+4], esi
 * 00000001800B3D92: movups  xmm6, [rbp+9E40h+var_6F00]
 * 00000001800B3D99: call    sub_1800A5ED4
 * 00000001800B3D9E: mov     r8, rax
 * 00000001800B3DA1: mov     r9d, r12d
 * 00000001800B3DA4: mov     edx, 162h
 * 00000001800B3DA9: lea     rcx, [rbp+9E40h+var_EB0]
 * 00000001800B3DB0: call    sub_1800737C8
 * 00000001800B3DB5: nop
 * 00000001800B3DB6: mov     r8, rax
 * 00000001800B3DB9: mov     rdx, r13
 * 00000001800B3DBC: lea     rcx, [rbp+9E40h+var_ED0]
 * 00000001800B3DC3: call    sub_18001B678
 * 00000001800B3DC8: nop
 * 00000001800B3DC9: lea     r8, aVertex; "/Vertex"
 * 00000001800B3DD0: mov     rdx, rax
 * 00000001800B3DD3: lea     rcx, [rbp+9E40h+var_4BB0]
 * 00000001800B3DDA: call    sub_18001B5A8
 * 00000001800B3DDF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3DE4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3DE9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3DEE: mov     rcx, rax
 * 00000001800B3DF1: call    sub_18007386C
 * 00000001800B3DF6: nop
 * 00000001800B3DF7: lea     rcx, [rbp+9E40h+var_ED0]
 * 00000001800B3DFE: call    sub_180011020
 * 00000001800B3E03: nop
 * 00000001800B3E04: lea     rcx, [rbp+9E40h+var_EB0]
 * 00000001800B3E0B: call    sub_180011020
 * 00000001800B3E10: nop
 * 00000001800B3E11: lea     rcx, dword_1801CA5FC
 * 00000001800B3E18: call    _Init_thread_footer
 * 00000001800B3E1D: mov     rax, [rdi+rbx*8]
 * 00000001800B3E21: mov     ecx, [r15+rax]
 * 00000001800B3E25: cmp     cs:dword_1801CA600, ecx
 * 00000001800B3E2B: jle     loc_1800B3F04
 * 00000001800B3E31: lea     rcx, dword_1801CA600
 * 00000001800B3E38: call    sub_18000CA40
 * 00000001800B3E3D: cmp     cs:dword_1801CA600, r14d
 * 00000001800B3E44: jnz     loc_1800B3F04
 * 00000001800B3E4A: lea     rax, unk_1801421F0
 * 00000001800B3E51: mov     qword ptr [rbp+9E40h+var_8FC0], rax
 * 00000001800B3E58: lea     rax, unk_180143C40
 * 00000001800B3E5F: mov     qword ptr [rbp+9E40h+var_8FC0+8], rax
 * 00000001800B3E66: movups  xmm7, [rbp+9E40h+var_8FC0]
 * 00000001800B3E6D: mov     dword ptr [rbp+9E40h+var_6EE0], esi
 * 00000001800B3E73: mov     dword ptr [rbp+9E40h+var_6EE0+4], esi
 * 00000001800B3E79: movups  xmm6, [rbp+9E40h+var_6EE0]
 * 00000001800B3E80: call    sub_1800A5ED4
 * 00000001800B3E85: mov     r8, rax
 * 00000001800B3E88: mov     r9d, r12d
 * 00000001800B3E8B: mov     edx, 168h
 * 00000001800B3E90: lea     rcx, [rbp+9E40h+var_E50]
 * 00000001800B3E97: call    sub_1800737C8
 * 00000001800B3E9C: nop
 * 00000001800B3E9D: mov     r8, rax
 * 00000001800B3EA0: mov     rdx, r13
 * 00000001800B3EA3: lea     rcx, [rbp+9E40h+var_E70]
 * 00000001800B3EAA: call    sub_18001B678
 * 00000001800B3EAF: nop
 * 00000001800B3EB0: lea     r8, aVertex; "/Vertex"
 * 00000001800B3EB7: mov     rdx, rax
 * 00000001800B3EBA: lea     rcx, [rbp+9E40h+var_4B90]
 * 00000001800B3EC1: call    sub_18001B5A8
 * 00000001800B3EC6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3ECB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3ED0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3ED5: mov     rcx, rax
 * 00000001800B3ED8: call    sub_18007386C
 * 00000001800B3EDD: nop
 * 00000001800B3EDE: lea     rcx, [rbp+9E40h+var_E70]
 * 00000001800B3EE5: call    sub_180011020
 * 00000001800B3EEA: nop
 * 00000001800B3EEB: lea     rcx, [rbp+9E40h+var_E50]
 * 00000001800B3EF2: call    sub_180011020
 * 00000001800B3EF7: nop
 * 00000001800B3EF8: lea     rcx, dword_1801CA600
 * 00000001800B3EFF: call    _Init_thread_footer
 * 00000001800B3F04: mov     rax, [rdi+rbx*8]
 * 00000001800B3F08: mov     ecx, [r15+rax]
 * 00000001800B3F0C: cmp     cs:dword_1801CA604, ecx
 * 00000001800B3F12: jle     loc_1800B3FEB
 * 00000001800B3F18: lea     rcx, dword_1801CA604
 * 00000001800B3F1F: call    sub_18000CA40
 * 00000001800B3F24: cmp     cs:dword_1801CA604, r14d
 * 00000001800B3F2B: jnz     loc_1800B3FEB
 * 00000001800B3F31: lea     rax, unk_1801421F0
 * 00000001800B3F38: mov     qword ptr [rbp+9E40h+var_8FB0], rax
 * 00000001800B3F3F: lea     rax, unk_180143C40
 * 00000001800B3F46: mov     qword ptr [rbp+9E40h+var_8FB0+8], rax
 * 00000001800B3F4D: movups  xmm7, [rbp+9E40h+var_8FB0]
 * 00000001800B3F54: mov     dword ptr [rbp+9E40h+var_6EC0], esi
 * 00000001800B3F5A: mov     dword ptr [rbp+9E40h+var_6EC0+4], esi
 * 00000001800B3F60: movups  xmm6, [rbp+9E40h+var_6EC0]
 * 00000001800B3F67: call    sub_1800A5ED4
 * 00000001800B3F6C: mov     r8, rax
 * 00000001800B3F6F: mov     r9d, r12d
 * 00000001800B3F72: mov     edx, 16Ah
 * 00000001800B3F77: lea     rcx, [rbp+9E40h+var_DF0]
 * 00000001800B3F7E: call    sub_1800737C8
 * 00000001800B3F83: nop
 * 00000001800B3F84: mov     r8, rax
 * 00000001800B3F87: mov     rdx, r13
 * 00000001800B3F8A: lea     rcx, [rbp+9E40h+var_E10]
 * 00000001800B3F91: call    sub_18001B678
 * 00000001800B3F96: nop
 * 00000001800B3F97: lea     r8, aVertex; "/Vertex"
 * 00000001800B3F9E: mov     rdx, rax
 * 00000001800B3FA1: lea     rcx, [rbp+9E40h+var_4B70]
 * 00000001800B3FA8: call    sub_18001B5A8
 * 00000001800B3FAD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3FB2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3FB7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3FBC: mov     rcx, rax
 * 00000001800B3FBF: call    sub_18007386C
 * 00000001800B3FC4: nop
 * 00000001800B3FC5: lea     rcx, [rbp+9E40h+var_E10]
 * 00000001800B3FCC: call    sub_180011020
 * 00000001800B3FD1: nop
 * 00000001800B3FD2: lea     rcx, [rbp+9E40h+var_DF0]
 * 00000001800B3FD9: call    sub_180011020
 * 00000001800B3FDE: nop
 * 00000001800B3FDF: lea     rcx, dword_1801CA604
 * 00000001800B3FE6: call    _Init_thread_footer
 * 00000001800B3FEB: mov     rax, [rdi+rbx*8]
 * 00000001800B3FEF: mov     ecx, [r15+rax]
 * 00000001800B3FF3: cmp     cs:dword_1801CA608, ecx
 * 00000001800B3FF9: jle     loc_1800B40D2
 * 00000001800B3FFF: lea     rcx, dword_1801CA608
 * 00000001800B4006: call    sub_18000CA40
 * 00000001800B400B: cmp     cs:dword_1801CA608, r14d
 * 00000001800B4012: jnz     loc_1800B40D2
 * 00000001800B4018: lea     rax, unk_1801421F0
 * 00000001800B401F: mov     qword ptr [rbp+9E40h+var_8FA0], rax
 * 00000001800B4026: lea     rax, unk_180143C40
 * 00000001800B402D: mov     qword ptr [rbp+9E40h+var_8FA0+8], rax
 * 00000001800B4034: movups  xmm7, [rbp+9E40h+var_8FA0]
 * 00000001800B403B: mov     dword ptr [rbp+9E40h+var_6EA0], esi
 * 00000001800B4041: mov     dword ptr [rbp+9E40h+var_6EA0+4], esi
 * 00000001800B4047: movups  xmm6, [rbp+9E40h+var_6EA0]
 * 00000001800B404E: call    sub_1800A5ED4
 * 00000001800B4053: mov     r8, rax
 * 00000001800B4056: mov     r9d, r12d
 * 00000001800B4059: mov     edx, 170h
 * 00000001800B405E: lea     rcx, [rbp+9E40h+var_D90]
 * 00000001800B4065: call    sub_1800737C8
 * 00000001800B406A: nop
 * 00000001800B406B: mov     r8, rax
 * 00000001800B406E: mov     rdx, r13
 * 00000001800B4071: lea     rcx, [rbp+9E40h+var_DB0]
 * 00000001800B4078: call    sub_18001B678
 * 00000001800B407D: nop
 * 00000001800B407E: lea     r8, aVertex; "/Vertex"
 * 00000001800B4085: mov     rdx, rax
 * 00000001800B4088: lea     rcx, [rbp+9E40h+var_4B50]
 * 00000001800B408F: call    sub_18001B5A8
 * 00000001800B4094: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4099: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B409E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B40A3: mov     rcx, rax
 * 00000001800B40A6: call    sub_18007386C
 * 00000001800B40AB: nop
 * 00000001800B40AC: lea     rcx, [rbp+9E40h+var_DB0]
 * 00000001800B40B3: call    sub_180011020
 * 00000001800B40B8: nop
 * 00000001800B40B9: lea     rcx, [rbp+9E40h+var_D90]
 * 00000001800B40C0: call    sub_180011020
 * 00000001800B40C5: nop
 * 00000001800B40C6: lea     rcx, dword_1801CA608
 * 00000001800B40CD: call    _Init_thread_footer
 * 00000001800B40D2: mov     rax, [rdi+rbx*8]
 * 00000001800B40D6: mov     ecx, [r15+rax]
 * 00000001800B40DA: cmp     cs:dword_1801CA60C, ecx
 * 00000001800B40E0: jle     loc_1800B41B9
 * 00000001800B40E6: lea     rcx, dword_1801CA60C
 * 00000001800B40ED: call    sub_18000CA40
 * 00000001800B40F2: cmp     cs:dword_1801CA60C, r14d
 * 00000001800B40F9: jnz     loc_1800B41B9
 * 00000001800B40FF: lea     rax, unk_1801421F0
 * 00000001800B4106: mov     qword ptr [rbp+9E40h+var_8D60], rax
 * 00000001800B410D: lea     rax, unk_180143C40
 * 00000001800B4114: mov     qword ptr [rbp+9E40h+var_8D60+8], rax
 * 00000001800B411B: movups  xmm7, [rbp+9E40h+var_8D60]
 * 00000001800B4122: mov     dword ptr [rbp+9E40h+var_6E80], esi
 * 00000001800B4128: mov     dword ptr [rbp+9E40h+var_6E80+4], esi
 * 00000001800B412E: movups  xmm6, [rbp+9E40h+var_6E80]
 * 00000001800B4135: call    sub_1800A5ED4
 * 00000001800B413A: mov     r8, rax
 * 00000001800B413D: mov     r9d, r12d
 * 00000001800B4140: mov     edx, 172h
 * 00000001800B4145: lea     rcx, [rbp+9E40h+var_D30]
 * 00000001800B414C: call    sub_1800737C8
 * 00000001800B4151: nop
 * 00000001800B4152: mov     r8, rax
 * 00000001800B4155: mov     rdx, r13
 * 00000001800B4158: lea     rcx, [rbp+9E40h+var_D50]
 * 00000001800B415F: call    sub_18001B678
 * 00000001800B4164: nop
 * 00000001800B4165: lea     r8, aVertex; "/Vertex"
 * 00000001800B416C: mov     rdx, rax
 * 00000001800B416F: lea     rcx, [rbp+9E40h+var_4B30]
 * 00000001800B4176: call    sub_18001B5A8
 * 00000001800B417B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4180: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4185: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B418A: mov     rcx, rax
 * 00000001800B418D: call    sub_18007386C
 * 00000001800B4192: nop
 * 00000001800B4193: lea     rcx, [rbp+9E40h+var_D50]
 * 00000001800B419A: call    sub_180011020
 * 00000001800B419F: nop
 * 00000001800B41A0: lea     rcx, [rbp+9E40h+var_D30]
 * 00000001800B41A7: call    sub_180011020
 * 00000001800B41AC: nop
 * 00000001800B41AD: lea     rcx, dword_1801CA60C
 * 00000001800B41B4: call    _Init_thread_footer
 * 00000001800B41B9: mov     rax, [rdi+rbx*8]
 * 00000001800B41BD: mov     ecx, [r15+rax]
 * 00000001800B41C1: cmp     cs:dword_1801CA610, ecx
 * 00000001800B41C7: jle     loc_1800B42A0
 * 00000001800B41CD: lea     rcx, dword_1801CA610
 * 00000001800B41D4: call    sub_18000CA40
 * 00000001800B41D9: cmp     cs:dword_1801CA610, r14d
 * 00000001800B41E0: jnz     loc_1800B42A0
 * 00000001800B41E6: lea     rax, unk_1801421F0
 * 00000001800B41ED: mov     qword ptr [rbp+9E40h+var_8F80], rax
 * 00000001800B41F4: lea     rax, unk_180143C40
 * 00000001800B41FB: mov     qword ptr [rbp+9E40h+var_8F80+8], rax
 * 00000001800B4202: movups  xmm7, [rbp+9E40h+var_8F80]
 * 00000001800B4209: mov     dword ptr [rbp+9E40h+var_6E60], esi
 * 00000001800B420F: mov     dword ptr [rbp+9E40h+var_6E60+4], esi
 * 00000001800B4215: movups  xmm6, [rbp+9E40h+var_6E60]
 * 00000001800B421C: call    sub_1800A5ED4
 * 00000001800B4221: mov     r8, rax
 * 00000001800B4224: mov     r9d, r12d
 * 00000001800B4227: mov     edx, 178h
 * 00000001800B422C: lea     rcx, [rbp+9E40h+var_CD0]
 * 00000001800B4233: call    sub_1800737C8
 * 00000001800B4238: nop
 * 00000001800B4239: mov     r8, rax
 * 00000001800B423C: mov     rdx, r13
 * 00000001800B423F: lea     rcx, [rbp+9E40h+var_CF0]
 * 00000001800B4246: call    sub_18001B678
 * 00000001800B424B: nop
 * 00000001800B424C: lea     r8, aVertex; "/Vertex"
 * 00000001800B4253: mov     rdx, rax
 * 00000001800B4256: lea     rcx, [rbp+9E40h+var_4B10]
 * 00000001800B425D: call    sub_18001B5A8
 * 00000001800B4262: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4267: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B426C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4271: mov     rcx, rax
 * 00000001800B4274: call    sub_18007386C
 * 00000001800B4279: nop
 * 00000001800B427A: lea     rcx, [rbp+9E40h+var_CF0]
 * 00000001800B4281: call    sub_180011020
 * 00000001800B4286: nop
 * 00000001800B4287: lea     rcx, [rbp+9E40h+var_CD0]
 * 00000001800B428E: call    sub_180011020
 * 00000001800B4293: nop
 * 00000001800B4294: lea     rcx, dword_1801CA610
 * 00000001800B429B: call    _Init_thread_footer
 * 00000001800B42A0: mov     rax, [rdi+rbx*8]
 * 00000001800B42A4: mov     ecx, [r15+rax]
 * 00000001800B42A8: cmp     cs:dword_1801CA614, ecx
 * 00000001800B42AE: jle     loc_1800B4387
 * 00000001800B42B4: lea     rcx, dword_1801CA614
 * 00000001800B42BB: call    sub_18000CA40
 * 00000001800B42C0: cmp     cs:dword_1801CA614, r14d
 * 00000001800B42C7: jnz     loc_1800B4387
 * 00000001800B42CD: lea     rax, unk_1801421F0
 * 00000001800B42D4: mov     qword ptr [rbp+9E40h+var_8F70], rax
 * 00000001800B42DB: lea     rax, unk_180143C40
 * 00000001800B42E2: mov     qword ptr [rbp+9E40h+var_8F70+8], rax
 * 00000001800B42E9: movups  xmm7, [rbp+9E40h+var_8F70]
 * 00000001800B42F0: mov     dword ptr [rbp+9E40h+var_6E40], esi
 * 00000001800B42F6: mov     dword ptr [rbp+9E40h+var_6E40+4], esi
 * 00000001800B42FC: movups  xmm6, [rbp+9E40h+var_6E40]
 * 00000001800B4303: call    sub_1800A5ED4
 * 00000001800B4308: mov     r8, rax
 * 00000001800B430B: mov     r9d, r12d
 * 00000001800B430E: mov     edx, 17Ah
 * 00000001800B4313: lea     rcx, [rbp+9E40h+var_C70]
 * 00000001800B431A: call    sub_1800737C8
 * 00000001800B431F: nop
 * 00000001800B4320: mov     r8, rax
 * 00000001800B4323: mov     rdx, r13
 * 00000001800B4326: lea     rcx, [rbp+9E40h+var_C90]
 * 00000001800B432D: call    sub_18001B678
 * 00000001800B4332: nop
 * 00000001800B4333: lea     r8, aVertex; "/Vertex"
 * 00000001800B433A: mov     rdx, rax
 * 00000001800B433D: lea     rcx, [rbp+9E40h+var_4AF0]
 * 00000001800B4344: call    sub_18001B5A8
 * 00000001800B4349: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B434E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4353: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4358: mov     rcx, rax
 * 00000001800B435B: call    sub_18007386C
 * 00000001800B4360: nop
 * 00000001800B4361: lea     rcx, [rbp+9E40h+var_C90]
 * 00000001800B4368: call    sub_180011020
 * 00000001800B436D: nop
 * 00000001800B436E: lea     rcx, [rbp+9E40h+var_C70]
 * 00000001800B4375: call    sub_180011020
 * 00000001800B437A: nop
 * 00000001800B437B: lea     rcx, dword_1801CA614
 * 00000001800B4382: call    _Init_thread_footer
 * 00000001800B4387: mov     rax, [rdi+rbx*8]
 * 00000001800B438B: mov     ecx, [r15+rax]
 * 00000001800B438F: cmp     cs:dword_1801CA618, ecx
 * 00000001800B4395: jle     loc_1800B446E
 * 00000001800B439B: lea     rcx, dword_1801CA618
 * 00000001800B43A2: call    sub_18000CA40
 * 00000001800B43A7: cmp     cs:dword_1801CA618, r14d
 * 00000001800B43AE: jnz     loc_1800B446E
 * 00000001800B43B4: lea     rax, unk_180144780
 * 00000001800B43BB: mov     qword ptr [rbp+9E40h+var_8F60], rax
 * 00000001800B43C2: lea     rax, unk_1801457D0
 * 00000001800B43C9: mov     qword ptr [rbp+9E40h+var_8F60+8], rax
 * 00000001800B43D0: movups  xmm7, [rbp+9E40h+var_8F60]
 * 00000001800B43D7: mov     dword ptr [rbp+9E40h+var_6E20], esi
 * 00000001800B43DD: mov     dword ptr [rbp+9E40h+var_6E20+4], esi
 * 00000001800B43E3: movups  xmm6, [rbp+9E40h+var_6E20]
 * 00000001800B43EA: call    sub_1800A5ED4
 * 00000001800B43EF: mov     r8, rax
 * 00000001800B43F2: mov     r9d, r12d
 * 00000001800B43F5: mov     edx, 180h
 * 00000001800B43FA: lea     rcx, [rbp+9E40h+var_C10]
 * 00000001800B4401: call    sub_1800737C8
 * 00000001800B4406: nop
 * 00000001800B4407: mov     r8, rax
 * 00000001800B440A: mov     rdx, r13
 * 00000001800B440D: lea     rcx, [rbp+9E40h+var_C30]
 * 00000001800B4414: call    sub_18001B678
 * 00000001800B4419: nop
 * 00000001800B441A: lea     r8, aVertex; "/Vertex"
 * 00000001800B4421: mov     rdx, rax
 * 00000001800B4424: lea     rcx, [rbp+9E40h+var_4AD0]
 * 00000001800B442B: call    sub_18001B5A8
 * 00000001800B4430: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4435: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B443A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B443F: mov     rcx, rax
 * 00000001800B4442: call    sub_18007386C
 * 00000001800B4447: nop
 * 00000001800B4448: lea     rcx, [rbp+9E40h+var_C30]
 * 00000001800B444F: call    sub_180011020
 * 00000001800B4454: nop
 * 00000001800B4455: lea     rcx, [rbp+9E40h+var_C10]
 * 00000001800B445C: call    sub_180011020
 * 00000001800B4461: nop
 * 00000001800B4462: lea     rcx, dword_1801CA618
 * 00000001800B4469: call    _Init_thread_footer
 * 00000001800B446E: mov     rax, [rdi+rbx*8]
 * 00000001800B4472: mov     ecx, [r15+rax]
 * 00000001800B4476: cmp     cs:dword_1801CA61C, ecx
 * 00000001800B447C: jle     loc_1800B4555
 * 00000001800B4482: lea     rcx, dword_1801CA61C
 * 00000001800B4489: call    sub_18000CA40
 * 00000001800B448E: cmp     cs:dword_1801CA61C, r14d
 * 00000001800B4495: jnz     loc_1800B4555
 * 00000001800B449B: lea     rax, unk_180144780
 * 00000001800B44A2: mov     qword ptr [rbp+9E40h+var_8F50], rax
 * 00000001800B44A9: lea     rax, unk_1801457D0
 * 00000001800B44B0: mov     qword ptr [rbp+9E40h+var_8F50+8], rax
 * 00000001800B44B7: movups  xmm7, [rbp+9E40h+var_8F50]
 * 00000001800B44BE: mov     dword ptr [rbp+9E40h+var_6E00], esi
 * 00000001800B44C4: mov     dword ptr [rbp+9E40h+var_6E00+4], esi
 * 00000001800B44CA: movups  xmm6, [rbp+9E40h+var_6E00]
 * 00000001800B44D1: call    sub_1800A5ED4
 * 00000001800B44D6: mov     r8, rax
 * 00000001800B44D9: mov     r9d, r12d
 * 00000001800B44DC: mov     edx, 182h
 * 00000001800B44E1: lea     rcx, [rbp+9E40h+var_BB0]
 * 00000001800B44E8: call    sub_1800737C8
 * 00000001800B44ED: nop
 * 00000001800B44EE: mov     r8, rax
 * 00000001800B44F1: mov     rdx, r13
 * 00000001800B44F4: lea     rcx, [rbp+9E40h+var_BD0]
 * 00000001800B44FB: call    sub_18001B678
 * 00000001800B4500: nop
 * 00000001800B4501: lea     r8, aVertex; "/Vertex"
 * 00000001800B4508: mov     rdx, rax
 * 00000001800B450B: lea     rcx, [rbp+9E40h+var_4AB0]
 * 00000001800B4512: call    sub_18001B5A8
 * 00000001800B4517: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B451C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4521: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4526: mov     rcx, rax
 * 00000001800B4529: call    sub_18007386C
 * 00000001800B452E: nop
 * 00000001800B452F: lea     rcx, [rbp+9E40h+var_BD0]
 * 00000001800B4536: call    sub_180011020
 * 00000001800B453B: nop
 * 00000001800B453C: lea     rcx, [rbp+9E40h+var_BB0]
 * 00000001800B4543: call    sub_180011020
 * 00000001800B4548: nop
 * 00000001800B4549: lea     rcx, dword_1801CA61C
 * 00000001800B4550: call    _Init_thread_footer
 * 00000001800B4555: mov     rax, [rdi+rbx*8]
 * 00000001800B4559: mov     ecx, [r15+rax]
 * 00000001800B455D: cmp     cs:dword_1801CA620, ecx
 * 00000001800B4563: jle     loc_1800B463C
 * 00000001800B4569: lea     rcx, dword_1801CA620
 * 00000001800B4570: call    sub_18000CA40
 * 00000001800B4575: cmp     cs:dword_1801CA620, r14d
 * 00000001800B457C: jnz     loc_1800B463C
 * 00000001800B4582: lea     rax, unk_180144780
 * 00000001800B4589: mov     qword ptr [rbp+9E40h+var_8F40], rax
 * 00000001800B4590: lea     rax, unk_1801457D0
 * 00000001800B4597: mov     qword ptr [rbp+9E40h+var_8F40+8], rax
 * 00000001800B459E: movups  xmm7, [rbp+9E40h+var_8F40]
 * 00000001800B45A5: mov     dword ptr [rbp+9E40h+var_6DE0], esi
 * 00000001800B45AB: mov     dword ptr [rbp+9E40h+var_6DE0+4], esi
 * 00000001800B45B1: movups  xmm6, [rbp+9E40h+var_6DE0]
 * 00000001800B45B8: call    sub_1800A5ED4
 * 00000001800B45BD: mov     r8, rax
 * 00000001800B45C0: mov     r9d, r12d
 * 00000001800B45C3: mov     edx, 188h
 * 00000001800B45C8: lea     rcx, [rbp+9E40h+var_B50]
 * 00000001800B45CF: call    sub_1800737C8
 * 00000001800B45D4: nop
 * 00000001800B45D5: mov     r8, rax
 * 00000001800B45D8: mov     rdx, r13
 * 00000001800B45DB: lea     rcx, [rbp+9E40h+var_B70]
 * 00000001800B45E2: call    sub_18001B678
 * 00000001800B45E7: nop
 * 00000001800B45E8: lea     r8, aVertex; "/Vertex"
 * 00000001800B45EF: mov     rdx, rax
 * 00000001800B45F2: lea     rcx, [rbp+9E40h+var_4A90]
 * 00000001800B45F9: call    sub_18001B5A8
 * 00000001800B45FE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4603: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4608: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B460D: mov     rcx, rax
 * 00000001800B4610: call    sub_18007386C
 * 00000001800B4615: nop
 * 00000001800B4616: lea     rcx, [rbp+9E40h+var_B70]
 * 00000001800B461D: call    sub_180011020
 * 00000001800B4622: nop
 * 00000001800B4623: lea     rcx, [rbp+9E40h+var_B50]
 * 00000001800B462A: call    sub_180011020
 * 00000001800B462F: nop
 * 00000001800B4630: lea     rcx, dword_1801CA620
 * 00000001800B4637: call    _Init_thread_footer
 * 00000001800B463C: mov     rax, [rdi+rbx*8]
 * 00000001800B4640: mov     ecx, [r15+rax]
 * 00000001800B4644: cmp     cs:dword_1801CA624, ecx
 * 00000001800B464A: jle     loc_1800B4723
 * 00000001800B4650: lea     rcx, dword_1801CA624
 * 00000001800B4657: call    sub_18000CA40
 * 00000001800B465C: cmp     cs:dword_1801CA624, r14d
 * 00000001800B4663: jnz     loc_1800B4723
 * 00000001800B4669: lea     rax, unk_180144780
 * 00000001800B4670: mov     qword ptr [rbp+9E40h+var_8F30], rax
 * 00000001800B4677: lea     rax, unk_1801457D0
 * 00000001800B467E: mov     qword ptr [rbp+9E40h+var_8F30+8], rax
 * 00000001800B4685: movups  xmm7, [rbp+9E40h+var_8F30]
 * 00000001800B468C: mov     dword ptr [rbp+9E40h+var_6DC0], esi
 * 00000001800B4692: mov     dword ptr [rbp+9E40h+var_6DC0+4], esi
 * 00000001800B4698: movups  xmm6, [rbp+9E40h+var_6DC0]
 * 00000001800B469F: call    sub_1800A5ED4
 * 00000001800B46A4: mov     r8, rax
 * 00000001800B46A7: mov     r9d, r12d
 * 00000001800B46AA: mov     edx, 18Ah
 * 00000001800B46AF: lea     rcx, [rbp+9E40h+var_AF0]
 * 00000001800B46B6: call    sub_1800737C8
 * 00000001800B46BB: nop
 * 00000001800B46BC: mov     r8, rax
 * 00000001800B46BF: mov     rdx, r13
 * 00000001800B46C2: lea     rcx, [rbp+9E40h+var_B10]
 * 00000001800B46C9: call    sub_18001B678
 * 00000001800B46CE: nop
 * 00000001800B46CF: lea     r8, aVertex; "/Vertex"
 * 00000001800B46D6: mov     rdx, rax
 * 00000001800B46D9: lea     rcx, [rbp+9E40h+var_4A70]
 * 00000001800B46E0: call    sub_18001B5A8
 * 00000001800B46E5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B46EA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B46EF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B46F4: mov     rcx, rax
 * 00000001800B46F7: call    sub_18007386C
 * 00000001800B46FC: nop
 * 00000001800B46FD: lea     rcx, [rbp+9E40h+var_B10]
 * 00000001800B4704: call    sub_180011020
 * 00000001800B4709: nop
 * 00000001800B470A: lea     rcx, [rbp+9E40h+var_AF0]
 * 00000001800B4711: call    sub_180011020
 * 00000001800B4716: nop
 * 00000001800B4717: lea     rcx, dword_1801CA624
 * 00000001800B471E: call    _Init_thread_footer
 * 00000001800B4723: mov     rax, [rdi+rbx*8]
 * 00000001800B4727: mov     ecx, [r15+rax]
 * 00000001800B472B: cmp     cs:dword_1801CA628, ecx
 * 00000001800B4731: jle     loc_1800B480A
 * 00000001800B4737: lea     rcx, dword_1801CA628
 * 00000001800B473E: call    sub_18000CA40
 * 00000001800B4743: cmp     cs:dword_1801CA628, r14d
 * 00000001800B474A: jnz     loc_1800B480A
 * 00000001800B4750: lea     rax, unk_180144780
 * 00000001800B4757: mov     qword ptr [rbp+9E40h+var_8F20], rax
 * 00000001800B475E: lea     rax, unk_1801457D0
 * 00000001800B4765: mov     qword ptr [rbp+9E40h+var_8F20+8], rax
 * 00000001800B476C: movups  xmm7, [rbp+9E40h+var_8F20]
 * 00000001800B4773: mov     dword ptr [rbp+9E40h+var_6DA0], esi
 * 00000001800B4779: mov     dword ptr [rbp+9E40h+var_6DA0+4], esi
 * 00000001800B477F: movups  xmm6, [rbp+9E40h+var_6DA0]
 * 00000001800B4786: call    sub_1800A5ED4
 * 00000001800B478B: mov     r8, rax
 * 00000001800B478E: mov     r9d, r12d
 * 00000001800B4791: mov     edx, 190h
 * 00000001800B4796: lea     rcx, [rbp+9E40h+var_A90]
 * 00000001800B479D: call    sub_1800737C8
 * 00000001800B47A2: nop
 * 00000001800B47A3: mov     r8, rax
 * 00000001800B47A6: mov     rdx, r13
 * 00000001800B47A9: lea     rcx, [rbp+9E40h+var_AB0]
 * 00000001800B47B0: call    sub_18001B678
 * 00000001800B47B5: nop
 * 00000001800B47B6: lea     r8, aVertex; "/Vertex"
 * 00000001800B47BD: mov     rdx, rax
 * 00000001800B47C0: lea     rcx, [rbp+9E40h+var_4A50]
 * 00000001800B47C7: call    sub_18001B5A8
 * 00000001800B47CC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B47D1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B47D6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B47DB: mov     rcx, rax
 * 00000001800B47DE: call    sub_18007386C
 * 00000001800B47E3: nop
 * 00000001800B47E4: lea     rcx, [rbp+9E40h+var_AB0]
 * 00000001800B47EB: call    sub_180011020
 * 00000001800B47F0: nop
 * 00000001800B47F1: lea     rcx, [rbp+9E40h+var_A90]
 * 00000001800B47F8: call    sub_180011020
 * 00000001800B47FD: nop
 * 00000001800B47FE: lea     rcx, dword_1801CA628
 * 00000001800B4805: call    _Init_thread_footer
 * 00000001800B480A: mov     rax, [rdi+rbx*8]
 * 00000001800B480E: mov     ecx, [r15+rax]
 * 00000001800B4812: cmp     cs:dword_1801CA62C, ecx
 * 00000001800B4818: jle     loc_1800B48F1
 * 00000001800B481E: lea     rcx, dword_1801CA62C
 * 00000001800B4825: call    sub_18000CA40
 * 00000001800B482A: cmp     cs:dword_1801CA62C, r14d
 * 00000001800B4831: jnz     loc_1800B48F1
 * 00000001800B4837: lea     rax, unk_180144780
 * 00000001800B483E: mov     qword ptr [rbp+9E40h+var_8F10], rax
 * 00000001800B4845: lea     rax, unk_1801457D0
 * 00000001800B484C: mov     qword ptr [rbp+9E40h+var_8F10+8], rax
 * 00000001800B4853: movups  xmm7, [rbp+9E40h+var_8F10]
 * 00000001800B485A: mov     dword ptr [rbp+9E40h+var_6D80], esi
 * 00000001800B4860: mov     dword ptr [rbp+9E40h+var_6D80+4], esi
 * 00000001800B4866: movups  xmm6, [rbp+9E40h+var_6D80]
 * 00000001800B486D: call    sub_1800A5ED4
 * 00000001800B4872: mov     r8, rax
 * 00000001800B4875: mov     r9d, r12d
 * 00000001800B4878: mov     edx, 192h
 * 00000001800B487D: lea     rcx, [rbp+9E40h+var_A30]
 * 00000001800B4884: call    sub_1800737C8
 * 00000001800B4889: nop
 * 00000001800B488A: mov     r8, rax
 * 00000001800B488D: mov     rdx, r13
 * 00000001800B4890: lea     rcx, [rbp+9E40h+var_A50]
 * 00000001800B4897: call    sub_18001B678
 * 00000001800B489C: nop
 * 00000001800B489D: lea     r8, aVertex; "/Vertex"
 * 00000001800B48A4: mov     rdx, rax
 * 00000001800B48A7: lea     rcx, [rbp+9E40h+var_4A30]
 * 00000001800B48AE: call    sub_18001B5A8
 * 00000001800B48B3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B48B8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B48BD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B48C2: mov     rcx, rax
 * 00000001800B48C5: call    sub_18007386C
 * 00000001800B48CA: nop
 * 00000001800B48CB: lea     rcx, [rbp+9E40h+var_A50]
 * 00000001800B48D2: call    sub_180011020
 * 00000001800B48D7: nop
 * 00000001800B48D8: lea     rcx, [rbp+9E40h+var_A30]
 * 00000001800B48DF: call    sub_180011020
 * 00000001800B48E4: nop
 * 00000001800B48E5: lea     rcx, dword_1801CA62C
 * 00000001800B48EC: call    _Init_thread_footer
 * 00000001800B48F1: mov     rax, [rdi+rbx*8]
 * 00000001800B48F5: mov     ecx, [r15+rax]
 * 00000001800B48F9: cmp     cs:dword_1801CA630, ecx
 * 00000001800B48FF: jle     loc_1800B49D8
 * 00000001800B4905: lea     rcx, dword_1801CA630
 * 00000001800B490C: call    sub_18000CA40
 * 00000001800B4911: cmp     cs:dword_1801CA630, r14d
 * 00000001800B4918: jnz     loc_1800B49D8
 * 00000001800B491E: lea     rax, unk_180144780
 * 00000001800B4925: mov     qword ptr [rbp+9E40h+var_8F00], rax
 * 00000001800B492C: lea     rax, unk_1801457D0
 * 00000001800B4933: mov     qword ptr [rbp+9E40h+var_8F00+8], rax
 * 00000001800B493A: movups  xmm7, [rbp+9E40h+var_8F00]
 * 00000001800B4941: mov     dword ptr [rbp+9E40h+var_6D60], esi
 * 00000001800B4947: mov     dword ptr [rbp+9E40h+var_6D60+4], esi
 * 00000001800B494D: movups  xmm6, [rbp+9E40h+var_6D60]
 * 00000001800B4954: call    sub_1800A5ED4
 * 00000001800B4959: mov     r8, rax
 * 00000001800B495C: mov     r9d, r12d
 * 00000001800B495F: mov     edx, 198h
 * 00000001800B4964: lea     rcx, [rbp+9E40h+var_9D0]
 * 00000001800B496B: call    sub_1800737C8
 * 00000001800B4970: nop
 * 00000001800B4971: mov     r8, rax
 * 00000001800B4974: mov     rdx, r13
 * 00000001800B4977: lea     rcx, [rbp+9E40h+var_9F0]
 * 00000001800B497E: call    sub_18001B678
 * 00000001800B4983: nop
 * 00000001800B4984: lea     r8, aVertex; "/Vertex"
 * 00000001800B498B: mov     rdx, rax
 * 00000001800B498E: lea     rcx, [rbp+9E40h+var_4A10]
 * 00000001800B4995: call    sub_18001B5A8
 * 00000001800B499A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B499F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B49A4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B49A9: mov     rcx, rax
 * 00000001800B49AC: call    sub_18007386C
 * 00000001800B49B1: nop
 * 00000001800B49B2: lea     rcx, [rbp+9E40h+var_9F0]
 * 00000001800B49B9: call    sub_180011020
 * 00000001800B49BE: nop
 * 00000001800B49BF: lea     rcx, [rbp+9E40h+var_9D0]
 * 00000001800B49C6: call    sub_180011020
 * 00000001800B49CB: nop
 * 00000001800B49CC: lea     rcx, dword_1801CA630
 * 00000001800B49D3: call    _Init_thread_footer
 * 00000001800B49D8: mov     rax, [rdi+rbx*8]
 * 00000001800B49DC: mov     ecx, [r15+rax]
 * 00000001800B49E0: cmp     cs:dword_1801CA634, ecx
 * 00000001800B49E6: jle     loc_1800B4ABF
 * 00000001800B49EC: lea     rcx, dword_1801CA634
 * 00000001800B49F3: call    sub_18000CA40
 * 00000001800B49F8: cmp     cs:dword_1801CA634, r14d
 * 00000001800B49FF: jnz     loc_1800B4ABF
 * 00000001800B4A05: lea     rax, unk_180144780
 * 00000001800B4A0C: mov     qword ptr [rbp+9E40h+var_8EF0], rax
 * 00000001800B4A13: lea     rax, unk_1801457D0
 * 00000001800B4A1A: mov     qword ptr [rbp+9E40h+var_8EF0+8], rax
 * 00000001800B4A21: movups  xmm7, [rbp+9E40h+var_8EF0]
 * 00000001800B4A28: mov     dword ptr [rbp+9E40h+var_6D40], esi
 * 00000001800B4A2E: mov     dword ptr [rbp+9E40h+var_6D40+4], esi
 * 00000001800B4A34: movups  xmm6, [rbp+9E40h+var_6D40]
 * 00000001800B4A3B: call    sub_1800A5ED4
 * 00000001800B4A40: mov     r8, rax
 * 00000001800B4A43: mov     r9d, r12d
 * 00000001800B4A46: mov     edx, 19Ah
 * 00000001800B4A4B: lea     rcx, [rbp+9E40h+var_970]
 * 00000001800B4A52: call    sub_1800737C8
 * 00000001800B4A57: nop
 * 00000001800B4A58: mov     r8, rax
 * 00000001800B4A5B: mov     rdx, r13
 * 00000001800B4A5E: lea     rcx, [rbp+9E40h+var_990]
 * 00000001800B4A65: call    sub_18001B678
 * 00000001800B4A6A: nop
 * 00000001800B4A6B: lea     r8, aVertex; "/Vertex"
 * 00000001800B4A72: mov     rdx, rax
 * 00000001800B4A75: lea     rcx, [rbp+9E40h+var_49F0]
 * 00000001800B4A7C: call    sub_18001B5A8
 * 00000001800B4A81: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4A86: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4A8B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4A90: mov     rcx, rax
 * 00000001800B4A93: call    sub_18007386C
 * 00000001800B4A98: nop
 * 00000001800B4A99: lea     rcx, [rbp+9E40h+var_990]
 * 00000001800B4AA0: call    sub_180011020
 * 00000001800B4AA5: nop
 * 00000001800B4AA6: lea     rcx, [rbp+9E40h+var_970]
 * 00000001800B4AAD: call    sub_180011020
 * 00000001800B4AB2: nop
 * 00000001800B4AB3: lea     rcx, dword_1801CA634
 * 00000001800B4ABA: call    _Init_thread_footer
 * 00000001800B4ABF: mov     rax, [rdi+rbx*8]
 * 00000001800B4AC3: mov     ecx, [r15+rax]
 * 00000001800B4AC7: cmp     cs:dword_1801CA638, ecx
 * 00000001800B4ACD: jle     loc_1800B4BA6
 * 00000001800B4AD3: lea     rcx, dword_1801CA638
 * 00000001800B4ADA: call    sub_18000CA40
 * 00000001800B4ADF: cmp     cs:dword_1801CA638, r14d
 * 00000001800B4AE6: jnz     loc_1800B4BA6
 * 00000001800B4AEC: lea     rax, unk_1801421F0
 * 00000001800B4AF3: mov     qword ptr [rbp+9E40h+var_8EE0], rax
 * 00000001800B4AFA: lea     rax, unk_180143C40
 * 00000001800B4B01: mov     qword ptr [rbp+9E40h+var_8EE0+8], rax
 * 00000001800B4B08: movups  xmm7, [rbp+9E40h+var_8EE0]
 * 00000001800B4B0F: mov     dword ptr [rbp+9E40h+var_6D20], esi
 * 00000001800B4B15: mov     dword ptr [rbp+9E40h+var_6D20+4], esi
 * 00000001800B4B1B: movups  xmm6, [rbp+9E40h+var_6D20]
 * 00000001800B4B22: call    sub_1800A5ED4
 * 00000001800B4B27: mov     r8, rax
 * 00000001800B4B2A: mov     r9d, r12d
 * 00000001800B4B2D: mov     edx, 1A0h
 * 00000001800B4B32: lea     rcx, [rbp+9E40h+var_910]
 * 00000001800B4B39: call    sub_1800737C8
 * 00000001800B4B3E: nop
 * 00000001800B4B3F: mov     r8, rax
 * 00000001800B4B42: mov     rdx, r13
 * 00000001800B4B45: lea     rcx, [rbp+9E40h+var_930]
 * 00000001800B4B4C: call    sub_18001B678
 * 00000001800B4B51: nop
 * 00000001800B4B52: lea     r8, aVertex; "/Vertex"
 * 00000001800B4B59: mov     rdx, rax
 * 00000001800B4B5C: lea     rcx, [rbp+9E40h+var_49D0]
 * 00000001800B4B63: call    sub_18001B5A8
 * 00000001800B4B68: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4B6D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4B72: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4B77: mov     rcx, rax
 * 00000001800B4B7A: call    sub_18007386C
 * 00000001800B4B7F: nop
 * 00000001800B4B80: lea     rcx, [rbp+9E40h+var_930]
 * 00000001800B4B87: call    sub_180011020
 * 00000001800B4B8C: nop
 * 00000001800B4B8D: lea     rcx, [rbp+9E40h+var_910]
 * 00000001800B4B94: call    sub_180011020
 * 00000001800B4B99: nop
 * 00000001800B4B9A: lea     rcx, dword_1801CA638
 * 00000001800B4BA1: call    _Init_thread_footer
 * 00000001800B4BA6: mov     rax, [rdi+rbx*8]
 * 00000001800B4BAA: mov     ecx, [r15+rax]
 * 00000001800B4BAE: cmp     cs:dword_1801CA63C, ecx
 * 00000001800B4BB4: jle     loc_1800B4C8D
 * 00000001800B4BBA: lea     rcx, dword_1801CA63C
 * 00000001800B4BC1: call    sub_18000CA40
 * 00000001800B4BC6: cmp     cs:dword_1801CA63C, r14d
 * 00000001800B4BCD: jnz     loc_1800B4C8D
 * 00000001800B4BD3: lea     rax, unk_1801421F0
 * 00000001800B4BDA: mov     qword ptr [rbp+9E40h+var_8ED0], rax
 * 00000001800B4BE1: lea     rax, unk_180143C40
 * 00000001800B4BE8: mov     qword ptr [rbp+9E40h+var_8ED0+8], rax
 * 00000001800B4BEF: movups  xmm7, [rbp+9E40h+var_8ED0]
 * 00000001800B4BF6: mov     dword ptr [rbp+9E40h+var_6D00], esi
 * 00000001800B4BFC: mov     dword ptr [rbp+9E40h+var_6D00+4], esi
 * 00000001800B4C02: movups  xmm6, [rbp+9E40h+var_6D00]
 * 00000001800B4C09: call    sub_1800A5ED4
 * 00000001800B4C0E: mov     r8, rax
 * 00000001800B4C11: mov     r9d, r12d
 * 00000001800B4C14: mov     edx, 1A2h
 * 00000001800B4C19: lea     rcx, [rbp+9E40h+var_8B0]
 * 00000001800B4C20: call    sub_1800737C8
 * 00000001800B4C25: nop
 * 00000001800B4C26: mov     r8, rax
 * 00000001800B4C29: mov     rdx, r13
 * 00000001800B4C2C: lea     rcx, [rbp+9E40h+var_8D0]
 * 00000001800B4C33: call    sub_18001B678
 * 00000001800B4C38: nop
 * 00000001800B4C39: lea     r8, aVertex; "/Vertex"
 * 00000001800B4C40: mov     rdx, rax
 * 00000001800B4C43: lea     rcx, [rbp+9E40h+var_49B0]
 * 00000001800B4C4A: call    sub_18001B5A8
 * 00000001800B4C4F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4C54: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4C59: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4C5E: mov     rcx, rax
 * 00000001800B4C61: call    sub_18007386C
 * 00000001800B4C66: nop
 * 00000001800B4C67: lea     rcx, [rbp+9E40h+var_8D0]
 * 00000001800B4C6E: call    sub_180011020
 * 00000001800B4C73: nop
 * 00000001800B4C74: lea     rcx, [rbp+9E40h+var_8B0]
 * 00000001800B4C7B: call    sub_180011020
 * 00000001800B4C80: nop
 * 00000001800B4C81: lea     rcx, dword_1801CA63C
 * 00000001800B4C88: call    _Init_thread_footer
 * 00000001800B4C8D: mov     rax, [rdi+rbx*8]
 * 00000001800B4C91: mov     ecx, [r15+rax]
 * 00000001800B4C95: cmp     cs:dword_1801CA640, ecx
 * 00000001800B4C9B: jle     loc_1800B4D74
 * 00000001800B4CA1: lea     rcx, dword_1801CA640
 * 00000001800B4CA8: call    sub_18000CA40
 * 00000001800B4CAD: cmp     cs:dword_1801CA640, r14d
 * 00000001800B4CB4: jnz     loc_1800B4D74
 * 00000001800B4CBA: lea     rax, unk_1801421F0
 * 00000001800B4CC1: mov     qword ptr [rbp+9E40h+var_8EC0], rax
 * 00000001800B4CC8: lea     rax, unk_180143C40
 * 00000001800B4CCF: mov     qword ptr [rbp+9E40h+var_8EC0+8], rax
 * 00000001800B4CD6: movups  xmm7, [rbp+9E40h+var_8EC0]
 * 00000001800B4CDD: mov     dword ptr [rbp+9E40h+var_6CE0], esi
 * 00000001800B4CE3: mov     dword ptr [rbp+9E40h+var_6CE0+4], esi
 * 00000001800B4CE9: movups  xmm6, [rbp+9E40h+var_6CE0]
 * 00000001800B4CF0: call    sub_1800A5ED4
 * 00000001800B4CF5: mov     r8, rax
 * 00000001800B4CF8: mov     r9d, r12d
 * 00000001800B4CFB: mov     edx, 1A8h
 * 00000001800B4D00: lea     rcx, [rbp+9E40h+var_850]
 * 00000001800B4D07: call    sub_1800737C8
 * 00000001800B4D0C: nop
 * 00000001800B4D0D: mov     r8, rax
 * 00000001800B4D10: mov     rdx, r13
 * 00000001800B4D13: lea     rcx, [rbp+9E40h+var_870]
 * 00000001800B4D1A: call    sub_18001B678
 * 00000001800B4D1F: nop
 * 00000001800B4D20: lea     r8, aVertex; "/Vertex"
 * 00000001800B4D27: mov     rdx, rax
 * 00000001800B4D2A: lea     rcx, [rbp+9E40h+var_4990]
 * 00000001800B4D31: call    sub_18001B5A8
 * 00000001800B4D36: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4D3B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4D40: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4D45: mov     rcx, rax
 * 00000001800B4D48: call    sub_18007386C
 * 00000001800B4D4D: nop
 * 00000001800B4D4E: lea     rcx, [rbp+9E40h+var_870]
 * 00000001800B4D55: call    sub_180011020
 * 00000001800B4D5A: nop
 * 00000001800B4D5B: lea     rcx, [rbp+9E40h+var_850]
 * 00000001800B4D62: call    sub_180011020
 * 00000001800B4D67: nop
 * 00000001800B4D68: lea     rcx, dword_1801CA640
 * 00000001800B4D6F: call    _Init_thread_footer
 * 00000001800B4D74: mov     rax, [rdi+rbx*8]
 * 00000001800B4D78: mov     ecx, [r15+rax]
 * 00000001800B4D7C: cmp     cs:dword_1801CA644, ecx
 * 00000001800B4D82: jle     loc_1800B4E5B
 * 00000001800B4D88: lea     rcx, dword_1801CA644
 * 00000001800B4D8F: call    sub_18000CA40
 * 00000001800B4D94: cmp     cs:dword_1801CA644, r14d
 * 00000001800B4D9B: jnz     loc_1800B4E5B
 * 00000001800B4DA1: lea     rax, unk_1801421F0
 * 00000001800B4DA8: mov     qword ptr [rbp+9E40h+var_8EB0], rax
 * 00000001800B4DAF: lea     rax, unk_180143C40
 * 00000001800B4DB6: mov     qword ptr [rbp+9E40h+var_8EB0+8], rax
 * 00000001800B4DBD: movups  xmm7, [rbp+9E40h+var_8EB0]
 * 00000001800B4DC4: mov     dword ptr [rbp+9E40h+var_6CC0], esi
 * 00000001800B4DCA: mov     dword ptr [rbp+9E40h+var_6CC0+4], esi
 * 00000001800B4DD0: movups  xmm6, [rbp+9E40h+var_6CC0]
 * 00000001800B4DD7: call    sub_1800A5ED4
 * 00000001800B4DDC: mov     r8, rax
 * 00000001800B4DDF: mov     r9d, r12d
 * 00000001800B4DE2: mov     edx, 1AAh
 * 00000001800B4DE7: lea     rcx, [rbp+9E40h+var_7F0]
 * 00000001800B4DEE: call    sub_1800737C8
 * 00000001800B4DF3: nop
 * 00000001800B4DF4: mov     r8, rax
 * 00000001800B4DF7: mov     rdx, r13
 * 00000001800B4DFA: lea     rcx, [rbp+9E40h+var_810]
 * 00000001800B4E01: call    sub_18001B678
 * 00000001800B4E06: nop
 * 00000001800B4E07: lea     r8, aVertex; "/Vertex"
 * 00000001800B4E0E: mov     rdx, rax
 * 00000001800B4E11: lea     rcx, [rbp+9E40h+var_4970]
 * 00000001800B4E18: call    sub_18001B5A8
 * 00000001800B4E1D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4E22: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4E27: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4E2C: mov     rcx, rax
 * 00000001800B4E2F: call    sub_18007386C
 * 00000001800B4E34: nop
 * 00000001800B4E35: lea     rcx, [rbp+9E40h+var_810]
 * 00000001800B4E3C: call    sub_180011020
 * 00000001800B4E41: nop
 * 00000001800B4E42: lea     rcx, [rbp+9E40h+var_7F0]
 * 00000001800B4E49: call    sub_180011020
 * 00000001800B4E4E: nop
 * 00000001800B4E4F: lea     rcx, dword_1801CA644
 * 00000001800B4E56: call    _Init_thread_footer
 * 00000001800B4E5B: mov     rax, [rdi+rbx*8]
 * 00000001800B4E5F: mov     ecx, [r15+rax]
 * 00000001800B4E63: cmp     cs:dword_1801CA648, ecx
 * 00000001800B4E69: jle     loc_1800B4F42
 * 00000001800B4E6F: lea     rcx, dword_1801CA648
 * 00000001800B4E76: call    sub_18000CA40
 * 00000001800B4E7B: cmp     cs:dword_1801CA648, r14d
 * 00000001800B4E82: jnz     loc_1800B4F42
 * 00000001800B4E88: lea     rax, unk_1801421F0
 * 00000001800B4E8F: mov     qword ptr [rbp+9E40h+var_8EA0], rax
 * 00000001800B4E96: lea     rax, unk_180143C40
 * 00000001800B4E9D: mov     qword ptr [rbp+9E40h+var_8EA0+8], rax
 * 00000001800B4EA4: movups  xmm7, [rbp+9E40h+var_8EA0]
 * 00000001800B4EAB: mov     dword ptr [rbp+9E40h+var_6CA0], esi
 * 00000001800B4EB1: mov     dword ptr [rbp+9E40h+var_6CA0+4], esi
 * 00000001800B4EB7: movups  xmm6, [rbp+9E40h+var_6CA0]
 * 00000001800B4EBE: call    sub_1800A5ED4
 * 00000001800B4EC3: mov     r8, rax
 * 00000001800B4EC6: mov     r9d, r12d
 * 00000001800B4EC9: mov     edx, 1B0h
 * 00000001800B4ECE: lea     rcx, [rbp+9E40h+var_790]
 * 00000001800B4ED5: call    sub_1800737C8
 * 00000001800B4EDA: nop
 * 00000001800B4EDB: mov     r8, rax
 * 00000001800B4EDE: mov     rdx, r13
 * 00000001800B4EE1: lea     rcx, [rbp+9E40h+var_7B0]
 * 00000001800B4EE8: call    sub_18001B678
 * 00000001800B4EED: nop
 * 00000001800B4EEE: lea     r8, aVertex; "/Vertex"
 * 00000001800B4EF5: mov     rdx, rax
 * 00000001800B4EF8: lea     rcx, [rbp+9E40h+var_4950]
 * 00000001800B4EFF: call    sub_18001B5A8
 * 00000001800B4F04: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4F09: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4F0E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4F13: mov     rcx, rax
 * 00000001800B4F16: call    sub_18007386C
 * 00000001800B4F1B: nop
 * 00000001800B4F1C: lea     rcx, [rbp+9E40h+var_7B0]
 * 00000001800B4F23: call    sub_180011020
 * 00000001800B4F28: nop
 * 00000001800B4F29: lea     rcx, [rbp+9E40h+var_790]
 * 00000001800B4F30: call    sub_180011020
 * 00000001800B4F35: nop
 * 00000001800B4F36: lea     rcx, dword_1801CA648
 * 00000001800B4F3D: call    _Init_thread_footer
 * 00000001800B4F42: mov     rax, [rdi+rbx*8]
 * 00000001800B4F46: mov     ecx, [r15+rax]
 * 00000001800B4F4A: cmp     cs:dword_1801CA64C, ecx
 * 00000001800B4F50: jle     loc_1800B5029
 * 00000001800B4F56: lea     rcx, dword_1801CA64C
 * 00000001800B4F5D: call    sub_18000CA40
 * 00000001800B4F62: cmp     cs:dword_1801CA64C, r14d
 * 00000001800B4F69: jnz     loc_1800B5029
 * 00000001800B4F6F: lea     rax, unk_1801421F0
 * 00000001800B4F76: mov     qword ptr [rbp+9E40h+var_8E90], rax
 * 00000001800B4F7D: lea     rax, unk_180143C40
 * 00000001800B4F84: mov     qword ptr [rbp+9E40h+var_8E90+8], rax
 * 00000001800B4F8B: movups  xmm7, [rbp+9E40h+var_8E90]
 * 00000001800B4F92: mov     dword ptr [rbp+9E40h+var_6C80], esi
 * 00000001800B4F98: mov     dword ptr [rbp+9E40h+var_6C80+4], esi
 * 00000001800B4F9E: movups  xmm6, [rbp+9E40h+var_6C80]
 * 00000001800B4FA5: call    sub_1800A5ED4
 * 00000001800B4FAA: mov     r8, rax
 * 00000001800B4FAD: mov     r9d, r12d
 * 00000001800B4FB0: mov     edx, 1B2h
 * 00000001800B4FB5: lea     rcx, [rbp+9E40h+var_730]
 * 00000001800B4FBC: call    sub_1800737C8
 * 00000001800B4FC1: nop
 * 00000001800B4FC2: mov     r8, rax
 * 00000001800B4FC5: mov     rdx, r13
 * 00000001800B4FC8: lea     rcx, [rbp+9E40h+var_750]
 * 00000001800B4FCF: call    sub_18001B678
 * 00000001800B4FD4: nop
 * 00000001800B4FD5: lea     r8, aVertex; "/Vertex"
 * 00000001800B4FDC: mov     rdx, rax
 * 00000001800B4FDF: lea     rcx, [rbp+9E40h+var_4930]
 * 00000001800B4FE6: call    sub_18001B5A8
 * 00000001800B4FEB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4FF0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4FF5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4FFA: mov     rcx, rax
 * 00000001800B4FFD: call    sub_18007386C
 * 00000001800B5002: nop
 * 00000001800B5003: lea     rcx, [rbp+9E40h+var_750]
 * 00000001800B500A: call    sub_180011020
 * 00000001800B500F: nop
 * 00000001800B5010: lea     rcx, [rbp+9E40h+var_730]
 * 00000001800B5017: call    sub_180011020
 * 00000001800B501C: nop
 * 00000001800B501D: lea     rcx, dword_1801CA64C
 * 00000001800B5024: call    _Init_thread_footer
 * 00000001800B5029: mov     rax, [rdi+rbx*8]
 * 00000001800B502D: mov     ecx, [r15+rax]
 * 00000001800B5031: cmp     cs:dword_1801CA650, ecx
 * 00000001800B5037: jle     loc_1800B5110
 * 00000001800B503D: lea     rcx, dword_1801CA650
 * 00000001800B5044: call    sub_18000CA40
 * 00000001800B5049: cmp     cs:dword_1801CA650, r14d
 * 00000001800B5050: jnz     loc_1800B5110
 * 00000001800B5056: lea     rax, unk_1801421F0
 * 00000001800B505D: mov     qword ptr [rbp+9E40h+var_8E80], rax
 * 00000001800B5064: lea     rax, unk_180143C40
 * 00000001800B506B: mov     qword ptr [rbp+9E40h+var_8E80+8], rax
 * 00000001800B5072: movups  xmm7, [rbp+9E40h+var_8E80]
 * 00000001800B5079: mov     dword ptr [rbp+9E40h+var_6C60], esi
 * 00000001800B507F: mov     dword ptr [rbp+9E40h+var_6C60+4], esi
 * 00000001800B5085: movups  xmm6, [rbp+9E40h+var_6C60]
 * 00000001800B508C: call    sub_1800A5ED4
 * 00000001800B5091: mov     r8, rax
 * 00000001800B5094: mov     r9d, r12d
 * 00000001800B5097: mov     edx, 1B8h
 * 00000001800B509C: lea     rcx, [rbp+9E40h+var_6D0]
 * 00000001800B50A3: call    sub_1800737C8
 * 00000001800B50A8: nop
 * 00000001800B50A9: mov     r8, rax
 * 00000001800B50AC: mov     rdx, r13
 * 00000001800B50AF: lea     rcx, [rbp+9E40h+var_6F0]
 * 00000001800B50B6: call    sub_18001B678
 * 00000001800B50BB: nop
 * 00000001800B50BC: lea     r8, aVertex; "/Vertex"
 * 00000001800B50C3: mov     rdx, rax
 * 00000001800B50C6: lea     rcx, [rbp+9E40h+var_4910]
 * 00000001800B50CD: call    sub_18001B5A8
 * 00000001800B50D2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B50D7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B50DC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B50E1: mov     rcx, rax
 * 00000001800B50E4: call    sub_18007386C
 * 00000001800B50E9: nop
 * 00000001800B50EA: lea     rcx, [rbp+9E40h+var_6F0]
 * 00000001800B50F1: call    sub_180011020
 * 00000001800B50F6: nop
 * 00000001800B50F7: lea     rcx, [rbp+9E40h+var_6D0]
 * 00000001800B50FE: call    sub_180011020
 * 00000001800B5103: nop
 * 00000001800B5104: lea     rcx, dword_1801CA650
 * 00000001800B510B: call    _Init_thread_footer
 * 00000001800B5110: mov     rax, [rdi+rbx*8]
 * 00000001800B5114: mov     ecx, [r15+rax]
 * 00000001800B5118: cmp     cs:dword_1801CA654, ecx
 * 00000001800B511E: jle     loc_1800B51F7
 * 00000001800B5124: lea     rcx, dword_1801CA654
 * 00000001800B512B: call    sub_18000CA40
 * 00000001800B5130: cmp     cs:dword_1801CA654, r14d
 * 00000001800B5137: jnz     loc_1800B51F7
 * 00000001800B513D: lea     rax, unk_1801421F0
 * 00000001800B5144: mov     qword ptr [rbp+9E40h+var_8E70], rax
 * 00000001800B514B: lea     rax, unk_180143C40
 * 00000001800B5152: mov     qword ptr [rbp+9E40h+var_8E70+8], rax
 * 00000001800B5159: movups  xmm7, [rbp+9E40h+var_8E70]
 * 00000001800B5160: mov     dword ptr [rbp+9E40h+var_6C40], esi
 * 00000001800B5166: mov     dword ptr [rbp+9E40h+var_6C40+4], esi
 * 00000001800B516C: movups  xmm6, [rbp+9E40h+var_6C40]
 * 00000001800B5173: call    sub_1800A5ED4
 * 00000001800B5178: mov     r8, rax
 * 00000001800B517B: mov     r9d, r12d
 * 00000001800B517E: mov     edx, 1BAh
 * 00000001800B5183: lea     rcx, [rbp+9E40h+var_670]
 * 00000001800B518A: call    sub_1800737C8
 * 00000001800B518F: nop
 * 00000001800B5190: mov     r8, rax
 * 00000001800B5193: mov     rdx, r13
 * 00000001800B5196: lea     rcx, [rbp+9E40h+var_690]
 * 00000001800B519D: call    sub_18001B678
 * 00000001800B51A2: nop
 * 00000001800B51A3: lea     r8, aVertex; "/Vertex"
 * 00000001800B51AA: mov     rdx, rax
 * 00000001800B51AD: lea     rcx, [rbp+9E40h+var_48F0]
 * 00000001800B51B4: call    sub_18001B5A8
 * 00000001800B51B9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B51BE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B51C3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B51C8: mov     rcx, rax
 * 00000001800B51CB: call    sub_18007386C
 * 00000001800B51D0: nop
 * 00000001800B51D1: lea     rcx, [rbp+9E40h+var_690]
 * 00000001800B51D8: call    sub_180011020
 * 00000001800B51DD: nop
 * 00000001800B51DE: lea     rcx, [rbp+9E40h+var_670]
 * 00000001800B51E5: call    sub_180011020
 * 00000001800B51EA: nop
 * 00000001800B51EB: lea     rcx, dword_1801CA654
 * 00000001800B51F2: call    _Init_thread_footer
 * 00000001800B51F7: mov     rax, [rdi+rbx*8]
 * 00000001800B51FB: mov     ecx, [r15+rax]
 * 00000001800B51FF: cmp     cs:dword_1801CA658, ecx
 * 00000001800B5205: jle     loc_1800B52DE
 * 00000001800B520B: lea     rcx, dword_1801CA658
 * 00000001800B5212: call    sub_18000CA40
 * 00000001800B5217: cmp     cs:dword_1801CA658, r14d
 * 00000001800B521E: jnz     loc_1800B52DE
 * 00000001800B5224: lea     rax, unk_180144780
 * 00000001800B522B: mov     qword ptr [rbp+9E40h+var_8E60], rax
 * 00000001800B5232: lea     rax, unk_1801457D0
 * 00000001800B5239: mov     qword ptr [rbp+9E40h+var_8E60+8], rax
 * 00000001800B5240: movups  xmm7, [rbp+9E40h+var_8E60]
 * 00000001800B5247: mov     dword ptr [rbp+9E40h+var_6C20], esi
 * 00000001800B524D: mov     dword ptr [rbp+9E40h+var_6C20+4], esi
 * 00000001800B5253: movups  xmm6, [rbp+9E40h+var_6C20]
 * 00000001800B525A: call    sub_1800A5ED4
 * 00000001800B525F: mov     r8, rax
 * 00000001800B5262: mov     r9d, r12d
 * 00000001800B5265: mov     edx, 1C0h
 * 00000001800B526A: lea     rcx, [rbp+9E40h+var_610]
 * 00000001800B5271: call    sub_1800737C8
 * 00000001800B5276: nop
 * 00000001800B5277: mov     r8, rax
 * 00000001800B527A: mov     rdx, r13
 * 00000001800B527D: lea     rcx, [rbp+9E40h+var_630]
 * 00000001800B5284: call    sub_18001B678
 * 00000001800B5289: nop
 * 00000001800B528A: lea     r8, aVertex; "/Vertex"
 * 00000001800B5291: mov     rdx, rax
 * 00000001800B5294: lea     rcx, [rbp+9E40h+var_48D0]
 * 00000001800B529B: call    sub_18001B5A8
 * 00000001800B52A0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B52A5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B52AA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B52AF: mov     rcx, rax
 * 00000001800B52B2: call    sub_18007386C
 * 00000001800B52B7: nop
 * 00000001800B52B8: lea     rcx, [rbp+9E40h+var_630]
 * 00000001800B52BF: call    sub_180011020
 * 00000001800B52C4: nop
 * 00000001800B52C5: lea     rcx, [rbp+9E40h+var_610]
 * 00000001800B52CC: call    sub_180011020
 * 00000001800B52D1: nop
 * 00000001800B52D2: lea     rcx, dword_1801CA658
 * 00000001800B52D9: call    _Init_thread_footer
 * 00000001800B52DE: mov     rax, [rdi+rbx*8]
 * 00000001800B52E2: mov     ecx, [r15+rax]
 * 00000001800B52E6: cmp     cs:dword_1801CA65C, ecx
 * 00000001800B52EC: jle     loc_1800B53C5
 * 00000001800B52F2: lea     rcx, dword_1801CA65C
 * 00000001800B52F9: call    sub_18000CA40
 * 00000001800B52FE: cmp     cs:dword_1801CA65C, r14d
 * 00000001800B5305: jnz     loc_1800B53C5
 * 00000001800B530B: lea     rax, unk_180144780
 * 00000001800B5312: mov     qword ptr [rbp+9E40h+var_8E50], rax
 * 00000001800B5319: lea     rax, unk_1801457D0
 * 00000001800B5320: mov     qword ptr [rbp+9E40h+var_8E50+8], rax
 * 00000001800B5327: movups  xmm7, [rbp+9E40h+var_8E50]
 * 00000001800B532E: mov     dword ptr [rbp+9E40h+var_6C00], esi
 * 00000001800B5334: mov     dword ptr [rbp+9E40h+var_6C00+4], esi
 * 00000001800B533A: movups  xmm6, [rbp+9E40h+var_6C00]
 * 00000001800B5341: call    sub_1800A5ED4
 * 00000001800B5346: mov     r8, rax
 * 00000001800B5349: mov     r9d, r12d
 * 00000001800B534C: mov     edx, 1C2h
 * 00000001800B5351: lea     rcx, [rbp+9E40h+var_5B0]
 * 00000001800B5358: call    sub_1800737C8
 * 00000001800B535D: nop
 * 00000001800B535E: mov     r8, rax
 * 00000001800B5361: mov     rdx, r13
 * 00000001800B5364: lea     rcx, [rbp+9E40h+var_5D0]
 * 00000001800B536B: call    sub_18001B678
 * 00000001800B5370: nop
 * 00000001800B5371: lea     r8, aVertex; "/Vertex"
 * 00000001800B5378: mov     rdx, rax
 * 00000001800B537B: lea     rcx, [rbp+9E40h+var_48B0]
 * 00000001800B5382: call    sub_18001B5A8
 * 00000001800B5387: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B538C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5391: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5396: mov     rcx, rax
 * 00000001800B5399: call    sub_18007386C
 * 00000001800B539E: nop
 * 00000001800B539F: lea     rcx, [rbp+9E40h+var_5D0]
 * 00000001800B53A6: call    sub_180011020
 * 00000001800B53AB: nop
 * 00000001800B53AC: lea     rcx, [rbp+9E40h+var_5B0]
 * 00000001800B53B3: call    sub_180011020
 * 00000001800B53B8: nop
 * 00000001800B53B9: lea     rcx, dword_1801CA65C
 * 00000001800B53C0: call    _Init_thread_footer
 * 00000001800B53C5: mov     rax, [rdi+rbx*8]
 * 00000001800B53C9: mov     ecx, [r15+rax]
 * 00000001800B53CD: cmp     cs:dword_1801CA660, ecx
 * 00000001800B53D3: jle     loc_1800B54AC
 * 00000001800B53D9: lea     rcx, dword_1801CA660
 * 00000001800B53E0: call    sub_18000CA40
 * 00000001800B53E5: cmp     cs:dword_1801CA660, r14d
 * 00000001800B53EC: jnz     loc_1800B54AC
 * 00000001800B53F2: lea     rax, unk_180144780
 * 00000001800B53F9: mov     qword ptr [rbp+9E40h+var_8E40], rax
 * 00000001800B5400: lea     rax, unk_1801457D0
 * 00000001800B5407: mov     qword ptr [rbp+9E40h+var_8E40+8], rax
 * 00000001800B540E: movups  xmm7, [rbp+9E40h+var_8E40]
 * 00000001800B5415: mov     dword ptr [rbp+9E40h+var_6BE0], esi
 * 00000001800B541B: mov     dword ptr [rbp+9E40h+var_6BE0+4], esi
 * 00000001800B5421: movups  xmm6, [rbp+9E40h+var_6BE0]
 * 00000001800B5428: call    sub_1800A5ED4
 * 00000001800B542D: mov     r8, rax
 * 00000001800B5430: mov     r9d, r12d
 * 00000001800B5433: mov     edx, 1C8h
 * 00000001800B5438: lea     rcx, [rbp+9E40h+var_550]
 * 00000001800B543F: call    sub_1800737C8
 * 00000001800B5444: nop
 * 00000001800B5445: mov     r8, rax
 * 00000001800B5448: mov     rdx, r13
 * 00000001800B544B: lea     rcx, [rbp+9E40h+var_570]
 * 00000001800B5452: call    sub_18001B678
 * 00000001800B5457: nop
 * 00000001800B5458: lea     r8, aVertex; "/Vertex"
 * 00000001800B545F: mov     rdx, rax
 * 00000001800B5462: lea     rcx, [rbp+9E40h+var_4890]
 * 00000001800B5469: call    sub_18001B5A8
 * 00000001800B546E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5473: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5478: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B547D: mov     rcx, rax
 * 00000001800B5480: call    sub_18007386C
 * 00000001800B5485: nop
 * 00000001800B5486: lea     rcx, [rbp+9E40h+var_570]
 * 00000001800B548D: call    sub_180011020
 * 00000001800B5492: nop
 * 00000001800B5493: lea     rcx, [rbp+9E40h+var_550]
 * 00000001800B549A: call    sub_180011020
 * 00000001800B549F: nop
 * 00000001800B54A0: lea     rcx, dword_1801CA660
 * 00000001800B54A7: call    _Init_thread_footer
 * 00000001800B54AC: mov     rax, [rdi+rbx*8]
 * 00000001800B54B0: mov     ecx, [r15+rax]
 * 00000001800B54B4: cmp     cs:dword_1801CA664, ecx
 * 00000001800B54BA: jle     loc_1800B5593
 * 00000001800B54C0: lea     rcx, dword_1801CA664
 * 00000001800B54C7: call    sub_18000CA40
 * 00000001800B54CC: cmp     cs:dword_1801CA664, r14d
 * 00000001800B54D3: jnz     loc_1800B5593
 * 00000001800B54D9: lea     rax, unk_180144780
 * 00000001800B54E0: mov     qword ptr [rbp+9E40h+var_8E30], rax
 * 00000001800B54E7: lea     rax, unk_1801457D0
 * 00000001800B54EE: mov     qword ptr [rbp+9E40h+var_8E30+8], rax
 * 00000001800B54F5: movups  xmm7, [rbp+9E40h+var_8E30]
 * 00000001800B54FC: mov     dword ptr [rbp+9E40h+var_6BC0], esi
 * 00000001800B5502: mov     dword ptr [rbp+9E40h+var_6BC0+4], esi
 * 00000001800B5508: movups  xmm6, [rbp+9E40h+var_6BC0]
 * 00000001800B550F: call    sub_1800A5ED4
 * 00000001800B5514: mov     r8, rax
 * 00000001800B5517: mov     r9d, r12d
 * 00000001800B551A: mov     edx, 1CAh
 * 00000001800B551F: lea     rcx, [rbp+9E40h+var_4F0]
 * 00000001800B5526: call    sub_1800737C8
 * 00000001800B552B: nop
 * 00000001800B552C: mov     r8, rax
 * 00000001800B552F: mov     rdx, r13
 * 00000001800B5532: lea     rcx, [rbp+9E40h+var_510]
 * 00000001800B5539: call    sub_18001B678
 * 00000001800B553E: nop
 * 00000001800B553F: lea     r8, aVertex; "/Vertex"
 * 00000001800B5546: mov     rdx, rax
 * 00000001800B5549: lea     rcx, [rbp+9E40h+var_4870]
 * 00000001800B5550: call    sub_18001B5A8
 * 00000001800B5555: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B555A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B555F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5564: mov     rcx, rax
 * 00000001800B5567: call    sub_18007386C
 * 00000001800B556C: nop
 * 00000001800B556D: lea     rcx, [rbp+9E40h+var_510]
 * 00000001800B5574: call    sub_180011020
 * 00000001800B5579: nop
 * 00000001800B557A: lea     rcx, [rbp+9E40h+var_4F0]
 * 00000001800B5581: call    sub_180011020
 * 00000001800B5586: nop
 * 00000001800B5587: lea     rcx, dword_1801CA664
 * 00000001800B558E: call    _Init_thread_footer
 * 00000001800B5593: mov     rax, [rdi+rbx*8]
 * 00000001800B5597: mov     ecx, [r15+rax]
 * 00000001800B559B: cmp     cs:dword_1801CA668, ecx
 * 00000001800B55A1: jle     loc_1800B567A
 * 00000001800B55A7: lea     rcx, dword_1801CA668
 * 00000001800B55AE: call    sub_18000CA40
 * 00000001800B55B3: cmp     cs:dword_1801CA668, r14d
 * 00000001800B55BA: jnz     loc_1800B567A
 * 00000001800B55C0: lea     rax, unk_180144780
 * 00000001800B55C7: mov     qword ptr [rbp+9E40h+var_8E20], rax
 * 00000001800B55CE: lea     rax, unk_1801457D0
 * 00000001800B55D5: mov     qword ptr [rbp+9E40h+var_8E20+8], rax
 * 00000001800B55DC: movups  xmm7, [rbp+9E40h+var_8E20]
 * 00000001800B55E3: mov     dword ptr [rbp+9E40h+var_6BA0], esi
 * 00000001800B55E9: mov     dword ptr [rbp+9E40h+var_6BA0+4], esi
 * 00000001800B55EF: movups  xmm6, [rbp+9E40h+var_6BA0]
 * 00000001800B55F6: call    sub_1800A5ED4
 * 00000001800B55FB: mov     r8, rax
 * 00000001800B55FE: mov     r9d, r12d
 * 00000001800B5601: mov     edx, 1D0h
 * 00000001800B5606: lea     rcx, [rbp+9E40h+var_490]
 * 00000001800B560D: call    sub_1800737C8
 * 00000001800B5612: nop
 * 00000001800B5613: mov     r8, rax
 * 00000001800B5616: mov     rdx, r13
 * 00000001800B5619: lea     rcx, [rbp+9E40h+var_4B0]
 * 00000001800B5620: call    sub_18001B678
 * 00000001800B5625: nop
 * 00000001800B5626: lea     r8, aVertex; "/Vertex"
 * 00000001800B562D: mov     rdx, rax
 * 00000001800B5630: lea     rcx, [rbp+9E40h+var_4850]
 * 00000001800B5637: call    sub_18001B5A8
 * 00000001800B563C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5641: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5646: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B564B: mov     rcx, rax
 * 00000001800B564E: call    sub_18007386C
 * 00000001800B5653: nop
 * 00000001800B5654: lea     rcx, [rbp+9E40h+var_4B0]
 * 00000001800B565B: call    sub_180011020
 * 00000001800B5660: nop
 * 00000001800B5661: lea     rcx, [rbp+9E40h+var_490]
 * 00000001800B5668: call    sub_180011020
 * 00000001800B566D: nop
 * 00000001800B566E: lea     rcx, dword_1801CA668
 * 00000001800B5675: call    _Init_thread_footer
 * 00000001800B567A: mov     rax, [rdi+rbx*8]
 * 00000001800B567E: mov     ecx, [r15+rax]
 * 00000001800B5682: cmp     cs:dword_1801CA66C, ecx
 * 00000001800B5688: jle     loc_1800B5761
 * 00000001800B568E: lea     rcx, dword_1801CA66C
 * 00000001800B5695: call    sub_18000CA40
 * 00000001800B569A: cmp     cs:dword_1801CA66C, r14d
 * 00000001800B56A1: jnz     loc_1800B5761
 * 00000001800B56A7: lea     rax, unk_180144780
 * 00000001800B56AE: mov     qword ptr [rbp+9E40h+var_8E10], rax
 * 00000001800B56B5: lea     rax, unk_1801457D0
 * 00000001800B56BC: mov     qword ptr [rbp+9E40h+var_8E10+8], rax
 * 00000001800B56C3: movups  xmm7, [rbp+9E40h+var_8E10]
 * 00000001800B56CA: mov     dword ptr [rbp+9E40h+var_6B80], esi
 * 00000001800B56D0: mov     dword ptr [rbp+9E40h+var_6B80+4], esi
 * 00000001800B56D6: movups  xmm6, [rbp+9E40h+var_6B80]
 * 00000001800B56DD: call    sub_1800A5ED4
 * 00000001800B56E2: mov     r8, rax
 * 00000001800B56E5: mov     r9d, r12d
 * 00000001800B56E8: mov     edx, 1D2h
 * 00000001800B56ED: lea     rcx, [rbp+9E40h+var_430]
 * 00000001800B56F4: call    sub_1800737C8
 * 00000001800B56F9: nop
 * 00000001800B56FA: mov     r8, rax
 * 00000001800B56FD: mov     rdx, r13
 * 00000001800B5700: lea     rcx, [rbp+9E40h+var_450]
 * 00000001800B5707: call    sub_18001B678
 * 00000001800B570C: nop
 * 00000001800B570D: lea     r8, aVertex; "/Vertex"
 * 00000001800B5714: mov     rdx, rax
 * 00000001800B5717: lea     rcx, [rbp+9E40h+var_4830]
 * 00000001800B571E: call    sub_18001B5A8
 * 00000001800B5723: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5728: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B572D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5732: mov     rcx, rax
 * 00000001800B5735: call    sub_18007386C
 * 00000001800B573A: nop
 * 00000001800B573B: lea     rcx, [rbp+9E40h+var_450]
 * 00000001800B5742: call    sub_180011020
 * 00000001800B5747: nop
 * 00000001800B5748: lea     rcx, [rbp+9E40h+var_430]
 * 00000001800B574F: call    sub_180011020
 * 00000001800B5754: nop
 * 00000001800B5755: lea     rcx, dword_1801CA66C
 * 00000001800B575C: call    _Init_thread_footer
 * 00000001800B5761: mov     rax, [rdi+rbx*8]
 * 00000001800B5765: mov     ecx, [r15+rax]
 * 00000001800B5769: cmp     cs:dword_1801CA670, ecx
 * 00000001800B576F: jle     loc_1800B5848
 * 00000001800B5775: lea     rcx, dword_1801CA670
 * 00000001800B577C: call    sub_18000CA40
 * 00000001800B5781: cmp     cs:dword_1801CA670, r14d
 * 00000001800B5788: jnz     loc_1800B5848
 * 00000001800B578E: lea     rax, unk_180144780
 * 00000001800B5795: mov     qword ptr [rbp+9E40h+var_8E00], rax
 * 00000001800B579C: lea     rax, unk_1801457D0
 * 00000001800B57A3: mov     qword ptr [rbp+9E40h+var_8E00+8], rax
 * 00000001800B57AA: movups  xmm7, [rbp+9E40h+var_8E00]
 * 00000001800B57B1: mov     dword ptr [rbp+9E40h+var_6B60], esi
 * 00000001800B57B7: mov     dword ptr [rbp+9E40h+var_6B60+4], esi
 * 00000001800B57BD: movups  xmm6, [rbp+9E40h+var_6B60]
 * 00000001800B57C4: call    sub_1800A5ED4
 * 00000001800B57C9: mov     r8, rax
 * 00000001800B57CC: mov     r9d, r12d
 * 00000001800B57CF: mov     edx, 1D8h
 * 00000001800B57D4: lea     rcx, [rbp+9E40h+var_3D0]
 * 00000001800B57DB: call    sub_1800737C8
 * 00000001800B57E0: nop
 * 00000001800B57E1: mov     r8, rax
 * 00000001800B57E4: mov     rdx, r13
 * 00000001800B57E7: lea     rcx, [rbp+9E40h+var_3F0]
 * 00000001800B57EE: call    sub_18001B678
 * 00000001800B57F3: nop
 * 00000001800B57F4: lea     r8, aVertex; "/Vertex"
 * 00000001800B57FB: mov     rdx, rax
 * 00000001800B57FE: lea     rcx, [rbp+9E40h+var_4810]
 * 00000001800B5805: call    sub_18001B5A8
 * 00000001800B580A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B580F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5814: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5819: mov     rcx, rax
 * 00000001800B581C: call    sub_18007386C
 * 00000001800B5821: nop
 * 00000001800B5822: lea     rcx, [rbp+9E40h+var_3F0]
 * 00000001800B5829: call    sub_180011020
 * 00000001800B582E: nop
 * 00000001800B582F: lea     rcx, [rbp+9E40h+var_3D0]
 * 00000001800B5836: call    sub_180011020
 * 00000001800B583B: nop
 * 00000001800B583C: lea     rcx, dword_1801CA670
 * 00000001800B5843: call    _Init_thread_footer
 * 00000001800B5848: mov     rax, [rdi+rbx*8]
 * 00000001800B584C: mov     ecx, [r15+rax]
 * 00000001800B5850: cmp     cs:dword_1801CA674, ecx
 * 00000001800B5856: jle     loc_1800B592F
 * 00000001800B585C: lea     rcx, dword_1801CA674
 * 00000001800B5863: call    sub_18000CA40
 * 00000001800B5868: cmp     cs:dword_1801CA674, r14d
 * 00000001800B586F: jnz     loc_1800B592F
 * 00000001800B5875: lea     rax, unk_180144780
 * 00000001800B587C: mov     qword ptr [rbp+9E40h+var_8DF0], rax
 * 00000001800B5883: lea     rax, unk_1801457D0
 * 00000001800B588A: mov     qword ptr [rbp+9E40h+var_8DF0+8], rax
 * 00000001800B5891: movups  xmm7, [rbp+9E40h+var_8DF0]
 * 00000001800B5898: mov     dword ptr [rbp+9E40h+var_6B40], esi
 * 00000001800B589E: mov     dword ptr [rbp+9E40h+var_6B40+4], esi
 * 00000001800B58A4: movups  xmm6, [rbp+9E40h+var_6B40]
 * 00000001800B58AB: call    sub_1800A5ED4
 * 00000001800B58B0: mov     r8, rax
 * 00000001800B58B3: mov     r9d, r12d
 * 00000001800B58B6: mov     edx, 1DAh
 * 00000001800B58BB: lea     rcx, [rbp+9E40h+var_370]
 * 00000001800B58C2: call    sub_1800737C8
 * 00000001800B58C7: nop
 * 00000001800B58C8: mov     r8, rax
 * 00000001800B58CB: mov     rdx, r13
 * 00000001800B58CE: lea     rcx, [rbp+9E40h+var_390]
 * 00000001800B58D5: call    sub_18001B678
 * 00000001800B58DA: nop
 * 00000001800B58DB: lea     r8, aVertex; "/Vertex"
 * 00000001800B58E2: mov     rdx, rax
 * 00000001800B58E5: lea     rcx, [rbp+9E40h+var_47F0]
 * 00000001800B58EC: call    sub_18001B5A8
 * 00000001800B58F1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B58F6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B58FB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5900: mov     rcx, rax
 * 00000001800B5903: call    sub_18007386C
 * 00000001800B5908: nop
 * 00000001800B5909: lea     rcx, [rbp+9E40h+var_390]
 * 00000001800B5910: call    sub_180011020
 * 00000001800B5915: nop
 * 00000001800B5916: lea     rcx, [rbp+9E40h+var_370]
 * 00000001800B591D: call    sub_180011020
 * 00000001800B5922: nop
 * 00000001800B5923: lea     rcx, dword_1801CA674
 * 00000001800B592A: call    _Init_thread_footer
 * 00000001800B592F: mov     rax, [rdi+rbx*8]
 * 00000001800B5933: mov     ecx, [r15+rax]
 * 00000001800B5937: cmp     cs:dword_1801CA678, ecx
 * 00000001800B593D: jle     loc_1800B5A16
 * 00000001800B5943: lea     rcx, dword_1801CA678
 * 00000001800B594A: call    sub_18000CA40
 * 00000001800B594F: cmp     cs:dword_1801CA678, r14d
 * 00000001800B5956: jnz     loc_1800B5A16
 * 00000001800B595C: lea     rax, unk_1801421F0
 * 00000001800B5963: mov     qword ptr [rbp+9E40h+var_8DE0], rax
 * 00000001800B596A: lea     rax, unk_180143C40
 * 00000001800B5971: mov     qword ptr [rbp+9E40h+var_8DE0+8], rax
 * 00000001800B5978: movups  xmm7, [rbp+9E40h+var_8DE0]
 * 00000001800B597F: mov     dword ptr [rbp+9E40h+var_6B20], esi
 * 00000001800B5985: mov     dword ptr [rbp+9E40h+var_6B20+4], esi
 * 00000001800B598B: movups  xmm6, [rbp+9E40h+var_6B20]
 * 00000001800B5992: call    sub_1800A5ED4
 * 00000001800B5997: mov     r8, rax
 * 00000001800B599A: mov     r9d, r12d
 * 00000001800B599D: mov     edx, 1E0h
 * 00000001800B59A2: lea     rcx, [rbp+9E40h+var_310]
 * 00000001800B59A9: call    sub_1800737C8
 * 00000001800B59AE: nop
 * 00000001800B59AF: mov     r8, rax
 * 00000001800B59B2: mov     rdx, r13
 * 00000001800B59B5: lea     rcx, [rbp+9E40h+var_330]
 * 00000001800B59BC: call    sub_18001B678
 * 00000001800B59C1: nop
 * 00000001800B59C2: lea     r8, aVertex; "/Vertex"
 * 00000001800B59C9: mov     rdx, rax
 * 00000001800B59CC: lea     rcx, [rbp+9E40h+var_47D0]
 * 00000001800B59D3: call    sub_18001B5A8
 * 00000001800B59D8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B59DD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B59E2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B59E7: mov     rcx, rax
 * 00000001800B59EA: call    sub_18007386C
 * 00000001800B59EF: nop
 * 00000001800B59F0: lea     rcx, [rbp+9E40h+var_330]
 * 00000001800B59F7: call    sub_180011020
 * 00000001800B59FC: nop
 * 00000001800B59FD: lea     rcx, [rbp+9E40h+var_310]
 * 00000001800B5A04: call    sub_180011020
 * 00000001800B5A09: nop
 * 00000001800B5A0A: lea     rcx, dword_1801CA678
 * 00000001800B5A11: call    _Init_thread_footer
 * 00000001800B5A16: mov     rax, [rdi+rbx*8]
 * 00000001800B5A1A: mov     ecx, [r15+rax]
 * 00000001800B5A1E: cmp     cs:dword_1801CA67C, ecx
 * 00000001800B5A24: jle     loc_1800B5AFD
 * 00000001800B5A2A: lea     rcx, dword_1801CA67C
 * 00000001800B5A31: call    sub_18000CA40
 * 00000001800B5A36: cmp     cs:dword_1801CA67C, r14d
 * 00000001800B5A3D: jnz     loc_1800B5AFD
 * 00000001800B5A43: lea     rax, unk_1801421F0
 * 00000001800B5A4A: mov     qword ptr [rbp+9E40h+var_8DD0], rax
 * 00000001800B5A51: lea     rax, unk_180143C40
 * 00000001800B5A58: mov     qword ptr [rbp+9E40h+var_8DD0+8], rax
 * 00000001800B5A5F: movups  xmm7, [rbp+9E40h+var_8DD0]
 * 00000001800B5A66: mov     dword ptr [rbp+9E40h+var_6B00], esi
 * 00000001800B5A6C: mov     dword ptr [rbp+9E40h+var_6B00+4], esi
 * 00000001800B5A72: movups  xmm6, [rbp+9E40h+var_6B00]
 * 00000001800B5A79: call    sub_1800A5ED4
 * 00000001800B5A7E: mov     r8, rax
 * 00000001800B5A81: mov     r9d, r12d
 * 00000001800B5A84: mov     edx, 1E2h
 * 00000001800B5A89: lea     rcx, [rbp+9E40h+var_2B0]
 * 00000001800B5A90: call    sub_1800737C8
 * 00000001800B5A95: nop
 * 00000001800B5A96: mov     r8, rax
 * 00000001800B5A99: mov     rdx, r13
 * 00000001800B5A9C: lea     rcx, [rbp+9E40h+var_2D0]
 * 00000001800B5AA3: call    sub_18001B678
 * 00000001800B5AA8: nop
 * 00000001800B5AA9: lea     r8, aVertex; "/Vertex"
 * 00000001800B5AB0: mov     rdx, rax
 * 00000001800B5AB3: lea     rcx, [rbp+9E40h+var_47B0]
 * 00000001800B5ABA: call    sub_18001B5A8
 * 00000001800B5ABF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5AC4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5AC9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5ACE: mov     rcx, rax
 * 00000001800B5AD1: call    sub_18007386C
 * 00000001800B5AD6: nop
 * 00000001800B5AD7: lea     rcx, [rbp+9E40h+var_2D0]
 * 00000001800B5ADE: call    sub_180011020
 * 00000001800B5AE3: nop
 * 00000001800B5AE4: lea     rcx, [rbp+9E40h+var_2B0]
 * 00000001800B5AEB: call    sub_180011020
 * 00000001800B5AF0: nop
 * 00000001800B5AF1: lea     rcx, dword_1801CA67C
 * 00000001800B5AF8: call    _Init_thread_footer
 * 00000001800B5AFD: mov     rax, [rdi+rbx*8]
 * 00000001800B5B01: mov     ecx, [r15+rax]
 * 00000001800B5B05: cmp     cs:dword_1801CA680, ecx
 * 00000001800B5B0B: jle     loc_1800B5BE4
 * 00000001800B5B11: lea     rcx, dword_1801CA680
 * 00000001800B5B18: call    sub_18000CA40
 * 00000001800B5B1D: cmp     cs:dword_1801CA680, r14d
 * 00000001800B5B24: jnz     loc_1800B5BE4
 * 00000001800B5B2A: lea     rax, unk_1801421F0
 * 00000001800B5B31: mov     qword ptr [rbp+9E40h+var_8DC0], rax
 * 00000001800B5B38: lea     rax, unk_180143C40
 * 00000001800B5B3F: mov     qword ptr [rbp+9E40h+var_8DC0+8], rax
 * 00000001800B5B46: movups  xmm7, [rbp+9E40h+var_8DC0]
 * 00000001800B5B4D: mov     dword ptr [rbp+9E40h+var_6AE0], esi
 * 00000001800B5B53: mov     dword ptr [rbp+9E40h+var_6AE0+4], esi
 * 00000001800B5B59: movups  xmm6, [rbp+9E40h+var_6AE0]
 * 00000001800B5B60: call    sub_1800A5ED4
 * 00000001800B5B65: mov     r8, rax
 * 00000001800B5B68: mov     r9d, r12d
 * 00000001800B5B6B: mov     edx, 1E8h
 * 00000001800B5B70: lea     rcx, [rbp+9E40h+var_250]
 * 00000001800B5B77: call    sub_1800737C8
 * 00000001800B5B7C: nop
 * 00000001800B5B7D: mov     r8, rax
 * 00000001800B5B80: mov     rdx, r13
 * 00000001800B5B83: lea     rcx, [rbp+9E40h+var_270]
 * 00000001800B5B8A: call    sub_18001B678
 * 00000001800B5B8F: nop
 * 00000001800B5B90: lea     r8, aVertex; "/Vertex"
 * 00000001800B5B97: mov     rdx, rax
 * 00000001800B5B9A: lea     rcx, [rbp+9E40h+var_4790]
 * 00000001800B5BA1: call    sub_18001B5A8
 * 00000001800B5BA6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5BAB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5BB0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5BB5: mov     rcx, rax
 * 00000001800B5BB8: call    sub_18007386C
 * 00000001800B5BBD: nop
 * 00000001800B5BBE: lea     rcx, [rbp+9E40h+var_270]
 * 00000001800B5BC5: call    sub_180011020
 * 00000001800B5BCA: nop
 * 00000001800B5BCB: lea     rcx, [rbp+9E40h+var_250]
 * 00000001800B5BD2: call    sub_180011020
 * 00000001800B5BD7: nop
 * 00000001800B5BD8: lea     rcx, dword_1801CA680
 * 00000001800B5BDF: call    _Init_thread_footer
 * 00000001800B5BE4: mov     rax, [rdi+rbx*8]
 * 00000001800B5BE8: mov     ecx, [r15+rax]
 * 00000001800B5BEC: cmp     cs:dword_1801CA684, ecx
 * 00000001800B5BF2: jle     loc_1800B5CCB
 * 00000001800B5BF8: lea     rcx, dword_1801CA684
 * 00000001800B5BFF: call    sub_18000CA40
 * 00000001800B5C04: cmp     cs:dword_1801CA684, r14d
 * 00000001800B5C0B: jnz     loc_1800B5CCB
 * 00000001800B5C11: lea     rax, unk_1801421F0
 * 00000001800B5C18: mov     qword ptr [rbp+9E40h+var_8DB0], rax
 * 00000001800B5C1F: lea     rax, unk_180143C40
 * 00000001800B5C26: mov     qword ptr [rbp+9E40h+var_8DB0+8], rax
 * 00000001800B5C2D: movups  xmm7, [rbp+9E40h+var_8DB0]
 * 00000001800B5C34: mov     dword ptr [rbp+9E40h+var_6AC0], esi
 * 00000001800B5C3A: mov     dword ptr [rbp+9E40h+var_6AC0+4], esi
 * 00000001800B5C40: movups  xmm6, [rbp+9E40h+var_6AC0]
 * 00000001800B5C47: call    sub_1800A5ED4
 * 00000001800B5C4C: mov     r8, rax
 * 00000001800B5C4F: mov     r9d, r12d
 * 00000001800B5C52: mov     edx, 1EAh
 * 00000001800B5C57: lea     rcx, [rbp+9E40h+var_1F0]
 * 00000001800B5C5E: call    sub_1800737C8
 * 00000001800B5C63: nop
 * 00000001800B5C64: mov     r8, rax
 * 00000001800B5C67: mov     rdx, r13
 * 00000001800B5C6A: lea     rcx, [rbp+9E40h+var_210]
 * 00000001800B5C71: call    sub_18001B678
 * 00000001800B5C76: nop
 * 00000001800B5C77: lea     r8, aVertex; "/Vertex"
 * 00000001800B5C7E: mov     rdx, rax
 * 00000001800B5C81: lea     rcx, [rbp+9E40h+var_4770]
 * 00000001800B5C88: call    sub_18001B5A8
 * 00000001800B5C8D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5C92: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5C97: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5C9C: mov     rcx, rax
 * 00000001800B5C9F: call    sub_18007386C
 * 00000001800B5CA4: nop
 * 00000001800B5CA5: lea     rcx, [rbp+9E40h+var_210]
 * 00000001800B5CAC: call    sub_180011020
 * 00000001800B5CB1: nop
 * 00000001800B5CB2: lea     rcx, [rbp+9E40h+var_1F0]
 * 00000001800B5CB9: call    sub_180011020
 * 00000001800B5CBE: nop
 * 00000001800B5CBF: lea     rcx, dword_1801CA684
 * 00000001800B5CC6: call    _Init_thread_footer
 * 00000001800B5CCB: mov     rax, [rdi+rbx*8]
 * 00000001800B5CCF: mov     ecx, [r15+rax]
 * 00000001800B5CD3: cmp     cs:dword_1801CA688, ecx
 * 00000001800B5CD9: jle     loc_1800B5DB2
 * 00000001800B5CDF: lea     rcx, dword_1801CA688
 * 00000001800B5CE6: call    sub_18000CA40
 * 00000001800B5CEB: cmp     cs:dword_1801CA688, r14d
 * 00000001800B5CF2: jnz     loc_1800B5DB2
 * 00000001800B5CF8: lea     rax, unk_1801421F0
 * 00000001800B5CFF: mov     qword ptr [rbp+9E40h+var_8DA0], rax
 * 00000001800B5D06: lea     rax, unk_180143C40
 * 00000001800B5D0D: mov     qword ptr [rbp+9E40h+var_8DA0+8], rax
 * 00000001800B5D14: movups  xmm7, [rbp+9E40h+var_8DA0]
 * 00000001800B5D1B: mov     dword ptr [rbp+9E40h+var_6AA0], esi
 * 00000001800B5D21: mov     dword ptr [rbp+9E40h+var_6AA0+4], esi
 * 00000001800B5D27: movups  xmm6, [rbp+9E40h+var_6AA0]
 * 00000001800B5D2E: call    sub_1800A5ED4
 * 00000001800B5D33: mov     r8, rax
 * 00000001800B5D36: mov     r9d, r12d
 * 00000001800B5D39: mov     edx, 1F0h
 * 00000001800B5D3E: lea     rcx, [rbp+9E40h+var_190]
 * 00000001800B5D45: call    sub_1800737C8
 * 00000001800B5D4A: nop
 * 00000001800B5D4B: mov     r8, rax
 * 00000001800B5D4E: mov     rdx, r13
 * 00000001800B5D51: lea     rcx, [rbp+9E40h+var_1B0]
 * 00000001800B5D58: call    sub_18001B678
 * 00000001800B5D5D: nop
 * 00000001800B5D5E: lea     r8, aVertex; "/Vertex"
 * 00000001800B5D65: mov     rdx, rax
 * 00000001800B5D68: lea     rcx, [rbp+9E40h+var_4750]
 * 00000001800B5D6F: call    sub_18001B5A8
 * 00000001800B5D74: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5D79: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5D7E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5D83: mov     rcx, rax
 * 00000001800B5D86: call    sub_18007386C
 * 00000001800B5D8B: nop
 * 00000001800B5D8C: lea     rcx, [rbp+9E40h+var_1B0]
 * 00000001800B5D93: call    sub_180011020
 * 00000001800B5D98: nop
 * 00000001800B5D99: lea     rcx, [rbp+9E40h+var_190]
 * 00000001800B5DA0: call    sub_180011020
 * 00000001800B5DA5: nop
 * 00000001800B5DA6: lea     rcx, dword_1801CA688
 * 00000001800B5DAD: call    _Init_thread_footer
 * 00000001800B5DB2: mov     rax, [rdi+rbx*8]
 * 00000001800B5DB6: mov     ecx, [r15+rax]
 * 00000001800B5DBA: cmp     cs:dword_1801CA68C, ecx
 * 00000001800B5DC0: jle     loc_1800B5E99
 * 00000001800B5DC6: lea     rcx, dword_1801CA68C
 * 00000001800B5DCD: call    sub_18000CA40
 * 00000001800B5DD2: cmp     cs:dword_1801CA68C, r14d
 * 00000001800B5DD9: jnz     loc_1800B5E99
 * 00000001800B5DDF: lea     rax, unk_1801421F0
 * 00000001800B5DE6: mov     qword ptr [rbp+9E40h+var_8D90], rax
 * 00000001800B5DED: lea     rax, unk_180143C40
 * 00000001800B5DF4: mov     qword ptr [rbp+9E40h+var_8D90+8], rax
 * 00000001800B5DFB: movups  xmm7, [rbp+9E40h+var_8D90]
 * 00000001800B5E02: mov     dword ptr [rbp+9E40h+var_6A80], esi
 * 00000001800B5E08: mov     dword ptr [rbp+9E40h+var_6A80+4], esi
 * 00000001800B5E0E: movups  xmm6, [rbp+9E40h+var_6A80]
 * 00000001800B5E15: call    sub_1800A5ED4
 * 00000001800B5E1A: mov     r8, rax
 * 00000001800B5E1D: mov     r9d, r12d
 * 00000001800B5E20: mov     edx, 1F2h
 * 00000001800B5E25: lea     rcx, [rbp+9E40h+var_130]
 * 00000001800B5E2C: call    sub_1800737C8
 * 00000001800B5E31: nop
 * 00000001800B5E32: mov     r8, rax
 * 00000001800B5E35: mov     rdx, r13
 * 00000001800B5E38: lea     rcx, [rbp+9E40h+var_150]
 * 00000001800B5E3F: call    sub_18001B678
 * 00000001800B5E44: nop
 * 00000001800B5E45: lea     r8, aVertex; "/Vertex"
 * 00000001800B5E4C: mov     rdx, rax
 * 00000001800B5E4F: lea     rcx, [rbp+9E40h+var_4730]
 * 00000001800B5E56: call    sub_18001B5A8
 * 00000001800B5E5B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5E60: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5E65: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5E6A: mov     rcx, rax
 * 00000001800B5E6D: call    sub_18007386C
 * 00000001800B5E72: nop
 * 00000001800B5E73: lea     rcx, [rbp+9E40h+var_150]
 * 00000001800B5E7A: call    sub_180011020
 * 00000001800B5E7F: nop
 * 00000001800B5E80: lea     rcx, [rbp+9E40h+var_130]
 * 00000001800B5E87: call    sub_180011020
 * 00000001800B5E8C: nop
 * 00000001800B5E8D: lea     rcx, dword_1801CA68C
 * 00000001800B5E94: call    _Init_thread_footer
 * 00000001800B5E99: mov     rax, [rdi+rbx*8]
 * 00000001800B5E9D: mov     ecx, [r15+rax]
 * 00000001800B5EA1: cmp     cs:dword_1801CA690, ecx
 * 00000001800B5EA7: jle     loc_1800B5F80
 * 00000001800B5EAD: lea     rcx, dword_1801CA690
 * 00000001800B5EB4: call    sub_18000CA40
 * 00000001800B5EB9: cmp     cs:dword_1801CA690, r14d
 * 00000001800B5EC0: jnz     loc_1800B5F80
 * 00000001800B5EC6: lea     rax, unk_1801421F0
 * 00000001800B5ECD: mov     qword ptr [rbp+9E40h+var_8D80], rax
 * 00000001800B5ED4: lea     rax, unk_180143C40
 * 00000001800B5EDB: mov     qword ptr [rbp+9E40h+var_8D80+8], rax
 * 00000001800B5EE2: movups  xmm7, [rbp+9E40h+var_8D80]
 * 00000001800B5EE9: mov     dword ptr [rbp+9E40h+var_6A60], esi
 * 00000001800B5EEF: mov     dword ptr [rbp+9E40h+var_6A60+4], esi
 * 00000001800B5EF5: movups  xmm6, [rbp+9E40h+var_6A60]
 * 00000001800B5EFC: call    sub_1800A5ED4
 * 00000001800B5F01: mov     r8, rax
 * 00000001800B5F04: mov     r9d, r12d
 * 00000001800B5F07: mov     edx, 1F8h
 * 00000001800B5F0C: lea     rcx, [rbp+9E40h+var_D0]
 * 00000001800B5F13: call    sub_1800737C8
 * 00000001800B5F18: nop
 * 00000001800B5F19: mov     r8, rax
 * 00000001800B5F1C: mov     rdx, r13
 * 00000001800B5F1F: lea     rcx, [rbp+9E40h+var_F0]
 * 00000001800B5F26: call    sub_18001B678
 * 00000001800B5F2B: nop
 * 00000001800B5F2C: lea     r8, aVertex; "/Vertex"
 * 00000001800B5F33: mov     rdx, rax
 * 00000001800B5F36: lea     rcx, [rbp+9E40h+var_4710]
 * 00000001800B5F3D: call    sub_18001B5A8
 * 00000001800B5F42: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5F47: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5F4C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5F51: mov     rcx, rax
 * 00000001800B5F54: call    sub_18007386C
 * 00000001800B5F59: nop
 * 00000001800B5F5A: lea     rcx, [rbp+9E40h+var_F0]
 * 00000001800B5F61: call    sub_180011020
 * 00000001800B5F66: nop
 * 00000001800B5F67: lea     rcx, [rbp+9E40h+var_D0]
 * 00000001800B5F6E: call    sub_180011020
 * 00000001800B5F73: nop
 * 00000001800B5F74: lea     rcx, dword_1801CA690
 * 00000001800B5F7B: call    _Init_thread_footer
 * 00000001800B5F80: mov     rax, [rdi+rbx*8]
 * 00000001800B5F84: mov     ecx, [r15+rax]
 * 00000001800B5F88: cmp     cs:dword_1801CA694, ecx
 * 00000001800B5F8E: jle     loc_1800B6067
 * 00000001800B5F94: lea     rcx, dword_1801CA694
 * 00000001800B5F9B: call    sub_18000CA40
 * 00000001800B5FA0: cmp     cs:dword_1801CA694, r14d
 * 00000001800B5FA7: jnz     loc_1800B6067
 * 00000001800B5FAD: lea     rax, unk_1801421F0
 * 00000001800B5FB4: mov     qword ptr [rbp+9E40h+var_8D70], rax
 * 00000001800B5FBB: lea     rax, unk_180143C40
 * 00000001800B5FC2: mov     qword ptr [rbp+9E40h+var_8D70+8], rax
 * 00000001800B5FC9: movups  xmm7, [rbp+9E40h+var_8D70]
 * 00000001800B5FD0: mov     dword ptr [rbp+9E40h+var_6A40], esi
 * 00000001800B5FD6: mov     dword ptr [rbp+9E40h+var_6A40+4], esi
 * 00000001800B5FDC: movups  xmm6, [rbp+9E40h+var_6A40]
 * 00000001800B5FE3: call    sub_1800A5ED4
 * 00000001800B5FE8: mov     r8, rax
 * 00000001800B5FEB: mov     r9d, r12d
 * 00000001800B5FEE: mov     edx, 1FAh
 * 00000001800B5FF3: lea     rcx, [rbp+9E40h+var_70]
 * 00000001800B5FFA: call    sub_1800737C8
 * 00000001800B5FFF: nop
 * 00000001800B6000: mov     r8, rax
 * 00000001800B6003: mov     rdx, r13
 * 00000001800B6006: lea     rcx, [rbp+9E40h+var_90]
 * 00000001800B600D: call    sub_18001B678
 * 00000001800B6012: nop
 * 00000001800B6013: lea     r8, aVertex; "/Vertex"
 * 00000001800B601A: mov     rdx, rax
 * 00000001800B601D: lea     rcx, [rbp+9E40h+var_46F0]
 * 00000001800B6024: call    sub_18001B5A8
 * 00000001800B6029: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B602E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B6033: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B6038: mov     rcx, rax
 * 00000001800B603B: call    sub_18007386C
 * 00000001800B6040: nop
 * 00000001800B6041: lea     rcx, [rbp+9E40h+var_90]
 * 00000001800B6048: call    sub_180011020
 * 00000001800B604D: nop
 * 00000001800B604E: lea     rcx, [rbp+9E40h+var_70]
 * 00000001800B6055: call    sub_180011020
 * 00000001800B605A: nop
 * 00000001800B605B: lea     rcx, dword_1801CA694
 * 00000001800B6062: call    _Init_thread_footer
 * 00000001800B6067: xor     eax, eax
 * 00000001800B6069: mov     rcx, [rbp+9E40h+var_50]
 * 00000001800B6070: xor     rcx, rsp; StackCookie
 * 00000001800B6073: call    __security_check_cookie
 * 00000001800B6078: lea     r11, [rsp+9F40h+var_20]
 * 00000001800B6080: mov     rbx, [r11+30h]
 * 00000001800B6084: mov     rsi, [r11+38h]
 * 00000001800B6088: mov     rdi, [r11+40h]
 * 00000001800B608C: movaps  xmm6, xmmword ptr [r11-10h]
 * 00000001800B6091: movaps  xmm7, xmmword ptr [r11-20h]
 * 00000001800B6096: mov     rsp, r11
 * 00000001800B6099: pop     r15
 * 00000001800B609B: pop     r14
 * 00000001800B609D: pop     r13
 * 00000001800B609F: pop     r12
 * 00000001800B60A1: pop     rbp
 * 00000001800B60A2: retn
 */
