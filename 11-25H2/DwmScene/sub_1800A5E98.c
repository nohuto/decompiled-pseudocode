/*
 * XREFs of sub_1800A5E98 @ 0x1800A5E98
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
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     sub_180010F20 @ 0x180010F20 (sub_180010F20.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180073668 @ 0x180073668 (sub_180073668.c)
 *     sub_18007370C @ 0x18007370C (sub_18007370C.c)
 *     sub_1800A5D74 @ 0x1800A5D74 (sub_1800A5D74.c)
 *     __alloca_probe @ 0x1800D4DE0 (__alloca_probe.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1800A5E98 @ 0x1800A5E98
 * Reason: Hex-Rays returned no pseudocode for 0x1800A5E98
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800A5E98: mov     rax, rsp
 * 00000001800A5E9B: mov     [rax+8], rbx
 * 00000001800A5E9F: mov     [rax+10h], rsi
 * 00000001800A5EA3: mov     [rax+18h], rdi
 * 00000001800A5EA7: push    rbp
 * 00000001800A5EA8: push    r12
 * 00000001800A5EAA: push    r13
 * 00000001800A5EAC: push    r14
 * 00000001800A5EAE: push    r15
 * 00000001800A5EB0: lea     rbp, [rax-9E48h]
 * 00000001800A5EB7: mov     eax, 9F20h
 * 00000001800A5EBC: call    __alloca_probe
 * 00000001800A5EC1: sub     rsp, rax
 * 00000001800A5EC4: movaps  [rsp+9F40h+var_38+8], xmm6
 * 00000001800A5ECC: movaps  [rsp+9F40h+var_48+8], xmm7
 * 00000001800A5ED4: mov     rax, cs:__security_cookie
 * 00000001800A5EDB: xor     rax, rsp
 * 00000001800A5EDE: mov     [rbp+9E40h+var_50], rax
 * 00000001800A5EE5: mov     ebx, cs:TlsIndex
 * 00000001800A5EEB: mov     rdi, gs:58h
 * 00000001800A5EF4: mov     r15d, 10h
 * 00000001800A5EFA: mov     rax, [rdi+rbx*8]
 * 00000001800A5EFE: or      r14d, 0FFFFFFFFh
 * 00000001800A5F02: lea     esi, [r14+2]
 * 00000001800A5F06: lea     r12d, [r14+0Ah]
 * 00000001800A5F0A: lea     r13, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800A5F11: mov     eax, [r15+rax]
 * 00000001800A5F15: cmp     cs:dword_1801C9220, eax
 * 00000001800A5F1B: jle     loc_1800A5FF5
 * 00000001800A5F21: lea     rcx, dword_1801C9220
 * 00000001800A5F28: call    sub_18000C8D0
 * 00000001800A5F2D: cmp     cs:dword_1801C9220, r14d
 * 00000001800A5F34: jnz     loc_1800A5FF5
 * 00000001800A5F3A: lea     rax, unk_18017FE90
 * 00000001800A5F41: mov     qword ptr [rbp+9E40h+var_91C0], rax
 * 00000001800A5F48: lea     rax, unk_180186274
 * 00000001800A5F4F: mov     qword ptr [rbp+9E40h+var_91C0+8], rax
 * 00000001800A5F56: movups  xmm7, [rbp+9E40h+var_91C0]
 * 00000001800A5F5D: mov     dword ptr [rbp+9E40h+var_6A20], 5
 * 00000001800A5F67: mov     dword ptr [rbp+9E40h+var_6A20+4], esi
 * 00000001800A5F6D: movups  xmm6, [rbp+9E40h+var_6A20]
 * 00000001800A5F74: call    sub_1800A5D74
 * 00000001800A5F79: mov     r8, rax
 * 00000001800A5F7C: mov     r9d, r12d
 * 00000001800A5F7F: xor     edx, edx
 * 00000001800A5F81: lea     rcx, [rbp+9E40h+var_3410]
 * 00000001800A5F88: call    sub_180073668
 * 00000001800A5F8D: nop
 * 00000001800A5F8E: mov     r8, rax
 * 00000001800A5F91: mov     rdx, r13
 * 00000001800A5F94: lea     rcx, [rbp+9E40h+var_3530]
 * 00000001800A5F9B: call    sub_18001B518
 * 00000001800A5FA0: nop
 * 00000001800A5FA1: lea     r8, aPixel; "/Pixel"
 * 00000001800A5FA8: mov     rdx, rax
 * 00000001800A5FAB: lea     rcx, [rbp+9E40h+var_6A10]
 * 00000001800A5FB2: call    sub_18001B448
 * 00000001800A5FB7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A5FBC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A5FC1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A5FC6: mov     rcx, rax
 * 00000001800A5FC9: call    sub_18007370C
 * 00000001800A5FCE: nop
 * 00000001800A5FCF: lea     rcx, [rbp+9E40h+var_3530]
 * 00000001800A5FD6: call    sub_180010F20
 * 00000001800A5FDB: nop
 * 00000001800A5FDC: lea     rcx, [rbp+9E40h+var_3410]
 * 00000001800A5FE3: call    sub_180010F20
 * 00000001800A5FE8: nop
 * 00000001800A5FE9: lea     rcx, dword_1801C9220
 * 00000001800A5FF0: call    _Init_thread_footer
 * 00000001800A5FF5: mov     rax, [rdi+rbx*8]
 * 00000001800A5FF9: mov     eax, [r15+rax]
 * 00000001800A5FFD: cmp     cs:dword_1801C9224, eax
 * 00000001800A6003: jle     loc_1800A60D8
 * 00000001800A6009: lea     rcx, dword_1801C9224
 * 00000001800A6010: call    sub_18000C8D0
 * 00000001800A6015: cmp     cs:dword_1801C9224, r14d
 * 00000001800A601C: jnz     loc_1800A60D8
 * 00000001800A6022: lea     rax, unk_180186280
 * 00000001800A6029: mov     qword ptr [rsp+9F40h+var_9EF8+8], rax
 * 00000001800A602E: lea     rax, unk_180186C78
 * 00000001800A6035: mov     qword ptr [rsp+9F40h+var_9EE8], rax
 * 00000001800A603A: movups  xmm7, [rsp+9F40h+var_9EF8+8]
 * 00000001800A603F: mov     dword ptr [rbp+9E40h+var_8D40], 5
 * 00000001800A6049: mov     dword ptr [rbp+9E40h+var_8D40+4], esi
 * 00000001800A604F: movups  xmm6, [rbp+9E40h+var_8D40]
 * 00000001800A6056: call    sub_1800A5D74
 * 00000001800A605B: mov     r8, rax
 * 00000001800A605E: mov     r9d, r12d
 * 00000001800A6061: mov     rdx, rsi
 * 00000001800A6064: lea     rcx, [rbp+9E40h+var_31D0]
 * 00000001800A606B: call    sub_180073668
 * 00000001800A6070: nop
 * 00000001800A6071: mov     r8, rax
 * 00000001800A6074: mov     rdx, r13
 * 00000001800A6077: lea     rcx, [rbp+9E40h+var_32F0]
 * 00000001800A607E: call    sub_18001B518
 * 00000001800A6083: nop
 * 00000001800A6084: lea     r8, aPixel; "/Pixel"
 * 00000001800A608B: mov     rdx, rax
 * 00000001800A608E: lea     rcx, [rbp+9E40h+var_69B0]
 * 00000001800A6095: call    sub_18001B448
 * 00000001800A609A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A609F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A60A4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A60A9: mov     rcx, rax
 * 00000001800A60AC: call    sub_18007370C
 * 00000001800A60B1: nop
 * 00000001800A60B2: lea     rcx, [rbp+9E40h+var_32F0]
 * 00000001800A60B9: call    sub_180010F20
 * 00000001800A60BE: nop
 * 00000001800A60BF: lea     rcx, [rbp+9E40h+var_31D0]
 * 00000001800A60C6: call    sub_180010F20
 * 00000001800A60CB: nop
 * 00000001800A60CC: lea     rcx, dword_1801C9224
 * 00000001800A60D3: call    _Init_thread_footer
 * 00000001800A60D8: mov     rax, [rdi+rbx*8]
 * 00000001800A60DC: mov     eax, [r15+rax]
 * 00000001800A60E0: cmp     cs:dword_1801C9228, eax
 * 00000001800A60E6: jle     loc_1800A61BD
 * 00000001800A60EC: lea     rcx, dword_1801C9228
 * 00000001800A60F3: call    sub_18000C8D0
 * 00000001800A60F8: cmp     cs:dword_1801C9228, r14d
 * 00000001800A60FF: jnz     loc_1800A61BD
 * 00000001800A6105: lea     rax, unk_18017FE90
 * 00000001800A610C: mov     qword ptr [rsp+9F40h+var_9EE8+8], rax
 * 00000001800A6111: lea     rax, unk_180186274
 * 00000001800A6118: mov     qword ptr [rsp+9F40h+var_9ED8], rax
 * 00000001800A611D: movups  xmm7, [rsp+9F40h+var_9EE8+8]
 * 00000001800A6122: mov     dword ptr [rbp+9E40h+var_8D20], 5
 * 00000001800A612C: mov     dword ptr [rbp+9E40h+var_8D20+4], esi
 * 00000001800A6132: movups  xmm6, [rbp+9E40h+var_8D20]
 * 00000001800A6139: call    sub_1800A5D74
 * 00000001800A613E: mov     r8, rax
 * 00000001800A6141: mov     r9d, r12d
 * 00000001800A6144: mov     edx, 2
 * 00000001800A6149: lea     rcx, [rbp+9E40h+var_2F90]
 * 00000001800A6150: call    sub_180073668
 * 00000001800A6155: nop
 * 00000001800A6156: mov     r8, rax
 * 00000001800A6159: mov     rdx, r13
 * 00000001800A615C: lea     rcx, [rbp+9E40h+var_30B0]
 * 00000001800A6163: call    sub_18001B518
 * 00000001800A6168: nop
 * 00000001800A6169: lea     r8, aPixel; "/Pixel"
 * 00000001800A6170: mov     rdx, rax
 * 00000001800A6173: lea     rcx, [rbp+9E40h+var_6950]
 * 00000001800A617A: call    sub_18001B448
 * 00000001800A617F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6184: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6189: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A618E: mov     rcx, rax
 * 00000001800A6191: call    sub_18007370C
 * 00000001800A6196: nop
 * 00000001800A6197: lea     rcx, [rbp+9E40h+var_30B0]
 * 00000001800A619E: call    sub_180010F20
 * 00000001800A61A3: nop
 * 00000001800A61A4: lea     rcx, [rbp+9E40h+var_2F90]
 * 00000001800A61AB: call    sub_180010F20
 * 00000001800A61B0: nop
 * 00000001800A61B1: lea     rcx, dword_1801C9228
 * 00000001800A61B8: call    _Init_thread_footer
 * 00000001800A61BD: mov     rax, [rdi+rbx*8]
 * 00000001800A61C1: mov     eax, [r15+rax]
 * 00000001800A61C5: cmp     cs:dword_1801C922C, eax
 * 00000001800A61CB: jle     loc_1800A62A2
 * 00000001800A61D1: lea     rcx, dword_1801C922C
 * 00000001800A61D8: call    sub_18000C8D0
 * 00000001800A61DD: cmp     cs:dword_1801C922C, r14d
 * 00000001800A61E4: jnz     loc_1800A62A2
 * 00000001800A61EA: lea     rax, unk_180186C80
 * 00000001800A61F1: mov     qword ptr [rsp+9F40h+var_9ED8+8], rax
 * 00000001800A61F6: lea     rax, unk_180189E24
 * 00000001800A61FD: mov     [rsp+9F40h+var_9EC8], rax
 * 00000001800A6202: movups  xmm7, [rsp+9F40h+var_9ED8+8]
 * 00000001800A6207: mov     dword ptr [rbp+9E40h+var_8D00], 5
 * 00000001800A6211: mov     dword ptr [rbp+9E40h+var_8D00+4], esi
 * 00000001800A6217: movups  xmm6, [rbp+9E40h+var_8D00]
 * 00000001800A621E: call    sub_1800A5D74
 * 00000001800A6223: mov     r8, rax
 * 00000001800A6226: mov     r9d, r12d
 * 00000001800A6229: mov     edx, 4
 * 00000001800A622E: lea     rcx, [rbp+9E40h+var_2D50]
 * 00000001800A6235: call    sub_180073668
 * 00000001800A623A: nop
 * 00000001800A623B: mov     r8, rax
 * 00000001800A623E: mov     rdx, r13
 * 00000001800A6241: lea     rcx, [rbp+9E40h+var_2E70]
 * 00000001800A6248: call    sub_18001B518
 * 00000001800A624D: nop
 * 00000001800A624E: lea     r8, aPixel; "/Pixel"
 * 00000001800A6255: mov     rdx, rax
 * 00000001800A6258: lea     rcx, [rbp+9E40h+var_68F0]
 * 00000001800A625F: call    sub_18001B448
 * 00000001800A6264: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6269: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A626E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6273: mov     rcx, rax
 * 00000001800A6276: call    sub_18007370C
 * 00000001800A627B: nop
 * 00000001800A627C: lea     rcx, [rbp+9E40h+var_2E70]
 * 00000001800A6283: call    sub_180010F20
 * 00000001800A6288: nop
 * 00000001800A6289: lea     rcx, [rbp+9E40h+var_2D50]
 * 00000001800A6290: call    sub_180010F20
 * 00000001800A6295: nop
 * 00000001800A6296: lea     rcx, dword_1801C922C
 * 00000001800A629D: call    _Init_thread_footer
 * 00000001800A62A2: mov     rax, [rdi+rbx*8]
 * 00000001800A62A6: mov     ecx, [r15+rax]
 * 00000001800A62AA: cmp     cs:dword_1801C9230, ecx
 * 00000001800A62B0: jle     loc_1800A6384
 * 00000001800A62B6: lea     rcx, dword_1801C9230
 * 00000001800A62BD: call    sub_18000C8D0
 * 00000001800A62C2: cmp     cs:dword_1801C9230, r14d
 * 00000001800A62C9: jnz     loc_1800A6384
 * 00000001800A62CF: lea     rax, unk_180186280
 * 00000001800A62D6: mov     qword ptr [rbp+9E40h+var_9EC0], rax
 * 00000001800A62DA: lea     rax, unk_180186C78
 * 00000001800A62E1: mov     qword ptr [rbp+9E40h+var_9EC0+8], rax
 * 00000001800A62E5: movups  xmm7, [rbp+9E40h+var_9EC0]
 * 00000001800A62E9: mov     dword ptr [rbp+9E40h+var_8CE0], 5
 * 00000001800A62F3: mov     dword ptr [rbp+9E40h+var_8CE0+4], esi
 * 00000001800A62F9: movups  xmm6, [rbp+9E40h+var_8CE0]
 * 00000001800A6300: call    sub_1800A5D74
 * 00000001800A6305: mov     r8, rax
 * 00000001800A6308: mov     r9d, r12d
 * 00000001800A630B: mov     edx, 5
 * 00000001800A6310: lea     rcx, [rbp+9E40h+var_2B70]
 * 00000001800A6317: call    sub_180073668
 * 00000001800A631C: nop
 * 00000001800A631D: mov     r8, rax
 * 00000001800A6320: mov     rdx, r13
 * 00000001800A6323: lea     rcx, [rbp+9E40h+var_2C70]
 * 00000001800A632A: call    sub_18001B518
 * 00000001800A632F: nop
 * 00000001800A6330: lea     r8, aPixel; "/Pixel"
 * 00000001800A6337: mov     rdx, rax
 * 00000001800A633A: lea     rcx, [rbp+9E40h+var_6890]
 * 00000001800A6341: call    sub_18001B448
 * 00000001800A6346: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A634B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6350: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6355: mov     rcx, rax
 * 00000001800A6358: call    sub_18007370C
 * 00000001800A635D: nop
 * 00000001800A635E: lea     rcx, [rbp+9E40h+var_2C70]
 * 00000001800A6365: call    sub_180010F20
 * 00000001800A636A: nop
 * 00000001800A636B: lea     rcx, [rbp+9E40h+var_2B70]
 * 00000001800A6372: call    sub_180010F20
 * 00000001800A6377: nop
 * 00000001800A6378: lea     rcx, dword_1801C9230
 * 00000001800A637F: call    _Init_thread_footer
 * 00000001800A6384: mov     rax, [rdi+rbx*8]
 * 00000001800A6388: mov     eax, [r15+rax]
 * 00000001800A638C: cmp     cs:dword_1801C9234, eax
 * 00000001800A6392: jle     loc_1800A6466
 * 00000001800A6398: lea     rcx, dword_1801C9234
 * 00000001800A639F: call    sub_18000C8D0
 * 00000001800A63A4: cmp     cs:dword_1801C9234, r14d
 * 00000001800A63AB: jnz     loc_1800A6466
 * 00000001800A63B1: lea     rax, unk_180186C80
 * 00000001800A63B8: mov     qword ptr [rbp+9E40h+var_9EB0], rax
 * 00000001800A63BC: lea     rax, unk_180189E24
 * 00000001800A63C3: mov     qword ptr [rbp+9E40h+var_9EB0+8], rax
 * 00000001800A63C7: movups  xmm7, [rbp+9E40h+var_9EB0]
 * 00000001800A63CB: mov     dword ptr [rbp+9E40h+var_8CC0], 5
 * 00000001800A63D5: mov     dword ptr [rbp+9E40h+var_8CC0+4], esi
 * 00000001800A63DB: movups  xmm6, [rbp+9E40h+var_8CC0]
 * 00000001800A63E2: call    sub_1800A5D74
 * 00000001800A63E7: mov     r8, rax
 * 00000001800A63EA: mov     r9d, r12d
 * 00000001800A63ED: mov     edx, 6
 * 00000001800A63F2: lea     rcx, [rbp+9E40h+var_2930]
 * 00000001800A63F9: call    sub_180073668
 * 00000001800A63FE: nop
 * 00000001800A63FF: mov     r8, rax
 * 00000001800A6402: mov     rdx, r13
 * 00000001800A6405: lea     rcx, [rbp+9E40h+var_2A50]
 * 00000001800A640C: call    sub_18001B518
 * 00000001800A6411: nop
 * 00000001800A6412: lea     r8, aPixel; "/Pixel"
 * 00000001800A6419: mov     rdx, rax
 * 00000001800A641C: lea     rcx, [rbp+9E40h+var_6830]
 * 00000001800A6423: call    sub_18001B448
 * 00000001800A6428: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A642D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6432: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6437: mov     rcx, rax
 * 00000001800A643A: call    sub_18007370C
 * 00000001800A643F: nop
 * 00000001800A6440: lea     rcx, [rbp+9E40h+var_2A50]
 * 00000001800A6447: call    sub_180010F20
 * 00000001800A644C: nop
 * 00000001800A644D: lea     rcx, [rbp+9E40h+var_2930]
 * 00000001800A6454: call    sub_180010F20
 * 00000001800A6459: nop
 * 00000001800A645A: lea     rcx, dword_1801C9234
 * 00000001800A6461: call    _Init_thread_footer
 * 00000001800A6466: mov     rax, [rdi+rbx*8]
 * 00000001800A646A: mov     eax, [r15+rax]
 * 00000001800A646E: cmp     cs:dword_1801C9238, eax
 * 00000001800A6474: jle     loc_1800A6548
 * 00000001800A647A: lea     rcx, dword_1801C9238
 * 00000001800A6481: call    sub_18000C8D0
 * 00000001800A6486: cmp     cs:dword_1801C9238, r14d
 * 00000001800A648D: jnz     loc_1800A6548
 * 00000001800A6493: lea     rax, unk_180168670
 * 00000001800A649A: mov     qword ptr [rbp+9E40h+var_9EA0], rax
 * 00000001800A649E: lea     rax, unk_18016EBFC
 * 00000001800A64A5: mov     qword ptr [rbp+9E40h+var_9EA0+8], rax
 * 00000001800A64A9: movups  xmm7, [rbp+9E40h+var_9EA0]
 * 00000001800A64AD: mov     dword ptr [rbp+9E40h+var_8CA0], 5
 * 00000001800A64B7: mov     dword ptr [rbp+9E40h+var_8CA0+4], esi
 * 00000001800A64BD: movups  xmm6, [rbp+9E40h+var_8CA0]
 * 00000001800A64C4: call    sub_1800A5D74
 * 00000001800A64C9: mov     r8, rax
 * 00000001800A64CC: mov     r9d, r12d
 * 00000001800A64CF: mov     edx, 8
 * 00000001800A64D4: lea     rcx, [rbp+9E40h+var_26F0]
 * 00000001800A64DB: call    sub_180073668
 * 00000001800A64E0: nop
 * 00000001800A64E1: mov     r8, rax
 * 00000001800A64E4: mov     rdx, r13
 * 00000001800A64E7: lea     rcx, [rbp+9E40h+var_2810]
 * 00000001800A64EE: call    sub_18001B518
 * 00000001800A64F3: nop
 * 00000001800A64F4: lea     r8, aPixel; "/Pixel"
 * 00000001800A64FB: mov     rdx, rax
 * 00000001800A64FE: lea     rcx, [rbp+9E40h+var_67D0]
 * 00000001800A6505: call    sub_18001B448
 * 00000001800A650A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A650F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6514: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6519: mov     rcx, rax
 * 00000001800A651C: call    sub_18007370C
 * 00000001800A6521: nop
 * 00000001800A6522: lea     rcx, [rbp+9E40h+var_2810]
 * 00000001800A6529: call    sub_180010F20
 * 00000001800A652E: nop
 * 00000001800A652F: lea     rcx, [rbp+9E40h+var_26F0]
 * 00000001800A6536: call    sub_180010F20
 * 00000001800A653B: nop
 * 00000001800A653C: lea     rcx, dword_1801C9238
 * 00000001800A6543: call    _Init_thread_footer
 * 00000001800A6548: mov     rax, [rdi+rbx*8]
 * 00000001800A654C: mov     eax, [r15+rax]
 * 00000001800A6550: cmp     cs:dword_1801C923C, eax
 * 00000001800A6556: jle     loc_1800A6628
 * 00000001800A655C: lea     rcx, dword_1801C923C
 * 00000001800A6563: call    sub_18000C8D0
 * 00000001800A6568: cmp     cs:dword_1801C923C, r14d
 * 00000001800A656F: jnz     loc_1800A6628
 * 00000001800A6575: lea     rax, unk_18016EC00
 * 00000001800A657C: mov     qword ptr [rbp+9E40h+var_9E90], rax
 * 00000001800A6580: lea     rax, unk_18016FCC8
 * 00000001800A6587: mov     qword ptr [rbp+9E40h+var_9E90+8], rax
 * 00000001800A658B: movups  xmm7, [rbp+9E40h+var_9E90]
 * 00000001800A658F: mov     dword ptr [rbp+9E40h+var_8C80], 5
 * 00000001800A6599: mov     dword ptr [rbp+9E40h+var_8C80+4], esi
 * 00000001800A659F: movups  xmm6, [rbp+9E40h+var_8C80]
 * 00000001800A65A6: call    sub_1800A5D74
 * 00000001800A65AB: mov     r8, rax
 * 00000001800A65AE: mov     r9d, r12d
 * 00000001800A65B1: mov     rdx, r12
 * 00000001800A65B4: lea     rcx, [rbp+9E40h+var_24B0]
 * 00000001800A65BB: call    sub_180073668
 * 00000001800A65C0: nop
 * 00000001800A65C1: mov     r8, rax
 * 00000001800A65C4: mov     rdx, r13
 * 00000001800A65C7: lea     rcx, [rbp+9E40h+var_25D0]
 * 00000001800A65CE: call    sub_18001B518
 * 00000001800A65D3: nop
 * 00000001800A65D4: lea     r8, aPixel; "/Pixel"
 * 00000001800A65DB: mov     rdx, rax
 * 00000001800A65DE: lea     rcx, [rbp+9E40h+var_6770]
 * 00000001800A65E5: call    sub_18001B448
 * 00000001800A65EA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A65EF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A65F4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A65F9: mov     rcx, rax
 * 00000001800A65FC: call    sub_18007370C
 * 00000001800A6601: nop
 * 00000001800A6602: lea     rcx, [rbp+9E40h+var_25D0]
 * 00000001800A6609: call    sub_180010F20
 * 00000001800A660E: nop
 * 00000001800A660F: lea     rcx, [rbp+9E40h+var_24B0]
 * 00000001800A6616: call    sub_180010F20
 * 00000001800A661B: nop
 * 00000001800A661C: lea     rcx, dword_1801C923C
 * 00000001800A6623: call    _Init_thread_footer
 * 00000001800A6628: mov     rax, [rdi+rbx*8]
 * 00000001800A662C: mov     eax, [r15+rax]
 * 00000001800A6630: cmp     cs:dword_1801C9240, eax
 * 00000001800A6636: jle     loc_1800A670A
 * 00000001800A663C: lea     rcx, dword_1801C9240
 * 00000001800A6643: call    sub_18000C8D0
 * 00000001800A6648: cmp     cs:dword_1801C9240, r14d
 * 00000001800A664F: jnz     loc_1800A670A
 * 00000001800A6655: lea     rax, unk_180168670
 * 00000001800A665C: mov     qword ptr [rbp+9E40h+var_9E80], rax
 * 00000001800A6660: lea     rax, unk_18016EBFC
 * 00000001800A6667: mov     qword ptr [rbp+9E40h+var_9E80+8], rax
 * 00000001800A666B: movups  xmm7, [rbp+9E40h+var_9E80]
 * 00000001800A666F: mov     dword ptr [rbp+9E40h+var_8C60], 5
 * 00000001800A6679: mov     dword ptr [rbp+9E40h+var_8C60+4], esi
 * 00000001800A667F: movups  xmm6, [rbp+9E40h+var_8C60]
 * 00000001800A6686: call    sub_1800A5D74
 * 00000001800A668B: mov     r8, rax
 * 00000001800A668E: mov     r9d, r12d
 * 00000001800A6691: mov     edx, 0Ah
 * 00000001800A6696: lea     rcx, [rbp+9E40h+var_2270]
 * 00000001800A669D: call    sub_180073668
 * 00000001800A66A2: nop
 * 00000001800A66A3: mov     r8, rax
 * 00000001800A66A6: mov     rdx, r13
 * 00000001800A66A9: lea     rcx, [rbp+9E40h+var_2390]
 * 00000001800A66B0: call    sub_18001B518
 * 00000001800A66B5: nop
 * 00000001800A66B6: lea     r8, aPixel; "/Pixel"
 * 00000001800A66BD: mov     rdx, rax
 * 00000001800A66C0: lea     rcx, [rbp+9E40h+var_6710]
 * 00000001800A66C7: call    sub_18001B448
 * 00000001800A66CC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A66D1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A66D6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A66DB: mov     rcx, rax
 * 00000001800A66DE: call    sub_18007370C
 * 00000001800A66E3: nop
 * 00000001800A66E4: lea     rcx, [rbp+9E40h+var_2390]
 * 00000001800A66EB: call    sub_180010F20
 * 00000001800A66F0: nop
 * 00000001800A66F1: lea     rcx, [rbp+9E40h+var_2270]
 * 00000001800A66F8: call    sub_180010F20
 * 00000001800A66FD: nop
 * 00000001800A66FE: lea     rcx, dword_1801C9240
 * 00000001800A6705: call    _Init_thread_footer
 * 00000001800A670A: mov     rax, [rdi+rbx*8]
 * 00000001800A670E: mov     eax, [r15+rax]
 * 00000001800A6712: cmp     cs:dword_1801C9244, eax
 * 00000001800A6718: jle     loc_1800A67EC
 * 00000001800A671E: lea     rcx, dword_1801C9244
 * 00000001800A6725: call    sub_18000C8D0
 * 00000001800A672A: cmp     cs:dword_1801C9244, r14d
 * 00000001800A6731: jnz     loc_1800A67EC
 * 00000001800A6737: lea     rax, unk_1801620B0
 * 00000001800A673E: mov     qword ptr [rbp+9E40h+var_9E70], rax
 * 00000001800A6742: lea     rax, unk_180168668
 * 00000001800A6749: mov     qword ptr [rbp+9E40h+var_9E70+8], rax
 * 00000001800A674D: movups  xmm7, [rbp+9E40h+var_9E70]
 * 00000001800A6751: mov     dword ptr [rbp+9E40h+var_8C40], 5
 * 00000001800A675B: mov     dword ptr [rbp+9E40h+var_8C40+4], esi
 * 00000001800A6761: movups  xmm6, [rbp+9E40h+var_8C40]
 * 00000001800A6768: call    sub_1800A5D74
 * 00000001800A676D: mov     r8, rax
 * 00000001800A6770: mov     r9d, r12d
 * 00000001800A6773: mov     edx, 10h
 * 00000001800A6778: lea     rcx, [rbp+9E40h+var_2030]
 * 00000001800A677F: call    sub_180073668
 * 00000001800A6784: nop
 * 00000001800A6785: mov     r8, rax
 * 00000001800A6788: mov     rdx, r13
 * 00000001800A678B: lea     rcx, [rbp+9E40h+var_2150]
 * 00000001800A6792: call    sub_18001B518
 * 00000001800A6797: nop
 * 00000001800A6798: lea     r8, aPixel; "/Pixel"
 * 00000001800A679F: mov     rdx, rax
 * 00000001800A67A2: lea     rcx, [rbp+9E40h+var_66B0]
 * 00000001800A67A9: call    sub_18001B448
 * 00000001800A67AE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A67B3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A67B8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A67BD: mov     rcx, rax
 * 00000001800A67C0: call    sub_18007370C
 * 00000001800A67C5: nop
 * 00000001800A67C6: lea     rcx, [rbp+9E40h+var_2150]
 * 00000001800A67CD: call    sub_180010F20
 * 00000001800A67D2: nop
 * 00000001800A67D3: lea     rcx, [rbp+9E40h+var_2030]
 * 00000001800A67DA: call    sub_180010F20
 * 00000001800A67DF: nop
 * 00000001800A67E0: lea     rcx, dword_1801C9244
 * 00000001800A67E7: call    _Init_thread_footer
 * 00000001800A67EC: mov     rax, [rdi+rbx*8]
 * 00000001800A67F0: mov     eax, [r15+rax]
 * 00000001800A67F4: cmp     cs:dword_1801C9248, eax
 * 00000001800A67FA: jle     loc_1800A68CE
 * 00000001800A6800: lea     rcx, dword_1801C9248
 * 00000001800A6807: call    sub_18000C8D0
 * 00000001800A680C: cmp     cs:dword_1801C9248, r14d
 * 00000001800A6813: jnz     loc_1800A68CE
 * 00000001800A6819: lea     rax, unk_1801620B0
 * 00000001800A6820: mov     qword ptr [rbp+9E40h+var_9E60], rax
 * 00000001800A6824: lea     rax, unk_180168668
 * 00000001800A682B: mov     qword ptr [rbp+9E40h+var_9E60+8], rax
 * 00000001800A682F: movups  xmm7, [rbp+9E40h+var_9E60]
 * 00000001800A6833: mov     dword ptr [rbp+9E40h+var_8C20], 5
 * 00000001800A683D: mov     dword ptr [rbp+9E40h+var_8C20+4], esi
 * 00000001800A6843: movups  xmm6, [rbp+9E40h+var_8C20]
 * 00000001800A684A: call    sub_1800A5D74
 * 00000001800A684F: mov     r8, rax
 * 00000001800A6852: mov     r9d, r12d
 * 00000001800A6855: mov     edx, 12h
 * 00000001800A685A: lea     rcx, [rbp+9E40h+var_1DF0]
 * 00000001800A6861: call    sub_180073668
 * 00000001800A6866: nop
 * 00000001800A6867: mov     r8, rax
 * 00000001800A686A: mov     rdx, r13
 * 00000001800A686D: lea     rcx, [rbp+9E40h+var_1F10]
 * 00000001800A6874: call    sub_18001B518
 * 00000001800A6879: nop
 * 00000001800A687A: lea     r8, aPixel; "/Pixel"
 * 00000001800A6881: mov     rdx, rax
 * 00000001800A6884: lea     rcx, [rbp+9E40h+var_6650]
 * 00000001800A688B: call    sub_18001B448
 * 00000001800A6890: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6895: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A689A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A689F: mov     rcx, rax
 * 00000001800A68A2: call    sub_18007370C
 * 00000001800A68A7: nop
 * 00000001800A68A8: lea     rcx, [rbp+9E40h+var_1F10]
 * 00000001800A68AF: call    sub_180010F20
 * 00000001800A68B4: nop
 * 00000001800A68B5: lea     rcx, [rbp+9E40h+var_1DF0]
 * 00000001800A68BC: call    sub_180010F20
 * 00000001800A68C1: nop
 * 00000001800A68C2: lea     rcx, dword_1801C9248
 * 00000001800A68C9: call    _Init_thread_footer
 * 00000001800A68CE: mov     rax, [rdi+rbx*8]
 * 00000001800A68D2: mov     eax, [r15+rax]
 * 00000001800A68D6: cmp     cs:dword_1801C924C, eax
 * 00000001800A68DC: jle     loc_1800A69B0
 * 00000001800A68E2: lea     rcx, dword_1801C924C
 * 00000001800A68E9: call    sub_18000C8D0
 * 00000001800A68EE: cmp     cs:dword_1801C924C, r14d
 * 00000001800A68F5: jnz     loc_1800A69B0
 * 00000001800A68FB: lea     rax, unk_18017CB90
 * 00000001800A6902: mov     qword ptr [rbp+9E40h+var_9E50], rax
 * 00000001800A6906: lea     rax, unk_18017FE88
 * 00000001800A690D: mov     qword ptr [rbp+9E40h+var_9E50+8], rax
 * 00000001800A6911: movups  xmm7, [rbp+9E40h+var_9E50]
 * 00000001800A6915: mov     dword ptr [rbp+9E40h+var_8C00], 5
 * 00000001800A691F: mov     dword ptr [rbp+9E40h+var_8C00+4], esi
 * 00000001800A6925: movups  xmm6, [rbp+9E40h+var_8C00]
 * 00000001800A692C: call    sub_1800A5D74
 * 00000001800A6931: mov     r8, rax
 * 00000001800A6934: mov     r9d, r12d
 * 00000001800A6937: mov     edx, 14h
 * 00000001800A693C: lea     rcx, [rbp+9E40h+var_1BB0]
 * 00000001800A6943: call    sub_180073668
 * 00000001800A6948: nop
 * 00000001800A6949: mov     r8, rax
 * 00000001800A694C: mov     rdx, r13
 * 00000001800A694F: lea     rcx, [rbp+9E40h+var_1CD0]
 * 00000001800A6956: call    sub_18001B518
 * 00000001800A695B: nop
 * 00000001800A695C: lea     r8, aPixel; "/Pixel"
 * 00000001800A6963: mov     rdx, rax
 * 00000001800A6966: lea     rcx, [rbp+9E40h+var_65F0]
 * 00000001800A696D: call    sub_18001B448
 * 00000001800A6972: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6977: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A697C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6981: mov     rcx, rax
 * 00000001800A6984: call    sub_18007370C
 * 00000001800A6989: nop
 * 00000001800A698A: lea     rcx, [rbp+9E40h+var_1CD0]
 * 00000001800A6991: call    sub_180010F20
 * 00000001800A6996: nop
 * 00000001800A6997: lea     rcx, [rbp+9E40h+var_1BB0]
 * 00000001800A699E: call    sub_180010F20
 * 00000001800A69A3: nop
 * 00000001800A69A4: lea     rcx, dword_1801C924C
 * 00000001800A69AB: call    _Init_thread_footer
 * 00000001800A69B0: mov     rax, [rdi+rbx*8]
 * 00000001800A69B4: mov     eax, [r15+rax]
 * 00000001800A69B8: cmp     cs:dword_1801C9250, eax
 * 00000001800A69BE: jle     loc_1800A6A92
 * 00000001800A69C4: lea     rcx, dword_1801C9250
 * 00000001800A69CB: call    sub_18000C8D0
 * 00000001800A69D0: cmp     cs:dword_1801C9250, r14d
 * 00000001800A69D7: jnz     loc_1800A6A92
 * 00000001800A69DD: lea     rax, unk_18017CB90
 * 00000001800A69E4: mov     qword ptr [rbp+9E40h+var_9E40], rax
 * 00000001800A69E8: lea     rax, unk_18017FE88
 * 00000001800A69EF: mov     qword ptr [rbp+9E40h+var_9E40+8], rax
 * 00000001800A69F3: movups  xmm7, [rbp+9E40h+var_9E40]
 * 00000001800A69F7: mov     dword ptr [rbp+9E40h+var_8BE0], 5
 * 00000001800A6A01: mov     dword ptr [rbp+9E40h+var_8BE0+4], esi
 * 00000001800A6A07: movups  xmm6, [rbp+9E40h+var_8BE0]
 * 00000001800A6A0E: call    sub_1800A5D74
 * 00000001800A6A13: mov     r8, rax
 * 00000001800A6A16: mov     r9d, r12d
 * 00000001800A6A19: mov     edx, 16h
 * 00000001800A6A1E: lea     rcx, [rbp+9E40h+var_1970]
 * 00000001800A6A25: call    sub_180073668
 * 00000001800A6A2A: nop
 * 00000001800A6A2B: mov     r8, rax
 * 00000001800A6A2E: mov     rdx, r13
 * 00000001800A6A31: lea     rcx, [rbp+9E40h+var_1A90]
 * 00000001800A6A38: call    sub_18001B518
 * 00000001800A6A3D: nop
 * 00000001800A6A3E: lea     r8, aPixel; "/Pixel"
 * 00000001800A6A45: mov     rdx, rax
 * 00000001800A6A48: lea     rcx, [rbp+9E40h+var_6590]
 * 00000001800A6A4F: call    sub_18001B448
 * 00000001800A6A54: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6A59: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6A5E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6A63: mov     rcx, rax
 * 00000001800A6A66: call    sub_18007370C
 * 00000001800A6A6B: nop
 * 00000001800A6A6C: lea     rcx, [rbp+9E40h+var_1A90]
 * 00000001800A6A73: call    sub_180010F20
 * 00000001800A6A78: nop
 * 00000001800A6A79: lea     rcx, [rbp+9E40h+var_1970]
 * 00000001800A6A80: call    sub_180010F20
 * 00000001800A6A85: nop
 * 00000001800A6A86: lea     rcx, dword_1801C9250
 * 00000001800A6A8D: call    _Init_thread_footer
 * 00000001800A6A92: mov     rax, [rdi+rbx*8]
 * 00000001800A6A96: mov     eax, [r15+rax]
 * 00000001800A6A9A: cmp     cs:dword_1801C9254, eax
 * 00000001800A6AA0: jle     loc_1800A6B74
 * 00000001800A6AA6: lea     rcx, dword_1801C9254
 * 00000001800A6AAD: call    sub_18000C8D0
 * 00000001800A6AB2: cmp     cs:dword_1801C9254, r14d
 * 00000001800A6AB9: jnz     loc_1800A6B74
 * 00000001800A6ABF: lea     rax, unk_18016FCD0
 * 00000001800A6AC6: mov     qword ptr [rbp+9E40h+var_9E30], rax
 * 00000001800A6ACA: lea     rax, unk_18017645C
 * 00000001800A6AD1: mov     qword ptr [rbp+9E40h+var_9E30+8], rax
 * 00000001800A6AD5: movups  xmm7, [rbp+9E40h+var_9E30]
 * 00000001800A6AD9: mov     dword ptr [rbp+9E40h+var_8BC0], 5
 * 00000001800A6AE3: mov     dword ptr [rbp+9E40h+var_8BC0+4], esi
 * 00000001800A6AE9: movups  xmm6, [rbp+9E40h+var_8BC0]
 * 00000001800A6AF0: call    sub_1800A5D74
 * 00000001800A6AF5: mov     r8, rax
 * 00000001800A6AF8: mov     r9d, r12d
 * 00000001800A6AFB: mov     edx, 18h
 * 00000001800A6B00: lea     rcx, [rbp+9E40h+var_1730]
 * 00000001800A6B07: call    sub_180073668
 * 00000001800A6B0C: nop
 * 00000001800A6B0D: mov     r8, rax
 * 00000001800A6B10: mov     rdx, r13
 * 00000001800A6B13: lea     rcx, [rbp+9E40h+var_1850]
 * 00000001800A6B1A: call    sub_18001B518
 * 00000001800A6B1F: nop
 * 00000001800A6B20: lea     r8, aPixel; "/Pixel"
 * 00000001800A6B27: mov     rdx, rax
 * 00000001800A6B2A: lea     rcx, [rbp+9E40h+var_6530]
 * 00000001800A6B31: call    sub_18001B448
 * 00000001800A6B36: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6B3B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6B40: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6B45: mov     rcx, rax
 * 00000001800A6B48: call    sub_18007370C
 * 00000001800A6B4D: nop
 * 00000001800A6B4E: lea     rcx, [rbp+9E40h+var_1850]
 * 00000001800A6B55: call    sub_180010F20
 * 00000001800A6B5A: nop
 * 00000001800A6B5B: lea     rcx, [rbp+9E40h+var_1730]
 * 00000001800A6B62: call    sub_180010F20
 * 00000001800A6B67: nop
 * 00000001800A6B68: lea     rcx, dword_1801C9254
 * 00000001800A6B6F: call    _Init_thread_footer
 * 00000001800A6B74: mov     rax, [rdi+rbx*8]
 * 00000001800A6B78: mov     eax, [r15+rax]
 * 00000001800A6B7C: cmp     cs:dword_1801C9258, eax
 * 00000001800A6B82: jle     loc_1800A6C56
 * 00000001800A6B88: lea     rcx, dword_1801C9258
 * 00000001800A6B8F: call    sub_18000C8D0
 * 00000001800A6B94: cmp     cs:dword_1801C9258, r14d
 * 00000001800A6B9B: jnz     loc_1800A6C56
 * 00000001800A6BA1: lea     rax, unk_18016FCD0
 * 00000001800A6BA8: mov     qword ptr [rbp+9E40h+var_9E20], rax
 * 00000001800A6BAC: lea     rax, unk_18017645C
 * 00000001800A6BB3: mov     qword ptr [rbp+9E40h+var_9E20+8], rax
 * 00000001800A6BB7: movups  xmm7, [rbp+9E40h+var_9E20]
 * 00000001800A6BBB: mov     dword ptr [rbp+9E40h+var_8BA0], 5
 * 00000001800A6BC5: mov     dword ptr [rbp+9E40h+var_8BA0+4], esi
 * 00000001800A6BCB: movups  xmm6, [rbp+9E40h+var_8BA0]
 * 00000001800A6BD2: call    sub_1800A5D74
 * 00000001800A6BD7: mov     r8, rax
 * 00000001800A6BDA: mov     r9d, r12d
 * 00000001800A6BDD: mov     edx, 1Ah
 * 00000001800A6BE2: lea     rcx, [rbp+9E40h+var_1490]
 * 00000001800A6BE9: call    sub_180073668
 * 00000001800A6BEE: nop
 * 00000001800A6BEF: mov     r8, rax
 * 00000001800A6BF2: mov     rdx, r13
 * 00000001800A6BF5: lea     rcx, [rbp+9E40h+var_15B0]
 * 00000001800A6BFC: call    sub_18001B518
 * 00000001800A6C01: nop
 * 00000001800A6C02: lea     r8, aPixel; "/Pixel"
 * 00000001800A6C09: mov     rdx, rax
 * 00000001800A6C0C: lea     rcx, [rbp+9E40h+var_64D0]
 * 00000001800A6C13: call    sub_18001B448
 * 00000001800A6C18: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6C1D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6C22: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6C27: mov     rcx, rax
 * 00000001800A6C2A: call    sub_18007370C
 * 00000001800A6C2F: nop
 * 00000001800A6C30: lea     rcx, [rbp+9E40h+var_15B0]
 * 00000001800A6C37: call    sub_180010F20
 * 00000001800A6C3C: nop
 * 00000001800A6C3D: lea     rcx, [rbp+9E40h+var_1490]
 * 00000001800A6C44: call    sub_180010F20
 * 00000001800A6C49: nop
 * 00000001800A6C4A: lea     rcx, dword_1801C9258
 * 00000001800A6C51: call    _Init_thread_footer
 * 00000001800A6C56: mov     rax, [rdi+rbx*8]
 * 00000001800A6C5A: mov     eax, [r15+rax]
 * 00000001800A6C5E: cmp     cs:dword_1801C925C, eax
 * 00000001800A6C64: jle     loc_1800A6D38
 * 00000001800A6C6A: lea     rcx, dword_1801C925C
 * 00000001800A6C71: call    sub_18000C8D0
 * 00000001800A6C76: cmp     cs:dword_1801C925C, r14d
 * 00000001800A6C7D: jnz     loc_1800A6D38
 * 00000001800A6C83: lea     rax, unk_18017FE90
 * 00000001800A6C8A: mov     qword ptr [rbp+9E40h+var_9E10], rax
 * 00000001800A6C8E: lea     rax, unk_180186274
 * 00000001800A6C95: mov     qword ptr [rbp+9E40h+var_9E10+8], rax
 * 00000001800A6C99: movups  xmm7, [rbp+9E40h+var_9E10]
 * 00000001800A6C9D: mov     dword ptr [rbp+9E40h+var_8B80], 5
 * 00000001800A6CA7: mov     dword ptr [rbp+9E40h+var_8B80+4], esi
 * 00000001800A6CAD: movups  xmm6, [rbp+9E40h+var_8B80]
 * 00000001800A6CB4: call    sub_1800A5D74
 * 00000001800A6CB9: mov     r8, rax
 * 00000001800A6CBC: mov     r9d, r12d
 * 00000001800A6CBF: mov     edx, 20h ; ' '
 * 00000001800A6CC4: lea     rcx, [rbp+9E40h+var_1250]
 * 00000001800A6CCB: call    sub_180073668
 * 00000001800A6CD0: nop
 * 00000001800A6CD1: mov     r8, rax
 * 00000001800A6CD4: mov     rdx, r13
 * 00000001800A6CD7: lea     rcx, [rbp+9E40h+var_1370]
 * 00000001800A6CDE: call    sub_18001B518
 * 00000001800A6CE3: nop
 * 00000001800A6CE4: lea     r8, aPixel; "/Pixel"
 * 00000001800A6CEB: mov     rdx, rax
 * 00000001800A6CEE: lea     rcx, [rbp+9E40h+var_6470]
 * 00000001800A6CF5: call    sub_18001B448
 * 00000001800A6CFA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6CFF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6D04: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6D09: mov     rcx, rax
 * 00000001800A6D0C: call    sub_18007370C
 * 00000001800A6D11: nop
 * 00000001800A6D12: lea     rcx, [rbp+9E40h+var_1370]
 * 00000001800A6D19: call    sub_180010F20
 * 00000001800A6D1E: nop
 * 00000001800A6D1F: lea     rcx, [rbp+9E40h+var_1250]
 * 00000001800A6D26: call    sub_180010F20
 * 00000001800A6D2B: nop
 * 00000001800A6D2C: lea     rcx, dword_1801C925C
 * 00000001800A6D33: call    _Init_thread_footer
 * 00000001800A6D38: mov     rax, [rdi+rbx*8]
 * 00000001800A6D3C: mov     eax, [r15+rax]
 * 00000001800A6D40: cmp     cs:dword_1801C9260, eax
 * 00000001800A6D46: jle     loc_1800A6E1A
 * 00000001800A6D4C: lea     rcx, dword_1801C9260
 * 00000001800A6D53: call    sub_18000C8D0
 * 00000001800A6D58: cmp     cs:dword_1801C9260, r14d
 * 00000001800A6D5F: jnz     loc_1800A6E1A
 * 00000001800A6D65: lea     rax, unk_180186280
 * 00000001800A6D6C: mov     qword ptr [rbp+9E40h+var_9E00], rax
 * 00000001800A6D70: lea     rax, unk_180186C78
 * 00000001800A6D77: mov     qword ptr [rbp+9E40h+var_9E00+8], rax
 * 00000001800A6D7B: movups  xmm7, [rbp+9E40h+var_9E00]
 * 00000001800A6D7F: mov     dword ptr [rbp+9E40h+var_8B60], 5
 * 00000001800A6D89: mov     dword ptr [rbp+9E40h+var_8B60+4], esi
 * 00000001800A6D8F: movups  xmm6, [rbp+9E40h+var_8B60]
 * 00000001800A6D96: call    sub_1800A5D74
 * 00000001800A6D9B: mov     r8, rax
 * 00000001800A6D9E: mov     r9d, r12d
 * 00000001800A6DA1: mov     edx, 21h ; '!'
 * 00000001800A6DA6: lea     rcx, [rbp+9E40h+var_1010]
 * 00000001800A6DAD: call    sub_180073668
 * 00000001800A6DB2: nop
 * 00000001800A6DB3: mov     r8, rax
 * 00000001800A6DB6: mov     rdx, r13
 * 00000001800A6DB9: lea     rcx, [rbp+9E40h+var_1130]
 * 00000001800A6DC0: call    sub_18001B518
 * 00000001800A6DC5: nop
 * 00000001800A6DC6: lea     r8, aPixel; "/Pixel"
 * 00000001800A6DCD: mov     rdx, rax
 * 00000001800A6DD0: lea     rcx, [rbp+9E40h+var_69D0]
 * 00000001800A6DD7: call    sub_18001B448
 * 00000001800A6DDC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6DE1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6DE6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6DEB: mov     rcx, rax
 * 00000001800A6DEE: call    sub_18007370C
 * 00000001800A6DF3: nop
 * 00000001800A6DF4: lea     rcx, [rbp+9E40h+var_1130]
 * 00000001800A6DFB: call    sub_180010F20
 * 00000001800A6E00: nop
 * 00000001800A6E01: lea     rcx, [rbp+9E40h+var_1010]
 * 00000001800A6E08: call    sub_180010F20
 * 00000001800A6E0D: nop
 * 00000001800A6E0E: lea     rcx, dword_1801C9260
 * 00000001800A6E15: call    _Init_thread_footer
 * 00000001800A6E1A: mov     rax, [rdi+rbx*8]
 * 00000001800A6E1E: mov     eax, [r15+rax]
 * 00000001800A6E22: cmp     cs:dword_1801C9264, eax
 * 00000001800A6E28: jle     loc_1800A6EFC
 * 00000001800A6E2E: lea     rcx, dword_1801C9264
 * 00000001800A6E35: call    sub_18000C8D0
 * 00000001800A6E3A: cmp     cs:dword_1801C9264, r14d
 * 00000001800A6E41: jnz     loc_1800A6EFC
 * 00000001800A6E47: lea     rax, unk_18017FE90
 * 00000001800A6E4E: mov     qword ptr [rbp+9E40h+var_9DF0], rax
 * 00000001800A6E52: lea     rax, unk_180186274
 * 00000001800A6E59: mov     qword ptr [rbp+9E40h+var_9DF0+8], rax
 * 00000001800A6E5D: movups  xmm7, [rbp+9E40h+var_9DF0]
 * 00000001800A6E61: mov     dword ptr [rbp+9E40h+var_8B40], 5
 * 00000001800A6E6B: mov     dword ptr [rbp+9E40h+var_8B40+4], esi
 * 00000001800A6E71: movups  xmm6, [rbp+9E40h+var_8B40]
 * 00000001800A6E78: call    sub_1800A5D74
 * 00000001800A6E7D: mov     r8, rax
 * 00000001800A6E80: mov     r9d, r12d
 * 00000001800A6E83: mov     edx, 22h ; '"'
 * 00000001800A6E88: lea     rcx, [rbp+9E40h+var_DD0]
 * 00000001800A6E8F: call    sub_180073668
 * 00000001800A6E94: nop
 * 00000001800A6E95: mov     r8, rax
 * 00000001800A6E98: mov     rdx, r13
 * 00000001800A6E9B: lea     rcx, [rbp+9E40h+var_EF0]
 * 00000001800A6EA2: call    sub_18001B518
 * 00000001800A6EA7: nop
 * 00000001800A6EA8: lea     r8, aPixel; "/Pixel"
 * 00000001800A6EAF: mov     rdx, rax
 * 00000001800A6EB2: lea     rcx, [rbp+9E40h+var_6930]
 * 00000001800A6EB9: call    sub_18001B448
 * 00000001800A6EBE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6EC3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6EC8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6ECD: mov     rcx, rax
 * 00000001800A6ED0: call    sub_18007370C
 * 00000001800A6ED5: nop
 * 00000001800A6ED6: lea     rcx, [rbp+9E40h+var_EF0]
 * 00000001800A6EDD: call    sub_180010F20
 * 00000001800A6EE2: nop
 * 00000001800A6EE3: lea     rcx, [rbp+9E40h+var_DD0]
 * 00000001800A6EEA: call    sub_180010F20
 * 00000001800A6EEF: nop
 * 00000001800A6EF0: lea     rcx, dword_1801C9264
 * 00000001800A6EF7: call    _Init_thread_footer
 * 00000001800A6EFC: mov     rax, [rdi+rbx*8]
 * 00000001800A6F00: mov     eax, [r15+rax]
 * 00000001800A6F04: cmp     cs:dword_1801C9268, eax
 * 00000001800A6F0A: jle     loc_1800A6FDE
 * 00000001800A6F10: lea     rcx, dword_1801C9268
 * 00000001800A6F17: call    sub_18000C8D0
 * 00000001800A6F1C: cmp     cs:dword_1801C9268, r14d
 * 00000001800A6F23: jnz     loc_1800A6FDE
 * 00000001800A6F29: lea     rax, unk_180168670
 * 00000001800A6F30: mov     qword ptr [rbp+9E40h+var_9DE0], rax
 * 00000001800A6F34: lea     rax, unk_18016EBFC
 * 00000001800A6F3B: mov     qword ptr [rbp+9E40h+var_9DE0+8], rax
 * 00000001800A6F3F: movups  xmm7, [rbp+9E40h+var_9DE0]
 * 00000001800A6F43: mov     dword ptr [rbp+9E40h+var_8B20], 5
 * 00000001800A6F4D: mov     dword ptr [rbp+9E40h+var_8B20+4], esi
 * 00000001800A6F53: movups  xmm6, [rbp+9E40h+var_8B20]
 * 00000001800A6F5A: call    sub_1800A5D74
 * 00000001800A6F5F: mov     r8, rax
 * 00000001800A6F62: mov     r9d, r12d
 * 00000001800A6F65: mov     edx, 28h ; '('
 * 00000001800A6F6A: lea     rcx, [rbp+9E40h+var_B90]
 * 00000001800A6F71: call    sub_180073668
 * 00000001800A6F76: nop
 * 00000001800A6F77: mov     r8, rax
 * 00000001800A6F7A: mov     rdx, r13
 * 00000001800A6F7D: lea     rcx, [rbp+9E40h+var_CB0]
 * 00000001800A6F84: call    sub_18001B518
 * 00000001800A6F89: nop
 * 00000001800A6F8A: lea     r8, aPixel; "/Pixel"
 * 00000001800A6F91: mov     rdx, rax
 * 00000001800A6F94: lea     rcx, [rbp+9E40h+var_68B0]
 * 00000001800A6F9B: call    sub_18001B448
 * 00000001800A6FA0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A6FA5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A6FAA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A6FAF: mov     rcx, rax
 * 00000001800A6FB2: call    sub_18007370C
 * 00000001800A6FB7: nop
 * 00000001800A6FB8: lea     rcx, [rbp+9E40h+var_CB0]
 * 00000001800A6FBF: call    sub_180010F20
 * 00000001800A6FC4: nop
 * 00000001800A6FC5: lea     rcx, [rbp+9E40h+var_B90]
 * 00000001800A6FCC: call    sub_180010F20
 * 00000001800A6FD1: nop
 * 00000001800A6FD2: lea     rcx, dword_1801C9268
 * 00000001800A6FD9: call    _Init_thread_footer
 * 00000001800A6FDE: mov     rax, [rdi+rbx*8]
 * 00000001800A6FE2: mov     eax, [r15+rax]
 * 00000001800A6FE6: cmp     cs:dword_1801C926C, eax
 * 00000001800A6FEC: jle     loc_1800A70C0
 * 00000001800A6FF2: lea     rcx, dword_1801C926C
 * 00000001800A6FF9: call    sub_18000C8D0
 * 00000001800A6FFE: cmp     cs:dword_1801C926C, r14d
 * 00000001800A7005: jnz     loc_1800A70C0
 * 00000001800A700B: lea     rax, unk_18016EC00
 * 00000001800A7012: mov     qword ptr [rbp+9E40h+var_9DD0], rax
 * 00000001800A7016: lea     rax, unk_18016FCC8
 * 00000001800A701D: mov     qword ptr [rbp+9E40h+var_9DD0+8], rax
 * 00000001800A7021: movups  xmm7, [rbp+9E40h+var_9DD0]
 * 00000001800A7025: mov     dword ptr [rbp+9E40h+var_8B00], 5
 * 00000001800A702F: mov     dword ptr [rbp+9E40h+var_8B00+4], esi
 * 00000001800A7035: movups  xmm6, [rbp+9E40h+var_8B00]
 * 00000001800A703C: call    sub_1800A5D74
 * 00000001800A7041: mov     r8, rax
 * 00000001800A7044: mov     r9d, r12d
 * 00000001800A7047: mov     edx, 29h ; ')'
 * 00000001800A704C: lea     rcx, [rbp+9E40h+var_950]
 * 00000001800A7053: call    sub_180073668
 * 00000001800A7058: nop
 * 00000001800A7059: mov     r8, rax
 * 00000001800A705C: mov     rdx, r13
 * 00000001800A705F: lea     rcx, [rbp+9E40h+var_A70]
 * 00000001800A7066: call    sub_18001B518
 * 00000001800A706B: nop
 * 00000001800A706C: lea     r8, aPixel; "/Pixel"
 * 00000001800A7073: mov     rdx, rax
 * 00000001800A7076: lea     rcx, [rbp+9E40h+var_6810]
 * 00000001800A707D: call    sub_18001B448
 * 00000001800A7082: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7087: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A708C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7091: mov     rcx, rax
 * 00000001800A7094: call    sub_18007370C
 * 00000001800A7099: nop
 * 00000001800A709A: lea     rcx, [rbp+9E40h+var_A70]
 * 00000001800A70A1: call    sub_180010F20
 * 00000001800A70A6: nop
 * 00000001800A70A7: lea     rcx, [rbp+9E40h+var_950]
 * 00000001800A70AE: call    sub_180010F20
 * 00000001800A70B3: nop
 * 00000001800A70B4: lea     rcx, dword_1801C926C
 * 00000001800A70BB: call    _Init_thread_footer
 * 00000001800A70C0: mov     rax, [rdi+rbx*8]
 * 00000001800A70C4: mov     eax, [r15+rax]
 * 00000001800A70C8: cmp     cs:dword_1801C9270, eax
 * 00000001800A70CE: jle     loc_1800A71AB
 * 00000001800A70D4: lea     rcx, dword_1801C9270
 * 00000001800A70DB: call    sub_18000C8D0
 * 00000001800A70E0: cmp     cs:dword_1801C9270, r14d
 * 00000001800A70E7: jnz     loc_1800A71AB
 * 00000001800A70ED: lea     rax, unk_180168670
 * 00000001800A70F4: mov     qword ptr [rbp+9E40h+var_9DC0], rax
 * 00000001800A70FB: lea     rax, unk_18016EBFC
 * 00000001800A7102: mov     qword ptr [rbp+9E40h+var_9DC0+8], rax
 * 00000001800A7109: movups  xmm7, [rbp+9E40h+var_9DC0]
 * 00000001800A7110: mov     dword ptr [rbp+9E40h+var_8AE0], 5
 * 00000001800A711A: mov     dword ptr [rbp+9E40h+var_8AE0+4], esi
 * 00000001800A7120: movups  xmm6, [rbp+9E40h+var_8AE0]
 * 00000001800A7127: call    sub_1800A5D74
 * 00000001800A712C: mov     r8, rax
 * 00000001800A712F: mov     r9d, r12d
 * 00000001800A7132: mov     edx, 2Ah ; '*'
 * 00000001800A7137: lea     rcx, [rbp+9E40h+var_710]
 * 00000001800A713E: call    sub_180073668
 * 00000001800A7143: nop
 * 00000001800A7144: mov     r8, rax
 * 00000001800A7147: mov     rdx, r13
 * 00000001800A714A: lea     rcx, [rbp+9E40h+var_830]
 * 00000001800A7151: call    sub_18001B518
 * 00000001800A7156: nop
 * 00000001800A7157: lea     r8, aPixel; "/Pixel"
 * 00000001800A715E: mov     rdx, rax
 * 00000001800A7161: lea     rcx, [rbp+9E40h+var_6790]
 * 00000001800A7168: call    sub_18001B448
 * 00000001800A716D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7172: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7177: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A717C: mov     rcx, rax
 * 00000001800A717F: call    sub_18007370C
 * 00000001800A7184: nop
 * 00000001800A7185: lea     rcx, [rbp+9E40h+var_830]
 * 00000001800A718C: call    sub_180010F20
 * 00000001800A7191: nop
 * 00000001800A7192: lea     rcx, [rbp+9E40h+var_710]
 * 00000001800A7199: call    sub_180010F20
 * 00000001800A719E: nop
 * 00000001800A719F: lea     rcx, dword_1801C9270
 * 00000001800A71A6: call    _Init_thread_footer
 * 00000001800A71AB: mov     rax, [rdi+rbx*8]
 * 00000001800A71AF: mov     eax, [r15+rax]
 * 00000001800A71B3: cmp     cs:dword_1801C9274, eax
 * 00000001800A71B9: jle     loc_1800A7296
 * 00000001800A71BF: lea     rcx, dword_1801C9274
 * 00000001800A71C6: call    sub_18000C8D0
 * 00000001800A71CB: cmp     cs:dword_1801C9274, r14d
 * 00000001800A71D2: jnz     loc_1800A7296
 * 00000001800A71D8: lea     rax, unk_1801620B0
 * 00000001800A71DF: mov     qword ptr [rbp+9E40h+var_9DB0], rax
 * 00000001800A71E6: lea     rax, unk_180168668
 * 00000001800A71ED: mov     qword ptr [rbp+9E40h+var_9DB0+8], rax
 * 00000001800A71F4: movups  xmm7, [rbp+9E40h+var_9DB0]
 * 00000001800A71FB: mov     dword ptr [rbp+9E40h+var_8AC0], 5
 * 00000001800A7205: mov     dword ptr [rbp+9E40h+var_8AC0+4], esi
 * 00000001800A720B: movups  xmm6, [rbp+9E40h+var_8AC0]
 * 00000001800A7212: call    sub_1800A5D74
 * 00000001800A7217: mov     r8, rax
 * 00000001800A721A: mov     r9d, r12d
 * 00000001800A721D: mov     edx, 30h ; '0'
 * 00000001800A7222: lea     rcx, [rbp+9E40h+var_4D0]
 * 00000001800A7229: call    sub_180073668
 * 00000001800A722E: nop
 * 00000001800A722F: mov     r8, rax
 * 00000001800A7232: mov     rdx, r13
 * 00000001800A7235: lea     rcx, [rbp+9E40h+var_5F0]
 * 00000001800A723C: call    sub_18001B518
 * 00000001800A7241: nop
 * 00000001800A7242: lea     r8, aPixel; "/Pixel"
 * 00000001800A7249: mov     rdx, rax
 * 00000001800A724C: lea     rcx, [rbp+9E40h+var_66F0]
 * 00000001800A7253: call    sub_18001B448
 * 00000001800A7258: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A725D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7262: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7267: mov     rcx, rax
 * 00000001800A726A: call    sub_18007370C
 * 00000001800A726F: nop
 * 00000001800A7270: lea     rcx, [rbp+9E40h+var_5F0]
 * 00000001800A7277: call    sub_180010F20
 * 00000001800A727C: nop
 * 00000001800A727D: lea     rcx, [rbp+9E40h+var_4D0]
 * 00000001800A7284: call    sub_180010F20
 * 00000001800A7289: nop
 * 00000001800A728A: lea     rcx, dword_1801C9274
 * 00000001800A7291: call    _Init_thread_footer
 * 00000001800A7296: mov     rax, [rdi+rbx*8]
 * 00000001800A729A: mov     eax, [r15+rax]
 * 00000001800A729E: cmp     cs:dword_1801C9278, eax
 * 00000001800A72A4: jle     loc_1800A7381
 * 00000001800A72AA: lea     rcx, dword_1801C9278
 * 00000001800A72B1: call    sub_18000C8D0
 * 00000001800A72B6: cmp     cs:dword_1801C9278, r14d
 * 00000001800A72BD: jnz     loc_1800A7381
 * 00000001800A72C3: lea     rax, unk_1801620B0
 * 00000001800A72CA: mov     qword ptr [rbp+9E40h+var_9DA0], rax
 * 00000001800A72D1: lea     rax, unk_180168668
 * 00000001800A72D8: mov     qword ptr [rbp+9E40h+var_9DA0+8], rax
 * 00000001800A72DF: movups  xmm7, [rbp+9E40h+var_9DA0]
 * 00000001800A72E6: mov     dword ptr [rbp+9E40h+var_8AA0], 5
 * 00000001800A72F0: mov     dword ptr [rbp+9E40h+var_8AA0+4], esi
 * 00000001800A72F6: movups  xmm6, [rbp+9E40h+var_8AA0]
 * 00000001800A72FD: call    sub_1800A5D74
 * 00000001800A7302: mov     r8, rax
 * 00000001800A7305: mov     r9d, r12d
 * 00000001800A7308: mov     edx, 32h ; '2'
 * 00000001800A730D: lea     rcx, [rbp+9E40h+var_290]
 * 00000001800A7314: call    sub_180073668
 * 00000001800A7319: nop
 * 00000001800A731A: mov     r8, rax
 * 00000001800A731D: mov     rdx, r13
 * 00000001800A7320: lea     rcx, [rbp+9E40h+var_3B0]
 * 00000001800A7327: call    sub_18001B518
 * 00000001800A732C: nop
 * 00000001800A732D: lea     r8, aPixel; "/Pixel"
 * 00000001800A7334: mov     rdx, rax
 * 00000001800A7337: lea     rcx, [rbp+9E40h+var_6670]
 * 00000001800A733E: call    sub_18001B448
 * 00000001800A7343: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7348: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A734D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7352: mov     rcx, rax
 * 00000001800A7355: call    sub_18007370C
 * 00000001800A735A: nop
 * 00000001800A735B: lea     rcx, [rbp+9E40h+var_3B0]
 * 00000001800A7362: call    sub_180010F20
 * 00000001800A7367: nop
 * 00000001800A7368: lea     rcx, [rbp+9E40h+var_290]
 * 00000001800A736F: call    sub_180010F20
 * 00000001800A7374: nop
 * 00000001800A7375: lea     rcx, dword_1801C9278
 * 00000001800A737C: call    _Init_thread_footer
 * 00000001800A7381: mov     rax, [rdi+rbx*8]
 * 00000001800A7385: mov     eax, [r15+rax]
 * 00000001800A7389: cmp     cs:dword_1801C927C, eax
 * 00000001800A738F: jle     loc_1800A746C
 * 00000001800A7395: lea     rcx, dword_1801C927C
 * 00000001800A739C: call    sub_18000C8D0
 * 00000001800A73A1: cmp     cs:dword_1801C927C, r14d
 * 00000001800A73A8: jnz     loc_1800A746C
 * 00000001800A73AE: lea     rax, unk_18016FCD0
 * 00000001800A73B5: mov     qword ptr [rbp+9E40h+var_9D90], rax
 * 00000001800A73BC: lea     rax, unk_18017645C
 * 00000001800A73C3: mov     qword ptr [rbp+9E40h+var_9D90+8], rax
 * 00000001800A73CA: movups  xmm7, [rbp+9E40h+var_9D90]
 * 00000001800A73D1: mov     dword ptr [rbp+9E40h+var_8A80], 5
 * 00000001800A73DB: mov     dword ptr [rbp+9E40h+var_8A80+4], esi
 * 00000001800A73E1: movups  xmm6, [rbp+9E40h+var_8A80]
 * 00000001800A73E8: call    sub_1800A5D74
 * 00000001800A73ED: mov     r8, rax
 * 00000001800A73F0: mov     r9d, r12d
 * 00000001800A73F3: mov     edx, 38h ; '8'
 * 00000001800A73F8: lea     rcx, [rbp+9E40h+var_46D0]
 * 00000001800A73FF: call    sub_180073668
 * 00000001800A7404: nop
 * 00000001800A7405: mov     r8, rax
 * 00000001800A7408: mov     rdx, r13
 * 00000001800A740B: lea     rcx, [rbp+9E40h+var_170]
 * 00000001800A7412: call    sub_18001B518
 * 00000001800A7417: nop
 * 00000001800A7418: lea     r8, aPixel; "/Pixel"
 * 00000001800A741F: mov     rdx, rax
 * 00000001800A7422: lea     rcx, [rbp+9E40h+var_65D0]
 * 00000001800A7429: call    sub_18001B448
 * 00000001800A742E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7433: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7438: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A743D: mov     rcx, rax
 * 00000001800A7440: call    sub_18007370C
 * 00000001800A7445: nop
 * 00000001800A7446: lea     rcx, [rbp+9E40h+var_170]
 * 00000001800A744D: call    sub_180010F20
 * 00000001800A7452: nop
 * 00000001800A7453: lea     rcx, [rbp+9E40h+var_46D0]
 * 00000001800A745A: call    sub_180010F20
 * 00000001800A745F: nop
 * 00000001800A7460: lea     rcx, dword_1801C927C
 * 00000001800A7467: call    _Init_thread_footer
 * 00000001800A746C: mov     rax, [rdi+rbx*8]
 * 00000001800A7470: mov     eax, [r15+rax]
 * 00000001800A7474: cmp     cs:dword_1801C9280, eax
 * 00000001800A747A: jle     loc_1800A7557
 * 00000001800A7480: lea     rcx, dword_1801C9280
 * 00000001800A7487: call    sub_18000C8D0
 * 00000001800A748C: cmp     cs:dword_1801C9280, r14d
 * 00000001800A7493: jnz     loc_1800A7557
 * 00000001800A7499: lea     rax, unk_18016FCD0
 * 00000001800A74A0: mov     qword ptr [rbp+9E40h+var_9D80], rax
 * 00000001800A74A7: lea     rax, unk_18017645C
 * 00000001800A74AE: mov     qword ptr [rbp+9E40h+var_9D80+8], rax
 * 00000001800A74B5: movups  xmm7, [rbp+9E40h+var_9D80]
 * 00000001800A74BC: mov     dword ptr [rbp+9E40h+var_8A60], 5
 * 00000001800A74C6: mov     dword ptr [rbp+9E40h+var_8A60+4], esi
 * 00000001800A74CC: movups  xmm6, [rbp+9E40h+var_8A60]
 * 00000001800A74D3: call    sub_1800A5D74
 * 00000001800A74D8: mov     r8, rax
 * 00000001800A74DB: mov     r9d, r12d
 * 00000001800A74DE: mov     edx, 3Ah ; ':'
 * 00000001800A74E3: lea     rcx, [rbp+9E40h+var_4610]
 * 00000001800A74EA: call    sub_180073668
 * 00000001800A74EF: nop
 * 00000001800A74F0: mov     r8, rax
 * 00000001800A74F3: mov     rdx, r13
 * 00000001800A74F6: lea     rcx, [rbp+9E40h+var_4670]
 * 00000001800A74FD: call    sub_18001B518
 * 00000001800A7502: nop
 * 00000001800A7503: lea     r8, aPixel; "/Pixel"
 * 00000001800A750A: mov     rdx, rax
 * 00000001800A750D: lea     rcx, [rbp+9E40h+var_6550]
 * 00000001800A7514: call    sub_18001B448
 * 00000001800A7519: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A751E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7523: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7528: mov     rcx, rax
 * 00000001800A752B: call    sub_18007370C
 * 00000001800A7530: nop
 * 00000001800A7531: lea     rcx, [rbp+9E40h+var_4670]
 * 00000001800A7538: call    sub_180010F20
 * 00000001800A753D: nop
 * 00000001800A753E: lea     rcx, [rbp+9E40h+var_4610]
 * 00000001800A7545: call    sub_180010F20
 * 00000001800A754A: nop
 * 00000001800A754B: lea     rcx, dword_1801C9280
 * 00000001800A7552: call    _Init_thread_footer
 * 00000001800A7557: mov     rax, [rdi+rbx*8]
 * 00000001800A755B: mov     eax, [r15+rax]
 * 00000001800A755F: cmp     cs:dword_1801C9284, eax
 * 00000001800A7565: jle     loc_1800A7642
 * 00000001800A756B: lea     rcx, dword_1801C9284
 * 00000001800A7572: call    sub_18000C8D0
 * 00000001800A7577: cmp     cs:dword_1801C9284, r14d
 * 00000001800A757E: jnz     loc_1800A7642
 * 00000001800A7584: lea     rax, unk_18017FE90
 * 00000001800A758B: mov     qword ptr [rbp+9E40h+var_9D70], rax
 * 00000001800A7592: lea     rax, unk_180186274
 * 00000001800A7599: mov     qword ptr [rbp+9E40h+var_9D70+8], rax
 * 00000001800A75A0: movups  xmm7, [rbp+9E40h+var_9D70]
 * 00000001800A75A7: mov     dword ptr [rbp+9E40h+var_8A40], 5
 * 00000001800A75B1: mov     dword ptr [rbp+9E40h+var_8A40+4], esi
 * 00000001800A75B7: movups  xmm6, [rbp+9E40h+var_8A40]
 * 00000001800A75BE: call    sub_1800A5D74
 * 00000001800A75C3: mov     r8, rax
 * 00000001800A75C6: mov     r9d, r12d
 * 00000001800A75C9: mov     edx, 40h ; '@'
 * 00000001800A75CE: lea     rcx, [rbp+9E40h+var_4550]
 * 00000001800A75D5: call    sub_180073668
 * 00000001800A75DA: nop
 * 00000001800A75DB: mov     r8, rax
 * 00000001800A75DE: mov     rdx, r13
 * 00000001800A75E1: lea     rcx, [rbp+9E40h+var_45B0]
 * 00000001800A75E8: call    sub_18001B518
 * 00000001800A75ED: nop
 * 00000001800A75EE: lea     r8, aPixel; "/Pixel"
 * 00000001800A75F5: mov     rdx, rax
 * 00000001800A75F8: lea     rcx, [rbp+9E40h+var_64B0]
 * 00000001800A75FF: call    sub_18001B448
 * 00000001800A7604: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7609: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A760E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7613: mov     rcx, rax
 * 00000001800A7616: call    sub_18007370C
 * 00000001800A761B: nop
 * 00000001800A761C: lea     rcx, [rbp+9E40h+var_45B0]
 * 00000001800A7623: call    sub_180010F20
 * 00000001800A7628: nop
 * 00000001800A7629: lea     rcx, [rbp+9E40h+var_4550]
 * 00000001800A7630: call    sub_180010F20
 * 00000001800A7635: nop
 * 00000001800A7636: lea     rcx, dword_1801C9284
 * 00000001800A763D: call    _Init_thread_footer
 * 00000001800A7642: mov     rax, [rdi+rbx*8]
 * 00000001800A7646: mov     eax, [r15+rax]
 * 00000001800A764A: cmp     cs:dword_1801C9288, eax
 * 00000001800A7650: jle     loc_1800A772D
 * 00000001800A7656: lea     rcx, dword_1801C9288
 * 00000001800A765D: call    sub_18000C8D0
 * 00000001800A7662: cmp     cs:dword_1801C9288, r14d
 * 00000001800A7669: jnz     loc_1800A772D
 * 00000001800A766F: lea     rax, unk_18017FE90
 * 00000001800A7676: mov     qword ptr [rbp+9E40h+var_9D60], rax
 * 00000001800A767D: lea     rax, unk_180186274
 * 00000001800A7684: mov     qword ptr [rbp+9E40h+var_9D60+8], rax
 * 00000001800A768B: movups  xmm7, [rbp+9E40h+var_9D60]
 * 00000001800A7692: mov     dword ptr [rbp+9E40h+var_8A20], 5
 * 00000001800A769C: mov     dword ptr [rbp+9E40h+var_8A20+4], esi
 * 00000001800A76A2: movups  xmm6, [rbp+9E40h+var_8A20]
 * 00000001800A76A9: call    sub_1800A5D74
 * 00000001800A76AE: mov     r8, rax
 * 00000001800A76B1: mov     r9d, r12d
 * 00000001800A76B4: mov     edx, 42h ; 'B'
 * 00000001800A76B9: lea     rcx, [rbp+9E40h+var_4490]
 * 00000001800A76C0: call    sub_180073668
 * 00000001800A76C5: nop
 * 00000001800A76C6: mov     r8, rax
 * 00000001800A76C9: mov     rdx, r13
 * 00000001800A76CC: lea     rcx, [rbp+9E40h+var_44F0]
 * 00000001800A76D3: call    sub_18001B518
 * 00000001800A76D8: nop
 * 00000001800A76D9: lea     r8, aPixel; "/Pixel"
 * 00000001800A76E0: mov     rdx, rax
 * 00000001800A76E3: lea     rcx, [rbp+9E40h+var_69F0]
 * 00000001800A76EA: call    sub_18001B448
 * 00000001800A76EF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A76F4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A76F9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A76FE: mov     rcx, rax
 * 00000001800A7701: call    sub_18007370C
 * 00000001800A7706: nop
 * 00000001800A7707: lea     rcx, [rbp+9E40h+var_44F0]
 * 00000001800A770E: call    sub_180010F20
 * 00000001800A7713: nop
 * 00000001800A7714: lea     rcx, [rbp+9E40h+var_4490]
 * 00000001800A771B: call    sub_180010F20
 * 00000001800A7720: nop
 * 00000001800A7721: lea     rcx, dword_1801C9288
 * 00000001800A7728: call    _Init_thread_footer
 * 00000001800A772D: mov     rax, [rdi+rbx*8]
 * 00000001800A7731: mov     eax, [r15+rax]
 * 00000001800A7735: cmp     cs:dword_1801C928C, eax
 * 00000001800A773B: jle     loc_1800A7818
 * 00000001800A7741: lea     rcx, dword_1801C928C
 * 00000001800A7748: call    sub_18000C8D0
 * 00000001800A774D: cmp     cs:dword_1801C928C, r14d
 * 00000001800A7754: jnz     loc_1800A7818
 * 00000001800A775A: lea     rax, unk_180168670
 * 00000001800A7761: mov     qword ptr [rbp+9E40h+var_9D50], rax
 * 00000001800A7768: lea     rax, unk_18016EBFC
 * 00000001800A776F: mov     qword ptr [rbp+9E40h+var_9D50+8], rax
 * 00000001800A7776: movups  xmm7, [rbp+9E40h+var_9D50]
 * 00000001800A777D: mov     dword ptr [rbp+9E40h+var_8A00], 5
 * 00000001800A7787: mov     dword ptr [rbp+9E40h+var_8A00+4], esi
 * 00000001800A778D: movups  xmm6, [rbp+9E40h+var_8A00]
 * 00000001800A7794: call    sub_1800A5D74
 * 00000001800A7799: mov     r8, rax
 * 00000001800A779C: mov     r9d, r12d
 * 00000001800A779F: mov     edx, 48h ; 'H'
 * 00000001800A77A4: lea     rcx, [rbp+9E40h+var_43D0]
 * 00000001800A77AB: call    sub_180073668
 * 00000001800A77B0: nop
 * 00000001800A77B1: mov     r8, rax
 * 00000001800A77B4: mov     rdx, r13
 * 00000001800A77B7: lea     rcx, [rbp+9E40h+var_4430]
 * 00000001800A77BE: call    sub_18001B518
 * 00000001800A77C3: nop
 * 00000001800A77C4: lea     r8, aPixel; "/Pixel"
 * 00000001800A77CB: mov     rdx, rax
 * 00000001800A77CE: lea     rcx, [rbp+9E40h+var_6910]
 * 00000001800A77D5: call    sub_18001B448
 * 00000001800A77DA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A77DF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A77E4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A77E9: mov     rcx, rax
 * 00000001800A77EC: call    sub_18007370C
 * 00000001800A77F1: nop
 * 00000001800A77F2: lea     rcx, [rbp+9E40h+var_4430]
 * 00000001800A77F9: call    sub_180010F20
 * 00000001800A77FE: nop
 * 00000001800A77FF: lea     rcx, [rbp+9E40h+var_43D0]
 * 00000001800A7806: call    sub_180010F20
 * 00000001800A780B: nop
 * 00000001800A780C: lea     rcx, dword_1801C928C
 * 00000001800A7813: call    _Init_thread_footer
 * 00000001800A7818: mov     rax, [rdi+rbx*8]
 * 00000001800A781C: mov     eax, [r15+rax]
 * 00000001800A7820: cmp     cs:dword_1801C9290, eax
 * 00000001800A7826: jle     loc_1800A7903
 * 00000001800A782C: lea     rcx, dword_1801C9290
 * 00000001800A7833: call    sub_18000C8D0
 * 00000001800A7838: cmp     cs:dword_1801C9290, r14d
 * 00000001800A783F: jnz     loc_1800A7903
 * 00000001800A7845: lea     rax, unk_180168670
 * 00000001800A784C: mov     qword ptr [rbp+9E40h+var_9D40], rax
 * 00000001800A7853: lea     rax, unk_18016EBFC
 * 00000001800A785A: mov     qword ptr [rbp+9E40h+var_9D40+8], rax
 * 00000001800A7861: movups  xmm7, [rbp+9E40h+var_9D40]
 * 00000001800A7868: mov     dword ptr [rbp+9E40h+var_89E0], 5
 * 00000001800A7872: mov     dword ptr [rbp+9E40h+var_89E0+4], esi
 * 00000001800A7878: movups  xmm6, [rbp+9E40h+var_89E0]
 * 00000001800A787F: call    sub_1800A5D74
 * 00000001800A7884: mov     r8, rax
 * 00000001800A7887: mov     r9d, r12d
 * 00000001800A788A: mov     edx, 4Ah ; 'J'
 * 00000001800A788F: lea     rcx, [rbp+9E40h+var_4310]
 * 00000001800A7896: call    sub_180073668
 * 00000001800A789B: nop
 * 00000001800A789C: mov     r8, rax
 * 00000001800A789F: mov     rdx, r13
 * 00000001800A78A2: lea     rcx, [rbp+9E40h+var_4370]
 * 00000001800A78A9: call    sub_18001B518
 * 00000001800A78AE: nop
 * 00000001800A78AF: lea     r8, aPixel; "/Pixel"
 * 00000001800A78B6: mov     rdx, rax
 * 00000001800A78B9: lea     rcx, [rbp+9E40h+var_6850]
 * 00000001800A78C0: call    sub_18001B448
 * 00000001800A78C5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A78CA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A78CF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A78D4: mov     rcx, rax
 * 00000001800A78D7: call    sub_18007370C
 * 00000001800A78DC: nop
 * 00000001800A78DD: lea     rcx, [rbp+9E40h+var_4370]
 * 00000001800A78E4: call    sub_180010F20
 * 00000001800A78E9: nop
 * 00000001800A78EA: lea     rcx, [rbp+9E40h+var_4310]
 * 00000001800A78F1: call    sub_180010F20
 * 00000001800A78F6: nop
 * 00000001800A78F7: lea     rcx, dword_1801C9290
 * 00000001800A78FE: call    _Init_thread_footer
 * 00000001800A7903: mov     rax, [rdi+rbx*8]
 * 00000001800A7907: mov     eax, [r15+rax]
 * 00000001800A790B: cmp     cs:dword_1801C9294, eax
 * 00000001800A7911: jle     loc_1800A79EE
 * 00000001800A7917: lea     rcx, dword_1801C9294
 * 00000001800A791E: call    sub_18000C8D0
 * 00000001800A7923: cmp     cs:dword_1801C9294, r14d
 * 00000001800A792A: jnz     loc_1800A79EE
 * 00000001800A7930: lea     rax, unk_1801620B0
 * 00000001800A7937: mov     qword ptr [rbp+9E40h+var_9D30], rax
 * 00000001800A793E: lea     rax, unk_180168668
 * 00000001800A7945: mov     qword ptr [rbp+9E40h+var_9D30+8], rax
 * 00000001800A794C: movups  xmm7, [rbp+9E40h+var_9D30]
 * 00000001800A7953: mov     dword ptr [rbp+9E40h+var_89C0], 5
 * 00000001800A795D: mov     dword ptr [rbp+9E40h+var_89C0+4], esi
 * 00000001800A7963: movups  xmm6, [rbp+9E40h+var_89C0]
 * 00000001800A796A: call    sub_1800A5D74
 * 00000001800A796F: mov     r8, rax
 * 00000001800A7972: mov     r9d, r12d
 * 00000001800A7975: mov     edx, 50h ; 'P'
 * 00000001800A797A: lea     rcx, [rbp+9E40h+var_4250]
 * 00000001800A7981: call    sub_180073668
 * 00000001800A7986: nop
 * 00000001800A7987: mov     r8, rax
 * 00000001800A798A: mov     rdx, r13
 * 00000001800A798D: lea     rcx, [rbp+9E40h+var_42B0]
 * 00000001800A7994: call    sub_18001B518
 * 00000001800A7999: nop
 * 00000001800A799A: lea     r8, aPixel; "/Pixel"
 * 00000001800A79A1: mov     rdx, rax
 * 00000001800A79A4: lea     rcx, [rbp+9E40h+var_6750]
 * 00000001800A79AB: call    sub_18001B448
 * 00000001800A79B0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A79B5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A79BA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A79BF: mov     rcx, rax
 * 00000001800A79C2: call    sub_18007370C
 * 00000001800A79C7: nop
 * 00000001800A79C8: lea     rcx, [rbp+9E40h+var_42B0]
 * 00000001800A79CF: call    sub_180010F20
 * 00000001800A79D4: nop
 * 00000001800A79D5: lea     rcx, [rbp+9E40h+var_4250]
 * 00000001800A79DC: call    sub_180010F20
 * 00000001800A79E1: nop
 * 00000001800A79E2: lea     rcx, dword_1801C9294
 * 00000001800A79E9: call    _Init_thread_footer
 * 00000001800A79EE: mov     rax, [rdi+rbx*8]
 * 00000001800A79F2: mov     eax, [r15+rax]
 * 00000001800A79F6: cmp     cs:dword_1801C9298, eax
 * 00000001800A79FC: jle     loc_1800A7AD9
 * 00000001800A7A02: lea     rcx, dword_1801C9298
 * 00000001800A7A09: call    sub_18000C8D0
 * 00000001800A7A0E: cmp     cs:dword_1801C9298, r14d
 * 00000001800A7A15: jnz     loc_1800A7AD9
 * 00000001800A7A1B: lea     rax, unk_1801620B0
 * 00000001800A7A22: mov     qword ptr [rbp+9E40h+var_9D20], rax
 * 00000001800A7A29: lea     rax, unk_180168668
 * 00000001800A7A30: mov     qword ptr [rbp+9E40h+var_9D20+8], rax
 * 00000001800A7A37: movups  xmm7, [rbp+9E40h+var_9D20]
 * 00000001800A7A3E: mov     dword ptr [rbp+9E40h+var_89A0], 5
 * 00000001800A7A48: mov     dword ptr [rbp+9E40h+var_89A0+4], esi
 * 00000001800A7A4E: movups  xmm6, [rbp+9E40h+var_89A0]
 * 00000001800A7A55: call    sub_1800A5D74
 * 00000001800A7A5A: mov     r8, rax
 * 00000001800A7A5D: mov     r9d, r12d
 * 00000001800A7A60: mov     edx, 52h ; 'R'
 * 00000001800A7A65: lea     rcx, [rbp+9E40h+var_4190]
 * 00000001800A7A6C: call    sub_180073668
 * 00000001800A7A71: nop
 * 00000001800A7A72: mov     r8, rax
 * 00000001800A7A75: mov     rdx, r13
 * 00000001800A7A78: lea     rcx, [rbp+9E40h+var_41F0]
 * 00000001800A7A7F: call    sub_18001B518
 * 00000001800A7A84: nop
 * 00000001800A7A85: lea     r8, aPixel; "/Pixel"
 * 00000001800A7A8C: mov     rdx, rax
 * 00000001800A7A8F: lea     rcx, [rbp+9E40h+var_6690]
 * 00000001800A7A96: call    sub_18001B448
 * 00000001800A7A9B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7AA0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7AA5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7AAA: mov     rcx, rax
 * 00000001800A7AAD: call    sub_18007370C
 * 00000001800A7AB2: nop
 * 00000001800A7AB3: lea     rcx, [rbp+9E40h+var_41F0]
 * 00000001800A7ABA: call    sub_180010F20
 * 00000001800A7ABF: nop
 * 00000001800A7AC0: lea     rcx, [rbp+9E40h+var_4190]
 * 00000001800A7AC7: call    sub_180010F20
 * 00000001800A7ACC: nop
 * 00000001800A7ACD: lea     rcx, dword_1801C9298
 * 00000001800A7AD4: call    _Init_thread_footer
 * 00000001800A7AD9: mov     rax, [rdi+rbx*8]
 * 00000001800A7ADD: mov     eax, [r15+rax]
 * 00000001800A7AE1: cmp     cs:dword_1801C929C, eax
 * 00000001800A7AE7: jle     loc_1800A7BC4
 * 00000001800A7AED: lea     rcx, dword_1801C929C
 * 00000001800A7AF4: call    sub_18000C8D0
 * 00000001800A7AF9: cmp     cs:dword_1801C929C, r14d
 * 00000001800A7B00: jnz     loc_1800A7BC4
 * 00000001800A7B06: lea     rax, unk_18016FCD0
 * 00000001800A7B0D: mov     qword ptr [rbp+9E40h+var_9D10], rax
 * 00000001800A7B14: lea     rax, unk_18017645C
 * 00000001800A7B1B: mov     qword ptr [rbp+9E40h+var_9D10+8], rax
 * 00000001800A7B22: movups  xmm7, [rbp+9E40h+var_9D10]
 * 00000001800A7B29: mov     dword ptr [rbp+9E40h+var_8980], 5
 * 00000001800A7B33: mov     dword ptr [rbp+9E40h+var_8980+4], esi
 * 00000001800A7B39: movups  xmm6, [rbp+9E40h+var_8980]
 * 00000001800A7B40: call    sub_1800A5D74
 * 00000001800A7B45: mov     r8, rax
 * 00000001800A7B48: mov     r9d, r12d
 * 00000001800A7B4B: mov     edx, 58h ; 'X'
 * 00000001800A7B50: lea     rcx, [rbp+9E40h+var_40D0]
 * 00000001800A7B57: call    sub_180073668
 * 00000001800A7B5C: nop
 * 00000001800A7B5D: mov     r8, rax
 * 00000001800A7B60: mov     rdx, r13
 * 00000001800A7B63: lea     rcx, [rbp+9E40h+var_4130]
 * 00000001800A7B6A: call    sub_18001B518
 * 00000001800A7B6F: nop
 * 00000001800A7B70: lea     r8, aPixel; "/Pixel"
 * 00000001800A7B77: mov     rdx, rax
 * 00000001800A7B7A: lea     rcx, [rbp+9E40h+var_65B0]
 * 00000001800A7B81: call    sub_18001B448
 * 00000001800A7B86: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7B8B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7B90: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7B95: mov     rcx, rax
 * 00000001800A7B98: call    sub_18007370C
 * 00000001800A7B9D: nop
 * 00000001800A7B9E: lea     rcx, [rbp+9E40h+var_4130]
 * 00000001800A7BA5: call    sub_180010F20
 * 00000001800A7BAA: nop
 * 00000001800A7BAB: lea     rcx, [rbp+9E40h+var_40D0]
 * 00000001800A7BB2: call    sub_180010F20
 * 00000001800A7BB7: nop
 * 00000001800A7BB8: lea     rcx, dword_1801C929C
 * 00000001800A7BBF: call    _Init_thread_footer
 * 00000001800A7BC4: mov     rax, [rdi+rbx*8]
 * 00000001800A7BC8: mov     eax, [r15+rax]
 * 00000001800A7BCC: cmp     cs:dword_1801C92A0, eax
 * 00000001800A7BD2: jle     loc_1800A7CAF
 * 00000001800A7BD8: lea     rcx, dword_1801C92A0
 * 00000001800A7BDF: call    sub_18000C8D0
 * 00000001800A7BE4: cmp     cs:dword_1801C92A0, r14d
 * 00000001800A7BEB: jnz     loc_1800A7CAF
 * 00000001800A7BF1: lea     rax, unk_18016FCD0
 * 00000001800A7BF8: mov     qword ptr [rbp+9E40h+var_9D00], rax
 * 00000001800A7BFF: lea     rax, unk_18017645C
 * 00000001800A7C06: mov     qword ptr [rbp+9E40h+var_9D00+8], rax
 * 00000001800A7C0D: movups  xmm7, [rbp+9E40h+var_9D00]
 * 00000001800A7C14: mov     dword ptr [rbp+9E40h+var_8960], 5
 * 00000001800A7C1E: mov     dword ptr [rbp+9E40h+var_8960+4], esi
 * 00000001800A7C24: movups  xmm6, [rbp+9E40h+var_8960]
 * 00000001800A7C2B: call    sub_1800A5D74
 * 00000001800A7C30: mov     r8, rax
 * 00000001800A7C33: mov     r9d, r12d
 * 00000001800A7C36: mov     edx, 5Ah ; 'Z'
 * 00000001800A7C3B: lea     rcx, [rbp+9E40h+var_4010]
 * 00000001800A7C42: call    sub_180073668
 * 00000001800A7C47: nop
 * 00000001800A7C48: mov     r8, rax
 * 00000001800A7C4B: mov     rdx, r13
 * 00000001800A7C4E: lea     rcx, [rbp+9E40h+var_4070]
 * 00000001800A7C55: call    sub_18001B518
 * 00000001800A7C5A: nop
 * 00000001800A7C5B: lea     r8, aPixel; "/Pixel"
 * 00000001800A7C62: mov     rdx, rax
 * 00000001800A7C65: lea     rcx, [rbp+9E40h+var_64F0]
 * 00000001800A7C6C: call    sub_18001B448
 * 00000001800A7C71: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7C76: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7C7B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7C80: mov     rcx, rax
 * 00000001800A7C83: call    sub_18007370C
 * 00000001800A7C88: nop
 * 00000001800A7C89: lea     rcx, [rbp+9E40h+var_4070]
 * 00000001800A7C90: call    sub_180010F20
 * 00000001800A7C95: nop
 * 00000001800A7C96: lea     rcx, [rbp+9E40h+var_4010]
 * 00000001800A7C9D: call    sub_180010F20
 * 00000001800A7CA2: nop
 * 00000001800A7CA3: lea     rcx, dword_1801C92A0
 * 00000001800A7CAA: call    _Init_thread_footer
 * 00000001800A7CAF: mov     rax, [rdi+rbx*8]
 * 00000001800A7CB3: mov     eax, [r15+rax]
 * 00000001800A7CB7: cmp     cs:dword_1801C92A4, eax
 * 00000001800A7CBD: jle     loc_1800A7D9A
 * 00000001800A7CC3: lea     rcx, dword_1801C92A4
 * 00000001800A7CCA: call    sub_18000C8D0
 * 00000001800A7CCF: cmp     cs:dword_1801C92A4, r14d
 * 00000001800A7CD6: jnz     loc_1800A7D9A
 * 00000001800A7CDC: lea     rax, unk_18017FE90
 * 00000001800A7CE3: mov     qword ptr [rbp+9E40h+var_9CF0], rax
 * 00000001800A7CEA: lea     rax, unk_180186274
 * 00000001800A7CF1: mov     qword ptr [rbp+9E40h+var_9CF0+8], rax
 * 00000001800A7CF8: movups  xmm7, [rbp+9E40h+var_9CF0]
 * 00000001800A7CFF: mov     dword ptr [rbp+9E40h+var_8940], 5
 * 00000001800A7D09: mov     dword ptr [rbp+9E40h+var_8940+4], esi
 * 00000001800A7D0F: movups  xmm6, [rbp+9E40h+var_8940]
 * 00000001800A7D16: call    sub_1800A5D74
 * 00000001800A7D1B: mov     r8, rax
 * 00000001800A7D1E: mov     r9d, r12d
 * 00000001800A7D21: mov     edx, 60h ; '`'
 * 00000001800A7D26: lea     rcx, [rbp+9E40h+var_3F50]
 * 00000001800A7D2D: call    sub_180073668
 * 00000001800A7D32: nop
 * 00000001800A7D33: mov     r8, rax
 * 00000001800A7D36: mov     rdx, r13
 * 00000001800A7D39: lea     rcx, [rbp+9E40h+var_3FB0]
 * 00000001800A7D40: call    sub_18001B518
 * 00000001800A7D45: nop
 * 00000001800A7D46: lea     r8, aPixel; "/Pixel"
 * 00000001800A7D4D: mov     rdx, rax
 * 00000001800A7D50: lea     rcx, [rbp+9E40h+var_6990]
 * 00000001800A7D57: call    sub_18001B448
 * 00000001800A7D5C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7D61: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7D66: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7D6B: mov     rcx, rax
 * 00000001800A7D6E: call    sub_18007370C
 * 00000001800A7D73: nop
 * 00000001800A7D74: lea     rcx, [rbp+9E40h+var_3FB0]
 * 00000001800A7D7B: call    sub_180010F20
 * 00000001800A7D80: nop
 * 00000001800A7D81: lea     rcx, [rbp+9E40h+var_3F50]
 * 00000001800A7D88: call    sub_180010F20
 * 00000001800A7D8D: nop
 * 00000001800A7D8E: lea     rcx, dword_1801C92A4
 * 00000001800A7D95: call    _Init_thread_footer
 * 00000001800A7D9A: mov     rax, [rdi+rbx*8]
 * 00000001800A7D9E: mov     eax, [r15+rax]
 * 00000001800A7DA2: cmp     cs:dword_1801C92A8, eax
 * 00000001800A7DA8: jle     loc_1800A7E85
 * 00000001800A7DAE: lea     rcx, dword_1801C92A8
 * 00000001800A7DB5: call    sub_18000C8D0
 * 00000001800A7DBA: cmp     cs:dword_1801C92A8, r14d
 * 00000001800A7DC1: jnz     loc_1800A7E85
 * 00000001800A7DC7: lea     rax, unk_18017FE90
 * 00000001800A7DCE: mov     qword ptr [rbp+9E40h+var_9CE0], rax
 * 00000001800A7DD5: lea     rax, unk_180186274
 * 00000001800A7DDC: mov     qword ptr [rbp+9E40h+var_9CE0+8], rax
 * 00000001800A7DE3: movups  xmm7, [rbp+9E40h+var_9CE0]
 * 00000001800A7DEA: mov     dword ptr [rbp+9E40h+var_8920], 5
 * 00000001800A7DF4: mov     dword ptr [rbp+9E40h+var_8920+4], esi
 * 00000001800A7DFA: movups  xmm6, [rbp+9E40h+var_8920]
 * 00000001800A7E01: call    sub_1800A5D74
 * 00000001800A7E06: mov     r8, rax
 * 00000001800A7E09: mov     r9d, r12d
 * 00000001800A7E0C: mov     edx, 62h ; 'b'
 * 00000001800A7E11: lea     rcx, [rbp+9E40h+var_3E90]
 * 00000001800A7E18: call    sub_180073668
 * 00000001800A7E1D: nop
 * 00000001800A7E1E: mov     r8, rax
 * 00000001800A7E21: mov     rdx, r13
 * 00000001800A7E24: lea     rcx, [rbp+9E40h+var_3EF0]
 * 00000001800A7E2B: call    sub_18001B518
 * 00000001800A7E30: nop
 * 00000001800A7E31: lea     r8, aPixel; "/Pixel"
 * 00000001800A7E38: mov     rdx, rax
 * 00000001800A7E3B: lea     rcx, [rbp+9E40h+var_6870]
 * 00000001800A7E42: call    sub_18001B448
 * 00000001800A7E47: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7E4C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7E51: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7E56: mov     rcx, rax
 * 00000001800A7E59: call    sub_18007370C
 * 00000001800A7E5E: nop
 * 00000001800A7E5F: lea     rcx, [rbp+9E40h+var_3EF0]
 * 00000001800A7E66: call    sub_180010F20
 * 00000001800A7E6B: nop
 * 00000001800A7E6C: lea     rcx, [rbp+9E40h+var_3E90]
 * 00000001800A7E73: call    sub_180010F20
 * 00000001800A7E78: nop
 * 00000001800A7E79: lea     rcx, dword_1801C92A8
 * 00000001800A7E80: call    _Init_thread_footer
 * 00000001800A7E85: mov     rax, [rdi+rbx*8]
 * 00000001800A7E89: mov     eax, [r15+rax]
 * 00000001800A7E8D: cmp     cs:dword_1801C92AC, eax
 * 00000001800A7E93: jle     loc_1800A7F70
 * 00000001800A7E99: lea     rcx, dword_1801C92AC
 * 00000001800A7EA0: call    sub_18000C8D0
 * 00000001800A7EA5: cmp     cs:dword_1801C92AC, r14d
 * 00000001800A7EAC: jnz     loc_1800A7F70
 * 00000001800A7EB2: lea     rax, unk_180168670
 * 00000001800A7EB9: mov     qword ptr [rbp+9E40h+var_9CD0], rax
 * 00000001800A7EC0: lea     rax, unk_18016EBFC
 * 00000001800A7EC7: mov     qword ptr [rbp+9E40h+var_9CD0+8], rax
 * 00000001800A7ECE: movups  xmm7, [rbp+9E40h+var_9CD0]
 * 00000001800A7ED5: mov     dword ptr [rbp+9E40h+var_8900], 5
 * 00000001800A7EDF: mov     dword ptr [rbp+9E40h+var_8900+4], esi
 * 00000001800A7EE5: movups  xmm6, [rbp+9E40h+var_8900]
 * 00000001800A7EEC: call    sub_1800A5D74
 * 00000001800A7EF1: mov     r8, rax
 * 00000001800A7EF4: mov     r9d, r12d
 * 00000001800A7EF7: mov     edx, 68h ; 'h'
 * 00000001800A7EFC: lea     rcx, [rbp+9E40h+var_3DD0]
 * 00000001800A7F03: call    sub_180073668
 * 00000001800A7F08: nop
 * 00000001800A7F09: mov     r8, rax
 * 00000001800A7F0C: mov     rdx, r13
 * 00000001800A7F0F: lea     rcx, [rbp+9E40h+var_3E30]
 * 00000001800A7F16: call    sub_18001B518
 * 00000001800A7F1B: nop
 * 00000001800A7F1C: lea     r8, aPixel; "/Pixel"
 * 00000001800A7F23: mov     rdx, rax
 * 00000001800A7F26: lea     rcx, [rbp+9E40h+var_6730]
 * 00000001800A7F2D: call    sub_18001B448
 * 00000001800A7F32: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A7F37: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A7F3C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A7F41: mov     rcx, rax
 * 00000001800A7F44: call    sub_18007370C
 * 00000001800A7F49: nop
 * 00000001800A7F4A: lea     rcx, [rbp+9E40h+var_3E30]
 * 00000001800A7F51: call    sub_180010F20
 * 00000001800A7F56: nop
 * 00000001800A7F57: lea     rcx, [rbp+9E40h+var_3DD0]
 * 00000001800A7F5E: call    sub_180010F20
 * 00000001800A7F63: nop
 * 00000001800A7F64: lea     rcx, dword_1801C92AC
 * 00000001800A7F6B: call    _Init_thread_footer
 * 00000001800A7F70: mov     rax, [rdi+rbx*8]
 * 00000001800A7F74: mov     eax, [r15+rax]
 * 00000001800A7F78: cmp     cs:dword_1801C92B0, eax
 * 00000001800A7F7E: jle     loc_1800A805B
 * 00000001800A7F84: lea     rcx, dword_1801C92B0
 * 00000001800A7F8B: call    sub_18000C8D0
 * 00000001800A7F90: cmp     cs:dword_1801C92B0, r14d
 * 00000001800A7F97: jnz     loc_1800A805B
 * 00000001800A7F9D: lea     rax, unk_180168670
 * 00000001800A7FA4: mov     qword ptr [rbp+9E40h+var_9CC0], rax
 * 00000001800A7FAB: lea     rax, unk_18016EBFC
 * 00000001800A7FB2: mov     qword ptr [rbp+9E40h+var_9CC0+8], rax
 * 00000001800A7FB9: movups  xmm7, [rbp+9E40h+var_9CC0]
 * 00000001800A7FC0: mov     dword ptr [rbp+9E40h+var_88E0], 5
 * 00000001800A7FCA: mov     dword ptr [rbp+9E40h+var_88E0+4], esi
 * 00000001800A7FD0: movups  xmm6, [rbp+9E40h+var_88E0]
 * 00000001800A7FD7: call    sub_1800A5D74
 * 00000001800A7FDC: mov     r8, rax
 * 00000001800A7FDF: mov     r9d, r12d
 * 00000001800A7FE2: mov     edx, 6Ah ; 'j'
 * 00000001800A7FE7: lea     rcx, [rbp+9E40h+var_3D10]
 * 00000001800A7FEE: call    sub_180073668
 * 00000001800A7FF3: nop
 * 00000001800A7FF4: mov     r8, rax
 * 00000001800A7FF7: mov     rdx, r13
 * 00000001800A7FFA: lea     rcx, [rbp+9E40h+var_3D70]
 * 00000001800A8001: call    sub_18001B518
 * 00000001800A8006: nop
 * 00000001800A8007: lea     r8, aPixel; "/Pixel"
 * 00000001800A800E: mov     rdx, rax
 * 00000001800A8011: lea     rcx, [rbp+9E40h+var_6610]
 * 00000001800A8018: call    sub_18001B448
 * 00000001800A801D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8022: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8027: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A802C: mov     rcx, rax
 * 00000001800A802F: call    sub_18007370C
 * 00000001800A8034: nop
 * 00000001800A8035: lea     rcx, [rbp+9E40h+var_3D70]
 * 00000001800A803C: call    sub_180010F20
 * 00000001800A8041: nop
 * 00000001800A8042: lea     rcx, [rbp+9E40h+var_3D10]
 * 00000001800A8049: call    sub_180010F20
 * 00000001800A804E: nop
 * 00000001800A804F: lea     rcx, dword_1801C92B0
 * 00000001800A8056: call    _Init_thread_footer
 * 00000001800A805B: mov     rax, [rdi+rbx*8]
 * 00000001800A805F: mov     eax, [r15+rax]
 * 00000001800A8063: cmp     cs:dword_1801C92B4, eax
 * 00000001800A8069: jle     loc_1800A8146
 * 00000001800A806F: lea     rcx, dword_1801C92B4
 * 00000001800A8076: call    sub_18000C8D0
 * 00000001800A807B: cmp     cs:dword_1801C92B4, r14d
 * 00000001800A8082: jnz     loc_1800A8146
 * 00000001800A8088: lea     rax, unk_1801620B0
 * 00000001800A808F: mov     qword ptr [rbp+9E40h+var_9CB0], rax
 * 00000001800A8096: lea     rax, unk_180168668
 * 00000001800A809D: mov     qword ptr [rbp+9E40h+var_9CB0+8], rax
 * 00000001800A80A4: movups  xmm7, [rbp+9E40h+var_9CB0]
 * 00000001800A80AB: mov     dword ptr [rbp+9E40h+var_88C0], 5
 * 00000001800A80B5: mov     dword ptr [rbp+9E40h+var_88C0+4], esi
 * 00000001800A80BB: movups  xmm6, [rbp+9E40h+var_88C0]
 * 00000001800A80C2: call    sub_1800A5D74
 * 00000001800A80C7: mov     r8, rax
 * 00000001800A80CA: mov     r9d, r12d
 * 00000001800A80CD: mov     edx, 70h ; 'p'
 * 00000001800A80D2: lea     rcx, [rbp+9E40h+var_3C50]
 * 00000001800A80D9: call    sub_180073668
 * 00000001800A80DE: nop
 * 00000001800A80DF: mov     r8, rax
 * 00000001800A80E2: mov     rdx, r13
 * 00000001800A80E5: lea     rcx, [rbp+9E40h+var_3CB0]
 * 00000001800A80EC: call    sub_18001B518
 * 00000001800A80F1: nop
 * 00000001800A80F2: lea     r8, aPixel; "/Pixel"
 * 00000001800A80F9: mov     rdx, rax
 * 00000001800A80FC: lea     rcx, [rbp+9E40h+var_6490]
 * 00000001800A8103: call    sub_18001B448
 * 00000001800A8108: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A810D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8112: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8117: mov     rcx, rax
 * 00000001800A811A: call    sub_18007370C
 * 00000001800A811F: nop
 * 00000001800A8120: lea     rcx, [rbp+9E40h+var_3CB0]
 * 00000001800A8127: call    sub_180010F20
 * 00000001800A812C: nop
 * 00000001800A812D: lea     rcx, [rbp+9E40h+var_3C50]
 * 00000001800A8134: call    sub_180010F20
 * 00000001800A8139: nop
 * 00000001800A813A: lea     rcx, dword_1801C92B4
 * 00000001800A8141: call    _Init_thread_footer
 * 00000001800A8146: mov     rax, [rdi+rbx*8]
 * 00000001800A814A: mov     eax, [r15+rax]
 * 00000001800A814E: cmp     cs:dword_1801C92B8, eax
 * 00000001800A8154: jle     loc_1800A8231
 * 00000001800A815A: lea     rcx, dword_1801C92B8
 * 00000001800A8161: call    sub_18000C8D0
 * 00000001800A8166: cmp     cs:dword_1801C92B8, r14d
 * 00000001800A816D: jnz     loc_1800A8231
 * 00000001800A8173: lea     rax, unk_1801620B0
 * 00000001800A817A: mov     qword ptr [rbp+9E40h+var_9CA0], rax
 * 00000001800A8181: lea     rax, unk_180168668
 * 00000001800A8188: mov     qword ptr [rbp+9E40h+var_9CA0+8], rax
 * 00000001800A818F: movups  xmm7, [rbp+9E40h+var_9CA0]
 * 00000001800A8196: mov     dword ptr [rbp+9E40h+var_88A0], 5
 * 00000001800A81A0: mov     dword ptr [rbp+9E40h+var_88A0+4], esi
 * 00000001800A81A6: movups  xmm6, [rbp+9E40h+var_88A0]
 * 00000001800A81AD: call    sub_1800A5D74
 * 00000001800A81B2: mov     r8, rax
 * 00000001800A81B5: mov     r9d, r12d
 * 00000001800A81B8: mov     edx, 72h ; 'r'
 * 00000001800A81BD: lea     rcx, [rbp+9E40h+var_3B90]
 * 00000001800A81C4: call    sub_180073668
 * 00000001800A81C9: nop
 * 00000001800A81CA: mov     r8, rax
 * 00000001800A81CD: mov     rdx, r13
 * 00000001800A81D0: lea     rcx, [rbp+9E40h+var_3BF0]
 * 00000001800A81D7: call    sub_18001B518
 * 00000001800A81DC: nop
 * 00000001800A81DD: lea     r8, aPixel; "/Pixel"
 * 00000001800A81E4: mov     rdx, rax
 * 00000001800A81E7: lea     rcx, [rbp+9E40h+var_68D0]
 * 00000001800A81EE: call    sub_18001B448
 * 00000001800A81F3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A81F8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A81FD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8202: mov     rcx, rax
 * 00000001800A8205: call    sub_18007370C
 * 00000001800A820A: nop
 * 00000001800A820B: lea     rcx, [rbp+9E40h+var_3BF0]
 * 00000001800A8212: call    sub_180010F20
 * 00000001800A8217: nop
 * 00000001800A8218: lea     rcx, [rbp+9E40h+var_3B90]
 * 00000001800A821F: call    sub_180010F20
 * 00000001800A8224: nop
 * 00000001800A8225: lea     rcx, dword_1801C92B8
 * 00000001800A822C: call    _Init_thread_footer
 * 00000001800A8231: mov     rax, [rdi+rbx*8]
 * 00000001800A8235: mov     eax, [r15+rax]
 * 00000001800A8239: cmp     cs:dword_1801C92BC, eax
 * 00000001800A823F: jle     loc_1800A831C
 * 00000001800A8245: lea     rcx, dword_1801C92BC
 * 00000001800A824C: call    sub_18000C8D0
 * 00000001800A8251: cmp     cs:dword_1801C92BC, r14d
 * 00000001800A8258: jnz     loc_1800A831C
 * 00000001800A825E: lea     rax, unk_18016FCD0
 * 00000001800A8265: mov     qword ptr [rbp+9E40h+var_9C90], rax
 * 00000001800A826C: lea     rax, unk_18017645C
 * 00000001800A8273: mov     qword ptr [rbp+9E40h+var_9C90+8], rax
 * 00000001800A827A: movups  xmm7, [rbp+9E40h+var_9C90]
 * 00000001800A8281: mov     dword ptr [rbp+9E40h+var_8880], 5
 * 00000001800A828B: mov     dword ptr [rbp+9E40h+var_8880+4], esi
 * 00000001800A8291: movups  xmm6, [rbp+9E40h+var_8880]
 * 00000001800A8298: call    sub_1800A5D74
 * 00000001800A829D: mov     r8, rax
 * 00000001800A82A0: mov     r9d, r12d
 * 00000001800A82A3: mov     edx, 78h ; 'x'
 * 00000001800A82A8: lea     rcx, [rbp+9E40h+var_3AD0]
 * 00000001800A82AF: call    sub_180073668
 * 00000001800A82B4: nop
 * 00000001800A82B5: mov     r8, rax
 * 00000001800A82B8: mov     rdx, r13
 * 00000001800A82BB: lea     rcx, [rbp+9E40h+var_3B30]
 * 00000001800A82C2: call    sub_18001B518
 * 00000001800A82C7: nop
 * 00000001800A82C8: lea     r8, aPixel; "/Pixel"
 * 00000001800A82CF: mov     rdx, rax
 * 00000001800A82D2: lea     rcx, [rbp+9E40h+var_66D0]
 * 00000001800A82D9: call    sub_18001B448
 * 00000001800A82DE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A82E3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A82E8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A82ED: mov     rcx, rax
 * 00000001800A82F0: call    sub_18007370C
 * 00000001800A82F5: nop
 * 00000001800A82F6: lea     rcx, [rbp+9E40h+var_3B30]
 * 00000001800A82FD: call    sub_180010F20
 * 00000001800A8302: nop
 * 00000001800A8303: lea     rcx, [rbp+9E40h+var_3AD0]
 * 00000001800A830A: call    sub_180010F20
 * 00000001800A830F: nop
 * 00000001800A8310: lea     rcx, dword_1801C92BC
 * 00000001800A8317: call    _Init_thread_footer
 * 00000001800A831C: mov     rax, [rdi+rbx*8]
 * 00000001800A8320: mov     eax, [r15+rax]
 * 00000001800A8324: cmp     cs:dword_1801C92C0, eax
 * 00000001800A832A: jle     loc_1800A8407
 * 00000001800A8330: lea     rcx, dword_1801C92C0
 * 00000001800A8337: call    sub_18000C8D0
 * 00000001800A833C: cmp     cs:dword_1801C92C0, r14d
 * 00000001800A8343: jnz     loc_1800A8407
 * 00000001800A8349: lea     rax, unk_18016FCD0
 * 00000001800A8350: mov     qword ptr [rbp+9E40h+var_9C80], rax
 * 00000001800A8357: lea     rax, unk_18017645C
 * 00000001800A835E: mov     qword ptr [rbp+9E40h+var_9C80+8], rax
 * 00000001800A8365: movups  xmm7, [rbp+9E40h+var_9C80]
 * 00000001800A836C: mov     dword ptr [rbp+9E40h+var_8860], 5
 * 00000001800A8376: mov     dword ptr [rbp+9E40h+var_8860+4], esi
 * 00000001800A837C: movups  xmm6, [rbp+9E40h+var_8860]
 * 00000001800A8383: call    sub_1800A5D74
 * 00000001800A8388: mov     r8, rax
 * 00000001800A838B: mov     r9d, r12d
 * 00000001800A838E: mov     edx, 7Ah ; 'z'
 * 00000001800A8393: lea     rcx, [rbp+9E40h+var_3A10]
 * 00000001800A839A: call    sub_180073668
 * 00000001800A839F: nop
 * 00000001800A83A0: mov     r8, rax
 * 00000001800A83A3: mov     rdx, r13
 * 00000001800A83A6: lea     rcx, [rbp+9E40h+var_3A70]
 * 00000001800A83AD: call    sub_18001B518
 * 00000001800A83B2: nop
 * 00000001800A83B3: lea     r8, aPixel; "/Pixel"
 * 00000001800A83BA: mov     rdx, rax
 * 00000001800A83BD: lea     rcx, [rbp+9E40h+var_6510]
 * 00000001800A83C4: call    sub_18001B448
 * 00000001800A83C9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A83CE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A83D3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A83D8: mov     rcx, rax
 * 00000001800A83DB: call    sub_18007370C
 * 00000001800A83E0: nop
 * 00000001800A83E1: lea     rcx, [rbp+9E40h+var_3A70]
 * 00000001800A83E8: call    sub_180010F20
 * 00000001800A83ED: nop
 * 00000001800A83EE: lea     rcx, [rbp+9E40h+var_3A10]
 * 00000001800A83F5: call    sub_180010F20
 * 00000001800A83FA: nop
 * 00000001800A83FB: lea     rcx, dword_1801C92C0
 * 00000001800A8402: call    _Init_thread_footer
 * 00000001800A8407: mov     rax, [rdi+rbx*8]
 * 00000001800A840B: mov     eax, [r15+rax]
 * 00000001800A840F: cmp     cs:dword_1801C92C4, eax
 * 00000001800A8415: jle     loc_1800A84F2
 * 00000001800A841B: lea     rcx, dword_1801C92C4
 * 00000001800A8422: call    sub_18000C8D0
 * 00000001800A8427: cmp     cs:dword_1801C92C4, r14d
 * 00000001800A842E: jnz     loc_1800A84F2
 * 00000001800A8434: lea     rax, unk_18017FE90
 * 00000001800A843B: mov     qword ptr [rbp+9E40h+var_9C70], rax
 * 00000001800A8442: lea     rax, unk_180186274
 * 00000001800A8449: mov     qword ptr [rbp+9E40h+var_9C70+8], rax
 * 00000001800A8450: movups  xmm7, [rbp+9E40h+var_9C70]
 * 00000001800A8457: mov     dword ptr [rbp+9E40h+var_8840], 5
 * 00000001800A8461: mov     dword ptr [rbp+9E40h+var_8840+4], esi
 * 00000001800A8467: movups  xmm6, [rbp+9E40h+var_8840]
 * 00000001800A846E: call    sub_1800A5D74
 * 00000001800A8473: mov     r8, rax
 * 00000001800A8476: mov     r9d, r12d
 * 00000001800A8479: mov     edx, 80h
 * 00000001800A847E: lea     rcx, [rbp+9E40h+var_3950]
 * 00000001800A8485: call    sub_180073668
 * 00000001800A848A: nop
 * 00000001800A848B: mov     r8, rax
 * 00000001800A848E: mov     rdx, r13
 * 00000001800A8491: lea     rcx, [rbp+9E40h+var_39B0]
 * 00000001800A8498: call    sub_18001B518
 * 00000001800A849D: nop
 * 00000001800A849E: lea     r8, aPixel; "/Pixel"
 * 00000001800A84A5: mov     rdx, rax
 * 00000001800A84A8: lea     rcx, [rbp+9E40h+var_67F0]
 * 00000001800A84AF: call    sub_18001B448
 * 00000001800A84B4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A84B9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A84BE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A84C3: mov     rcx, rax
 * 00000001800A84C6: call    sub_18007370C
 * 00000001800A84CB: nop
 * 00000001800A84CC: lea     rcx, [rbp+9E40h+var_39B0]
 * 00000001800A84D3: call    sub_180010F20
 * 00000001800A84D8: nop
 * 00000001800A84D9: lea     rcx, [rbp+9E40h+var_3950]
 * 00000001800A84E0: call    sub_180010F20
 * 00000001800A84E5: nop
 * 00000001800A84E6: lea     rcx, dword_1801C92C4
 * 00000001800A84ED: call    _Init_thread_footer
 * 00000001800A84F2: mov     rax, [rdi+rbx*8]
 * 00000001800A84F6: mov     eax, [r15+rax]
 * 00000001800A84FA: cmp     cs:dword_1801C92C8, eax
 * 00000001800A8500: jle     loc_1800A85DD
 * 00000001800A8506: lea     rcx, dword_1801C92C8
 * 00000001800A850D: call    sub_18000C8D0
 * 00000001800A8512: cmp     cs:dword_1801C92C8, r14d
 * 00000001800A8519: jnz     loc_1800A85DD
 * 00000001800A851F: lea     rax, unk_18017FE90
 * 00000001800A8526: mov     qword ptr [rbp+9E40h+var_9C60], rax
 * 00000001800A852D: lea     rax, unk_180186274
 * 00000001800A8534: mov     qword ptr [rbp+9E40h+var_9C60+8], rax
 * 00000001800A853B: movups  xmm7, [rbp+9E40h+var_9C60]
 * 00000001800A8542: mov     dword ptr [rbp+9E40h+var_8820], 5
 * 00000001800A854C: mov     dword ptr [rbp+9E40h+var_8820+4], esi
 * 00000001800A8552: movups  xmm6, [rbp+9E40h+var_8820]
 * 00000001800A8559: call    sub_1800A5D74
 * 00000001800A855E: mov     r8, rax
 * 00000001800A8561: mov     r9d, r12d
 * 00000001800A8564: mov     edx, 82h
 * 00000001800A8569: lea     rcx, [rbp+9E40h+var_3890]
 * 00000001800A8570: call    sub_180073668
 * 00000001800A8575: nop
 * 00000001800A8576: mov     r8, rax
 * 00000001800A8579: mov     rdx, r13
 * 00000001800A857C: lea     rcx, [rbp+9E40h+var_38F0]
 * 00000001800A8583: call    sub_18001B518
 * 00000001800A8588: nop
 * 00000001800A8589: lea     r8, aPixel; "/Pixel"
 * 00000001800A8590: mov     rdx, rax
 * 00000001800A8593: lea     rcx, [rbp+9E40h+var_6570]
 * 00000001800A859A: call    sub_18001B448
 * 00000001800A859F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A85A4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A85A9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A85AE: mov     rcx, rax
 * 00000001800A85B1: call    sub_18007370C
 * 00000001800A85B6: nop
 * 00000001800A85B7: lea     rcx, [rbp+9E40h+var_38F0]
 * 00000001800A85BE: call    sub_180010F20
 * 00000001800A85C3: nop
 * 00000001800A85C4: lea     rcx, [rbp+9E40h+var_3890]
 * 00000001800A85CB: call    sub_180010F20
 * 00000001800A85D0: nop
 * 00000001800A85D1: lea     rcx, dword_1801C92C8
 * 00000001800A85D8: call    _Init_thread_footer
 * 00000001800A85DD: mov     rax, [rdi+rbx*8]
 * 00000001800A85E1: mov     eax, [r15+rax]
 * 00000001800A85E5: cmp     cs:dword_1801C92CC, eax
 * 00000001800A85EB: jle     loc_1800A86C8
 * 00000001800A85F1: lea     rcx, dword_1801C92CC
 * 00000001800A85F8: call    sub_18000C8D0
 * 00000001800A85FD: cmp     cs:dword_1801C92CC, r14d
 * 00000001800A8604: jnz     loc_1800A86C8
 * 00000001800A860A: lea     rax, unk_180168670
 * 00000001800A8611: mov     qword ptr [rbp+9E40h+var_9C50], rax
 * 00000001800A8618: lea     rax, unk_18016EBFC
 * 00000001800A861F: mov     qword ptr [rbp+9E40h+var_9C50+8], rax
 * 00000001800A8626: movups  xmm7, [rbp+9E40h+var_9C50]
 * 00000001800A862D: mov     dword ptr [rbp+9E40h+var_8800], 5
 * 00000001800A8637: mov     dword ptr [rbp+9E40h+var_8800+4], esi
 * 00000001800A863D: movups  xmm6, [rbp+9E40h+var_8800]
 * 00000001800A8644: call    sub_1800A5D74
 * 00000001800A8649: mov     r8, rax
 * 00000001800A864C: mov     r9d, r12d
 * 00000001800A864F: mov     edx, 88h
 * 00000001800A8654: lea     rcx, [rbp+9E40h+var_37D0]
 * 00000001800A865B: call    sub_180073668
 * 00000001800A8660: nop
 * 00000001800A8661: mov     r8, rax
 * 00000001800A8664: mov     rdx, r13
 * 00000001800A8667: lea     rcx, [rbp+9E40h+var_3830]
 * 00000001800A866E: call    sub_18001B518
 * 00000001800A8673: nop
 * 00000001800A8674: lea     r8, aPixel; "/Pixel"
 * 00000001800A867B: mov     rdx, rax
 * 00000001800A867E: lea     rcx, [rbp+9E40h+var_67B0]
 * 00000001800A8685: call    sub_18001B448
 * 00000001800A868A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A868F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8694: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8699: mov     rcx, rax
 * 00000001800A869C: call    sub_18007370C
 * 00000001800A86A1: nop
 * 00000001800A86A2: lea     rcx, [rbp+9E40h+var_3830]
 * 00000001800A86A9: call    sub_180010F20
 * 00000001800A86AE: nop
 * 00000001800A86AF: lea     rcx, [rbp+9E40h+var_37D0]
 * 00000001800A86B6: call    sub_180010F20
 * 00000001800A86BB: nop
 * 00000001800A86BC: lea     rcx, dword_1801C92CC
 * 00000001800A86C3: call    _Init_thread_footer
 * 00000001800A86C8: mov     rax, [rdi+rbx*8]
 * 00000001800A86CC: mov     eax, [r15+rax]
 * 00000001800A86D0: cmp     cs:dword_1801C92D0, eax
 * 00000001800A86D6: jle     loc_1800A87B3
 * 00000001800A86DC: lea     rcx, dword_1801C92D0
 * 00000001800A86E3: call    sub_18000C8D0
 * 00000001800A86E8: cmp     cs:dword_1801C92D0, r14d
 * 00000001800A86EF: jnz     loc_1800A87B3
 * 00000001800A86F5: lea     rax, unk_180168670
 * 00000001800A86FC: mov     qword ptr [rbp+9E40h+var_9C40], rax
 * 00000001800A8703: lea     rax, unk_18016EBFC
 * 00000001800A870A: mov     qword ptr [rbp+9E40h+var_9C40+8], rax
 * 00000001800A8711: movups  xmm7, [rbp+9E40h+var_9C40]
 * 00000001800A8718: mov     dword ptr [rbp+9E40h+var_87E0], 5
 * 00000001800A8722: mov     dword ptr [rbp+9E40h+var_87E0+4], esi
 * 00000001800A8728: movups  xmm6, [rbp+9E40h+var_87E0]
 * 00000001800A872F: call    sub_1800A5D74
 * 00000001800A8734: mov     r8, rax
 * 00000001800A8737: mov     r9d, r12d
 * 00000001800A873A: mov     edx, 8Ah
 * 00000001800A873F: lea     rcx, [rbp+9E40h+var_3710]
 * 00000001800A8746: call    sub_180073668
 * 00000001800A874B: nop
 * 00000001800A874C: mov     r8, rax
 * 00000001800A874F: mov     rdx, r13
 * 00000001800A8752: lea     rcx, [rbp+9E40h+var_3770]
 * 00000001800A8759: call    sub_18001B518
 * 00000001800A875E: nop
 * 00000001800A875F: lea     r8, aPixel; "/Pixel"
 * 00000001800A8766: mov     rdx, rax
 * 00000001800A8769: lea     rcx, [rbp+9E40h+var_6970]
 * 00000001800A8770: call    sub_18001B448
 * 00000001800A8775: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A877A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A877F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8784: mov     rcx, rax
 * 00000001800A8787: call    sub_18007370C
 * 00000001800A878C: nop
 * 00000001800A878D: lea     rcx, [rbp+9E40h+var_3770]
 * 00000001800A8794: call    sub_180010F20
 * 00000001800A8799: nop
 * 00000001800A879A: lea     rcx, [rbp+9E40h+var_3710]
 * 00000001800A87A1: call    sub_180010F20
 * 00000001800A87A6: nop
 * 00000001800A87A7: lea     rcx, dword_1801C92D0
 * 00000001800A87AE: call    _Init_thread_footer
 * 00000001800A87B3: mov     rax, [rdi+rbx*8]
 * 00000001800A87B7: mov     eax, [r15+rax]
 * 00000001800A87BB: cmp     cs:dword_1801C92D4, eax
 * 00000001800A87C1: jle     loc_1800A889E
 * 00000001800A87C7: lea     rcx, dword_1801C92D4
 * 00000001800A87CE: call    sub_18000C8D0
 * 00000001800A87D3: cmp     cs:dword_1801C92D4, r14d
 * 00000001800A87DA: jnz     loc_1800A889E
 * 00000001800A87E0: lea     rax, unk_1801620B0
 * 00000001800A87E7: mov     qword ptr [rbp+9E40h+var_9C30], rax
 * 00000001800A87EE: lea     rax, unk_180168668
 * 00000001800A87F5: mov     qword ptr [rbp+9E40h+var_9C30+8], rax
 * 00000001800A87FC: movups  xmm7, [rbp+9E40h+var_9C30]
 * 00000001800A8803: mov     dword ptr [rbp+9E40h+var_87C0], 5
 * 00000001800A880D: mov     dword ptr [rbp+9E40h+var_87C0+4], esi
 * 00000001800A8813: movups  xmm6, [rbp+9E40h+var_87C0]
 * 00000001800A881A: call    sub_1800A5D74
 * 00000001800A881F: mov     r8, rax
 * 00000001800A8822: mov     r9d, r12d
 * 00000001800A8825: mov     edx, 90h
 * 00000001800A882A: lea     rcx, [rbp+9E40h+var_3650]
 * 00000001800A8831: call    sub_180073668
 * 00000001800A8836: nop
 * 00000001800A8837: mov     r8, rax
 * 00000001800A883A: mov     rdx, r13
 * 00000001800A883D: lea     rcx, [rbp+9E40h+var_36B0]
 * 00000001800A8844: call    sub_18001B518
 * 00000001800A8849: nop
 * 00000001800A884A: lea     r8, aPixel; "/Pixel"
 * 00000001800A8851: mov     rdx, rax
 * 00000001800A8854: lea     rcx, [rbp+9E40h+var_6630]
 * 00000001800A885B: call    sub_18001B448
 * 00000001800A8860: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8865: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A886A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A886F: mov     rcx, rax
 * 00000001800A8872: call    sub_18007370C
 * 00000001800A8877: nop
 * 00000001800A8878: lea     rcx, [rbp+9E40h+var_36B0]
 * 00000001800A887F: call    sub_180010F20
 * 00000001800A8884: nop
 * 00000001800A8885: lea     rcx, [rbp+9E40h+var_3650]
 * 00000001800A888C: call    sub_180010F20
 * 00000001800A8891: nop
 * 00000001800A8892: lea     rcx, dword_1801C92D4
 * 00000001800A8899: call    _Init_thread_footer
 * 00000001800A889E: mov     rax, [rdi+rbx*8]
 * 00000001800A88A2: mov     eax, [r15+rax]
 * 00000001800A88A6: cmp     cs:dword_1801C92D8, eax
 * 00000001800A88AC: jle     loc_1800A8989
 * 00000001800A88B2: lea     rcx, dword_1801C92D8
 * 00000001800A88B9: call    sub_18000C8D0
 * 00000001800A88BE: cmp     cs:dword_1801C92D8, r14d
 * 00000001800A88C5: jnz     loc_1800A8989
 * 00000001800A88CB: lea     rax, unk_1801620B0
 * 00000001800A88D2: mov     qword ptr [rbp+9E40h+var_9C20], rax
 * 00000001800A88D9: lea     rax, unk_180168668
 * 00000001800A88E0: mov     qword ptr [rbp+9E40h+var_9C20+8], rax
 * 00000001800A88E7: movups  xmm7, [rbp+9E40h+var_9C20]
 * 00000001800A88EE: mov     dword ptr [rbp+9E40h+var_87A0], 5
 * 00000001800A88F8: mov     dword ptr [rbp+9E40h+var_87A0+4], esi
 * 00000001800A88FE: movups  xmm6, [rbp+9E40h+var_87A0]
 * 00000001800A8905: call    sub_1800A5D74
 * 00000001800A890A: mov     r8, rax
 * 00000001800A890D: mov     r9d, r12d
 * 00000001800A8910: mov     edx, 92h
 * 00000001800A8915: lea     rcx, [rbp+9E40h+var_3590]
 * 00000001800A891C: call    sub_180073668
 * 00000001800A8921: nop
 * 00000001800A8922: mov     r8, rax
 * 00000001800A8925: mov     rdx, r13
 * 00000001800A8928: lea     rcx, [rbp+9E40h+var_35F0]
 * 00000001800A892F: call    sub_18001B518
 * 00000001800A8934: nop
 * 00000001800A8935: lea     r8, aPixel; "/Pixel"
 * 00000001800A893C: mov     rdx, rax
 * 00000001800A893F: lea     rcx, [rbp+9E40h+var_6450]
 * 00000001800A8946: call    sub_18001B448
 * 00000001800A894B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8950: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8955: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A895A: mov     rcx, rax
 * 00000001800A895D: call    sub_18007370C
 * 00000001800A8962: nop
 * 00000001800A8963: lea     rcx, [rbp+9E40h+var_35F0]
 * 00000001800A896A: call    sub_180010F20
 * 00000001800A896F: nop
 * 00000001800A8970: lea     rcx, [rbp+9E40h+var_3590]
 * 00000001800A8977: call    sub_180010F20
 * 00000001800A897C: nop
 * 00000001800A897D: lea     rcx, dword_1801C92D8
 * 00000001800A8984: call    _Init_thread_footer
 * 00000001800A8989: mov     rax, [rdi+rbx*8]
 * 00000001800A898D: mov     eax, [r15+rax]
 * 00000001800A8991: cmp     cs:dword_1801C92DC, eax
 * 00000001800A8997: jle     loc_1800A8A74
 * 00000001800A899D: lea     rcx, dword_1801C92DC
 * 00000001800A89A4: call    sub_18000C8D0
 * 00000001800A89A9: cmp     cs:dword_1801C92DC, r14d
 * 00000001800A89B0: jnz     loc_1800A8A74
 * 00000001800A89B6: lea     rax, unk_18016FCD0
 * 00000001800A89BD: mov     qword ptr [rbp+9E40h+var_9C10], rax
 * 00000001800A89C4: lea     rax, unk_18017645C
 * 00000001800A89CB: mov     qword ptr [rbp+9E40h+var_9C10+8], rax
 * 00000001800A89D2: movups  xmm7, [rbp+9E40h+var_9C10]
 * 00000001800A89D9: mov     dword ptr [rbp+9E40h+var_8780], 5
 * 00000001800A89E3: mov     dword ptr [rbp+9E40h+var_8780+4], esi
 * 00000001800A89E9: movups  xmm6, [rbp+9E40h+var_8780]
 * 00000001800A89F0: call    sub_1800A5D74
 * 00000001800A89F5: mov     r8, rax
 * 00000001800A89F8: mov     r9d, r12d
 * 00000001800A89FB: mov     edx, 98h
 * 00000001800A8A00: lea     rcx, [rbp+9E40h+var_3470]
 * 00000001800A8A07: call    sub_180073668
 * 00000001800A8A0C: nop
 * 00000001800A8A0D: mov     r8, rax
 * 00000001800A8A10: mov     rdx, r13
 * 00000001800A8A13: lea     rcx, [rbp+9E40h+var_34D0]
 * 00000001800A8A1A: call    sub_18001B518
 * 00000001800A8A1F: nop
 * 00000001800A8A20: lea     r8, aPixel; "/Pixel"
 * 00000001800A8A27: mov     rdx, rax
 * 00000001800A8A2A: lea     rcx, [rbp+9E40h+var_6430]
 * 00000001800A8A31: call    sub_18001B448
 * 00000001800A8A36: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8A3B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8A40: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8A45: mov     rcx, rax
 * 00000001800A8A48: call    sub_18007370C
 * 00000001800A8A4D: nop
 * 00000001800A8A4E: lea     rcx, [rbp+9E40h+var_34D0]
 * 00000001800A8A55: call    sub_180010F20
 * 00000001800A8A5A: nop
 * 00000001800A8A5B: lea     rcx, [rbp+9E40h+var_3470]
 * 00000001800A8A62: call    sub_180010F20
 * 00000001800A8A67: nop
 * 00000001800A8A68: lea     rcx, dword_1801C92DC
 * 00000001800A8A6F: call    _Init_thread_footer
 * 00000001800A8A74: mov     rax, [rdi+rbx*8]
 * 00000001800A8A78: mov     eax, [r15+rax]
 * 00000001800A8A7C: cmp     cs:dword_1801C92E0, eax
 * 00000001800A8A82: jle     loc_1800A8B5F
 * 00000001800A8A88: lea     rcx, dword_1801C92E0
 * 00000001800A8A8F: call    sub_18000C8D0
 * 00000001800A8A94: cmp     cs:dword_1801C92E0, r14d
 * 00000001800A8A9B: jnz     loc_1800A8B5F
 * 00000001800A8AA1: lea     rax, unk_18016FCD0
 * 00000001800A8AA8: mov     qword ptr [rbp+9E40h+var_9C00], rax
 * 00000001800A8AAF: lea     rax, unk_18017645C
 * 00000001800A8AB6: mov     qword ptr [rbp+9E40h+var_9C00+8], rax
 * 00000001800A8ABD: movups  xmm7, [rbp+9E40h+var_9C00]
 * 00000001800A8AC4: mov     dword ptr [rbp+9E40h+var_8760], 5
 * 00000001800A8ACE: mov     dword ptr [rbp+9E40h+var_8760+4], esi
 * 00000001800A8AD4: movups  xmm6, [rbp+9E40h+var_8760]
 * 00000001800A8ADB: call    sub_1800A5D74
 * 00000001800A8AE0: mov     r8, rax
 * 00000001800A8AE3: mov     r9d, r12d
 * 00000001800A8AE6: mov     edx, 9Ah
 * 00000001800A8AEB: lea     rcx, [rbp+9E40h+var_3350]
 * 00000001800A8AF2: call    sub_180073668
 * 00000001800A8AF7: nop
 * 00000001800A8AF8: mov     r8, rax
 * 00000001800A8AFB: mov     rdx, r13
 * 00000001800A8AFE: lea     rcx, [rbp+9E40h+var_33B0]
 * 00000001800A8B05: call    sub_18001B518
 * 00000001800A8B0A: nop
 * 00000001800A8B0B: lea     r8, aPixel; "/Pixel"
 * 00000001800A8B12: mov     rdx, rax
 * 00000001800A8B15: lea     rcx, [rbp+9E40h+var_6410]
 * 00000001800A8B1C: call    sub_18001B448
 * 00000001800A8B21: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8B26: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8B2B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8B30: mov     rcx, rax
 * 00000001800A8B33: call    sub_18007370C
 * 00000001800A8B38: nop
 * 00000001800A8B39: lea     rcx, [rbp+9E40h+var_33B0]
 * 00000001800A8B40: call    sub_180010F20
 * 00000001800A8B45: nop
 * 00000001800A8B46: lea     rcx, [rbp+9E40h+var_3350]
 * 00000001800A8B4D: call    sub_180010F20
 * 00000001800A8B52: nop
 * 00000001800A8B53: lea     rcx, dword_1801C92E0
 * 00000001800A8B5A: call    _Init_thread_footer
 * 00000001800A8B5F: mov     rax, [rdi+rbx*8]
 * 00000001800A8B63: mov     eax, [r15+rax]
 * 00000001800A8B67: cmp     cs:dword_1801C92E4, eax
 * 00000001800A8B6D: jle     loc_1800A8C4A
 * 00000001800A8B73: lea     rcx, dword_1801C92E4
 * 00000001800A8B7A: call    sub_18000C8D0
 * 00000001800A8B7F: cmp     cs:dword_1801C92E4, r14d
 * 00000001800A8B86: jnz     loc_1800A8C4A
 * 00000001800A8B8C: lea     rax, unk_18017FE90
 * 00000001800A8B93: mov     qword ptr [rbp+9E40h+var_9BF0], rax
 * 00000001800A8B9A: lea     rax, unk_180186274
 * 00000001800A8BA1: mov     qword ptr [rbp+9E40h+var_9BF0+8], rax
 * 00000001800A8BA8: movups  xmm7, [rbp+9E40h+var_9BF0]
 * 00000001800A8BAF: mov     dword ptr [rbp+9E40h+var_8740], 5
 * 00000001800A8BB9: mov     dword ptr [rbp+9E40h+var_8740+4], esi
 * 00000001800A8BBF: movups  xmm6, [rbp+9E40h+var_8740]
 * 00000001800A8BC6: call    sub_1800A5D74
 * 00000001800A8BCB: mov     r8, rax
 * 00000001800A8BCE: mov     r9d, r12d
 * 00000001800A8BD1: mov     edx, 0A0h
 * 00000001800A8BD6: lea     rcx, [rbp+9E40h+var_3230]
 * 00000001800A8BDD: call    sub_180073668
 * 00000001800A8BE2: nop
 * 00000001800A8BE3: mov     r8, rax
 * 00000001800A8BE6: mov     rdx, r13
 * 00000001800A8BE9: lea     rcx, [rbp+9E40h+var_3290]
 * 00000001800A8BF0: call    sub_18001B518
 * 00000001800A8BF5: nop
 * 00000001800A8BF6: lea     r8, aPixel; "/Pixel"
 * 00000001800A8BFD: mov     rdx, rax
 * 00000001800A8C00: lea     rcx, [rbp+9E40h+var_63F0]
 * 00000001800A8C07: call    sub_18001B448
 * 00000001800A8C0C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8C11: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8C16: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8C1B: mov     rcx, rax
 * 00000001800A8C1E: call    sub_18007370C
 * 00000001800A8C23: nop
 * 00000001800A8C24: lea     rcx, [rbp+9E40h+var_3290]
 * 00000001800A8C2B: call    sub_180010F20
 * 00000001800A8C30: nop
 * 00000001800A8C31: lea     rcx, [rbp+9E40h+var_3230]
 * 00000001800A8C38: call    sub_180010F20
 * 00000001800A8C3D: nop
 * 00000001800A8C3E: lea     rcx, dword_1801C92E4
 * 00000001800A8C45: call    _Init_thread_footer
 * 00000001800A8C4A: mov     rax, [rdi+rbx*8]
 * 00000001800A8C4E: mov     eax, [r15+rax]
 * 00000001800A8C52: cmp     cs:dword_1801C92E8, eax
 * 00000001800A8C58: jle     loc_1800A8D35
 * 00000001800A8C5E: lea     rcx, dword_1801C92E8
 * 00000001800A8C65: call    sub_18000C8D0
 * 00000001800A8C6A: cmp     cs:dword_1801C92E8, r14d
 * 00000001800A8C71: jnz     loc_1800A8D35
 * 00000001800A8C77: lea     rax, unk_18017FE90
 * 00000001800A8C7E: mov     qword ptr [rbp+9E40h+var_9BE0], rax
 * 00000001800A8C85: lea     rax, unk_180186274
 * 00000001800A8C8C: mov     qword ptr [rbp+9E40h+var_9BE0+8], rax
 * 00000001800A8C93: movups  xmm7, [rbp+9E40h+var_9BE0]
 * 00000001800A8C9A: mov     dword ptr [rbp+9E40h+var_8720], 5
 * 00000001800A8CA4: mov     dword ptr [rbp+9E40h+var_8720+4], esi
 * 00000001800A8CAA: movups  xmm6, [rbp+9E40h+var_8720]
 * 00000001800A8CB1: call    sub_1800A5D74
 * 00000001800A8CB6: mov     r8, rax
 * 00000001800A8CB9: mov     r9d, r12d
 * 00000001800A8CBC: mov     edx, 0A2h
 * 00000001800A8CC1: lea     rcx, [rbp+9E40h+var_3110]
 * 00000001800A8CC8: call    sub_180073668
 * 00000001800A8CCD: nop
 * 00000001800A8CCE: mov     r8, rax
 * 00000001800A8CD1: mov     rdx, r13
 * 00000001800A8CD4: lea     rcx, [rbp+9E40h+var_3170]
 * 00000001800A8CDB: call    sub_18001B518
 * 00000001800A8CE0: nop
 * 00000001800A8CE1: lea     r8, aPixel; "/Pixel"
 * 00000001800A8CE8: mov     rdx, rax
 * 00000001800A8CEB: lea     rcx, [rbp+9E40h+var_63D0]
 * 00000001800A8CF2: call    sub_18001B448
 * 00000001800A8CF7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8CFC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8D01: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8D06: mov     rcx, rax
 * 00000001800A8D09: call    sub_18007370C
 * 00000001800A8D0E: nop
 * 00000001800A8D0F: lea     rcx, [rbp+9E40h+var_3170]
 * 00000001800A8D16: call    sub_180010F20
 * 00000001800A8D1B: nop
 * 00000001800A8D1C: lea     rcx, [rbp+9E40h+var_3110]
 * 00000001800A8D23: call    sub_180010F20
 * 00000001800A8D28: nop
 * 00000001800A8D29: lea     rcx, dword_1801C92E8
 * 00000001800A8D30: call    _Init_thread_footer
 * 00000001800A8D35: mov     rax, [rdi+rbx*8]
 * 00000001800A8D39: mov     eax, [r15+rax]
 * 00000001800A8D3D: cmp     cs:dword_1801C92EC, eax
 * 00000001800A8D43: jle     loc_1800A8E20
 * 00000001800A8D49: lea     rcx, dword_1801C92EC
 * 00000001800A8D50: call    sub_18000C8D0
 * 00000001800A8D55: cmp     cs:dword_1801C92EC, r14d
 * 00000001800A8D5C: jnz     loc_1800A8E20
 * 00000001800A8D62: lea     rax, unk_180168670
 * 00000001800A8D69: mov     qword ptr [rbp+9E40h+var_9BD0], rax
 * 00000001800A8D70: lea     rax, unk_18016EBFC
 * 00000001800A8D77: mov     qword ptr [rbp+9E40h+var_9BD0+8], rax
 * 00000001800A8D7E: movups  xmm7, [rbp+9E40h+var_9BD0]
 * 00000001800A8D85: mov     dword ptr [rbp+9E40h+var_8700], 5
 * 00000001800A8D8F: mov     dword ptr [rbp+9E40h+var_8700+4], esi
 * 00000001800A8D95: movups  xmm6, [rbp+9E40h+var_8700]
 * 00000001800A8D9C: call    sub_1800A5D74
 * 00000001800A8DA1: mov     r8, rax
 * 00000001800A8DA4: mov     r9d, r12d
 * 00000001800A8DA7: mov     edx, 0A8h
 * 00000001800A8DAC: lea     rcx, [rbp+9E40h+var_2FF0]
 * 00000001800A8DB3: call    sub_180073668
 * 00000001800A8DB8: nop
 * 00000001800A8DB9: mov     r8, rax
 * 00000001800A8DBC: mov     rdx, r13
 * 00000001800A8DBF: lea     rcx, [rbp+9E40h+var_3050]
 * 00000001800A8DC6: call    sub_18001B518
 * 00000001800A8DCB: nop
 * 00000001800A8DCC: lea     r8, aPixel; "/Pixel"
 * 00000001800A8DD3: mov     rdx, rax
 * 00000001800A8DD6: lea     rcx, [rbp+9E40h+var_63B0]
 * 00000001800A8DDD: call    sub_18001B448
 * 00000001800A8DE2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8DE7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8DEC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8DF1: mov     rcx, rax
 * 00000001800A8DF4: call    sub_18007370C
 * 00000001800A8DF9: nop
 * 00000001800A8DFA: lea     rcx, [rbp+9E40h+var_3050]
 * 00000001800A8E01: call    sub_180010F20
 * 00000001800A8E06: nop
 * 00000001800A8E07: lea     rcx, [rbp+9E40h+var_2FF0]
 * 00000001800A8E0E: call    sub_180010F20
 * 00000001800A8E13: nop
 * 00000001800A8E14: lea     rcx, dword_1801C92EC
 * 00000001800A8E1B: call    _Init_thread_footer
 * 00000001800A8E20: mov     rax, [rdi+rbx*8]
 * 00000001800A8E24: mov     eax, [r15+rax]
 * 00000001800A8E28: cmp     cs:dword_1801C92F0, eax
 * 00000001800A8E2E: jle     loc_1800A8F0B
 * 00000001800A8E34: lea     rcx, dword_1801C92F0
 * 00000001800A8E3B: call    sub_18000C8D0
 * 00000001800A8E40: cmp     cs:dword_1801C92F0, r14d
 * 00000001800A8E47: jnz     loc_1800A8F0B
 * 00000001800A8E4D: lea     rax, unk_180168670
 * 00000001800A8E54: mov     qword ptr [rbp+9E40h+var_9BC0], rax
 * 00000001800A8E5B: lea     rax, unk_18016EBFC
 * 00000001800A8E62: mov     qword ptr [rbp+9E40h+var_9BC0+8], rax
 * 00000001800A8E69: movups  xmm7, [rbp+9E40h+var_9BC0]
 * 00000001800A8E70: mov     dword ptr [rbp+9E40h+var_86E0], 5
 * 00000001800A8E7A: mov     dword ptr [rbp+9E40h+var_86E0+4], esi
 * 00000001800A8E80: movups  xmm6, [rbp+9E40h+var_86E0]
 * 00000001800A8E87: call    sub_1800A5D74
 * 00000001800A8E8C: mov     r8, rax
 * 00000001800A8E8F: mov     r9d, r12d
 * 00000001800A8E92: mov     edx, 0AAh
 * 00000001800A8E97: lea     rcx, [rbp+9E40h+var_2ED0]
 * 00000001800A8E9E: call    sub_180073668
 * 00000001800A8EA3: nop
 * 00000001800A8EA4: mov     r8, rax
 * 00000001800A8EA7: mov     rdx, r13
 * 00000001800A8EAA: lea     rcx, [rbp+9E40h+var_2F30]
 * 00000001800A8EB1: call    sub_18001B518
 * 00000001800A8EB6: nop
 * 00000001800A8EB7: lea     r8, aPixel; "/Pixel"
 * 00000001800A8EBE: mov     rdx, rax
 * 00000001800A8EC1: lea     rcx, [rbp+9E40h+var_6390]
 * 00000001800A8EC8: call    sub_18001B448
 * 00000001800A8ECD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8ED2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8ED7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8EDC: mov     rcx, rax
 * 00000001800A8EDF: call    sub_18007370C
 * 00000001800A8EE4: nop
 * 00000001800A8EE5: lea     rcx, [rbp+9E40h+var_2F30]
 * 00000001800A8EEC: call    sub_180010F20
 * 00000001800A8EF1: nop
 * 00000001800A8EF2: lea     rcx, [rbp+9E40h+var_2ED0]
 * 00000001800A8EF9: call    sub_180010F20
 * 00000001800A8EFE: nop
 * 00000001800A8EFF: lea     rcx, dword_1801C92F0
 * 00000001800A8F06: call    _Init_thread_footer
 * 00000001800A8F0B: mov     rax, [rdi+rbx*8]
 * 00000001800A8F0F: mov     eax, [r15+rax]
 * 00000001800A8F13: cmp     cs:dword_1801C92F4, eax
 * 00000001800A8F19: jle     loc_1800A8FF6
 * 00000001800A8F1F: lea     rcx, dword_1801C92F4
 * 00000001800A8F26: call    sub_18000C8D0
 * 00000001800A8F2B: cmp     cs:dword_1801C92F4, r14d
 * 00000001800A8F32: jnz     loc_1800A8FF6
 * 00000001800A8F38: lea     rax, unk_1801620B0
 * 00000001800A8F3F: mov     qword ptr [rbp+9E40h+var_9BB0], rax
 * 00000001800A8F46: lea     rax, unk_180168668
 * 00000001800A8F4D: mov     qword ptr [rbp+9E40h+var_9BB0+8], rax
 * 00000001800A8F54: movups  xmm7, [rbp+9E40h+var_9BB0]
 * 00000001800A8F5B: mov     dword ptr [rbp+9E40h+var_86C0], 5
 * 00000001800A8F65: mov     dword ptr [rbp+9E40h+var_86C0+4], esi
 * 00000001800A8F6B: movups  xmm6, [rbp+9E40h+var_86C0]
 * 00000001800A8F72: call    sub_1800A5D74
 * 00000001800A8F77: mov     r8, rax
 * 00000001800A8F7A: mov     r9d, r12d
 * 00000001800A8F7D: mov     edx, 0B0h
 * 00000001800A8F82: lea     rcx, [rbp+9E40h+var_2DB0]
 * 00000001800A8F89: call    sub_180073668
 * 00000001800A8F8E: nop
 * 00000001800A8F8F: mov     r8, rax
 * 00000001800A8F92: mov     rdx, r13
 * 00000001800A8F95: lea     rcx, [rbp+9E40h+var_2E10]
 * 00000001800A8F9C: call    sub_18001B518
 * 00000001800A8FA1: nop
 * 00000001800A8FA2: lea     r8, aPixel; "/Pixel"
 * 00000001800A8FA9: mov     rdx, rax
 * 00000001800A8FAC: lea     rcx, [rbp+9E40h+var_6370]
 * 00000001800A8FB3: call    sub_18001B448
 * 00000001800A8FB8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A8FBD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A8FC2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A8FC7: mov     rcx, rax
 * 00000001800A8FCA: call    sub_18007370C
 * 00000001800A8FCF: nop
 * 00000001800A8FD0: lea     rcx, [rbp+9E40h+var_2E10]
 * 00000001800A8FD7: call    sub_180010F20
 * 00000001800A8FDC: nop
 * 00000001800A8FDD: lea     rcx, [rbp+9E40h+var_2DB0]
 * 00000001800A8FE4: call    sub_180010F20
 * 00000001800A8FE9: nop
 * 00000001800A8FEA: lea     rcx, dword_1801C92F4
 * 00000001800A8FF1: call    _Init_thread_footer
 * 00000001800A8FF6: mov     rax, [rdi+rbx*8]
 * 00000001800A8FFA: mov     eax, [r15+rax]
 * 00000001800A8FFE: cmp     cs:dword_1801C92F8, eax
 * 00000001800A9004: jle     loc_1800A90E1
 * 00000001800A900A: lea     rcx, dword_1801C92F8
 * 00000001800A9011: call    sub_18000C8D0
 * 00000001800A9016: cmp     cs:dword_1801C92F8, r14d
 * 00000001800A901D: jnz     loc_1800A90E1
 * 00000001800A9023: lea     rax, unk_1801620B0
 * 00000001800A902A: mov     qword ptr [rbp+9E40h+var_9BA0], rax
 * 00000001800A9031: lea     rax, unk_180168668
 * 00000001800A9038: mov     qword ptr [rbp+9E40h+var_9BA0+8], rax
 * 00000001800A903F: movups  xmm7, [rbp+9E40h+var_9BA0]
 * 00000001800A9046: mov     dword ptr [rbp+9E40h+var_86A0], 5
 * 00000001800A9050: mov     dword ptr [rbp+9E40h+var_86A0+4], esi
 * 00000001800A9056: movups  xmm6, [rbp+9E40h+var_86A0]
 * 00000001800A905D: call    sub_1800A5D74
 * 00000001800A9062: mov     r8, rax
 * 00000001800A9065: mov     r9d, r12d
 * 00000001800A9068: mov     edx, 0B2h
 * 00000001800A906D: lea     rcx, [rbp+9E40h+var_2C90]
 * 00000001800A9074: call    sub_180073668
 * 00000001800A9079: nop
 * 00000001800A907A: mov     r8, rax
 * 00000001800A907D: mov     rdx, r13
 * 00000001800A9080: lea     rcx, [rbp+9E40h+var_2CF0]
 * 00000001800A9087: call    sub_18001B518
 * 00000001800A908C: nop
 * 00000001800A908D: lea     r8, aPixel; "/Pixel"
 * 00000001800A9094: mov     rdx, rax
 * 00000001800A9097: lea     rcx, [rbp+9E40h+var_6350]
 * 00000001800A909E: call    sub_18001B448
 * 00000001800A90A3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A90A8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A90AD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A90B2: mov     rcx, rax
 * 00000001800A90B5: call    sub_18007370C
 * 00000001800A90BA: nop
 * 00000001800A90BB: lea     rcx, [rbp+9E40h+var_2CF0]
 * 00000001800A90C2: call    sub_180010F20
 * 00000001800A90C7: nop
 * 00000001800A90C8: lea     rcx, [rbp+9E40h+var_2C90]
 * 00000001800A90CF: call    sub_180010F20
 * 00000001800A90D4: nop
 * 00000001800A90D5: lea     rcx, dword_1801C92F8
 * 00000001800A90DC: call    _Init_thread_footer
 * 00000001800A90E1: mov     rax, [rdi+rbx*8]
 * 00000001800A90E5: mov     eax, [r15+rax]
 * 00000001800A90E9: cmp     cs:dword_1801C92FC, eax
 * 00000001800A90EF: jle     loc_1800A91CC
 * 00000001800A90F5: lea     rcx, dword_1801C92FC
 * 00000001800A90FC: call    sub_18000C8D0
 * 00000001800A9101: cmp     cs:dword_1801C92FC, r14d
 * 00000001800A9108: jnz     loc_1800A91CC
 * 00000001800A910E: lea     rax, unk_18016FCD0
 * 00000001800A9115: mov     qword ptr [rbp+9E40h+var_9B90], rax
 * 00000001800A911C: lea     rax, unk_18017645C
 * 00000001800A9123: mov     qword ptr [rbp+9E40h+var_9B90+8], rax
 * 00000001800A912A: movups  xmm7, [rbp+9E40h+var_9B90]
 * 00000001800A9131: mov     dword ptr [rbp+9E40h+var_8680], 5
 * 00000001800A913B: mov     dword ptr [rbp+9E40h+var_8680+4], esi
 * 00000001800A9141: movups  xmm6, [rbp+9E40h+var_8680]
 * 00000001800A9148: call    sub_1800A5D74
 * 00000001800A914D: mov     r8, rax
 * 00000001800A9150: mov     r9d, r12d
 * 00000001800A9153: mov     edx, 0B8h
 * 00000001800A9158: lea     rcx, [rbp+9E40h+var_2BD0]
 * 00000001800A915F: call    sub_180073668
 * 00000001800A9164: nop
 * 00000001800A9165: mov     r8, rax
 * 00000001800A9168: mov     rdx, r13
 * 00000001800A916B: lea     rcx, [rbp+9E40h+var_2C30]
 * 00000001800A9172: call    sub_18001B518
 * 00000001800A9177: nop
 * 00000001800A9178: lea     r8, aPixel; "/Pixel"
 * 00000001800A917F: mov     rdx, rax
 * 00000001800A9182: lea     rcx, [rbp+9E40h+var_6330]
 * 00000001800A9189: call    sub_18001B448
 * 00000001800A918E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9193: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9198: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A919D: mov     rcx, rax
 * 00000001800A91A0: call    sub_18007370C
 * 00000001800A91A5: nop
 * 00000001800A91A6: lea     rcx, [rbp+9E40h+var_2C30]
 * 00000001800A91AD: call    sub_180010F20
 * 00000001800A91B2: nop
 * 00000001800A91B3: lea     rcx, [rbp+9E40h+var_2BD0]
 * 00000001800A91BA: call    sub_180010F20
 * 00000001800A91BF: nop
 * 00000001800A91C0: lea     rcx, dword_1801C92FC
 * 00000001800A91C7: call    _Init_thread_footer
 * 00000001800A91CC: mov     rax, [rdi+rbx*8]
 * 00000001800A91D0: mov     eax, [r15+rax]
 * 00000001800A91D4: cmp     cs:dword_1801C9300, eax
 * 00000001800A91DA: jle     loc_1800A92B7
 * 00000001800A91E0: lea     rcx, dword_1801C9300
 * 00000001800A91E7: call    sub_18000C8D0
 * 00000001800A91EC: cmp     cs:dword_1801C9300, r14d
 * 00000001800A91F3: jnz     loc_1800A92B7
 * 00000001800A91F9: lea     rax, unk_18016FCD0
 * 00000001800A9200: mov     qword ptr [rbp+9E40h+var_9B80], rax
 * 00000001800A9207: lea     rax, unk_18017645C
 * 00000001800A920E: mov     qword ptr [rbp+9E40h+var_9B80+8], rax
 * 00000001800A9215: movups  xmm7, [rbp+9E40h+var_9B80]
 * 00000001800A921C: mov     dword ptr [rbp+9E40h+var_8660], 5
 * 00000001800A9226: mov     dword ptr [rbp+9E40h+var_8660+4], esi
 * 00000001800A922C: movups  xmm6, [rbp+9E40h+var_8660]
 * 00000001800A9233: call    sub_1800A5D74
 * 00000001800A9238: mov     r8, rax
 * 00000001800A923B: mov     r9d, r12d
 * 00000001800A923E: mov     edx, 0BAh
 * 00000001800A9243: lea     rcx, [rbp+9E40h+var_2AB0]
 * 00000001800A924A: call    sub_180073668
 * 00000001800A924F: nop
 * 00000001800A9250: mov     r8, rax
 * 00000001800A9253: mov     rdx, r13
 * 00000001800A9256: lea     rcx, [rbp+9E40h+var_2B10]
 * 00000001800A925D: call    sub_18001B518
 * 00000001800A9262: nop
 * 00000001800A9263: lea     r8, aPixel; "/Pixel"
 * 00000001800A926A: mov     rdx, rax
 * 00000001800A926D: lea     rcx, [rbp+9E40h+var_6310]
 * 00000001800A9274: call    sub_18001B448
 * 00000001800A9279: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A927E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9283: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9288: mov     rcx, rax
 * 00000001800A928B: call    sub_18007370C
 * 00000001800A9290: nop
 * 00000001800A9291: lea     rcx, [rbp+9E40h+var_2B10]
 * 00000001800A9298: call    sub_180010F20
 * 00000001800A929D: nop
 * 00000001800A929E: lea     rcx, [rbp+9E40h+var_2AB0]
 * 00000001800A92A5: call    sub_180010F20
 * 00000001800A92AA: nop
 * 00000001800A92AB: lea     rcx, dword_1801C9300
 * 00000001800A92B2: call    _Init_thread_footer
 * 00000001800A92B7: mov     rax, [rdi+rbx*8]
 * 00000001800A92BB: mov     eax, [r15+rax]
 * 00000001800A92BF: cmp     cs:dword_1801C9304, eax
 * 00000001800A92C5: jle     loc_1800A93A2
 * 00000001800A92CB: lea     rcx, dword_1801C9304
 * 00000001800A92D2: call    sub_18000C8D0
 * 00000001800A92D7: cmp     cs:dword_1801C9304, r14d
 * 00000001800A92DE: jnz     loc_1800A93A2
 * 00000001800A92E4: lea     rax, unk_18017FE90
 * 00000001800A92EB: mov     qword ptr [rbp+9E40h+var_9B70], rax
 * 00000001800A92F2: lea     rax, unk_180186274
 * 00000001800A92F9: mov     qword ptr [rbp+9E40h+var_9B70+8], rax
 * 00000001800A9300: movups  xmm7, [rbp+9E40h+var_9B70]
 * 00000001800A9307: mov     dword ptr [rbp+9E40h+var_8640], 5
 * 00000001800A9311: mov     dword ptr [rbp+9E40h+var_8640+4], esi
 * 00000001800A9317: movups  xmm6, [rbp+9E40h+var_8640]
 * 00000001800A931E: call    sub_1800A5D74
 * 00000001800A9323: mov     r8, rax
 * 00000001800A9326: mov     r9d, r12d
 * 00000001800A9329: mov     edx, 0C0h
 * 00000001800A932E: lea     rcx, [rbp+9E40h+var_2990]
 * 00000001800A9335: call    sub_180073668
 * 00000001800A933A: nop
 * 00000001800A933B: mov     r8, rax
 * 00000001800A933E: mov     rdx, r13
 * 00000001800A9341: lea     rcx, [rbp+9E40h+var_29F0]
 * 00000001800A9348: call    sub_18001B518
 * 00000001800A934D: nop
 * 00000001800A934E: lea     r8, aPixel; "/Pixel"
 * 00000001800A9355: mov     rdx, rax
 * 00000001800A9358: lea     rcx, [rbp+9E40h+var_62F0]
 * 00000001800A935F: call    sub_18001B448
 * 00000001800A9364: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9369: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A936E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9373: mov     rcx, rax
 * 00000001800A9376: call    sub_18007370C
 * 00000001800A937B: nop
 * 00000001800A937C: lea     rcx, [rbp+9E40h+var_29F0]
 * 00000001800A9383: call    sub_180010F20
 * 00000001800A9388: nop
 * 00000001800A9389: lea     rcx, [rbp+9E40h+var_2990]
 * 00000001800A9390: call    sub_180010F20
 * 00000001800A9395: nop
 * 00000001800A9396: lea     rcx, dword_1801C9304
 * 00000001800A939D: call    _Init_thread_footer
 * 00000001800A93A2: mov     rax, [rdi+rbx*8]
 * 00000001800A93A6: mov     eax, [r15+rax]
 * 00000001800A93AA: cmp     cs:dword_1801C9308, eax
 * 00000001800A93B0: jle     loc_1800A948D
 * 00000001800A93B6: lea     rcx, dword_1801C9308
 * 00000001800A93BD: call    sub_18000C8D0
 * 00000001800A93C2: cmp     cs:dword_1801C9308, r14d
 * 00000001800A93C9: jnz     loc_1800A948D
 * 00000001800A93CF: lea     rax, unk_18017FE90
 * 00000001800A93D6: mov     qword ptr [rbp+9E40h+var_9B60], rax
 * 00000001800A93DD: lea     rax, unk_180186274
 * 00000001800A93E4: mov     qword ptr [rbp+9E40h+var_9B60+8], rax
 * 00000001800A93EB: movups  xmm7, [rbp+9E40h+var_9B60]
 * 00000001800A93F2: mov     dword ptr [rbp+9E40h+var_8620], 5
 * 00000001800A93FC: mov     dword ptr [rbp+9E40h+var_8620+4], esi
 * 00000001800A9402: movups  xmm6, [rbp+9E40h+var_8620]
 * 00000001800A9409: call    sub_1800A5D74
 * 00000001800A940E: mov     r8, rax
 * 00000001800A9411: mov     r9d, r12d
 * 00000001800A9414: mov     edx, 0C2h
 * 00000001800A9419: lea     rcx, [rbp+9E40h+var_2870]
 * 00000001800A9420: call    sub_180073668
 * 00000001800A9425: nop
 * 00000001800A9426: mov     r8, rax
 * 00000001800A9429: mov     rdx, r13
 * 00000001800A942C: lea     rcx, [rbp+9E40h+var_28D0]
 * 00000001800A9433: call    sub_18001B518
 * 00000001800A9438: nop
 * 00000001800A9439: lea     r8, aPixel; "/Pixel"
 * 00000001800A9440: mov     rdx, rax
 * 00000001800A9443: lea     rcx, [rbp+9E40h+var_62D0]
 * 00000001800A944A: call    sub_18001B448
 * 00000001800A944F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9454: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9459: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A945E: mov     rcx, rax
 * 00000001800A9461: call    sub_18007370C
 * 00000001800A9466: nop
 * 00000001800A9467: lea     rcx, [rbp+9E40h+var_28D0]
 * 00000001800A946E: call    sub_180010F20
 * 00000001800A9473: nop
 * 00000001800A9474: lea     rcx, [rbp+9E40h+var_2870]
 * 00000001800A947B: call    sub_180010F20
 * 00000001800A9480: nop
 * 00000001800A9481: lea     rcx, dword_1801C9308
 * 00000001800A9488: call    _Init_thread_footer
 * 00000001800A948D: mov     rax, [rdi+rbx*8]
 * 00000001800A9491: mov     eax, [r15+rax]
 * 00000001800A9495: cmp     cs:dword_1801C930C, eax
 * 00000001800A949B: jle     loc_1800A9578
 * 00000001800A94A1: lea     rcx, dword_1801C930C
 * 00000001800A94A8: call    sub_18000C8D0
 * 00000001800A94AD: cmp     cs:dword_1801C930C, r14d
 * 00000001800A94B4: jnz     loc_1800A9578
 * 00000001800A94BA: lea     rax, unk_180168670
 * 00000001800A94C1: mov     qword ptr [rbp+9E40h+var_9B50], rax
 * 00000001800A94C8: lea     rax, unk_18016EBFC
 * 00000001800A94CF: mov     qword ptr [rbp+9E40h+var_9B50+8], rax
 * 00000001800A94D6: movups  xmm7, [rbp+9E40h+var_9B50]
 * 00000001800A94DD: mov     dword ptr [rbp+9E40h+var_8600], 5
 * 00000001800A94E7: mov     dword ptr [rbp+9E40h+var_8600+4], esi
 * 00000001800A94ED: movups  xmm6, [rbp+9E40h+var_8600]
 * 00000001800A94F4: call    sub_1800A5D74
 * 00000001800A94F9: mov     r8, rax
 * 00000001800A94FC: mov     r9d, r12d
 * 00000001800A94FF: mov     edx, 0C8h
 * 00000001800A9504: lea     rcx, [rbp+9E40h+var_2750]
 * 00000001800A950B: call    sub_180073668
 * 00000001800A9510: nop
 * 00000001800A9511: mov     r8, rax
 * 00000001800A9514: mov     rdx, r13
 * 00000001800A9517: lea     rcx, [rbp+9E40h+var_27B0]
 * 00000001800A951E: call    sub_18001B518
 * 00000001800A9523: nop
 * 00000001800A9524: lea     r8, aPixel; "/Pixel"
 * 00000001800A952B: mov     rdx, rax
 * 00000001800A952E: lea     rcx, [rbp+9E40h+var_62B0]
 * 00000001800A9535: call    sub_18001B448
 * 00000001800A953A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A953F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9544: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9549: mov     rcx, rax
 * 00000001800A954C: call    sub_18007370C
 * 00000001800A9551: nop
 * 00000001800A9552: lea     rcx, [rbp+9E40h+var_27B0]
 * 00000001800A9559: call    sub_180010F20
 * 00000001800A955E: nop
 * 00000001800A955F: lea     rcx, [rbp+9E40h+var_2750]
 * 00000001800A9566: call    sub_180010F20
 * 00000001800A956B: nop
 * 00000001800A956C: lea     rcx, dword_1801C930C
 * 00000001800A9573: call    _Init_thread_footer
 * 00000001800A9578: mov     rax, [rdi+rbx*8]
 * 00000001800A957C: mov     eax, [r15+rax]
 * 00000001800A9580: cmp     cs:dword_1801C9310, eax
 * 00000001800A9586: jle     loc_1800A9663
 * 00000001800A958C: lea     rcx, dword_1801C9310
 * 00000001800A9593: call    sub_18000C8D0
 * 00000001800A9598: cmp     cs:dword_1801C9310, r14d
 * 00000001800A959F: jnz     loc_1800A9663
 * 00000001800A95A5: lea     rax, unk_180168670
 * 00000001800A95AC: mov     qword ptr [rbp+9E40h+var_9B40], rax
 * 00000001800A95B3: lea     rax, unk_18016EBFC
 * 00000001800A95BA: mov     qword ptr [rbp+9E40h+var_9B40+8], rax
 * 00000001800A95C1: movups  xmm7, [rbp+9E40h+var_9B40]
 * 00000001800A95C8: mov     dword ptr [rbp+9E40h+var_85E0], 5
 * 00000001800A95D2: mov     dword ptr [rbp+9E40h+var_85E0+4], esi
 * 00000001800A95D8: movups  xmm6, [rbp+9E40h+var_85E0]
 * 00000001800A95DF: call    sub_1800A5D74
 * 00000001800A95E4: mov     r8, rax
 * 00000001800A95E7: mov     r9d, r12d
 * 00000001800A95EA: mov     edx, 0CAh
 * 00000001800A95EF: lea     rcx, [rbp+9E40h+var_2630]
 * 00000001800A95F6: call    sub_180073668
 * 00000001800A95FB: nop
 * 00000001800A95FC: mov     r8, rax
 * 00000001800A95FF: mov     rdx, r13
 * 00000001800A9602: lea     rcx, [rbp+9E40h+var_2690]
 * 00000001800A9609: call    sub_18001B518
 * 00000001800A960E: nop
 * 00000001800A960F: lea     r8, aPixel; "/Pixel"
 * 00000001800A9616: mov     rdx, rax
 * 00000001800A9619: lea     rcx, [rbp+9E40h+var_6290]
 * 00000001800A9620: call    sub_18001B448
 * 00000001800A9625: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A962A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A962F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9634: mov     rcx, rax
 * 00000001800A9637: call    sub_18007370C
 * 00000001800A963C: nop
 * 00000001800A963D: lea     rcx, [rbp+9E40h+var_2690]
 * 00000001800A9644: call    sub_180010F20
 * 00000001800A9649: nop
 * 00000001800A964A: lea     rcx, [rbp+9E40h+var_2630]
 * 00000001800A9651: call    sub_180010F20
 * 00000001800A9656: nop
 * 00000001800A9657: lea     rcx, dword_1801C9310
 * 00000001800A965E: call    _Init_thread_footer
 * 00000001800A9663: mov     rax, [rdi+rbx*8]
 * 00000001800A9667: mov     eax, [r15+rax]
 * 00000001800A966B: cmp     cs:dword_1801C9314, eax
 * 00000001800A9671: jle     loc_1800A974E
 * 00000001800A9677: lea     rcx, dword_1801C9314
 * 00000001800A967E: call    sub_18000C8D0
 * 00000001800A9683: cmp     cs:dword_1801C9314, r14d
 * 00000001800A968A: jnz     loc_1800A974E
 * 00000001800A9690: lea     rax, unk_1801620B0
 * 00000001800A9697: mov     qword ptr [rbp+9E40h+var_9B30], rax
 * 00000001800A969E: lea     rax, unk_180168668
 * 00000001800A96A5: mov     qword ptr [rbp+9E40h+var_9B30+8], rax
 * 00000001800A96AC: movups  xmm7, [rbp+9E40h+var_9B30]
 * 00000001800A96B3: mov     dword ptr [rbp+9E40h+var_85C0], 5
 * 00000001800A96BD: mov     dword ptr [rbp+9E40h+var_85C0+4], esi
 * 00000001800A96C3: movups  xmm6, [rbp+9E40h+var_85C0]
 * 00000001800A96CA: call    sub_1800A5D74
 * 00000001800A96CF: mov     r8, rax
 * 00000001800A96D2: mov     r9d, r12d
 * 00000001800A96D5: mov     edx, 0D0h
 * 00000001800A96DA: lea     rcx, [rbp+9E40h+var_2510]
 * 00000001800A96E1: call    sub_180073668
 * 00000001800A96E6: nop
 * 00000001800A96E7: mov     r8, rax
 * 00000001800A96EA: mov     rdx, r13
 * 00000001800A96ED: lea     rcx, [rbp+9E40h+var_2570]
 * 00000001800A96F4: call    sub_18001B518
 * 00000001800A96F9: nop
 * 00000001800A96FA: lea     r8, aPixel; "/Pixel"
 * 00000001800A9701: mov     rdx, rax
 * 00000001800A9704: lea     rcx, [rbp+9E40h+var_6270]
 * 00000001800A970B: call    sub_18001B448
 * 00000001800A9710: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9715: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A971A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A971F: mov     rcx, rax
 * 00000001800A9722: call    sub_18007370C
 * 00000001800A9727: nop
 * 00000001800A9728: lea     rcx, [rbp+9E40h+var_2570]
 * 00000001800A972F: call    sub_180010F20
 * 00000001800A9734: nop
 * 00000001800A9735: lea     rcx, [rbp+9E40h+var_2510]
 * 00000001800A973C: call    sub_180010F20
 * 00000001800A9741: nop
 * 00000001800A9742: lea     rcx, dword_1801C9314
 * 00000001800A9749: call    _Init_thread_footer
 * 00000001800A974E: mov     rax, [rdi+rbx*8]
 * 00000001800A9752: mov     eax, [r15+rax]
 * 00000001800A9756: cmp     cs:dword_1801C9318, eax
 * 00000001800A975C: jle     loc_1800A9839
 * 00000001800A9762: lea     rcx, dword_1801C9318
 * 00000001800A9769: call    sub_18000C8D0
 * 00000001800A976E: cmp     cs:dword_1801C9318, r14d
 * 00000001800A9775: jnz     loc_1800A9839
 * 00000001800A977B: lea     rax, unk_1801620B0
 * 00000001800A9782: mov     qword ptr [rbp+9E40h+var_9B20], rax
 * 00000001800A9789: lea     rax, unk_180168668
 * 00000001800A9790: mov     qword ptr [rbp+9E40h+var_9B20+8], rax
 * 00000001800A9797: movups  xmm7, [rbp+9E40h+var_9B20]
 * 00000001800A979E: mov     dword ptr [rbp+9E40h+var_85A0], 5
 * 00000001800A97A8: mov     dword ptr [rbp+9E40h+var_85A0+4], esi
 * 00000001800A97AE: movups  xmm6, [rbp+9E40h+var_85A0]
 * 00000001800A97B5: call    sub_1800A5D74
 * 00000001800A97BA: mov     r8, rax
 * 00000001800A97BD: mov     r9d, r12d
 * 00000001800A97C0: mov     edx, 0D2h
 * 00000001800A97C5: lea     rcx, [rbp+9E40h+var_23F0]
 * 00000001800A97CC: call    sub_180073668
 * 00000001800A97D1: nop
 * 00000001800A97D2: mov     r8, rax
 * 00000001800A97D5: mov     rdx, r13
 * 00000001800A97D8: lea     rcx, [rbp+9E40h+var_2450]
 * 00000001800A97DF: call    sub_18001B518
 * 00000001800A97E4: nop
 * 00000001800A97E5: lea     r8, aPixel; "/Pixel"
 * 00000001800A97EC: mov     rdx, rax
 * 00000001800A97EF: lea     rcx, [rbp+9E40h+var_6250]
 * 00000001800A97F6: call    sub_18001B448
 * 00000001800A97FB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9800: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9805: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A980A: mov     rcx, rax
 * 00000001800A980D: call    sub_18007370C
 * 00000001800A9812: nop
 * 00000001800A9813: lea     rcx, [rbp+9E40h+var_2450]
 * 00000001800A981A: call    sub_180010F20
 * 00000001800A981F: nop
 * 00000001800A9820: lea     rcx, [rbp+9E40h+var_23F0]
 * 00000001800A9827: call    sub_180010F20
 * 00000001800A982C: nop
 * 00000001800A982D: lea     rcx, dword_1801C9318
 * 00000001800A9834: call    _Init_thread_footer
 * 00000001800A9839: mov     rax, [rdi+rbx*8]
 * 00000001800A983D: mov     eax, [r15+rax]
 * 00000001800A9841: cmp     cs:dword_1801C931C, eax
 * 00000001800A9847: jle     loc_1800A9924
 * 00000001800A984D: lea     rcx, dword_1801C931C
 * 00000001800A9854: call    sub_18000C8D0
 * 00000001800A9859: cmp     cs:dword_1801C931C, r14d
 * 00000001800A9860: jnz     loc_1800A9924
 * 00000001800A9866: lea     rax, unk_18016FCD0
 * 00000001800A986D: mov     qword ptr [rbp+9E40h+var_9B10], rax
 * 00000001800A9874: lea     rax, unk_18017645C
 * 00000001800A987B: mov     qword ptr [rbp+9E40h+var_9B10+8], rax
 * 00000001800A9882: movups  xmm7, [rbp+9E40h+var_9B10]
 * 00000001800A9889: mov     dword ptr [rbp+9E40h+var_8580], 5
 * 00000001800A9893: mov     dword ptr [rbp+9E40h+var_8580+4], esi
 * 00000001800A9899: movups  xmm6, [rbp+9E40h+var_8580]
 * 00000001800A98A0: call    sub_1800A5D74
 * 00000001800A98A5: mov     r8, rax
 * 00000001800A98A8: mov     r9d, r12d
 * 00000001800A98AB: mov     edx, 0D8h
 * 00000001800A98B0: lea     rcx, [rbp+9E40h+var_22D0]
 * 00000001800A98B7: call    sub_180073668
 * 00000001800A98BC: nop
 * 00000001800A98BD: mov     r8, rax
 * 00000001800A98C0: mov     rdx, r13
 * 00000001800A98C3: lea     rcx, [rbp+9E40h+var_2330]
 * 00000001800A98CA: call    sub_18001B518
 * 00000001800A98CF: nop
 * 00000001800A98D0: lea     r8, aPixel; "/Pixel"
 * 00000001800A98D7: mov     rdx, rax
 * 00000001800A98DA: lea     rcx, [rbp+9E40h+var_6230]
 * 00000001800A98E1: call    sub_18001B448
 * 00000001800A98E6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A98EB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A98F0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A98F5: mov     rcx, rax
 * 00000001800A98F8: call    sub_18007370C
 * 00000001800A98FD: nop
 * 00000001800A98FE: lea     rcx, [rbp+9E40h+var_2330]
 * 00000001800A9905: call    sub_180010F20
 * 00000001800A990A: nop
 * 00000001800A990B: lea     rcx, [rbp+9E40h+var_22D0]
 * 00000001800A9912: call    sub_180010F20
 * 00000001800A9917: nop
 * 00000001800A9918: lea     rcx, dword_1801C931C
 * 00000001800A991F: call    _Init_thread_footer
 * 00000001800A9924: mov     rax, [rdi+rbx*8]
 * 00000001800A9928: mov     eax, [r15+rax]
 * 00000001800A992C: cmp     cs:dword_1801C9320, eax
 * 00000001800A9932: jle     loc_1800A9A0F
 * 00000001800A9938: lea     rcx, dword_1801C9320
 * 00000001800A993F: call    sub_18000C8D0
 * 00000001800A9944: cmp     cs:dword_1801C9320, r14d
 * 00000001800A994B: jnz     loc_1800A9A0F
 * 00000001800A9951: lea     rax, unk_18016FCD0
 * 00000001800A9958: mov     qword ptr [rbp+9E40h+var_9B00], rax
 * 00000001800A995F: lea     rax, unk_18017645C
 * 00000001800A9966: mov     qword ptr [rbp+9E40h+var_9B00+8], rax
 * 00000001800A996D: movups  xmm7, [rbp+9E40h+var_9B00]
 * 00000001800A9974: mov     dword ptr [rbp+9E40h+var_8560], 5
 * 00000001800A997E: mov     dword ptr [rbp+9E40h+var_8560+4], esi
 * 00000001800A9984: movups  xmm6, [rbp+9E40h+var_8560]
 * 00000001800A998B: call    sub_1800A5D74
 * 00000001800A9990: mov     r8, rax
 * 00000001800A9993: mov     r9d, r12d
 * 00000001800A9996: mov     edx, 0DAh
 * 00000001800A999B: lea     rcx, [rbp+9E40h+var_21B0]
 * 00000001800A99A2: call    sub_180073668
 * 00000001800A99A7: nop
 * 00000001800A99A8: mov     r8, rax
 * 00000001800A99AB: mov     rdx, r13
 * 00000001800A99AE: lea     rcx, [rbp+9E40h+var_2210]
 * 00000001800A99B5: call    sub_18001B518
 * 00000001800A99BA: nop
 * 00000001800A99BB: lea     r8, aPixel; "/Pixel"
 * 00000001800A99C2: mov     rdx, rax
 * 00000001800A99C5: lea     rcx, [rbp+9E40h+var_6210]
 * 00000001800A99CC: call    sub_18001B448
 * 00000001800A99D1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A99D6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A99DB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A99E0: mov     rcx, rax
 * 00000001800A99E3: call    sub_18007370C
 * 00000001800A99E8: nop
 * 00000001800A99E9: lea     rcx, [rbp+9E40h+var_2210]
 * 00000001800A99F0: call    sub_180010F20
 * 00000001800A99F5: nop
 * 00000001800A99F6: lea     rcx, [rbp+9E40h+var_21B0]
 * 00000001800A99FD: call    sub_180010F20
 * 00000001800A9A02: nop
 * 00000001800A9A03: lea     rcx, dword_1801C9320
 * 00000001800A9A0A: call    _Init_thread_footer
 * 00000001800A9A0F: mov     rax, [rdi+rbx*8]
 * 00000001800A9A13: mov     eax, [r15+rax]
 * 00000001800A9A17: cmp     cs:dword_1801C9324, eax
 * 00000001800A9A1D: jle     loc_1800A9AFA
 * 00000001800A9A23: lea     rcx, dword_1801C9324
 * 00000001800A9A2A: call    sub_18000C8D0
 * 00000001800A9A2F: cmp     cs:dword_1801C9324, r14d
 * 00000001800A9A36: jnz     loc_1800A9AFA
 * 00000001800A9A3C: lea     rax, unk_18017FE90
 * 00000001800A9A43: mov     qword ptr [rbp+9E40h+var_9AF0], rax
 * 00000001800A9A4A: lea     rax, unk_180186274
 * 00000001800A9A51: mov     qword ptr [rbp+9E40h+var_9AF0+8], rax
 * 00000001800A9A58: movups  xmm7, [rbp+9E40h+var_9AF0]
 * 00000001800A9A5F: mov     dword ptr [rbp+9E40h+var_8540], 5
 * 00000001800A9A69: mov     dword ptr [rbp+9E40h+var_8540+4], esi
 * 00000001800A9A6F: movups  xmm6, [rbp+9E40h+var_8540]
 * 00000001800A9A76: call    sub_1800A5D74
 * 00000001800A9A7B: mov     r8, rax
 * 00000001800A9A7E: mov     r9d, r12d
 * 00000001800A9A81: mov     edx, 0E0h
 * 00000001800A9A86: lea     rcx, [rbp+9E40h+var_2090]
 * 00000001800A9A8D: call    sub_180073668
 * 00000001800A9A92: nop
 * 00000001800A9A93: mov     r8, rax
 * 00000001800A9A96: mov     rdx, r13
 * 00000001800A9A99: lea     rcx, [rbp+9E40h+var_20F0]
 * 00000001800A9AA0: call    sub_18001B518
 * 00000001800A9AA5: nop
 * 00000001800A9AA6: lea     r8, aPixel; "/Pixel"
 * 00000001800A9AAD: mov     rdx, rax
 * 00000001800A9AB0: lea     rcx, [rbp+9E40h+var_61F0]
 * 00000001800A9AB7: call    sub_18001B448
 * 00000001800A9ABC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9AC1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9AC6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9ACB: mov     rcx, rax
 * 00000001800A9ACE: call    sub_18007370C
 * 00000001800A9AD3: nop
 * 00000001800A9AD4: lea     rcx, [rbp+9E40h+var_20F0]
 * 00000001800A9ADB: call    sub_180010F20
 * 00000001800A9AE0: nop
 * 00000001800A9AE1: lea     rcx, [rbp+9E40h+var_2090]
 * 00000001800A9AE8: call    sub_180010F20
 * 00000001800A9AED: nop
 * 00000001800A9AEE: lea     rcx, dword_1801C9324
 * 00000001800A9AF5: call    _Init_thread_footer
 * 00000001800A9AFA: mov     rax, [rdi+rbx*8]
 * 00000001800A9AFE: mov     eax, [r15+rax]
 * 00000001800A9B02: cmp     cs:dword_1801C9328, eax
 * 00000001800A9B08: jle     loc_1800A9BE5
 * 00000001800A9B0E: lea     rcx, dword_1801C9328
 * 00000001800A9B15: call    sub_18000C8D0
 * 00000001800A9B1A: cmp     cs:dword_1801C9328, r14d
 * 00000001800A9B21: jnz     loc_1800A9BE5
 * 00000001800A9B27: lea     rax, unk_18017FE90
 * 00000001800A9B2E: mov     qword ptr [rbp+9E40h+var_9AE0], rax
 * 00000001800A9B35: lea     rax, unk_180186274
 * 00000001800A9B3C: mov     qword ptr [rbp+9E40h+var_9AE0+8], rax
 * 00000001800A9B43: movups  xmm7, [rbp+9E40h+var_9AE0]
 * 00000001800A9B4A: mov     dword ptr [rbp+9E40h+var_8520], 5
 * 00000001800A9B54: mov     dword ptr [rbp+9E40h+var_8520+4], esi
 * 00000001800A9B5A: movups  xmm6, [rbp+9E40h+var_8520]
 * 00000001800A9B61: call    sub_1800A5D74
 * 00000001800A9B66: mov     r8, rax
 * 00000001800A9B69: mov     r9d, r12d
 * 00000001800A9B6C: mov     edx, 0E2h
 * 00000001800A9B71: lea     rcx, [rbp+9E40h+var_1F70]
 * 00000001800A9B78: call    sub_180073668
 * 00000001800A9B7D: nop
 * 00000001800A9B7E: mov     r8, rax
 * 00000001800A9B81: mov     rdx, r13
 * 00000001800A9B84: lea     rcx, [rbp+9E40h+var_1FD0]
 * 00000001800A9B8B: call    sub_18001B518
 * 00000001800A9B90: nop
 * 00000001800A9B91: lea     r8, aPixel; "/Pixel"
 * 00000001800A9B98: mov     rdx, rax
 * 00000001800A9B9B: lea     rcx, [rbp+9E40h+var_61D0]
 * 00000001800A9BA2: call    sub_18001B448
 * 00000001800A9BA7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9BAC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9BB1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9BB6: mov     rcx, rax
 * 00000001800A9BB9: call    sub_18007370C
 * 00000001800A9BBE: nop
 * 00000001800A9BBF: lea     rcx, [rbp+9E40h+var_1FD0]
 * 00000001800A9BC6: call    sub_180010F20
 * 00000001800A9BCB: nop
 * 00000001800A9BCC: lea     rcx, [rbp+9E40h+var_1F70]
 * 00000001800A9BD3: call    sub_180010F20
 * 00000001800A9BD8: nop
 * 00000001800A9BD9: lea     rcx, dword_1801C9328
 * 00000001800A9BE0: call    _Init_thread_footer
 * 00000001800A9BE5: mov     rax, [rdi+rbx*8]
 * 00000001800A9BE9: mov     eax, [r15+rax]
 * 00000001800A9BED: cmp     cs:dword_1801C932C, eax
 * 00000001800A9BF3: jle     loc_1800A9CD0
 * 00000001800A9BF9: lea     rcx, dword_1801C932C
 * 00000001800A9C00: call    sub_18000C8D0
 * 00000001800A9C05: cmp     cs:dword_1801C932C, r14d
 * 00000001800A9C0C: jnz     loc_1800A9CD0
 * 00000001800A9C12: lea     rax, unk_180168670
 * 00000001800A9C19: mov     qword ptr [rbp+9E40h+var_9AD0], rax
 * 00000001800A9C20: lea     rax, unk_18016EBFC
 * 00000001800A9C27: mov     qword ptr [rbp+9E40h+var_9AD0+8], rax
 * 00000001800A9C2E: movups  xmm7, [rbp+9E40h+var_9AD0]
 * 00000001800A9C35: mov     dword ptr [rbp+9E40h+var_8500], 5
 * 00000001800A9C3F: mov     dword ptr [rbp+9E40h+var_8500+4], esi
 * 00000001800A9C45: movups  xmm6, [rbp+9E40h+var_8500]
 * 00000001800A9C4C: call    sub_1800A5D74
 * 00000001800A9C51: mov     r8, rax
 * 00000001800A9C54: mov     r9d, r12d
 * 00000001800A9C57: mov     edx, 0E8h
 * 00000001800A9C5C: lea     rcx, [rbp+9E40h+var_1E50]
 * 00000001800A9C63: call    sub_180073668
 * 00000001800A9C68: nop
 * 00000001800A9C69: mov     r8, rax
 * 00000001800A9C6C: mov     rdx, r13
 * 00000001800A9C6F: lea     rcx, [rbp+9E40h+var_1EB0]
 * 00000001800A9C76: call    sub_18001B518
 * 00000001800A9C7B: nop
 * 00000001800A9C7C: lea     r8, aPixel; "/Pixel"
 * 00000001800A9C83: mov     rdx, rax
 * 00000001800A9C86: lea     rcx, [rbp+9E40h+var_61B0]
 * 00000001800A9C8D: call    sub_18001B448
 * 00000001800A9C92: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9C97: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9C9C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9CA1: mov     rcx, rax
 * 00000001800A9CA4: call    sub_18007370C
 * 00000001800A9CA9: nop
 * 00000001800A9CAA: lea     rcx, [rbp+9E40h+var_1EB0]
 * 00000001800A9CB1: call    sub_180010F20
 * 00000001800A9CB6: nop
 * 00000001800A9CB7: lea     rcx, [rbp+9E40h+var_1E50]
 * 00000001800A9CBE: call    sub_180010F20
 * 00000001800A9CC3: nop
 * 00000001800A9CC4: lea     rcx, dword_1801C932C
 * 00000001800A9CCB: call    _Init_thread_footer
 * 00000001800A9CD0: mov     rax, [rdi+rbx*8]
 * 00000001800A9CD4: mov     eax, [r15+rax]
 * 00000001800A9CD8: cmp     cs:dword_1801C9330, eax
 * 00000001800A9CDE: jle     loc_1800A9DBB
 * 00000001800A9CE4: lea     rcx, dword_1801C9330
 * 00000001800A9CEB: call    sub_18000C8D0
 * 00000001800A9CF0: cmp     cs:dword_1801C9330, r14d
 * 00000001800A9CF7: jnz     loc_1800A9DBB
 * 00000001800A9CFD: lea     rax, unk_180168670
 * 00000001800A9D04: mov     qword ptr [rbp+9E40h+var_9AC0], rax
 * 00000001800A9D0B: lea     rax, unk_18016EBFC
 * 00000001800A9D12: mov     qword ptr [rbp+9E40h+var_9AC0+8], rax
 * 00000001800A9D19: movups  xmm7, [rbp+9E40h+var_9AC0]
 * 00000001800A9D20: mov     dword ptr [rbp+9E40h+var_84E0], 5
 * 00000001800A9D2A: mov     dword ptr [rbp+9E40h+var_84E0+4], esi
 * 00000001800A9D30: movups  xmm6, [rbp+9E40h+var_84E0]
 * 00000001800A9D37: call    sub_1800A5D74
 * 00000001800A9D3C: mov     r8, rax
 * 00000001800A9D3F: mov     r9d, r12d
 * 00000001800A9D42: mov     edx, 0EAh
 * 00000001800A9D47: lea     rcx, [rbp+9E40h+var_1D30]
 * 00000001800A9D4E: call    sub_180073668
 * 00000001800A9D53: nop
 * 00000001800A9D54: mov     r8, rax
 * 00000001800A9D57: mov     rdx, r13
 * 00000001800A9D5A: lea     rcx, [rbp+9E40h+var_1D90]
 * 00000001800A9D61: call    sub_18001B518
 * 00000001800A9D66: nop
 * 00000001800A9D67: lea     r8, aPixel; "/Pixel"
 * 00000001800A9D6E: mov     rdx, rax
 * 00000001800A9D71: lea     rcx, [rbp+9E40h+var_6190]
 * 00000001800A9D78: call    sub_18001B448
 * 00000001800A9D7D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9D82: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9D87: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9D8C: mov     rcx, rax
 * 00000001800A9D8F: call    sub_18007370C
 * 00000001800A9D94: nop
 * 00000001800A9D95: lea     rcx, [rbp+9E40h+var_1D90]
 * 00000001800A9D9C: call    sub_180010F20
 * 00000001800A9DA1: nop
 * 00000001800A9DA2: lea     rcx, [rbp+9E40h+var_1D30]
 * 00000001800A9DA9: call    sub_180010F20
 * 00000001800A9DAE: nop
 * 00000001800A9DAF: lea     rcx, dword_1801C9330
 * 00000001800A9DB6: call    _Init_thread_footer
 * 00000001800A9DBB: mov     rax, [rdi+rbx*8]
 * 00000001800A9DBF: mov     eax, [r15+rax]
 * 00000001800A9DC3: cmp     cs:dword_1801C9334, eax
 * 00000001800A9DC9: jle     loc_1800A9EA6
 * 00000001800A9DCF: lea     rcx, dword_1801C9334
 * 00000001800A9DD6: call    sub_18000C8D0
 * 00000001800A9DDB: cmp     cs:dword_1801C9334, r14d
 * 00000001800A9DE2: jnz     loc_1800A9EA6
 * 00000001800A9DE8: lea     rax, unk_1801620B0
 * 00000001800A9DEF: mov     qword ptr [rbp+9E40h+var_9AB0], rax
 * 00000001800A9DF6: lea     rax, unk_180168668
 * 00000001800A9DFD: mov     qword ptr [rbp+9E40h+var_9AB0+8], rax
 * 00000001800A9E04: movups  xmm7, [rbp+9E40h+var_9AB0]
 * 00000001800A9E0B: mov     dword ptr [rbp+9E40h+var_84C0], 5
 * 00000001800A9E15: mov     dword ptr [rbp+9E40h+var_84C0+4], esi
 * 00000001800A9E1B: movups  xmm6, [rbp+9E40h+var_84C0]
 * 00000001800A9E22: call    sub_1800A5D74
 * 00000001800A9E27: mov     r8, rax
 * 00000001800A9E2A: mov     r9d, r12d
 * 00000001800A9E2D: mov     edx, 0F0h
 * 00000001800A9E32: lea     rcx, [rbp+9E40h+var_1C10]
 * 00000001800A9E39: call    sub_180073668
 * 00000001800A9E3E: nop
 * 00000001800A9E3F: mov     r8, rax
 * 00000001800A9E42: mov     rdx, r13
 * 00000001800A9E45: lea     rcx, [rbp+9E40h+var_1C70]
 * 00000001800A9E4C: call    sub_18001B518
 * 00000001800A9E51: nop
 * 00000001800A9E52: lea     r8, aPixel; "/Pixel"
 * 00000001800A9E59: mov     rdx, rax
 * 00000001800A9E5C: lea     rcx, [rbp+9E40h+var_6170]
 * 00000001800A9E63: call    sub_18001B448
 * 00000001800A9E68: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9E6D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9E72: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9E77: mov     rcx, rax
 * 00000001800A9E7A: call    sub_18007370C
 * 00000001800A9E7F: nop
 * 00000001800A9E80: lea     rcx, [rbp+9E40h+var_1C70]
 * 00000001800A9E87: call    sub_180010F20
 * 00000001800A9E8C: nop
 * 00000001800A9E8D: lea     rcx, [rbp+9E40h+var_1C10]
 * 00000001800A9E94: call    sub_180010F20
 * 00000001800A9E99: nop
 * 00000001800A9E9A: lea     rcx, dword_1801C9334
 * 00000001800A9EA1: call    _Init_thread_footer
 * 00000001800A9EA6: mov     rax, [rdi+rbx*8]
 * 00000001800A9EAA: mov     eax, [r15+rax]
 * 00000001800A9EAE: cmp     cs:dword_1801C9338, eax
 * 00000001800A9EB4: jle     loc_1800A9F91
 * 00000001800A9EBA: lea     rcx, dword_1801C9338
 * 00000001800A9EC1: call    sub_18000C8D0
 * 00000001800A9EC6: cmp     cs:dword_1801C9338, r14d
 * 00000001800A9ECD: jnz     loc_1800A9F91
 * 00000001800A9ED3: lea     rax, unk_1801620B0
 * 00000001800A9EDA: mov     qword ptr [rbp+9E40h+var_9AA0], rax
 * 00000001800A9EE1: lea     rax, unk_180168668
 * 00000001800A9EE8: mov     qword ptr [rbp+9E40h+var_9AA0+8], rax
 * 00000001800A9EEF: movups  xmm7, [rbp+9E40h+var_9AA0]
 * 00000001800A9EF6: mov     dword ptr [rbp+9E40h+var_84A0], 5
 * 00000001800A9F00: mov     dword ptr [rbp+9E40h+var_84A0+4], esi
 * 00000001800A9F06: movups  xmm6, [rbp+9E40h+var_84A0]
 * 00000001800A9F0D: call    sub_1800A5D74
 * 00000001800A9F12: mov     r8, rax
 * 00000001800A9F15: mov     r9d, r12d
 * 00000001800A9F18: mov     edx, 0F2h
 * 00000001800A9F1D: lea     rcx, [rbp+9E40h+var_1AF0]
 * 00000001800A9F24: call    sub_180073668
 * 00000001800A9F29: nop
 * 00000001800A9F2A: mov     r8, rax
 * 00000001800A9F2D: mov     rdx, r13
 * 00000001800A9F30: lea     rcx, [rbp+9E40h+var_1B50]
 * 00000001800A9F37: call    sub_18001B518
 * 00000001800A9F3C: nop
 * 00000001800A9F3D: lea     r8, aPixel; "/Pixel"
 * 00000001800A9F44: mov     rdx, rax
 * 00000001800A9F47: lea     rcx, [rbp+9E40h+var_6150]
 * 00000001800A9F4E: call    sub_18001B448
 * 00000001800A9F53: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800A9F58: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800A9F5D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800A9F62: mov     rcx, rax
 * 00000001800A9F65: call    sub_18007370C
 * 00000001800A9F6A: nop
 * 00000001800A9F6B: lea     rcx, [rbp+9E40h+var_1B50]
 * 00000001800A9F72: call    sub_180010F20
 * 00000001800A9F77: nop
 * 00000001800A9F78: lea     rcx, [rbp+9E40h+var_1AF0]
 * 00000001800A9F7F: call    sub_180010F20
 * 00000001800A9F84: nop
 * 00000001800A9F85: lea     rcx, dword_1801C9338
 * 00000001800A9F8C: call    _Init_thread_footer
 * 00000001800A9F91: mov     rax, [rdi+rbx*8]
 * 00000001800A9F95: mov     eax, [r15+rax]
 * 00000001800A9F99: cmp     cs:dword_1801C933C, eax
 * 00000001800A9F9F: jle     loc_1800AA07C
 * 00000001800A9FA5: lea     rcx, dword_1801C933C
 * 00000001800A9FAC: call    sub_18000C8D0
 * 00000001800A9FB1: cmp     cs:dword_1801C933C, r14d
 * 00000001800A9FB8: jnz     loc_1800AA07C
 * 00000001800A9FBE: lea     rax, unk_18016FCD0
 * 00000001800A9FC5: mov     qword ptr [rbp+9E40h+var_9A90], rax
 * 00000001800A9FCC: lea     rax, unk_18017645C
 * 00000001800A9FD3: mov     qword ptr [rbp+9E40h+var_9A90+8], rax
 * 00000001800A9FDA: movups  xmm7, [rbp+9E40h+var_9A90]
 * 00000001800A9FE1: mov     dword ptr [rbp+9E40h+var_8480], 5
 * 00000001800A9FEB: mov     dword ptr [rbp+9E40h+var_8480+4], esi
 * 00000001800A9FF1: movups  xmm6, [rbp+9E40h+var_8480]
 * 00000001800A9FF8: call    sub_1800A5D74
 * 00000001800A9FFD: mov     r8, rax
 * 00000001800AA000: mov     r9d, r12d
 * 00000001800AA003: mov     edx, 0F8h
 * 00000001800AA008: lea     rcx, [rbp+9E40h+var_19D0]
 * 00000001800AA00F: call    sub_180073668
 * 00000001800AA014: nop
 * 00000001800AA015: mov     r8, rax
 * 00000001800AA018: mov     rdx, r13
 * 00000001800AA01B: lea     rcx, [rbp+9E40h+var_1A30]
 * 00000001800AA022: call    sub_18001B518
 * 00000001800AA027: nop
 * 00000001800AA028: lea     r8, aPixel; "/Pixel"
 * 00000001800AA02F: mov     rdx, rax
 * 00000001800AA032: lea     rcx, [rbp+9E40h+var_6130]
 * 00000001800AA039: call    sub_18001B448
 * 00000001800AA03E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA043: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA048: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA04D: mov     rcx, rax
 * 00000001800AA050: call    sub_18007370C
 * 00000001800AA055: nop
 * 00000001800AA056: lea     rcx, [rbp+9E40h+var_1A30]
 * 00000001800AA05D: call    sub_180010F20
 * 00000001800AA062: nop
 * 00000001800AA063: lea     rcx, [rbp+9E40h+var_19D0]
 * 00000001800AA06A: call    sub_180010F20
 * 00000001800AA06F: nop
 * 00000001800AA070: lea     rcx, dword_1801C933C
 * 00000001800AA077: call    _Init_thread_footer
 * 00000001800AA07C: mov     rax, [rdi+rbx*8]
 * 00000001800AA080: mov     eax, [r15+rax]
 * 00000001800AA084: cmp     cs:dword_1801C9340, eax
 * 00000001800AA08A: jle     loc_1800AA167
 * 00000001800AA090: lea     rcx, dword_1801C9340
 * 00000001800AA097: call    sub_18000C8D0
 * 00000001800AA09C: cmp     cs:dword_1801C9340, r14d
 * 00000001800AA0A3: jnz     loc_1800AA167
 * 00000001800AA0A9: lea     rax, unk_18016FCD0
 * 00000001800AA0B0: mov     qword ptr [rbp+9E40h+var_9A80], rax
 * 00000001800AA0B7: lea     rax, unk_18017645C
 * 00000001800AA0BE: mov     qword ptr [rbp+9E40h+var_9A80+8], rax
 * 00000001800AA0C5: movups  xmm7, [rbp+9E40h+var_9A80]
 * 00000001800AA0CC: mov     dword ptr [rbp+9E40h+var_8460], 5
 * 00000001800AA0D6: mov     dword ptr [rbp+9E40h+var_8460+4], esi
 * 00000001800AA0DC: movups  xmm6, [rbp+9E40h+var_8460]
 * 00000001800AA0E3: call    sub_1800A5D74
 * 00000001800AA0E8: mov     r8, rax
 * 00000001800AA0EB: mov     r9d, r12d
 * 00000001800AA0EE: mov     edx, 0FAh
 * 00000001800AA0F3: lea     rcx, [rbp+9E40h+var_18B0]
 * 00000001800AA0FA: call    sub_180073668
 * 00000001800AA0FF: nop
 * 00000001800AA100: mov     r8, rax
 * 00000001800AA103: mov     rdx, r13
 * 00000001800AA106: lea     rcx, [rbp+9E40h+var_1910]
 * 00000001800AA10D: call    sub_18001B518
 * 00000001800AA112: nop
 * 00000001800AA113: lea     r8, aPixel; "/Pixel"
 * 00000001800AA11A: mov     rdx, rax
 * 00000001800AA11D: lea     rcx, [rbp+9E40h+var_6110]
 * 00000001800AA124: call    sub_18001B448
 * 00000001800AA129: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA12E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA133: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA138: mov     rcx, rax
 * 00000001800AA13B: call    sub_18007370C
 * 00000001800AA140: nop
 * 00000001800AA141: lea     rcx, [rbp+9E40h+var_1910]
 * 00000001800AA148: call    sub_180010F20
 * 00000001800AA14D: nop
 * 00000001800AA14E: lea     rcx, [rbp+9E40h+var_18B0]
 * 00000001800AA155: call    sub_180010F20
 * 00000001800AA15A: nop
 * 00000001800AA15B: lea     rcx, dword_1801C9340
 * 00000001800AA162: call    _Init_thread_footer
 * 00000001800AA167: mov     rax, [rdi+rbx*8]
 * 00000001800AA16B: mov     eax, [r15+rax]
 * 00000001800AA16F: cmp     cs:dword_1801C9344, eax
 * 00000001800AA175: jle     loc_1800AA252
 * 00000001800AA17B: lea     rcx, dword_1801C9344
 * 00000001800AA182: call    sub_18000C8D0
 * 00000001800AA187: cmp     cs:dword_1801C9344, r14d
 * 00000001800AA18E: jnz     loc_1800AA252
 * 00000001800AA194: lea     rax, unk_180176460
 * 00000001800AA19B: mov     qword ptr [rbp+9E40h+var_9A70], rax
 * 00000001800AA1A2: lea     rax, unk_18017CB8C
 * 00000001800AA1A9: mov     qword ptr [rbp+9E40h+var_9A70+8], rax
 * 00000001800AA1B0: movups  xmm7, [rbp+9E40h+var_9A70]
 * 00000001800AA1B7: mov     dword ptr [rbp+9E40h+var_8440], 5
 * 00000001800AA1C1: mov     dword ptr [rbp+9E40h+var_8440+4], esi
 * 00000001800AA1C7: movups  xmm6, [rbp+9E40h+var_8440]
 * 00000001800AA1CE: call    sub_1800A5D74
 * 00000001800AA1D3: mov     r8, rax
 * 00000001800AA1D6: mov     r9d, r12d
 * 00000001800AA1D9: mov     edx, 100h
 * 00000001800AA1DE: lea     rcx, [rbp+9E40h+var_1790]
 * 00000001800AA1E5: call    sub_180073668
 * 00000001800AA1EA: nop
 * 00000001800AA1EB: mov     r8, rax
 * 00000001800AA1EE: mov     rdx, r13
 * 00000001800AA1F1: lea     rcx, [rbp+9E40h+var_17F0]
 * 00000001800AA1F8: call    sub_18001B518
 * 00000001800AA1FD: nop
 * 00000001800AA1FE: lea     r8, aPixel; "/Pixel"
 * 00000001800AA205: mov     rdx, rax
 * 00000001800AA208: lea     rcx, [rbp+9E40h+var_60F0]
 * 00000001800AA20F: call    sub_18001B448
 * 00000001800AA214: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA219: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA21E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA223: mov     rcx, rax
 * 00000001800AA226: call    sub_18007370C
 * 00000001800AA22B: nop
 * 00000001800AA22C: lea     rcx, [rbp+9E40h+var_17F0]
 * 00000001800AA233: call    sub_180010F20
 * 00000001800AA238: nop
 * 00000001800AA239: lea     rcx, [rbp+9E40h+var_1790]
 * 00000001800AA240: call    sub_180010F20
 * 00000001800AA245: nop
 * 00000001800AA246: lea     rcx, dword_1801C9344
 * 00000001800AA24D: call    _Init_thread_footer
 * 00000001800AA252: mov     rax, [rdi+rbx*8]
 * 00000001800AA256: mov     eax, [r15+rax]
 * 00000001800AA25A: cmp     cs:dword_1801C9348, eax
 * 00000001800AA260: jle     loc_1800AA33D
 * 00000001800AA266: lea     rcx, dword_1801C9348
 * 00000001800AA26D: call    sub_18000C8D0
 * 00000001800AA272: cmp     cs:dword_1801C9348, r14d
 * 00000001800AA279: jnz     loc_1800AA33D
 * 00000001800AA27F: lea     rax, unk_180176460
 * 00000001800AA286: mov     qword ptr [rbp+9E40h+var_9A60], rax
 * 00000001800AA28D: lea     rax, unk_18017CB8C
 * 00000001800AA294: mov     qword ptr [rbp+9E40h+var_9A60+8], rax
 * 00000001800AA29B: movups  xmm7, [rbp+9E40h+var_9A60]
 * 00000001800AA2A2: mov     dword ptr [rbp+9E40h+var_8420], 5
 * 00000001800AA2AC: mov     dword ptr [rbp+9E40h+var_8420+4], esi
 * 00000001800AA2B2: movups  xmm6, [rbp+9E40h+var_8420]
 * 00000001800AA2B9: call    sub_1800A5D74
 * 00000001800AA2BE: mov     r8, rax
 * 00000001800AA2C1: mov     r9d, r12d
 * 00000001800AA2C4: mov     edx, 102h
 * 00000001800AA2C9: lea     rcx, [rbp+9E40h+var_1610]
 * 00000001800AA2D0: call    sub_180073668
 * 00000001800AA2D5: nop
 * 00000001800AA2D6: mov     r8, rax
 * 00000001800AA2D9: mov     rdx, r13
 * 00000001800AA2DC: lea     rcx, [rbp+9E40h+var_16D0]
 * 00000001800AA2E3: call    sub_18001B518
 * 00000001800AA2E8: nop
 * 00000001800AA2E9: lea     r8, aPixel; "/Pixel"
 * 00000001800AA2F0: mov     rdx, rax
 * 00000001800AA2F3: lea     rcx, [rbp+9E40h+var_60D0]
 * 00000001800AA2FA: call    sub_18001B448
 * 00000001800AA2FF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA304: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA309: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA30E: mov     rcx, rax
 * 00000001800AA311: call    sub_18007370C
 * 00000001800AA316: nop
 * 00000001800AA317: lea     rcx, [rbp+9E40h+var_16D0]
 * 00000001800AA31E: call    sub_180010F20
 * 00000001800AA323: nop
 * 00000001800AA324: lea     rcx, [rbp+9E40h+var_1610]
 * 00000001800AA32B: call    sub_180010F20
 * 00000001800AA330: nop
 * 00000001800AA331: lea     rcx, dword_1801C9348
 * 00000001800AA338: call    _Init_thread_footer
 * 00000001800AA33D: mov     rax, [rdi+rbx*8]
 * 00000001800AA341: mov     eax, [r15+rax]
 * 00000001800AA345: cmp     cs:dword_1801C934C, eax
 * 00000001800AA34B: jle     loc_1800AA428
 * 00000001800AA351: lea     rcx, dword_1801C934C
 * 00000001800AA358: call    sub_18000C8D0
 * 00000001800AA35D: cmp     cs:dword_1801C934C, r14d
 * 00000001800AA364: jnz     loc_1800AA428
 * 00000001800AA36A: lea     rax, unk_18014E1E0
 * 00000001800AA371: mov     qword ptr [rbp+9E40h+var_9A50], rax
 * 00000001800AA378: lea     rax, unk_1801516C0
 * 00000001800AA37F: mov     qword ptr [rbp+9E40h+var_9A50+8], rax
 * 00000001800AA386: movups  xmm7, [rbp+9E40h+var_9A50]
 * 00000001800AA38D: mov     dword ptr [rbp+9E40h+var_8400], 5
 * 00000001800AA397: mov     dword ptr [rbp+9E40h+var_8400+4], esi
 * 00000001800AA39D: movups  xmm6, [rbp+9E40h+var_8400]
 * 00000001800AA3A4: call    sub_1800A5D74
 * 00000001800AA3A9: mov     r8, rax
 * 00000001800AA3AC: mov     r9d, r12d
 * 00000001800AA3AF: mov     edx, 104h
 * 00000001800AA3B4: lea     rcx, [rbp+9E40h+var_14F0]
 * 00000001800AA3BB: call    sub_180073668
 * 00000001800AA3C0: nop
 * 00000001800AA3C1: mov     r8, rax
 * 00000001800AA3C4: mov     rdx, r13
 * 00000001800AA3C7: lea     rcx, [rbp+9E40h+var_1550]
 * 00000001800AA3CE: call    sub_18001B518
 * 00000001800AA3D3: nop
 * 00000001800AA3D4: lea     r8, aPixel; "/Pixel"
 * 00000001800AA3DB: mov     rdx, rax
 * 00000001800AA3DE: lea     rcx, [rbp+9E40h+var_60B0]
 * 00000001800AA3E5: call    sub_18001B448
 * 00000001800AA3EA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA3EF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA3F4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA3F9: mov     rcx, rax
 * 00000001800AA3FC: call    sub_18007370C
 * 00000001800AA401: nop
 * 00000001800AA402: lea     rcx, [rbp+9E40h+var_1550]
 * 00000001800AA409: call    sub_180010F20
 * 00000001800AA40E: nop
 * 00000001800AA40F: lea     rcx, [rbp+9E40h+var_14F0]
 * 00000001800AA416: call    sub_180010F20
 * 00000001800AA41B: nop
 * 00000001800AA41C: lea     rcx, dword_1801C934C
 * 00000001800AA423: call    _Init_thread_footer
 * 00000001800AA428: mov     rax, [rdi+rbx*8]
 * 00000001800AA42C: mov     eax, [r15+rax]
 * 00000001800AA430: cmp     cs:dword_1801C9350, eax
 * 00000001800AA436: jle     loc_1800AA513
 * 00000001800AA43C: lea     rcx, dword_1801C9350
 * 00000001800AA443: call    sub_18000C8D0
 * 00000001800AA448: cmp     cs:dword_1801C9350, r14d
 * 00000001800AA44F: jnz     loc_1800AA513
 * 00000001800AA455: lea     rax, unk_18014E1E0
 * 00000001800AA45C: mov     qword ptr [rbp+9E40h+var_9A40], rax
 * 00000001800AA463: lea     rax, unk_1801516C0
 * 00000001800AA46A: mov     qword ptr [rbp+9E40h+var_9A40+8], rax
 * 00000001800AA471: movups  xmm7, [rbp+9E40h+var_9A40]
 * 00000001800AA478: mov     dword ptr [rbp+9E40h+var_83E0], 5
 * 00000001800AA482: mov     dword ptr [rbp+9E40h+var_83E0+4], esi
 * 00000001800AA488: movups  xmm6, [rbp+9E40h+var_83E0]
 * 00000001800AA48F: call    sub_1800A5D74
 * 00000001800AA494: mov     r8, rax
 * 00000001800AA497: mov     r9d, r12d
 * 00000001800AA49A: mov     edx, 106h
 * 00000001800AA49F: lea     rcx, [rbp+9E40h+var_13D0]
 * 00000001800AA4A6: call    sub_180073668
 * 00000001800AA4AB: nop
 * 00000001800AA4AC: mov     r8, rax
 * 00000001800AA4AF: mov     rdx, r13
 * 00000001800AA4B2: lea     rcx, [rbp+9E40h+var_1430]
 * 00000001800AA4B9: call    sub_18001B518
 * 00000001800AA4BE: nop
 * 00000001800AA4BF: lea     r8, aPixel; "/Pixel"
 * 00000001800AA4C6: mov     rdx, rax
 * 00000001800AA4C9: lea     rcx, [rbp+9E40h+var_6090]
 * 00000001800AA4D0: call    sub_18001B448
 * 00000001800AA4D5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA4DA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA4DF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA4E4: mov     rcx, rax
 * 00000001800AA4E7: call    sub_18007370C
 * 00000001800AA4EC: nop
 * 00000001800AA4ED: lea     rcx, [rbp+9E40h+var_1430]
 * 00000001800AA4F4: call    sub_180010F20
 * 00000001800AA4F9: nop
 * 00000001800AA4FA: lea     rcx, [rbp+9E40h+var_13D0]
 * 00000001800AA501: call    sub_180010F20
 * 00000001800AA506: nop
 * 00000001800AA507: lea     rcx, dword_1801C9350
 * 00000001800AA50E: call    _Init_thread_footer
 * 00000001800AA513: mov     rax, [rdi+rbx*8]
 * 00000001800AA517: mov     eax, [r15+rax]
 * 00000001800AA51B: cmp     cs:dword_1801C9354, eax
 * 00000001800AA521: jle     loc_1800AA5FE
 * 00000001800AA527: lea     rcx, dword_1801C9354
 * 00000001800AA52E: call    sub_18000C8D0
 * 00000001800AA533: cmp     cs:dword_1801C9354, r14d
 * 00000001800AA53A: jnz     loc_1800AA5FE
 * 00000001800AA540: lea     rax, unk_180147920
 * 00000001800AA547: mov     qword ptr [rbp+9E40h+var_9A30], rax
 * 00000001800AA54E: lea     rax, unk_18014E1DC
 * 00000001800AA555: mov     qword ptr [rbp+9E40h+var_9A30+8], rax
 * 00000001800AA55C: movups  xmm7, [rbp+9E40h+var_9A30]
 * 00000001800AA563: mov     dword ptr [rbp+9E40h+var_83C0], 5
 * 00000001800AA56D: mov     dword ptr [rbp+9E40h+var_83C0+4], esi
 * 00000001800AA573: movups  xmm6, [rbp+9E40h+var_83C0]
 * 00000001800AA57A: call    sub_1800A5D74
 * 00000001800AA57F: mov     r8, rax
 * 00000001800AA582: mov     r9d, r12d
 * 00000001800AA585: mov     edx, 108h
 * 00000001800AA58A: lea     rcx, [rbp+9E40h+var_12B0]
 * 00000001800AA591: call    sub_180073668
 * 00000001800AA596: nop
 * 00000001800AA597: mov     r8, rax
 * 00000001800AA59A: mov     rdx, r13
 * 00000001800AA59D: lea     rcx, [rbp+9E40h+var_1310]
 * 00000001800AA5A4: call    sub_18001B518
 * 00000001800AA5A9: nop
 * 00000001800AA5AA: lea     r8, aPixel; "/Pixel"
 * 00000001800AA5B1: mov     rdx, rax
 * 00000001800AA5B4: lea     rcx, [rbp+9E40h+var_6070]
 * 00000001800AA5BB: call    sub_18001B448
 * 00000001800AA5C0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA5C5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA5CA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA5CF: mov     rcx, rax
 * 00000001800AA5D2: call    sub_18007370C
 * 00000001800AA5D7: nop
 * 00000001800AA5D8: lea     rcx, [rbp+9E40h+var_1310]
 * 00000001800AA5DF: call    sub_180010F20
 * 00000001800AA5E4: nop
 * 00000001800AA5E5: lea     rcx, [rbp+9E40h+var_12B0]
 * 00000001800AA5EC: call    sub_180010F20
 * 00000001800AA5F1: nop
 * 00000001800AA5F2: lea     rcx, dword_1801C9354
 * 00000001800AA5F9: call    _Init_thread_footer
 * 00000001800AA5FE: mov     rax, [rdi+rbx*8]
 * 00000001800AA602: mov     eax, [r15+rax]
 * 00000001800AA606: cmp     cs:dword_1801C9358, eax
 * 00000001800AA60C: jle     loc_1800AA6E9
 * 00000001800AA612: lea     rcx, dword_1801C9358
 * 00000001800AA619: call    sub_18000C8D0
 * 00000001800AA61E: cmp     cs:dword_1801C9358, r14d
 * 00000001800AA625: jnz     loc_1800AA6E9
 * 00000001800AA62B: lea     rax, unk_180147920
 * 00000001800AA632: mov     qword ptr [rbp+9E40h+var_9A20], rax
 * 00000001800AA639: lea     rax, unk_18014E1DC
 * 00000001800AA640: mov     qword ptr [rbp+9E40h+var_9A20+8], rax
 * 00000001800AA647: movups  xmm7, [rbp+9E40h+var_9A20]
 * 00000001800AA64E: mov     dword ptr [rbp+9E40h+var_83A0], 5
 * 00000001800AA658: mov     dword ptr [rbp+9E40h+var_83A0+4], esi
 * 00000001800AA65E: movups  xmm6, [rbp+9E40h+var_83A0]
 * 00000001800AA665: call    sub_1800A5D74
 * 00000001800AA66A: mov     r8, rax
 * 00000001800AA66D: mov     r9d, r12d
 * 00000001800AA670: mov     edx, 10Ah
 * 00000001800AA675: lea     rcx, [rbp+9E40h+var_1190]
 * 00000001800AA67C: call    sub_180073668
 * 00000001800AA681: nop
 * 00000001800AA682: mov     r8, rax
 * 00000001800AA685: mov     rdx, r13
 * 00000001800AA688: lea     rcx, [rbp+9E40h+var_11F0]
 * 00000001800AA68F: call    sub_18001B518
 * 00000001800AA694: nop
 * 00000001800AA695: lea     r8, aPixel; "/Pixel"
 * 00000001800AA69C: mov     rdx, rax
 * 00000001800AA69F: lea     rcx, [rbp+9E40h+var_6050]
 * 00000001800AA6A6: call    sub_18001B448
 * 00000001800AA6AB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA6B0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA6B5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA6BA: mov     rcx, rax
 * 00000001800AA6BD: call    sub_18007370C
 * 00000001800AA6C2: nop
 * 00000001800AA6C3: lea     rcx, [rbp+9E40h+var_11F0]
 * 00000001800AA6CA: call    sub_180010F20
 * 00000001800AA6CF: nop
 * 00000001800AA6D0: lea     rcx, [rbp+9E40h+var_1190]
 * 00000001800AA6D7: call    sub_180010F20
 * 00000001800AA6DC: nop
 * 00000001800AA6DD: lea     rcx, dword_1801C9358
 * 00000001800AA6E4: call    _Init_thread_footer
 * 00000001800AA6E9: mov     rax, [rdi+rbx*8]
 * 00000001800AA6ED: mov     eax, [r15+rax]
 * 00000001800AA6F1: cmp     cs:dword_1801C935C, eax
 * 00000001800AA6F7: jle     loc_1800AA7D4
 * 00000001800AA6FD: lea     rcx, dword_1801C935C
 * 00000001800AA704: call    sub_18000C8D0
 * 00000001800AA709: cmp     cs:dword_1801C935C, r14d
 * 00000001800AA710: jnz     loc_1800AA7D4
 * 00000001800AA716: lea     rax, unk_180158180
 * 00000001800AA71D: mov     qword ptr [rbp+9E40h+var_9A10], rax
 * 00000001800AA724: lea     rax, unk_18015EA88
 * 00000001800AA72B: mov     qword ptr [rbp+9E40h+var_9A10+8], rax
 * 00000001800AA732: movups  xmm7, [rbp+9E40h+var_9A10]
 * 00000001800AA739: mov     dword ptr [rbp+9E40h+var_8380], 5
 * 00000001800AA743: mov     dword ptr [rbp+9E40h+var_8380+4], esi
 * 00000001800AA749: movups  xmm6, [rbp+9E40h+var_8380]
 * 00000001800AA750: call    sub_1800A5D74
 * 00000001800AA755: mov     r8, rax
 * 00000001800AA758: mov     r9d, r12d
 * 00000001800AA75B: mov     edx, 110h
 * 00000001800AA760: lea     rcx, [rbp+9E40h+var_1070]
 * 00000001800AA767: call    sub_180073668
 * 00000001800AA76C: nop
 * 00000001800AA76D: mov     r8, rax
 * 00000001800AA770: mov     rdx, r13
 * 00000001800AA773: lea     rcx, [rbp+9E40h+var_10D0]
 * 00000001800AA77A: call    sub_18001B518
 * 00000001800AA77F: nop
 * 00000001800AA780: lea     r8, aPixel; "/Pixel"
 * 00000001800AA787: mov     rdx, rax
 * 00000001800AA78A: lea     rcx, [rbp+9E40h+var_6030]
 * 00000001800AA791: call    sub_18001B448
 * 00000001800AA796: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA79B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA7A0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA7A5: mov     rcx, rax
 * 00000001800AA7A8: call    sub_18007370C
 * 00000001800AA7AD: nop
 * 00000001800AA7AE: lea     rcx, [rbp+9E40h+var_10D0]
 * 00000001800AA7B5: call    sub_180010F20
 * 00000001800AA7BA: nop
 * 00000001800AA7BB: lea     rcx, [rbp+9E40h+var_1070]
 * 00000001800AA7C2: call    sub_180010F20
 * 00000001800AA7C7: nop
 * 00000001800AA7C8: lea     rcx, dword_1801C935C
 * 00000001800AA7CF: call    _Init_thread_footer
 * 00000001800AA7D4: mov     rax, [rdi+rbx*8]
 * 00000001800AA7D8: mov     eax, [r15+rax]
 * 00000001800AA7DC: cmp     cs:dword_1801C9360, eax
 * 00000001800AA7E2: jle     loc_1800AA8BF
 * 00000001800AA7E8: lea     rcx, dword_1801C9360
 * 00000001800AA7EF: call    sub_18000C8D0
 * 00000001800AA7F4: cmp     cs:dword_1801C9360, r14d
 * 00000001800AA7FB: jnz     loc_1800AA8BF
 * 00000001800AA801: lea     rax, unk_180158180
 * 00000001800AA808: mov     qword ptr [rbp+9E40h+var_9A00], rax
 * 00000001800AA80F: lea     rax, unk_18015EA88
 * 00000001800AA816: mov     qword ptr [rbp+9E40h+var_9A00+8], rax
 * 00000001800AA81D: movups  xmm7, [rbp+9E40h+var_9A00]
 * 00000001800AA824: mov     dword ptr [rbp+9E40h+var_8360], 5
 * 00000001800AA82E: mov     dword ptr [rbp+9E40h+var_8360+4], esi
 * 00000001800AA834: movups  xmm6, [rbp+9E40h+var_8360]
 * 00000001800AA83B: call    sub_1800A5D74
 * 00000001800AA840: mov     r8, rax
 * 00000001800AA843: mov     r9d, r12d
 * 00000001800AA846: mov     edx, 112h
 * 00000001800AA84B: lea     rcx, [rbp+9E40h+var_F50]
 * 00000001800AA852: call    sub_180073668
 * 00000001800AA857: nop
 * 00000001800AA858: mov     r8, rax
 * 00000001800AA85B: mov     rdx, r13
 * 00000001800AA85E: lea     rcx, [rbp+9E40h+var_FB0]
 * 00000001800AA865: call    sub_18001B518
 * 00000001800AA86A: nop
 * 00000001800AA86B: lea     r8, aPixel; "/Pixel"
 * 00000001800AA872: mov     rdx, rax
 * 00000001800AA875: lea     rcx, [rbp+9E40h+var_6010]
 * 00000001800AA87C: call    sub_18001B448
 * 00000001800AA881: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA886: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA88B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA890: mov     rcx, rax
 * 00000001800AA893: call    sub_18007370C
 * 00000001800AA898: nop
 * 00000001800AA899: lea     rcx, [rbp+9E40h+var_FB0]
 * 00000001800AA8A0: call    sub_180010F20
 * 00000001800AA8A5: nop
 * 00000001800AA8A6: lea     rcx, [rbp+9E40h+var_F50]
 * 00000001800AA8AD: call    sub_180010F20
 * 00000001800AA8B2: nop
 * 00000001800AA8B3: lea     rcx, dword_1801C9360
 * 00000001800AA8BA: call    _Init_thread_footer
 * 00000001800AA8BF: mov     rax, [rdi+rbx*8]
 * 00000001800AA8C3: mov     eax, [r15+rax]
 * 00000001800AA8C7: cmp     cs:dword_1801C9364, eax
 * 00000001800AA8CD: jle     loc_1800AA9AA
 * 00000001800AA8D3: lea     rcx, dword_1801C9364
 * 00000001800AA8DA: call    sub_18000C8D0
 * 00000001800AA8DF: cmp     cs:dword_1801C9364, r14d
 * 00000001800AA8E6: jnz     loc_1800AA9AA
 * 00000001800AA8EC: lea     rax, unk_18015EA90
 * 00000001800AA8F3: mov     qword ptr [rbp+9E40h+var_99F0], rax
 * 00000001800AA8FA: lea     rax, unk_1801620AC
 * 00000001800AA901: mov     qword ptr [rbp+9E40h+var_99F0+8], rax
 * 00000001800AA908: movups  xmm7, [rbp+9E40h+var_99F0]
 * 00000001800AA90F: mov     dword ptr [rbp+9E40h+var_8340], 5
 * 00000001800AA919: mov     dword ptr [rbp+9E40h+var_8340+4], esi
 * 00000001800AA91F: movups  xmm6, [rbp+9E40h+var_8340]
 * 00000001800AA926: call    sub_1800A5D74
 * 00000001800AA92B: mov     r8, rax
 * 00000001800AA92E: mov     r9d, r12d
 * 00000001800AA931: mov     edx, 114h
 * 00000001800AA936: lea     rcx, [rbp+9E40h+var_E30]
 * 00000001800AA93D: call    sub_180073668
 * 00000001800AA942: nop
 * 00000001800AA943: mov     r8, rax
 * 00000001800AA946: mov     rdx, r13
 * 00000001800AA949: lea     rcx, [rbp+9E40h+var_E90]
 * 00000001800AA950: call    sub_18001B518
 * 00000001800AA955: nop
 * 00000001800AA956: lea     r8, aPixel; "/Pixel"
 * 00000001800AA95D: mov     rdx, rax
 * 00000001800AA960: lea     rcx, [rbp+9E40h+var_5FF0]
 * 00000001800AA967: call    sub_18001B448
 * 00000001800AA96C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AA971: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AA976: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AA97B: mov     rcx, rax
 * 00000001800AA97E: call    sub_18007370C
 * 00000001800AA983: nop
 * 00000001800AA984: lea     rcx, [rbp+9E40h+var_E90]
 * 00000001800AA98B: call    sub_180010F20
 * 00000001800AA990: nop
 * 00000001800AA991: lea     rcx, [rbp+9E40h+var_E30]
 * 00000001800AA998: call    sub_180010F20
 * 00000001800AA99D: nop
 * 00000001800AA99E: lea     rcx, dword_1801C9364
 * 00000001800AA9A5: call    _Init_thread_footer
 * 00000001800AA9AA: mov     rax, [rdi+rbx*8]
 * 00000001800AA9AE: mov     eax, [r15+rax]
 * 00000001800AA9B2: cmp     cs:dword_1801C9368, eax
 * 00000001800AA9B8: jle     loc_1800AAA95
 * 00000001800AA9BE: lea     rcx, dword_1801C9368
 * 00000001800AA9C5: call    sub_18000C8D0
 * 00000001800AA9CA: cmp     cs:dword_1801C9368, r14d
 * 00000001800AA9D1: jnz     loc_1800AAA95
 * 00000001800AA9D7: lea     rax, unk_18015EA90
 * 00000001800AA9DE: mov     qword ptr [rbp+9E40h+var_99E0], rax
 * 00000001800AA9E5: lea     rax, unk_1801620AC
 * 00000001800AA9EC: mov     qword ptr [rbp+9E40h+var_99E0+8], rax
 * 00000001800AA9F3: movups  xmm7, [rbp+9E40h+var_99E0]
 * 00000001800AA9FA: mov     dword ptr [rbp+9E40h+var_8320], 5
 * 00000001800AAA04: mov     dword ptr [rbp+9E40h+var_8320+4], esi
 * 00000001800AAA0A: movups  xmm6, [rbp+9E40h+var_8320]
 * 00000001800AAA11: call    sub_1800A5D74
 * 00000001800AAA16: mov     r8, rax
 * 00000001800AAA19: mov     r9d, r12d
 * 00000001800AAA1C: mov     edx, 116h
 * 00000001800AAA21: lea     rcx, [rbp+9E40h+var_D10]
 * 00000001800AAA28: call    sub_180073668
 * 00000001800AAA2D: nop
 * 00000001800AAA2E: mov     r8, rax
 * 00000001800AAA31: mov     rdx, r13
 * 00000001800AAA34: lea     rcx, [rbp+9E40h+var_D70]
 * 00000001800AAA3B: call    sub_18001B518
 * 00000001800AAA40: nop
 * 00000001800AAA41: lea     r8, aPixel; "/Pixel"
 * 00000001800AAA48: mov     rdx, rax
 * 00000001800AAA4B: lea     rcx, [rbp+9E40h+var_5FD0]
 * 00000001800AAA52: call    sub_18001B448
 * 00000001800AAA57: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAA5C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAA61: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAA66: mov     rcx, rax
 * 00000001800AAA69: call    sub_18007370C
 * 00000001800AAA6E: nop
 * 00000001800AAA6F: lea     rcx, [rbp+9E40h+var_D70]
 * 00000001800AAA76: call    sub_180010F20
 * 00000001800AAA7B: nop
 * 00000001800AAA7C: lea     rcx, [rbp+9E40h+var_D10]
 * 00000001800AAA83: call    sub_180010F20
 * 00000001800AAA88: nop
 * 00000001800AAA89: lea     rcx, dword_1801C9368
 * 00000001800AAA90: call    _Init_thread_footer
 * 00000001800AAA95: mov     rax, [rdi+rbx*8]
 * 00000001800AAA99: mov     eax, [r15+rax]
 * 00000001800AAA9D: cmp     cs:dword_1801C936C, eax
 * 00000001800AAAA3: jle     loc_1800AAB80
 * 00000001800AAAA9: lea     rcx, dword_1801C936C
 * 00000001800AAAB0: call    sub_18000C8D0
 * 00000001800AAAB5: cmp     cs:dword_1801C936C, r14d
 * 00000001800AAABC: jnz     loc_1800AAB80
 * 00000001800AAAC2: lea     rax, unk_1801516C0
 * 00000001800AAAC9: mov     qword ptr [rbp+9E40h+var_99D0], rax
 * 00000001800AAAD0: lea     rax, unk_18015817C
 * 00000001800AAAD7: mov     qword ptr [rbp+9E40h+var_99D0+8], rax
 * 00000001800AAADE: movups  xmm7, [rbp+9E40h+var_99D0]
 * 00000001800AAAE5: mov     dword ptr [rbp+9E40h+var_8300], 5
 * 00000001800AAAEF: mov     dword ptr [rbp+9E40h+var_8300+4], esi
 * 00000001800AAAF5: movups  xmm6, [rbp+9E40h+var_8300]
 * 00000001800AAAFC: call    sub_1800A5D74
 * 00000001800AAB01: mov     r8, rax
 * 00000001800AAB04: mov     r9d, r12d
 * 00000001800AAB07: mov     edx, 118h
 * 00000001800AAB0C: lea     rcx, [rbp+9E40h+var_BF0]
 * 00000001800AAB13: call    sub_180073668
 * 00000001800AAB18: nop
 * 00000001800AAB19: mov     r8, rax
 * 00000001800AAB1C: mov     rdx, r13
 * 00000001800AAB1F: lea     rcx, [rbp+9E40h+var_C50]
 * 00000001800AAB26: call    sub_18001B518
 * 00000001800AAB2B: nop
 * 00000001800AAB2C: lea     r8, aPixel; "/Pixel"
 * 00000001800AAB33: mov     rdx, rax
 * 00000001800AAB36: lea     rcx, [rbp+9E40h+var_5FB0]
 * 00000001800AAB3D: call    sub_18001B448
 * 00000001800AAB42: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAB47: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAB4C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAB51: mov     rcx, rax
 * 00000001800AAB54: call    sub_18007370C
 * 00000001800AAB59: nop
 * 00000001800AAB5A: lea     rcx, [rbp+9E40h+var_C50]
 * 00000001800AAB61: call    sub_180010F20
 * 00000001800AAB66: nop
 * 00000001800AAB67: lea     rcx, [rbp+9E40h+var_BF0]
 * 00000001800AAB6E: call    sub_180010F20
 * 00000001800AAB73: nop
 * 00000001800AAB74: lea     rcx, dword_1801C936C
 * 00000001800AAB7B: call    _Init_thread_footer
 * 00000001800AAB80: mov     rax, [rdi+rbx*8]
 * 00000001800AAB84: mov     eax, [r15+rax]
 * 00000001800AAB88: cmp     cs:dword_1801C9370, eax
 * 00000001800AAB8E: jle     loc_1800AAC6B
 * 00000001800AAB94: lea     rcx, dword_1801C9370
 * 00000001800AAB9B: call    sub_18000C8D0
 * 00000001800AABA0: cmp     cs:dword_1801C9370, r14d
 * 00000001800AABA7: jnz     loc_1800AAC6B
 * 00000001800AABAD: lea     rax, unk_1801516C0
 * 00000001800AABB4: mov     qword ptr [rbp+9E40h+var_99C0], rax
 * 00000001800AABBB: lea     rax, unk_18015817C
 * 00000001800AABC2: mov     qword ptr [rbp+9E40h+var_99C0+8], rax
 * 00000001800AABC9: movups  xmm7, [rbp+9E40h+var_99C0]
 * 00000001800AABD0: mov     dword ptr [rbp+9E40h+var_82E0], 5
 * 00000001800AABDA: mov     dword ptr [rbp+9E40h+var_82E0+4], esi
 * 00000001800AABE0: movups  xmm6, [rbp+9E40h+var_82E0]
 * 00000001800AABE7: call    sub_1800A5D74
 * 00000001800AABEC: mov     r8, rax
 * 00000001800AABEF: mov     r9d, r12d
 * 00000001800AABF2: mov     edx, 11Ah
 * 00000001800AABF7: lea     rcx, [rbp+9E40h+var_AD0]
 * 00000001800AABFE: call    sub_180073668
 * 00000001800AAC03: nop
 * 00000001800AAC04: mov     r8, rax
 * 00000001800AAC07: mov     rdx, r13
 * 00000001800AAC0A: lea     rcx, [rbp+9E40h+var_B30]
 * 00000001800AAC11: call    sub_18001B518
 * 00000001800AAC16: nop
 * 00000001800AAC17: lea     r8, aPixel; "/Pixel"
 * 00000001800AAC1E: mov     rdx, rax
 * 00000001800AAC21: lea     rcx, [rbp+9E40h+var_5F90]
 * 00000001800AAC28: call    sub_18001B448
 * 00000001800AAC2D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAC32: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAC37: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAC3C: mov     rcx, rax
 * 00000001800AAC3F: call    sub_18007370C
 * 00000001800AAC44: nop
 * 00000001800AAC45: lea     rcx, [rbp+9E40h+var_B30]
 * 00000001800AAC4C: call    sub_180010F20
 * 00000001800AAC51: nop
 * 00000001800AAC52: lea     rcx, [rbp+9E40h+var_AD0]
 * 00000001800AAC59: call    sub_180010F20
 * 00000001800AAC5E: nop
 * 00000001800AAC5F: lea     rcx, dword_1801C9370
 * 00000001800AAC66: call    _Init_thread_footer
 * 00000001800AAC6B: mov     rax, [rdi+rbx*8]
 * 00000001800AAC6F: mov     eax, [r15+rax]
 * 00000001800AAC73: cmp     cs:dword_1801C9374, eax
 * 00000001800AAC79: jle     loc_1800AAD56
 * 00000001800AAC7F: lea     rcx, dword_1801C9374
 * 00000001800AAC86: call    sub_18000C8D0
 * 00000001800AAC8B: cmp     cs:dword_1801C9374, r14d
 * 00000001800AAC92: jnz     loc_1800AAD56
 * 00000001800AAC98: lea     rax, unk_180176460
 * 00000001800AAC9F: mov     qword ptr [rbp+9E40h+var_99B0], rax
 * 00000001800AACA6: lea     rax, unk_18017CB8C
 * 00000001800AACAD: mov     qword ptr [rbp+9E40h+var_99B0+8], rax
 * 00000001800AACB4: movups  xmm7, [rbp+9E40h+var_99B0]
 * 00000001800AACBB: mov     dword ptr [rbp+9E40h+var_82C0], 5
 * 00000001800AACC5: mov     dword ptr [rbp+9E40h+var_82C0+4], esi
 * 00000001800AACCB: movups  xmm6, [rbp+9E40h+var_82C0]
 * 00000001800AACD2: call    sub_1800A5D74
 * 00000001800AACD7: mov     r8, rax
 * 00000001800AACDA: mov     r9d, r12d
 * 00000001800AACDD: mov     edx, 120h
 * 00000001800AACE2: lea     rcx, [rbp+9E40h+var_9B0]
 * 00000001800AACE9: call    sub_180073668
 * 00000001800AACEE: nop
 * 00000001800AACEF: mov     r8, rax
 * 00000001800AACF2: mov     rdx, r13
 * 00000001800AACF5: lea     rcx, [rbp+9E40h+var_A10]
 * 00000001800AACFC: call    sub_18001B518
 * 00000001800AAD01: nop
 * 00000001800AAD02: lea     r8, aPixel; "/Pixel"
 * 00000001800AAD09: mov     rdx, rax
 * 00000001800AAD0C: lea     rcx, [rbp+9E40h+var_5F70]
 * 00000001800AAD13: call    sub_18001B448
 * 00000001800AAD18: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAD1D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAD22: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAD27: mov     rcx, rax
 * 00000001800AAD2A: call    sub_18007370C
 * 00000001800AAD2F: nop
 * 00000001800AAD30: lea     rcx, [rbp+9E40h+var_A10]
 * 00000001800AAD37: call    sub_180010F20
 * 00000001800AAD3C: nop
 * 00000001800AAD3D: lea     rcx, [rbp+9E40h+var_9B0]
 * 00000001800AAD44: call    sub_180010F20
 * 00000001800AAD49: nop
 * 00000001800AAD4A: lea     rcx, dword_1801C9374
 * 00000001800AAD51: call    _Init_thread_footer
 * 00000001800AAD56: mov     rax, [rdi+rbx*8]
 * 00000001800AAD5A: mov     eax, [r15+rax]
 * 00000001800AAD5E: cmp     cs:dword_1801C9378, eax
 * 00000001800AAD64: jle     loc_1800AAE41
 * 00000001800AAD6A: lea     rcx, dword_1801C9378
 * 00000001800AAD71: call    sub_18000C8D0
 * 00000001800AAD76: cmp     cs:dword_1801C9378, r14d
 * 00000001800AAD7D: jnz     loc_1800AAE41
 * 00000001800AAD83: lea     rax, unk_180176460
 * 00000001800AAD8A: mov     qword ptr [rbp+9E40h+var_99A0], rax
 * 00000001800AAD91: lea     rax, unk_18017CB8C
 * 00000001800AAD98: mov     qword ptr [rbp+9E40h+var_99A0+8], rax
 * 00000001800AAD9F: movups  xmm7, [rbp+9E40h+var_99A0]
 * 00000001800AADA6: mov     dword ptr [rbp+9E40h+var_82A0], 5
 * 00000001800AADB0: mov     dword ptr [rbp+9E40h+var_82A0+4], esi
 * 00000001800AADB6: movups  xmm6, [rbp+9E40h+var_82A0]
 * 00000001800AADBD: call    sub_1800A5D74
 * 00000001800AADC2: mov     r8, rax
 * 00000001800AADC5: mov     r9d, r12d
 * 00000001800AADC8: mov     edx, 122h
 * 00000001800AADCD: lea     rcx, [rbp+9E40h+var_890]
 * 00000001800AADD4: call    sub_180073668
 * 00000001800AADD9: nop
 * 00000001800AADDA: mov     r8, rax
 * 00000001800AADDD: mov     rdx, r13
 * 00000001800AADE0: lea     rcx, [rbp+9E40h+var_8F0]
 * 00000001800AADE7: call    sub_18001B518
 * 00000001800AADEC: nop
 * 00000001800AADED: lea     r8, aPixel; "/Pixel"
 * 00000001800AADF4: mov     rdx, rax
 * 00000001800AADF7: lea     rcx, [rbp+9E40h+var_5F50]
 * 00000001800AADFE: call    sub_18001B448
 * 00000001800AAE03: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAE08: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAE0D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAE12: mov     rcx, rax
 * 00000001800AAE15: call    sub_18007370C
 * 00000001800AAE1A: nop
 * 00000001800AAE1B: lea     rcx, [rbp+9E40h+var_8F0]
 * 00000001800AAE22: call    sub_180010F20
 * 00000001800AAE27: nop
 * 00000001800AAE28: lea     rcx, [rbp+9E40h+var_890]
 * 00000001800AAE2F: call    sub_180010F20
 * 00000001800AAE34: nop
 * 00000001800AAE35: lea     rcx, dword_1801C9378
 * 00000001800AAE3C: call    _Init_thread_footer
 * 00000001800AAE41: mov     rax, [rdi+rbx*8]
 * 00000001800AAE45: mov     eax, [r15+rax]
 * 00000001800AAE49: cmp     cs:dword_1801C937C, eax
 * 00000001800AAE4F: jle     loc_1800AAF2C
 * 00000001800AAE55: lea     rcx, dword_1801C937C
 * 00000001800AAE5C: call    sub_18000C8D0
 * 00000001800AAE61: cmp     cs:dword_1801C937C, r14d
 * 00000001800AAE68: jnz     loc_1800AAF2C
 * 00000001800AAE6E: lea     rax, unk_180147920
 * 00000001800AAE75: mov     qword ptr [rbp+9E40h+var_9990], rax
 * 00000001800AAE7C: lea     rax, unk_18014E1DC
 * 00000001800AAE83: mov     qword ptr [rbp+9E40h+var_9990+8], rax
 * 00000001800AAE8A: movups  xmm7, [rbp+9E40h+var_9990]
 * 00000001800AAE91: mov     dword ptr [rbp+9E40h+var_8280], 5
 * 00000001800AAE9B: mov     dword ptr [rbp+9E40h+var_8280+4], esi
 * 00000001800AAEA1: movups  xmm6, [rbp+9E40h+var_8280]
 * 00000001800AAEA8: call    sub_1800A5D74
 * 00000001800AAEAD: mov     r8, rax
 * 00000001800AAEB0: mov     r9d, r12d
 * 00000001800AAEB3: mov     edx, 128h
 * 00000001800AAEB8: lea     rcx, [rbp+9E40h+var_770]
 * 00000001800AAEBF: call    sub_180073668
 * 00000001800AAEC4: nop
 * 00000001800AAEC5: mov     r8, rax
 * 00000001800AAEC8: mov     rdx, r13
 * 00000001800AAECB: lea     rcx, [rbp+9E40h+var_7D0]
 * 00000001800AAED2: call    sub_18001B518
 * 00000001800AAED7: nop
 * 00000001800AAED8: lea     r8, aPixel; "/Pixel"
 * 00000001800AAEDF: mov     rdx, rax
 * 00000001800AAEE2: lea     rcx, [rbp+9E40h+var_5F30]
 * 00000001800AAEE9: call    sub_18001B448
 * 00000001800AAEEE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAEF3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAEF8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAEFD: mov     rcx, rax
 * 00000001800AAF00: call    sub_18007370C
 * 00000001800AAF05: nop
 * 00000001800AAF06: lea     rcx, [rbp+9E40h+var_7D0]
 * 00000001800AAF0D: call    sub_180010F20
 * 00000001800AAF12: nop
 * 00000001800AAF13: lea     rcx, [rbp+9E40h+var_770]
 * 00000001800AAF1A: call    sub_180010F20
 * 00000001800AAF1F: nop
 * 00000001800AAF20: lea     rcx, dword_1801C937C
 * 00000001800AAF27: call    _Init_thread_footer
 * 00000001800AAF2C: mov     rax, [rdi+rbx*8]
 * 00000001800AAF30: mov     eax, [r15+rax]
 * 00000001800AAF34: cmp     cs:dword_1801C9380, eax
 * 00000001800AAF3A: jle     loc_1800AB017
 * 00000001800AAF40: lea     rcx, dword_1801C9380
 * 00000001800AAF47: call    sub_18000C8D0
 * 00000001800AAF4C: cmp     cs:dword_1801C9380, r14d
 * 00000001800AAF53: jnz     loc_1800AB017
 * 00000001800AAF59: lea     rax, unk_180147920
 * 00000001800AAF60: mov     qword ptr [rbp+9E40h+var_9980], rax
 * 00000001800AAF67: lea     rax, unk_18014E1DC
 * 00000001800AAF6E: mov     qword ptr [rbp+9E40h+var_9980+8], rax
 * 00000001800AAF75: movups  xmm7, [rbp+9E40h+var_9980]
 * 00000001800AAF7C: mov     dword ptr [rbp+9E40h+var_8260], 5
 * 00000001800AAF86: mov     dword ptr [rbp+9E40h+var_8260+4], esi
 * 00000001800AAF8C: movups  xmm6, [rbp+9E40h+var_8260]
 * 00000001800AAF93: call    sub_1800A5D74
 * 00000001800AAF98: mov     r8, rax
 * 00000001800AAF9B: mov     r9d, r12d
 * 00000001800AAF9E: mov     edx, 12Ah
 * 00000001800AAFA3: lea     rcx, [rbp+9E40h+var_650]
 * 00000001800AAFAA: call    sub_180073668
 * 00000001800AAFAF: nop
 * 00000001800AAFB0: mov     r8, rax
 * 00000001800AAFB3: mov     rdx, r13
 * 00000001800AAFB6: lea     rcx, [rbp+9E40h+var_6B0]
 * 00000001800AAFBD: call    sub_18001B518
 * 00000001800AAFC2: nop
 * 00000001800AAFC3: lea     r8, aPixel; "/Pixel"
 * 00000001800AAFCA: mov     rdx, rax
 * 00000001800AAFCD: lea     rcx, [rbp+9E40h+var_5F10]
 * 00000001800AAFD4: call    sub_18001B448
 * 00000001800AAFD9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AAFDE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AAFE3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AAFE8: mov     rcx, rax
 * 00000001800AAFEB: call    sub_18007370C
 * 00000001800AAFF0: nop
 * 00000001800AAFF1: lea     rcx, [rbp+9E40h+var_6B0]
 * 00000001800AAFF8: call    sub_180010F20
 * 00000001800AAFFD: nop
 * 00000001800AAFFE: lea     rcx, [rbp+9E40h+var_650]
 * 00000001800AB005: call    sub_180010F20
 * 00000001800AB00A: nop
 * 00000001800AB00B: lea     rcx, dword_1801C9380
 * 00000001800AB012: call    _Init_thread_footer
 * 00000001800AB017: mov     rax, [rdi+rbx*8]
 * 00000001800AB01B: mov     eax, [r15+rax]
 * 00000001800AB01F: cmp     cs:dword_1801C9384, eax
 * 00000001800AB025: jle     loc_1800AB102
 * 00000001800AB02B: lea     rcx, dword_1801C9384
 * 00000001800AB032: call    sub_18000C8D0
 * 00000001800AB037: cmp     cs:dword_1801C9384, r14d
 * 00000001800AB03E: jnz     loc_1800AB102
 * 00000001800AB044: lea     rax, unk_180158180
 * 00000001800AB04B: mov     qword ptr [rbp+9E40h+var_9970], rax
 * 00000001800AB052: lea     rax, unk_18015EA88
 * 00000001800AB059: mov     qword ptr [rbp+9E40h+var_9970+8], rax
 * 00000001800AB060: movups  xmm7, [rbp+9E40h+var_9970]
 * 00000001800AB067: mov     dword ptr [rbp+9E40h+var_8240], 5
 * 00000001800AB071: mov     dword ptr [rbp+9E40h+var_8240+4], esi
 * 00000001800AB077: movups  xmm6, [rbp+9E40h+var_8240]
 * 00000001800AB07E: call    sub_1800A5D74
 * 00000001800AB083: mov     r8, rax
 * 00000001800AB086: mov     r9d, r12d
 * 00000001800AB089: mov     edx, 130h
 * 00000001800AB08E: lea     rcx, [rbp+9E40h+var_530]
 * 00000001800AB095: call    sub_180073668
 * 00000001800AB09A: nop
 * 00000001800AB09B: mov     r8, rax
 * 00000001800AB09E: mov     rdx, r13
 * 00000001800AB0A1: lea     rcx, [rbp+9E40h+var_590]
 * 00000001800AB0A8: call    sub_18001B518
 * 00000001800AB0AD: nop
 * 00000001800AB0AE: lea     r8, aPixel; "/Pixel"
 * 00000001800AB0B5: mov     rdx, rax
 * 00000001800AB0B8: lea     rcx, [rbp+9E40h+var_5EF0]
 * 00000001800AB0BF: call    sub_18001B448
 * 00000001800AB0C4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB0C9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB0CE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB0D3: mov     rcx, rax
 * 00000001800AB0D6: call    sub_18007370C
 * 00000001800AB0DB: nop
 * 00000001800AB0DC: lea     rcx, [rbp+9E40h+var_590]
 * 00000001800AB0E3: call    sub_180010F20
 * 00000001800AB0E8: nop
 * 00000001800AB0E9: lea     rcx, [rbp+9E40h+var_530]
 * 00000001800AB0F0: call    sub_180010F20
 * 00000001800AB0F5: nop
 * 00000001800AB0F6: lea     rcx, dword_1801C9384
 * 00000001800AB0FD: call    _Init_thread_footer
 * 00000001800AB102: mov     rax, [rdi+rbx*8]
 * 00000001800AB106: mov     eax, [r15+rax]
 * 00000001800AB10A: cmp     cs:dword_1801C9388, eax
 * 00000001800AB110: jle     loc_1800AB1ED
 * 00000001800AB116: lea     rcx, dword_1801C9388
 * 00000001800AB11D: call    sub_18000C8D0
 * 00000001800AB122: cmp     cs:dword_1801C9388, r14d
 * 00000001800AB129: jnz     loc_1800AB1ED
 * 00000001800AB12F: lea     rax, unk_180158180
 * 00000001800AB136: mov     qword ptr [rbp+9E40h+var_9960], rax
 * 00000001800AB13D: lea     rax, unk_18015EA88
 * 00000001800AB144: mov     qword ptr [rbp+9E40h+var_9960+8], rax
 * 00000001800AB14B: movups  xmm7, [rbp+9E40h+var_9960]
 * 00000001800AB152: mov     dword ptr [rbp+9E40h+var_8220], 5
 * 00000001800AB15C: mov     dword ptr [rbp+9E40h+var_8220+4], esi
 * 00000001800AB162: movups  xmm6, [rbp+9E40h+var_8220]
 * 00000001800AB169: call    sub_1800A5D74
 * 00000001800AB16E: mov     r8, rax
 * 00000001800AB171: mov     r9d, r12d
 * 00000001800AB174: mov     edx, 132h
 * 00000001800AB179: lea     rcx, [rbp+9E40h+var_410]
 * 00000001800AB180: call    sub_180073668
 * 00000001800AB185: nop
 * 00000001800AB186: mov     r8, rax
 * 00000001800AB189: mov     rdx, r13
 * 00000001800AB18C: lea     rcx, [rbp+9E40h+var_470]
 * 00000001800AB193: call    sub_18001B518
 * 00000001800AB198: nop
 * 00000001800AB199: lea     r8, aPixel; "/Pixel"
 * 00000001800AB1A0: mov     rdx, rax
 * 00000001800AB1A3: lea     rcx, [rbp+9E40h+var_5ED0]
 * 00000001800AB1AA: call    sub_18001B448
 * 00000001800AB1AF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB1B4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB1B9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB1BE: mov     rcx, rax
 * 00000001800AB1C1: call    sub_18007370C
 * 00000001800AB1C6: nop
 * 00000001800AB1C7: lea     rcx, [rbp+9E40h+var_470]
 * 00000001800AB1CE: call    sub_180010F20
 * 00000001800AB1D3: nop
 * 00000001800AB1D4: lea     rcx, [rbp+9E40h+var_410]
 * 00000001800AB1DB: call    sub_180010F20
 * 00000001800AB1E0: nop
 * 00000001800AB1E1: lea     rcx, dword_1801C9388
 * 00000001800AB1E8: call    _Init_thread_footer
 * 00000001800AB1ED: mov     rax, [rdi+rbx*8]
 * 00000001800AB1F1: mov     eax, [r15+rax]
 * 00000001800AB1F5: cmp     cs:dword_1801C938C, eax
 * 00000001800AB1FB: jle     loc_1800AB2D8
 * 00000001800AB201: lea     rcx, dword_1801C938C
 * 00000001800AB208: call    sub_18000C8D0
 * 00000001800AB20D: cmp     cs:dword_1801C938C, r14d
 * 00000001800AB214: jnz     loc_1800AB2D8
 * 00000001800AB21A: lea     rax, unk_1801516C0
 * 00000001800AB221: mov     qword ptr [rbp+9E40h+var_9950], rax
 * 00000001800AB228: lea     rax, unk_18015817C
 * 00000001800AB22F: mov     qword ptr [rbp+9E40h+var_9950+8], rax
 * 00000001800AB236: movups  xmm7, [rbp+9E40h+var_9950]
 * 00000001800AB23D: mov     dword ptr [rbp+9E40h+var_8200], 5
 * 00000001800AB247: mov     dword ptr [rbp+9E40h+var_8200+4], esi
 * 00000001800AB24D: movups  xmm6, [rbp+9E40h+var_8200]
 * 00000001800AB254: call    sub_1800A5D74
 * 00000001800AB259: mov     r8, rax
 * 00000001800AB25C: mov     r9d, r12d
 * 00000001800AB25F: mov     edx, 138h
 * 00000001800AB264: lea     rcx, [rbp+9E40h+var_2F0]
 * 00000001800AB26B: call    sub_180073668
 * 00000001800AB270: nop
 * 00000001800AB271: mov     r8, rax
 * 00000001800AB274: mov     rdx, r13
 * 00000001800AB277: lea     rcx, [rbp+9E40h+var_350]
 * 00000001800AB27E: call    sub_18001B518
 * 00000001800AB283: nop
 * 00000001800AB284: lea     r8, aPixel; "/Pixel"
 * 00000001800AB28B: mov     rdx, rax
 * 00000001800AB28E: lea     rcx, [rbp+9E40h+var_5EB0]
 * 00000001800AB295: call    sub_18001B448
 * 00000001800AB29A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB29F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB2A4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB2A9: mov     rcx, rax
 * 00000001800AB2AC: call    sub_18007370C
 * 00000001800AB2B1: nop
 * 00000001800AB2B2: lea     rcx, [rbp+9E40h+var_350]
 * 00000001800AB2B9: call    sub_180010F20
 * 00000001800AB2BE: nop
 * 00000001800AB2BF: lea     rcx, [rbp+9E40h+var_2F0]
 * 00000001800AB2C6: call    sub_180010F20
 * 00000001800AB2CB: nop
 * 00000001800AB2CC: lea     rcx, dword_1801C938C
 * 00000001800AB2D3: call    _Init_thread_footer
 * 00000001800AB2D8: mov     rax, [rdi+rbx*8]
 * 00000001800AB2DC: mov     eax, [r15+rax]
 * 00000001800AB2E0: cmp     cs:dword_1801C9390, eax
 * 00000001800AB2E6: jle     loc_1800AB3C3
 * 00000001800AB2EC: lea     rcx, dword_1801C9390
 * 00000001800AB2F3: call    sub_18000C8D0
 * 00000001800AB2F8: cmp     cs:dword_1801C9390, r14d
 * 00000001800AB2FF: jnz     loc_1800AB3C3
 * 00000001800AB305: lea     rax, unk_1801516C0
 * 00000001800AB30C: mov     qword ptr [rbp+9E40h+var_9940], rax
 * 00000001800AB313: lea     rax, unk_18015817C
 * 00000001800AB31A: mov     qword ptr [rbp+9E40h+var_9940+8], rax
 * 00000001800AB321: movups  xmm7, [rbp+9E40h+var_9940]
 * 00000001800AB328: mov     dword ptr [rbp+9E40h+var_81E0], 5
 * 00000001800AB332: mov     dword ptr [rbp+9E40h+var_81E0+4], esi
 * 00000001800AB338: movups  xmm6, [rbp+9E40h+var_81E0]
 * 00000001800AB33F: call    sub_1800A5D74
 * 00000001800AB344: mov     r8, rax
 * 00000001800AB347: mov     r9d, r12d
 * 00000001800AB34A: mov     edx, 13Ah
 * 00000001800AB34F: lea     rcx, [rbp+9E40h+var_1D0]
 * 00000001800AB356: call    sub_180073668
 * 00000001800AB35B: nop
 * 00000001800AB35C: mov     r8, rax
 * 00000001800AB35F: mov     rdx, r13
 * 00000001800AB362: lea     rcx, [rbp+9E40h+var_230]
 * 00000001800AB369: call    sub_18001B518
 * 00000001800AB36E: nop
 * 00000001800AB36F: lea     r8, aPixel; "/Pixel"
 * 00000001800AB376: mov     rdx, rax
 * 00000001800AB379: lea     rcx, [rbp+9E40h+var_5E90]
 * 00000001800AB380: call    sub_18001B448
 * 00000001800AB385: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB38A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB38F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB394: mov     rcx, rax
 * 00000001800AB397: call    sub_18007370C
 * 00000001800AB39C: nop
 * 00000001800AB39D: lea     rcx, [rbp+9E40h+var_230]
 * 00000001800AB3A4: call    sub_180010F20
 * 00000001800AB3A9: nop
 * 00000001800AB3AA: lea     rcx, [rbp+9E40h+var_1D0]
 * 00000001800AB3B1: call    sub_180010F20
 * 00000001800AB3B6: nop
 * 00000001800AB3B7: lea     rcx, dword_1801C9390
 * 00000001800AB3BE: call    _Init_thread_footer
 * 00000001800AB3C3: mov     rax, [rdi+rbx*8]
 * 00000001800AB3C7: mov     eax, [r15+rax]
 * 00000001800AB3CB: cmp     cs:dword_1801C9394, eax
 * 00000001800AB3D1: jle     loc_1800AB4AE
 * 00000001800AB3D7: lea     rcx, dword_1801C9394
 * 00000001800AB3DE: call    sub_18000C8D0
 * 00000001800AB3E3: cmp     cs:dword_1801C9394, r14d
 * 00000001800AB3EA: jnz     loc_1800AB4AE
 * 00000001800AB3F0: lea     rax, unk_180176460
 * 00000001800AB3F7: mov     qword ptr [rbp+9E40h+var_9930], rax
 * 00000001800AB3FE: lea     rax, unk_18017CB8C
 * 00000001800AB405: mov     qword ptr [rbp+9E40h+var_9930+8], rax
 * 00000001800AB40C: movups  xmm7, [rbp+9E40h+var_9930]
 * 00000001800AB413: mov     dword ptr [rbp+9E40h+var_81C0], 5
 * 00000001800AB41D: mov     dword ptr [rbp+9E40h+var_81C0+4], esi
 * 00000001800AB423: movups  xmm6, [rbp+9E40h+var_81C0]
 * 00000001800AB42A: call    sub_1800A5D74
 * 00000001800AB42F: mov     r8, rax
 * 00000001800AB432: mov     r9d, r12d
 * 00000001800AB435: mov     edx, 140h
 * 00000001800AB43A: lea     rcx, [rbp+9E40h+var_B0]
 * 00000001800AB441: call    sub_180073668
 * 00000001800AB446: nop
 * 00000001800AB447: mov     r8, rax
 * 00000001800AB44A: mov     rdx, r13
 * 00000001800AB44D: lea     rcx, [rbp+9E40h+var_110]
 * 00000001800AB454: call    sub_18001B518
 * 00000001800AB459: nop
 * 00000001800AB45A: lea     r8, aPixel; "/Pixel"
 * 00000001800AB461: mov     rdx, rax
 * 00000001800AB464: lea     rcx, [rbp+9E40h+var_5E70]
 * 00000001800AB46B: call    sub_18001B448
 * 00000001800AB470: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB475: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB47A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB47F: mov     rcx, rax
 * 00000001800AB482: call    sub_18007370C
 * 00000001800AB487: nop
 * 00000001800AB488: lea     rcx, [rbp+9E40h+var_110]
 * 00000001800AB48F: call    sub_180010F20
 * 00000001800AB494: nop
 * 00000001800AB495: lea     rcx, [rbp+9E40h+var_B0]
 * 00000001800AB49C: call    sub_180010F20
 * 00000001800AB4A1: nop
 * 00000001800AB4A2: lea     rcx, dword_1801C9394
 * 00000001800AB4A9: call    _Init_thread_footer
 * 00000001800AB4AE: mov     rax, [rdi+rbx*8]
 * 00000001800AB4B2: mov     eax, [r15+rax]
 * 00000001800AB4B6: cmp     cs:dword_1801C9398, eax
 * 00000001800AB4BC: jle     loc_1800AB599
 * 00000001800AB4C2: lea     rcx, dword_1801C9398
 * 00000001800AB4C9: call    sub_18000C8D0
 * 00000001800AB4CE: cmp     cs:dword_1801C9398, r14d
 * 00000001800AB4D5: jnz     loc_1800AB599
 * 00000001800AB4DB: lea     rax, unk_180176460
 * 00000001800AB4E2: mov     qword ptr [rbp+9E40h+var_9920], rax
 * 00000001800AB4E9: lea     rax, unk_18017CB8C
 * 00000001800AB4F0: mov     qword ptr [rbp+9E40h+var_9920+8], rax
 * 00000001800AB4F7: movups  xmm7, [rbp+9E40h+var_9920]
 * 00000001800AB4FE: mov     dword ptr [rbp+9E40h+var_81A0], 5
 * 00000001800AB508: mov     dword ptr [rbp+9E40h+var_81A0+4], esi
 * 00000001800AB50E: movups  xmm6, [rbp+9E40h+var_81A0]
 * 00000001800AB515: call    sub_1800A5D74
 * 00000001800AB51A: mov     r8, rax
 * 00000001800AB51D: mov     r9d, r12d
 * 00000001800AB520: mov     edx, 142h
 * 00000001800AB525: lea     rcx, [rbp+9E40h+var_4690]
 * 00000001800AB52C: call    sub_180073668
 * 00000001800AB531: nop
 * 00000001800AB532: mov     r8, rax
 * 00000001800AB535: mov     rdx, r13
 * 00000001800AB538: lea     rcx, [rbp+9E40h+var_46B0]
 * 00000001800AB53F: call    sub_18001B518
 * 00000001800AB544: nop
 * 00000001800AB545: lea     r8, aPixel; "/Pixel"
 * 00000001800AB54C: mov     rdx, rax
 * 00000001800AB54F: lea     rcx, [rbp+9E40h+var_5E50]
 * 00000001800AB556: call    sub_18001B448
 * 00000001800AB55B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB560: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB565: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB56A: mov     rcx, rax
 * 00000001800AB56D: call    sub_18007370C
 * 00000001800AB572: nop
 * 00000001800AB573: lea     rcx, [rbp+9E40h+var_46B0]
 * 00000001800AB57A: call    sub_180010F20
 * 00000001800AB57F: nop
 * 00000001800AB580: lea     rcx, [rbp+9E40h+var_4690]
 * 00000001800AB587: call    sub_180010F20
 * 00000001800AB58C: nop
 * 00000001800AB58D: lea     rcx, dword_1801C9398
 * 00000001800AB594: call    _Init_thread_footer
 * 00000001800AB599: mov     rax, [rdi+rbx*8]
 * 00000001800AB59D: mov     eax, [r15+rax]
 * 00000001800AB5A1: cmp     cs:dword_1801C939C, eax
 * 00000001800AB5A7: jle     loc_1800AB684
 * 00000001800AB5AD: lea     rcx, dword_1801C939C
 * 00000001800AB5B4: call    sub_18000C8D0
 * 00000001800AB5B9: cmp     cs:dword_1801C939C, r14d
 * 00000001800AB5C0: jnz     loc_1800AB684
 * 00000001800AB5C6: lea     rax, unk_180147920
 * 00000001800AB5CD: mov     qword ptr [rbp+9E40h+var_9910], rax
 * 00000001800AB5D4: lea     rax, unk_18014E1DC
 * 00000001800AB5DB: mov     qword ptr [rbp+9E40h+var_9910+8], rax
 * 00000001800AB5E2: movups  xmm7, [rbp+9E40h+var_9910]
 * 00000001800AB5E9: mov     dword ptr [rbp+9E40h+var_8180], 5
 * 00000001800AB5F3: mov     dword ptr [rbp+9E40h+var_8180+4], esi
 * 00000001800AB5F9: movups  xmm6, [rbp+9E40h+var_8180]
 * 00000001800AB600: call    sub_1800A5D74
 * 00000001800AB605: mov     r8, rax
 * 00000001800AB608: mov     r9d, r12d
 * 00000001800AB60B: mov     edx, 148h
 * 00000001800AB610: lea     rcx, [rbp+9E40h+var_4630]
 * 00000001800AB617: call    sub_180073668
 * 00000001800AB61C: nop
 * 00000001800AB61D: mov     r8, rax
 * 00000001800AB620: mov     rdx, r13
 * 00000001800AB623: lea     rcx, [rbp+9E40h+var_4650]
 * 00000001800AB62A: call    sub_18001B518
 * 00000001800AB62F: nop
 * 00000001800AB630: lea     r8, aPixel; "/Pixel"
 * 00000001800AB637: mov     rdx, rax
 * 00000001800AB63A: lea     rcx, [rbp+9E40h+var_5E30]
 * 00000001800AB641: call    sub_18001B448
 * 00000001800AB646: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB64B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB650: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB655: mov     rcx, rax
 * 00000001800AB658: call    sub_18007370C
 * 00000001800AB65D: nop
 * 00000001800AB65E: lea     rcx, [rbp+9E40h+var_4650]
 * 00000001800AB665: call    sub_180010F20
 * 00000001800AB66A: nop
 * 00000001800AB66B: lea     rcx, [rbp+9E40h+var_4630]
 * 00000001800AB672: call    sub_180010F20
 * 00000001800AB677: nop
 * 00000001800AB678: lea     rcx, dword_1801C939C
 * 00000001800AB67F: call    _Init_thread_footer
 * 00000001800AB684: mov     rax, [rdi+rbx*8]
 * 00000001800AB688: mov     eax, [r15+rax]
 * 00000001800AB68C: cmp     cs:dword_1801C93A0, eax
 * 00000001800AB692: jle     loc_1800AB76F
 * 00000001800AB698: lea     rcx, dword_1801C93A0
 * 00000001800AB69F: call    sub_18000C8D0
 * 00000001800AB6A4: cmp     cs:dword_1801C93A0, r14d
 * 00000001800AB6AB: jnz     loc_1800AB76F
 * 00000001800AB6B1: lea     rax, unk_180147920
 * 00000001800AB6B8: mov     qword ptr [rbp+9E40h+var_9900], rax
 * 00000001800AB6BF: lea     rax, unk_18014E1DC
 * 00000001800AB6C6: mov     qword ptr [rbp+9E40h+var_9900+8], rax
 * 00000001800AB6CD: movups  xmm7, [rbp+9E40h+var_9900]
 * 00000001800AB6D4: mov     dword ptr [rbp+9E40h+var_8160], 5
 * 00000001800AB6DE: mov     dword ptr [rbp+9E40h+var_8160+4], esi
 * 00000001800AB6E4: movups  xmm6, [rbp+9E40h+var_8160]
 * 00000001800AB6EB: call    sub_1800A5D74
 * 00000001800AB6F0: mov     r8, rax
 * 00000001800AB6F3: mov     r9d, r12d
 * 00000001800AB6F6: mov     edx, 14Ah
 * 00000001800AB6FB: lea     rcx, [rbp+9E40h+var_45D0]
 * 00000001800AB702: call    sub_180073668
 * 00000001800AB707: nop
 * 00000001800AB708: mov     r8, rax
 * 00000001800AB70B: mov     rdx, r13
 * 00000001800AB70E: lea     rcx, [rbp+9E40h+var_45F0]
 * 00000001800AB715: call    sub_18001B518
 * 00000001800AB71A: nop
 * 00000001800AB71B: lea     r8, aPixel; "/Pixel"
 * 00000001800AB722: mov     rdx, rax
 * 00000001800AB725: lea     rcx, [rbp+9E40h+var_5E10]
 * 00000001800AB72C: call    sub_18001B448
 * 00000001800AB731: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB736: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB73B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB740: mov     rcx, rax
 * 00000001800AB743: call    sub_18007370C
 * 00000001800AB748: nop
 * 00000001800AB749: lea     rcx, [rbp+9E40h+var_45F0]
 * 00000001800AB750: call    sub_180010F20
 * 00000001800AB755: nop
 * 00000001800AB756: lea     rcx, [rbp+9E40h+var_45D0]
 * 00000001800AB75D: call    sub_180010F20
 * 00000001800AB762: nop
 * 00000001800AB763: lea     rcx, dword_1801C93A0
 * 00000001800AB76A: call    _Init_thread_footer
 * 00000001800AB76F: mov     rax, [rdi+rbx*8]
 * 00000001800AB773: mov     eax, [r15+rax]
 * 00000001800AB777: cmp     cs:dword_1801C93A4, eax
 * 00000001800AB77D: jle     loc_1800AB85A
 * 00000001800AB783: lea     rcx, dword_1801C93A4
 * 00000001800AB78A: call    sub_18000C8D0
 * 00000001800AB78F: cmp     cs:dword_1801C93A4, r14d
 * 00000001800AB796: jnz     loc_1800AB85A
 * 00000001800AB79C: lea     rax, unk_180158180
 * 00000001800AB7A3: mov     qword ptr [rbp+9E40h+var_98F0], rax
 * 00000001800AB7AA: lea     rax, unk_18015EA88
 * 00000001800AB7B1: mov     qword ptr [rbp+9E40h+var_98F0+8], rax
 * 00000001800AB7B8: movups  xmm7, [rbp+9E40h+var_98F0]
 * 00000001800AB7BF: mov     dword ptr [rbp+9E40h+var_8140], 5
 * 00000001800AB7C9: mov     dword ptr [rbp+9E40h+var_8140+4], esi
 * 00000001800AB7CF: movups  xmm6, [rbp+9E40h+var_8140]
 * 00000001800AB7D6: call    sub_1800A5D74
 * 00000001800AB7DB: mov     r8, rax
 * 00000001800AB7DE: mov     r9d, r12d
 * 00000001800AB7E1: mov     edx, 150h
 * 00000001800AB7E6: lea     rcx, [rbp+9E40h+var_4570]
 * 00000001800AB7ED: call    sub_180073668
 * 00000001800AB7F2: nop
 * 00000001800AB7F3: mov     r8, rax
 * 00000001800AB7F6: mov     rdx, r13
 * 00000001800AB7F9: lea     rcx, [rbp+9E40h+var_4590]
 * 00000001800AB800: call    sub_18001B518
 * 00000001800AB805: nop
 * 00000001800AB806: lea     r8, aPixel; "/Pixel"
 * 00000001800AB80D: mov     rdx, rax
 * 00000001800AB810: lea     rcx, [rbp+9E40h+var_5DF0]
 * 00000001800AB817: call    sub_18001B448
 * 00000001800AB81C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB821: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB826: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB82B: mov     rcx, rax
 * 00000001800AB82E: call    sub_18007370C
 * 00000001800AB833: nop
 * 00000001800AB834: lea     rcx, [rbp+9E40h+var_4590]
 * 00000001800AB83B: call    sub_180010F20
 * 00000001800AB840: nop
 * 00000001800AB841: lea     rcx, [rbp+9E40h+var_4570]
 * 00000001800AB848: call    sub_180010F20
 * 00000001800AB84D: nop
 * 00000001800AB84E: lea     rcx, dword_1801C93A4
 * 00000001800AB855: call    _Init_thread_footer
 * 00000001800AB85A: mov     rax, [rdi+rbx*8]
 * 00000001800AB85E: mov     eax, [r15+rax]
 * 00000001800AB862: cmp     cs:dword_1801C93A8, eax
 * 00000001800AB868: jle     loc_1800AB945
 * 00000001800AB86E: lea     rcx, dword_1801C93A8
 * 00000001800AB875: call    sub_18000C8D0
 * 00000001800AB87A: cmp     cs:dword_1801C93A8, r14d
 * 00000001800AB881: jnz     loc_1800AB945
 * 00000001800AB887: lea     rax, unk_180158180
 * 00000001800AB88E: mov     qword ptr [rbp+9E40h+var_98E0], rax
 * 00000001800AB895: lea     rax, unk_18015EA88
 * 00000001800AB89C: mov     qword ptr [rbp+9E40h+var_98E0+8], rax
 * 00000001800AB8A3: movups  xmm7, [rbp+9E40h+var_98E0]
 * 00000001800AB8AA: mov     dword ptr [rbp+9E40h+var_8120], 5
 * 00000001800AB8B4: mov     dword ptr [rbp+9E40h+var_8120+4], esi
 * 00000001800AB8BA: movups  xmm6, [rbp+9E40h+var_8120]
 * 00000001800AB8C1: call    sub_1800A5D74
 * 00000001800AB8C6: mov     r8, rax
 * 00000001800AB8C9: mov     r9d, r12d
 * 00000001800AB8CC: mov     edx, 152h
 * 00000001800AB8D1: lea     rcx, [rbp+9E40h+var_4510]
 * 00000001800AB8D8: call    sub_180073668
 * 00000001800AB8DD: nop
 * 00000001800AB8DE: mov     r8, rax
 * 00000001800AB8E1: mov     rdx, r13
 * 00000001800AB8E4: lea     rcx, [rbp+9E40h+var_4530]
 * 00000001800AB8EB: call    sub_18001B518
 * 00000001800AB8F0: nop
 * 00000001800AB8F1: lea     r8, aPixel; "/Pixel"
 * 00000001800AB8F8: mov     rdx, rax
 * 00000001800AB8FB: lea     rcx, [rbp+9E40h+var_5DD0]
 * 00000001800AB902: call    sub_18001B448
 * 00000001800AB907: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB90C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB911: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AB916: mov     rcx, rax
 * 00000001800AB919: call    sub_18007370C
 * 00000001800AB91E: nop
 * 00000001800AB91F: lea     rcx, [rbp+9E40h+var_4530]
 * 00000001800AB926: call    sub_180010F20
 * 00000001800AB92B: nop
 * 00000001800AB92C: lea     rcx, [rbp+9E40h+var_4510]
 * 00000001800AB933: call    sub_180010F20
 * 00000001800AB938: nop
 * 00000001800AB939: lea     rcx, dword_1801C93A8
 * 00000001800AB940: call    _Init_thread_footer
 * 00000001800AB945: mov     rax, [rdi+rbx*8]
 * 00000001800AB949: mov     eax, [r15+rax]
 * 00000001800AB94D: cmp     cs:dword_1801C93AC, eax
 * 00000001800AB953: jle     loc_1800ABA30
 * 00000001800AB959: lea     rcx, dword_1801C93AC
 * 00000001800AB960: call    sub_18000C8D0
 * 00000001800AB965: cmp     cs:dword_1801C93AC, r14d
 * 00000001800AB96C: jnz     loc_1800ABA30
 * 00000001800AB972: lea     rax, unk_1801516C0
 * 00000001800AB979: mov     qword ptr [rbp+9E40h+var_98D0], rax
 * 00000001800AB980: lea     rax, unk_18015817C
 * 00000001800AB987: mov     qword ptr [rbp+9E40h+var_98D0+8], rax
 * 00000001800AB98E: movups  xmm7, [rbp+9E40h+var_98D0]
 * 00000001800AB995: mov     dword ptr [rbp+9E40h+var_8100], 5
 * 00000001800AB99F: mov     dword ptr [rbp+9E40h+var_8100+4], esi
 * 00000001800AB9A5: movups  xmm6, [rbp+9E40h+var_8100]
 * 00000001800AB9AC: call    sub_1800A5D74
 * 00000001800AB9B1: mov     r8, rax
 * 00000001800AB9B4: mov     r9d, r12d
 * 00000001800AB9B7: mov     edx, 158h
 * 00000001800AB9BC: lea     rcx, [rbp+9E40h+var_44B0]
 * 00000001800AB9C3: call    sub_180073668
 * 00000001800AB9C8: nop
 * 00000001800AB9C9: mov     r8, rax
 * 00000001800AB9CC: mov     rdx, r13
 * 00000001800AB9CF: lea     rcx, [rbp+9E40h+var_44D0]
 * 00000001800AB9D6: call    sub_18001B518
 * 00000001800AB9DB: nop
 * 00000001800AB9DC: lea     r8, aPixel; "/Pixel"
 * 00000001800AB9E3: mov     rdx, rax
 * 00000001800AB9E6: lea     rcx, [rbp+9E40h+var_5DB0]
 * 00000001800AB9ED: call    sub_18001B448
 * 00000001800AB9F2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AB9F7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AB9FC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABA01: mov     rcx, rax
 * 00000001800ABA04: call    sub_18007370C
 * 00000001800ABA09: nop
 * 00000001800ABA0A: lea     rcx, [rbp+9E40h+var_44D0]
 * 00000001800ABA11: call    sub_180010F20
 * 00000001800ABA16: nop
 * 00000001800ABA17: lea     rcx, [rbp+9E40h+var_44B0]
 * 00000001800ABA1E: call    sub_180010F20
 * 00000001800ABA23: nop
 * 00000001800ABA24: lea     rcx, dword_1801C93AC
 * 00000001800ABA2B: call    _Init_thread_footer
 * 00000001800ABA30: mov     rax, [rdi+rbx*8]
 * 00000001800ABA34: mov     eax, [r15+rax]
 * 00000001800ABA38: cmp     cs:dword_1801C93B0, eax
 * 00000001800ABA3E: jle     loc_1800ABB1B
 * 00000001800ABA44: lea     rcx, dword_1801C93B0
 * 00000001800ABA4B: call    sub_18000C8D0
 * 00000001800ABA50: cmp     cs:dword_1801C93B0, r14d
 * 00000001800ABA57: jnz     loc_1800ABB1B
 * 00000001800ABA5D: lea     rax, unk_1801516C0
 * 00000001800ABA64: mov     qword ptr [rbp+9E40h+var_98C0], rax
 * 00000001800ABA6B: lea     rax, unk_18015817C
 * 00000001800ABA72: mov     qword ptr [rbp+9E40h+var_98C0+8], rax
 * 00000001800ABA79: movups  xmm7, [rbp+9E40h+var_98C0]
 * 00000001800ABA80: mov     dword ptr [rbp+9E40h+var_80E0], 5
 * 00000001800ABA8A: mov     dword ptr [rbp+9E40h+var_80E0+4], esi
 * 00000001800ABA90: movups  xmm6, [rbp+9E40h+var_80E0]
 * 00000001800ABA97: call    sub_1800A5D74
 * 00000001800ABA9C: mov     r8, rax
 * 00000001800ABA9F: mov     r9d, r12d
 * 00000001800ABAA2: mov     edx, 15Ah
 * 00000001800ABAA7: lea     rcx, [rbp+9E40h+var_4450]
 * 00000001800ABAAE: call    sub_180073668
 * 00000001800ABAB3: nop
 * 00000001800ABAB4: mov     r8, rax
 * 00000001800ABAB7: mov     rdx, r13
 * 00000001800ABABA: lea     rcx, [rbp+9E40h+var_4470]
 * 00000001800ABAC1: call    sub_18001B518
 * 00000001800ABAC6: nop
 * 00000001800ABAC7: lea     r8, aPixel; "/Pixel"
 * 00000001800ABACE: mov     rdx, rax
 * 00000001800ABAD1: lea     rcx, [rbp+9E40h+var_5D90]
 * 00000001800ABAD8: call    sub_18001B448
 * 00000001800ABADD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABAE2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABAE7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABAEC: mov     rcx, rax
 * 00000001800ABAEF: call    sub_18007370C
 * 00000001800ABAF4: nop
 * 00000001800ABAF5: lea     rcx, [rbp+9E40h+var_4470]
 * 00000001800ABAFC: call    sub_180010F20
 * 00000001800ABB01: nop
 * 00000001800ABB02: lea     rcx, [rbp+9E40h+var_4450]
 * 00000001800ABB09: call    sub_180010F20
 * 00000001800ABB0E: nop
 * 00000001800ABB0F: lea     rcx, dword_1801C93B0
 * 00000001800ABB16: call    _Init_thread_footer
 * 00000001800ABB1B: mov     rax, [rdi+rbx*8]
 * 00000001800ABB1F: mov     eax, [r15+rax]
 * 00000001800ABB23: cmp     cs:dword_1801C93B4, eax
 * 00000001800ABB29: jle     loc_1800ABC06
 * 00000001800ABB2F: lea     rcx, dword_1801C93B4
 * 00000001800ABB36: call    sub_18000C8D0
 * 00000001800ABB3B: cmp     cs:dword_1801C93B4, r14d
 * 00000001800ABB42: jnz     loc_1800ABC06
 * 00000001800ABB48: lea     rax, unk_180176460
 * 00000001800ABB4F: mov     qword ptr [rbp+9E40h+var_98B0], rax
 * 00000001800ABB56: lea     rax, unk_18017CB8C
 * 00000001800ABB5D: mov     qword ptr [rbp+9E40h+var_98B0+8], rax
 * 00000001800ABB64: movups  xmm7, [rbp+9E40h+var_98B0]
 * 00000001800ABB6B: mov     dword ptr [rbp+9E40h+var_80C0], 5
 * 00000001800ABB75: mov     dword ptr [rbp+9E40h+var_80C0+4], esi
 * 00000001800ABB7B: movups  xmm6, [rbp+9E40h+var_80C0]
 * 00000001800ABB82: call    sub_1800A5D74
 * 00000001800ABB87: mov     r8, rax
 * 00000001800ABB8A: mov     r9d, r12d
 * 00000001800ABB8D: mov     edx, 160h
 * 00000001800ABB92: lea     rcx, [rbp+9E40h+var_43F0]
 * 00000001800ABB99: call    sub_180073668
 * 00000001800ABB9E: nop
 * 00000001800ABB9F: mov     r8, rax
 * 00000001800ABBA2: mov     rdx, r13
 * 00000001800ABBA5: lea     rcx, [rbp+9E40h+var_4410]
 * 00000001800ABBAC: call    sub_18001B518
 * 00000001800ABBB1: nop
 * 00000001800ABBB2: lea     r8, aPixel; "/Pixel"
 * 00000001800ABBB9: mov     rdx, rax
 * 00000001800ABBBC: lea     rcx, [rbp+9E40h+var_5D70]
 * 00000001800ABBC3: call    sub_18001B448
 * 00000001800ABBC8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABBCD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABBD2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABBD7: mov     rcx, rax
 * 00000001800ABBDA: call    sub_18007370C
 * 00000001800ABBDF: nop
 * 00000001800ABBE0: lea     rcx, [rbp+9E40h+var_4410]
 * 00000001800ABBE7: call    sub_180010F20
 * 00000001800ABBEC: nop
 * 00000001800ABBED: lea     rcx, [rbp+9E40h+var_43F0]
 * 00000001800ABBF4: call    sub_180010F20
 * 00000001800ABBF9: nop
 * 00000001800ABBFA: lea     rcx, dword_1801C93B4
 * 00000001800ABC01: call    _Init_thread_footer
 * 00000001800ABC06: mov     rax, [rdi+rbx*8]
 * 00000001800ABC0A: mov     eax, [r15+rax]
 * 00000001800ABC0E: cmp     cs:dword_1801C93B8, eax
 * 00000001800ABC14: jle     loc_1800ABCF1
 * 00000001800ABC1A: lea     rcx, dword_1801C93B8
 * 00000001800ABC21: call    sub_18000C8D0
 * 00000001800ABC26: cmp     cs:dword_1801C93B8, r14d
 * 00000001800ABC2D: jnz     loc_1800ABCF1
 * 00000001800ABC33: lea     rax, unk_180176460
 * 00000001800ABC3A: mov     qword ptr [rbp+9E40h+var_98A0], rax
 * 00000001800ABC41: lea     rax, unk_18017CB8C
 * 00000001800ABC48: mov     qword ptr [rbp+9E40h+var_98A0+8], rax
 * 00000001800ABC4F: movups  xmm7, [rbp+9E40h+var_98A0]
 * 00000001800ABC56: mov     dword ptr [rbp+9E40h+var_80A0], 5
 * 00000001800ABC60: mov     dword ptr [rbp+9E40h+var_80A0+4], esi
 * 00000001800ABC66: movups  xmm6, [rbp+9E40h+var_80A0]
 * 00000001800ABC6D: call    sub_1800A5D74
 * 00000001800ABC72: mov     r8, rax
 * 00000001800ABC75: mov     r9d, r12d
 * 00000001800ABC78: mov     edx, 162h
 * 00000001800ABC7D: lea     rcx, [rbp+9E40h+var_4390]
 * 00000001800ABC84: call    sub_180073668
 * 00000001800ABC89: nop
 * 00000001800ABC8A: mov     r8, rax
 * 00000001800ABC8D: mov     rdx, r13
 * 00000001800ABC90: lea     rcx, [rbp+9E40h+var_43B0]
 * 00000001800ABC97: call    sub_18001B518
 * 00000001800ABC9C: nop
 * 00000001800ABC9D: lea     r8, aPixel; "/Pixel"
 * 00000001800ABCA4: mov     rdx, rax
 * 00000001800ABCA7: lea     rcx, [rbp+9E40h+var_5D50]
 * 00000001800ABCAE: call    sub_18001B448
 * 00000001800ABCB3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABCB8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABCBD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABCC2: mov     rcx, rax
 * 00000001800ABCC5: call    sub_18007370C
 * 00000001800ABCCA: nop
 * 00000001800ABCCB: lea     rcx, [rbp+9E40h+var_43B0]
 * 00000001800ABCD2: call    sub_180010F20
 * 00000001800ABCD7: nop
 * 00000001800ABCD8: lea     rcx, [rbp+9E40h+var_4390]
 * 00000001800ABCDF: call    sub_180010F20
 * 00000001800ABCE4: nop
 * 00000001800ABCE5: lea     rcx, dword_1801C93B8
 * 00000001800ABCEC: call    _Init_thread_footer
 * 00000001800ABCF1: mov     rax, [rdi+rbx*8]
 * 00000001800ABCF5: mov     eax, [r15+rax]
 * 00000001800ABCF9: cmp     cs:dword_1801C93BC, eax
 * 00000001800ABCFF: jle     loc_1800ABDDC
 * 00000001800ABD05: lea     rcx, dword_1801C93BC
 * 00000001800ABD0C: call    sub_18000C8D0
 * 00000001800ABD11: cmp     cs:dword_1801C93BC, r14d
 * 00000001800ABD18: jnz     loc_1800ABDDC
 * 00000001800ABD1E: lea     rax, unk_180147920
 * 00000001800ABD25: mov     qword ptr [rbp+9E40h+var_9890], rax
 * 00000001800ABD2C: lea     rax, unk_18014E1DC
 * 00000001800ABD33: mov     qword ptr [rbp+9E40h+var_9890+8], rax
 * 00000001800ABD3A: movups  xmm7, [rbp+9E40h+var_9890]
 * 00000001800ABD41: mov     dword ptr [rbp+9E40h+var_8080], 5
 * 00000001800ABD4B: mov     dword ptr [rbp+9E40h+var_8080+4], esi
 * 00000001800ABD51: movups  xmm6, [rbp+9E40h+var_8080]
 * 00000001800ABD58: call    sub_1800A5D74
 * 00000001800ABD5D: mov     r8, rax
 * 00000001800ABD60: mov     r9d, r12d
 * 00000001800ABD63: mov     edx, 168h
 * 00000001800ABD68: lea     rcx, [rbp+9E40h+var_4330]
 * 00000001800ABD6F: call    sub_180073668
 * 00000001800ABD74: nop
 * 00000001800ABD75: mov     r8, rax
 * 00000001800ABD78: mov     rdx, r13
 * 00000001800ABD7B: lea     rcx, [rbp+9E40h+var_4350]
 * 00000001800ABD82: call    sub_18001B518
 * 00000001800ABD87: nop
 * 00000001800ABD88: lea     r8, aPixel; "/Pixel"
 * 00000001800ABD8F: mov     rdx, rax
 * 00000001800ABD92: lea     rcx, [rbp+9E40h+var_5D30]
 * 00000001800ABD99: call    sub_18001B448
 * 00000001800ABD9E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABDA3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABDA8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABDAD: mov     rcx, rax
 * 00000001800ABDB0: call    sub_18007370C
 * 00000001800ABDB5: nop
 * 00000001800ABDB6: lea     rcx, [rbp+9E40h+var_4350]
 * 00000001800ABDBD: call    sub_180010F20
 * 00000001800ABDC2: nop
 * 00000001800ABDC3: lea     rcx, [rbp+9E40h+var_4330]
 * 00000001800ABDCA: call    sub_180010F20
 * 00000001800ABDCF: nop
 * 00000001800ABDD0: lea     rcx, dword_1801C93BC
 * 00000001800ABDD7: call    _Init_thread_footer
 * 00000001800ABDDC: mov     rax, [rdi+rbx*8]
 * 00000001800ABDE0: mov     eax, [r15+rax]
 * 00000001800ABDE4: cmp     cs:dword_1801C93C0, eax
 * 00000001800ABDEA: jle     loc_1800ABEC7
 * 00000001800ABDF0: lea     rcx, dword_1801C93C0
 * 00000001800ABDF7: call    sub_18000C8D0
 * 00000001800ABDFC: cmp     cs:dword_1801C93C0, r14d
 * 00000001800ABE03: jnz     loc_1800ABEC7
 * 00000001800ABE09: lea     rax, unk_180147920
 * 00000001800ABE10: mov     qword ptr [rbp+9E40h+var_9880], rax
 * 00000001800ABE17: lea     rax, unk_18014E1DC
 * 00000001800ABE1E: mov     qword ptr [rbp+9E40h+var_9880+8], rax
 * 00000001800ABE25: movups  xmm7, [rbp+9E40h+var_9880]
 * 00000001800ABE2C: mov     dword ptr [rbp+9E40h+var_8060], 5
 * 00000001800ABE36: mov     dword ptr [rbp+9E40h+var_8060+4], esi
 * 00000001800ABE3C: movups  xmm6, [rbp+9E40h+var_8060]
 * 00000001800ABE43: call    sub_1800A5D74
 * 00000001800ABE48: mov     r8, rax
 * 00000001800ABE4B: mov     r9d, r12d
 * 00000001800ABE4E: mov     edx, 16Ah
 * 00000001800ABE53: lea     rcx, [rbp+9E40h+var_42D0]
 * 00000001800ABE5A: call    sub_180073668
 * 00000001800ABE5F: nop
 * 00000001800ABE60: mov     r8, rax
 * 00000001800ABE63: mov     rdx, r13
 * 00000001800ABE66: lea     rcx, [rbp+9E40h+var_42F0]
 * 00000001800ABE6D: call    sub_18001B518
 * 00000001800ABE72: nop
 * 00000001800ABE73: lea     r8, aPixel; "/Pixel"
 * 00000001800ABE7A: mov     rdx, rax
 * 00000001800ABE7D: lea     rcx, [rbp+9E40h+var_5D10]
 * 00000001800ABE84: call    sub_18001B448
 * 00000001800ABE89: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABE8E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABE93: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABE98: mov     rcx, rax
 * 00000001800ABE9B: call    sub_18007370C
 * 00000001800ABEA0: nop
 * 00000001800ABEA1: lea     rcx, [rbp+9E40h+var_42F0]
 * 00000001800ABEA8: call    sub_180010F20
 * 00000001800ABEAD: nop
 * 00000001800ABEAE: lea     rcx, [rbp+9E40h+var_42D0]
 * 00000001800ABEB5: call    sub_180010F20
 * 00000001800ABEBA: nop
 * 00000001800ABEBB: lea     rcx, dword_1801C93C0
 * 00000001800ABEC2: call    _Init_thread_footer
 * 00000001800ABEC7: mov     rax, [rdi+rbx*8]
 * 00000001800ABECB: mov     eax, [r15+rax]
 * 00000001800ABECF: cmp     cs:dword_1801C93C4, eax
 * 00000001800ABED5: jle     loc_1800ABFB2
 * 00000001800ABEDB: lea     rcx, dword_1801C93C4
 * 00000001800ABEE2: call    sub_18000C8D0
 * 00000001800ABEE7: cmp     cs:dword_1801C93C4, r14d
 * 00000001800ABEEE: jnz     loc_1800ABFB2
 * 00000001800ABEF4: lea     rax, unk_180158180
 * 00000001800ABEFB: mov     qword ptr [rbp+9E40h+var_9870], rax
 * 00000001800ABF02: lea     rax, unk_18015EA88
 * 00000001800ABF09: mov     qword ptr [rbp+9E40h+var_9870+8], rax
 * 00000001800ABF10: movups  xmm7, [rbp+9E40h+var_9870]
 * 00000001800ABF17: mov     dword ptr [rbp+9E40h+var_8040], 5
 * 00000001800ABF21: mov     dword ptr [rbp+9E40h+var_8040+4], esi
 * 00000001800ABF27: movups  xmm6, [rbp+9E40h+var_8040]
 * 00000001800ABF2E: call    sub_1800A5D74
 * 00000001800ABF33: mov     r8, rax
 * 00000001800ABF36: mov     r9d, r12d
 * 00000001800ABF39: mov     edx, 170h
 * 00000001800ABF3E: lea     rcx, [rbp+9E40h+var_4270]
 * 00000001800ABF45: call    sub_180073668
 * 00000001800ABF4A: nop
 * 00000001800ABF4B: mov     r8, rax
 * 00000001800ABF4E: mov     rdx, r13
 * 00000001800ABF51: lea     rcx, [rbp+9E40h+var_4290]
 * 00000001800ABF58: call    sub_18001B518
 * 00000001800ABF5D: nop
 * 00000001800ABF5E: lea     r8, aPixel; "/Pixel"
 * 00000001800ABF65: mov     rdx, rax
 * 00000001800ABF68: lea     rcx, [rbp+9E40h+var_5CF0]
 * 00000001800ABF6F: call    sub_18001B448
 * 00000001800ABF74: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ABF79: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ABF7E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ABF83: mov     rcx, rax
 * 00000001800ABF86: call    sub_18007370C
 * 00000001800ABF8B: nop
 * 00000001800ABF8C: lea     rcx, [rbp+9E40h+var_4290]
 * 00000001800ABF93: call    sub_180010F20
 * 00000001800ABF98: nop
 * 00000001800ABF99: lea     rcx, [rbp+9E40h+var_4270]
 * 00000001800ABFA0: call    sub_180010F20
 * 00000001800ABFA5: nop
 * 00000001800ABFA6: lea     rcx, dword_1801C93C4
 * 00000001800ABFAD: call    _Init_thread_footer
 * 00000001800ABFB2: mov     rax, [rdi+rbx*8]
 * 00000001800ABFB6: mov     eax, [r15+rax]
 * 00000001800ABFBA: cmp     cs:dword_1801C93C8, eax
 * 00000001800ABFC0: jle     loc_1800AC09D
 * 00000001800ABFC6: lea     rcx, dword_1801C93C8
 * 00000001800ABFCD: call    sub_18000C8D0
 * 00000001800ABFD2: cmp     cs:dword_1801C93C8, r14d
 * 00000001800ABFD9: jnz     loc_1800AC09D
 * 00000001800ABFDF: lea     rax, unk_180158180
 * 00000001800ABFE6: mov     qword ptr [rbp+9E40h+var_9860], rax
 * 00000001800ABFED: lea     rax, unk_18015EA88
 * 00000001800ABFF4: mov     qword ptr [rbp+9E40h+var_9860+8], rax
 * 00000001800ABFFB: movups  xmm7, [rbp+9E40h+var_9860]
 * 00000001800AC002: mov     dword ptr [rbp+9E40h+var_8020], 5
 * 00000001800AC00C: mov     dword ptr [rbp+9E40h+var_8020+4], esi
 * 00000001800AC012: movups  xmm6, [rbp+9E40h+var_8020]
 * 00000001800AC019: call    sub_1800A5D74
 * 00000001800AC01E: mov     r8, rax
 * 00000001800AC021: mov     r9d, r12d
 * 00000001800AC024: mov     edx, 172h
 * 00000001800AC029: lea     rcx, [rbp+9E40h+var_4210]
 * 00000001800AC030: call    sub_180073668
 * 00000001800AC035: nop
 * 00000001800AC036: mov     r8, rax
 * 00000001800AC039: mov     rdx, r13
 * 00000001800AC03C: lea     rcx, [rbp+9E40h+var_4230]
 * 00000001800AC043: call    sub_18001B518
 * 00000001800AC048: nop
 * 00000001800AC049: lea     r8, aPixel; "/Pixel"
 * 00000001800AC050: mov     rdx, rax
 * 00000001800AC053: lea     rcx, [rbp+9E40h+var_5CD0]
 * 00000001800AC05A: call    sub_18001B448
 * 00000001800AC05F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC064: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC069: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC06E: mov     rcx, rax
 * 00000001800AC071: call    sub_18007370C
 * 00000001800AC076: nop
 * 00000001800AC077: lea     rcx, [rbp+9E40h+var_4230]
 * 00000001800AC07E: call    sub_180010F20
 * 00000001800AC083: nop
 * 00000001800AC084: lea     rcx, [rbp+9E40h+var_4210]
 * 00000001800AC08B: call    sub_180010F20
 * 00000001800AC090: nop
 * 00000001800AC091: lea     rcx, dword_1801C93C8
 * 00000001800AC098: call    _Init_thread_footer
 * 00000001800AC09D: mov     rax, [rdi+rbx*8]
 * 00000001800AC0A1: mov     eax, [r15+rax]
 * 00000001800AC0A5: cmp     cs:dword_1801C93CC, eax
 * 00000001800AC0AB: jle     loc_1800AC188
 * 00000001800AC0B1: lea     rcx, dword_1801C93CC
 * 00000001800AC0B8: call    sub_18000C8D0
 * 00000001800AC0BD: cmp     cs:dword_1801C93CC, r14d
 * 00000001800AC0C4: jnz     loc_1800AC188
 * 00000001800AC0CA: lea     rax, unk_1801516C0
 * 00000001800AC0D1: mov     qword ptr [rbp+9E40h+var_9850], rax
 * 00000001800AC0D8: lea     rax, unk_18015817C
 * 00000001800AC0DF: mov     qword ptr [rbp+9E40h+var_9850+8], rax
 * 00000001800AC0E6: movups  xmm7, [rbp+9E40h+var_9850]
 * 00000001800AC0ED: mov     dword ptr [rbp+9E40h+var_8000], 5
 * 00000001800AC0F7: mov     dword ptr [rbp+9E40h+var_8000+4], esi
 * 00000001800AC0FD: movups  xmm6, [rbp+9E40h+var_8000]
 * 00000001800AC104: call    sub_1800A5D74
 * 00000001800AC109: mov     r8, rax
 * 00000001800AC10C: mov     r9d, r12d
 * 00000001800AC10F: mov     edx, 178h
 * 00000001800AC114: lea     rcx, [rbp+9E40h+var_41B0]
 * 00000001800AC11B: call    sub_180073668
 * 00000001800AC120: nop
 * 00000001800AC121: mov     r8, rax
 * 00000001800AC124: mov     rdx, r13
 * 00000001800AC127: lea     rcx, [rbp+9E40h+var_41D0]
 * 00000001800AC12E: call    sub_18001B518
 * 00000001800AC133: nop
 * 00000001800AC134: lea     r8, aPixel; "/Pixel"
 * 00000001800AC13B: mov     rdx, rax
 * 00000001800AC13E: lea     rcx, [rbp+9E40h+var_5CB0]
 * 00000001800AC145: call    sub_18001B448
 * 00000001800AC14A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC14F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC154: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC159: mov     rcx, rax
 * 00000001800AC15C: call    sub_18007370C
 * 00000001800AC161: nop
 * 00000001800AC162: lea     rcx, [rbp+9E40h+var_41D0]
 * 00000001800AC169: call    sub_180010F20
 * 00000001800AC16E: nop
 * 00000001800AC16F: lea     rcx, [rbp+9E40h+var_41B0]
 * 00000001800AC176: call    sub_180010F20
 * 00000001800AC17B: nop
 * 00000001800AC17C: lea     rcx, dword_1801C93CC
 * 00000001800AC183: call    _Init_thread_footer
 * 00000001800AC188: mov     rax, [rdi+rbx*8]
 * 00000001800AC18C: mov     eax, [r15+rax]
 * 00000001800AC190: cmp     cs:dword_1801C93D0, eax
 * 00000001800AC196: jle     loc_1800AC273
 * 00000001800AC19C: lea     rcx, dword_1801C93D0
 * 00000001800AC1A3: call    sub_18000C8D0
 * 00000001800AC1A8: cmp     cs:dword_1801C93D0, r14d
 * 00000001800AC1AF: jnz     loc_1800AC273
 * 00000001800AC1B5: lea     rax, unk_1801516C0
 * 00000001800AC1BC: mov     qword ptr [rbp+9E40h+var_9840], rax
 * 00000001800AC1C3: lea     rax, unk_18015817C
 * 00000001800AC1CA: mov     qword ptr [rbp+9E40h+var_9840+8], rax
 * 00000001800AC1D1: movups  xmm7, [rbp+9E40h+var_9840]
 * 00000001800AC1D8: mov     dword ptr [rbp+9E40h+var_7FE0], 5
 * 00000001800AC1E2: mov     dword ptr [rbp+9E40h+var_7FE0+4], esi
 * 00000001800AC1E8: movups  xmm6, [rbp+9E40h+var_7FE0]
 * 00000001800AC1EF: call    sub_1800A5D74
 * 00000001800AC1F4: mov     r8, rax
 * 00000001800AC1F7: mov     r9d, r12d
 * 00000001800AC1FA: mov     edx, 17Ah
 * 00000001800AC1FF: lea     rcx, [rbp+9E40h+var_4150]
 * 00000001800AC206: call    sub_180073668
 * 00000001800AC20B: nop
 * 00000001800AC20C: mov     r8, rax
 * 00000001800AC20F: mov     rdx, r13
 * 00000001800AC212: lea     rcx, [rbp+9E40h+var_4170]
 * 00000001800AC219: call    sub_18001B518
 * 00000001800AC21E: nop
 * 00000001800AC21F: lea     r8, aPixel; "/Pixel"
 * 00000001800AC226: mov     rdx, rax
 * 00000001800AC229: lea     rcx, [rbp+9E40h+var_5C90]
 * 00000001800AC230: call    sub_18001B448
 * 00000001800AC235: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC23A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC23F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC244: mov     rcx, rax
 * 00000001800AC247: call    sub_18007370C
 * 00000001800AC24C: nop
 * 00000001800AC24D: lea     rcx, [rbp+9E40h+var_4170]
 * 00000001800AC254: call    sub_180010F20
 * 00000001800AC259: nop
 * 00000001800AC25A: lea     rcx, [rbp+9E40h+var_4150]
 * 00000001800AC261: call    sub_180010F20
 * 00000001800AC266: nop
 * 00000001800AC267: lea     rcx, dword_1801C93D0
 * 00000001800AC26E: call    _Init_thread_footer
 * 00000001800AC273: mov     rax, [rdi+rbx*8]
 * 00000001800AC277: mov     eax, [r15+rax]
 * 00000001800AC27B: cmp     cs:dword_1801C93D4, eax
 * 00000001800AC281: jle     loc_1800AC35E
 * 00000001800AC287: lea     rcx, dword_1801C93D4
 * 00000001800AC28E: call    sub_18000C8D0
 * 00000001800AC293: cmp     cs:dword_1801C93D4, r14d
 * 00000001800AC29A: jnz     loc_1800AC35E
 * 00000001800AC2A0: lea     rax, unk_180176460
 * 00000001800AC2A7: mov     qword ptr [rbp+9E40h+var_9830], rax
 * 00000001800AC2AE: lea     rax, unk_18017CB8C
 * 00000001800AC2B5: mov     qword ptr [rbp+9E40h+var_9830+8], rax
 * 00000001800AC2BC: movups  xmm7, [rbp+9E40h+var_9830]
 * 00000001800AC2C3: mov     dword ptr [rbp+9E40h+var_7FC0], 5
 * 00000001800AC2CD: mov     dword ptr [rbp+9E40h+var_7FC0+4], esi
 * 00000001800AC2D3: movups  xmm6, [rbp+9E40h+var_7FC0]
 * 00000001800AC2DA: call    sub_1800A5D74
 * 00000001800AC2DF: mov     r8, rax
 * 00000001800AC2E2: mov     r9d, r12d
 * 00000001800AC2E5: mov     edx, 180h
 * 00000001800AC2EA: lea     rcx, [rbp+9E40h+var_40F0]
 * 00000001800AC2F1: call    sub_180073668
 * 00000001800AC2F6: nop
 * 00000001800AC2F7: mov     r8, rax
 * 00000001800AC2FA: mov     rdx, r13
 * 00000001800AC2FD: lea     rcx, [rbp+9E40h+var_4110]
 * 00000001800AC304: call    sub_18001B518
 * 00000001800AC309: nop
 * 00000001800AC30A: lea     r8, aPixel; "/Pixel"
 * 00000001800AC311: mov     rdx, rax
 * 00000001800AC314: lea     rcx, [rbp+9E40h+var_5C70]
 * 00000001800AC31B: call    sub_18001B448
 * 00000001800AC320: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC325: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC32A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC32F: mov     rcx, rax
 * 00000001800AC332: call    sub_18007370C
 * 00000001800AC337: nop
 * 00000001800AC338: lea     rcx, [rbp+9E40h+var_4110]
 * 00000001800AC33F: call    sub_180010F20
 * 00000001800AC344: nop
 * 00000001800AC345: lea     rcx, [rbp+9E40h+var_40F0]
 * 00000001800AC34C: call    sub_180010F20
 * 00000001800AC351: nop
 * 00000001800AC352: lea     rcx, dword_1801C93D4
 * 00000001800AC359: call    _Init_thread_footer
 * 00000001800AC35E: mov     rax, [rdi+rbx*8]
 * 00000001800AC362: mov     eax, [r15+rax]
 * 00000001800AC366: cmp     cs:dword_1801C93D8, eax
 * 00000001800AC36C: jle     loc_1800AC449
 * 00000001800AC372: lea     rcx, dword_1801C93D8
 * 00000001800AC379: call    sub_18000C8D0
 * 00000001800AC37E: cmp     cs:dword_1801C93D8, r14d
 * 00000001800AC385: jnz     loc_1800AC449
 * 00000001800AC38B: lea     rax, unk_180176460
 * 00000001800AC392: mov     qword ptr [rbp+9E40h+var_9820], rax
 * 00000001800AC399: lea     rax, unk_18017CB8C
 * 00000001800AC3A0: mov     qword ptr [rbp+9E40h+var_9820+8], rax
 * 00000001800AC3A7: movups  xmm7, [rbp+9E40h+var_9820]
 * 00000001800AC3AE: mov     dword ptr [rbp+9E40h+var_7FA0], 5
 * 00000001800AC3B8: mov     dword ptr [rbp+9E40h+var_7FA0+4], esi
 * 00000001800AC3BE: movups  xmm6, [rbp+9E40h+var_7FA0]
 * 00000001800AC3C5: call    sub_1800A5D74
 * 00000001800AC3CA: mov     r8, rax
 * 00000001800AC3CD: mov     r9d, r12d
 * 00000001800AC3D0: mov     edx, 182h
 * 00000001800AC3D5: lea     rcx, [rbp+9E40h+var_4090]
 * 00000001800AC3DC: call    sub_180073668
 * 00000001800AC3E1: nop
 * 00000001800AC3E2: mov     r8, rax
 * 00000001800AC3E5: mov     rdx, r13
 * 00000001800AC3E8: lea     rcx, [rbp+9E40h+var_40B0]
 * 00000001800AC3EF: call    sub_18001B518
 * 00000001800AC3F4: nop
 * 00000001800AC3F5: lea     r8, aPixel; "/Pixel"
 * 00000001800AC3FC: mov     rdx, rax
 * 00000001800AC3FF: lea     rcx, [rbp+9E40h+var_5C50]
 * 00000001800AC406: call    sub_18001B448
 * 00000001800AC40B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC410: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC415: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC41A: mov     rcx, rax
 * 00000001800AC41D: call    sub_18007370C
 * 00000001800AC422: nop
 * 00000001800AC423: lea     rcx, [rbp+9E40h+var_40B0]
 * 00000001800AC42A: call    sub_180010F20
 * 00000001800AC42F: nop
 * 00000001800AC430: lea     rcx, [rbp+9E40h+var_4090]
 * 00000001800AC437: call    sub_180010F20
 * 00000001800AC43C: nop
 * 00000001800AC43D: lea     rcx, dword_1801C93D8
 * 00000001800AC444: call    _Init_thread_footer
 * 00000001800AC449: mov     rax, [rdi+rbx*8]
 * 00000001800AC44D: mov     eax, [r15+rax]
 * 00000001800AC451: cmp     cs:dword_1801C93DC, eax
 * 00000001800AC457: jle     loc_1800AC534
 * 00000001800AC45D: lea     rcx, dword_1801C93DC
 * 00000001800AC464: call    sub_18000C8D0
 * 00000001800AC469: cmp     cs:dword_1801C93DC, r14d
 * 00000001800AC470: jnz     loc_1800AC534
 * 00000001800AC476: lea     rax, unk_180147920
 * 00000001800AC47D: mov     qword ptr [rbp+9E40h+var_9810], rax
 * 00000001800AC484: lea     rax, unk_18014E1DC
 * 00000001800AC48B: mov     qword ptr [rbp+9E40h+var_9810+8], rax
 * 00000001800AC492: movups  xmm7, [rbp+9E40h+var_9810]
 * 00000001800AC499: mov     dword ptr [rbp+9E40h+var_7F80], 5
 * 00000001800AC4A3: mov     dword ptr [rbp+9E40h+var_7F80+4], esi
 * 00000001800AC4A9: movups  xmm6, [rbp+9E40h+var_7F80]
 * 00000001800AC4B0: call    sub_1800A5D74
 * 00000001800AC4B5: mov     r8, rax
 * 00000001800AC4B8: mov     r9d, r12d
 * 00000001800AC4BB: mov     edx, 188h
 * 00000001800AC4C0: lea     rcx, [rbp+9E40h+var_4030]
 * 00000001800AC4C7: call    sub_180073668
 * 00000001800AC4CC: nop
 * 00000001800AC4CD: mov     r8, rax
 * 00000001800AC4D0: mov     rdx, r13
 * 00000001800AC4D3: lea     rcx, [rbp+9E40h+var_4050]
 * 00000001800AC4DA: call    sub_18001B518
 * 00000001800AC4DF: nop
 * 00000001800AC4E0: lea     r8, aPixel; "/Pixel"
 * 00000001800AC4E7: mov     rdx, rax
 * 00000001800AC4EA: lea     rcx, [rbp+9E40h+var_5C30]
 * 00000001800AC4F1: call    sub_18001B448
 * 00000001800AC4F6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC4FB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC500: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC505: mov     rcx, rax
 * 00000001800AC508: call    sub_18007370C
 * 00000001800AC50D: nop
 * 00000001800AC50E: lea     rcx, [rbp+9E40h+var_4050]
 * 00000001800AC515: call    sub_180010F20
 * 00000001800AC51A: nop
 * 00000001800AC51B: lea     rcx, [rbp+9E40h+var_4030]
 * 00000001800AC522: call    sub_180010F20
 * 00000001800AC527: nop
 * 00000001800AC528: lea     rcx, dword_1801C93DC
 * 00000001800AC52F: call    _Init_thread_footer
 * 00000001800AC534: mov     rax, [rdi+rbx*8]
 * 00000001800AC538: mov     eax, [r15+rax]
 * 00000001800AC53C: cmp     cs:dword_1801C93E0, eax
 * 00000001800AC542: jle     loc_1800AC61F
 * 00000001800AC548: lea     rcx, dword_1801C93E0
 * 00000001800AC54F: call    sub_18000C8D0
 * 00000001800AC554: cmp     cs:dword_1801C93E0, r14d
 * 00000001800AC55B: jnz     loc_1800AC61F
 * 00000001800AC561: lea     rax, unk_180147920
 * 00000001800AC568: mov     qword ptr [rbp+9E40h+var_9800], rax
 * 00000001800AC56F: lea     rax, unk_18014E1DC
 * 00000001800AC576: mov     qword ptr [rbp+9E40h+var_9800+8], rax
 * 00000001800AC57D: movups  xmm7, [rbp+9E40h+var_9800]
 * 00000001800AC584: mov     dword ptr [rbp+9E40h+var_7F60], 5
 * 00000001800AC58E: mov     dword ptr [rbp+9E40h+var_7F60+4], esi
 * 00000001800AC594: movups  xmm6, [rbp+9E40h+var_7F60]
 * 00000001800AC59B: call    sub_1800A5D74
 * 00000001800AC5A0: mov     r8, rax
 * 00000001800AC5A3: mov     r9d, r12d
 * 00000001800AC5A6: mov     edx, 18Ah
 * 00000001800AC5AB: lea     rcx, [rbp+9E40h+var_3FD0]
 * 00000001800AC5B2: call    sub_180073668
 * 00000001800AC5B7: nop
 * 00000001800AC5B8: mov     r8, rax
 * 00000001800AC5BB: mov     rdx, r13
 * 00000001800AC5BE: lea     rcx, [rbp+9E40h+var_3FF0]
 * 00000001800AC5C5: call    sub_18001B518
 * 00000001800AC5CA: nop
 * 00000001800AC5CB: lea     r8, aPixel; "/Pixel"
 * 00000001800AC5D2: mov     rdx, rax
 * 00000001800AC5D5: lea     rcx, [rbp+9E40h+var_5C10]
 * 00000001800AC5DC: call    sub_18001B448
 * 00000001800AC5E1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC5E6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC5EB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC5F0: mov     rcx, rax
 * 00000001800AC5F3: call    sub_18007370C
 * 00000001800AC5F8: nop
 * 00000001800AC5F9: lea     rcx, [rbp+9E40h+var_3FF0]
 * 00000001800AC600: call    sub_180010F20
 * 00000001800AC605: nop
 * 00000001800AC606: lea     rcx, [rbp+9E40h+var_3FD0]
 * 00000001800AC60D: call    sub_180010F20
 * 00000001800AC612: nop
 * 00000001800AC613: lea     rcx, dword_1801C93E0
 * 00000001800AC61A: call    _Init_thread_footer
 * 00000001800AC61F: mov     rax, [rdi+rbx*8]
 * 00000001800AC623: mov     eax, [r15+rax]
 * 00000001800AC627: cmp     cs:dword_1801C93E4, eax
 * 00000001800AC62D: jle     loc_1800AC70A
 * 00000001800AC633: lea     rcx, dword_1801C93E4
 * 00000001800AC63A: call    sub_18000C8D0
 * 00000001800AC63F: cmp     cs:dword_1801C93E4, r14d
 * 00000001800AC646: jnz     loc_1800AC70A
 * 00000001800AC64C: lea     rax, unk_180158180
 * 00000001800AC653: mov     qword ptr [rbp+9E40h+var_97F0], rax
 * 00000001800AC65A: lea     rax, unk_18015EA88
 * 00000001800AC661: mov     qword ptr [rbp+9E40h+var_97F0+8], rax
 * 00000001800AC668: movups  xmm7, [rbp+9E40h+var_97F0]
 * 00000001800AC66F: mov     dword ptr [rbp+9E40h+var_7F40], 5
 * 00000001800AC679: mov     dword ptr [rbp+9E40h+var_7F40+4], esi
 * 00000001800AC67F: movups  xmm6, [rbp+9E40h+var_7F40]
 * 00000001800AC686: call    sub_1800A5D74
 * 00000001800AC68B: mov     r8, rax
 * 00000001800AC68E: mov     r9d, r12d
 * 00000001800AC691: mov     edx, 190h
 * 00000001800AC696: lea     rcx, [rbp+9E40h+var_3F70]
 * 00000001800AC69D: call    sub_180073668
 * 00000001800AC6A2: nop
 * 00000001800AC6A3: mov     r8, rax
 * 00000001800AC6A6: mov     rdx, r13
 * 00000001800AC6A9: lea     rcx, [rbp+9E40h+var_3F90]
 * 00000001800AC6B0: call    sub_18001B518
 * 00000001800AC6B5: nop
 * 00000001800AC6B6: lea     r8, aPixel; "/Pixel"
 * 00000001800AC6BD: mov     rdx, rax
 * 00000001800AC6C0: lea     rcx, [rbp+9E40h+var_5BF0]
 * 00000001800AC6C7: call    sub_18001B448
 * 00000001800AC6CC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC6D1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC6D6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC6DB: mov     rcx, rax
 * 00000001800AC6DE: call    sub_18007370C
 * 00000001800AC6E3: nop
 * 00000001800AC6E4: lea     rcx, [rbp+9E40h+var_3F90]
 * 00000001800AC6EB: call    sub_180010F20
 * 00000001800AC6F0: nop
 * 00000001800AC6F1: lea     rcx, [rbp+9E40h+var_3F70]
 * 00000001800AC6F8: call    sub_180010F20
 * 00000001800AC6FD: nop
 * 00000001800AC6FE: lea     rcx, dword_1801C93E4
 * 00000001800AC705: call    _Init_thread_footer
 * 00000001800AC70A: mov     rax, [rdi+rbx*8]
 * 00000001800AC70E: mov     eax, [r15+rax]
 * 00000001800AC712: cmp     cs:dword_1801C93E8, eax
 * 00000001800AC718: jle     loc_1800AC7F5
 * 00000001800AC71E: lea     rcx, dword_1801C93E8
 * 00000001800AC725: call    sub_18000C8D0
 * 00000001800AC72A: cmp     cs:dword_1801C93E8, r14d
 * 00000001800AC731: jnz     loc_1800AC7F5
 * 00000001800AC737: lea     rax, unk_180158180
 * 00000001800AC73E: mov     qword ptr [rbp+9E40h+var_97E0], rax
 * 00000001800AC745: lea     rax, unk_18015EA88
 * 00000001800AC74C: mov     qword ptr [rbp+9E40h+var_97E0+8], rax
 * 00000001800AC753: movups  xmm7, [rbp+9E40h+var_97E0]
 * 00000001800AC75A: mov     dword ptr [rbp+9E40h+var_7F20], 5
 * 00000001800AC764: mov     dword ptr [rbp+9E40h+var_7F20+4], esi
 * 00000001800AC76A: movups  xmm6, [rbp+9E40h+var_7F20]
 * 00000001800AC771: call    sub_1800A5D74
 * 00000001800AC776: mov     r8, rax
 * 00000001800AC779: mov     r9d, r12d
 * 00000001800AC77C: mov     edx, 192h
 * 00000001800AC781: lea     rcx, [rbp+9E40h+var_3F10]
 * 00000001800AC788: call    sub_180073668
 * 00000001800AC78D: nop
 * 00000001800AC78E: mov     r8, rax
 * 00000001800AC791: mov     rdx, r13
 * 00000001800AC794: lea     rcx, [rbp+9E40h+var_3F30]
 * 00000001800AC79B: call    sub_18001B518
 * 00000001800AC7A0: nop
 * 00000001800AC7A1: lea     r8, aPixel; "/Pixel"
 * 00000001800AC7A8: mov     rdx, rax
 * 00000001800AC7AB: lea     rcx, [rbp+9E40h+var_5BD0]
 * 00000001800AC7B2: call    sub_18001B448
 * 00000001800AC7B7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC7BC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC7C1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC7C6: mov     rcx, rax
 * 00000001800AC7C9: call    sub_18007370C
 * 00000001800AC7CE: nop
 * 00000001800AC7CF: lea     rcx, [rbp+9E40h+var_3F30]
 * 00000001800AC7D6: call    sub_180010F20
 * 00000001800AC7DB: nop
 * 00000001800AC7DC: lea     rcx, [rbp+9E40h+var_3F10]
 * 00000001800AC7E3: call    sub_180010F20
 * 00000001800AC7E8: nop
 * 00000001800AC7E9: lea     rcx, dword_1801C93E8
 * 00000001800AC7F0: call    _Init_thread_footer
 * 00000001800AC7F5: mov     rax, [rdi+rbx*8]
 * 00000001800AC7F9: mov     eax, [r15+rax]
 * 00000001800AC7FD: cmp     cs:dword_1801C93EC, eax
 * 00000001800AC803: jle     loc_1800AC8E0
 * 00000001800AC809: lea     rcx, dword_1801C93EC
 * 00000001800AC810: call    sub_18000C8D0
 * 00000001800AC815: cmp     cs:dword_1801C93EC, r14d
 * 00000001800AC81C: jnz     loc_1800AC8E0
 * 00000001800AC822: lea     rax, unk_1801516C0
 * 00000001800AC829: mov     qword ptr [rbp+9E40h+var_97D0], rax
 * 00000001800AC830: lea     rax, unk_18015817C
 * 00000001800AC837: mov     qword ptr [rbp+9E40h+var_97D0+8], rax
 * 00000001800AC83E: movups  xmm7, [rbp+9E40h+var_97D0]
 * 00000001800AC845: mov     dword ptr [rbp+9E40h+var_7F00], 5
 * 00000001800AC84F: mov     dword ptr [rbp+9E40h+var_7F00+4], esi
 * 00000001800AC855: movups  xmm6, [rbp+9E40h+var_7F00]
 * 00000001800AC85C: call    sub_1800A5D74
 * 00000001800AC861: mov     r8, rax
 * 00000001800AC864: mov     r9d, r12d
 * 00000001800AC867: mov     edx, 198h
 * 00000001800AC86C: lea     rcx, [rbp+9E40h+var_3EB0]
 * 00000001800AC873: call    sub_180073668
 * 00000001800AC878: nop
 * 00000001800AC879: mov     r8, rax
 * 00000001800AC87C: mov     rdx, r13
 * 00000001800AC87F: lea     rcx, [rbp+9E40h+var_3ED0]
 * 00000001800AC886: call    sub_18001B518
 * 00000001800AC88B: nop
 * 00000001800AC88C: lea     r8, aPixel; "/Pixel"
 * 00000001800AC893: mov     rdx, rax
 * 00000001800AC896: lea     rcx, [rbp+9E40h+var_5BB0]
 * 00000001800AC89D: call    sub_18001B448
 * 00000001800AC8A2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC8A7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC8AC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC8B1: mov     rcx, rax
 * 00000001800AC8B4: call    sub_18007370C
 * 00000001800AC8B9: nop
 * 00000001800AC8BA: lea     rcx, [rbp+9E40h+var_3ED0]
 * 00000001800AC8C1: call    sub_180010F20
 * 00000001800AC8C6: nop
 * 00000001800AC8C7: lea     rcx, [rbp+9E40h+var_3EB0]
 * 00000001800AC8CE: call    sub_180010F20
 * 00000001800AC8D3: nop
 * 00000001800AC8D4: lea     rcx, dword_1801C93EC
 * 00000001800AC8DB: call    _Init_thread_footer
 * 00000001800AC8E0: mov     rax, [rdi+rbx*8]
 * 00000001800AC8E4: mov     eax, [r15+rax]
 * 00000001800AC8E8: cmp     cs:dword_1801C93F0, eax
 * 00000001800AC8EE: jle     loc_1800AC9CB
 * 00000001800AC8F4: lea     rcx, dword_1801C93F0
 * 00000001800AC8FB: call    sub_18000C8D0
 * 00000001800AC900: cmp     cs:dword_1801C93F0, r14d
 * 00000001800AC907: jnz     loc_1800AC9CB
 * 00000001800AC90D: lea     rax, unk_1801516C0
 * 00000001800AC914: mov     qword ptr [rbp+9E40h+var_97C0], rax
 * 00000001800AC91B: lea     rax, unk_18015817C
 * 00000001800AC922: mov     qword ptr [rbp+9E40h+var_97C0+8], rax
 * 00000001800AC929: movups  xmm7, [rbp+9E40h+var_97C0]
 * 00000001800AC930: mov     dword ptr [rbp+9E40h+var_7EE0], 5
 * 00000001800AC93A: mov     dword ptr [rbp+9E40h+var_7EE0+4], esi
 * 00000001800AC940: movups  xmm6, [rbp+9E40h+var_7EE0]
 * 00000001800AC947: call    sub_1800A5D74
 * 00000001800AC94C: mov     r8, rax
 * 00000001800AC94F: mov     r9d, r12d
 * 00000001800AC952: mov     edx, 19Ah
 * 00000001800AC957: lea     rcx, [rbp+9E40h+var_3E50]
 * 00000001800AC95E: call    sub_180073668
 * 00000001800AC963: nop
 * 00000001800AC964: mov     r8, rax
 * 00000001800AC967: mov     rdx, r13
 * 00000001800AC96A: lea     rcx, [rbp+9E40h+var_3E70]
 * 00000001800AC971: call    sub_18001B518
 * 00000001800AC976: nop
 * 00000001800AC977: lea     r8, aPixel; "/Pixel"
 * 00000001800AC97E: mov     rdx, rax
 * 00000001800AC981: lea     rcx, [rbp+9E40h+var_5B90]
 * 00000001800AC988: call    sub_18001B448
 * 00000001800AC98D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AC992: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AC997: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AC99C: mov     rcx, rax
 * 00000001800AC99F: call    sub_18007370C
 * 00000001800AC9A4: nop
 * 00000001800AC9A5: lea     rcx, [rbp+9E40h+var_3E70]
 * 00000001800AC9AC: call    sub_180010F20
 * 00000001800AC9B1: nop
 * 00000001800AC9B2: lea     rcx, [rbp+9E40h+var_3E50]
 * 00000001800AC9B9: call    sub_180010F20
 * 00000001800AC9BE: nop
 * 00000001800AC9BF: lea     rcx, dword_1801C93F0
 * 00000001800AC9C6: call    _Init_thread_footer
 * 00000001800AC9CB: mov     rax, [rdi+rbx*8]
 * 00000001800AC9CF: mov     eax, [r15+rax]
 * 00000001800AC9D3: cmp     cs:dword_1801C93F4, eax
 * 00000001800AC9D9: jle     loc_1800ACAB6
 * 00000001800AC9DF: lea     rcx, dword_1801C93F4
 * 00000001800AC9E6: call    sub_18000C8D0
 * 00000001800AC9EB: cmp     cs:dword_1801C93F4, r14d
 * 00000001800AC9F2: jnz     loc_1800ACAB6
 * 00000001800AC9F8: lea     rax, unk_180176460
 * 00000001800AC9FF: mov     qword ptr [rbp+9E40h+var_97B0], rax
 * 00000001800ACA06: lea     rax, unk_18017CB8C
 * 00000001800ACA0D: mov     qword ptr [rbp+9E40h+var_97B0+8], rax
 * 00000001800ACA14: movups  xmm7, [rbp+9E40h+var_97B0]
 * 00000001800ACA1B: mov     dword ptr [rbp+9E40h+var_7EC0], 5
 * 00000001800ACA25: mov     dword ptr [rbp+9E40h+var_7EC0+4], esi
 * 00000001800ACA2B: movups  xmm6, [rbp+9E40h+var_7EC0]
 * 00000001800ACA32: call    sub_1800A5D74
 * 00000001800ACA37: mov     r8, rax
 * 00000001800ACA3A: mov     r9d, r12d
 * 00000001800ACA3D: mov     edx, 1A0h
 * 00000001800ACA42: lea     rcx, [rbp+9E40h+var_3DF0]
 * 00000001800ACA49: call    sub_180073668
 * 00000001800ACA4E: nop
 * 00000001800ACA4F: mov     r8, rax
 * 00000001800ACA52: mov     rdx, r13
 * 00000001800ACA55: lea     rcx, [rbp+9E40h+var_3E10]
 * 00000001800ACA5C: call    sub_18001B518
 * 00000001800ACA61: nop
 * 00000001800ACA62: lea     r8, aPixel; "/Pixel"
 * 00000001800ACA69: mov     rdx, rax
 * 00000001800ACA6C: lea     rcx, [rbp+9E40h+var_5B70]
 * 00000001800ACA73: call    sub_18001B448
 * 00000001800ACA78: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACA7D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACA82: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACA87: mov     rcx, rax
 * 00000001800ACA8A: call    sub_18007370C
 * 00000001800ACA8F: nop
 * 00000001800ACA90: lea     rcx, [rbp+9E40h+var_3E10]
 * 00000001800ACA97: call    sub_180010F20
 * 00000001800ACA9C: nop
 * 00000001800ACA9D: lea     rcx, [rbp+9E40h+var_3DF0]
 * 00000001800ACAA4: call    sub_180010F20
 * 00000001800ACAA9: nop
 * 00000001800ACAAA: lea     rcx, dword_1801C93F4
 * 00000001800ACAB1: call    _Init_thread_footer
 * 00000001800ACAB6: mov     rax, [rdi+rbx*8]
 * 00000001800ACABA: mov     eax, [r15+rax]
 * 00000001800ACABE: cmp     cs:dword_1801C93F8, eax
 * 00000001800ACAC4: jle     loc_1800ACBA1
 * 00000001800ACACA: lea     rcx, dword_1801C93F8
 * 00000001800ACAD1: call    sub_18000C8D0
 * 00000001800ACAD6: cmp     cs:dword_1801C93F8, r14d
 * 00000001800ACADD: jnz     loc_1800ACBA1
 * 00000001800ACAE3: lea     rax, unk_180176460
 * 00000001800ACAEA: mov     qword ptr [rbp+9E40h+var_97A0], rax
 * 00000001800ACAF1: lea     rax, unk_18017CB8C
 * 00000001800ACAF8: mov     qword ptr [rbp+9E40h+var_97A0+8], rax
 * 00000001800ACAFF: movups  xmm7, [rbp+9E40h+var_97A0]
 * 00000001800ACB06: mov     dword ptr [rbp+9E40h+var_7EA0], 5
 * 00000001800ACB10: mov     dword ptr [rbp+9E40h+var_7EA0+4], esi
 * 00000001800ACB16: movups  xmm6, [rbp+9E40h+var_7EA0]
 * 00000001800ACB1D: call    sub_1800A5D74
 * 00000001800ACB22: mov     r8, rax
 * 00000001800ACB25: mov     r9d, r12d
 * 00000001800ACB28: mov     edx, 1A2h
 * 00000001800ACB2D: lea     rcx, [rbp+9E40h+var_3D90]
 * 00000001800ACB34: call    sub_180073668
 * 00000001800ACB39: nop
 * 00000001800ACB3A: mov     r8, rax
 * 00000001800ACB3D: mov     rdx, r13
 * 00000001800ACB40: lea     rcx, [rbp+9E40h+var_3DB0]
 * 00000001800ACB47: call    sub_18001B518
 * 00000001800ACB4C: nop
 * 00000001800ACB4D: lea     r8, aPixel; "/Pixel"
 * 00000001800ACB54: mov     rdx, rax
 * 00000001800ACB57: lea     rcx, [rbp+9E40h+var_5B50]
 * 00000001800ACB5E: call    sub_18001B448
 * 00000001800ACB63: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACB68: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACB6D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACB72: mov     rcx, rax
 * 00000001800ACB75: call    sub_18007370C
 * 00000001800ACB7A: nop
 * 00000001800ACB7B: lea     rcx, [rbp+9E40h+var_3DB0]
 * 00000001800ACB82: call    sub_180010F20
 * 00000001800ACB87: nop
 * 00000001800ACB88: lea     rcx, [rbp+9E40h+var_3D90]
 * 00000001800ACB8F: call    sub_180010F20
 * 00000001800ACB94: nop
 * 00000001800ACB95: lea     rcx, dword_1801C93F8
 * 00000001800ACB9C: call    _Init_thread_footer
 * 00000001800ACBA1: mov     rax, [rdi+rbx*8]
 * 00000001800ACBA5: mov     eax, [r15+rax]
 * 00000001800ACBA9: cmp     cs:dword_1801C93FC, eax
 * 00000001800ACBAF: jle     loc_1800ACC8C
 * 00000001800ACBB5: lea     rcx, dword_1801C93FC
 * 00000001800ACBBC: call    sub_18000C8D0
 * 00000001800ACBC1: cmp     cs:dword_1801C93FC, r14d
 * 00000001800ACBC8: jnz     loc_1800ACC8C
 * 00000001800ACBCE: lea     rax, unk_180147920
 * 00000001800ACBD5: mov     qword ptr [rbp+9E40h+var_9790], rax
 * 00000001800ACBDC: lea     rax, unk_18014E1DC
 * 00000001800ACBE3: mov     qword ptr [rbp+9E40h+var_9790+8], rax
 * 00000001800ACBEA: movups  xmm7, [rbp+9E40h+var_9790]
 * 00000001800ACBF1: mov     dword ptr [rbp+9E40h+var_7E80], 5
 * 00000001800ACBFB: mov     dword ptr [rbp+9E40h+var_7E80+4], esi
 * 00000001800ACC01: movups  xmm6, [rbp+9E40h+var_7E80]
 * 00000001800ACC08: call    sub_1800A5D74
 * 00000001800ACC0D: mov     r8, rax
 * 00000001800ACC10: mov     r9d, r12d
 * 00000001800ACC13: mov     edx, 1A8h
 * 00000001800ACC18: lea     rcx, [rbp+9E40h+var_3D30]
 * 00000001800ACC1F: call    sub_180073668
 * 00000001800ACC24: nop
 * 00000001800ACC25: mov     r8, rax
 * 00000001800ACC28: mov     rdx, r13
 * 00000001800ACC2B: lea     rcx, [rbp+9E40h+var_3D50]
 * 00000001800ACC32: call    sub_18001B518
 * 00000001800ACC37: nop
 * 00000001800ACC38: lea     r8, aPixel; "/Pixel"
 * 00000001800ACC3F: mov     rdx, rax
 * 00000001800ACC42: lea     rcx, [rbp+9E40h+var_5B30]
 * 00000001800ACC49: call    sub_18001B448
 * 00000001800ACC4E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACC53: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACC58: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACC5D: mov     rcx, rax
 * 00000001800ACC60: call    sub_18007370C
 * 00000001800ACC65: nop
 * 00000001800ACC66: lea     rcx, [rbp+9E40h+var_3D50]
 * 00000001800ACC6D: call    sub_180010F20
 * 00000001800ACC72: nop
 * 00000001800ACC73: lea     rcx, [rbp+9E40h+var_3D30]
 * 00000001800ACC7A: call    sub_180010F20
 * 00000001800ACC7F: nop
 * 00000001800ACC80: lea     rcx, dword_1801C93FC
 * 00000001800ACC87: call    _Init_thread_footer
 * 00000001800ACC8C: mov     rax, [rdi+rbx*8]
 * 00000001800ACC90: mov     eax, [r15+rax]
 * 00000001800ACC94: cmp     cs:dword_1801C9400, eax
 * 00000001800ACC9A: jle     loc_1800ACD77
 * 00000001800ACCA0: lea     rcx, dword_1801C9400
 * 00000001800ACCA7: call    sub_18000C8D0
 * 00000001800ACCAC: cmp     cs:dword_1801C9400, r14d
 * 00000001800ACCB3: jnz     loc_1800ACD77
 * 00000001800ACCB9: lea     rax, unk_180147920
 * 00000001800ACCC0: mov     qword ptr [rbp+9E40h+var_9780], rax
 * 00000001800ACCC7: lea     rax, unk_18014E1DC
 * 00000001800ACCCE: mov     qword ptr [rbp+9E40h+var_9780+8], rax
 * 00000001800ACCD5: movups  xmm7, [rbp+9E40h+var_9780]
 * 00000001800ACCDC: mov     dword ptr [rbp+9E40h+var_7E60], 5
 * 00000001800ACCE6: mov     dword ptr [rbp+9E40h+var_7E60+4], esi
 * 00000001800ACCEC: movups  xmm6, [rbp+9E40h+var_7E60]
 * 00000001800ACCF3: call    sub_1800A5D74
 * 00000001800ACCF8: mov     r8, rax
 * 00000001800ACCFB: mov     r9d, r12d
 * 00000001800ACCFE: mov     edx, 1AAh
 * 00000001800ACD03: lea     rcx, [rbp+9E40h+var_3CD0]
 * 00000001800ACD0A: call    sub_180073668
 * 00000001800ACD0F: nop
 * 00000001800ACD10: mov     r8, rax
 * 00000001800ACD13: mov     rdx, r13
 * 00000001800ACD16: lea     rcx, [rbp+9E40h+var_3CF0]
 * 00000001800ACD1D: call    sub_18001B518
 * 00000001800ACD22: nop
 * 00000001800ACD23: lea     r8, aPixel; "/Pixel"
 * 00000001800ACD2A: mov     rdx, rax
 * 00000001800ACD2D: lea     rcx, [rbp+9E40h+var_5B10]
 * 00000001800ACD34: call    sub_18001B448
 * 00000001800ACD39: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACD3E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACD43: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACD48: mov     rcx, rax
 * 00000001800ACD4B: call    sub_18007370C
 * 00000001800ACD50: nop
 * 00000001800ACD51: lea     rcx, [rbp+9E40h+var_3CF0]
 * 00000001800ACD58: call    sub_180010F20
 * 00000001800ACD5D: nop
 * 00000001800ACD5E: lea     rcx, [rbp+9E40h+var_3CD0]
 * 00000001800ACD65: call    sub_180010F20
 * 00000001800ACD6A: nop
 * 00000001800ACD6B: lea     rcx, dword_1801C9400
 * 00000001800ACD72: call    _Init_thread_footer
 * 00000001800ACD77: mov     rax, [rdi+rbx*8]
 * 00000001800ACD7B: mov     eax, [r15+rax]
 * 00000001800ACD7F: cmp     cs:dword_1801C9404, eax
 * 00000001800ACD85: jle     loc_1800ACE62
 * 00000001800ACD8B: lea     rcx, dword_1801C9404
 * 00000001800ACD92: call    sub_18000C8D0
 * 00000001800ACD97: cmp     cs:dword_1801C9404, r14d
 * 00000001800ACD9E: jnz     loc_1800ACE62
 * 00000001800ACDA4: lea     rax, unk_180158180
 * 00000001800ACDAB: mov     qword ptr [rbp+9E40h+var_9770], rax
 * 00000001800ACDB2: lea     rax, unk_18015EA88
 * 00000001800ACDB9: mov     qword ptr [rbp+9E40h+var_9770+8], rax
 * 00000001800ACDC0: movups  xmm7, [rbp+9E40h+var_9770]
 * 00000001800ACDC7: mov     dword ptr [rbp+9E40h+var_7E40], 5
 * 00000001800ACDD1: mov     dword ptr [rbp+9E40h+var_7E40+4], esi
 * 00000001800ACDD7: movups  xmm6, [rbp+9E40h+var_7E40]
 * 00000001800ACDDE: call    sub_1800A5D74
 * 00000001800ACDE3: mov     r8, rax
 * 00000001800ACDE6: mov     r9d, r12d
 * 00000001800ACDE9: mov     edx, 1B0h
 * 00000001800ACDEE: lea     rcx, [rbp+9E40h+var_3C70]
 * 00000001800ACDF5: call    sub_180073668
 * 00000001800ACDFA: nop
 * 00000001800ACDFB: mov     r8, rax
 * 00000001800ACDFE: mov     rdx, r13
 * 00000001800ACE01: lea     rcx, [rbp+9E40h+var_3C90]
 * 00000001800ACE08: call    sub_18001B518
 * 00000001800ACE0D: nop
 * 00000001800ACE0E: lea     r8, aPixel; "/Pixel"
 * 00000001800ACE15: mov     rdx, rax
 * 00000001800ACE18: lea     rcx, [rbp+9E40h+var_5AF0]
 * 00000001800ACE1F: call    sub_18001B448
 * 00000001800ACE24: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACE29: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACE2E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACE33: mov     rcx, rax
 * 00000001800ACE36: call    sub_18007370C
 * 00000001800ACE3B: nop
 * 00000001800ACE3C: lea     rcx, [rbp+9E40h+var_3C90]
 * 00000001800ACE43: call    sub_180010F20
 * 00000001800ACE48: nop
 * 00000001800ACE49: lea     rcx, [rbp+9E40h+var_3C70]
 * 00000001800ACE50: call    sub_180010F20
 * 00000001800ACE55: nop
 * 00000001800ACE56: lea     rcx, dword_1801C9404
 * 00000001800ACE5D: call    _Init_thread_footer
 * 00000001800ACE62: mov     rax, [rdi+rbx*8]
 * 00000001800ACE66: mov     eax, [r15+rax]
 * 00000001800ACE6A: cmp     cs:dword_1801C9408, eax
 * 00000001800ACE70: jle     loc_1800ACF4D
 * 00000001800ACE76: lea     rcx, dword_1801C9408
 * 00000001800ACE7D: call    sub_18000C8D0
 * 00000001800ACE82: cmp     cs:dword_1801C9408, r14d
 * 00000001800ACE89: jnz     loc_1800ACF4D
 * 00000001800ACE8F: lea     rax, unk_180158180
 * 00000001800ACE96: mov     qword ptr [rbp+9E40h+var_9760], rax
 * 00000001800ACE9D: lea     rax, unk_18015EA88
 * 00000001800ACEA4: mov     qword ptr [rbp+9E40h+var_9760+8], rax
 * 00000001800ACEAB: movups  xmm7, [rbp+9E40h+var_9760]
 * 00000001800ACEB2: mov     dword ptr [rbp+9E40h+var_7E20], 5
 * 00000001800ACEBC: mov     dword ptr [rbp+9E40h+var_7E20+4], esi
 * 00000001800ACEC2: movups  xmm6, [rbp+9E40h+var_7E20]
 * 00000001800ACEC9: call    sub_1800A5D74
 * 00000001800ACECE: mov     r8, rax
 * 00000001800ACED1: mov     r9d, r12d
 * 00000001800ACED4: mov     edx, 1B2h
 * 00000001800ACED9: lea     rcx, [rbp+9E40h+var_3C10]
 * 00000001800ACEE0: call    sub_180073668
 * 00000001800ACEE5: nop
 * 00000001800ACEE6: mov     r8, rax
 * 00000001800ACEE9: mov     rdx, r13
 * 00000001800ACEEC: lea     rcx, [rbp+9E40h+var_3C30]
 * 00000001800ACEF3: call    sub_18001B518
 * 00000001800ACEF8: nop
 * 00000001800ACEF9: lea     r8, aPixel; "/Pixel"
 * 00000001800ACF00: mov     rdx, rax
 * 00000001800ACF03: lea     rcx, [rbp+9E40h+var_5AD0]
 * 00000001800ACF0A: call    sub_18001B448
 * 00000001800ACF0F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACF14: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ACF19: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ACF1E: mov     rcx, rax
 * 00000001800ACF21: call    sub_18007370C
 * 00000001800ACF26: nop
 * 00000001800ACF27: lea     rcx, [rbp+9E40h+var_3C30]
 * 00000001800ACF2E: call    sub_180010F20
 * 00000001800ACF33: nop
 * 00000001800ACF34: lea     rcx, [rbp+9E40h+var_3C10]
 * 00000001800ACF3B: call    sub_180010F20
 * 00000001800ACF40: nop
 * 00000001800ACF41: lea     rcx, dword_1801C9408
 * 00000001800ACF48: call    _Init_thread_footer
 * 00000001800ACF4D: mov     rax, [rdi+rbx*8]
 * 00000001800ACF51: mov     eax, [r15+rax]
 * 00000001800ACF55: cmp     cs:dword_1801C940C, eax
 * 00000001800ACF5B: jle     loc_1800AD038
 * 00000001800ACF61: lea     rcx, dword_1801C940C
 * 00000001800ACF68: call    sub_18000C8D0
 * 00000001800ACF6D: cmp     cs:dword_1801C940C, r14d
 * 00000001800ACF74: jnz     loc_1800AD038
 * 00000001800ACF7A: lea     rax, unk_1801516C0
 * 00000001800ACF81: mov     qword ptr [rbp+9E40h+var_9750], rax
 * 00000001800ACF88: lea     rax, unk_18015817C
 * 00000001800ACF8F: mov     qword ptr [rbp+9E40h+var_9750+8], rax
 * 00000001800ACF96: movups  xmm7, [rbp+9E40h+var_9750]
 * 00000001800ACF9D: mov     dword ptr [rbp+9E40h+var_7E00], 5
 * 00000001800ACFA7: mov     dword ptr [rbp+9E40h+var_7E00+4], esi
 * 00000001800ACFAD: movups  xmm6, [rbp+9E40h+var_7E00]
 * 00000001800ACFB4: call    sub_1800A5D74
 * 00000001800ACFB9: mov     r8, rax
 * 00000001800ACFBC: mov     r9d, r12d
 * 00000001800ACFBF: mov     edx, 1B8h
 * 00000001800ACFC4: lea     rcx, [rbp+9E40h+var_3BB0]
 * 00000001800ACFCB: call    sub_180073668
 * 00000001800ACFD0: nop
 * 00000001800ACFD1: mov     r8, rax
 * 00000001800ACFD4: mov     rdx, r13
 * 00000001800ACFD7: lea     rcx, [rbp+9E40h+var_3BD0]
 * 00000001800ACFDE: call    sub_18001B518
 * 00000001800ACFE3: nop
 * 00000001800ACFE4: lea     r8, aPixel; "/Pixel"
 * 00000001800ACFEB: mov     rdx, rax
 * 00000001800ACFEE: lea     rcx, [rbp+9E40h+var_5AB0]
 * 00000001800ACFF5: call    sub_18001B448
 * 00000001800ACFFA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ACFFF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD004: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD009: mov     rcx, rax
 * 00000001800AD00C: call    sub_18007370C
 * 00000001800AD011: nop
 * 00000001800AD012: lea     rcx, [rbp+9E40h+var_3BD0]
 * 00000001800AD019: call    sub_180010F20
 * 00000001800AD01E: nop
 * 00000001800AD01F: lea     rcx, [rbp+9E40h+var_3BB0]
 * 00000001800AD026: call    sub_180010F20
 * 00000001800AD02B: nop
 * 00000001800AD02C: lea     rcx, dword_1801C940C
 * 00000001800AD033: call    _Init_thread_footer
 * 00000001800AD038: mov     rax, [rdi+rbx*8]
 * 00000001800AD03C: mov     eax, [r15+rax]
 * 00000001800AD040: cmp     cs:dword_1801C9410, eax
 * 00000001800AD046: jle     loc_1800AD123
 * 00000001800AD04C: lea     rcx, dword_1801C9410
 * 00000001800AD053: call    sub_18000C8D0
 * 00000001800AD058: cmp     cs:dword_1801C9410, r14d
 * 00000001800AD05F: jnz     loc_1800AD123
 * 00000001800AD065: lea     rax, unk_1801516C0
 * 00000001800AD06C: mov     qword ptr [rbp+9E40h+var_9740], rax
 * 00000001800AD073: lea     rax, unk_18015817C
 * 00000001800AD07A: mov     qword ptr [rbp+9E40h+var_9740+8], rax
 * 00000001800AD081: movups  xmm7, [rbp+9E40h+var_9740]
 * 00000001800AD088: mov     dword ptr [rbp+9E40h+var_7DE0], 5
 * 00000001800AD092: mov     dword ptr [rbp+9E40h+var_7DE0+4], esi
 * 00000001800AD098: movups  xmm6, [rbp+9E40h+var_7DE0]
 * 00000001800AD09F: call    sub_1800A5D74
 * 00000001800AD0A4: mov     r8, rax
 * 00000001800AD0A7: mov     r9d, r12d
 * 00000001800AD0AA: mov     edx, 1BAh
 * 00000001800AD0AF: lea     rcx, [rbp+9E40h+var_3B50]
 * 00000001800AD0B6: call    sub_180073668
 * 00000001800AD0BB: nop
 * 00000001800AD0BC: mov     r8, rax
 * 00000001800AD0BF: mov     rdx, r13
 * 00000001800AD0C2: lea     rcx, [rbp+9E40h+var_3B70]
 * 00000001800AD0C9: call    sub_18001B518
 * 00000001800AD0CE: nop
 * 00000001800AD0CF: lea     r8, aPixel; "/Pixel"
 * 00000001800AD0D6: mov     rdx, rax
 * 00000001800AD0D9: lea     rcx, [rbp+9E40h+var_5A90]
 * 00000001800AD0E0: call    sub_18001B448
 * 00000001800AD0E5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD0EA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD0EF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD0F4: mov     rcx, rax
 * 00000001800AD0F7: call    sub_18007370C
 * 00000001800AD0FC: nop
 * 00000001800AD0FD: lea     rcx, [rbp+9E40h+var_3B70]
 * 00000001800AD104: call    sub_180010F20
 * 00000001800AD109: nop
 * 00000001800AD10A: lea     rcx, [rbp+9E40h+var_3B50]
 * 00000001800AD111: call    sub_180010F20
 * 00000001800AD116: nop
 * 00000001800AD117: lea     rcx, dword_1801C9410
 * 00000001800AD11E: call    _Init_thread_footer
 * 00000001800AD123: mov     rax, [rdi+rbx*8]
 * 00000001800AD127: mov     eax, [r15+rax]
 * 00000001800AD12B: cmp     cs:dword_1801C9414, eax
 * 00000001800AD131: jle     loc_1800AD20E
 * 00000001800AD137: lea     rcx, dword_1801C9414
 * 00000001800AD13E: call    sub_18000C8D0
 * 00000001800AD143: cmp     cs:dword_1801C9414, r14d
 * 00000001800AD14A: jnz     loc_1800AD20E
 * 00000001800AD150: lea     rax, unk_180176460
 * 00000001800AD157: mov     qword ptr [rbp+9E40h+var_9730], rax
 * 00000001800AD15E: lea     rax, unk_18017CB8C
 * 00000001800AD165: mov     qword ptr [rbp+9E40h+var_9730+8], rax
 * 00000001800AD16C: movups  xmm7, [rbp+9E40h+var_9730]
 * 00000001800AD173: mov     dword ptr [rbp+9E40h+var_7DC0], 5
 * 00000001800AD17D: mov     dword ptr [rbp+9E40h+var_7DC0+4], esi
 * 00000001800AD183: movups  xmm6, [rbp+9E40h+var_7DC0]
 * 00000001800AD18A: call    sub_1800A5D74
 * 00000001800AD18F: mov     r8, rax
 * 00000001800AD192: mov     r9d, r12d
 * 00000001800AD195: mov     edx, 1C0h
 * 00000001800AD19A: lea     rcx, [rbp+9E40h+var_3AF0]
 * 00000001800AD1A1: call    sub_180073668
 * 00000001800AD1A6: nop
 * 00000001800AD1A7: mov     r8, rax
 * 00000001800AD1AA: mov     rdx, r13
 * 00000001800AD1AD: lea     rcx, [rbp+9E40h+var_3B10]
 * 00000001800AD1B4: call    sub_18001B518
 * 00000001800AD1B9: nop
 * 00000001800AD1BA: lea     r8, aPixel; "/Pixel"
 * 00000001800AD1C1: mov     rdx, rax
 * 00000001800AD1C4: lea     rcx, [rbp+9E40h+var_5A70]
 * 00000001800AD1CB: call    sub_18001B448
 * 00000001800AD1D0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD1D5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD1DA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD1DF: mov     rcx, rax
 * 00000001800AD1E2: call    sub_18007370C
 * 00000001800AD1E7: nop
 * 00000001800AD1E8: lea     rcx, [rbp+9E40h+var_3B10]
 * 00000001800AD1EF: call    sub_180010F20
 * 00000001800AD1F4: nop
 * 00000001800AD1F5: lea     rcx, [rbp+9E40h+var_3AF0]
 * 00000001800AD1FC: call    sub_180010F20
 * 00000001800AD201: nop
 * 00000001800AD202: lea     rcx, dword_1801C9414
 * 00000001800AD209: call    _Init_thread_footer
 * 00000001800AD20E: mov     rax, [rdi+rbx*8]
 * 00000001800AD212: mov     eax, [r15+rax]
 * 00000001800AD216: cmp     cs:dword_1801C9418, eax
 * 00000001800AD21C: jle     loc_1800AD2F9
 * 00000001800AD222: lea     rcx, dword_1801C9418
 * 00000001800AD229: call    sub_18000C8D0
 * 00000001800AD22E: cmp     cs:dword_1801C9418, r14d
 * 00000001800AD235: jnz     loc_1800AD2F9
 * 00000001800AD23B: lea     rax, unk_180176460
 * 00000001800AD242: mov     qword ptr [rbp+9E40h+var_9720], rax
 * 00000001800AD249: lea     rax, unk_18017CB8C
 * 00000001800AD250: mov     qword ptr [rbp+9E40h+var_9720+8], rax
 * 00000001800AD257: movups  xmm7, [rbp+9E40h+var_9720]
 * 00000001800AD25E: mov     dword ptr [rbp+9E40h+var_7DA0], 5
 * 00000001800AD268: mov     dword ptr [rbp+9E40h+var_7DA0+4], esi
 * 00000001800AD26E: movups  xmm6, [rbp+9E40h+var_7DA0]
 * 00000001800AD275: call    sub_1800A5D74
 * 00000001800AD27A: mov     r8, rax
 * 00000001800AD27D: mov     r9d, r12d
 * 00000001800AD280: mov     edx, 1C2h
 * 00000001800AD285: lea     rcx, [rbp+9E40h+var_3A90]
 * 00000001800AD28C: call    sub_180073668
 * 00000001800AD291: nop
 * 00000001800AD292: mov     r8, rax
 * 00000001800AD295: mov     rdx, r13
 * 00000001800AD298: lea     rcx, [rbp+9E40h+var_3AB0]
 * 00000001800AD29F: call    sub_18001B518
 * 00000001800AD2A4: nop
 * 00000001800AD2A5: lea     r8, aPixel; "/Pixel"
 * 00000001800AD2AC: mov     rdx, rax
 * 00000001800AD2AF: lea     rcx, [rbp+9E40h+var_5A50]
 * 00000001800AD2B6: call    sub_18001B448
 * 00000001800AD2BB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD2C0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD2C5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD2CA: mov     rcx, rax
 * 00000001800AD2CD: call    sub_18007370C
 * 00000001800AD2D2: nop
 * 00000001800AD2D3: lea     rcx, [rbp+9E40h+var_3AB0]
 * 00000001800AD2DA: call    sub_180010F20
 * 00000001800AD2DF: nop
 * 00000001800AD2E0: lea     rcx, [rbp+9E40h+var_3A90]
 * 00000001800AD2E7: call    sub_180010F20
 * 00000001800AD2EC: nop
 * 00000001800AD2ED: lea     rcx, dword_1801C9418
 * 00000001800AD2F4: call    _Init_thread_footer
 * 00000001800AD2F9: mov     rax, [rdi+rbx*8]
 * 00000001800AD2FD: mov     eax, [r15+rax]
 * 00000001800AD301: cmp     cs:dword_1801C941C, eax
 * 00000001800AD307: jle     loc_1800AD3E4
 * 00000001800AD30D: lea     rcx, dword_1801C941C
 * 00000001800AD314: call    sub_18000C8D0
 * 00000001800AD319: cmp     cs:dword_1801C941C, r14d
 * 00000001800AD320: jnz     loc_1800AD3E4
 * 00000001800AD326: lea     rax, unk_180147920
 * 00000001800AD32D: mov     qword ptr [rbp+9E40h+var_9710], rax
 * 00000001800AD334: lea     rax, unk_18014E1DC
 * 00000001800AD33B: mov     qword ptr [rbp+9E40h+var_9710+8], rax
 * 00000001800AD342: movups  xmm7, [rbp+9E40h+var_9710]
 * 00000001800AD349: mov     dword ptr [rbp+9E40h+var_7D80], 5
 * 00000001800AD353: mov     dword ptr [rbp+9E40h+var_7D80+4], esi
 * 00000001800AD359: movups  xmm6, [rbp+9E40h+var_7D80]
 * 00000001800AD360: call    sub_1800A5D74
 * 00000001800AD365: mov     r8, rax
 * 00000001800AD368: mov     r9d, r12d
 * 00000001800AD36B: mov     edx, 1C8h
 * 00000001800AD370: lea     rcx, [rbp+9E40h+var_3A30]
 * 00000001800AD377: call    sub_180073668
 * 00000001800AD37C: nop
 * 00000001800AD37D: mov     r8, rax
 * 00000001800AD380: mov     rdx, r13
 * 00000001800AD383: lea     rcx, [rbp+9E40h+var_3A50]
 * 00000001800AD38A: call    sub_18001B518
 * 00000001800AD38F: nop
 * 00000001800AD390: lea     r8, aPixel; "/Pixel"
 * 00000001800AD397: mov     rdx, rax
 * 00000001800AD39A: lea     rcx, [rbp+9E40h+var_5A30]
 * 00000001800AD3A1: call    sub_18001B448
 * 00000001800AD3A6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD3AB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD3B0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD3B5: mov     rcx, rax
 * 00000001800AD3B8: call    sub_18007370C
 * 00000001800AD3BD: nop
 * 00000001800AD3BE: lea     rcx, [rbp+9E40h+var_3A50]
 * 00000001800AD3C5: call    sub_180010F20
 * 00000001800AD3CA: nop
 * 00000001800AD3CB: lea     rcx, [rbp+9E40h+var_3A30]
 * 00000001800AD3D2: call    sub_180010F20
 * 00000001800AD3D7: nop
 * 00000001800AD3D8: lea     rcx, dword_1801C941C
 * 00000001800AD3DF: call    _Init_thread_footer
 * 00000001800AD3E4: mov     rax, [rdi+rbx*8]
 * 00000001800AD3E8: mov     eax, [r15+rax]
 * 00000001800AD3EC: cmp     cs:dword_1801C9420, eax
 * 00000001800AD3F2: jle     loc_1800AD4CF
 * 00000001800AD3F8: lea     rcx, dword_1801C9420
 * 00000001800AD3FF: call    sub_18000C8D0
 * 00000001800AD404: cmp     cs:dword_1801C9420, r14d
 * 00000001800AD40B: jnz     loc_1800AD4CF
 * 00000001800AD411: lea     rax, unk_180147920
 * 00000001800AD418: mov     qword ptr [rbp+9E40h+var_9700], rax
 * 00000001800AD41F: lea     rax, unk_18014E1DC
 * 00000001800AD426: mov     qword ptr [rbp+9E40h+var_9700+8], rax
 * 00000001800AD42D: movups  xmm7, [rbp+9E40h+var_9700]
 * 00000001800AD434: mov     dword ptr [rbp+9E40h+var_7D60], 5
 * 00000001800AD43E: mov     dword ptr [rbp+9E40h+var_7D60+4], esi
 * 00000001800AD444: movups  xmm6, [rbp+9E40h+var_7D60]
 * 00000001800AD44B: call    sub_1800A5D74
 * 00000001800AD450: mov     r8, rax
 * 00000001800AD453: mov     r9d, r12d
 * 00000001800AD456: mov     edx, 1CAh
 * 00000001800AD45B: lea     rcx, [rbp+9E40h+var_39D0]
 * 00000001800AD462: call    sub_180073668
 * 00000001800AD467: nop
 * 00000001800AD468: mov     r8, rax
 * 00000001800AD46B: mov     rdx, r13
 * 00000001800AD46E: lea     rcx, [rbp+9E40h+var_39F0]
 * 00000001800AD475: call    sub_18001B518
 * 00000001800AD47A: nop
 * 00000001800AD47B: lea     r8, aPixel; "/Pixel"
 * 00000001800AD482: mov     rdx, rax
 * 00000001800AD485: lea     rcx, [rbp+9E40h+var_5A10]
 * 00000001800AD48C: call    sub_18001B448
 * 00000001800AD491: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD496: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD49B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD4A0: mov     rcx, rax
 * 00000001800AD4A3: call    sub_18007370C
 * 00000001800AD4A8: nop
 * 00000001800AD4A9: lea     rcx, [rbp+9E40h+var_39F0]
 * 00000001800AD4B0: call    sub_180010F20
 * 00000001800AD4B5: nop
 * 00000001800AD4B6: lea     rcx, [rbp+9E40h+var_39D0]
 * 00000001800AD4BD: call    sub_180010F20
 * 00000001800AD4C2: nop
 * 00000001800AD4C3: lea     rcx, dword_1801C9420
 * 00000001800AD4CA: call    _Init_thread_footer
 * 00000001800AD4CF: mov     rax, [rdi+rbx*8]
 * 00000001800AD4D3: mov     eax, [r15+rax]
 * 00000001800AD4D7: cmp     cs:dword_1801C9424, eax
 * 00000001800AD4DD: jle     loc_1800AD5BA
 * 00000001800AD4E3: lea     rcx, dword_1801C9424
 * 00000001800AD4EA: call    sub_18000C8D0
 * 00000001800AD4EF: cmp     cs:dword_1801C9424, r14d
 * 00000001800AD4F6: jnz     loc_1800AD5BA
 * 00000001800AD4FC: lea     rax, unk_180158180
 * 00000001800AD503: mov     qword ptr [rbp+9E40h+var_96F0], rax
 * 00000001800AD50A: lea     rax, unk_18015EA88
 * 00000001800AD511: mov     qword ptr [rbp+9E40h+var_96F0+8], rax
 * 00000001800AD518: movups  xmm7, [rbp+9E40h+var_96F0]
 * 00000001800AD51F: mov     dword ptr [rbp+9E40h+var_7D40], 5
 * 00000001800AD529: mov     dword ptr [rbp+9E40h+var_7D40+4], esi
 * 00000001800AD52F: movups  xmm6, [rbp+9E40h+var_7D40]
 * 00000001800AD536: call    sub_1800A5D74
 * 00000001800AD53B: mov     r8, rax
 * 00000001800AD53E: mov     r9d, r12d
 * 00000001800AD541: mov     edx, 1D0h
 * 00000001800AD546: lea     rcx, [rbp+9E40h+var_3970]
 * 00000001800AD54D: call    sub_180073668
 * 00000001800AD552: nop
 * 00000001800AD553: mov     r8, rax
 * 00000001800AD556: mov     rdx, r13
 * 00000001800AD559: lea     rcx, [rbp+9E40h+var_3990]
 * 00000001800AD560: call    sub_18001B518
 * 00000001800AD565: nop
 * 00000001800AD566: lea     r8, aPixel; "/Pixel"
 * 00000001800AD56D: mov     rdx, rax
 * 00000001800AD570: lea     rcx, [rbp+9E40h+var_59F0]
 * 00000001800AD577: call    sub_18001B448
 * 00000001800AD57C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD581: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD586: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD58B: mov     rcx, rax
 * 00000001800AD58E: call    sub_18007370C
 * 00000001800AD593: nop
 * 00000001800AD594: lea     rcx, [rbp+9E40h+var_3990]
 * 00000001800AD59B: call    sub_180010F20
 * 00000001800AD5A0: nop
 * 00000001800AD5A1: lea     rcx, [rbp+9E40h+var_3970]
 * 00000001800AD5A8: call    sub_180010F20
 * 00000001800AD5AD: nop
 * 00000001800AD5AE: lea     rcx, dword_1801C9424
 * 00000001800AD5B5: call    _Init_thread_footer
 * 00000001800AD5BA: mov     rax, [rdi+rbx*8]
 * 00000001800AD5BE: mov     eax, [r15+rax]
 * 00000001800AD5C2: cmp     cs:dword_1801C9428, eax
 * 00000001800AD5C8: jle     loc_1800AD6A5
 * 00000001800AD5CE: lea     rcx, dword_1801C9428
 * 00000001800AD5D5: call    sub_18000C8D0
 * 00000001800AD5DA: cmp     cs:dword_1801C9428, r14d
 * 00000001800AD5E1: jnz     loc_1800AD6A5
 * 00000001800AD5E7: lea     rax, unk_180158180
 * 00000001800AD5EE: mov     qword ptr [rbp+9E40h+var_96E0], rax
 * 00000001800AD5F5: lea     rax, unk_18015EA88
 * 00000001800AD5FC: mov     qword ptr [rbp+9E40h+var_96E0+8], rax
 * 00000001800AD603: movups  xmm7, [rbp+9E40h+var_96E0]
 * 00000001800AD60A: mov     dword ptr [rbp+9E40h+var_7D20], 5
 * 00000001800AD614: mov     dword ptr [rbp+9E40h+var_7D20+4], esi
 * 00000001800AD61A: movups  xmm6, [rbp+9E40h+var_7D20]
 * 00000001800AD621: call    sub_1800A5D74
 * 00000001800AD626: mov     r8, rax
 * 00000001800AD629: mov     r9d, r12d
 * 00000001800AD62C: mov     edx, 1D2h
 * 00000001800AD631: lea     rcx, [rbp+9E40h+var_3910]
 * 00000001800AD638: call    sub_180073668
 * 00000001800AD63D: nop
 * 00000001800AD63E: mov     r8, rax
 * 00000001800AD641: mov     rdx, r13
 * 00000001800AD644: lea     rcx, [rbp+9E40h+var_3930]
 * 00000001800AD64B: call    sub_18001B518
 * 00000001800AD650: nop
 * 00000001800AD651: lea     r8, aPixel; "/Pixel"
 * 00000001800AD658: mov     rdx, rax
 * 00000001800AD65B: lea     rcx, [rbp+9E40h+var_59D0]
 * 00000001800AD662: call    sub_18001B448
 * 00000001800AD667: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD66C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD671: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD676: mov     rcx, rax
 * 00000001800AD679: call    sub_18007370C
 * 00000001800AD67E: nop
 * 00000001800AD67F: lea     rcx, [rbp+9E40h+var_3930]
 * 00000001800AD686: call    sub_180010F20
 * 00000001800AD68B: nop
 * 00000001800AD68C: lea     rcx, [rbp+9E40h+var_3910]
 * 00000001800AD693: call    sub_180010F20
 * 00000001800AD698: nop
 * 00000001800AD699: lea     rcx, dword_1801C9428
 * 00000001800AD6A0: call    _Init_thread_footer
 * 00000001800AD6A5: mov     rax, [rdi+rbx*8]
 * 00000001800AD6A9: mov     eax, [r15+rax]
 * 00000001800AD6AD: cmp     cs:dword_1801C942C, eax
 * 00000001800AD6B3: jle     loc_1800AD790
 * 00000001800AD6B9: lea     rcx, dword_1801C942C
 * 00000001800AD6C0: call    sub_18000C8D0
 * 00000001800AD6C5: cmp     cs:dword_1801C942C, r14d
 * 00000001800AD6CC: jnz     loc_1800AD790
 * 00000001800AD6D2: lea     rax, unk_1801516C0
 * 00000001800AD6D9: mov     qword ptr [rbp+9E40h+var_96D0], rax
 * 00000001800AD6E0: lea     rax, unk_18015817C
 * 00000001800AD6E7: mov     qword ptr [rbp+9E40h+var_96D0+8], rax
 * 00000001800AD6EE: movups  xmm7, [rbp+9E40h+var_96D0]
 * 00000001800AD6F5: mov     dword ptr [rbp+9E40h+var_7D00], 5
 * 00000001800AD6FF: mov     dword ptr [rbp+9E40h+var_7D00+4], esi
 * 00000001800AD705: movups  xmm6, [rbp+9E40h+var_7D00]
 * 00000001800AD70C: call    sub_1800A5D74
 * 00000001800AD711: mov     r8, rax
 * 00000001800AD714: mov     r9d, r12d
 * 00000001800AD717: mov     edx, 1D8h
 * 00000001800AD71C: lea     rcx, [rbp+9E40h+var_38B0]
 * 00000001800AD723: call    sub_180073668
 * 00000001800AD728: nop
 * 00000001800AD729: mov     r8, rax
 * 00000001800AD72C: mov     rdx, r13
 * 00000001800AD72F: lea     rcx, [rbp+9E40h+var_38D0]
 * 00000001800AD736: call    sub_18001B518
 * 00000001800AD73B: nop
 * 00000001800AD73C: lea     r8, aPixel; "/Pixel"
 * 00000001800AD743: mov     rdx, rax
 * 00000001800AD746: lea     rcx, [rbp+9E40h+var_59B0]
 * 00000001800AD74D: call    sub_18001B448
 * 00000001800AD752: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD757: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD75C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD761: mov     rcx, rax
 * 00000001800AD764: call    sub_18007370C
 * 00000001800AD769: nop
 * 00000001800AD76A: lea     rcx, [rbp+9E40h+var_38D0]
 * 00000001800AD771: call    sub_180010F20
 * 00000001800AD776: nop
 * 00000001800AD777: lea     rcx, [rbp+9E40h+var_38B0]
 * 00000001800AD77E: call    sub_180010F20
 * 00000001800AD783: nop
 * 00000001800AD784: lea     rcx, dword_1801C942C
 * 00000001800AD78B: call    _Init_thread_footer
 * 00000001800AD790: mov     rax, [rdi+rbx*8]
 * 00000001800AD794: mov     eax, [r15+rax]
 * 00000001800AD798: cmp     cs:dword_1801C9430, eax
 * 00000001800AD79E: jle     loc_1800AD87B
 * 00000001800AD7A4: lea     rcx, dword_1801C9430
 * 00000001800AD7AB: call    sub_18000C8D0
 * 00000001800AD7B0: cmp     cs:dword_1801C9430, r14d
 * 00000001800AD7B7: jnz     loc_1800AD87B
 * 00000001800AD7BD: lea     rax, unk_1801516C0
 * 00000001800AD7C4: mov     qword ptr [rbp+9E40h+var_96C0], rax
 * 00000001800AD7CB: lea     rax, unk_18015817C
 * 00000001800AD7D2: mov     qword ptr [rbp+9E40h+var_96C0+8], rax
 * 00000001800AD7D9: movups  xmm7, [rbp+9E40h+var_96C0]
 * 00000001800AD7E0: mov     dword ptr [rbp+9E40h+var_7CE0], 5
 * 00000001800AD7EA: mov     dword ptr [rbp+9E40h+var_7CE0+4], esi
 * 00000001800AD7F0: movups  xmm6, [rbp+9E40h+var_7CE0]
 * 00000001800AD7F7: call    sub_1800A5D74
 * 00000001800AD7FC: mov     r8, rax
 * 00000001800AD7FF: mov     r9d, r12d
 * 00000001800AD802: mov     edx, 1DAh
 * 00000001800AD807: lea     rcx, [rbp+9E40h+var_3850]
 * 00000001800AD80E: call    sub_180073668
 * 00000001800AD813: nop
 * 00000001800AD814: mov     r8, rax
 * 00000001800AD817: mov     rdx, r13
 * 00000001800AD81A: lea     rcx, [rbp+9E40h+var_3870]
 * 00000001800AD821: call    sub_18001B518
 * 00000001800AD826: nop
 * 00000001800AD827: lea     r8, aPixel; "/Pixel"
 * 00000001800AD82E: mov     rdx, rax
 * 00000001800AD831: lea     rcx, [rbp+9E40h+var_5990]
 * 00000001800AD838: call    sub_18001B448
 * 00000001800AD83D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD842: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD847: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD84C: mov     rcx, rax
 * 00000001800AD84F: call    sub_18007370C
 * 00000001800AD854: nop
 * 00000001800AD855: lea     rcx, [rbp+9E40h+var_3870]
 * 00000001800AD85C: call    sub_180010F20
 * 00000001800AD861: nop
 * 00000001800AD862: lea     rcx, [rbp+9E40h+var_3850]
 * 00000001800AD869: call    sub_180010F20
 * 00000001800AD86E: nop
 * 00000001800AD86F: lea     rcx, dword_1801C9430
 * 00000001800AD876: call    _Init_thread_footer
 * 00000001800AD87B: mov     rax, [rdi+rbx*8]
 * 00000001800AD87F: mov     eax, [r15+rax]
 * 00000001800AD883: cmp     cs:dword_1801C9434, eax
 * 00000001800AD889: jle     loc_1800AD966
 * 00000001800AD88F: lea     rcx, dword_1801C9434
 * 00000001800AD896: call    sub_18000C8D0
 * 00000001800AD89B: cmp     cs:dword_1801C9434, r14d
 * 00000001800AD8A2: jnz     loc_1800AD966
 * 00000001800AD8A8: lea     rax, unk_180176460
 * 00000001800AD8AF: mov     qword ptr [rbp+9E40h+var_96B0], rax
 * 00000001800AD8B6: lea     rax, unk_18017CB8C
 * 00000001800AD8BD: mov     qword ptr [rbp+9E40h+var_96B0+8], rax
 * 00000001800AD8C4: movups  xmm7, [rbp+9E40h+var_96B0]
 * 00000001800AD8CB: mov     dword ptr [rbp+9E40h+var_7CC0], 5
 * 00000001800AD8D5: mov     dword ptr [rbp+9E40h+var_7CC0+4], esi
 * 00000001800AD8DB: movups  xmm6, [rbp+9E40h+var_7CC0]
 * 00000001800AD8E2: call    sub_1800A5D74
 * 00000001800AD8E7: mov     r8, rax
 * 00000001800AD8EA: mov     r9d, r12d
 * 00000001800AD8ED: mov     edx, 1E0h
 * 00000001800AD8F2: lea     rcx, [rbp+9E40h+var_37F0]
 * 00000001800AD8F9: call    sub_180073668
 * 00000001800AD8FE: nop
 * 00000001800AD8FF: mov     r8, rax
 * 00000001800AD902: mov     rdx, r13
 * 00000001800AD905: lea     rcx, [rbp+9E40h+var_3810]
 * 00000001800AD90C: call    sub_18001B518
 * 00000001800AD911: nop
 * 00000001800AD912: lea     r8, aPixel; "/Pixel"
 * 00000001800AD919: mov     rdx, rax
 * 00000001800AD91C: lea     rcx, [rbp+9E40h+var_5970]
 * 00000001800AD923: call    sub_18001B448
 * 00000001800AD928: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AD92D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AD932: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AD937: mov     rcx, rax
 * 00000001800AD93A: call    sub_18007370C
 * 00000001800AD93F: nop
 * 00000001800AD940: lea     rcx, [rbp+9E40h+var_3810]
 * 00000001800AD947: call    sub_180010F20
 * 00000001800AD94C: nop
 * 00000001800AD94D: lea     rcx, [rbp+9E40h+var_37F0]
 * 00000001800AD954: call    sub_180010F20
 * 00000001800AD959: nop
 * 00000001800AD95A: lea     rcx, dword_1801C9434
 * 00000001800AD961: call    _Init_thread_footer
 * 00000001800AD966: mov     rax, [rdi+rbx*8]
 * 00000001800AD96A: mov     eax, [r15+rax]
 * 00000001800AD96E: cmp     cs:dword_1801C9438, eax
 * 00000001800AD974: jle     loc_1800ADA51
 * 00000001800AD97A: lea     rcx, dword_1801C9438
 * 00000001800AD981: call    sub_18000C8D0
 * 00000001800AD986: cmp     cs:dword_1801C9438, r14d
 * 00000001800AD98D: jnz     loc_1800ADA51
 * 00000001800AD993: lea     rax, unk_180176460
 * 00000001800AD99A: mov     qword ptr [rbp+9E40h+var_96A0], rax
 * 00000001800AD9A1: lea     rax, unk_18017CB8C
 * 00000001800AD9A8: mov     qword ptr [rbp+9E40h+var_96A0+8], rax
 * 00000001800AD9AF: movups  xmm7, [rbp+9E40h+var_96A0]
 * 00000001800AD9B6: mov     dword ptr [rbp+9E40h+var_7CA0], 5
 * 00000001800AD9C0: mov     dword ptr [rbp+9E40h+var_7CA0+4], esi
 * 00000001800AD9C6: movups  xmm6, [rbp+9E40h+var_7CA0]
 * 00000001800AD9CD: call    sub_1800A5D74
 * 00000001800AD9D2: mov     r8, rax
 * 00000001800AD9D5: mov     r9d, r12d
 * 00000001800AD9D8: mov     edx, 1E2h
 * 00000001800AD9DD: lea     rcx, [rbp+9E40h+var_3790]
 * 00000001800AD9E4: call    sub_180073668
 * 00000001800AD9E9: nop
 * 00000001800AD9EA: mov     r8, rax
 * 00000001800AD9ED: mov     rdx, r13
 * 00000001800AD9F0: lea     rcx, [rbp+9E40h+var_37B0]
 * 00000001800AD9F7: call    sub_18001B518
 * 00000001800AD9FC: nop
 * 00000001800AD9FD: lea     r8, aPixel; "/Pixel"
 * 00000001800ADA04: mov     rdx, rax
 * 00000001800ADA07: lea     rcx, [rbp+9E40h+var_5950]
 * 00000001800ADA0E: call    sub_18001B448
 * 00000001800ADA13: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADA18: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADA1D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADA22: mov     rcx, rax
 * 00000001800ADA25: call    sub_18007370C
 * 00000001800ADA2A: nop
 * 00000001800ADA2B: lea     rcx, [rbp+9E40h+var_37B0]
 * 00000001800ADA32: call    sub_180010F20
 * 00000001800ADA37: nop
 * 00000001800ADA38: lea     rcx, [rbp+9E40h+var_3790]
 * 00000001800ADA3F: call    sub_180010F20
 * 00000001800ADA44: nop
 * 00000001800ADA45: lea     rcx, dword_1801C9438
 * 00000001800ADA4C: call    _Init_thread_footer
 * 00000001800ADA51: mov     rax, [rdi+rbx*8]
 * 00000001800ADA55: mov     eax, [r15+rax]
 * 00000001800ADA59: cmp     cs:dword_1801C943C, eax
 * 00000001800ADA5F: jle     loc_1800ADB3C
 * 00000001800ADA65: lea     rcx, dword_1801C943C
 * 00000001800ADA6C: call    sub_18000C8D0
 * 00000001800ADA71: cmp     cs:dword_1801C943C, r14d
 * 00000001800ADA78: jnz     loc_1800ADB3C
 * 00000001800ADA7E: lea     rax, unk_180147920
 * 00000001800ADA85: mov     qword ptr [rbp+9E40h+var_9690], rax
 * 00000001800ADA8C: lea     rax, unk_18014E1DC
 * 00000001800ADA93: mov     qword ptr [rbp+9E40h+var_9690+8], rax
 * 00000001800ADA9A: movups  xmm7, [rbp+9E40h+var_9690]
 * 00000001800ADAA1: mov     dword ptr [rbp+9E40h+var_7C80], 5
 * 00000001800ADAAB: mov     dword ptr [rbp+9E40h+var_7C80+4], esi
 * 00000001800ADAB1: movups  xmm6, [rbp+9E40h+var_7C80]
 * 00000001800ADAB8: call    sub_1800A5D74
 * 00000001800ADABD: mov     r8, rax
 * 00000001800ADAC0: mov     r9d, r12d
 * 00000001800ADAC3: mov     edx, 1E8h
 * 00000001800ADAC8: lea     rcx, [rbp+9E40h+var_3730]
 * 00000001800ADACF: call    sub_180073668
 * 00000001800ADAD4: nop
 * 00000001800ADAD5: mov     r8, rax
 * 00000001800ADAD8: mov     rdx, r13
 * 00000001800ADADB: lea     rcx, [rbp+9E40h+var_3750]
 * 00000001800ADAE2: call    sub_18001B518
 * 00000001800ADAE7: nop
 * 00000001800ADAE8: lea     r8, aPixel; "/Pixel"
 * 00000001800ADAEF: mov     rdx, rax
 * 00000001800ADAF2: lea     rcx, [rbp+9E40h+var_5930]
 * 00000001800ADAF9: call    sub_18001B448
 * 00000001800ADAFE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADB03: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADB08: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADB0D: mov     rcx, rax
 * 00000001800ADB10: call    sub_18007370C
 * 00000001800ADB15: nop
 * 00000001800ADB16: lea     rcx, [rbp+9E40h+var_3750]
 * 00000001800ADB1D: call    sub_180010F20
 * 00000001800ADB22: nop
 * 00000001800ADB23: lea     rcx, [rbp+9E40h+var_3730]
 * 00000001800ADB2A: call    sub_180010F20
 * 00000001800ADB2F: nop
 * 00000001800ADB30: lea     rcx, dword_1801C943C
 * 00000001800ADB37: call    _Init_thread_footer
 * 00000001800ADB3C: mov     rax, [rdi+rbx*8]
 * 00000001800ADB40: mov     eax, [r15+rax]
 * 00000001800ADB44: cmp     cs:dword_1801C9440, eax
 * 00000001800ADB4A: jle     loc_1800ADC27
 * 00000001800ADB50: lea     rcx, dword_1801C9440
 * 00000001800ADB57: call    sub_18000C8D0
 * 00000001800ADB5C: cmp     cs:dword_1801C9440, r14d
 * 00000001800ADB63: jnz     loc_1800ADC27
 * 00000001800ADB69: lea     rax, unk_180147920
 * 00000001800ADB70: mov     qword ptr [rbp+9E40h+var_9680], rax
 * 00000001800ADB77: lea     rax, unk_18014E1DC
 * 00000001800ADB7E: mov     qword ptr [rbp+9E40h+var_9680+8], rax
 * 00000001800ADB85: movups  xmm7, [rbp+9E40h+var_9680]
 * 00000001800ADB8C: mov     dword ptr [rbp+9E40h+var_7C60], 5
 * 00000001800ADB96: mov     dword ptr [rbp+9E40h+var_7C60+4], esi
 * 00000001800ADB9C: movups  xmm6, [rbp+9E40h+var_7C60]
 * 00000001800ADBA3: call    sub_1800A5D74
 * 00000001800ADBA8: mov     r8, rax
 * 00000001800ADBAB: mov     r9d, r12d
 * 00000001800ADBAE: mov     edx, 1EAh
 * 00000001800ADBB3: lea     rcx, [rbp+9E40h+var_36D0]
 * 00000001800ADBBA: call    sub_180073668
 * 00000001800ADBBF: nop
 * 00000001800ADBC0: mov     r8, rax
 * 00000001800ADBC3: mov     rdx, r13
 * 00000001800ADBC6: lea     rcx, [rbp+9E40h+var_36F0]
 * 00000001800ADBCD: call    sub_18001B518
 * 00000001800ADBD2: nop
 * 00000001800ADBD3: lea     r8, aPixel; "/Pixel"
 * 00000001800ADBDA: mov     rdx, rax
 * 00000001800ADBDD: lea     rcx, [rbp+9E40h+var_5910]
 * 00000001800ADBE4: call    sub_18001B448
 * 00000001800ADBE9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADBEE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADBF3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADBF8: mov     rcx, rax
 * 00000001800ADBFB: call    sub_18007370C
 * 00000001800ADC00: nop
 * 00000001800ADC01: lea     rcx, [rbp+9E40h+var_36F0]
 * 00000001800ADC08: call    sub_180010F20
 * 00000001800ADC0D: nop
 * 00000001800ADC0E: lea     rcx, [rbp+9E40h+var_36D0]
 * 00000001800ADC15: call    sub_180010F20
 * 00000001800ADC1A: nop
 * 00000001800ADC1B: lea     rcx, dword_1801C9440
 * 00000001800ADC22: call    _Init_thread_footer
 * 00000001800ADC27: mov     rax, [rdi+rbx*8]
 * 00000001800ADC2B: mov     eax, [r15+rax]
 * 00000001800ADC2F: cmp     cs:dword_1801C9444, eax
 * 00000001800ADC35: jle     loc_1800ADD12
 * 00000001800ADC3B: lea     rcx, dword_1801C9444
 * 00000001800ADC42: call    sub_18000C8D0
 * 00000001800ADC47: cmp     cs:dword_1801C9444, r14d
 * 00000001800ADC4E: jnz     loc_1800ADD12
 * 00000001800ADC54: lea     rax, unk_180158180
 * 00000001800ADC5B: mov     qword ptr [rbp+9E40h+var_9670], rax
 * 00000001800ADC62: lea     rax, unk_18015EA88
 * 00000001800ADC69: mov     qword ptr [rbp+9E40h+var_9670+8], rax
 * 00000001800ADC70: movups  xmm7, [rbp+9E40h+var_9670]
 * 00000001800ADC77: mov     dword ptr [rbp+9E40h+var_7C40], 5
 * 00000001800ADC81: mov     dword ptr [rbp+9E40h+var_7C40+4], esi
 * 00000001800ADC87: movups  xmm6, [rbp+9E40h+var_7C40]
 * 00000001800ADC8E: call    sub_1800A5D74
 * 00000001800ADC93: mov     r8, rax
 * 00000001800ADC96: mov     r9d, r12d
 * 00000001800ADC99: mov     edx, 1F0h
 * 00000001800ADC9E: lea     rcx, [rbp+9E40h+var_3670]
 * 00000001800ADCA5: call    sub_180073668
 * 00000001800ADCAA: nop
 * 00000001800ADCAB: mov     r8, rax
 * 00000001800ADCAE: mov     rdx, r13
 * 00000001800ADCB1: lea     rcx, [rbp+9E40h+var_3690]
 * 00000001800ADCB8: call    sub_18001B518
 * 00000001800ADCBD: nop
 * 00000001800ADCBE: lea     r8, aPixel; "/Pixel"
 * 00000001800ADCC5: mov     rdx, rax
 * 00000001800ADCC8: lea     rcx, [rbp+9E40h+var_58F0]
 * 00000001800ADCCF: call    sub_18001B448
 * 00000001800ADCD4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADCD9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADCDE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADCE3: mov     rcx, rax
 * 00000001800ADCE6: call    sub_18007370C
 * 00000001800ADCEB: nop
 * 00000001800ADCEC: lea     rcx, [rbp+9E40h+var_3690]
 * 00000001800ADCF3: call    sub_180010F20
 * 00000001800ADCF8: nop
 * 00000001800ADCF9: lea     rcx, [rbp+9E40h+var_3670]
 * 00000001800ADD00: call    sub_180010F20
 * 00000001800ADD05: nop
 * 00000001800ADD06: lea     rcx, dword_1801C9444
 * 00000001800ADD0D: call    _Init_thread_footer
 * 00000001800ADD12: mov     rax, [rdi+rbx*8]
 * 00000001800ADD16: mov     eax, [r15+rax]
 * 00000001800ADD1A: cmp     cs:dword_1801C9448, eax
 * 00000001800ADD20: jle     loc_1800ADDFD
 * 00000001800ADD26: lea     rcx, dword_1801C9448
 * 00000001800ADD2D: call    sub_18000C8D0
 * 00000001800ADD32: cmp     cs:dword_1801C9448, r14d
 * 00000001800ADD39: jnz     loc_1800ADDFD
 * 00000001800ADD3F: lea     rax, unk_180158180
 * 00000001800ADD46: mov     qword ptr [rbp+9E40h+var_9660], rax
 * 00000001800ADD4D: lea     rax, unk_18015EA88
 * 00000001800ADD54: mov     qword ptr [rbp+9E40h+var_9660+8], rax
 * 00000001800ADD5B: movups  xmm7, [rbp+9E40h+var_9660]
 * 00000001800ADD62: mov     dword ptr [rbp+9E40h+var_7C20], 5
 * 00000001800ADD6C: mov     dword ptr [rbp+9E40h+var_7C20+4], esi
 * 00000001800ADD72: movups  xmm6, [rbp+9E40h+var_7C20]
 * 00000001800ADD79: call    sub_1800A5D74
 * 00000001800ADD7E: mov     r8, rax
 * 00000001800ADD81: mov     r9d, r12d
 * 00000001800ADD84: mov     edx, 1F2h
 * 00000001800ADD89: lea     rcx, [rbp+9E40h+var_3610]
 * 00000001800ADD90: call    sub_180073668
 * 00000001800ADD95: nop
 * 00000001800ADD96: mov     r8, rax
 * 00000001800ADD99: mov     rdx, r13
 * 00000001800ADD9C: lea     rcx, [rbp+9E40h+var_3630]
 * 00000001800ADDA3: call    sub_18001B518
 * 00000001800ADDA8: nop
 * 00000001800ADDA9: lea     r8, aPixel; "/Pixel"
 * 00000001800ADDB0: mov     rdx, rax
 * 00000001800ADDB3: lea     rcx, [rbp+9E40h+var_58D0]
 * 00000001800ADDBA: call    sub_18001B448
 * 00000001800ADDBF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADDC4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADDC9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADDCE: mov     rcx, rax
 * 00000001800ADDD1: call    sub_18007370C
 * 00000001800ADDD6: nop
 * 00000001800ADDD7: lea     rcx, [rbp+9E40h+var_3630]
 * 00000001800ADDDE: call    sub_180010F20
 * 00000001800ADDE3: nop
 * 00000001800ADDE4: lea     rcx, [rbp+9E40h+var_3610]
 * 00000001800ADDEB: call    sub_180010F20
 * 00000001800ADDF0: nop
 * 00000001800ADDF1: lea     rcx, dword_1801C9448
 * 00000001800ADDF8: call    _Init_thread_footer
 * 00000001800ADDFD: mov     rax, [rdi+rbx*8]
 * 00000001800ADE01: mov     eax, [r15+rax]
 * 00000001800ADE05: cmp     cs:dword_1801C944C, eax
 * 00000001800ADE0B: jle     loc_1800ADEE8
 * 00000001800ADE11: lea     rcx, dword_1801C944C
 * 00000001800ADE18: call    sub_18000C8D0
 * 00000001800ADE1D: cmp     cs:dword_1801C944C, r14d
 * 00000001800ADE24: jnz     loc_1800ADEE8
 * 00000001800ADE2A: lea     rax, unk_1801516C0
 * 00000001800ADE31: mov     qword ptr [rbp+9E40h+var_9650], rax
 * 00000001800ADE38: lea     rax, unk_18015817C
 * 00000001800ADE3F: mov     qword ptr [rbp+9E40h+var_9650+8], rax
 * 00000001800ADE46: movups  xmm7, [rbp+9E40h+var_9650]
 * 00000001800ADE4D: mov     dword ptr [rbp+9E40h+var_7C00], 5
 * 00000001800ADE57: mov     dword ptr [rbp+9E40h+var_7C00+4], esi
 * 00000001800ADE5D: movups  xmm6, [rbp+9E40h+var_7C00]
 * 00000001800ADE64: call    sub_1800A5D74
 * 00000001800ADE69: mov     r8, rax
 * 00000001800ADE6C: mov     r9d, r12d
 * 00000001800ADE6F: mov     edx, 1F8h
 * 00000001800ADE74: lea     rcx, [rbp+9E40h+var_35B0]
 * 00000001800ADE7B: call    sub_180073668
 * 00000001800ADE80: nop
 * 00000001800ADE81: mov     r8, rax
 * 00000001800ADE84: mov     rdx, r13
 * 00000001800ADE87: lea     rcx, [rbp+9E40h+var_35D0]
 * 00000001800ADE8E: call    sub_18001B518
 * 00000001800ADE93: nop
 * 00000001800ADE94: lea     r8, aPixel; "/Pixel"
 * 00000001800ADE9B: mov     rdx, rax
 * 00000001800ADE9E: lea     rcx, [rbp+9E40h+var_58B0]
 * 00000001800ADEA5: call    sub_18001B448
 * 00000001800ADEAA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADEAF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADEB4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADEB9: mov     rcx, rax
 * 00000001800ADEBC: call    sub_18007370C
 * 00000001800ADEC1: nop
 * 00000001800ADEC2: lea     rcx, [rbp+9E40h+var_35D0]
 * 00000001800ADEC9: call    sub_180010F20
 * 00000001800ADECE: nop
 * 00000001800ADECF: lea     rcx, [rbp+9E40h+var_35B0]
 * 00000001800ADED6: call    sub_180010F20
 * 00000001800ADEDB: nop
 * 00000001800ADEDC: lea     rcx, dword_1801C944C
 * 00000001800ADEE3: call    _Init_thread_footer
 * 00000001800ADEE8: mov     rax, [rdi+rbx*8]
 * 00000001800ADEEC: mov     eax, [r15+rax]
 * 00000001800ADEF0: cmp     cs:dword_1801C9450, eax
 * 00000001800ADEF6: jle     loc_1800ADFD3
 * 00000001800ADEFC: lea     rcx, dword_1801C9450
 * 00000001800ADF03: call    sub_18000C8D0
 * 00000001800ADF08: cmp     cs:dword_1801C9450, r14d
 * 00000001800ADF0F: jnz     loc_1800ADFD3
 * 00000001800ADF15: lea     rax, unk_1801516C0
 * 00000001800ADF1C: mov     qword ptr [rbp+9E40h+var_9640], rax
 * 00000001800ADF23: lea     rax, unk_18015817C
 * 00000001800ADF2A: mov     qword ptr [rbp+9E40h+var_9640+8], rax
 * 00000001800ADF31: movups  xmm7, [rbp+9E40h+var_9640]
 * 00000001800ADF38: mov     dword ptr [rbp+9E40h+var_7BE0], 5
 * 00000001800ADF42: mov     dword ptr [rbp+9E40h+var_7BE0+4], esi
 * 00000001800ADF48: movups  xmm6, [rbp+9E40h+var_7BE0]
 * 00000001800ADF4F: call    sub_1800A5D74
 * 00000001800ADF54: mov     r8, rax
 * 00000001800ADF57: mov     r9d, r12d
 * 00000001800ADF5A: mov     edx, 1FAh
 * 00000001800ADF5F: lea     rcx, [rbp+9E40h+var_3550]
 * 00000001800ADF66: call    sub_180073668
 * 00000001800ADF6B: nop
 * 00000001800ADF6C: mov     r8, rax
 * 00000001800ADF6F: mov     rdx, r13
 * 00000001800ADF72: lea     rcx, [rbp+9E40h+var_3570]
 * 00000001800ADF79: call    sub_18001B518
 * 00000001800ADF7E: nop
 * 00000001800ADF7F: lea     r8, aPixel; "/Pixel"
 * 00000001800ADF86: mov     rdx, rax
 * 00000001800ADF89: lea     rcx, [rbp+9E40h+var_5890]
 * 00000001800ADF90: call    sub_18001B448
 * 00000001800ADF95: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800ADF9A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800ADF9F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800ADFA4: mov     rcx, rax
 * 00000001800ADFA7: call    sub_18007370C
 * 00000001800ADFAC: nop
 * 00000001800ADFAD: lea     rcx, [rbp+9E40h+var_3570]
 * 00000001800ADFB4: call    sub_180010F20
 * 00000001800ADFB9: nop
 * 00000001800ADFBA: lea     rcx, [rbp+9E40h+var_3550]
 * 00000001800ADFC1: call    sub_180010F20
 * 00000001800ADFC6: nop
 * 00000001800ADFC7: lea     rcx, dword_1801C9450
 * 00000001800ADFCE: call    _Init_thread_footer
 * 00000001800ADFD3: mov     rax, [rdi+rbx*8]
 * 00000001800ADFD7: mov     eax, [r15+rax]
 * 00000001800ADFDB: cmp     cs:dword_1801C9454, eax
 * 00000001800ADFE1: jle     loc_1800AE0B7
 * 00000001800ADFE7: lea     rcx, dword_1801C9454
 * 00000001800ADFEE: call    sub_18000C8D0
 * 00000001800ADFF3: cmp     cs:dword_1801C9454, r14d
 * 00000001800ADFFA: jnz     loc_1800AE0B7
 * 00000001800AE000: lea     rax, unk_180144EE0
 * 00000001800AE007: mov     qword ptr [rbp+9E40h+var_9630], rax
 * 00000001800AE00E: lea     rax, unk_180145EF8
 * 00000001800AE015: mov     qword ptr [rbp+9E40h+var_9630+8], rax
 * 00000001800AE01C: movups  xmm7, [rbp+9E40h+var_9630]
 * 00000001800AE023: mov     dword ptr [rbp+9E40h+var_7BC0], esi
 * 00000001800AE029: mov     dword ptr [rbp+9E40h+var_7BC0+4], esi
 * 00000001800AE02F: movups  xmm6, [rbp+9E40h+var_7BC0]
 * 00000001800AE036: call    sub_1800A5D74
 * 00000001800AE03B: mov     r8, rax
 * 00000001800AE03E: mov     r9d, r12d
 * 00000001800AE041: xor     edx, edx
 * 00000001800AE043: lea     rcx, [rbp+9E40h+var_34F0]
 * 00000001800AE04A: call    sub_180073668
 * 00000001800AE04F: nop
 * 00000001800AE050: mov     r8, rax
 * 00000001800AE053: mov     rdx, r13
 * 00000001800AE056: lea     rcx, [rbp+9E40h+var_3510]
 * 00000001800AE05D: call    sub_18001B518
 * 00000001800AE062: nop
 * 00000001800AE063: lea     r8, aVertex; "/Vertex"
 * 00000001800AE06A: mov     rdx, rax
 * 00000001800AE06D: lea     rcx, [rbp+9E40h+var_5870]
 * 00000001800AE074: call    sub_18001B448
 * 00000001800AE079: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE07E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE083: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE088: mov     rcx, rax
 * 00000001800AE08B: call    sub_18007370C
 * 00000001800AE090: nop
 * 00000001800AE091: lea     rcx, [rbp+9E40h+var_3510]
 * 00000001800AE098: call    sub_180010F20
 * 00000001800AE09D: nop
 * 00000001800AE09E: lea     rcx, [rbp+9E40h+var_34F0]
 * 00000001800AE0A5: call    sub_180010F20
 * 00000001800AE0AA: nop
 * 00000001800AE0AB: lea     rcx, dword_1801C9454
 * 00000001800AE0B2: call    _Init_thread_footer
 * 00000001800AE0B7: mov     rax, [rdi+rbx*8]
 * 00000001800AE0BB: mov     eax, [r15+rax]
 * 00000001800AE0BF: cmp     cs:dword_1801C9458, eax
 * 00000001800AE0C5: jle     loc_1800AE19C
 * 00000001800AE0CB: lea     rcx, dword_1801C9458
 * 00000001800AE0D2: call    sub_18000C8D0
 * 00000001800AE0D7: cmp     cs:dword_1801C9458, r14d
 * 00000001800AE0DE: jnz     loc_1800AE19C
 * 00000001800AE0E4: lea     rax, unk_18013B210
 * 00000001800AE0EB: mov     qword ptr [rbp+9E40h+var_9620], rax
 * 00000001800AE0F2: lea     rax, unk_18013B794
 * 00000001800AE0F9: mov     qword ptr [rbp+9E40h+var_9620+8], rax
 * 00000001800AE100: movups  xmm7, [rbp+9E40h+var_9620]
 * 00000001800AE107: mov     dword ptr [rbp+9E40h+var_7BA0], esi
 * 00000001800AE10D: mov     dword ptr [rbp+9E40h+var_7BA0+4], esi
 * 00000001800AE113: movups  xmm6, [rbp+9E40h+var_7BA0]
 * 00000001800AE11A: call    sub_1800A5D74
 * 00000001800AE11F: mov     r8, rax
 * 00000001800AE122: mov     r9d, r12d
 * 00000001800AE125: mov     rdx, rsi
 * 00000001800AE128: lea     rcx, [rbp+9E40h+var_3490]
 * 00000001800AE12F: call    sub_180073668
 * 00000001800AE134: nop
 * 00000001800AE135: mov     r8, rax
 * 00000001800AE138: mov     rdx, r13
 * 00000001800AE13B: lea     rcx, [rbp+9E40h+var_34B0]
 * 00000001800AE142: call    sub_18001B518
 * 00000001800AE147: nop
 * 00000001800AE148: lea     r8, aVertex; "/Vertex"
 * 00000001800AE14F: mov     rdx, rax
 * 00000001800AE152: lea     rcx, [rbp+9E40h+var_5850]
 * 00000001800AE159: call    sub_18001B448
 * 00000001800AE15E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE163: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE168: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE16D: mov     rcx, rax
 * 00000001800AE170: call    sub_18007370C
 * 00000001800AE175: nop
 * 00000001800AE176: lea     rcx, [rbp+9E40h+var_34B0]
 * 00000001800AE17D: call    sub_180010F20
 * 00000001800AE182: nop
 * 00000001800AE183: lea     rcx, [rbp+9E40h+var_3490]
 * 00000001800AE18A: call    sub_180010F20
 * 00000001800AE18F: nop
 * 00000001800AE190: lea     rcx, dword_1801C9458
 * 00000001800AE197: call    _Init_thread_footer
 * 00000001800AE19C: mov     rax, [rdi+rbx*8]
 * 00000001800AE1A0: mov     ecx, [r15+rax]
 * 00000001800AE1A4: cmp     cs:dword_1801C945C, ecx
 * 00000001800AE1AA: jle     loc_1800AE283
 * 00000001800AE1B0: lea     rcx, dword_1801C945C
 * 00000001800AE1B7: call    sub_18000C8D0
 * 00000001800AE1BC: cmp     cs:dword_1801C945C, r14d
 * 00000001800AE1C3: jnz     loc_1800AE283
 * 00000001800AE1C9: lea     rax, unk_180144EE0
 * 00000001800AE1D0: mov     qword ptr [rbp+9E40h+var_9610], rax
 * 00000001800AE1D7: lea     rax, unk_180145EF8
 * 00000001800AE1DE: mov     qword ptr [rbp+9E40h+var_9610+8], rax
 * 00000001800AE1E5: movups  xmm7, [rbp+9E40h+var_9610]
 * 00000001800AE1EC: mov     dword ptr [rbp+9E40h+var_7B80], esi
 * 00000001800AE1F2: mov     dword ptr [rbp+9E40h+var_7B80+4], esi
 * 00000001800AE1F8: movups  xmm6, [rbp+9E40h+var_7B80]
 * 00000001800AE1FF: call    sub_1800A5D74
 * 00000001800AE204: mov     r8, rax
 * 00000001800AE207: mov     r9d, r12d
 * 00000001800AE20A: mov     edx, 2
 * 00000001800AE20F: lea     rcx, [rbp+9E40h+var_3430]
 * 00000001800AE216: call    sub_180073668
 * 00000001800AE21B: nop
 * 00000001800AE21C: mov     r8, rax
 * 00000001800AE21F: mov     rdx, r13
 * 00000001800AE222: lea     rcx, [rbp+9E40h+var_3450]
 * 00000001800AE229: call    sub_18001B518
 * 00000001800AE22E: nop
 * 00000001800AE22F: lea     r8, aVertex; "/Vertex"
 * 00000001800AE236: mov     rdx, rax
 * 00000001800AE239: lea     rcx, [rbp+9E40h+var_5830]
 * 00000001800AE240: call    sub_18001B448
 * 00000001800AE245: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE24A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE24F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE254: mov     rcx, rax
 * 00000001800AE257: call    sub_18007370C
 * 00000001800AE25C: nop
 * 00000001800AE25D: lea     rcx, [rbp+9E40h+var_3450]
 * 00000001800AE264: call    sub_180010F20
 * 00000001800AE269: nop
 * 00000001800AE26A: lea     rcx, [rbp+9E40h+var_3430]
 * 00000001800AE271: call    sub_180010F20
 * 00000001800AE276: nop
 * 00000001800AE277: lea     rcx, dword_1801C945C
 * 00000001800AE27E: call    _Init_thread_footer
 * 00000001800AE283: mov     rax, [rdi+rbx*8]
 * 00000001800AE287: mov     ecx, [r15+rax]
 * 00000001800AE28B: cmp     cs:dword_1801C9460, ecx
 * 00000001800AE291: jle     loc_1800AE36A
 * 00000001800AE297: lea     rcx, dword_1801C9460
 * 00000001800AE29E: call    sub_18000C8D0
 * 00000001800AE2A3: cmp     cs:dword_1801C9460, r14d
 * 00000001800AE2AA: jnz     loc_1800AE36A
 * 00000001800AE2B0: lea     rax, unk_180144EE0
 * 00000001800AE2B7: mov     qword ptr [rbp+9E40h+var_9600], rax
 * 00000001800AE2BE: lea     rax, unk_180145EF8
 * 00000001800AE2C5: mov     qword ptr [rbp+9E40h+var_9600+8], rax
 * 00000001800AE2CC: movups  xmm7, [rbp+9E40h+var_9600]
 * 00000001800AE2D3: mov     dword ptr [rbp+9E40h+var_7B60], esi
 * 00000001800AE2D9: mov     dword ptr [rbp+9E40h+var_7B60+4], esi
 * 00000001800AE2DF: movups  xmm6, [rbp+9E40h+var_7B60]
 * 00000001800AE2E6: call    sub_1800A5D74
 * 00000001800AE2EB: mov     r8, rax
 * 00000001800AE2EE: mov     r9d, r12d
 * 00000001800AE2F1: mov     edx, 4
 * 00000001800AE2F6: lea     rcx, [rbp+9E40h+var_33D0]
 * 00000001800AE2FD: call    sub_180073668
 * 00000001800AE302: nop
 * 00000001800AE303: mov     r8, rax
 * 00000001800AE306: mov     rdx, r13
 * 00000001800AE309: lea     rcx, [rbp+9E40h+var_33F0]
 * 00000001800AE310: call    sub_18001B518
 * 00000001800AE315: nop
 * 00000001800AE316: lea     r8, aVertex; "/Vertex"
 * 00000001800AE31D: mov     rdx, rax
 * 00000001800AE320: lea     rcx, [rbp+9E40h+var_5810]
 * 00000001800AE327: call    sub_18001B448
 * 00000001800AE32C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE331: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE336: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE33B: mov     rcx, rax
 * 00000001800AE33E: call    sub_18007370C
 * 00000001800AE343: nop
 * 00000001800AE344: lea     rcx, [rbp+9E40h+var_33F0]
 * 00000001800AE34B: call    sub_180010F20
 * 00000001800AE350: nop
 * 00000001800AE351: lea     rcx, [rbp+9E40h+var_33D0]
 * 00000001800AE358: call    sub_180010F20
 * 00000001800AE35D: nop
 * 00000001800AE35E: lea     rcx, dword_1801C9460
 * 00000001800AE365: call    _Init_thread_footer
 * 00000001800AE36A: mov     rax, [rdi+rbx*8]
 * 00000001800AE36E: mov     ecx, [r15+rax]
 * 00000001800AE372: cmp     cs:dword_1801C9464, ecx
 * 00000001800AE378: jle     loc_1800AE451
 * 00000001800AE37E: lea     rcx, dword_1801C9464
 * 00000001800AE385: call    sub_18000C8D0
 * 00000001800AE38A: cmp     cs:dword_1801C9464, r14d
 * 00000001800AE391: jnz     loc_1800AE451
 * 00000001800AE397: lea     rax, unk_18013B210
 * 00000001800AE39E: mov     qword ptr [rbp+9E40h+var_95F0], rax
 * 00000001800AE3A5: lea     rax, unk_18013B794
 * 00000001800AE3AC: mov     qword ptr [rbp+9E40h+var_95F0+8], rax
 * 00000001800AE3B3: movups  xmm7, [rbp+9E40h+var_95F0]
 * 00000001800AE3BA: mov     dword ptr [rbp+9E40h+var_7B40], esi
 * 00000001800AE3C0: mov     dword ptr [rbp+9E40h+var_7B40+4], esi
 * 00000001800AE3C6: movups  xmm6, [rbp+9E40h+var_7B40]
 * 00000001800AE3CD: call    sub_1800A5D74
 * 00000001800AE3D2: mov     r8, rax
 * 00000001800AE3D5: mov     r9d, r12d
 * 00000001800AE3D8: mov     edx, 5
 * 00000001800AE3DD: lea     rcx, [rbp+9E40h+var_3370]
 * 00000001800AE3E4: call    sub_180073668
 * 00000001800AE3E9: nop
 * 00000001800AE3EA: mov     r8, rax
 * 00000001800AE3ED: mov     rdx, r13
 * 00000001800AE3F0: lea     rcx, [rbp+9E40h+var_3390]
 * 00000001800AE3F7: call    sub_18001B518
 * 00000001800AE3FC: nop
 * 00000001800AE3FD: lea     r8, aVertex; "/Vertex"
 * 00000001800AE404: mov     rdx, rax
 * 00000001800AE407: lea     rcx, [rbp+9E40h+var_57F0]
 * 00000001800AE40E: call    sub_18001B448
 * 00000001800AE413: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE418: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE41D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE422: mov     rcx, rax
 * 00000001800AE425: call    sub_18007370C
 * 00000001800AE42A: nop
 * 00000001800AE42B: lea     rcx, [rbp+9E40h+var_3390]
 * 00000001800AE432: call    sub_180010F20
 * 00000001800AE437: nop
 * 00000001800AE438: lea     rcx, [rbp+9E40h+var_3370]
 * 00000001800AE43F: call    sub_180010F20
 * 00000001800AE444: nop
 * 00000001800AE445: lea     rcx, dword_1801C9464
 * 00000001800AE44C: call    _Init_thread_footer
 * 00000001800AE451: mov     rax, [rdi+rbx*8]
 * 00000001800AE455: mov     ecx, [r15+rax]
 * 00000001800AE459: cmp     cs:dword_1801C9468, ecx
 * 00000001800AE45F: jle     loc_1800AE538
 * 00000001800AE465: lea     rcx, dword_1801C9468
 * 00000001800AE46C: call    sub_18000C8D0
 * 00000001800AE471: cmp     cs:dword_1801C9468, r14d
 * 00000001800AE478: jnz     loc_1800AE538
 * 00000001800AE47E: lea     rax, unk_180144EE0
 * 00000001800AE485: mov     qword ptr [rbp+9E40h+var_95E0], rax
 * 00000001800AE48C: lea     rax, unk_180145EF8
 * 00000001800AE493: mov     qword ptr [rbp+9E40h+var_95E0+8], rax
 * 00000001800AE49A: movups  xmm7, [rbp+9E40h+var_95E0]
 * 00000001800AE4A1: mov     dword ptr [rbp+9E40h+var_7B20], esi
 * 00000001800AE4A7: mov     dword ptr [rbp+9E40h+var_7B20+4], esi
 * 00000001800AE4AD: movups  xmm6, [rbp+9E40h+var_7B20]
 * 00000001800AE4B4: call    sub_1800A5D74
 * 00000001800AE4B9: mov     r8, rax
 * 00000001800AE4BC: mov     r9d, r12d
 * 00000001800AE4BF: mov     edx, 6
 * 00000001800AE4C4: lea     rcx, [rbp+9E40h+var_3310]
 * 00000001800AE4CB: call    sub_180073668
 * 00000001800AE4D0: nop
 * 00000001800AE4D1: mov     r8, rax
 * 00000001800AE4D4: mov     rdx, r13
 * 00000001800AE4D7: lea     rcx, [rbp+9E40h+var_3330]
 * 00000001800AE4DE: call    sub_18001B518
 * 00000001800AE4E3: nop
 * 00000001800AE4E4: lea     r8, aVertex; "/Vertex"
 * 00000001800AE4EB: mov     rdx, rax
 * 00000001800AE4EE: lea     rcx, [rbp+9E40h+var_57D0]
 * 00000001800AE4F5: call    sub_18001B448
 * 00000001800AE4FA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE4FF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE504: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE509: mov     rcx, rax
 * 00000001800AE50C: call    sub_18007370C
 * 00000001800AE511: nop
 * 00000001800AE512: lea     rcx, [rbp+9E40h+var_3330]
 * 00000001800AE519: call    sub_180010F20
 * 00000001800AE51E: nop
 * 00000001800AE51F: lea     rcx, [rbp+9E40h+var_3310]
 * 00000001800AE526: call    sub_180010F20
 * 00000001800AE52B: nop
 * 00000001800AE52C: lea     rcx, dword_1801C9468
 * 00000001800AE533: call    _Init_thread_footer
 * 00000001800AE538: mov     rax, [rdi+rbx*8]
 * 00000001800AE53C: mov     ecx, [r15+rax]
 * 00000001800AE540: cmp     cs:dword_1801C946C, ecx
 * 00000001800AE546: jle     loc_1800AE61F
 * 00000001800AE54C: lea     rcx, dword_1801C946C
 * 00000001800AE553: call    sub_18000C8D0
 * 00000001800AE558: cmp     cs:dword_1801C946C, r14d
 * 00000001800AE55F: jnz     loc_1800AE61F
 * 00000001800AE565: lea     rax, unk_180144EE0
 * 00000001800AE56C: mov     qword ptr [rbp+9E40h+var_95D0], rax
 * 00000001800AE573: lea     rax, unk_180145EF8
 * 00000001800AE57A: mov     qword ptr [rbp+9E40h+var_95D0+8], rax
 * 00000001800AE581: movups  xmm7, [rbp+9E40h+var_95D0]
 * 00000001800AE588: mov     dword ptr [rbp+9E40h+var_7B00], esi
 * 00000001800AE58E: mov     dword ptr [rbp+9E40h+var_7B00+4], esi
 * 00000001800AE594: movups  xmm6, [rbp+9E40h+var_7B00]
 * 00000001800AE59B: call    sub_1800A5D74
 * 00000001800AE5A0: mov     r8, rax
 * 00000001800AE5A3: mov     r9d, r12d
 * 00000001800AE5A6: mov     edx, 8
 * 00000001800AE5AB: lea     rcx, [rbp+9E40h+var_32B0]
 * 00000001800AE5B2: call    sub_180073668
 * 00000001800AE5B7: nop
 * 00000001800AE5B8: mov     r8, rax
 * 00000001800AE5BB: mov     rdx, r13
 * 00000001800AE5BE: lea     rcx, [rbp+9E40h+var_32D0]
 * 00000001800AE5C5: call    sub_18001B518
 * 00000001800AE5CA: nop
 * 00000001800AE5CB: lea     r8, aVertex; "/Vertex"
 * 00000001800AE5D2: mov     rdx, rax
 * 00000001800AE5D5: lea     rcx, [rbp+9E40h+var_57B0]
 * 00000001800AE5DC: call    sub_18001B448
 * 00000001800AE5E1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE5E6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE5EB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE5F0: mov     rcx, rax
 * 00000001800AE5F3: call    sub_18007370C
 * 00000001800AE5F8: nop
 * 00000001800AE5F9: lea     rcx, [rbp+9E40h+var_32D0]
 * 00000001800AE600: call    sub_180010F20
 * 00000001800AE605: nop
 * 00000001800AE606: lea     rcx, [rbp+9E40h+var_32B0]
 * 00000001800AE60D: call    sub_180010F20
 * 00000001800AE612: nop
 * 00000001800AE613: lea     rcx, dword_1801C946C
 * 00000001800AE61A: call    _Init_thread_footer
 * 00000001800AE61F: mov     rax, [rdi+rbx*8]
 * 00000001800AE623: mov     ecx, [r15+rax]
 * 00000001800AE627: cmp     cs:dword_1801C9470, ecx
 * 00000001800AE62D: jle     loc_1800AE704
 * 00000001800AE633: lea     rcx, dword_1801C9470
 * 00000001800AE63A: call    sub_18000C8D0
 * 00000001800AE63F: cmp     cs:dword_1801C9470, r14d
 * 00000001800AE646: jnz     loc_1800AE704
 * 00000001800AE64C: lea     rax, unk_1801447D0
 * 00000001800AE653: mov     qword ptr [rbp+9E40h+var_95C0], rax
 * 00000001800AE65A: lea     rax, unk_180144EDC
 * 00000001800AE661: mov     qword ptr [rbp+9E40h+var_95C0+8], rax
 * 00000001800AE668: movups  xmm7, [rbp+9E40h+var_95C0]
 * 00000001800AE66F: mov     dword ptr [rbp+9E40h+var_7AE0], esi
 * 00000001800AE675: mov     dword ptr [rbp+9E40h+var_7AE0+4], esi
 * 00000001800AE67B: movups  xmm6, [rbp+9E40h+var_7AE0]
 * 00000001800AE682: call    sub_1800A5D74
 * 00000001800AE687: mov     r8, rax
 * 00000001800AE68A: mov     r9d, r12d
 * 00000001800AE68D: mov     rdx, r12
 * 00000001800AE690: lea     rcx, [rbp+9E40h+var_3250]
 * 00000001800AE697: call    sub_180073668
 * 00000001800AE69C: nop
 * 00000001800AE69D: mov     r8, rax
 * 00000001800AE6A0: mov     rdx, r13
 * 00000001800AE6A3: lea     rcx, [rbp+9E40h+var_3270]
 * 00000001800AE6AA: call    sub_18001B518
 * 00000001800AE6AF: nop
 * 00000001800AE6B0: lea     r8, aVertex; "/Vertex"
 * 00000001800AE6B7: mov     rdx, rax
 * 00000001800AE6BA: lea     rcx, [rbp+9E40h+var_5790]
 * 00000001800AE6C1: call    sub_18001B448
 * 00000001800AE6C6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE6CB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE6D0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE6D5: mov     rcx, rax
 * 00000001800AE6D8: call    sub_18007370C
 * 00000001800AE6DD: nop
 * 00000001800AE6DE: lea     rcx, [rbp+9E40h+var_3270]
 * 00000001800AE6E5: call    sub_180010F20
 * 00000001800AE6EA: nop
 * 00000001800AE6EB: lea     rcx, [rbp+9E40h+var_3250]
 * 00000001800AE6F2: call    sub_180010F20
 * 00000001800AE6F7: nop
 * 00000001800AE6F8: lea     rcx, dword_1801C9470
 * 00000001800AE6FF: call    _Init_thread_footer
 * 00000001800AE704: mov     rax, [rdi+rbx*8]
 * 00000001800AE708: mov     ecx, [r15+rax]
 * 00000001800AE70C: cmp     cs:dword_1801C9474, ecx
 * 00000001800AE712: jle     loc_1800AE7EB
 * 00000001800AE718: lea     rcx, dword_1801C9474
 * 00000001800AE71F: call    sub_18000C8D0
 * 00000001800AE724: cmp     cs:dword_1801C9474, r14d
 * 00000001800AE72B: jnz     loc_1800AE7EB
 * 00000001800AE731: lea     rax, unk_180144EE0
 * 00000001800AE738: mov     qword ptr [rbp+9E40h+var_95B0], rax
 * 00000001800AE73F: lea     rax, unk_180145EF8
 * 00000001800AE746: mov     qword ptr [rbp+9E40h+var_95B0+8], rax
 * 00000001800AE74D: movups  xmm7, [rbp+9E40h+var_95B0]
 * 00000001800AE754: mov     dword ptr [rbp+9E40h+var_7AC0], esi
 * 00000001800AE75A: mov     dword ptr [rbp+9E40h+var_7AC0+4], esi
 * 00000001800AE760: movups  xmm6, [rbp+9E40h+var_7AC0]
 * 00000001800AE767: call    sub_1800A5D74
 * 00000001800AE76C: mov     r8, rax
 * 00000001800AE76F: mov     r9d, r12d
 * 00000001800AE772: mov     edx, 0Ah
 * 00000001800AE777: lea     rcx, [rbp+9E40h+var_31F0]
 * 00000001800AE77E: call    sub_180073668
 * 00000001800AE783: nop
 * 00000001800AE784: mov     r8, rax
 * 00000001800AE787: mov     rdx, r13
 * 00000001800AE78A: lea     rcx, [rbp+9E40h+var_3210]
 * 00000001800AE791: call    sub_18001B518
 * 00000001800AE796: nop
 * 00000001800AE797: lea     r8, aVertex; "/Vertex"
 * 00000001800AE79E: mov     rdx, rax
 * 00000001800AE7A1: lea     rcx, [rbp+9E40h+var_5770]
 * 00000001800AE7A8: call    sub_18001B448
 * 00000001800AE7AD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE7B2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE7B7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE7BC: mov     rcx, rax
 * 00000001800AE7BF: call    sub_18007370C
 * 00000001800AE7C4: nop
 * 00000001800AE7C5: lea     rcx, [rbp+9E40h+var_3210]
 * 00000001800AE7CC: call    sub_180010F20
 * 00000001800AE7D1: nop
 * 00000001800AE7D2: lea     rcx, [rbp+9E40h+var_31F0]
 * 00000001800AE7D9: call    sub_180010F20
 * 00000001800AE7DE: nop
 * 00000001800AE7DF: lea     rcx, dword_1801C9474
 * 00000001800AE7E6: call    _Init_thread_footer
 * 00000001800AE7EB: mov     rax, [rdi+rbx*8]
 * 00000001800AE7EF: mov     ecx, [r15+rax]
 * 00000001800AE7F3: cmp     cs:dword_1801C9478, ecx
 * 00000001800AE7F9: jle     loc_1800AE8D2
 * 00000001800AE7FF: lea     rcx, dword_1801C9478
 * 00000001800AE806: call    sub_18000C8D0
 * 00000001800AE80B: cmp     cs:dword_1801C9478, r14d
 * 00000001800AE812: jnz     loc_1800AE8D2
 * 00000001800AE818: lea     rax, unk_180144EE0
 * 00000001800AE81F: mov     qword ptr [rbp+9E40h+var_95A0], rax
 * 00000001800AE826: lea     rax, unk_180145EF8
 * 00000001800AE82D: mov     qword ptr [rbp+9E40h+var_95A0+8], rax
 * 00000001800AE834: movups  xmm7, [rbp+9E40h+var_95A0]
 * 00000001800AE83B: mov     dword ptr [rbp+9E40h+var_7AA0], esi
 * 00000001800AE841: mov     dword ptr [rbp+9E40h+var_7AA0+4], esi
 * 00000001800AE847: movups  xmm6, [rbp+9E40h+var_7AA0]
 * 00000001800AE84E: call    sub_1800A5D74
 * 00000001800AE853: mov     r8, rax
 * 00000001800AE856: mov     r9d, r12d
 * 00000001800AE859: mov     edx, 10h
 * 00000001800AE85E: lea     rcx, [rbp+9E40h+var_3190]
 * 00000001800AE865: call    sub_180073668
 * 00000001800AE86A: nop
 * 00000001800AE86B: mov     r8, rax
 * 00000001800AE86E: mov     rdx, r13
 * 00000001800AE871: lea     rcx, [rbp+9E40h+var_31B0]
 * 00000001800AE878: call    sub_18001B518
 * 00000001800AE87D: nop
 * 00000001800AE87E: lea     r8, aVertex; "/Vertex"
 * 00000001800AE885: mov     rdx, rax
 * 00000001800AE888: lea     rcx, [rbp+9E40h+var_5750]
 * 00000001800AE88F: call    sub_18001B448
 * 00000001800AE894: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE899: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE89E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE8A3: mov     rcx, rax
 * 00000001800AE8A6: call    sub_18007370C
 * 00000001800AE8AB: nop
 * 00000001800AE8AC: lea     rcx, [rbp+9E40h+var_31B0]
 * 00000001800AE8B3: call    sub_180010F20
 * 00000001800AE8B8: nop
 * 00000001800AE8B9: lea     rcx, [rbp+9E40h+var_3190]
 * 00000001800AE8C0: call    sub_180010F20
 * 00000001800AE8C5: nop
 * 00000001800AE8C6: lea     rcx, dword_1801C9478
 * 00000001800AE8CD: call    _Init_thread_footer
 * 00000001800AE8D2: mov     rax, [rdi+rbx*8]
 * 00000001800AE8D6: mov     ecx, [r15+rax]
 * 00000001800AE8DA: cmp     cs:dword_1801C947C, ecx
 * 00000001800AE8E0: jle     loc_1800AE9B9
 * 00000001800AE8E6: lea     rcx, dword_1801C947C
 * 00000001800AE8ED: call    sub_18000C8D0
 * 00000001800AE8F2: cmp     cs:dword_1801C947C, r14d
 * 00000001800AE8F9: jnz     loc_1800AE9B9
 * 00000001800AE8FF: lea     rax, unk_180144EE0
 * 00000001800AE906: mov     qword ptr [rbp+9E40h+var_9590], rax
 * 00000001800AE90D: lea     rax, unk_180145EF8
 * 00000001800AE914: mov     qword ptr [rbp+9E40h+var_9590+8], rax
 * 00000001800AE91B: movups  xmm7, [rbp+9E40h+var_9590]
 * 00000001800AE922: mov     dword ptr [rbp+9E40h+var_7A80], esi
 * 00000001800AE928: mov     dword ptr [rbp+9E40h+var_7A80+4], esi
 * 00000001800AE92E: movups  xmm6, [rbp+9E40h+var_7A80]
 * 00000001800AE935: call    sub_1800A5D74
 * 00000001800AE93A: mov     r8, rax
 * 00000001800AE93D: mov     r9d, r12d
 * 00000001800AE940: mov     edx, 12h
 * 00000001800AE945: lea     rcx, [rbp+9E40h+var_3130]
 * 00000001800AE94C: call    sub_180073668
 * 00000001800AE951: nop
 * 00000001800AE952: mov     r8, rax
 * 00000001800AE955: mov     rdx, r13
 * 00000001800AE958: lea     rcx, [rbp+9E40h+var_3150]
 * 00000001800AE95F: call    sub_18001B518
 * 00000001800AE964: nop
 * 00000001800AE965: lea     r8, aVertex; "/Vertex"
 * 00000001800AE96C: mov     rdx, rax
 * 00000001800AE96F: lea     rcx, [rbp+9E40h+var_5730]
 * 00000001800AE976: call    sub_18001B448
 * 00000001800AE97B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AE980: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AE985: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AE98A: mov     rcx, rax
 * 00000001800AE98D: call    sub_18007370C
 * 00000001800AE992: nop
 * 00000001800AE993: lea     rcx, [rbp+9E40h+var_3150]
 * 00000001800AE99A: call    sub_180010F20
 * 00000001800AE99F: nop
 * 00000001800AE9A0: lea     rcx, [rbp+9E40h+var_3130]
 * 00000001800AE9A7: call    sub_180010F20
 * 00000001800AE9AC: nop
 * 00000001800AE9AD: lea     rcx, dword_1801C947C
 * 00000001800AE9B4: call    _Init_thread_footer
 * 00000001800AE9B9: mov     rax, [rdi+rbx*8]
 * 00000001800AE9BD: mov     ecx, [r15+rax]
 * 00000001800AE9C1: cmp     cs:dword_1801C9480, ecx
 * 00000001800AE9C7: jle     loc_1800AEAA0
 * 00000001800AE9CD: lea     rcx, dword_1801C9480
 * 00000001800AE9D4: call    sub_18000C8D0
 * 00000001800AE9D9: cmp     cs:dword_1801C9480, r14d
 * 00000001800AE9E0: jnz     loc_1800AEAA0
 * 00000001800AE9E6: lea     rax, unk_180144EE0
 * 00000001800AE9ED: mov     qword ptr [rbp+9E40h+var_9580], rax
 * 00000001800AE9F4: lea     rax, unk_180145EF8
 * 00000001800AE9FB: mov     qword ptr [rbp+9E40h+var_9580+8], rax
 * 00000001800AEA02: movups  xmm7, [rbp+9E40h+var_9580]
 * 00000001800AEA09: mov     dword ptr [rbp+9E40h+var_7A60], esi
 * 00000001800AEA0F: mov     dword ptr [rbp+9E40h+var_7A60+4], esi
 * 00000001800AEA15: movups  xmm6, [rbp+9E40h+var_7A60]
 * 00000001800AEA1C: call    sub_1800A5D74
 * 00000001800AEA21: mov     r8, rax
 * 00000001800AEA24: mov     r9d, r12d
 * 00000001800AEA27: mov     edx, 14h
 * 00000001800AEA2C: lea     rcx, [rbp+9E40h+var_30D0]
 * 00000001800AEA33: call    sub_180073668
 * 00000001800AEA38: nop
 * 00000001800AEA39: mov     r8, rax
 * 00000001800AEA3C: mov     rdx, r13
 * 00000001800AEA3F: lea     rcx, [rbp+9E40h+var_30F0]
 * 00000001800AEA46: call    sub_18001B518
 * 00000001800AEA4B: nop
 * 00000001800AEA4C: lea     r8, aVertex; "/Vertex"
 * 00000001800AEA53: mov     rdx, rax
 * 00000001800AEA56: lea     rcx, [rbp+9E40h+var_5710]
 * 00000001800AEA5D: call    sub_18001B448
 * 00000001800AEA62: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AEA67: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AEA6C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEA71: mov     rcx, rax
 * 00000001800AEA74: call    sub_18007370C
 * 00000001800AEA79: nop
 * 00000001800AEA7A: lea     rcx, [rbp+9E40h+var_30F0]
 * 00000001800AEA81: call    sub_180010F20
 * 00000001800AEA86: nop
 * 00000001800AEA87: lea     rcx, [rbp+9E40h+var_30D0]
 * 00000001800AEA8E: call    sub_180010F20
 * 00000001800AEA93: nop
 * 00000001800AEA94: lea     rcx, dword_1801C9480
 * 00000001800AEA9B: call    _Init_thread_footer
 * 00000001800AEAA0: mov     rax, [rdi+rbx*8]
 * 00000001800AEAA4: mov     ecx, [r15+rax]
 * 00000001800AEAA8: cmp     cs:dword_1801C9484, ecx
 * 00000001800AEAAE: jle     loc_1800AEB87
 * 00000001800AEAB4: lea     rcx, dword_1801C9484
 * 00000001800AEABB: call    sub_18000C8D0
 * 00000001800AEAC0: cmp     cs:dword_1801C9484, r14d
 * 00000001800AEAC7: jnz     loc_1800AEB87
 * 00000001800AEACD: lea     rax, unk_180144EE0
 * 00000001800AEAD4: mov     qword ptr [rbp+9E40h+var_9570], rax
 * 00000001800AEADB: lea     rax, unk_180145EF8
 * 00000001800AEAE2: mov     qword ptr [rbp+9E40h+var_9570+8], rax
 * 00000001800AEAE9: movups  xmm7, [rbp+9E40h+var_9570]
 * 00000001800AEAF0: mov     dword ptr [rbp+9E40h+var_7A40], esi
 * 00000001800AEAF6: mov     dword ptr [rbp+9E40h+var_7A40+4], esi
 * 00000001800AEAFC: movups  xmm6, [rbp+9E40h+var_7A40]
 * 00000001800AEB03: call    sub_1800A5D74
 * 00000001800AEB08: mov     r8, rax
 * 00000001800AEB0B: mov     r9d, r12d
 * 00000001800AEB0E: mov     edx, 16h
 * 00000001800AEB13: lea     rcx, [rbp+9E40h+var_3070]
 * 00000001800AEB1A: call    sub_180073668
 * 00000001800AEB1F: nop
 * 00000001800AEB20: mov     r8, rax
 * 00000001800AEB23: mov     rdx, r13
 * 00000001800AEB26: lea     rcx, [rbp+9E40h+var_3090]
 * 00000001800AEB2D: call    sub_18001B518
 * 00000001800AEB32: nop
 * 00000001800AEB33: lea     r8, aVertex; "/Vertex"
 * 00000001800AEB3A: mov     rdx, rax
 * 00000001800AEB3D: lea     rcx, [rbp+9E40h+var_56F0]
 * 00000001800AEB44: call    sub_18001B448
 * 00000001800AEB49: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AEB4E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AEB53: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEB58: mov     rcx, rax
 * 00000001800AEB5B: call    sub_18007370C
 * 00000001800AEB60: nop
 * 00000001800AEB61: lea     rcx, [rbp+9E40h+var_3090]
 * 00000001800AEB68: call    sub_180010F20
 * 00000001800AEB6D: nop
 * 00000001800AEB6E: lea     rcx, [rbp+9E40h+var_3070]
 * 00000001800AEB75: call    sub_180010F20
 * 00000001800AEB7A: nop
 * 00000001800AEB7B: lea     rcx, dword_1801C9484
 * 00000001800AEB82: call    _Init_thread_footer
 * 00000001800AEB87: mov     rax, [rdi+rbx*8]
 * 00000001800AEB8B: mov     ecx, [r15+rax]
 * 00000001800AEB8F: cmp     cs:dword_1801C9488, ecx
 * 00000001800AEB95: jle     loc_1800AEC6E
 * 00000001800AEB9B: lea     rcx, dword_1801C9488
 * 00000001800AEBA2: call    sub_18000C8D0
 * 00000001800AEBA7: cmp     cs:dword_1801C9488, r14d
 * 00000001800AEBAE: jnz     loc_1800AEC6E
 * 00000001800AEBB4: lea     rax, unk_180144EE0
 * 00000001800AEBBB: mov     qword ptr [rbp+9E40h+var_9560], rax
 * 00000001800AEBC2: lea     rax, unk_180145EF8
 * 00000001800AEBC9: mov     qword ptr [rbp+9E40h+var_9560+8], rax
 * 00000001800AEBD0: movups  xmm7, [rbp+9E40h+var_9560]
 * 00000001800AEBD7: mov     dword ptr [rbp+9E40h+var_7A20], esi
 * 00000001800AEBDD: mov     dword ptr [rbp+9E40h+var_7A20+4], esi
 * 00000001800AEBE3: movups  xmm6, [rbp+9E40h+var_7A20]
 * 00000001800AEBEA: call    sub_1800A5D74
 * 00000001800AEBEF: mov     r8, rax
 * 00000001800AEBF2: mov     r9d, r12d
 * 00000001800AEBF5: mov     edx, 18h
 * 00000001800AEBFA: lea     rcx, [rbp+9E40h+var_3010]
 * 00000001800AEC01: call    sub_180073668
 * 00000001800AEC06: nop
 * 00000001800AEC07: mov     r8, rax
 * 00000001800AEC0A: mov     rdx, r13
 * 00000001800AEC0D: lea     rcx, [rbp+9E40h+var_3030]
 * 00000001800AEC14: call    sub_18001B518
 * 00000001800AEC19: nop
 * 00000001800AEC1A: lea     r8, aVertex; "/Vertex"
 * 00000001800AEC21: mov     rdx, rax
 * 00000001800AEC24: lea     rcx, [rbp+9E40h+var_56D0]
 * 00000001800AEC2B: call    sub_18001B448
 * 00000001800AEC30: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AEC35: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AEC3A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEC3F: mov     rcx, rax
 * 00000001800AEC42: call    sub_18007370C
 * 00000001800AEC47: nop
 * 00000001800AEC48: lea     rcx, [rbp+9E40h+var_3030]
 * 00000001800AEC4F: call    sub_180010F20
 * 00000001800AEC54: nop
 * 00000001800AEC55: lea     rcx, [rbp+9E40h+var_3010]
 * 00000001800AEC5C: call    sub_180010F20
 * 00000001800AEC61: nop
 * 00000001800AEC62: lea     rcx, dword_1801C9488
 * 00000001800AEC69: call    _Init_thread_footer
 * 00000001800AEC6E: mov     rax, [rdi+rbx*8]
 * 00000001800AEC72: mov     ecx, [r15+rax]
 * 00000001800AEC76: cmp     cs:dword_1801C948C, ecx
 * 00000001800AEC7C: jle     loc_1800AED55
 * 00000001800AEC82: lea     rcx, dword_1801C948C
 * 00000001800AEC89: call    sub_18000C8D0
 * 00000001800AEC8E: cmp     cs:dword_1801C948C, r14d
 * 00000001800AEC95: jnz     loc_1800AED55
 * 00000001800AEC9B: lea     rax, unk_180144EE0
 * 00000001800AECA2: mov     qword ptr [rbp+9E40h+var_9550], rax
 * 00000001800AECA9: lea     rax, unk_180145EF8
 * 00000001800AECB0: mov     qword ptr [rbp+9E40h+var_9550+8], rax
 * 00000001800AECB7: movups  xmm7, [rbp+9E40h+var_9550]
 * 00000001800AECBE: mov     dword ptr [rbp+9E40h+var_7A00], esi
 * 00000001800AECC4: mov     dword ptr [rbp+9E40h+var_7A00+4], esi
 * 00000001800AECCA: movups  xmm6, [rbp+9E40h+var_7A00]
 * 00000001800AECD1: call    sub_1800A5D74
 * 00000001800AECD6: mov     r8, rax
 * 00000001800AECD9: mov     r9d, r12d
 * 00000001800AECDC: mov     edx, 1Ah
 * 00000001800AECE1: lea     rcx, [rbp+9E40h+var_2FB0]
 * 00000001800AECE8: call    sub_180073668
 * 00000001800AECED: nop
 * 00000001800AECEE: mov     r8, rax
 * 00000001800AECF1: mov     rdx, r13
 * 00000001800AECF4: lea     rcx, [rbp+9E40h+var_2FD0]
 * 00000001800AECFB: call    sub_18001B518
 * 00000001800AED00: nop
 * 00000001800AED01: lea     r8, aVertex; "/Vertex"
 * 00000001800AED08: mov     rdx, rax
 * 00000001800AED0B: lea     rcx, [rbp+9E40h+var_56B0]
 * 00000001800AED12: call    sub_18001B448
 * 00000001800AED17: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AED1C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AED21: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AED26: mov     rcx, rax
 * 00000001800AED29: call    sub_18007370C
 * 00000001800AED2E: nop
 * 00000001800AED2F: lea     rcx, [rbp+9E40h+var_2FD0]
 * 00000001800AED36: call    sub_180010F20
 * 00000001800AED3B: nop
 * 00000001800AED3C: lea     rcx, [rbp+9E40h+var_2FB0]
 * 00000001800AED43: call    sub_180010F20
 * 00000001800AED48: nop
 * 00000001800AED49: lea     rcx, dword_1801C948C
 * 00000001800AED50: call    _Init_thread_footer
 * 00000001800AED55: mov     rax, [rdi+rbx*8]
 * 00000001800AED59: mov     eax, [r15+rax]
 * 00000001800AED5D: cmp     cs:dword_1801C9490, eax
 * 00000001800AED63: jle     loc_1800AEE3C
 * 00000001800AED69: lea     rcx, dword_1801C9490
 * 00000001800AED70: call    sub_18000C8D0
 * 00000001800AED75: cmp     cs:dword_1801C9490, r14d
 * 00000001800AED7C: jnz     loc_1800AEE3C
 * 00000001800AED82: lea     rax, unk_180145F00
 * 00000001800AED89: mov     qword ptr [rbp+9E40h+var_9540], rax
 * 00000001800AED90: lea     rax, unk_180147918
 * 00000001800AED97: mov     qword ptr [rbp+9E40h+var_9540+8], rax
 * 00000001800AED9E: movups  xmm7, [rbp+9E40h+var_9540]
 * 00000001800AEDA5: mov     dword ptr [rbp+9E40h+var_79E0], esi
 * 00000001800AEDAB: mov     dword ptr [rbp+9E40h+var_79E0+4], esi
 * 00000001800AEDB1: movups  xmm6, [rbp+9E40h+var_79E0]
 * 00000001800AEDB8: call    sub_1800A5D74
 * 00000001800AEDBD: mov     r8, rax
 * 00000001800AEDC0: mov     r9d, r12d
 * 00000001800AEDC3: mov     edx, 20h ; ' '
 * 00000001800AEDC8: lea     rcx, [rbp+9E40h+var_2F50]
 * 00000001800AEDCF: call    sub_180073668
 * 00000001800AEDD4: nop
 * 00000001800AEDD5: mov     r8, rax
 * 00000001800AEDD8: mov     rdx, r13
 * 00000001800AEDDB: lea     rcx, [rbp+9E40h+var_2F70]
 * 00000001800AEDE2: call    sub_18001B518
 * 00000001800AEDE7: nop
 * 00000001800AEDE8: lea     r8, aVertex; "/Vertex"
 * 00000001800AEDEF: mov     rdx, rax
 * 00000001800AEDF2: lea     rcx, [rbp+9E40h+var_5690]
 * 00000001800AEDF9: call    sub_18001B448
 * 00000001800AEDFE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AEE03: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AEE08: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEE0D: mov     rcx, rax
 * 00000001800AEE10: call    sub_18007370C
 * 00000001800AEE15: nop
 * 00000001800AEE16: lea     rcx, [rbp+9E40h+var_2F70]
 * 00000001800AEE1D: call    sub_180010F20
 * 00000001800AEE22: nop
 * 00000001800AEE23: lea     rcx, [rbp+9E40h+var_2F50]
 * 00000001800AEE2A: call    sub_180010F20
 * 00000001800AEE2F: nop
 * 00000001800AEE30: lea     rcx, dword_1801C9490
 * 00000001800AEE37: call    _Init_thread_footer
 * 00000001800AEE3C: mov     rax, [rdi+rbx*8]
 * 00000001800AEE40: mov     ecx, [r15+rax]
 * 00000001800AEE44: cmp     cs:dword_1801C9494, ecx
 * 00000001800AEE4A: jle     loc_1800AEF23
 * 00000001800AEE50: lea     rcx, dword_1801C9494
 * 00000001800AEE57: call    sub_18000C8D0
 * 00000001800AEE5C: cmp     cs:dword_1801C9494, r14d
 * 00000001800AEE63: jnz     loc_1800AEF23
 * 00000001800AEE69: lea     rax, unk_18013C280
 * 00000001800AEE70: mov     qword ptr [rbp+9E40h+var_9530], rax
 * 00000001800AEE77: lea     rax, unk_18013CC28
 * 00000001800AEE7E: mov     qword ptr [rbp+9E40h+var_9530+8], rax
 * 00000001800AEE85: movups  xmm7, [rbp+9E40h+var_9530]
 * 00000001800AEE8C: mov     dword ptr [rbp+9E40h+var_79C0], esi
 * 00000001800AEE92: mov     dword ptr [rbp+9E40h+var_79C0+4], esi
 * 00000001800AEE98: movups  xmm6, [rbp+9E40h+var_79C0]
 * 00000001800AEE9F: call    sub_1800A5D74
 * 00000001800AEEA4: mov     r8, rax
 * 00000001800AEEA7: mov     r9d, r12d
 * 00000001800AEEAA: mov     edx, 21h ; '!'
 * 00000001800AEEAF: lea     rcx, [rbp+9E40h+var_2EF0]
 * 00000001800AEEB6: call    sub_180073668
 * 00000001800AEEBB: nop
 * 00000001800AEEBC: mov     r8, rax
 * 00000001800AEEBF: mov     rdx, r13
 * 00000001800AEEC2: lea     rcx, [rbp+9E40h+var_2F10]
 * 00000001800AEEC9: call    sub_18001B518
 * 00000001800AEECE: nop
 * 00000001800AEECF: lea     r8, aVertex; "/Vertex"
 * 00000001800AEED6: mov     rdx, rax
 * 00000001800AEED9: lea     rcx, [rbp+9E40h+var_5670]
 * 00000001800AEEE0: call    sub_18001B448
 * 00000001800AEEE5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AEEEA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AEEEF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEEF4: mov     rcx, rax
 * 00000001800AEEF7: call    sub_18007370C
 * 00000001800AEEFC: nop
 * 00000001800AEEFD: lea     rcx, [rbp+9E40h+var_2F10]
 * 00000001800AEF04: call    sub_180010F20
 * 00000001800AEF09: nop
 * 00000001800AEF0A: lea     rcx, [rbp+9E40h+var_2EF0]
 * 00000001800AEF11: call    sub_180010F20
 * 00000001800AEF16: nop
 * 00000001800AEF17: lea     rcx, dword_1801C9494
 * 00000001800AEF1E: call    _Init_thread_footer
 * 00000001800AEF23: mov     rax, [rdi+rbx*8]
 * 00000001800AEF27: mov     ecx, [r15+rax]
 * 00000001800AEF2B: cmp     cs:dword_1801C9498, ecx
 * 00000001800AEF31: jle     loc_1800AF00A
 * 00000001800AEF37: lea     rcx, dword_1801C9498
 * 00000001800AEF3E: call    sub_18000C8D0
 * 00000001800AEF43: cmp     cs:dword_1801C9498, r14d
 * 00000001800AEF4A: jnz     loc_1800AF00A
 * 00000001800AEF50: lea     rax, unk_180145F00
 * 00000001800AEF57: mov     qword ptr [rbp+9E40h+var_9520], rax
 * 00000001800AEF5E: lea     rax, unk_180147918
 * 00000001800AEF65: mov     qword ptr [rbp+9E40h+var_9520+8], rax
 * 00000001800AEF6C: movups  xmm7, [rbp+9E40h+var_9520]
 * 00000001800AEF73: mov     dword ptr [rbp+9E40h+var_79A0], esi
 * 00000001800AEF79: mov     dword ptr [rbp+9E40h+var_79A0+4], esi
 * 00000001800AEF7F: movups  xmm6, [rbp+9E40h+var_79A0]
 * 00000001800AEF86: call    sub_1800A5D74
 * 00000001800AEF8B: mov     r8, rax
 * 00000001800AEF8E: mov     r9d, r12d
 * 00000001800AEF91: mov     edx, 22h ; '"'
 * 00000001800AEF96: lea     rcx, [rbp+9E40h+var_2E90]
 * 00000001800AEF9D: call    sub_180073668
 * 00000001800AEFA2: nop
 * 00000001800AEFA3: mov     r8, rax
 * 00000001800AEFA6: mov     rdx, r13
 * 00000001800AEFA9: lea     rcx, [rbp+9E40h+var_2EB0]
 * 00000001800AEFB0: call    sub_18001B518
 * 00000001800AEFB5: nop
 * 00000001800AEFB6: lea     r8, aVertex; "/Vertex"
 * 00000001800AEFBD: mov     rdx, rax
 * 00000001800AEFC0: lea     rcx, [rbp+9E40h+var_5650]
 * 00000001800AEFC7: call    sub_18001B448
 * 00000001800AEFCC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AEFD1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AEFD6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AEFDB: mov     rcx, rax
 * 00000001800AEFDE: call    sub_18007370C
 * 00000001800AEFE3: nop
 * 00000001800AEFE4: lea     rcx, [rbp+9E40h+var_2EB0]
 * 00000001800AEFEB: call    sub_180010F20
 * 00000001800AEFF0: nop
 * 00000001800AEFF1: lea     rcx, [rbp+9E40h+var_2E90]
 * 00000001800AEFF8: call    sub_180010F20
 * 00000001800AEFFD: nop
 * 00000001800AEFFE: lea     rcx, dword_1801C9498
 * 00000001800AF005: call    _Init_thread_footer
 * 00000001800AF00A: mov     rax, [rdi+rbx*8]
 * 00000001800AF00E: mov     ecx, [r15+rax]
 * 00000001800AF012: cmp     cs:dword_1801C949C, ecx
 * 00000001800AF018: jle     loc_1800AF0F1
 * 00000001800AF01E: lea     rcx, dword_1801C949C
 * 00000001800AF025: call    sub_18000C8D0
 * 00000001800AF02A: cmp     cs:dword_1801C949C, r14d
 * 00000001800AF031: jnz     loc_1800AF0F1
 * 00000001800AF037: lea     rax, unk_180145F00
 * 00000001800AF03E: mov     qword ptr [rbp+9E40h+var_9510], rax
 * 00000001800AF045: lea     rax, unk_180147918
 * 00000001800AF04C: mov     qword ptr [rbp+9E40h+var_9510+8], rax
 * 00000001800AF053: movups  xmm7, [rbp+9E40h+var_9510]
 * 00000001800AF05A: mov     dword ptr [rbp+9E40h+var_7980], esi
 * 00000001800AF060: mov     dword ptr [rbp+9E40h+var_7980+4], esi
 * 00000001800AF066: movups  xmm6, [rbp+9E40h+var_7980]
 * 00000001800AF06D: call    sub_1800A5D74
 * 00000001800AF072: mov     r8, rax
 * 00000001800AF075: mov     r9d, r12d
 * 00000001800AF078: mov     edx, 28h ; '('
 * 00000001800AF07D: lea     rcx, [rbp+9E40h+var_2E30]
 * 00000001800AF084: call    sub_180073668
 * 00000001800AF089: nop
 * 00000001800AF08A: mov     r8, rax
 * 00000001800AF08D: mov     rdx, r13
 * 00000001800AF090: lea     rcx, [rbp+9E40h+var_2E50]
 * 00000001800AF097: call    sub_18001B518
 * 00000001800AF09C: nop
 * 00000001800AF09D: lea     r8, aVertex; "/Vertex"
 * 00000001800AF0A4: mov     rdx, rax
 * 00000001800AF0A7: lea     rcx, [rbp+9E40h+var_5630]
 * 00000001800AF0AE: call    sub_18001B448
 * 00000001800AF0B3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF0B8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF0BD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF0C2: mov     rcx, rax
 * 00000001800AF0C5: call    sub_18007370C
 * 00000001800AF0CA: nop
 * 00000001800AF0CB: lea     rcx, [rbp+9E40h+var_2E50]
 * 00000001800AF0D2: call    sub_180010F20
 * 00000001800AF0D7: nop
 * 00000001800AF0D8: lea     rcx, [rbp+9E40h+var_2E30]
 * 00000001800AF0DF: call    sub_180010F20
 * 00000001800AF0E4: nop
 * 00000001800AF0E5: lea     rcx, dword_1801C949C
 * 00000001800AF0EC: call    _Init_thread_footer
 * 00000001800AF0F1: mov     rax, [rdi+rbx*8]
 * 00000001800AF0F5: mov     ecx, [r15+rax]
 * 00000001800AF0F9: cmp     cs:dword_1801C94A0, ecx
 * 00000001800AF0FF: jle     loc_1800AF1D8
 * 00000001800AF105: lea     rcx, dword_1801C94A0
 * 00000001800AF10C: call    sub_18000C8D0
 * 00000001800AF111: cmp     cs:dword_1801C94A0, r14d
 * 00000001800AF118: jnz     loc_1800AF1D8
 * 00000001800AF11E: lea     rax, unk_180142C40
 * 00000001800AF125: mov     qword ptr [rbp+9E40h+var_9500], rax
 * 00000001800AF12C: lea     rax, unk_18014377C
 * 00000001800AF133: mov     qword ptr [rbp+9E40h+var_9500+8], rax
 * 00000001800AF13A: movups  xmm7, [rbp+9E40h+var_9500]
 * 00000001800AF141: mov     dword ptr [rbp+9E40h+var_7960], esi
 * 00000001800AF147: mov     dword ptr [rbp+9E40h+var_7960+4], esi
 * 00000001800AF14D: movups  xmm6, [rbp+9E40h+var_7960]
 * 00000001800AF154: call    sub_1800A5D74
 * 00000001800AF159: mov     r8, rax
 * 00000001800AF15C: mov     r9d, r12d
 * 00000001800AF15F: mov     edx, 29h ; ')'
 * 00000001800AF164: lea     rcx, [rbp+9E40h+var_2DD0]
 * 00000001800AF16B: call    sub_180073668
 * 00000001800AF170: nop
 * 00000001800AF171: mov     r8, rax
 * 00000001800AF174: mov     rdx, r13
 * 00000001800AF177: lea     rcx, [rbp+9E40h+var_2DF0]
 * 00000001800AF17E: call    sub_18001B518
 * 00000001800AF183: nop
 * 00000001800AF184: lea     r8, aVertex; "/Vertex"
 * 00000001800AF18B: mov     rdx, rax
 * 00000001800AF18E: lea     rcx, [rbp+9E40h+var_5610]
 * 00000001800AF195: call    sub_18001B448
 * 00000001800AF19A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF19F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF1A4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF1A9: mov     rcx, rax
 * 00000001800AF1AC: call    sub_18007370C
 * 00000001800AF1B1: nop
 * 00000001800AF1B2: lea     rcx, [rbp+9E40h+var_2DF0]
 * 00000001800AF1B9: call    sub_180010F20
 * 00000001800AF1BE: nop
 * 00000001800AF1BF: lea     rcx, [rbp+9E40h+var_2DD0]
 * 00000001800AF1C6: call    sub_180010F20
 * 00000001800AF1CB: nop
 * 00000001800AF1CC: lea     rcx, dword_1801C94A0
 * 00000001800AF1D3: call    _Init_thread_footer
 * 00000001800AF1D8: mov     rax, [rdi+rbx*8]
 * 00000001800AF1DC: mov     ecx, [r15+rax]
 * 00000001800AF1E0: cmp     cs:dword_1801C94A4, ecx
 * 00000001800AF1E6: jle     loc_1800AF2BF
 * 00000001800AF1EC: lea     rcx, dword_1801C94A4
 * 00000001800AF1F3: call    sub_18000C8D0
 * 00000001800AF1F8: cmp     cs:dword_1801C94A4, r14d
 * 00000001800AF1FF: jnz     loc_1800AF2BF
 * 00000001800AF205: lea     rax, unk_180145F00
 * 00000001800AF20C: mov     qword ptr [rbp+9E40h+var_94F0], rax
 * 00000001800AF213: lea     rax, unk_180147918
 * 00000001800AF21A: mov     qword ptr [rbp+9E40h+var_94F0+8], rax
 * 00000001800AF221: movups  xmm7, [rbp+9E40h+var_94F0]
 * 00000001800AF228: mov     dword ptr [rbp+9E40h+var_7940], esi
 * 00000001800AF22E: mov     dword ptr [rbp+9E40h+var_7940+4], esi
 * 00000001800AF234: movups  xmm6, [rbp+9E40h+var_7940]
 * 00000001800AF23B: call    sub_1800A5D74
 * 00000001800AF240: mov     r8, rax
 * 00000001800AF243: mov     r9d, r12d
 * 00000001800AF246: mov     edx, 2Ah ; '*'
 * 00000001800AF24B: lea     rcx, [rbp+9E40h+var_2D70]
 * 00000001800AF252: call    sub_180073668
 * 00000001800AF257: nop
 * 00000001800AF258: mov     r8, rax
 * 00000001800AF25B: mov     rdx, r13
 * 00000001800AF25E: lea     rcx, [rbp+9E40h+var_2D90]
 * 00000001800AF265: call    sub_18001B518
 * 00000001800AF26A: nop
 * 00000001800AF26B: lea     r8, aVertex; "/Vertex"
 * 00000001800AF272: mov     rdx, rax
 * 00000001800AF275: lea     rcx, [rbp+9E40h+var_55F0]
 * 00000001800AF27C: call    sub_18001B448
 * 00000001800AF281: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF286: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF28B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF290: mov     rcx, rax
 * 00000001800AF293: call    sub_18007370C
 * 00000001800AF298: nop
 * 00000001800AF299: lea     rcx, [rbp+9E40h+var_2D90]
 * 00000001800AF2A0: call    sub_180010F20
 * 00000001800AF2A5: nop
 * 00000001800AF2A6: lea     rcx, [rbp+9E40h+var_2D70]
 * 00000001800AF2AD: call    sub_180010F20
 * 00000001800AF2B2: nop
 * 00000001800AF2B3: lea     rcx, dword_1801C94A4
 * 00000001800AF2BA: call    _Init_thread_footer
 * 00000001800AF2BF: mov     rax, [rdi+rbx*8]
 * 00000001800AF2C3: mov     ecx, [r15+rax]
 * 00000001800AF2C7: cmp     cs:dword_1801C94A8, ecx
 * 00000001800AF2CD: jle     loc_1800AF3A6
 * 00000001800AF2D3: lea     rcx, dword_1801C94A8
 * 00000001800AF2DA: call    sub_18000C8D0
 * 00000001800AF2DF: cmp     cs:dword_1801C94A8, r14d
 * 00000001800AF2E6: jnz     loc_1800AF3A6
 * 00000001800AF2EC: lea     rax, unk_180145F00
 * 00000001800AF2F3: mov     qword ptr [rbp+9E40h+var_94E0], rax
 * 00000001800AF2FA: lea     rax, unk_180147918
 * 00000001800AF301: mov     qword ptr [rbp+9E40h+var_94E0+8], rax
 * 00000001800AF308: movups  xmm7, [rbp+9E40h+var_94E0]
 * 00000001800AF30F: mov     dword ptr [rbp+9E40h+var_7920], esi
 * 00000001800AF315: mov     dword ptr [rbp+9E40h+var_7920+4], esi
 * 00000001800AF31B: movups  xmm6, [rbp+9E40h+var_7920]
 * 00000001800AF322: call    sub_1800A5D74
 * 00000001800AF327: mov     r8, rax
 * 00000001800AF32A: mov     r9d, r12d
 * 00000001800AF32D: mov     edx, 30h ; '0'
 * 00000001800AF332: lea     rcx, [rbp+9E40h+var_2D10]
 * 00000001800AF339: call    sub_180073668
 * 00000001800AF33E: nop
 * 00000001800AF33F: mov     r8, rax
 * 00000001800AF342: mov     rdx, r13
 * 00000001800AF345: lea     rcx, [rbp+9E40h+var_2D30]
 * 00000001800AF34C: call    sub_18001B518
 * 00000001800AF351: nop
 * 00000001800AF352: lea     r8, aVertex; "/Vertex"
 * 00000001800AF359: mov     rdx, rax
 * 00000001800AF35C: lea     rcx, [rbp+9E40h+var_55D0]
 * 00000001800AF363: call    sub_18001B448
 * 00000001800AF368: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF36D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF372: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF377: mov     rcx, rax
 * 00000001800AF37A: call    sub_18007370C
 * 00000001800AF37F: nop
 * 00000001800AF380: lea     rcx, [rbp+9E40h+var_2D30]
 * 00000001800AF387: call    sub_180010F20
 * 00000001800AF38C: nop
 * 00000001800AF38D: lea     rcx, [rbp+9E40h+var_2D10]
 * 00000001800AF394: call    sub_180010F20
 * 00000001800AF399: nop
 * 00000001800AF39A: lea     rcx, dword_1801C94A8
 * 00000001800AF3A1: call    _Init_thread_footer
 * 00000001800AF3A6: mov     rax, [rdi+rbx*8]
 * 00000001800AF3AA: mov     ecx, [r15+rax]
 * 00000001800AF3AE: cmp     cs:dword_1801C94AC, ecx
 * 00000001800AF3B4: jle     loc_1800AF48D
 * 00000001800AF3BA: lea     rcx, dword_1801C94AC
 * 00000001800AF3C1: call    sub_18000C8D0
 * 00000001800AF3C6: cmp     cs:dword_1801C94AC, r14d
 * 00000001800AF3CD: jnz     loc_1800AF48D
 * 00000001800AF3D3: lea     rax, unk_180145F00
 * 00000001800AF3DA: mov     qword ptr [rbp+9E40h+var_94D0], rax
 * 00000001800AF3E1: lea     rax, unk_180147918
 * 00000001800AF3E8: mov     qword ptr [rbp+9E40h+var_94D0+8], rax
 * 00000001800AF3EF: movups  xmm7, [rbp+9E40h+var_94D0]
 * 00000001800AF3F6: mov     dword ptr [rbp+9E40h+var_7900], esi
 * 00000001800AF3FC: mov     dword ptr [rbp+9E40h+var_7900+4], esi
 * 00000001800AF402: movups  xmm6, [rbp+9E40h+var_7900]
 * 00000001800AF409: call    sub_1800A5D74
 * 00000001800AF40E: mov     r8, rax
 * 00000001800AF411: mov     r9d, r12d
 * 00000001800AF414: mov     edx, 32h ; '2'
 * 00000001800AF419: lea     rcx, [rbp+9E40h+var_2CB0]
 * 00000001800AF420: call    sub_180073668
 * 00000001800AF425: nop
 * 00000001800AF426: mov     r8, rax
 * 00000001800AF429: mov     rdx, r13
 * 00000001800AF42C: lea     rcx, [rbp+9E40h+var_2CD0]
 * 00000001800AF433: call    sub_18001B518
 * 00000001800AF438: nop
 * 00000001800AF439: lea     r8, aVertex; "/Vertex"
 * 00000001800AF440: mov     rdx, rax
 * 00000001800AF443: lea     rcx, [rbp+9E40h+var_55B0]
 * 00000001800AF44A: call    sub_18001B448
 * 00000001800AF44F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF454: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF459: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF45E: mov     rcx, rax
 * 00000001800AF461: call    sub_18007370C
 * 00000001800AF466: nop
 * 00000001800AF467: lea     rcx, [rbp+9E40h+var_2CD0]
 * 00000001800AF46E: call    sub_180010F20
 * 00000001800AF473: nop
 * 00000001800AF474: lea     rcx, [rbp+9E40h+var_2CB0]
 * 00000001800AF47B: call    sub_180010F20
 * 00000001800AF480: nop
 * 00000001800AF481: lea     rcx, dword_1801C94AC
 * 00000001800AF488: call    _Init_thread_footer
 * 00000001800AF48D: mov     rax, [rdi+rbx*8]
 * 00000001800AF491: mov     ecx, [r15+rax]
 * 00000001800AF495: cmp     cs:dword_1801C94B0, ecx
 * 00000001800AF49B: jle     loc_1800AF574
 * 00000001800AF4A1: lea     rcx, dword_1801C94B0
 * 00000001800AF4A8: call    sub_18000C8D0
 * 00000001800AF4AD: cmp     cs:dword_1801C94B0, r14d
 * 00000001800AF4B4: jnz     loc_1800AF574
 * 00000001800AF4BA: lea     rax, unk_180145F00
 * 00000001800AF4C1: mov     qword ptr [rbp+9E40h+var_94C0], rax
 * 00000001800AF4C8: lea     rax, unk_180147918
 * 00000001800AF4CF: mov     qword ptr [rbp+9E40h+var_94C0+8], rax
 * 00000001800AF4D6: movups  xmm7, [rbp+9E40h+var_94C0]
 * 00000001800AF4DD: mov     dword ptr [rbp+9E40h+var_78E0], esi
 * 00000001800AF4E3: mov     dword ptr [rbp+9E40h+var_78E0+4], esi
 * 00000001800AF4E9: movups  xmm6, [rbp+9E40h+var_78E0]
 * 00000001800AF4F0: call    sub_1800A5D74
 * 00000001800AF4F5: mov     r8, rax
 * 00000001800AF4F8: mov     r9d, r12d
 * 00000001800AF4FB: mov     edx, 38h ; '8'
 * 00000001800AF500: lea     rcx, [rbp+9E40h+var_2C50]
 * 00000001800AF507: call    sub_180073668
 * 00000001800AF50C: nop
 * 00000001800AF50D: mov     r8, rax
 * 00000001800AF510: mov     rdx, r13
 * 00000001800AF513: lea     rcx, [rbp+9E40h+var_1670]
 * 00000001800AF51A: call    sub_18001B518
 * 00000001800AF51F: nop
 * 00000001800AF520: lea     r8, aVertex; "/Vertex"
 * 00000001800AF527: mov     rdx, rax
 * 00000001800AF52A: lea     rcx, [rbp+9E40h+var_5590]
 * 00000001800AF531: call    sub_18001B448
 * 00000001800AF536: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF53B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF540: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF545: mov     rcx, rax
 * 00000001800AF548: call    sub_18007370C
 * 00000001800AF54D: nop
 * 00000001800AF54E: lea     rcx, [rbp+9E40h+var_1670]
 * 00000001800AF555: call    sub_180010F20
 * 00000001800AF55A: nop
 * 00000001800AF55B: lea     rcx, [rbp+9E40h+var_2C50]
 * 00000001800AF562: call    sub_180010F20
 * 00000001800AF567: nop
 * 00000001800AF568: lea     rcx, dword_1801C94B0
 * 00000001800AF56F: call    _Init_thread_footer
 * 00000001800AF574: mov     rax, [rdi+rbx*8]
 * 00000001800AF578: mov     ecx, [r15+rax]
 * 00000001800AF57C: cmp     cs:dword_1801C94B4, ecx
 * 00000001800AF582: jle     loc_1800AF65B
 * 00000001800AF588: lea     rcx, dword_1801C94B4
 * 00000001800AF58F: call    sub_18000C8D0
 * 00000001800AF594: cmp     cs:dword_1801C94B4, r14d
 * 00000001800AF59B: jnz     loc_1800AF65B
 * 00000001800AF5A1: lea     rax, unk_180145F00
 * 00000001800AF5A8: mov     qword ptr [rbp+9E40h+var_94B0], rax
 * 00000001800AF5AF: lea     rax, unk_180147918
 * 00000001800AF5B6: mov     qword ptr [rbp+9E40h+var_94B0+8], rax
 * 00000001800AF5BD: movups  xmm7, [rbp+9E40h+var_94B0]
 * 00000001800AF5C4: mov     dword ptr [rbp+9E40h+var_78C0], esi
 * 00000001800AF5CA: mov     dword ptr [rbp+9E40h+var_78C0+4], esi
 * 00000001800AF5D0: movups  xmm6, [rbp+9E40h+var_78C0]
 * 00000001800AF5D7: call    sub_1800A5D74
 * 00000001800AF5DC: mov     r8, rax
 * 00000001800AF5DF: mov     r9d, r12d
 * 00000001800AF5E2: mov     edx, 3Ah ; ':'
 * 00000001800AF5E7: lea     rcx, [rbp+9E40h+var_2BF0]
 * 00000001800AF5EE: call    sub_180073668
 * 00000001800AF5F3: nop
 * 00000001800AF5F4: mov     r8, rax
 * 00000001800AF5F7: mov     rdx, r13
 * 00000001800AF5FA: lea     rcx, [rbp+9E40h+var_2C10]
 * 00000001800AF601: call    sub_18001B518
 * 00000001800AF606: nop
 * 00000001800AF607: lea     r8, aVertex; "/Vertex"
 * 00000001800AF60E: mov     rdx, rax
 * 00000001800AF611: lea     rcx, [rbp+9E40h+var_5550]
 * 00000001800AF618: call    sub_18001B448
 * 00000001800AF61D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF622: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF627: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF62C: mov     rcx, rax
 * 00000001800AF62F: call    sub_18007370C
 * 00000001800AF634: nop
 * 00000001800AF635: lea     rcx, [rbp+9E40h+var_2C10]
 * 00000001800AF63C: call    sub_180010F20
 * 00000001800AF641: nop
 * 00000001800AF642: lea     rcx, [rbp+9E40h+var_2BF0]
 * 00000001800AF649: call    sub_180010F20
 * 00000001800AF64E: nop
 * 00000001800AF64F: lea     rcx, dword_1801C94B4
 * 00000001800AF656: call    _Init_thread_footer
 * 00000001800AF65B: mov     rax, [rdi+rbx*8]
 * 00000001800AF65F: mov     eax, [r15+rax]
 * 00000001800AF663: cmp     cs:dword_1801C94B8, eax
 * 00000001800AF669: jle     loc_1800AF742
 * 00000001800AF66F: lea     rcx, dword_1801C94B8
 * 00000001800AF676: call    sub_18000C8D0
 * 00000001800AF67B: cmp     cs:dword_1801C94B8, r14d
 * 00000001800AF682: jnz     loc_1800AF742
 * 00000001800AF688: lea     rax, unk_180143780
 * 00000001800AF68F: mov     qword ptr [rbp+9E40h+var_94A0], rax
 * 00000001800AF696: lea     rax, unk_1801447D0
 * 00000001800AF69D: mov     qword ptr [rbp+9E40h+var_94A0+8], rax
 * 00000001800AF6A4: movups  xmm7, [rbp+9E40h+var_94A0]
 * 00000001800AF6AB: mov     dword ptr [rbp+9E40h+var_78A0], esi
 * 00000001800AF6B1: mov     dword ptr [rbp+9E40h+var_78A0+4], esi
 * 00000001800AF6B7: movups  xmm6, [rbp+9E40h+var_78A0]
 * 00000001800AF6BE: call    sub_1800A5D74
 * 00000001800AF6C3: mov     r8, rax
 * 00000001800AF6C6: mov     r9d, r12d
 * 00000001800AF6C9: mov     edx, 40h ; '@'
 * 00000001800AF6CE: lea     rcx, [rbp+9E40h+var_2B90]
 * 00000001800AF6D5: call    sub_180073668
 * 00000001800AF6DA: nop
 * 00000001800AF6DB: mov     r8, rax
 * 00000001800AF6DE: mov     rdx, r13
 * 00000001800AF6E1: lea     rcx, [rbp+9E40h+var_2BB0]
 * 00000001800AF6E8: call    sub_18001B518
 * 00000001800AF6ED: nop
 * 00000001800AF6EE: lea     r8, aVertex; "/Vertex"
 * 00000001800AF6F5: mov     rdx, rax
 * 00000001800AF6F8: lea     rcx, [rbp+9E40h+var_5530]
 * 00000001800AF6FF: call    sub_18001B448
 * 00000001800AF704: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF709: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF70E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF713: mov     rcx, rax
 * 00000001800AF716: call    sub_18007370C
 * 00000001800AF71B: nop
 * 00000001800AF71C: lea     rcx, [rbp+9E40h+var_2BB0]
 * 00000001800AF723: call    sub_180010F20
 * 00000001800AF728: nop
 * 00000001800AF729: lea     rcx, [rbp+9E40h+var_2B90]
 * 00000001800AF730: call    sub_180010F20
 * 00000001800AF735: nop
 * 00000001800AF736: lea     rcx, dword_1801C94B8
 * 00000001800AF73D: call    _Init_thread_footer
 * 00000001800AF742: mov     rax, [rdi+rbx*8]
 * 00000001800AF746: mov     ecx, [r15+rax]
 * 00000001800AF74A: cmp     cs:dword_1801C94BC, ecx
 * 00000001800AF750: jle     loc_1800AF829
 * 00000001800AF756: lea     rcx, dword_1801C94BC
 * 00000001800AF75D: call    sub_18000C8D0
 * 00000001800AF762: cmp     cs:dword_1801C94BC, r14d
 * 00000001800AF769: jnz     loc_1800AF829
 * 00000001800AF76F: lea     rax, unk_180143780
 * 00000001800AF776: mov     qword ptr [rbp+9E40h+var_9490], rax
 * 00000001800AF77D: lea     rax, unk_1801447D0
 * 00000001800AF784: mov     qword ptr [rbp+9E40h+var_9490+8], rax
 * 00000001800AF78B: movups  xmm7, [rbp+9E40h+var_9490]
 * 00000001800AF792: mov     dword ptr [rbp+9E40h+var_7880], esi
 * 00000001800AF798: mov     dword ptr [rbp+9E40h+var_7880+4], esi
 * 00000001800AF79E: movups  xmm6, [rbp+9E40h+var_7880]
 * 00000001800AF7A5: call    sub_1800A5D74
 * 00000001800AF7AA: mov     r8, rax
 * 00000001800AF7AD: mov     r9d, r12d
 * 00000001800AF7B0: mov     edx, 42h ; 'B'
 * 00000001800AF7B5: lea     rcx, [rbp+9E40h+var_2B30]
 * 00000001800AF7BC: call    sub_180073668
 * 00000001800AF7C1: nop
 * 00000001800AF7C2: mov     r8, rax
 * 00000001800AF7C5: mov     rdx, r13
 * 00000001800AF7C8: lea     rcx, [rbp+9E40h+var_2B50]
 * 00000001800AF7CF: call    sub_18001B518
 * 00000001800AF7D4: nop
 * 00000001800AF7D5: lea     r8, aVertex; "/Vertex"
 * 00000001800AF7DC: mov     rdx, rax
 * 00000001800AF7DF: lea     rcx, [rbp+9E40h+var_5510]
 * 00000001800AF7E6: call    sub_18001B448
 * 00000001800AF7EB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF7F0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF7F5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF7FA: mov     rcx, rax
 * 00000001800AF7FD: call    sub_18007370C
 * 00000001800AF802: nop
 * 00000001800AF803: lea     rcx, [rbp+9E40h+var_2B50]
 * 00000001800AF80A: call    sub_180010F20
 * 00000001800AF80F: nop
 * 00000001800AF810: lea     rcx, [rbp+9E40h+var_2B30]
 * 00000001800AF817: call    sub_180010F20
 * 00000001800AF81C: nop
 * 00000001800AF81D: lea     rcx, dword_1801C94BC
 * 00000001800AF824: call    _Init_thread_footer
 * 00000001800AF829: mov     rax, [rdi+rbx*8]
 * 00000001800AF82D: mov     ecx, [r15+rax]
 * 00000001800AF831: cmp     cs:dword_1801C94C0, ecx
 * 00000001800AF837: jle     loc_1800AF910
 * 00000001800AF83D: lea     rcx, dword_1801C94C0
 * 00000001800AF844: call    sub_18000C8D0
 * 00000001800AF849: cmp     cs:dword_1801C94C0, r14d
 * 00000001800AF850: jnz     loc_1800AF910
 * 00000001800AF856: lea     rax, unk_180143780
 * 00000001800AF85D: mov     qword ptr [rbp+9E40h+var_9480], rax
 * 00000001800AF864: lea     rax, unk_1801447D0
 * 00000001800AF86B: mov     qword ptr [rbp+9E40h+var_9480+8], rax
 * 00000001800AF872: movups  xmm7, [rbp+9E40h+var_9480]
 * 00000001800AF879: mov     dword ptr [rbp+9E40h+var_7860], esi
 * 00000001800AF87F: mov     dword ptr [rbp+9E40h+var_7860+4], esi
 * 00000001800AF885: movups  xmm6, [rbp+9E40h+var_7860]
 * 00000001800AF88C: call    sub_1800A5D74
 * 00000001800AF891: mov     r8, rax
 * 00000001800AF894: mov     r9d, r12d
 * 00000001800AF897: mov     edx, 48h ; 'H'
 * 00000001800AF89C: lea     rcx, [rbp+9E40h+var_2AD0]
 * 00000001800AF8A3: call    sub_180073668
 * 00000001800AF8A8: nop
 * 00000001800AF8A9: mov     r8, rax
 * 00000001800AF8AC: mov     rdx, r13
 * 00000001800AF8AF: lea     rcx, [rbp+9E40h+var_2AF0]
 * 00000001800AF8B6: call    sub_18001B518
 * 00000001800AF8BB: nop
 * 00000001800AF8BC: lea     r8, aVertex; "/Vertex"
 * 00000001800AF8C3: mov     rdx, rax
 * 00000001800AF8C6: lea     rcx, [rbp+9E40h+var_54F0]
 * 00000001800AF8CD: call    sub_18001B448
 * 00000001800AF8D2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF8D7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF8DC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF8E1: mov     rcx, rax
 * 00000001800AF8E4: call    sub_18007370C
 * 00000001800AF8E9: nop
 * 00000001800AF8EA: lea     rcx, [rbp+9E40h+var_2AF0]
 * 00000001800AF8F1: call    sub_180010F20
 * 00000001800AF8F6: nop
 * 00000001800AF8F7: lea     rcx, [rbp+9E40h+var_2AD0]
 * 00000001800AF8FE: call    sub_180010F20
 * 00000001800AF903: nop
 * 00000001800AF904: lea     rcx, dword_1801C94C0
 * 00000001800AF90B: call    _Init_thread_footer
 * 00000001800AF910: mov     rax, [rdi+rbx*8]
 * 00000001800AF914: mov     ecx, [r15+rax]
 * 00000001800AF918: cmp     cs:dword_1801C94C4, ecx
 * 00000001800AF91E: jle     loc_1800AF9F7
 * 00000001800AF924: lea     rcx, dword_1801C94C4
 * 00000001800AF92B: call    sub_18000C8D0
 * 00000001800AF930: cmp     cs:dword_1801C94C4, r14d
 * 00000001800AF937: jnz     loc_1800AF9F7
 * 00000001800AF93D: lea     rax, unk_180143780
 * 00000001800AF944: mov     qword ptr [rbp+9E40h+var_9470], rax
 * 00000001800AF94B: lea     rax, unk_1801447D0
 * 00000001800AF952: mov     qword ptr [rbp+9E40h+var_9470+8], rax
 * 00000001800AF959: movups  xmm7, [rbp+9E40h+var_9470]
 * 00000001800AF960: mov     dword ptr [rbp+9E40h+var_7840], esi
 * 00000001800AF966: mov     dword ptr [rbp+9E40h+var_7840+4], esi
 * 00000001800AF96C: movups  xmm6, [rbp+9E40h+var_7840]
 * 00000001800AF973: call    sub_1800A5D74
 * 00000001800AF978: mov     r8, rax
 * 00000001800AF97B: mov     r9d, r12d
 * 00000001800AF97E: mov     edx, 4Ah ; 'J'
 * 00000001800AF983: lea     rcx, [rbp+9E40h+var_2A70]
 * 00000001800AF98A: call    sub_180073668
 * 00000001800AF98F: nop
 * 00000001800AF990: mov     r8, rax
 * 00000001800AF993: mov     rdx, r13
 * 00000001800AF996: lea     rcx, [rbp+9E40h+var_2A90]
 * 00000001800AF99D: call    sub_18001B518
 * 00000001800AF9A2: nop
 * 00000001800AF9A3: lea     r8, aVertex; "/Vertex"
 * 00000001800AF9AA: mov     rdx, rax
 * 00000001800AF9AD: lea     rcx, [rbp+9E40h+var_54D0]
 * 00000001800AF9B4: call    sub_18001B448
 * 00000001800AF9B9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AF9BE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AF9C3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AF9C8: mov     rcx, rax
 * 00000001800AF9CB: call    sub_18007370C
 * 00000001800AF9D0: nop
 * 00000001800AF9D1: lea     rcx, [rbp+9E40h+var_2A90]
 * 00000001800AF9D8: call    sub_180010F20
 * 00000001800AF9DD: nop
 * 00000001800AF9DE: lea     rcx, [rbp+9E40h+var_2A70]
 * 00000001800AF9E5: call    sub_180010F20
 * 00000001800AF9EA: nop
 * 00000001800AF9EB: lea     rcx, dword_1801C94C4
 * 00000001800AF9F2: call    _Init_thread_footer
 * 00000001800AF9F7: mov     rax, [rdi+rbx*8]
 * 00000001800AF9FB: mov     ecx, [r15+rax]
 * 00000001800AF9FF: cmp     cs:dword_1801C94C8, ecx
 * 00000001800AFA05: jle     loc_1800AFADE
 * 00000001800AFA0B: lea     rcx, dword_1801C94C8
 * 00000001800AFA12: call    sub_18000C8D0
 * 00000001800AFA17: cmp     cs:dword_1801C94C8, r14d
 * 00000001800AFA1E: jnz     loc_1800AFADE
 * 00000001800AFA24: lea     rax, unk_180143780
 * 00000001800AFA2B: mov     qword ptr [rbp+9E40h+var_9460], rax
 * 00000001800AFA32: lea     rax, unk_1801447D0
 * 00000001800AFA39: mov     qword ptr [rbp+9E40h+var_9460+8], rax
 * 00000001800AFA40: movups  xmm7, [rbp+9E40h+var_9460]
 * 00000001800AFA47: mov     dword ptr [rbp+9E40h+var_7820], esi
 * 00000001800AFA4D: mov     dword ptr [rbp+9E40h+var_7820+4], esi
 * 00000001800AFA53: movups  xmm6, [rbp+9E40h+var_7820]
 * 00000001800AFA5A: call    sub_1800A5D74
 * 00000001800AFA5F: mov     r8, rax
 * 00000001800AFA62: mov     r9d, r12d
 * 00000001800AFA65: mov     edx, 50h ; 'P'
 * 00000001800AFA6A: lea     rcx, [rbp+9E40h+var_2A10]
 * 00000001800AFA71: call    sub_180073668
 * 00000001800AFA76: nop
 * 00000001800AFA77: mov     r8, rax
 * 00000001800AFA7A: mov     rdx, r13
 * 00000001800AFA7D: lea     rcx, [rbp+9E40h+var_2A30]
 * 00000001800AFA84: call    sub_18001B518
 * 00000001800AFA89: nop
 * 00000001800AFA8A: lea     r8, aVertex; "/Vertex"
 * 00000001800AFA91: mov     rdx, rax
 * 00000001800AFA94: lea     rcx, [rbp+9E40h+var_54B0]
 * 00000001800AFA9B: call    sub_18001B448
 * 00000001800AFAA0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFAA5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFAAA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFAAF: mov     rcx, rax
 * 00000001800AFAB2: call    sub_18007370C
 * 00000001800AFAB7: nop
 * 00000001800AFAB8: lea     rcx, [rbp+9E40h+var_2A30]
 * 00000001800AFABF: call    sub_180010F20
 * 00000001800AFAC4: nop
 * 00000001800AFAC5: lea     rcx, [rbp+9E40h+var_2A10]
 * 00000001800AFACC: call    sub_180010F20
 * 00000001800AFAD1: nop
 * 00000001800AFAD2: lea     rcx, dword_1801C94C8
 * 00000001800AFAD9: call    _Init_thread_footer
 * 00000001800AFADE: mov     rax, [rdi+rbx*8]
 * 00000001800AFAE2: mov     ecx, [r15+rax]
 * 00000001800AFAE6: cmp     cs:dword_1801C94CC, ecx
 * 00000001800AFAEC: jle     loc_1800AFBC5
 * 00000001800AFAF2: lea     rcx, dword_1801C94CC
 * 00000001800AFAF9: call    sub_18000C8D0
 * 00000001800AFAFE: cmp     cs:dword_1801C94CC, r14d
 * 00000001800AFB05: jnz     loc_1800AFBC5
 * 00000001800AFB0B: lea     rax, unk_180143780
 * 00000001800AFB12: mov     qword ptr [rbp+9E40h+var_9450], rax
 * 00000001800AFB19: lea     rax, unk_1801447D0
 * 00000001800AFB20: mov     qword ptr [rbp+9E40h+var_9450+8], rax
 * 00000001800AFB27: movups  xmm7, [rbp+9E40h+var_9450]
 * 00000001800AFB2E: mov     dword ptr [rbp+9E40h+var_7800], esi
 * 00000001800AFB34: mov     dword ptr [rbp+9E40h+var_7800+4], esi
 * 00000001800AFB3A: movups  xmm6, [rbp+9E40h+var_7800]
 * 00000001800AFB41: call    sub_1800A5D74
 * 00000001800AFB46: mov     r8, rax
 * 00000001800AFB49: mov     r9d, r12d
 * 00000001800AFB4C: mov     edx, 52h ; 'R'
 * 00000001800AFB51: lea     rcx, [rbp+9E40h+var_29B0]
 * 00000001800AFB58: call    sub_180073668
 * 00000001800AFB5D: nop
 * 00000001800AFB5E: mov     r8, rax
 * 00000001800AFB61: mov     rdx, r13
 * 00000001800AFB64: lea     rcx, [rbp+9E40h+var_29D0]
 * 00000001800AFB6B: call    sub_18001B518
 * 00000001800AFB70: nop
 * 00000001800AFB71: lea     r8, aVertex; "/Vertex"
 * 00000001800AFB78: mov     rdx, rax
 * 00000001800AFB7B: lea     rcx, [rbp+9E40h+var_5490]
 * 00000001800AFB82: call    sub_18001B448
 * 00000001800AFB87: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFB8C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFB91: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFB96: mov     rcx, rax
 * 00000001800AFB99: call    sub_18007370C
 * 00000001800AFB9E: nop
 * 00000001800AFB9F: lea     rcx, [rbp+9E40h+var_29D0]
 * 00000001800AFBA6: call    sub_180010F20
 * 00000001800AFBAB: nop
 * 00000001800AFBAC: lea     rcx, [rbp+9E40h+var_29B0]
 * 00000001800AFBB3: call    sub_180010F20
 * 00000001800AFBB8: nop
 * 00000001800AFBB9: lea     rcx, dword_1801C94CC
 * 00000001800AFBC0: call    _Init_thread_footer
 * 00000001800AFBC5: mov     rax, [rdi+rbx*8]
 * 00000001800AFBC9: mov     ecx, [r15+rax]
 * 00000001800AFBCD: cmp     cs:dword_1801C94D0, ecx
 * 00000001800AFBD3: jle     loc_1800AFCAC
 * 00000001800AFBD9: lea     rcx, dword_1801C94D0
 * 00000001800AFBE0: call    sub_18000C8D0
 * 00000001800AFBE5: cmp     cs:dword_1801C94D0, r14d
 * 00000001800AFBEC: jnz     loc_1800AFCAC
 * 00000001800AFBF2: lea     rax, unk_180143780
 * 00000001800AFBF9: mov     qword ptr [rbp+9E40h+var_9440], rax
 * 00000001800AFC00: lea     rax, unk_1801447D0
 * 00000001800AFC07: mov     qword ptr [rbp+9E40h+var_9440+8], rax
 * 00000001800AFC0E: movups  xmm7, [rbp+9E40h+var_9440]
 * 00000001800AFC15: mov     dword ptr [rbp+9E40h+var_77E0], esi
 * 00000001800AFC1B: mov     dword ptr [rbp+9E40h+var_77E0+4], esi
 * 00000001800AFC21: movups  xmm6, [rbp+9E40h+var_77E0]
 * 00000001800AFC28: call    sub_1800A5D74
 * 00000001800AFC2D: mov     r8, rax
 * 00000001800AFC30: mov     r9d, r12d
 * 00000001800AFC33: mov     edx, 58h ; 'X'
 * 00000001800AFC38: lea     rcx, [rbp+9E40h+var_2950]
 * 00000001800AFC3F: call    sub_180073668
 * 00000001800AFC44: nop
 * 00000001800AFC45: mov     r8, rax
 * 00000001800AFC48: mov     rdx, r13
 * 00000001800AFC4B: lea     rcx, [rbp+9E40h+var_2970]
 * 00000001800AFC52: call    sub_18001B518
 * 00000001800AFC57: nop
 * 00000001800AFC58: lea     r8, aVertex; "/Vertex"
 * 00000001800AFC5F: mov     rdx, rax
 * 00000001800AFC62: lea     rcx, [rbp+9E40h+var_5470]
 * 00000001800AFC69: call    sub_18001B448
 * 00000001800AFC6E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFC73: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFC78: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFC7D: mov     rcx, rax
 * 00000001800AFC80: call    sub_18007370C
 * 00000001800AFC85: nop
 * 00000001800AFC86: lea     rcx, [rbp+9E40h+var_2970]
 * 00000001800AFC8D: call    sub_180010F20
 * 00000001800AFC92: nop
 * 00000001800AFC93: lea     rcx, [rbp+9E40h+var_2950]
 * 00000001800AFC9A: call    sub_180010F20
 * 00000001800AFC9F: nop
 * 00000001800AFCA0: lea     rcx, dword_1801C94D0
 * 00000001800AFCA7: call    _Init_thread_footer
 * 00000001800AFCAC: mov     rax, [rdi+rbx*8]
 * 00000001800AFCB0: mov     ecx, [r15+rax]
 * 00000001800AFCB4: cmp     cs:dword_1801C94D4, ecx
 * 00000001800AFCBA: jle     loc_1800AFD93
 * 00000001800AFCC0: lea     rcx, dword_1801C94D4
 * 00000001800AFCC7: call    sub_18000C8D0
 * 00000001800AFCCC: cmp     cs:dword_1801C94D4, r14d
 * 00000001800AFCD3: jnz     loc_1800AFD93
 * 00000001800AFCD9: lea     rax, unk_180143780
 * 00000001800AFCE0: mov     qword ptr [rbp+9E40h+var_9430], rax
 * 00000001800AFCE7: lea     rax, unk_1801447D0
 * 00000001800AFCEE: mov     qword ptr [rbp+9E40h+var_9430+8], rax
 * 00000001800AFCF5: movups  xmm7, [rbp+9E40h+var_9430]
 * 00000001800AFCFC: mov     dword ptr [rbp+9E40h+var_77C0], esi
 * 00000001800AFD02: mov     dword ptr [rbp+9E40h+var_77C0+4], esi
 * 00000001800AFD08: movups  xmm6, [rbp+9E40h+var_77C0]
 * 00000001800AFD0F: call    sub_1800A5D74
 * 00000001800AFD14: mov     r8, rax
 * 00000001800AFD17: mov     r9d, r12d
 * 00000001800AFD1A: mov     edx, 5Ah ; 'Z'
 * 00000001800AFD1F: lea     rcx, [rbp+9E40h+var_28F0]
 * 00000001800AFD26: call    sub_180073668
 * 00000001800AFD2B: nop
 * 00000001800AFD2C: mov     r8, rax
 * 00000001800AFD2F: mov     rdx, r13
 * 00000001800AFD32: lea     rcx, [rbp+9E40h+var_2910]
 * 00000001800AFD39: call    sub_18001B518
 * 00000001800AFD3E: nop
 * 00000001800AFD3F: lea     r8, aVertex; "/Vertex"
 * 00000001800AFD46: mov     rdx, rax
 * 00000001800AFD49: lea     rcx, [rbp+9E40h+var_5450]
 * 00000001800AFD50: call    sub_18001B448
 * 00000001800AFD55: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFD5A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFD5F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFD64: mov     rcx, rax
 * 00000001800AFD67: call    sub_18007370C
 * 00000001800AFD6C: nop
 * 00000001800AFD6D: lea     rcx, [rbp+9E40h+var_2910]
 * 00000001800AFD74: call    sub_180010F20
 * 00000001800AFD79: nop
 * 00000001800AFD7A: lea     rcx, [rbp+9E40h+var_28F0]
 * 00000001800AFD81: call    sub_180010F20
 * 00000001800AFD86: nop
 * 00000001800AFD87: lea     rcx, dword_1801C94D4
 * 00000001800AFD8E: call    _Init_thread_footer
 * 00000001800AFD93: mov     rax, [rdi+rbx*8]
 * 00000001800AFD97: mov     eax, [r15+rax]
 * 00000001800AFD9B: cmp     cs:dword_1801C94D8, eax
 * 00000001800AFDA1: jle     loc_1800AFE7A
 * 00000001800AFDA7: lea     rcx, dword_1801C94D8
 * 00000001800AFDAE: call    sub_18000C8D0
 * 00000001800AFDB3: cmp     cs:dword_1801C94D8, r14d
 * 00000001800AFDBA: jnz     loc_1800AFE7A
 * 00000001800AFDC0: lea     rax, unk_1801411F0
 * 00000001800AFDC7: mov     qword ptr [rbp+9E40h+var_9420], rax
 * 00000001800AFDCE: lea     rax, unk_180142C40
 * 00000001800AFDD5: mov     qword ptr [rbp+9E40h+var_9420+8], rax
 * 00000001800AFDDC: movups  xmm7, [rbp+9E40h+var_9420]
 * 00000001800AFDE3: mov     dword ptr [rbp+9E40h+var_77A0], esi
 * 00000001800AFDE9: mov     dword ptr [rbp+9E40h+var_77A0+4], esi
 * 00000001800AFDEF: movups  xmm6, [rbp+9E40h+var_77A0]
 * 00000001800AFDF6: call    sub_1800A5D74
 * 00000001800AFDFB: mov     r8, rax
 * 00000001800AFDFE: mov     r9d, r12d
 * 00000001800AFE01: mov     edx, 60h ; '`'
 * 00000001800AFE06: lea     rcx, [rbp+9E40h+var_2890]
 * 00000001800AFE0D: call    sub_180073668
 * 00000001800AFE12: nop
 * 00000001800AFE13: mov     r8, rax
 * 00000001800AFE16: mov     rdx, r13
 * 00000001800AFE19: lea     rcx, [rbp+9E40h+var_28B0]
 * 00000001800AFE20: call    sub_18001B518
 * 00000001800AFE25: nop
 * 00000001800AFE26: lea     r8, aVertex; "/Vertex"
 * 00000001800AFE2D: mov     rdx, rax
 * 00000001800AFE30: lea     rcx, [rbp+9E40h+var_5430]
 * 00000001800AFE37: call    sub_18001B448
 * 00000001800AFE3C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFE41: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFE46: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFE4B: mov     rcx, rax
 * 00000001800AFE4E: call    sub_18007370C
 * 00000001800AFE53: nop
 * 00000001800AFE54: lea     rcx, [rbp+9E40h+var_28B0]
 * 00000001800AFE5B: call    sub_180010F20
 * 00000001800AFE60: nop
 * 00000001800AFE61: lea     rcx, [rbp+9E40h+var_2890]
 * 00000001800AFE68: call    sub_180010F20
 * 00000001800AFE6D: nop
 * 00000001800AFE6E: lea     rcx, dword_1801C94D8
 * 00000001800AFE75: call    _Init_thread_footer
 * 00000001800AFE7A: mov     rax, [rdi+rbx*8]
 * 00000001800AFE7E: mov     ecx, [r15+rax]
 * 00000001800AFE82: cmp     cs:dword_1801C94DC, ecx
 * 00000001800AFE88: jle     loc_1800AFF61
 * 00000001800AFE8E: lea     rcx, dword_1801C94DC
 * 00000001800AFE95: call    sub_18000C8D0
 * 00000001800AFE9A: cmp     cs:dword_1801C94DC, r14d
 * 00000001800AFEA1: jnz     loc_1800AFF61
 * 00000001800AFEA7: lea     rax, unk_1801411F0
 * 00000001800AFEAE: mov     qword ptr [rbp+9E40h+var_9410], rax
 * 00000001800AFEB5: lea     rax, unk_180142C40
 * 00000001800AFEBC: mov     qword ptr [rbp+9E40h+var_9410+8], rax
 * 00000001800AFEC3: movups  xmm7, [rbp+9E40h+var_9410]
 * 00000001800AFECA: mov     dword ptr [rbp+9E40h+var_7780], esi
 * 00000001800AFED0: mov     dword ptr [rbp+9E40h+var_7780+4], esi
 * 00000001800AFED6: movups  xmm6, [rbp+9E40h+var_7780]
 * 00000001800AFEDD: call    sub_1800A5D74
 * 00000001800AFEE2: mov     r8, rax
 * 00000001800AFEE5: mov     r9d, r12d
 * 00000001800AFEE8: mov     edx, 62h ; 'b'
 * 00000001800AFEED: lea     rcx, [rbp+9E40h+var_2830]
 * 00000001800AFEF4: call    sub_180073668
 * 00000001800AFEF9: nop
 * 00000001800AFEFA: mov     r8, rax
 * 00000001800AFEFD: mov     rdx, r13
 * 00000001800AFF00: lea     rcx, [rbp+9E40h+var_2850]
 * 00000001800AFF07: call    sub_18001B518
 * 00000001800AFF0C: nop
 * 00000001800AFF0D: lea     r8, aVertex; "/Vertex"
 * 00000001800AFF14: mov     rdx, rax
 * 00000001800AFF17: lea     rcx, [rbp+9E40h+var_5410]
 * 00000001800AFF1E: call    sub_18001B448
 * 00000001800AFF23: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800AFF28: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800AFF2D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800AFF32: mov     rcx, rax
 * 00000001800AFF35: call    sub_18007370C
 * 00000001800AFF3A: nop
 * 00000001800AFF3B: lea     rcx, [rbp+9E40h+var_2850]
 * 00000001800AFF42: call    sub_180010F20
 * 00000001800AFF47: nop
 * 00000001800AFF48: lea     rcx, [rbp+9E40h+var_2830]
 * 00000001800AFF4F: call    sub_180010F20
 * 00000001800AFF54: nop
 * 00000001800AFF55: lea     rcx, dword_1801C94DC
 * 00000001800AFF5C: call    _Init_thread_footer
 * 00000001800AFF61: mov     rax, [rdi+rbx*8]
 * 00000001800AFF65: mov     ecx, [r15+rax]
 * 00000001800AFF69: cmp     cs:dword_1801C94E0, ecx
 * 00000001800AFF6F: jle     loc_1800B0048
 * 00000001800AFF75: lea     rcx, dword_1801C94E0
 * 00000001800AFF7C: call    sub_18000C8D0
 * 00000001800AFF81: cmp     cs:dword_1801C94E0, r14d
 * 00000001800AFF88: jnz     loc_1800B0048
 * 00000001800AFF8E: lea     rax, unk_1801411F0
 * 00000001800AFF95: mov     qword ptr [rbp+9E40h+var_9400], rax
 * 00000001800AFF9C: lea     rax, unk_180142C40
 * 00000001800AFFA3: mov     qword ptr [rbp+9E40h+var_9400+8], rax
 * 00000001800AFFAA: movups  xmm7, [rbp+9E40h+var_9400]
 * 00000001800AFFB1: mov     dword ptr [rbp+9E40h+var_7760], esi
 * 00000001800AFFB7: mov     dword ptr [rbp+9E40h+var_7760+4], esi
 * 00000001800AFFBD: movups  xmm6, [rbp+9E40h+var_7760]
 * 00000001800AFFC4: call    sub_1800A5D74
 * 00000001800AFFC9: mov     r8, rax
 * 00000001800AFFCC: mov     r9d, r12d
 * 00000001800AFFCF: mov     edx, 68h ; 'h'
 * 00000001800AFFD4: lea     rcx, [rbp+9E40h+var_27D0]
 * 00000001800AFFDB: call    sub_180073668
 * 00000001800AFFE0: nop
 * 00000001800AFFE1: mov     r8, rax
 * 00000001800AFFE4: mov     rdx, r13
 * 00000001800AFFE7: lea     rcx, [rbp+9E40h+var_27F0]
 * 00000001800AFFEE: call    sub_18001B518
 * 00000001800AFFF3: nop
 * 00000001800AFFF4: lea     r8, aVertex; "/Vertex"
 * 00000001800AFFFB: mov     rdx, rax
 * 00000001800AFFFE: lea     rcx, [rbp+9E40h+var_53F0]
 * 00000001800B0005: call    sub_18001B448
 * 00000001800B000A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B000F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0014: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0019: mov     rcx, rax
 * 00000001800B001C: call    sub_18007370C
 * 00000001800B0021: nop
 * 00000001800B0022: lea     rcx, [rbp+9E40h+var_27F0]
 * 00000001800B0029: call    sub_180010F20
 * 00000001800B002E: nop
 * 00000001800B002F: lea     rcx, [rbp+9E40h+var_27D0]
 * 00000001800B0036: call    sub_180010F20
 * 00000001800B003B: nop
 * 00000001800B003C: lea     rcx, dword_1801C94E0
 * 00000001800B0043: call    _Init_thread_footer
 * 00000001800B0048: mov     rax, [rdi+rbx*8]
 * 00000001800B004C: mov     ecx, [r15+rax]
 * 00000001800B0050: cmp     cs:dword_1801C94E4, ecx
 * 00000001800B0056: jle     loc_1800B012F
 * 00000001800B005C: lea     rcx, dword_1801C94E4
 * 00000001800B0063: call    sub_18000C8D0
 * 00000001800B0068: cmp     cs:dword_1801C94E4, r14d
 * 00000001800B006F: jnz     loc_1800B012F
 * 00000001800B0075: lea     rax, unk_1801411F0
 * 00000001800B007C: mov     qword ptr [rbp+9E40h+var_93F0], rax
 * 00000001800B0083: lea     rax, unk_180142C40
 * 00000001800B008A: mov     qword ptr [rbp+9E40h+var_93F0+8], rax
 * 00000001800B0091: movups  xmm7, [rbp+9E40h+var_93F0]
 * 00000001800B0098: mov     dword ptr [rbp+9E40h+var_7740], esi
 * 00000001800B009E: mov     dword ptr [rbp+9E40h+var_7740+4], esi
 * 00000001800B00A4: movups  xmm6, [rbp+9E40h+var_7740]
 * 00000001800B00AB: call    sub_1800A5D74
 * 00000001800B00B0: mov     r8, rax
 * 00000001800B00B3: mov     r9d, r12d
 * 00000001800B00B6: mov     edx, 6Ah ; 'j'
 * 00000001800B00BB: lea     rcx, [rbp+9E40h+var_2770]
 * 00000001800B00C2: call    sub_180073668
 * 00000001800B00C7: nop
 * 00000001800B00C8: mov     r8, rax
 * 00000001800B00CB: mov     rdx, r13
 * 00000001800B00CE: lea     rcx, [rbp+9E40h+var_2790]
 * 00000001800B00D5: call    sub_18001B518
 * 00000001800B00DA: nop
 * 00000001800B00DB: lea     r8, aVertex; "/Vertex"
 * 00000001800B00E2: mov     rdx, rax
 * 00000001800B00E5: lea     rcx, [rbp+9E40h+var_53D0]
 * 00000001800B00EC: call    sub_18001B448
 * 00000001800B00F1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B00F6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B00FB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0100: mov     rcx, rax
 * 00000001800B0103: call    sub_18007370C
 * 00000001800B0108: nop
 * 00000001800B0109: lea     rcx, [rbp+9E40h+var_2790]
 * 00000001800B0110: call    sub_180010F20
 * 00000001800B0115: nop
 * 00000001800B0116: lea     rcx, [rbp+9E40h+var_2770]
 * 00000001800B011D: call    sub_180010F20
 * 00000001800B0122: nop
 * 00000001800B0123: lea     rcx, dword_1801C94E4
 * 00000001800B012A: call    _Init_thread_footer
 * 00000001800B012F: mov     rax, [rdi+rbx*8]
 * 00000001800B0133: mov     ecx, [r15+rax]
 * 00000001800B0137: cmp     cs:dword_1801C94E8, ecx
 * 00000001800B013D: jle     loc_1800B0216
 * 00000001800B0143: lea     rcx, dword_1801C94E8
 * 00000001800B014A: call    sub_18000C8D0
 * 00000001800B014F: cmp     cs:dword_1801C94E8, r14d
 * 00000001800B0156: jnz     loc_1800B0216
 * 00000001800B015C: lea     rax, unk_1801411F0
 * 00000001800B0163: mov     qword ptr [rbp+9E40h+var_93E0], rax
 * 00000001800B016A: lea     rax, unk_180142C40
 * 00000001800B0171: mov     qword ptr [rbp+9E40h+var_93E0+8], rax
 * 00000001800B0178: movups  xmm7, [rbp+9E40h+var_93E0]
 * 00000001800B017F: mov     dword ptr [rbp+9E40h+var_7720], esi
 * 00000001800B0185: mov     dword ptr [rbp+9E40h+var_7720+4], esi
 * 00000001800B018B: movups  xmm6, [rbp+9E40h+var_7720]
 * 00000001800B0192: call    sub_1800A5D74
 * 00000001800B0197: mov     r8, rax
 * 00000001800B019A: mov     r9d, r12d
 * 00000001800B019D: mov     edx, 70h ; 'p'
 * 00000001800B01A2: lea     rcx, [rbp+9E40h+var_2710]
 * 00000001800B01A9: call    sub_180073668
 * 00000001800B01AE: nop
 * 00000001800B01AF: mov     r8, rax
 * 00000001800B01B2: mov     rdx, r13
 * 00000001800B01B5: lea     rcx, [rbp+9E40h+var_2730]
 * 00000001800B01BC: call    sub_18001B518
 * 00000001800B01C1: nop
 * 00000001800B01C2: lea     r8, aVertex; "/Vertex"
 * 00000001800B01C9: mov     rdx, rax
 * 00000001800B01CC: lea     rcx, [rbp+9E40h+var_53B0]
 * 00000001800B01D3: call    sub_18001B448
 * 00000001800B01D8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B01DD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B01E2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B01E7: mov     rcx, rax
 * 00000001800B01EA: call    sub_18007370C
 * 00000001800B01EF: nop
 * 00000001800B01F0: lea     rcx, [rbp+9E40h+var_2730]
 * 00000001800B01F7: call    sub_180010F20
 * 00000001800B01FC: nop
 * 00000001800B01FD: lea     rcx, [rbp+9E40h+var_2710]
 * 00000001800B0204: call    sub_180010F20
 * 00000001800B0209: nop
 * 00000001800B020A: lea     rcx, dword_1801C94E8
 * 00000001800B0211: call    _Init_thread_footer
 * 00000001800B0216: mov     rax, [rdi+rbx*8]
 * 00000001800B021A: mov     ecx, [r15+rax]
 * 00000001800B021E: cmp     cs:dword_1801C94EC, ecx
 * 00000001800B0224: jle     loc_1800B02FD
 * 00000001800B022A: lea     rcx, dword_1801C94EC
 * 00000001800B0231: call    sub_18000C8D0
 * 00000001800B0236: cmp     cs:dword_1801C94EC, r14d
 * 00000001800B023D: jnz     loc_1800B02FD
 * 00000001800B0243: lea     rax, unk_1801411F0
 * 00000001800B024A: mov     qword ptr [rbp+9E40h+var_93D0], rax
 * 00000001800B0251: lea     rax, unk_180142C40
 * 00000001800B0258: mov     qword ptr [rbp+9E40h+var_93D0+8], rax
 * 00000001800B025F: movups  xmm7, [rbp+9E40h+var_93D0]
 * 00000001800B0266: mov     dword ptr [rbp+9E40h+var_7700], esi
 * 00000001800B026C: mov     dword ptr [rbp+9E40h+var_7700+4], esi
 * 00000001800B0272: movups  xmm6, [rbp+9E40h+var_7700]
 * 00000001800B0279: call    sub_1800A5D74
 * 00000001800B027E: mov     r8, rax
 * 00000001800B0281: mov     r9d, r12d
 * 00000001800B0284: mov     edx, 72h ; 'r'
 * 00000001800B0289: lea     rcx, [rbp+9E40h+var_26B0]
 * 00000001800B0290: call    sub_180073668
 * 00000001800B0295: nop
 * 00000001800B0296: mov     r8, rax
 * 00000001800B0299: mov     rdx, r13
 * 00000001800B029C: lea     rcx, [rbp+9E40h+var_26D0]
 * 00000001800B02A3: call    sub_18001B518
 * 00000001800B02A8: nop
 * 00000001800B02A9: lea     r8, aVertex; "/Vertex"
 * 00000001800B02B0: mov     rdx, rax
 * 00000001800B02B3: lea     rcx, [rbp+9E40h+var_5390]
 * 00000001800B02BA: call    sub_18001B448
 * 00000001800B02BF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B02C4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B02C9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B02CE: mov     rcx, rax
 * 00000001800B02D1: call    sub_18007370C
 * 00000001800B02D6: nop
 * 00000001800B02D7: lea     rcx, [rbp+9E40h+var_26D0]
 * 00000001800B02DE: call    sub_180010F20
 * 00000001800B02E3: nop
 * 00000001800B02E4: lea     rcx, [rbp+9E40h+var_26B0]
 * 00000001800B02EB: call    sub_180010F20
 * 00000001800B02F0: nop
 * 00000001800B02F1: lea     rcx, dword_1801C94EC
 * 00000001800B02F8: call    _Init_thread_footer
 * 00000001800B02FD: mov     rax, [rdi+rbx*8]
 * 00000001800B0301: mov     ecx, [r15+rax]
 * 00000001800B0305: cmp     cs:dword_1801C94F0, ecx
 * 00000001800B030B: jle     loc_1800B03E4
 * 00000001800B0311: lea     rcx, dword_1801C94F0
 * 00000001800B0318: call    sub_18000C8D0
 * 00000001800B031D: cmp     cs:dword_1801C94F0, r14d
 * 00000001800B0324: jnz     loc_1800B03E4
 * 00000001800B032A: lea     rax, unk_1801411F0
 * 00000001800B0331: mov     qword ptr [rbp+9E40h+var_93C0], rax
 * 00000001800B0338: lea     rax, unk_180142C40
 * 00000001800B033F: mov     qword ptr [rbp+9E40h+var_93C0+8], rax
 * 00000001800B0346: movups  xmm7, [rbp+9E40h+var_93C0]
 * 00000001800B034D: mov     dword ptr [rbp+9E40h+var_76E0], esi
 * 00000001800B0353: mov     dword ptr [rbp+9E40h+var_76E0+4], esi
 * 00000001800B0359: movups  xmm6, [rbp+9E40h+var_76E0]
 * 00000001800B0360: call    sub_1800A5D74
 * 00000001800B0365: mov     r8, rax
 * 00000001800B0368: mov     r9d, r12d
 * 00000001800B036B: mov     edx, 78h ; 'x'
 * 00000001800B0370: lea     rcx, [rbp+9E40h+var_2650]
 * 00000001800B0377: call    sub_180073668
 * 00000001800B037C: nop
 * 00000001800B037D: mov     r8, rax
 * 00000001800B0380: mov     rdx, r13
 * 00000001800B0383: lea     rcx, [rbp+9E40h+var_2670]
 * 00000001800B038A: call    sub_18001B518
 * 00000001800B038F: nop
 * 00000001800B0390: lea     r8, aVertex; "/Vertex"
 * 00000001800B0397: mov     rdx, rax
 * 00000001800B039A: lea     rcx, [rbp+9E40h+var_5370]
 * 00000001800B03A1: call    sub_18001B448
 * 00000001800B03A6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B03AB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B03B0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B03B5: mov     rcx, rax
 * 00000001800B03B8: call    sub_18007370C
 * 00000001800B03BD: nop
 * 00000001800B03BE: lea     rcx, [rbp+9E40h+var_2670]
 * 00000001800B03C5: call    sub_180010F20
 * 00000001800B03CA: nop
 * 00000001800B03CB: lea     rcx, [rbp+9E40h+var_2650]
 * 00000001800B03D2: call    sub_180010F20
 * 00000001800B03D7: nop
 * 00000001800B03D8: lea     rcx, dword_1801C94F0
 * 00000001800B03DF: call    _Init_thread_footer
 * 00000001800B03E4: mov     rax, [rdi+rbx*8]
 * 00000001800B03E8: mov     ecx, [r15+rax]
 * 00000001800B03EC: cmp     cs:dword_1801C94F4, ecx
 * 00000001800B03F2: jle     loc_1800B04CB
 * 00000001800B03F8: lea     rcx, dword_1801C94F4
 * 00000001800B03FF: call    sub_18000C8D0
 * 00000001800B0404: cmp     cs:dword_1801C94F4, r14d
 * 00000001800B040B: jnz     loc_1800B04CB
 * 00000001800B0411: lea     rax, unk_1801411F0
 * 00000001800B0418: mov     qword ptr [rbp+9E40h+var_93B0], rax
 * 00000001800B041F: lea     rax, unk_180142C40
 * 00000001800B0426: mov     qword ptr [rbp+9E40h+var_93B0+8], rax
 * 00000001800B042D: movups  xmm7, [rbp+9E40h+var_93B0]
 * 00000001800B0434: mov     dword ptr [rbp+9E40h+var_76C0], esi
 * 00000001800B043A: mov     dword ptr [rbp+9E40h+var_76C0+4], esi
 * 00000001800B0440: movups  xmm6, [rbp+9E40h+var_76C0]
 * 00000001800B0447: call    sub_1800A5D74
 * 00000001800B044C: mov     r8, rax
 * 00000001800B044F: mov     r9d, r12d
 * 00000001800B0452: mov     edx, 7Ah ; 'z'
 * 00000001800B0457: lea     rcx, [rbp+9E40h+var_25F0]
 * 00000001800B045E: call    sub_180073668
 * 00000001800B0463: nop
 * 00000001800B0464: mov     r8, rax
 * 00000001800B0467: mov     rdx, r13
 * 00000001800B046A: lea     rcx, [rbp+9E40h+var_2610]
 * 00000001800B0471: call    sub_18001B518
 * 00000001800B0476: nop
 * 00000001800B0477: lea     r8, aVertex; "/Vertex"
 * 00000001800B047E: mov     rdx, rax
 * 00000001800B0481: lea     rcx, [rbp+9E40h+var_5350]
 * 00000001800B0488: call    sub_18001B448
 * 00000001800B048D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0492: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0497: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B049C: mov     rcx, rax
 * 00000001800B049F: call    sub_18007370C
 * 00000001800B04A4: nop
 * 00000001800B04A5: lea     rcx, [rbp+9E40h+var_2610]
 * 00000001800B04AC: call    sub_180010F20
 * 00000001800B04B1: nop
 * 00000001800B04B2: lea     rcx, [rbp+9E40h+var_25F0]
 * 00000001800B04B9: call    sub_180010F20
 * 00000001800B04BE: nop
 * 00000001800B04BF: lea     rcx, dword_1801C94F4
 * 00000001800B04C6: call    _Init_thread_footer
 * 00000001800B04CB: mov     rax, [rdi+rbx*8]
 * 00000001800B04CF: mov     ecx, [r15+rax]
 * 00000001800B04D3: cmp     cs:dword_1801C94F8, ecx
 * 00000001800B04D9: jle     loc_1800B05B2
 * 00000001800B04DF: lea     rcx, dword_1801C94F8
 * 00000001800B04E6: call    sub_18000C8D0
 * 00000001800B04EB: cmp     cs:dword_1801C94F8, r14d
 * 00000001800B04F2: jnz     loc_1800B05B2
 * 00000001800B04F8: lea     rax, unk_180143780
 * 00000001800B04FF: mov     qword ptr [rbp+9E40h+var_93A0], rax
 * 00000001800B0506: lea     rax, unk_1801447D0
 * 00000001800B050D: mov     qword ptr [rbp+9E40h+var_93A0+8], rax
 * 00000001800B0514: movups  xmm7, [rbp+9E40h+var_93A0]
 * 00000001800B051B: mov     dword ptr [rbp+9E40h+var_76A0], esi
 * 00000001800B0521: mov     dword ptr [rbp+9E40h+var_76A0+4], esi
 * 00000001800B0527: movups  xmm6, [rbp+9E40h+var_76A0]
 * 00000001800B052E: call    sub_1800A5D74
 * 00000001800B0533: mov     r8, rax
 * 00000001800B0536: mov     r9d, r12d
 * 00000001800B0539: mov     edx, 80h
 * 00000001800B053E: lea     rcx, [rbp+9E40h+var_2590]
 * 00000001800B0545: call    sub_180073668
 * 00000001800B054A: nop
 * 00000001800B054B: mov     r8, rax
 * 00000001800B054E: mov     rdx, r13
 * 00000001800B0551: lea     rcx, [rbp+9E40h+var_25B0]
 * 00000001800B0558: call    sub_18001B518
 * 00000001800B055D: nop
 * 00000001800B055E: lea     r8, aVertex; "/Vertex"
 * 00000001800B0565: mov     rdx, rax
 * 00000001800B0568: lea     rcx, [rbp+9E40h+var_5330]
 * 00000001800B056F: call    sub_18001B448
 * 00000001800B0574: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0579: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B057E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0583: mov     rcx, rax
 * 00000001800B0586: call    sub_18007370C
 * 00000001800B058B: nop
 * 00000001800B058C: lea     rcx, [rbp+9E40h+var_25B0]
 * 00000001800B0593: call    sub_180010F20
 * 00000001800B0598: nop
 * 00000001800B0599: lea     rcx, [rbp+9E40h+var_2590]
 * 00000001800B05A0: call    sub_180010F20
 * 00000001800B05A5: nop
 * 00000001800B05A6: lea     rcx, dword_1801C94F8
 * 00000001800B05AD: call    _Init_thread_footer
 * 00000001800B05B2: mov     rax, [rdi+rbx*8]
 * 00000001800B05B6: mov     ecx, [r15+rax]
 * 00000001800B05BA: cmp     cs:dword_1801C94FC, ecx
 * 00000001800B05C0: jle     loc_1800B0699
 * 00000001800B05C6: lea     rcx, dword_1801C94FC
 * 00000001800B05CD: call    sub_18000C8D0
 * 00000001800B05D2: cmp     cs:dword_1801C94FC, r14d
 * 00000001800B05D9: jnz     loc_1800B0699
 * 00000001800B05DF: lea     rax, unk_180143780
 * 00000001800B05E6: mov     qword ptr [rbp+9E40h+var_9390], rax
 * 00000001800B05ED: lea     rax, unk_1801447D0
 * 00000001800B05F4: mov     qword ptr [rbp+9E40h+var_9390+8], rax
 * 00000001800B05FB: movups  xmm7, [rbp+9E40h+var_9390]
 * 00000001800B0602: mov     dword ptr [rbp+9E40h+var_7680], esi
 * 00000001800B0608: mov     dword ptr [rbp+9E40h+var_7680+4], esi
 * 00000001800B060E: movups  xmm6, [rbp+9E40h+var_7680]
 * 00000001800B0615: call    sub_1800A5D74
 * 00000001800B061A: mov     r8, rax
 * 00000001800B061D: mov     r9d, r12d
 * 00000001800B0620: mov     edx, 82h
 * 00000001800B0625: lea     rcx, [rbp+9E40h+var_2530]
 * 00000001800B062C: call    sub_180073668
 * 00000001800B0631: nop
 * 00000001800B0632: mov     r8, rax
 * 00000001800B0635: mov     rdx, r13
 * 00000001800B0638: lea     rcx, [rbp+9E40h+var_2550]
 * 00000001800B063F: call    sub_18001B518
 * 00000001800B0644: nop
 * 00000001800B0645: lea     r8, aVertex; "/Vertex"
 * 00000001800B064C: mov     rdx, rax
 * 00000001800B064F: lea     rcx, [rbp+9E40h+var_5310]
 * 00000001800B0656: call    sub_18001B448
 * 00000001800B065B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0660: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0665: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B066A: mov     rcx, rax
 * 00000001800B066D: call    sub_18007370C
 * 00000001800B0672: nop
 * 00000001800B0673: lea     rcx, [rbp+9E40h+var_2550]
 * 00000001800B067A: call    sub_180010F20
 * 00000001800B067F: nop
 * 00000001800B0680: lea     rcx, [rbp+9E40h+var_2530]
 * 00000001800B0687: call    sub_180010F20
 * 00000001800B068C: nop
 * 00000001800B068D: lea     rcx, dword_1801C94FC
 * 00000001800B0694: call    _Init_thread_footer
 * 00000001800B0699: mov     rax, [rdi+rbx*8]
 * 00000001800B069D: mov     ecx, [r15+rax]
 * 00000001800B06A1: cmp     cs:dword_1801C9500, ecx
 * 00000001800B06A7: jle     loc_1800B0780
 * 00000001800B06AD: lea     rcx, dword_1801C9500
 * 00000001800B06B4: call    sub_18000C8D0
 * 00000001800B06B9: cmp     cs:dword_1801C9500, r14d
 * 00000001800B06C0: jnz     loc_1800B0780
 * 00000001800B06C6: lea     rax, unk_180143780
 * 00000001800B06CD: mov     qword ptr [rbp+9E40h+var_9380], rax
 * 00000001800B06D4: lea     rax, unk_1801447D0
 * 00000001800B06DB: mov     qword ptr [rbp+9E40h+var_9380+8], rax
 * 00000001800B06E2: movups  xmm7, [rbp+9E40h+var_9380]
 * 00000001800B06E9: mov     dword ptr [rbp+9E40h+var_7660], esi
 * 00000001800B06EF: mov     dword ptr [rbp+9E40h+var_7660+4], esi
 * 00000001800B06F5: movups  xmm6, [rbp+9E40h+var_7660]
 * 00000001800B06FC: call    sub_1800A5D74
 * 00000001800B0701: mov     r8, rax
 * 00000001800B0704: mov     r9d, r12d
 * 00000001800B0707: mov     edx, 88h
 * 00000001800B070C: lea     rcx, [rbp+9E40h+var_24D0]
 * 00000001800B0713: call    sub_180073668
 * 00000001800B0718: nop
 * 00000001800B0719: mov     r8, rax
 * 00000001800B071C: mov     rdx, r13
 * 00000001800B071F: lea     rcx, [rbp+9E40h+var_24F0]
 * 00000001800B0726: call    sub_18001B518
 * 00000001800B072B: nop
 * 00000001800B072C: lea     r8, aVertex; "/Vertex"
 * 00000001800B0733: mov     rdx, rax
 * 00000001800B0736: lea     rcx, [rbp+9E40h+var_52F0]
 * 00000001800B073D: call    sub_18001B448
 * 00000001800B0742: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0747: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B074C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0751: mov     rcx, rax
 * 00000001800B0754: call    sub_18007370C
 * 00000001800B0759: nop
 * 00000001800B075A: lea     rcx, [rbp+9E40h+var_24F0]
 * 00000001800B0761: call    sub_180010F20
 * 00000001800B0766: nop
 * 00000001800B0767: lea     rcx, [rbp+9E40h+var_24D0]
 * 00000001800B076E: call    sub_180010F20
 * 00000001800B0773: nop
 * 00000001800B0774: lea     rcx, dword_1801C9500
 * 00000001800B077B: call    _Init_thread_footer
 * 00000001800B0780: mov     rax, [rdi+rbx*8]
 * 00000001800B0784: mov     ecx, [r15+rax]
 * 00000001800B0788: cmp     cs:dword_1801C9504, ecx
 * 00000001800B078E: jle     loc_1800B0867
 * 00000001800B0794: lea     rcx, dword_1801C9504
 * 00000001800B079B: call    sub_18000C8D0
 * 00000001800B07A0: cmp     cs:dword_1801C9504, r14d
 * 00000001800B07A7: jnz     loc_1800B0867
 * 00000001800B07AD: lea     rax, unk_180143780
 * 00000001800B07B4: mov     qword ptr [rbp+9E40h+var_9370], rax
 * 00000001800B07BB: lea     rax, unk_1801447D0
 * 00000001800B07C2: mov     qword ptr [rbp+9E40h+var_9370+8], rax
 * 00000001800B07C9: movups  xmm7, [rbp+9E40h+var_9370]
 * 00000001800B07D0: mov     dword ptr [rbp+9E40h+var_7640], esi
 * 00000001800B07D6: mov     dword ptr [rbp+9E40h+var_7640+4], esi
 * 00000001800B07DC: movups  xmm6, [rbp+9E40h+var_7640]
 * 00000001800B07E3: call    sub_1800A5D74
 * 00000001800B07E8: mov     r8, rax
 * 00000001800B07EB: mov     r9d, r12d
 * 00000001800B07EE: mov     edx, 8Ah
 * 00000001800B07F3: lea     rcx, [rbp+9E40h+var_2470]
 * 00000001800B07FA: call    sub_180073668
 * 00000001800B07FF: nop
 * 00000001800B0800: mov     r8, rax
 * 00000001800B0803: mov     rdx, r13
 * 00000001800B0806: lea     rcx, [rbp+9E40h+var_2490]
 * 00000001800B080D: call    sub_18001B518
 * 00000001800B0812: nop
 * 00000001800B0813: lea     r8, aVertex; "/Vertex"
 * 00000001800B081A: mov     rdx, rax
 * 00000001800B081D: lea     rcx, [rbp+9E40h+var_52D0]
 * 00000001800B0824: call    sub_18001B448
 * 00000001800B0829: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B082E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0833: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0838: mov     rcx, rax
 * 00000001800B083B: call    sub_18007370C
 * 00000001800B0840: nop
 * 00000001800B0841: lea     rcx, [rbp+9E40h+var_2490]
 * 00000001800B0848: call    sub_180010F20
 * 00000001800B084D: nop
 * 00000001800B084E: lea     rcx, [rbp+9E40h+var_2470]
 * 00000001800B0855: call    sub_180010F20
 * 00000001800B085A: nop
 * 00000001800B085B: lea     rcx, dword_1801C9504
 * 00000001800B0862: call    _Init_thread_footer
 * 00000001800B0867: mov     rax, [rdi+rbx*8]
 * 00000001800B086B: mov     ecx, [r15+rax]
 * 00000001800B086F: cmp     cs:dword_1801C9508, ecx
 * 00000001800B0875: jle     loc_1800B094E
 * 00000001800B087B: lea     rcx, dword_1801C9508
 * 00000001800B0882: call    sub_18000C8D0
 * 00000001800B0887: cmp     cs:dword_1801C9508, r14d
 * 00000001800B088E: jnz     loc_1800B094E
 * 00000001800B0894: lea     rax, unk_180143780
 * 00000001800B089B: mov     qword ptr [rbp+9E40h+var_9360], rax
 * 00000001800B08A2: lea     rax, unk_1801447D0
 * 00000001800B08A9: mov     qword ptr [rbp+9E40h+var_9360+8], rax
 * 00000001800B08B0: movups  xmm7, [rbp+9E40h+var_9360]
 * 00000001800B08B7: mov     dword ptr [rbp+9E40h+var_7620], esi
 * 00000001800B08BD: mov     dword ptr [rbp+9E40h+var_7620+4], esi
 * 00000001800B08C3: movups  xmm6, [rbp+9E40h+var_7620]
 * 00000001800B08CA: call    sub_1800A5D74
 * 00000001800B08CF: mov     r8, rax
 * 00000001800B08D2: mov     r9d, r12d
 * 00000001800B08D5: mov     edx, 90h
 * 00000001800B08DA: lea     rcx, [rbp+9E40h+var_2410]
 * 00000001800B08E1: call    sub_180073668
 * 00000001800B08E6: nop
 * 00000001800B08E7: mov     r8, rax
 * 00000001800B08EA: mov     rdx, r13
 * 00000001800B08ED: lea     rcx, [rbp+9E40h+var_2430]
 * 00000001800B08F4: call    sub_18001B518
 * 00000001800B08F9: nop
 * 00000001800B08FA: lea     r8, aVertex; "/Vertex"
 * 00000001800B0901: mov     rdx, rax
 * 00000001800B0904: lea     rcx, [rbp+9E40h+var_52B0]
 * 00000001800B090B: call    sub_18001B448
 * 00000001800B0910: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0915: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B091A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B091F: mov     rcx, rax
 * 00000001800B0922: call    sub_18007370C
 * 00000001800B0927: nop
 * 00000001800B0928: lea     rcx, [rbp+9E40h+var_2430]
 * 00000001800B092F: call    sub_180010F20
 * 00000001800B0934: nop
 * 00000001800B0935: lea     rcx, [rbp+9E40h+var_2410]
 * 00000001800B093C: call    sub_180010F20
 * 00000001800B0941: nop
 * 00000001800B0942: lea     rcx, dword_1801C9508
 * 00000001800B0949: call    _Init_thread_footer
 * 00000001800B094E: mov     rax, [rdi+rbx*8]
 * 00000001800B0952: mov     ecx, [r15+rax]
 * 00000001800B0956: cmp     cs:dword_1801C950C, ecx
 * 00000001800B095C: jle     loc_1800B0A35
 * 00000001800B0962: lea     rcx, dword_1801C950C
 * 00000001800B0969: call    sub_18000C8D0
 * 00000001800B096E: cmp     cs:dword_1801C950C, r14d
 * 00000001800B0975: jnz     loc_1800B0A35
 * 00000001800B097B: lea     rax, unk_180143780
 * 00000001800B0982: mov     qword ptr [rbp+9E40h+var_9350], rax
 * 00000001800B0989: lea     rax, unk_1801447D0
 * 00000001800B0990: mov     qword ptr [rbp+9E40h+var_9350+8], rax
 * 00000001800B0997: movups  xmm7, [rbp+9E40h+var_9350]
 * 00000001800B099E: mov     dword ptr [rbp+9E40h+var_7600], esi
 * 00000001800B09A4: mov     dword ptr [rbp+9E40h+var_7600+4], esi
 * 00000001800B09AA: movups  xmm6, [rbp+9E40h+var_7600]
 * 00000001800B09B1: call    sub_1800A5D74
 * 00000001800B09B6: mov     r8, rax
 * 00000001800B09B9: mov     r9d, r12d
 * 00000001800B09BC: mov     edx, 92h
 * 00000001800B09C1: lea     rcx, [rbp+9E40h+var_23B0]
 * 00000001800B09C8: call    sub_180073668
 * 00000001800B09CD: nop
 * 00000001800B09CE: mov     r8, rax
 * 00000001800B09D1: mov     rdx, r13
 * 00000001800B09D4: lea     rcx, [rbp+9E40h+var_23D0]
 * 00000001800B09DB: call    sub_18001B518
 * 00000001800B09E0: nop
 * 00000001800B09E1: lea     r8, aVertex; "/Vertex"
 * 00000001800B09E8: mov     rdx, rax
 * 00000001800B09EB: lea     rcx, [rbp+9E40h+var_5290]
 * 00000001800B09F2: call    sub_18001B448
 * 00000001800B09F7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B09FC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0A01: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0A06: mov     rcx, rax
 * 00000001800B0A09: call    sub_18007370C
 * 00000001800B0A0E: nop
 * 00000001800B0A0F: lea     rcx, [rbp+9E40h+var_23D0]
 * 00000001800B0A16: call    sub_180010F20
 * 00000001800B0A1B: nop
 * 00000001800B0A1C: lea     rcx, [rbp+9E40h+var_23B0]
 * 00000001800B0A23: call    sub_180010F20
 * 00000001800B0A28: nop
 * 00000001800B0A29: lea     rcx, dword_1801C950C
 * 00000001800B0A30: call    _Init_thread_footer
 * 00000001800B0A35: mov     rax, [rdi+rbx*8]
 * 00000001800B0A39: mov     ecx, [r15+rax]
 * 00000001800B0A3D: cmp     cs:dword_1801C9510, ecx
 * 00000001800B0A43: jle     loc_1800B0B1C
 * 00000001800B0A49: lea     rcx, dword_1801C9510
 * 00000001800B0A50: call    sub_18000C8D0
 * 00000001800B0A55: cmp     cs:dword_1801C9510, r14d
 * 00000001800B0A5C: jnz     loc_1800B0B1C
 * 00000001800B0A62: lea     rax, unk_180143780
 * 00000001800B0A69: mov     qword ptr [rbp+9E40h+var_9340], rax
 * 00000001800B0A70: lea     rax, unk_1801447D0
 * 00000001800B0A77: mov     qword ptr [rbp+9E40h+var_9340+8], rax
 * 00000001800B0A7E: movups  xmm7, [rbp+9E40h+var_9340]
 * 00000001800B0A85: mov     dword ptr [rbp+9E40h+var_75E0], esi
 * 00000001800B0A8B: mov     dword ptr [rbp+9E40h+var_75E0+4], esi
 * 00000001800B0A91: movups  xmm6, [rbp+9E40h+var_75E0]
 * 00000001800B0A98: call    sub_1800A5D74
 * 00000001800B0A9D: mov     r8, rax
 * 00000001800B0AA0: mov     r9d, r12d
 * 00000001800B0AA3: mov     edx, 98h
 * 00000001800B0AA8: lea     rcx, [rbp+9E40h+var_2350]
 * 00000001800B0AAF: call    sub_180073668
 * 00000001800B0AB4: nop
 * 00000001800B0AB5: mov     r8, rax
 * 00000001800B0AB8: mov     rdx, r13
 * 00000001800B0ABB: lea     rcx, [rbp+9E40h+var_2370]
 * 00000001800B0AC2: call    sub_18001B518
 * 00000001800B0AC7: nop
 * 00000001800B0AC8: lea     r8, aVertex; "/Vertex"
 * 00000001800B0ACF: mov     rdx, rax
 * 00000001800B0AD2: lea     rcx, [rbp+9E40h+var_5270]
 * 00000001800B0AD9: call    sub_18001B448
 * 00000001800B0ADE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0AE3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0AE8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0AED: mov     rcx, rax
 * 00000001800B0AF0: call    sub_18007370C
 * 00000001800B0AF5: nop
 * 00000001800B0AF6: lea     rcx, [rbp+9E40h+var_2370]
 * 00000001800B0AFD: call    sub_180010F20
 * 00000001800B0B02: nop
 * 00000001800B0B03: lea     rcx, [rbp+9E40h+var_2350]
 * 00000001800B0B0A: call    sub_180010F20
 * 00000001800B0B0F: nop
 * 00000001800B0B10: lea     rcx, dword_1801C9510
 * 00000001800B0B17: call    _Init_thread_footer
 * 00000001800B0B1C: mov     rax, [rdi+rbx*8]
 * 00000001800B0B20: mov     ecx, [r15+rax]
 * 00000001800B0B24: cmp     cs:dword_1801C9514, ecx
 * 00000001800B0B2A: jle     loc_1800B0C03
 * 00000001800B0B30: lea     rcx, dword_1801C9514
 * 00000001800B0B37: call    sub_18000C8D0
 * 00000001800B0B3C: cmp     cs:dword_1801C9514, r14d
 * 00000001800B0B43: jnz     loc_1800B0C03
 * 00000001800B0B49: lea     rax, unk_180143780
 * 00000001800B0B50: mov     qword ptr [rbp+9E40h+var_9330], rax
 * 00000001800B0B57: lea     rax, unk_1801447D0
 * 00000001800B0B5E: mov     qword ptr [rbp+9E40h+var_9330+8], rax
 * 00000001800B0B65: movups  xmm7, [rbp+9E40h+var_9330]
 * 00000001800B0B6C: mov     dword ptr [rbp+9E40h+var_75C0], esi
 * 00000001800B0B72: mov     dword ptr [rbp+9E40h+var_75C0+4], esi
 * 00000001800B0B78: movups  xmm6, [rbp+9E40h+var_75C0]
 * 00000001800B0B7F: call    sub_1800A5D74
 * 00000001800B0B84: mov     r8, rax
 * 00000001800B0B87: mov     r9d, r12d
 * 00000001800B0B8A: mov     edx, 9Ah
 * 00000001800B0B8F: lea     rcx, [rbp+9E40h+var_22F0]
 * 00000001800B0B96: call    sub_180073668
 * 00000001800B0B9B: nop
 * 00000001800B0B9C: mov     r8, rax
 * 00000001800B0B9F: mov     rdx, r13
 * 00000001800B0BA2: lea     rcx, [rbp+9E40h+var_2310]
 * 00000001800B0BA9: call    sub_18001B518
 * 00000001800B0BAE: nop
 * 00000001800B0BAF: lea     r8, aVertex; "/Vertex"
 * 00000001800B0BB6: mov     rdx, rax
 * 00000001800B0BB9: lea     rcx, [rbp+9E40h+var_5250]
 * 00000001800B0BC0: call    sub_18001B448
 * 00000001800B0BC5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0BCA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0BCF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0BD4: mov     rcx, rax
 * 00000001800B0BD7: call    sub_18007370C
 * 00000001800B0BDC: nop
 * 00000001800B0BDD: lea     rcx, [rbp+9E40h+var_2310]
 * 00000001800B0BE4: call    sub_180010F20
 * 00000001800B0BE9: nop
 * 00000001800B0BEA: lea     rcx, [rbp+9E40h+var_22F0]
 * 00000001800B0BF1: call    sub_180010F20
 * 00000001800B0BF6: nop
 * 00000001800B0BF7: lea     rcx, dword_1801C9514
 * 00000001800B0BFE: call    _Init_thread_footer
 * 00000001800B0C03: mov     rax, [rdi+rbx*8]
 * 00000001800B0C07: mov     ecx, [r15+rax]
 * 00000001800B0C0B: cmp     cs:dword_1801C9518, ecx
 * 00000001800B0C11: jle     loc_1800B0CEA
 * 00000001800B0C17: lea     rcx, dword_1801C9518
 * 00000001800B0C1E: call    sub_18000C8D0
 * 00000001800B0C23: cmp     cs:dword_1801C9518, r14d
 * 00000001800B0C2A: jnz     loc_1800B0CEA
 * 00000001800B0C30: lea     rax, unk_1801411F0
 * 00000001800B0C37: mov     qword ptr [rbp+9E40h+var_9320], rax
 * 00000001800B0C3E: lea     rax, unk_180142C40
 * 00000001800B0C45: mov     qword ptr [rbp+9E40h+var_9320+8], rax
 * 00000001800B0C4C: movups  xmm7, [rbp+9E40h+var_9320]
 * 00000001800B0C53: mov     dword ptr [rbp+9E40h+var_75A0], esi
 * 00000001800B0C59: mov     dword ptr [rbp+9E40h+var_75A0+4], esi
 * 00000001800B0C5F: movups  xmm6, [rbp+9E40h+var_75A0]
 * 00000001800B0C66: call    sub_1800A5D74
 * 00000001800B0C6B: mov     r8, rax
 * 00000001800B0C6E: mov     r9d, r12d
 * 00000001800B0C71: mov     edx, 0A0h
 * 00000001800B0C76: lea     rcx, [rbp+9E40h+var_2290]
 * 00000001800B0C7D: call    sub_180073668
 * 00000001800B0C82: nop
 * 00000001800B0C83: mov     r8, rax
 * 00000001800B0C86: mov     rdx, r13
 * 00000001800B0C89: lea     rcx, [rbp+9E40h+var_22B0]
 * 00000001800B0C90: call    sub_18001B518
 * 00000001800B0C95: nop
 * 00000001800B0C96: lea     r8, aVertex; "/Vertex"
 * 00000001800B0C9D: mov     rdx, rax
 * 00000001800B0CA0: lea     rcx, [rbp+9E40h+var_5230]
 * 00000001800B0CA7: call    sub_18001B448
 * 00000001800B0CAC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0CB1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0CB6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0CBB: mov     rcx, rax
 * 00000001800B0CBE: call    sub_18007370C
 * 00000001800B0CC3: nop
 * 00000001800B0CC4: lea     rcx, [rbp+9E40h+var_22B0]
 * 00000001800B0CCB: call    sub_180010F20
 * 00000001800B0CD0: nop
 * 00000001800B0CD1: lea     rcx, [rbp+9E40h+var_2290]
 * 00000001800B0CD8: call    sub_180010F20
 * 00000001800B0CDD: nop
 * 00000001800B0CDE: lea     rcx, dword_1801C9518
 * 00000001800B0CE5: call    _Init_thread_footer
 * 00000001800B0CEA: mov     rax, [rdi+rbx*8]
 * 00000001800B0CEE: mov     ecx, [r15+rax]
 * 00000001800B0CF2: cmp     cs:dword_1801C951C, ecx
 * 00000001800B0CF8: jle     loc_1800B0DD1
 * 00000001800B0CFE: lea     rcx, dword_1801C951C
 * 00000001800B0D05: call    sub_18000C8D0
 * 00000001800B0D0A: cmp     cs:dword_1801C951C, r14d
 * 00000001800B0D11: jnz     loc_1800B0DD1
 * 00000001800B0D17: lea     rax, unk_1801411F0
 * 00000001800B0D1E: mov     qword ptr [rbp+9E40h+var_9310], rax
 * 00000001800B0D25: lea     rax, unk_180142C40
 * 00000001800B0D2C: mov     qword ptr [rbp+9E40h+var_9310+8], rax
 * 00000001800B0D33: movups  xmm7, [rbp+9E40h+var_9310]
 * 00000001800B0D3A: mov     dword ptr [rbp+9E40h+var_7580], esi
 * 00000001800B0D40: mov     dword ptr [rbp+9E40h+var_7580+4], esi
 * 00000001800B0D46: movups  xmm6, [rbp+9E40h+var_7580]
 * 00000001800B0D4D: call    sub_1800A5D74
 * 00000001800B0D52: mov     r8, rax
 * 00000001800B0D55: mov     r9d, r12d
 * 00000001800B0D58: mov     edx, 0A2h
 * 00000001800B0D5D: lea     rcx, [rbp+9E40h+var_2230]
 * 00000001800B0D64: call    sub_180073668
 * 00000001800B0D69: nop
 * 00000001800B0D6A: mov     r8, rax
 * 00000001800B0D6D: mov     rdx, r13
 * 00000001800B0D70: lea     rcx, [rbp+9E40h+var_2250]
 * 00000001800B0D77: call    sub_18001B518
 * 00000001800B0D7C: nop
 * 00000001800B0D7D: lea     r8, aVertex; "/Vertex"
 * 00000001800B0D84: mov     rdx, rax
 * 00000001800B0D87: lea     rcx, [rbp+9E40h+var_5210]
 * 00000001800B0D8E: call    sub_18001B448
 * 00000001800B0D93: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0D98: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0D9D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0DA2: mov     rcx, rax
 * 00000001800B0DA5: call    sub_18007370C
 * 00000001800B0DAA: nop
 * 00000001800B0DAB: lea     rcx, [rbp+9E40h+var_2250]
 * 00000001800B0DB2: call    sub_180010F20
 * 00000001800B0DB7: nop
 * 00000001800B0DB8: lea     rcx, [rbp+9E40h+var_2230]
 * 00000001800B0DBF: call    sub_180010F20
 * 00000001800B0DC4: nop
 * 00000001800B0DC5: lea     rcx, dword_1801C951C
 * 00000001800B0DCC: call    _Init_thread_footer
 * 00000001800B0DD1: mov     rax, [rdi+rbx*8]
 * 00000001800B0DD5: mov     ecx, [r15+rax]
 * 00000001800B0DD9: cmp     cs:dword_1801C9520, ecx
 * 00000001800B0DDF: jle     loc_1800B0EB8
 * 00000001800B0DE5: lea     rcx, dword_1801C9520
 * 00000001800B0DEC: call    sub_18000C8D0
 * 00000001800B0DF1: cmp     cs:dword_1801C9520, r14d
 * 00000001800B0DF8: jnz     loc_1800B0EB8
 * 00000001800B0DFE: lea     rax, unk_1801411F0
 * 00000001800B0E05: mov     qword ptr [rbp+9E40h+var_9300], rax
 * 00000001800B0E0C: lea     rax, unk_180142C40
 * 00000001800B0E13: mov     qword ptr [rbp+9E40h+var_9300+8], rax
 * 00000001800B0E1A: movups  xmm7, [rbp+9E40h+var_9300]
 * 00000001800B0E21: mov     dword ptr [rbp+9E40h+var_7560], esi
 * 00000001800B0E27: mov     dword ptr [rbp+9E40h+var_7560+4], esi
 * 00000001800B0E2D: movups  xmm6, [rbp+9E40h+var_7560]
 * 00000001800B0E34: call    sub_1800A5D74
 * 00000001800B0E39: mov     r8, rax
 * 00000001800B0E3C: mov     r9d, r12d
 * 00000001800B0E3F: mov     edx, 0A8h
 * 00000001800B0E44: lea     rcx, [rbp+9E40h+var_21D0]
 * 00000001800B0E4B: call    sub_180073668
 * 00000001800B0E50: nop
 * 00000001800B0E51: mov     r8, rax
 * 00000001800B0E54: mov     rdx, r13
 * 00000001800B0E57: lea     rcx, [rbp+9E40h+var_21F0]
 * 00000001800B0E5E: call    sub_18001B518
 * 00000001800B0E63: nop
 * 00000001800B0E64: lea     r8, aVertex; "/Vertex"
 * 00000001800B0E6B: mov     rdx, rax
 * 00000001800B0E6E: lea     rcx, [rbp+9E40h+var_51F0]
 * 00000001800B0E75: call    sub_18001B448
 * 00000001800B0E7A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0E7F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0E84: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0E89: mov     rcx, rax
 * 00000001800B0E8C: call    sub_18007370C
 * 00000001800B0E91: nop
 * 00000001800B0E92: lea     rcx, [rbp+9E40h+var_21F0]
 * 00000001800B0E99: call    sub_180010F20
 * 00000001800B0E9E: nop
 * 00000001800B0E9F: lea     rcx, [rbp+9E40h+var_21D0]
 * 00000001800B0EA6: call    sub_180010F20
 * 00000001800B0EAB: nop
 * 00000001800B0EAC: lea     rcx, dword_1801C9520
 * 00000001800B0EB3: call    _Init_thread_footer
 * 00000001800B0EB8: mov     rax, [rdi+rbx*8]
 * 00000001800B0EBC: mov     ecx, [r15+rax]
 * 00000001800B0EC0: cmp     cs:dword_1801C9524, ecx
 * 00000001800B0EC6: jle     loc_1800B0F9F
 * 00000001800B0ECC: lea     rcx, dword_1801C9524
 * 00000001800B0ED3: call    sub_18000C8D0
 * 00000001800B0ED8: cmp     cs:dword_1801C9524, r14d
 * 00000001800B0EDF: jnz     loc_1800B0F9F
 * 00000001800B0EE5: lea     rax, unk_1801411F0
 * 00000001800B0EEC: mov     qword ptr [rbp+9E40h+var_92F0], rax
 * 00000001800B0EF3: lea     rax, unk_180142C40
 * 00000001800B0EFA: mov     qword ptr [rbp+9E40h+var_92F0+8], rax
 * 00000001800B0F01: movups  xmm7, [rbp+9E40h+var_92F0]
 * 00000001800B0F08: mov     dword ptr [rbp+9E40h+var_7540], esi
 * 00000001800B0F0E: mov     dword ptr [rbp+9E40h+var_7540+4], esi
 * 00000001800B0F14: movups  xmm6, [rbp+9E40h+var_7540]
 * 00000001800B0F1B: call    sub_1800A5D74
 * 00000001800B0F20: mov     r8, rax
 * 00000001800B0F23: mov     r9d, r12d
 * 00000001800B0F26: mov     edx, 0AAh
 * 00000001800B0F2B: lea     rcx, [rbp+9E40h+var_2170]
 * 00000001800B0F32: call    sub_180073668
 * 00000001800B0F37: nop
 * 00000001800B0F38: mov     r8, rax
 * 00000001800B0F3B: mov     rdx, r13
 * 00000001800B0F3E: lea     rcx, [rbp+9E40h+var_2190]
 * 00000001800B0F45: call    sub_18001B518
 * 00000001800B0F4A: nop
 * 00000001800B0F4B: lea     r8, aVertex; "/Vertex"
 * 00000001800B0F52: mov     rdx, rax
 * 00000001800B0F55: lea     rcx, [rbp+9E40h+var_51D0]
 * 00000001800B0F5C: call    sub_18001B448
 * 00000001800B0F61: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B0F66: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B0F6B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B0F70: mov     rcx, rax
 * 00000001800B0F73: call    sub_18007370C
 * 00000001800B0F78: nop
 * 00000001800B0F79: lea     rcx, [rbp+9E40h+var_2190]
 * 00000001800B0F80: call    sub_180010F20
 * 00000001800B0F85: nop
 * 00000001800B0F86: lea     rcx, [rbp+9E40h+var_2170]
 * 00000001800B0F8D: call    sub_180010F20
 * 00000001800B0F92: nop
 * 00000001800B0F93: lea     rcx, dword_1801C9524
 * 00000001800B0F9A: call    _Init_thread_footer
 * 00000001800B0F9F: mov     rax, [rdi+rbx*8]
 * 00000001800B0FA3: mov     ecx, [r15+rax]
 * 00000001800B0FA7: cmp     cs:dword_1801C9528, ecx
 * 00000001800B0FAD: jle     loc_1800B1086
 * 00000001800B0FB3: lea     rcx, dword_1801C9528
 * 00000001800B0FBA: call    sub_18000C8D0
 * 00000001800B0FBF: cmp     cs:dword_1801C9528, r14d
 * 00000001800B0FC6: jnz     loc_1800B1086
 * 00000001800B0FCC: lea     rax, unk_1801411F0
 * 00000001800B0FD3: mov     qword ptr [rbp+9E40h+var_92E0], rax
 * 00000001800B0FDA: lea     rax, unk_180142C40
 * 00000001800B0FE1: mov     qword ptr [rbp+9E40h+var_92E0+8], rax
 * 00000001800B0FE8: movups  xmm7, [rbp+9E40h+var_92E0]
 * 00000001800B0FEF: mov     dword ptr [rbp+9E40h+var_7520], esi
 * 00000001800B0FF5: mov     dword ptr [rbp+9E40h+var_7520+4], esi
 * 00000001800B0FFB: movups  xmm6, [rbp+9E40h+var_7520]
 * 00000001800B1002: call    sub_1800A5D74
 * 00000001800B1007: mov     r8, rax
 * 00000001800B100A: mov     r9d, r12d
 * 00000001800B100D: mov     edx, 0B0h
 * 00000001800B1012: lea     rcx, [rbp+9E40h+var_2110]
 * 00000001800B1019: call    sub_180073668
 * 00000001800B101E: nop
 * 00000001800B101F: mov     r8, rax
 * 00000001800B1022: mov     rdx, r13
 * 00000001800B1025: lea     rcx, [rbp+9E40h+var_2130]
 * 00000001800B102C: call    sub_18001B518
 * 00000001800B1031: nop
 * 00000001800B1032: lea     r8, aVertex; "/Vertex"
 * 00000001800B1039: mov     rdx, rax
 * 00000001800B103C: lea     rcx, [rbp+9E40h+var_51B0]
 * 00000001800B1043: call    sub_18001B448
 * 00000001800B1048: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B104D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1052: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1057: mov     rcx, rax
 * 00000001800B105A: call    sub_18007370C
 * 00000001800B105F: nop
 * 00000001800B1060: lea     rcx, [rbp+9E40h+var_2130]
 * 00000001800B1067: call    sub_180010F20
 * 00000001800B106C: nop
 * 00000001800B106D: lea     rcx, [rbp+9E40h+var_2110]
 * 00000001800B1074: call    sub_180010F20
 * 00000001800B1079: nop
 * 00000001800B107A: lea     rcx, dword_1801C9528
 * 00000001800B1081: call    _Init_thread_footer
 * 00000001800B1086: mov     rax, [rdi+rbx*8]
 * 00000001800B108A: mov     ecx, [r15+rax]
 * 00000001800B108E: cmp     cs:dword_1801C952C, ecx
 * 00000001800B1094: jle     loc_1800B116D
 * 00000001800B109A: lea     rcx, dword_1801C952C
 * 00000001800B10A1: call    sub_18000C8D0
 * 00000001800B10A6: cmp     cs:dword_1801C952C, r14d
 * 00000001800B10AD: jnz     loc_1800B116D
 * 00000001800B10B3: lea     rax, unk_1801411F0
 * 00000001800B10BA: mov     qword ptr [rbp+9E40h+var_92D0], rax
 * 00000001800B10C1: lea     rax, unk_180142C40
 * 00000001800B10C8: mov     qword ptr [rbp+9E40h+var_92D0+8], rax
 * 00000001800B10CF: movups  xmm7, [rbp+9E40h+var_92D0]
 * 00000001800B10D6: mov     dword ptr [rbp+9E40h+var_7500], esi
 * 00000001800B10DC: mov     dword ptr [rbp+9E40h+var_7500+4], esi
 * 00000001800B10E2: movups  xmm6, [rbp+9E40h+var_7500]
 * 00000001800B10E9: call    sub_1800A5D74
 * 00000001800B10EE: mov     r8, rax
 * 00000001800B10F1: mov     r9d, r12d
 * 00000001800B10F4: mov     edx, 0B2h
 * 00000001800B10F9: lea     rcx, [rbp+9E40h+var_20B0]
 * 00000001800B1100: call    sub_180073668
 * 00000001800B1105: nop
 * 00000001800B1106: mov     r8, rax
 * 00000001800B1109: mov     rdx, r13
 * 00000001800B110C: lea     rcx, [rbp+9E40h+var_20D0]
 * 00000001800B1113: call    sub_18001B518
 * 00000001800B1118: nop
 * 00000001800B1119: lea     r8, aVertex; "/Vertex"
 * 00000001800B1120: mov     rdx, rax
 * 00000001800B1123: lea     rcx, [rbp+9E40h+var_5190]
 * 00000001800B112A: call    sub_18001B448
 * 00000001800B112F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1134: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1139: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B113E: mov     rcx, rax
 * 00000001800B1141: call    sub_18007370C
 * 00000001800B1146: nop
 * 00000001800B1147: lea     rcx, [rbp+9E40h+var_20D0]
 * 00000001800B114E: call    sub_180010F20
 * 00000001800B1153: nop
 * 00000001800B1154: lea     rcx, [rbp+9E40h+var_20B0]
 * 00000001800B115B: call    sub_180010F20
 * 00000001800B1160: nop
 * 00000001800B1161: lea     rcx, dword_1801C952C
 * 00000001800B1168: call    _Init_thread_footer
 * 00000001800B116D: mov     rax, [rdi+rbx*8]
 * 00000001800B1171: mov     ecx, [r15+rax]
 * 00000001800B1175: cmp     cs:dword_1801C9530, ecx
 * 00000001800B117B: jle     loc_1800B1254
 * 00000001800B1181: lea     rcx, dword_1801C9530
 * 00000001800B1188: call    sub_18000C8D0
 * 00000001800B118D: cmp     cs:dword_1801C9530, r14d
 * 00000001800B1194: jnz     loc_1800B1254
 * 00000001800B119A: lea     rax, unk_1801411F0
 * 00000001800B11A1: mov     qword ptr [rbp+9E40h+var_92C0], rax
 * 00000001800B11A8: lea     rax, unk_180142C40
 * 00000001800B11AF: mov     qword ptr [rbp+9E40h+var_92C0+8], rax
 * 00000001800B11B6: movups  xmm7, [rbp+9E40h+var_92C0]
 * 00000001800B11BD: mov     dword ptr [rbp+9E40h+var_74E0], esi
 * 00000001800B11C3: mov     dword ptr [rbp+9E40h+var_74E0+4], esi
 * 00000001800B11C9: movups  xmm6, [rbp+9E40h+var_74E0]
 * 00000001800B11D0: call    sub_1800A5D74
 * 00000001800B11D5: mov     r8, rax
 * 00000001800B11D8: mov     r9d, r12d
 * 00000001800B11DB: mov     edx, 0B8h
 * 00000001800B11E0: lea     rcx, [rbp+9E40h+var_2050]
 * 00000001800B11E7: call    sub_180073668
 * 00000001800B11EC: nop
 * 00000001800B11ED: mov     r8, rax
 * 00000001800B11F0: mov     rdx, r13
 * 00000001800B11F3: lea     rcx, [rbp+9E40h+var_2070]
 * 00000001800B11FA: call    sub_18001B518
 * 00000001800B11FF: nop
 * 00000001800B1200: lea     r8, aVertex; "/Vertex"
 * 00000001800B1207: mov     rdx, rax
 * 00000001800B120A: lea     rcx, [rbp+9E40h+var_5170]
 * 00000001800B1211: call    sub_18001B448
 * 00000001800B1216: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B121B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1220: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1225: mov     rcx, rax
 * 00000001800B1228: call    sub_18007370C
 * 00000001800B122D: nop
 * 00000001800B122E: lea     rcx, [rbp+9E40h+var_2070]
 * 00000001800B1235: call    sub_180010F20
 * 00000001800B123A: nop
 * 00000001800B123B: lea     rcx, [rbp+9E40h+var_2050]
 * 00000001800B1242: call    sub_180010F20
 * 00000001800B1247: nop
 * 00000001800B1248: lea     rcx, dword_1801C9530
 * 00000001800B124F: call    _Init_thread_footer
 * 00000001800B1254: mov     rax, [rdi+rbx*8]
 * 00000001800B1258: mov     ecx, [r15+rax]
 * 00000001800B125C: cmp     cs:dword_1801C9534, ecx
 * 00000001800B1262: jle     loc_1800B133B
 * 00000001800B1268: lea     rcx, dword_1801C9534
 * 00000001800B126F: call    sub_18000C8D0
 * 00000001800B1274: cmp     cs:dword_1801C9534, r14d
 * 00000001800B127B: jnz     loc_1800B133B
 * 00000001800B1281: lea     rax, unk_1801411F0
 * 00000001800B1288: mov     qword ptr [rbp+9E40h+var_92B0], rax
 * 00000001800B128F: lea     rax, unk_180142C40
 * 00000001800B1296: mov     qword ptr [rbp+9E40h+var_92B0+8], rax
 * 00000001800B129D: movups  xmm7, [rbp+9E40h+var_92B0]
 * 00000001800B12A4: mov     dword ptr [rbp+9E40h+var_74C0], esi
 * 00000001800B12AA: mov     dword ptr [rbp+9E40h+var_74C0+4], esi
 * 00000001800B12B0: movups  xmm6, [rbp+9E40h+var_74C0]
 * 00000001800B12B7: call    sub_1800A5D74
 * 00000001800B12BC: mov     r8, rax
 * 00000001800B12BF: mov     r9d, r12d
 * 00000001800B12C2: mov     edx, 0BAh
 * 00000001800B12C7: lea     rcx, [rbp+9E40h+var_1FF0]
 * 00000001800B12CE: call    sub_180073668
 * 00000001800B12D3: nop
 * 00000001800B12D4: mov     r8, rax
 * 00000001800B12D7: mov     rdx, r13
 * 00000001800B12DA: lea     rcx, [rbp+9E40h+var_2010]
 * 00000001800B12E1: call    sub_18001B518
 * 00000001800B12E6: nop
 * 00000001800B12E7: lea     r8, aVertex; "/Vertex"
 * 00000001800B12EE: mov     rdx, rax
 * 00000001800B12F1: lea     rcx, [rbp+9E40h+var_5150]
 * 00000001800B12F8: call    sub_18001B448
 * 00000001800B12FD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1302: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1307: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B130C: mov     rcx, rax
 * 00000001800B130F: call    sub_18007370C
 * 00000001800B1314: nop
 * 00000001800B1315: lea     rcx, [rbp+9E40h+var_2010]
 * 00000001800B131C: call    sub_180010F20
 * 00000001800B1321: nop
 * 00000001800B1322: lea     rcx, [rbp+9E40h+var_1FF0]
 * 00000001800B1329: call    sub_180010F20
 * 00000001800B132E: nop
 * 00000001800B132F: lea     rcx, dword_1801C9534
 * 00000001800B1336: call    _Init_thread_footer
 * 00000001800B133B: mov     rax, [rdi+rbx*8]
 * 00000001800B133F: mov     ecx, [r15+rax]
 * 00000001800B1343: cmp     cs:dword_1801C9538, ecx
 * 00000001800B1349: jle     loc_1800B1422
 * 00000001800B134F: lea     rcx, dword_1801C9538
 * 00000001800B1356: call    sub_18000C8D0
 * 00000001800B135B: cmp     cs:dword_1801C9538, r14d
 * 00000001800B1362: jnz     loc_1800B1422
 * 00000001800B1368: lea     rax, unk_180143780
 * 00000001800B136F: mov     qword ptr [rbp+9E40h+var_92A0], rax
 * 00000001800B1376: lea     rax, unk_1801447D0
 * 00000001800B137D: mov     qword ptr [rbp+9E40h+var_92A0+8], rax
 * 00000001800B1384: movups  xmm7, [rbp+9E40h+var_92A0]
 * 00000001800B138B: mov     dword ptr [rbp+9E40h+var_74A0], esi
 * 00000001800B1391: mov     dword ptr [rbp+9E40h+var_74A0+4], esi
 * 00000001800B1397: movups  xmm6, [rbp+9E40h+var_74A0]
 * 00000001800B139E: call    sub_1800A5D74
 * 00000001800B13A3: mov     r8, rax
 * 00000001800B13A6: mov     r9d, r12d
 * 00000001800B13A9: mov     edx, 0C0h
 * 00000001800B13AE: lea     rcx, [rbp+9E40h+var_1F90]
 * 00000001800B13B5: call    sub_180073668
 * 00000001800B13BA: nop
 * 00000001800B13BB: mov     r8, rax
 * 00000001800B13BE: mov     rdx, r13
 * 00000001800B13C1: lea     rcx, [rbp+9E40h+var_1FB0]
 * 00000001800B13C8: call    sub_18001B518
 * 00000001800B13CD: nop
 * 00000001800B13CE: lea     r8, aVertex; "/Vertex"
 * 00000001800B13D5: mov     rdx, rax
 * 00000001800B13D8: lea     rcx, [rbp+9E40h+var_5130]
 * 00000001800B13DF: call    sub_18001B448
 * 00000001800B13E4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B13E9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B13EE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B13F3: mov     rcx, rax
 * 00000001800B13F6: call    sub_18007370C
 * 00000001800B13FB: nop
 * 00000001800B13FC: lea     rcx, [rbp+9E40h+var_1FB0]
 * 00000001800B1403: call    sub_180010F20
 * 00000001800B1408: nop
 * 00000001800B1409: lea     rcx, [rbp+9E40h+var_1F90]
 * 00000001800B1410: call    sub_180010F20
 * 00000001800B1415: nop
 * 00000001800B1416: lea     rcx, dword_1801C9538
 * 00000001800B141D: call    _Init_thread_footer
 * 00000001800B1422: mov     rax, [rdi+rbx*8]
 * 00000001800B1426: mov     ecx, [r15+rax]
 * 00000001800B142A: cmp     cs:dword_1801C953C, ecx
 * 00000001800B1430: jle     loc_1800B1509
 * 00000001800B1436: lea     rcx, dword_1801C953C
 * 00000001800B143D: call    sub_18000C8D0
 * 00000001800B1442: cmp     cs:dword_1801C953C, r14d
 * 00000001800B1449: jnz     loc_1800B1509
 * 00000001800B144F: lea     rax, unk_180143780
 * 00000001800B1456: mov     qword ptr [rbp+9E40h+var_9290], rax
 * 00000001800B145D: lea     rax, unk_1801447D0
 * 00000001800B1464: mov     qword ptr [rbp+9E40h+var_9290+8], rax
 * 00000001800B146B: movups  xmm7, [rbp+9E40h+var_9290]
 * 00000001800B1472: mov     dword ptr [rbp+9E40h+var_7480], esi
 * 00000001800B1478: mov     dword ptr [rbp+9E40h+var_7480+4], esi
 * 00000001800B147E: movups  xmm6, [rbp+9E40h+var_7480]
 * 00000001800B1485: call    sub_1800A5D74
 * 00000001800B148A: mov     r8, rax
 * 00000001800B148D: mov     r9d, r12d
 * 00000001800B1490: mov     edx, 0C2h
 * 00000001800B1495: lea     rcx, [rbp+9E40h+var_1F30]
 * 00000001800B149C: call    sub_180073668
 * 00000001800B14A1: nop
 * 00000001800B14A2: mov     r8, rax
 * 00000001800B14A5: mov     rdx, r13
 * 00000001800B14A8: lea     rcx, [rbp+9E40h+var_1F50]
 * 00000001800B14AF: call    sub_18001B518
 * 00000001800B14B4: nop
 * 00000001800B14B5: lea     r8, aVertex; "/Vertex"
 * 00000001800B14BC: mov     rdx, rax
 * 00000001800B14BF: lea     rcx, [rbp+9E40h+var_5110]
 * 00000001800B14C6: call    sub_18001B448
 * 00000001800B14CB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B14D0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B14D5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B14DA: mov     rcx, rax
 * 00000001800B14DD: call    sub_18007370C
 * 00000001800B14E2: nop
 * 00000001800B14E3: lea     rcx, [rbp+9E40h+var_1F50]
 * 00000001800B14EA: call    sub_180010F20
 * 00000001800B14EF: nop
 * 00000001800B14F0: lea     rcx, [rbp+9E40h+var_1F30]
 * 00000001800B14F7: call    sub_180010F20
 * 00000001800B14FC: nop
 * 00000001800B14FD: lea     rcx, dword_1801C953C
 * 00000001800B1504: call    _Init_thread_footer
 * 00000001800B1509: mov     rax, [rdi+rbx*8]
 * 00000001800B150D: mov     ecx, [r15+rax]
 * 00000001800B1511: cmp     cs:dword_1801C9540, ecx
 * 00000001800B1517: jle     loc_1800B15F0
 * 00000001800B151D: lea     rcx, dword_1801C9540
 * 00000001800B1524: call    sub_18000C8D0
 * 00000001800B1529: cmp     cs:dword_1801C9540, r14d
 * 00000001800B1530: jnz     loc_1800B15F0
 * 00000001800B1536: lea     rax, unk_180143780
 * 00000001800B153D: mov     qword ptr [rbp+9E40h+var_9280], rax
 * 00000001800B1544: lea     rax, unk_1801447D0
 * 00000001800B154B: mov     qword ptr [rbp+9E40h+var_9280+8], rax
 * 00000001800B1552: movups  xmm7, [rbp+9E40h+var_9280]
 * 00000001800B1559: mov     dword ptr [rbp+9E40h+var_7460], esi
 * 00000001800B155F: mov     dword ptr [rbp+9E40h+var_7460+4], esi
 * 00000001800B1565: movups  xmm6, [rbp+9E40h+var_7460]
 * 00000001800B156C: call    sub_1800A5D74
 * 00000001800B1571: mov     r8, rax
 * 00000001800B1574: mov     r9d, r12d
 * 00000001800B1577: mov     edx, 0C8h
 * 00000001800B157C: lea     rcx, [rbp+9E40h+var_1ED0]
 * 00000001800B1583: call    sub_180073668
 * 00000001800B1588: nop
 * 00000001800B1589: mov     r8, rax
 * 00000001800B158C: mov     rdx, r13
 * 00000001800B158F: lea     rcx, [rbp+9E40h+var_1EF0]
 * 00000001800B1596: call    sub_18001B518
 * 00000001800B159B: nop
 * 00000001800B159C: lea     r8, aVertex; "/Vertex"
 * 00000001800B15A3: mov     rdx, rax
 * 00000001800B15A6: lea     rcx, [rbp+9E40h+var_50F0]
 * 00000001800B15AD: call    sub_18001B448
 * 00000001800B15B2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B15B7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B15BC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B15C1: mov     rcx, rax
 * 00000001800B15C4: call    sub_18007370C
 * 00000001800B15C9: nop
 * 00000001800B15CA: lea     rcx, [rbp+9E40h+var_1EF0]
 * 00000001800B15D1: call    sub_180010F20
 * 00000001800B15D6: nop
 * 00000001800B15D7: lea     rcx, [rbp+9E40h+var_1ED0]
 * 00000001800B15DE: call    sub_180010F20
 * 00000001800B15E3: nop
 * 00000001800B15E4: lea     rcx, dword_1801C9540
 * 00000001800B15EB: call    _Init_thread_footer
 * 00000001800B15F0: mov     rax, [rdi+rbx*8]
 * 00000001800B15F4: mov     ecx, [r15+rax]
 * 00000001800B15F8: cmp     cs:dword_1801C9544, ecx
 * 00000001800B15FE: jle     loc_1800B16D7
 * 00000001800B1604: lea     rcx, dword_1801C9544
 * 00000001800B160B: call    sub_18000C8D0
 * 00000001800B1610: cmp     cs:dword_1801C9544, r14d
 * 00000001800B1617: jnz     loc_1800B16D7
 * 00000001800B161D: lea     rax, unk_180143780
 * 00000001800B1624: mov     qword ptr [rbp+9E40h+var_9270], rax
 * 00000001800B162B: lea     rax, unk_1801447D0
 * 00000001800B1632: mov     qword ptr [rbp+9E40h+var_9270+8], rax
 * 00000001800B1639: movups  xmm7, [rbp+9E40h+var_9270]
 * 00000001800B1640: mov     dword ptr [rbp+9E40h+var_7440], esi
 * 00000001800B1646: mov     dword ptr [rbp+9E40h+var_7440+4], esi
 * 00000001800B164C: movups  xmm6, [rbp+9E40h+var_7440]
 * 00000001800B1653: call    sub_1800A5D74
 * 00000001800B1658: mov     r8, rax
 * 00000001800B165B: mov     r9d, r12d
 * 00000001800B165E: mov     edx, 0CAh
 * 00000001800B1663: lea     rcx, [rbp+9E40h+var_1E70]
 * 00000001800B166A: call    sub_180073668
 * 00000001800B166F: nop
 * 00000001800B1670: mov     r8, rax
 * 00000001800B1673: mov     rdx, r13
 * 00000001800B1676: lea     rcx, [rbp+9E40h+var_1E90]
 * 00000001800B167D: call    sub_18001B518
 * 00000001800B1682: nop
 * 00000001800B1683: lea     r8, aVertex; "/Vertex"
 * 00000001800B168A: mov     rdx, rax
 * 00000001800B168D: lea     rcx, [rbp+9E40h+var_50D0]
 * 00000001800B1694: call    sub_18001B448
 * 00000001800B1699: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B169E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B16A3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B16A8: mov     rcx, rax
 * 00000001800B16AB: call    sub_18007370C
 * 00000001800B16B0: nop
 * 00000001800B16B1: lea     rcx, [rbp+9E40h+var_1E90]
 * 00000001800B16B8: call    sub_180010F20
 * 00000001800B16BD: nop
 * 00000001800B16BE: lea     rcx, [rbp+9E40h+var_1E70]
 * 00000001800B16C5: call    sub_180010F20
 * 00000001800B16CA: nop
 * 00000001800B16CB: lea     rcx, dword_1801C9544
 * 00000001800B16D2: call    _Init_thread_footer
 * 00000001800B16D7: mov     rax, [rdi+rbx*8]
 * 00000001800B16DB: mov     ecx, [r15+rax]
 * 00000001800B16DF: cmp     cs:dword_1801C9548, ecx
 * 00000001800B16E5: jle     loc_1800B17BE
 * 00000001800B16EB: lea     rcx, dword_1801C9548
 * 00000001800B16F2: call    sub_18000C8D0
 * 00000001800B16F7: cmp     cs:dword_1801C9548, r14d
 * 00000001800B16FE: jnz     loc_1800B17BE
 * 00000001800B1704: lea     rax, unk_180143780
 * 00000001800B170B: mov     qword ptr [rbp+9E40h+var_9260], rax
 * 00000001800B1712: lea     rax, unk_1801447D0
 * 00000001800B1719: mov     qword ptr [rbp+9E40h+var_9260+8], rax
 * 00000001800B1720: movups  xmm7, [rbp+9E40h+var_9260]
 * 00000001800B1727: mov     dword ptr [rbp+9E40h+var_7420], esi
 * 00000001800B172D: mov     dword ptr [rbp+9E40h+var_7420+4], esi
 * 00000001800B1733: movups  xmm6, [rbp+9E40h+var_7420]
 * 00000001800B173A: call    sub_1800A5D74
 * 00000001800B173F: mov     r8, rax
 * 00000001800B1742: mov     r9d, r12d
 * 00000001800B1745: mov     edx, 0D0h
 * 00000001800B174A: lea     rcx, [rbp+9E40h+var_1E10]
 * 00000001800B1751: call    sub_180073668
 * 00000001800B1756: nop
 * 00000001800B1757: mov     r8, rax
 * 00000001800B175A: mov     rdx, r13
 * 00000001800B175D: lea     rcx, [rbp+9E40h+var_1E30]
 * 00000001800B1764: call    sub_18001B518
 * 00000001800B1769: nop
 * 00000001800B176A: lea     r8, aVertex; "/Vertex"
 * 00000001800B1771: mov     rdx, rax
 * 00000001800B1774: lea     rcx, [rbp+9E40h+var_50B0]
 * 00000001800B177B: call    sub_18001B448
 * 00000001800B1780: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1785: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B178A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B178F: mov     rcx, rax
 * 00000001800B1792: call    sub_18007370C
 * 00000001800B1797: nop
 * 00000001800B1798: lea     rcx, [rbp+9E40h+var_1E30]
 * 00000001800B179F: call    sub_180010F20
 * 00000001800B17A4: nop
 * 00000001800B17A5: lea     rcx, [rbp+9E40h+var_1E10]
 * 00000001800B17AC: call    sub_180010F20
 * 00000001800B17B1: nop
 * 00000001800B17B2: lea     rcx, dword_1801C9548
 * 00000001800B17B9: call    _Init_thread_footer
 * 00000001800B17BE: mov     rax, [rdi+rbx*8]
 * 00000001800B17C2: mov     ecx, [r15+rax]
 * 00000001800B17C6: cmp     cs:dword_1801C954C, ecx
 * 00000001800B17CC: jle     loc_1800B18A5
 * 00000001800B17D2: lea     rcx, dword_1801C954C
 * 00000001800B17D9: call    sub_18000C8D0
 * 00000001800B17DE: cmp     cs:dword_1801C954C, r14d
 * 00000001800B17E5: jnz     loc_1800B18A5
 * 00000001800B17EB: lea     rax, unk_180143780
 * 00000001800B17F2: mov     qword ptr [rbp+9E40h+var_9250], rax
 * 00000001800B17F9: lea     rax, unk_1801447D0
 * 00000001800B1800: mov     qword ptr [rbp+9E40h+var_9250+8], rax
 * 00000001800B1807: movups  xmm7, [rbp+9E40h+var_9250]
 * 00000001800B180E: mov     dword ptr [rbp+9E40h+var_7400], esi
 * 00000001800B1814: mov     dword ptr [rbp+9E40h+var_7400+4], esi
 * 00000001800B181A: movups  xmm6, [rbp+9E40h+var_7400]
 * 00000001800B1821: call    sub_1800A5D74
 * 00000001800B1826: mov     r8, rax
 * 00000001800B1829: mov     r9d, r12d
 * 00000001800B182C: mov     edx, 0D2h
 * 00000001800B1831: lea     rcx, [rbp+9E40h+var_1DB0]
 * 00000001800B1838: call    sub_180073668
 * 00000001800B183D: nop
 * 00000001800B183E: mov     r8, rax
 * 00000001800B1841: mov     rdx, r13
 * 00000001800B1844: lea     rcx, [rbp+9E40h+var_1DD0]
 * 00000001800B184B: call    sub_18001B518
 * 00000001800B1850: nop
 * 00000001800B1851: lea     r8, aVertex; "/Vertex"
 * 00000001800B1858: mov     rdx, rax
 * 00000001800B185B: lea     rcx, [rbp+9E40h+var_5090]
 * 00000001800B1862: call    sub_18001B448
 * 00000001800B1867: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B186C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1871: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1876: mov     rcx, rax
 * 00000001800B1879: call    sub_18007370C
 * 00000001800B187E: nop
 * 00000001800B187F: lea     rcx, [rbp+9E40h+var_1DD0]
 * 00000001800B1886: call    sub_180010F20
 * 00000001800B188B: nop
 * 00000001800B188C: lea     rcx, [rbp+9E40h+var_1DB0]
 * 00000001800B1893: call    sub_180010F20
 * 00000001800B1898: nop
 * 00000001800B1899: lea     rcx, dword_1801C954C
 * 00000001800B18A0: call    _Init_thread_footer
 * 00000001800B18A5: mov     rax, [rdi+rbx*8]
 * 00000001800B18A9: mov     ecx, [r15+rax]
 * 00000001800B18AD: cmp     cs:dword_1801C9550, ecx
 * 00000001800B18B3: jle     loc_1800B198C
 * 00000001800B18B9: lea     rcx, dword_1801C9550
 * 00000001800B18C0: call    sub_18000C8D0
 * 00000001800B18C5: cmp     cs:dword_1801C9550, r14d
 * 00000001800B18CC: jnz     loc_1800B198C
 * 00000001800B18D2: lea     rax, unk_180143780
 * 00000001800B18D9: mov     qword ptr [rbp+9E40h+var_9240], rax
 * 00000001800B18E0: lea     rax, unk_1801447D0
 * 00000001800B18E7: mov     qword ptr [rbp+9E40h+var_9240+8], rax
 * 00000001800B18EE: movups  xmm7, [rbp+9E40h+var_9240]
 * 00000001800B18F5: mov     dword ptr [rbp+9E40h+var_73E0], esi
 * 00000001800B18FB: mov     dword ptr [rbp+9E40h+var_73E0+4], esi
 * 00000001800B1901: movups  xmm6, [rbp+9E40h+var_73E0]
 * 00000001800B1908: call    sub_1800A5D74
 * 00000001800B190D: mov     r8, rax
 * 00000001800B1910: mov     r9d, r12d
 * 00000001800B1913: mov     edx, 0D8h
 * 00000001800B1918: lea     rcx, [rbp+9E40h+var_1D50]
 * 00000001800B191F: call    sub_180073668
 * 00000001800B1924: nop
 * 00000001800B1925: mov     r8, rax
 * 00000001800B1928: mov     rdx, r13
 * 00000001800B192B: lea     rcx, [rbp+9E40h+var_1D70]
 * 00000001800B1932: call    sub_18001B518
 * 00000001800B1937: nop
 * 00000001800B1938: lea     r8, aVertex; "/Vertex"
 * 00000001800B193F: mov     rdx, rax
 * 00000001800B1942: lea     rcx, [rbp+9E40h+var_5070]
 * 00000001800B1949: call    sub_18001B448
 * 00000001800B194E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1953: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1958: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B195D: mov     rcx, rax
 * 00000001800B1960: call    sub_18007370C
 * 00000001800B1965: nop
 * 00000001800B1966: lea     rcx, [rbp+9E40h+var_1D70]
 * 00000001800B196D: call    sub_180010F20
 * 00000001800B1972: nop
 * 00000001800B1973: lea     rcx, [rbp+9E40h+var_1D50]
 * 00000001800B197A: call    sub_180010F20
 * 00000001800B197F: nop
 * 00000001800B1980: lea     rcx, dword_1801C9550
 * 00000001800B1987: call    _Init_thread_footer
 * 00000001800B198C: mov     rax, [rdi+rbx*8]
 * 00000001800B1990: mov     ecx, [r15+rax]
 * 00000001800B1994: cmp     cs:dword_1801C9554, ecx
 * 00000001800B199A: jle     loc_1800B1A73
 * 00000001800B19A0: lea     rcx, dword_1801C9554
 * 00000001800B19A7: call    sub_18000C8D0
 * 00000001800B19AC: cmp     cs:dword_1801C9554, r14d
 * 00000001800B19B3: jnz     loc_1800B1A73
 * 00000001800B19B9: lea     rax, unk_180143780
 * 00000001800B19C0: mov     qword ptr [rbp+9E40h+var_9230], rax
 * 00000001800B19C7: lea     rax, unk_1801447D0
 * 00000001800B19CE: mov     qword ptr [rbp+9E40h+var_9230+8], rax
 * 00000001800B19D5: movups  xmm7, [rbp+9E40h+var_9230]
 * 00000001800B19DC: mov     dword ptr [rbp+9E40h+var_73C0], esi
 * 00000001800B19E2: mov     dword ptr [rbp+9E40h+var_73C0+4], esi
 * 00000001800B19E8: movups  xmm6, [rbp+9E40h+var_73C0]
 * 00000001800B19EF: call    sub_1800A5D74
 * 00000001800B19F4: mov     r8, rax
 * 00000001800B19F7: mov     r9d, r12d
 * 00000001800B19FA: mov     edx, 0DAh
 * 00000001800B19FF: lea     rcx, [rbp+9E40h+var_1CF0]
 * 00000001800B1A06: call    sub_180073668
 * 00000001800B1A0B: nop
 * 00000001800B1A0C: mov     r8, rax
 * 00000001800B1A0F: mov     rdx, r13
 * 00000001800B1A12: lea     rcx, [rbp+9E40h+var_1D10]
 * 00000001800B1A19: call    sub_18001B518
 * 00000001800B1A1E: nop
 * 00000001800B1A1F: lea     r8, aVertex; "/Vertex"
 * 00000001800B1A26: mov     rdx, rax
 * 00000001800B1A29: lea     rcx, [rbp+9E40h+var_5050]
 * 00000001800B1A30: call    sub_18001B448
 * 00000001800B1A35: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1A3A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1A3F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1A44: mov     rcx, rax
 * 00000001800B1A47: call    sub_18007370C
 * 00000001800B1A4C: nop
 * 00000001800B1A4D: lea     rcx, [rbp+9E40h+var_1D10]
 * 00000001800B1A54: call    sub_180010F20
 * 00000001800B1A59: nop
 * 00000001800B1A5A: lea     rcx, [rbp+9E40h+var_1CF0]
 * 00000001800B1A61: call    sub_180010F20
 * 00000001800B1A66: nop
 * 00000001800B1A67: lea     rcx, dword_1801C9554
 * 00000001800B1A6E: call    _Init_thread_footer
 * 00000001800B1A73: mov     rax, [rdi+rbx*8]
 * 00000001800B1A77: mov     ecx, [r15+rax]
 * 00000001800B1A7B: cmp     cs:dword_1801C9558, ecx
 * 00000001800B1A81: jle     loc_1800B1B5A
 * 00000001800B1A87: lea     rcx, dword_1801C9558
 * 00000001800B1A8E: call    sub_18000C8D0
 * 00000001800B1A93: cmp     cs:dword_1801C9558, r14d
 * 00000001800B1A9A: jnz     loc_1800B1B5A
 * 00000001800B1AA0: lea     rax, unk_1801411F0
 * 00000001800B1AA7: mov     qword ptr [rbp+9E40h+var_9220], rax
 * 00000001800B1AAE: lea     rax, unk_180142C40
 * 00000001800B1AB5: mov     qword ptr [rbp+9E40h+var_9220+8], rax
 * 00000001800B1ABC: movups  xmm7, [rbp+9E40h+var_9220]
 * 00000001800B1AC3: mov     dword ptr [rbp+9E40h+var_73A0], esi
 * 00000001800B1AC9: mov     dword ptr [rbp+9E40h+var_73A0+4], esi
 * 00000001800B1ACF: movups  xmm6, [rbp+9E40h+var_73A0]
 * 00000001800B1AD6: call    sub_1800A5D74
 * 00000001800B1ADB: mov     r8, rax
 * 00000001800B1ADE: mov     r9d, r12d
 * 00000001800B1AE1: mov     edx, 0E0h
 * 00000001800B1AE6: lea     rcx, [rbp+9E40h+var_1C90]
 * 00000001800B1AED: call    sub_180073668
 * 00000001800B1AF2: nop
 * 00000001800B1AF3: mov     r8, rax
 * 00000001800B1AF6: mov     rdx, r13
 * 00000001800B1AF9: lea     rcx, [rbp+9E40h+var_1CB0]
 * 00000001800B1B00: call    sub_18001B518
 * 00000001800B1B05: nop
 * 00000001800B1B06: lea     r8, aVertex; "/Vertex"
 * 00000001800B1B0D: mov     rdx, rax
 * 00000001800B1B10: lea     rcx, [rbp+9E40h+var_5030]
 * 00000001800B1B17: call    sub_18001B448
 * 00000001800B1B1C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1B21: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1B26: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1B2B: mov     rcx, rax
 * 00000001800B1B2E: call    sub_18007370C
 * 00000001800B1B33: nop
 * 00000001800B1B34: lea     rcx, [rbp+9E40h+var_1CB0]
 * 00000001800B1B3B: call    sub_180010F20
 * 00000001800B1B40: nop
 * 00000001800B1B41: lea     rcx, [rbp+9E40h+var_1C90]
 * 00000001800B1B48: call    sub_180010F20
 * 00000001800B1B4D: nop
 * 00000001800B1B4E: lea     rcx, dword_1801C9558
 * 00000001800B1B55: call    _Init_thread_footer
 * 00000001800B1B5A: mov     rax, [rdi+rbx*8]
 * 00000001800B1B5E: mov     ecx, [r15+rax]
 * 00000001800B1B62: cmp     cs:dword_1801C955C, ecx
 * 00000001800B1B68: jle     loc_1800B1C41
 * 00000001800B1B6E: lea     rcx, dword_1801C955C
 * 00000001800B1B75: call    sub_18000C8D0
 * 00000001800B1B7A: cmp     cs:dword_1801C955C, r14d
 * 00000001800B1B81: jnz     loc_1800B1C41
 * 00000001800B1B87: lea     rax, unk_1801411F0
 * 00000001800B1B8E: mov     qword ptr [rbp+9E40h+var_9210], rax
 * 00000001800B1B95: lea     rax, unk_180142C40
 * 00000001800B1B9C: mov     qword ptr [rbp+9E40h+var_9210+8], rax
 * 00000001800B1BA3: movups  xmm7, [rbp+9E40h+var_9210]
 * 00000001800B1BAA: mov     dword ptr [rbp+9E40h+var_7380], esi
 * 00000001800B1BB0: mov     dword ptr [rbp+9E40h+var_7380+4], esi
 * 00000001800B1BB6: movups  xmm6, [rbp+9E40h+var_7380]
 * 00000001800B1BBD: call    sub_1800A5D74
 * 00000001800B1BC2: mov     r8, rax
 * 00000001800B1BC5: mov     r9d, r12d
 * 00000001800B1BC8: mov     edx, 0E2h
 * 00000001800B1BCD: lea     rcx, [rbp+9E40h+var_1C30]
 * 00000001800B1BD4: call    sub_180073668
 * 00000001800B1BD9: nop
 * 00000001800B1BDA: mov     r8, rax
 * 00000001800B1BDD: mov     rdx, r13
 * 00000001800B1BE0: lea     rcx, [rbp+9E40h+var_1C50]
 * 00000001800B1BE7: call    sub_18001B518
 * 00000001800B1BEC: nop
 * 00000001800B1BED: lea     r8, aVertex; "/Vertex"
 * 00000001800B1BF4: mov     rdx, rax
 * 00000001800B1BF7: lea     rcx, [rbp+9E40h+var_5010]
 * 00000001800B1BFE: call    sub_18001B448
 * 00000001800B1C03: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1C08: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1C0D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1C12: mov     rcx, rax
 * 00000001800B1C15: call    sub_18007370C
 * 00000001800B1C1A: nop
 * 00000001800B1C1B: lea     rcx, [rbp+9E40h+var_1C50]
 * 00000001800B1C22: call    sub_180010F20
 * 00000001800B1C27: nop
 * 00000001800B1C28: lea     rcx, [rbp+9E40h+var_1C30]
 * 00000001800B1C2F: call    sub_180010F20
 * 00000001800B1C34: nop
 * 00000001800B1C35: lea     rcx, dword_1801C955C
 * 00000001800B1C3C: call    _Init_thread_footer
 * 00000001800B1C41: mov     rax, [rdi+rbx*8]
 * 00000001800B1C45: mov     ecx, [r15+rax]
 * 00000001800B1C49: cmp     cs:dword_1801C9560, ecx
 * 00000001800B1C4F: jle     loc_1800B1D28
 * 00000001800B1C55: lea     rcx, dword_1801C9560
 * 00000001800B1C5C: call    sub_18000C8D0
 * 00000001800B1C61: cmp     cs:dword_1801C9560, r14d
 * 00000001800B1C68: jnz     loc_1800B1D28
 * 00000001800B1C6E: lea     rax, unk_1801411F0
 * 00000001800B1C75: mov     qword ptr [rbp+9E40h+var_9200], rax
 * 00000001800B1C7C: lea     rax, unk_180142C40
 * 00000001800B1C83: mov     qword ptr [rbp+9E40h+var_9200+8], rax
 * 00000001800B1C8A: movups  xmm7, [rbp+9E40h+var_9200]
 * 00000001800B1C91: mov     dword ptr [rbp+9E40h+var_7360], esi
 * 00000001800B1C97: mov     dword ptr [rbp+9E40h+var_7360+4], esi
 * 00000001800B1C9D: movups  xmm6, [rbp+9E40h+var_7360]
 * 00000001800B1CA4: call    sub_1800A5D74
 * 00000001800B1CA9: mov     r8, rax
 * 00000001800B1CAC: mov     r9d, r12d
 * 00000001800B1CAF: mov     edx, 0E8h
 * 00000001800B1CB4: lea     rcx, [rbp+9E40h+var_1BD0]
 * 00000001800B1CBB: call    sub_180073668
 * 00000001800B1CC0: nop
 * 00000001800B1CC1: mov     r8, rax
 * 00000001800B1CC4: mov     rdx, r13
 * 00000001800B1CC7: lea     rcx, [rbp+9E40h+var_1BF0]
 * 00000001800B1CCE: call    sub_18001B518
 * 00000001800B1CD3: nop
 * 00000001800B1CD4: lea     r8, aVertex; "/Vertex"
 * 00000001800B1CDB: mov     rdx, rax
 * 00000001800B1CDE: lea     rcx, [rbp+9E40h+var_4FF0]
 * 00000001800B1CE5: call    sub_18001B448
 * 00000001800B1CEA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1CEF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1CF4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1CF9: mov     rcx, rax
 * 00000001800B1CFC: call    sub_18007370C
 * 00000001800B1D01: nop
 * 00000001800B1D02: lea     rcx, [rbp+9E40h+var_1BF0]
 * 00000001800B1D09: call    sub_180010F20
 * 00000001800B1D0E: nop
 * 00000001800B1D0F: lea     rcx, [rbp+9E40h+var_1BD0]
 * 00000001800B1D16: call    sub_180010F20
 * 00000001800B1D1B: nop
 * 00000001800B1D1C: lea     rcx, dword_1801C9560
 * 00000001800B1D23: call    _Init_thread_footer
 * 00000001800B1D28: mov     rax, [rdi+rbx*8]
 * 00000001800B1D2C: mov     ecx, [r15+rax]
 * 00000001800B1D30: cmp     cs:dword_1801C9564, ecx
 * 00000001800B1D36: jle     loc_1800B1E0F
 * 00000001800B1D3C: lea     rcx, dword_1801C9564
 * 00000001800B1D43: call    sub_18000C8D0
 * 00000001800B1D48: cmp     cs:dword_1801C9564, r14d
 * 00000001800B1D4F: jnz     loc_1800B1E0F
 * 00000001800B1D55: lea     rax, unk_1801411F0
 * 00000001800B1D5C: mov     qword ptr [rbp+9E40h+var_91F0], rax
 * 00000001800B1D63: lea     rax, unk_180142C40
 * 00000001800B1D6A: mov     qword ptr [rbp+9E40h+var_91F0+8], rax
 * 00000001800B1D71: movups  xmm7, [rbp+9E40h+var_91F0]
 * 00000001800B1D78: mov     dword ptr [rbp+9E40h+var_7340], esi
 * 00000001800B1D7E: mov     dword ptr [rbp+9E40h+var_7340+4], esi
 * 00000001800B1D84: movups  xmm6, [rbp+9E40h+var_7340]
 * 00000001800B1D8B: call    sub_1800A5D74
 * 00000001800B1D90: mov     r8, rax
 * 00000001800B1D93: mov     r9d, r12d
 * 00000001800B1D96: mov     edx, 0EAh
 * 00000001800B1D9B: lea     rcx, [rbp+9E40h+var_1B70]
 * 00000001800B1DA2: call    sub_180073668
 * 00000001800B1DA7: nop
 * 00000001800B1DA8: mov     r8, rax
 * 00000001800B1DAB: mov     rdx, r13
 * 00000001800B1DAE: lea     rcx, [rbp+9E40h+var_1B90]
 * 00000001800B1DB5: call    sub_18001B518
 * 00000001800B1DBA: nop
 * 00000001800B1DBB: lea     r8, aVertex; "/Vertex"
 * 00000001800B1DC2: mov     rdx, rax
 * 00000001800B1DC5: lea     rcx, [rbp+9E40h+var_4FD0]
 * 00000001800B1DCC: call    sub_18001B448
 * 00000001800B1DD1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1DD6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1DDB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1DE0: mov     rcx, rax
 * 00000001800B1DE3: call    sub_18007370C
 * 00000001800B1DE8: nop
 * 00000001800B1DE9: lea     rcx, [rbp+9E40h+var_1B90]
 * 00000001800B1DF0: call    sub_180010F20
 * 00000001800B1DF5: nop
 * 00000001800B1DF6: lea     rcx, [rbp+9E40h+var_1B70]
 * 00000001800B1DFD: call    sub_180010F20
 * 00000001800B1E02: nop
 * 00000001800B1E03: lea     rcx, dword_1801C9564
 * 00000001800B1E0A: call    _Init_thread_footer
 * 00000001800B1E0F: mov     rax, [rdi+rbx*8]
 * 00000001800B1E13: mov     ecx, [r15+rax]
 * 00000001800B1E17: cmp     cs:dword_1801C9568, ecx
 * 00000001800B1E1D: jle     loc_1800B1EF6
 * 00000001800B1E23: lea     rcx, dword_1801C9568
 * 00000001800B1E2A: call    sub_18000C8D0
 * 00000001800B1E2F: cmp     cs:dword_1801C9568, r14d
 * 00000001800B1E36: jnz     loc_1800B1EF6
 * 00000001800B1E3C: lea     rax, unk_1801411F0
 * 00000001800B1E43: mov     qword ptr [rbp+9E40h+var_91E0], rax
 * 00000001800B1E4A: lea     rax, unk_180142C40
 * 00000001800B1E51: mov     qword ptr [rbp+9E40h+var_91E0+8], rax
 * 00000001800B1E58: movups  xmm7, [rbp+9E40h+var_91E0]
 * 00000001800B1E5F: mov     dword ptr [rbp+9E40h+var_7320], esi
 * 00000001800B1E65: mov     dword ptr [rbp+9E40h+var_7320+4], esi
 * 00000001800B1E6B: movups  xmm6, [rbp+9E40h+var_7320]
 * 00000001800B1E72: call    sub_1800A5D74
 * 00000001800B1E77: mov     r8, rax
 * 00000001800B1E7A: mov     r9d, r12d
 * 00000001800B1E7D: mov     edx, 0F0h
 * 00000001800B1E82: lea     rcx, [rbp+9E40h+var_1B10]
 * 00000001800B1E89: call    sub_180073668
 * 00000001800B1E8E: nop
 * 00000001800B1E8F: mov     r8, rax
 * 00000001800B1E92: mov     rdx, r13
 * 00000001800B1E95: lea     rcx, [rbp+9E40h+var_1B30]
 * 00000001800B1E9C: call    sub_18001B518
 * 00000001800B1EA1: nop
 * 00000001800B1EA2: lea     r8, aVertex; "/Vertex"
 * 00000001800B1EA9: mov     rdx, rax
 * 00000001800B1EAC: lea     rcx, [rbp+9E40h+var_4FB0]
 * 00000001800B1EB3: call    sub_18001B448
 * 00000001800B1EB8: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1EBD: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1EC2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1EC7: mov     rcx, rax
 * 00000001800B1ECA: call    sub_18007370C
 * 00000001800B1ECF: nop
 * 00000001800B1ED0: lea     rcx, [rbp+9E40h+var_1B30]
 * 00000001800B1ED7: call    sub_180010F20
 * 00000001800B1EDC: nop
 * 00000001800B1EDD: lea     rcx, [rbp+9E40h+var_1B10]
 * 00000001800B1EE4: call    sub_180010F20
 * 00000001800B1EE9: nop
 * 00000001800B1EEA: lea     rcx, dword_1801C9568
 * 00000001800B1EF1: call    _Init_thread_footer
 * 00000001800B1EF6: mov     rax, [rdi+rbx*8]
 * 00000001800B1EFA: mov     ecx, [r15+rax]
 * 00000001800B1EFE: cmp     cs:dword_1801C956C, ecx
 * 00000001800B1F04: jle     loc_1800B1FDD
 * 00000001800B1F0A: lea     rcx, dword_1801C956C
 * 00000001800B1F11: call    sub_18000C8D0
 * 00000001800B1F16: cmp     cs:dword_1801C956C, r14d
 * 00000001800B1F1D: jnz     loc_1800B1FDD
 * 00000001800B1F23: lea     rax, unk_1801411F0
 * 00000001800B1F2A: mov     qword ptr [rbp+9E40h+var_91D0], rax
 * 00000001800B1F31: lea     rax, unk_180142C40
 * 00000001800B1F38: mov     qword ptr [rbp+9E40h+var_91D0+8], rax
 * 00000001800B1F3F: movups  xmm7, [rbp+9E40h+var_91D0]
 * 00000001800B1F46: mov     dword ptr [rbp+9E40h+var_7300], esi
 * 00000001800B1F4C: mov     dword ptr [rbp+9E40h+var_7300+4], esi
 * 00000001800B1F52: movups  xmm6, [rbp+9E40h+var_7300]
 * 00000001800B1F59: call    sub_1800A5D74
 * 00000001800B1F5E: mov     r8, rax
 * 00000001800B1F61: mov     r9d, r12d
 * 00000001800B1F64: mov     edx, 0F2h
 * 00000001800B1F69: lea     rcx, [rbp+9E40h+var_1AB0]
 * 00000001800B1F70: call    sub_180073668
 * 00000001800B1F75: nop
 * 00000001800B1F76: mov     r8, rax
 * 00000001800B1F79: mov     rdx, r13
 * 00000001800B1F7C: lea     rcx, [rbp+9E40h+var_1AD0]
 * 00000001800B1F83: call    sub_18001B518
 * 00000001800B1F88: nop
 * 00000001800B1F89: lea     r8, aVertex; "/Vertex"
 * 00000001800B1F90: mov     rdx, rax
 * 00000001800B1F93: lea     rcx, [rbp+9E40h+var_4F90]
 * 00000001800B1F9A: call    sub_18001B448
 * 00000001800B1F9F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B1FA4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B1FA9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B1FAE: mov     rcx, rax
 * 00000001800B1FB1: call    sub_18007370C
 * 00000001800B1FB6: nop
 * 00000001800B1FB7: lea     rcx, [rbp+9E40h+var_1AD0]
 * 00000001800B1FBE: call    sub_180010F20
 * 00000001800B1FC3: nop
 * 00000001800B1FC4: lea     rcx, [rbp+9E40h+var_1AB0]
 * 00000001800B1FCB: call    sub_180010F20
 * 00000001800B1FD0: nop
 * 00000001800B1FD1: lea     rcx, dword_1801C956C
 * 00000001800B1FD8: call    _Init_thread_footer
 * 00000001800B1FDD: mov     rax, [rdi+rbx*8]
 * 00000001800B1FE1: mov     ecx, [r15+rax]
 * 00000001800B1FE5: cmp     cs:dword_1801C9570, ecx
 * 00000001800B1FEB: jle     loc_1800B20C4
 * 00000001800B1FF1: lea     rcx, dword_1801C9570
 * 00000001800B1FF8: call    sub_18000C8D0
 * 00000001800B1FFD: cmp     cs:dword_1801C9570, r14d
 * 00000001800B2004: jnz     loc_1800B20C4
 * 00000001800B200A: lea     rax, unk_1801411F0
 * 00000001800B2011: mov     qword ptr [rbp+9E40h+var_8F90], rax
 * 00000001800B2018: lea     rax, unk_180142C40
 * 00000001800B201F: mov     qword ptr [rbp+9E40h+var_8F90+8], rax
 * 00000001800B2026: movups  xmm7, [rbp+9E40h+var_8F90]
 * 00000001800B202D: mov     dword ptr [rbp+9E40h+var_72E0], esi
 * 00000001800B2033: mov     dword ptr [rbp+9E40h+var_72E0+4], esi
 * 00000001800B2039: movups  xmm6, [rbp+9E40h+var_72E0]
 * 00000001800B2040: call    sub_1800A5D74
 * 00000001800B2045: mov     r8, rax
 * 00000001800B2048: mov     r9d, r12d
 * 00000001800B204B: mov     edx, 0F8h
 * 00000001800B2050: lea     rcx, [rbp+9E40h+var_1A50]
 * 00000001800B2057: call    sub_180073668
 * 00000001800B205C: nop
 * 00000001800B205D: mov     r8, rax
 * 00000001800B2060: mov     rdx, r13
 * 00000001800B2063: lea     rcx, [rbp+9E40h+var_1A70]
 * 00000001800B206A: call    sub_18001B518
 * 00000001800B206F: nop
 * 00000001800B2070: lea     r8, aVertex; "/Vertex"
 * 00000001800B2077: mov     rdx, rax
 * 00000001800B207A: lea     rcx, [rbp+9E40h+var_4F70]
 * 00000001800B2081: call    sub_18001B448
 * 00000001800B2086: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B208B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2090: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2095: mov     rcx, rax
 * 00000001800B2098: call    sub_18007370C
 * 00000001800B209D: nop
 * 00000001800B209E: lea     rcx, [rbp+9E40h+var_1A70]
 * 00000001800B20A5: call    sub_180010F20
 * 00000001800B20AA: nop
 * 00000001800B20AB: lea     rcx, [rbp+9E40h+var_1A50]
 * 00000001800B20B2: call    sub_180010F20
 * 00000001800B20B7: nop
 * 00000001800B20B8: lea     rcx, dword_1801C9570
 * 00000001800B20BF: call    _Init_thread_footer
 * 00000001800B20C4: mov     rax, [rdi+rbx*8]
 * 00000001800B20C8: mov     ecx, [r15+rax]
 * 00000001800B20CC: cmp     cs:dword_1801C9574, ecx
 * 00000001800B20D2: jle     loc_1800B21AB
 * 00000001800B20D8: lea     rcx, dword_1801C9574
 * 00000001800B20DF: call    sub_18000C8D0
 * 00000001800B20E4: cmp     cs:dword_1801C9574, r14d
 * 00000001800B20EB: jnz     loc_1800B21AB
 * 00000001800B20F1: lea     rax, unk_1801411F0
 * 00000001800B20F8: mov     qword ptr [rbp+9E40h+var_91B0], rax
 * 00000001800B20FF: lea     rax, unk_180142C40
 * 00000001800B2106: mov     qword ptr [rbp+9E40h+var_91B0+8], rax
 * 00000001800B210D: movups  xmm7, [rbp+9E40h+var_91B0]
 * 00000001800B2114: mov     dword ptr [rbp+9E40h+var_72C0], esi
 * 00000001800B211A: mov     dword ptr [rbp+9E40h+var_72C0+4], esi
 * 00000001800B2120: movups  xmm6, [rbp+9E40h+var_72C0]
 * 00000001800B2127: call    sub_1800A5D74
 * 00000001800B212C: mov     r8, rax
 * 00000001800B212F: mov     r9d, r12d
 * 00000001800B2132: mov     edx, 0FAh
 * 00000001800B2137: lea     rcx, [rbp+9E40h+var_19F0]
 * 00000001800B213E: call    sub_180073668
 * 00000001800B2143: nop
 * 00000001800B2144: mov     r8, rax
 * 00000001800B2147: mov     rdx, r13
 * 00000001800B214A: lea     rcx, [rbp+9E40h+var_1A10]
 * 00000001800B2151: call    sub_18001B518
 * 00000001800B2156: nop
 * 00000001800B2157: lea     r8, aVertex; "/Vertex"
 * 00000001800B215E: mov     rdx, rax
 * 00000001800B2161: lea     rcx, [rbp+9E40h+var_4F50]
 * 00000001800B2168: call    sub_18001B448
 * 00000001800B216D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2172: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2177: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B217C: mov     rcx, rax
 * 00000001800B217F: call    sub_18007370C
 * 00000001800B2184: nop
 * 00000001800B2185: lea     rcx, [rbp+9E40h+var_1A10]
 * 00000001800B218C: call    sub_180010F20
 * 00000001800B2191: nop
 * 00000001800B2192: lea     rcx, [rbp+9E40h+var_19F0]
 * 00000001800B2199: call    sub_180010F20
 * 00000001800B219E: nop
 * 00000001800B219F: lea     rcx, dword_1801C9574
 * 00000001800B21A6: call    _Init_thread_footer
 * 00000001800B21AB: mov     rax, [rdi+rbx*8]
 * 00000001800B21AF: mov     ecx, [r15+rax]
 * 00000001800B21B3: cmp     cs:dword_1801C9578, ecx
 * 00000001800B21B9: jle     loc_1800B2292
 * 00000001800B21BF: lea     rcx, dword_1801C9578
 * 00000001800B21C6: call    sub_18000C8D0
 * 00000001800B21CB: cmp     cs:dword_1801C9578, r14d
 * 00000001800B21D2: jnz     loc_1800B2292
 * 00000001800B21D8: lea     rax, unk_180144EE0
 * 00000001800B21DF: mov     qword ptr [rbp+9E40h+var_91A0], rax
 * 00000001800B21E6: lea     rax, unk_180145EF8
 * 00000001800B21ED: mov     qword ptr [rbp+9E40h+var_91A0+8], rax
 * 00000001800B21F4: movups  xmm7, [rbp+9E40h+var_91A0]
 * 00000001800B21FB: mov     dword ptr [rbp+9E40h+var_72A0], esi
 * 00000001800B2201: mov     dword ptr [rbp+9E40h+var_72A0+4], esi
 * 00000001800B2207: movups  xmm6, [rbp+9E40h+var_72A0]
 * 00000001800B220E: call    sub_1800A5D74
 * 00000001800B2213: mov     r8, rax
 * 00000001800B2216: mov     r9d, r12d
 * 00000001800B2219: mov     edx, 100h
 * 00000001800B221E: lea     rcx, [rbp+9E40h+var_1990]
 * 00000001800B2225: call    sub_180073668
 * 00000001800B222A: nop
 * 00000001800B222B: mov     r8, rax
 * 00000001800B222E: mov     rdx, r13
 * 00000001800B2231: lea     rcx, [rbp+9E40h+var_19B0]
 * 00000001800B2238: call    sub_18001B518
 * 00000001800B223D: nop
 * 00000001800B223E: lea     r8, aVertex; "/Vertex"
 * 00000001800B2245: mov     rdx, rax
 * 00000001800B2248: lea     rcx, [rbp+9E40h+var_4F30]
 * 00000001800B224F: call    sub_18001B448
 * 00000001800B2254: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2259: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B225E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2263: mov     rcx, rax
 * 00000001800B2266: call    sub_18007370C
 * 00000001800B226B: nop
 * 00000001800B226C: lea     rcx, [rbp+9E40h+var_19B0]
 * 00000001800B2273: call    sub_180010F20
 * 00000001800B2278: nop
 * 00000001800B2279: lea     rcx, [rbp+9E40h+var_1990]
 * 00000001800B2280: call    sub_180010F20
 * 00000001800B2285: nop
 * 00000001800B2286: lea     rcx, dword_1801C9578
 * 00000001800B228D: call    _Init_thread_footer
 * 00000001800B2292: mov     rax, [rdi+rbx*8]
 * 00000001800B2296: mov     ecx, [r15+rax]
 * 00000001800B229A: cmp     cs:dword_1801C957C, ecx
 * 00000001800B22A0: jle     loc_1800B2379
 * 00000001800B22A6: lea     rcx, dword_1801C957C
 * 00000001800B22AD: call    sub_18000C8D0
 * 00000001800B22B2: cmp     cs:dword_1801C957C, r14d
 * 00000001800B22B9: jnz     loc_1800B2379
 * 00000001800B22BF: lea     rax, unk_180144EE0
 * 00000001800B22C6: mov     qword ptr [rbp+9E40h+var_9190], rax
 * 00000001800B22CD: lea     rax, unk_180145EF8
 * 00000001800B22D4: mov     qword ptr [rbp+9E40h+var_9190+8], rax
 * 00000001800B22DB: movups  xmm7, [rbp+9E40h+var_9190]
 * 00000001800B22E2: mov     dword ptr [rbp+9E40h+var_7280], esi
 * 00000001800B22E8: mov     dword ptr [rbp+9E40h+var_7280+4], esi
 * 00000001800B22EE: movups  xmm6, [rbp+9E40h+var_7280]
 * 00000001800B22F5: call    sub_1800A5D74
 * 00000001800B22FA: mov     r8, rax
 * 00000001800B22FD: mov     r9d, r12d
 * 00000001800B2300: mov     edx, 102h
 * 00000001800B2305: lea     rcx, [rbp+9E40h+var_1930]
 * 00000001800B230C: call    sub_180073668
 * 00000001800B2311: nop
 * 00000001800B2312: mov     r8, rax
 * 00000001800B2315: mov     rdx, r13
 * 00000001800B2318: lea     rcx, [rbp+9E40h+var_1950]
 * 00000001800B231F: call    sub_18001B518
 * 00000001800B2324: nop
 * 00000001800B2325: lea     r8, aVertex; "/Vertex"
 * 00000001800B232C: mov     rdx, rax
 * 00000001800B232F: lea     rcx, [rbp+9E40h+var_4F10]
 * 00000001800B2336: call    sub_18001B448
 * 00000001800B233B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2340: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2345: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B234A: mov     rcx, rax
 * 00000001800B234D: call    sub_18007370C
 * 00000001800B2352: nop
 * 00000001800B2353: lea     rcx, [rbp+9E40h+var_1950]
 * 00000001800B235A: call    sub_180010F20
 * 00000001800B235F: nop
 * 00000001800B2360: lea     rcx, [rbp+9E40h+var_1930]
 * 00000001800B2367: call    sub_180010F20
 * 00000001800B236C: nop
 * 00000001800B236D: lea     rcx, dword_1801C957C
 * 00000001800B2374: call    _Init_thread_footer
 * 00000001800B2379: mov     rax, [rdi+rbx*8]
 * 00000001800B237D: mov     ecx, [r15+rax]
 * 00000001800B2381: cmp     cs:dword_1801C9580, ecx
 * 00000001800B2387: jle     loc_1800B2460
 * 00000001800B238D: lea     rcx, dword_1801C9580
 * 00000001800B2394: call    sub_18000C8D0
 * 00000001800B2399: cmp     cs:dword_1801C9580, r14d
 * 00000001800B23A0: jnz     loc_1800B2460
 * 00000001800B23A6: lea     rax, unk_180144EE0
 * 00000001800B23AD: mov     qword ptr [rbp+9E40h+var_9180], rax
 * 00000001800B23B4: lea     rax, unk_180145EF8
 * 00000001800B23BB: mov     qword ptr [rbp+9E40h+var_9180+8], rax
 * 00000001800B23C2: movups  xmm7, [rbp+9E40h+var_9180]
 * 00000001800B23C9: mov     dword ptr [rbp+9E40h+var_7260], esi
 * 00000001800B23CF: mov     dword ptr [rbp+9E40h+var_7260+4], esi
 * 00000001800B23D5: movups  xmm6, [rbp+9E40h+var_7260]
 * 00000001800B23DC: call    sub_1800A5D74
 * 00000001800B23E1: mov     r8, rax
 * 00000001800B23E4: mov     r9d, r12d
 * 00000001800B23E7: mov     edx, 104h
 * 00000001800B23EC: lea     rcx, [rbp+9E40h+var_18D0]
 * 00000001800B23F3: call    sub_180073668
 * 00000001800B23F8: nop
 * 00000001800B23F9: mov     r8, rax
 * 00000001800B23FC: mov     rdx, r13
 * 00000001800B23FF: lea     rcx, [rbp+9E40h+var_18F0]
 * 00000001800B2406: call    sub_18001B518
 * 00000001800B240B: nop
 * 00000001800B240C: lea     r8, aVertex; "/Vertex"
 * 00000001800B2413: mov     rdx, rax
 * 00000001800B2416: lea     rcx, [rbp+9E40h+var_4EF0]
 * 00000001800B241D: call    sub_18001B448
 * 00000001800B2422: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2427: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B242C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2431: mov     rcx, rax
 * 00000001800B2434: call    sub_18007370C
 * 00000001800B2439: nop
 * 00000001800B243A: lea     rcx, [rbp+9E40h+var_18F0]
 * 00000001800B2441: call    sub_180010F20
 * 00000001800B2446: nop
 * 00000001800B2447: lea     rcx, [rbp+9E40h+var_18D0]
 * 00000001800B244E: call    sub_180010F20
 * 00000001800B2453: nop
 * 00000001800B2454: lea     rcx, dword_1801C9580
 * 00000001800B245B: call    _Init_thread_footer
 * 00000001800B2460: mov     rax, [rdi+rbx*8]
 * 00000001800B2464: mov     ecx, [r15+rax]
 * 00000001800B2468: cmp     cs:dword_1801C9584, ecx
 * 00000001800B246E: jle     loc_1800B2547
 * 00000001800B2474: lea     rcx, dword_1801C9584
 * 00000001800B247B: call    sub_18000C8D0
 * 00000001800B2480: cmp     cs:dword_1801C9584, r14d
 * 00000001800B2487: jnz     loc_1800B2547
 * 00000001800B248D: lea     rax, unk_180144EE0
 * 00000001800B2494: mov     qword ptr [rbp+9E40h+var_9170], rax
 * 00000001800B249B: lea     rax, unk_180145EF8
 * 00000001800B24A2: mov     qword ptr [rbp+9E40h+var_9170+8], rax
 * 00000001800B24A9: movups  xmm7, [rbp+9E40h+var_9170]
 * 00000001800B24B0: mov     dword ptr [rbp+9E40h+var_7240], esi
 * 00000001800B24B6: mov     dword ptr [rbp+9E40h+var_7240+4], esi
 * 00000001800B24BC: movups  xmm6, [rbp+9E40h+var_7240]
 * 00000001800B24C3: call    sub_1800A5D74
 * 00000001800B24C8: mov     r8, rax
 * 00000001800B24CB: mov     r9d, r12d
 * 00000001800B24CE: mov     edx, 106h
 * 00000001800B24D3: lea     rcx, [rbp+9E40h+var_1870]
 * 00000001800B24DA: call    sub_180073668
 * 00000001800B24DF: nop
 * 00000001800B24E0: mov     r8, rax
 * 00000001800B24E3: mov     rdx, r13
 * 00000001800B24E6: lea     rcx, [rbp+9E40h+var_1890]
 * 00000001800B24ED: call    sub_18001B518
 * 00000001800B24F2: nop
 * 00000001800B24F3: lea     r8, aVertex; "/Vertex"
 * 00000001800B24FA: mov     rdx, rax
 * 00000001800B24FD: lea     rcx, [rbp+9E40h+var_4ED0]
 * 00000001800B2504: call    sub_18001B448
 * 00000001800B2509: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B250E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2513: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2518: mov     rcx, rax
 * 00000001800B251B: call    sub_18007370C
 * 00000001800B2520: nop
 * 00000001800B2521: lea     rcx, [rbp+9E40h+var_1890]
 * 00000001800B2528: call    sub_180010F20
 * 00000001800B252D: nop
 * 00000001800B252E: lea     rcx, [rbp+9E40h+var_1870]
 * 00000001800B2535: call    sub_180010F20
 * 00000001800B253A: nop
 * 00000001800B253B: lea     rcx, dword_1801C9584
 * 00000001800B2542: call    _Init_thread_footer
 * 00000001800B2547: mov     rax, [rdi+rbx*8]
 * 00000001800B254B: mov     ecx, [r15+rax]
 * 00000001800B254F: cmp     cs:dword_1801C9588, ecx
 * 00000001800B2555: jle     loc_1800B262E
 * 00000001800B255B: lea     rcx, dword_1801C9588
 * 00000001800B2562: call    sub_18000C8D0
 * 00000001800B2567: cmp     cs:dword_1801C9588, r14d
 * 00000001800B256E: jnz     loc_1800B262E
 * 00000001800B2574: lea     rax, unk_180144EE0
 * 00000001800B257B: mov     qword ptr [rbp+9E40h+var_9160], rax
 * 00000001800B2582: lea     rax, unk_180145EF8
 * 00000001800B2589: mov     qword ptr [rbp+9E40h+var_9160+8], rax
 * 00000001800B2590: movups  xmm7, [rbp+9E40h+var_9160]
 * 00000001800B2597: mov     dword ptr [rbp+9E40h+var_7220], esi
 * 00000001800B259D: mov     dword ptr [rbp+9E40h+var_7220+4], esi
 * 00000001800B25A3: movups  xmm6, [rbp+9E40h+var_7220]
 * 00000001800B25AA: call    sub_1800A5D74
 * 00000001800B25AF: mov     r8, rax
 * 00000001800B25B2: mov     r9d, r12d
 * 00000001800B25B5: mov     edx, 108h
 * 00000001800B25BA: lea     rcx, [rbp+9E40h+var_1810]
 * 00000001800B25C1: call    sub_180073668
 * 00000001800B25C6: nop
 * 00000001800B25C7: mov     r8, rax
 * 00000001800B25CA: mov     rdx, r13
 * 00000001800B25CD: lea     rcx, [rbp+9E40h+var_1830]
 * 00000001800B25D4: call    sub_18001B518
 * 00000001800B25D9: nop
 * 00000001800B25DA: lea     r8, aVertex; "/Vertex"
 * 00000001800B25E1: mov     rdx, rax
 * 00000001800B25E4: lea     rcx, [rbp+9E40h+var_4EB0]
 * 00000001800B25EB: call    sub_18001B448
 * 00000001800B25F0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B25F5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B25FA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B25FF: mov     rcx, rax
 * 00000001800B2602: call    sub_18007370C
 * 00000001800B2607: nop
 * 00000001800B2608: lea     rcx, [rbp+9E40h+var_1830]
 * 00000001800B260F: call    sub_180010F20
 * 00000001800B2614: nop
 * 00000001800B2615: lea     rcx, [rbp+9E40h+var_1810]
 * 00000001800B261C: call    sub_180010F20
 * 00000001800B2621: nop
 * 00000001800B2622: lea     rcx, dword_1801C9588
 * 00000001800B2629: call    _Init_thread_footer
 * 00000001800B262E: mov     rax, [rdi+rbx*8]
 * 00000001800B2632: mov     ecx, [r15+rax]
 * 00000001800B2636: cmp     cs:dword_1801C958C, ecx
 * 00000001800B263C: jle     loc_1800B2715
 * 00000001800B2642: lea     rcx, dword_1801C958C
 * 00000001800B2649: call    sub_18000C8D0
 * 00000001800B264E: cmp     cs:dword_1801C958C, r14d
 * 00000001800B2655: jnz     loc_1800B2715
 * 00000001800B265B: lea     rax, unk_180144EE0
 * 00000001800B2662: mov     qword ptr [rbp+9E40h+var_9150], rax
 * 00000001800B2669: lea     rax, unk_180145EF8
 * 00000001800B2670: mov     qword ptr [rbp+9E40h+var_9150+8], rax
 * 00000001800B2677: movups  xmm7, [rbp+9E40h+var_9150]
 * 00000001800B267E: mov     dword ptr [rbp+9E40h+var_7200], esi
 * 00000001800B2684: mov     dword ptr [rbp+9E40h+var_7200+4], esi
 * 00000001800B268A: movups  xmm6, [rbp+9E40h+var_7200]
 * 00000001800B2691: call    sub_1800A5D74
 * 00000001800B2696: mov     r8, rax
 * 00000001800B2699: mov     r9d, r12d
 * 00000001800B269C: mov     edx, 10Ah
 * 00000001800B26A1: lea     rcx, [rbp+9E40h+var_17B0]
 * 00000001800B26A8: call    sub_180073668
 * 00000001800B26AD: nop
 * 00000001800B26AE: mov     r8, rax
 * 00000001800B26B1: mov     rdx, r13
 * 00000001800B26B4: lea     rcx, [rbp+9E40h+var_17D0]
 * 00000001800B26BB: call    sub_18001B518
 * 00000001800B26C0: nop
 * 00000001800B26C1: lea     r8, aVertex; "/Vertex"
 * 00000001800B26C8: mov     rdx, rax
 * 00000001800B26CB: lea     rcx, [rbp+9E40h+var_4E90]
 * 00000001800B26D2: call    sub_18001B448
 * 00000001800B26D7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B26DC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B26E1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B26E6: mov     rcx, rax
 * 00000001800B26E9: call    sub_18007370C
 * 00000001800B26EE: nop
 * 00000001800B26EF: lea     rcx, [rbp+9E40h+var_17D0]
 * 00000001800B26F6: call    sub_180010F20
 * 00000001800B26FB: nop
 * 00000001800B26FC: lea     rcx, [rbp+9E40h+var_17B0]
 * 00000001800B2703: call    sub_180010F20
 * 00000001800B2708: nop
 * 00000001800B2709: lea     rcx, dword_1801C958C
 * 00000001800B2710: call    _Init_thread_footer
 * 00000001800B2715: mov     rax, [rdi+rbx*8]
 * 00000001800B2719: mov     ecx, [r15+rax]
 * 00000001800B271D: cmp     cs:dword_1801C9590, ecx
 * 00000001800B2723: jle     loc_1800B27FC
 * 00000001800B2729: lea     rcx, dword_1801C9590
 * 00000001800B2730: call    sub_18000C8D0
 * 00000001800B2735: cmp     cs:dword_1801C9590, r14d
 * 00000001800B273C: jnz     loc_1800B27FC
 * 00000001800B2742: lea     rax, unk_180144EE0
 * 00000001800B2749: mov     qword ptr [rbp+9E40h+var_9140], rax
 * 00000001800B2750: lea     rax, unk_180145EF8
 * 00000001800B2757: mov     qword ptr [rbp+9E40h+var_9140+8], rax
 * 00000001800B275E: movups  xmm7, [rbp+9E40h+var_9140]
 * 00000001800B2765: mov     dword ptr [rbp+9E40h+var_71E0], esi
 * 00000001800B276B: mov     dword ptr [rbp+9E40h+var_71E0+4], esi
 * 00000001800B2771: movups  xmm6, [rbp+9E40h+var_71E0]
 * 00000001800B2778: call    sub_1800A5D74
 * 00000001800B277D: mov     r8, rax
 * 00000001800B2780: mov     r9d, r12d
 * 00000001800B2783: mov     edx, 110h
 * 00000001800B2788: lea     rcx, [rbp+9E40h+var_1750]
 * 00000001800B278F: call    sub_180073668
 * 00000001800B2794: nop
 * 00000001800B2795: mov     r8, rax
 * 00000001800B2798: mov     rdx, r13
 * 00000001800B279B: lea     rcx, [rbp+9E40h+var_1770]
 * 00000001800B27A2: call    sub_18001B518
 * 00000001800B27A7: nop
 * 00000001800B27A8: lea     r8, aVertex; "/Vertex"
 * 00000001800B27AF: mov     rdx, rax
 * 00000001800B27B2: lea     rcx, [rbp+9E40h+var_4E70]
 * 00000001800B27B9: call    sub_18001B448
 * 00000001800B27BE: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B27C3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B27C8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B27CD: mov     rcx, rax
 * 00000001800B27D0: call    sub_18007370C
 * 00000001800B27D5: nop
 * 00000001800B27D6: lea     rcx, [rbp+9E40h+var_1770]
 * 00000001800B27DD: call    sub_180010F20
 * 00000001800B27E2: nop
 * 00000001800B27E3: lea     rcx, [rbp+9E40h+var_1750]
 * 00000001800B27EA: call    sub_180010F20
 * 00000001800B27EF: nop
 * 00000001800B27F0: lea     rcx, dword_1801C9590
 * 00000001800B27F7: call    _Init_thread_footer
 * 00000001800B27FC: mov     rax, [rdi+rbx*8]
 * 00000001800B2800: mov     ecx, [r15+rax]
 * 00000001800B2804: cmp     cs:dword_1801C9594, ecx
 * 00000001800B280A: jle     loc_1800B28E3
 * 00000001800B2810: lea     rcx, dword_1801C9594
 * 00000001800B2817: call    sub_18000C8D0
 * 00000001800B281C: cmp     cs:dword_1801C9594, r14d
 * 00000001800B2823: jnz     loc_1800B28E3
 * 00000001800B2829: lea     rax, unk_180144EE0
 * 00000001800B2830: mov     qword ptr [rbp+9E40h+var_9130], rax
 * 00000001800B2837: lea     rax, unk_180145EF8
 * 00000001800B283E: mov     qword ptr [rbp+9E40h+var_9130+8], rax
 * 00000001800B2845: movups  xmm7, [rbp+9E40h+var_9130]
 * 00000001800B284C: mov     dword ptr [rbp+9E40h+var_71C0], esi
 * 00000001800B2852: mov     dword ptr [rbp+9E40h+var_71C0+4], esi
 * 00000001800B2858: movups  xmm6, [rbp+9E40h+var_71C0]
 * 00000001800B285F: call    sub_1800A5D74
 * 00000001800B2864: mov     r8, rax
 * 00000001800B2867: mov     r9d, r12d
 * 00000001800B286A: mov     edx, 112h
 * 00000001800B286F: lea     rcx, [rbp+9E40h+var_16F0]
 * 00000001800B2876: call    sub_180073668
 * 00000001800B287B: nop
 * 00000001800B287C: mov     r8, rax
 * 00000001800B287F: mov     rdx, r13
 * 00000001800B2882: lea     rcx, [rbp+9E40h+var_1710]
 * 00000001800B2889: call    sub_18001B518
 * 00000001800B288E: nop
 * 00000001800B288F: lea     r8, aVertex; "/Vertex"
 * 00000001800B2896: mov     rdx, rax
 * 00000001800B2899: lea     rcx, [rbp+9E40h+var_4E50]
 * 00000001800B28A0: call    sub_18001B448
 * 00000001800B28A5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B28AA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B28AF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B28B4: mov     rcx, rax
 * 00000001800B28B7: call    sub_18007370C
 * 00000001800B28BC: nop
 * 00000001800B28BD: lea     rcx, [rbp+9E40h+var_1710]
 * 00000001800B28C4: call    sub_180010F20
 * 00000001800B28C9: nop
 * 00000001800B28CA: lea     rcx, [rbp+9E40h+var_16F0]
 * 00000001800B28D1: call    sub_180010F20
 * 00000001800B28D6: nop
 * 00000001800B28D7: lea     rcx, dword_1801C9594
 * 00000001800B28DE: call    _Init_thread_footer
 * 00000001800B28E3: mov     rax, [rdi+rbx*8]
 * 00000001800B28E7: mov     ecx, [r15+rax]
 * 00000001800B28EB: cmp     cs:dword_1801C9598, ecx
 * 00000001800B28F1: jle     loc_1800B29CA
 * 00000001800B28F7: lea     rcx, dword_1801C9598
 * 00000001800B28FE: call    sub_18000C8D0
 * 00000001800B2903: cmp     cs:dword_1801C9598, r14d
 * 00000001800B290A: jnz     loc_1800B29CA
 * 00000001800B2910: lea     rax, unk_180144EE0
 * 00000001800B2917: mov     qword ptr [rbp+9E40h+var_9120], rax
 * 00000001800B291E: lea     rax, unk_180145EF8
 * 00000001800B2925: mov     qword ptr [rbp+9E40h+var_9120+8], rax
 * 00000001800B292C: movups  xmm7, [rbp+9E40h+var_9120]
 * 00000001800B2933: mov     dword ptr [rbp+9E40h+var_71A0], esi
 * 00000001800B2939: mov     dword ptr [rbp+9E40h+var_71A0+4], esi
 * 00000001800B293F: movups  xmm6, [rbp+9E40h+var_71A0]
 * 00000001800B2946: call    sub_1800A5D74
 * 00000001800B294B: mov     r8, rax
 * 00000001800B294E: mov     r9d, r12d
 * 00000001800B2951: mov     edx, 114h
 * 00000001800B2956: lea     rcx, [rbp+9E40h+var_1690]
 * 00000001800B295D: call    sub_180073668
 * 00000001800B2962: nop
 * 00000001800B2963: mov     r8, rax
 * 00000001800B2966: mov     rdx, r13
 * 00000001800B2969: lea     rcx, [rbp+9E40h+var_16B0]
 * 00000001800B2970: call    sub_18001B518
 * 00000001800B2975: nop
 * 00000001800B2976: lea     r8, aVertex; "/Vertex"
 * 00000001800B297D: mov     rdx, rax
 * 00000001800B2980: lea     rcx, [rbp+9E40h+var_4E30]
 * 00000001800B2987: call    sub_18001B448
 * 00000001800B298C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2991: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2996: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B299B: mov     rcx, rax
 * 00000001800B299E: call    sub_18007370C
 * 00000001800B29A3: nop
 * 00000001800B29A4: lea     rcx, [rbp+9E40h+var_16B0]
 * 00000001800B29AB: call    sub_180010F20
 * 00000001800B29B0: nop
 * 00000001800B29B1: lea     rcx, [rbp+9E40h+var_1690]
 * 00000001800B29B8: call    sub_180010F20
 * 00000001800B29BD: nop
 * 00000001800B29BE: lea     rcx, dword_1801C9598
 * 00000001800B29C5: call    _Init_thread_footer
 * 00000001800B29CA: mov     rax, [rdi+rbx*8]
 * 00000001800B29CE: mov     ecx, [r15+rax]
 * 00000001800B29D2: cmp     cs:dword_1801C959C, ecx
 * 00000001800B29D8: jle     loc_1800B2AB1
 * 00000001800B29DE: lea     rcx, dword_1801C959C
 * 00000001800B29E5: call    sub_18000C8D0
 * 00000001800B29EA: cmp     cs:dword_1801C959C, r14d
 * 00000001800B29F1: jnz     loc_1800B2AB1
 * 00000001800B29F7: lea     rax, unk_180144EE0
 * 00000001800B29FE: mov     qword ptr [rbp+9E40h+var_9110], rax
 * 00000001800B2A05: lea     rax, unk_180145EF8
 * 00000001800B2A0C: mov     qword ptr [rbp+9E40h+var_9110+8], rax
 * 00000001800B2A13: movups  xmm7, [rbp+9E40h+var_9110]
 * 00000001800B2A1A: mov     dword ptr [rbp+9E40h+var_7180], esi
 * 00000001800B2A20: mov     dword ptr [rbp+9E40h+var_7180+4], esi
 * 00000001800B2A26: movups  xmm6, [rbp+9E40h+var_7180]
 * 00000001800B2A2D: call    sub_1800A5D74
 * 00000001800B2A32: mov     r8, rax
 * 00000001800B2A35: mov     r9d, r12d
 * 00000001800B2A38: mov     edx, 116h
 * 00000001800B2A3D: lea     rcx, [rbp+9E40h+var_1630]
 * 00000001800B2A44: call    sub_180073668
 * 00000001800B2A49: nop
 * 00000001800B2A4A: mov     r8, rax
 * 00000001800B2A4D: mov     rdx, r13
 * 00000001800B2A50: lea     rcx, [rbp+9E40h+var_1650]
 * 00000001800B2A57: call    sub_18001B518
 * 00000001800B2A5C: nop
 * 00000001800B2A5D: lea     r8, aVertex; "/Vertex"
 * 00000001800B2A64: mov     rdx, rax
 * 00000001800B2A67: lea     rcx, [rbp+9E40h+var_5570]
 * 00000001800B2A6E: call    sub_18001B448
 * 00000001800B2A73: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2A78: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2A7D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2A82: mov     rcx, rax
 * 00000001800B2A85: call    sub_18007370C
 * 00000001800B2A8A: nop
 * 00000001800B2A8B: lea     rcx, [rbp+9E40h+var_1650]
 * 00000001800B2A92: call    sub_180010F20
 * 00000001800B2A97: nop
 * 00000001800B2A98: lea     rcx, [rbp+9E40h+var_1630]
 * 00000001800B2A9F: call    sub_180010F20
 * 00000001800B2AA4: nop
 * 00000001800B2AA5: lea     rcx, dword_1801C959C
 * 00000001800B2AAC: call    _Init_thread_footer
 * 00000001800B2AB1: mov     rax, [rdi+rbx*8]
 * 00000001800B2AB5: mov     ecx, [r15+rax]
 * 00000001800B2AB9: cmp     cs:dword_1801C95A0, ecx
 * 00000001800B2ABF: jle     loc_1800B2B98
 * 00000001800B2AC5: lea     rcx, dword_1801C95A0
 * 00000001800B2ACC: call    sub_18000C8D0
 * 00000001800B2AD1: cmp     cs:dword_1801C95A0, r14d
 * 00000001800B2AD8: jnz     loc_1800B2B98
 * 00000001800B2ADE: lea     rax, unk_180144EE0
 * 00000001800B2AE5: mov     qword ptr [rbp+9E40h+var_9100], rax
 * 00000001800B2AEC: lea     rax, unk_180145EF8
 * 00000001800B2AF3: mov     qword ptr [rbp+9E40h+var_9100+8], rax
 * 00000001800B2AFA: movups  xmm7, [rbp+9E40h+var_9100]
 * 00000001800B2B01: mov     dword ptr [rbp+9E40h+var_7160], esi
 * 00000001800B2B07: mov     dword ptr [rbp+9E40h+var_7160+4], esi
 * 00000001800B2B0D: movups  xmm6, [rbp+9E40h+var_7160]
 * 00000001800B2B14: call    sub_1800A5D74
 * 00000001800B2B19: mov     r8, rax
 * 00000001800B2B1C: mov     r9d, r12d
 * 00000001800B2B1F: mov     edx, 118h
 * 00000001800B2B24: lea     rcx, [rbp+9E40h+var_15D0]
 * 00000001800B2B2B: call    sub_180073668
 * 00000001800B2B30: nop
 * 00000001800B2B31: mov     r8, rax
 * 00000001800B2B34: mov     rdx, r13
 * 00000001800B2B37: lea     rcx, [rbp+9E40h+var_15F0]
 * 00000001800B2B3E: call    sub_18001B518
 * 00000001800B2B43: nop
 * 00000001800B2B44: lea     r8, aVertex; "/Vertex"
 * 00000001800B2B4B: mov     rdx, rax
 * 00000001800B2B4E: lea     rcx, [rbp+9E40h+var_4E10]
 * 00000001800B2B55: call    sub_18001B448
 * 00000001800B2B5A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2B5F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2B64: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2B69: mov     rcx, rax
 * 00000001800B2B6C: call    sub_18007370C
 * 00000001800B2B71: nop
 * 00000001800B2B72: lea     rcx, [rbp+9E40h+var_15F0]
 * 00000001800B2B79: call    sub_180010F20
 * 00000001800B2B7E: nop
 * 00000001800B2B7F: lea     rcx, [rbp+9E40h+var_15D0]
 * 00000001800B2B86: call    sub_180010F20
 * 00000001800B2B8B: nop
 * 00000001800B2B8C: lea     rcx, dword_1801C95A0
 * 00000001800B2B93: call    _Init_thread_footer
 * 00000001800B2B98: mov     rax, [rdi+rbx*8]
 * 00000001800B2B9C: mov     ecx, [r15+rax]
 * 00000001800B2BA0: cmp     cs:dword_1801C95A4, ecx
 * 00000001800B2BA6: jle     loc_1800B2C7F
 * 00000001800B2BAC: lea     rcx, dword_1801C95A4
 * 00000001800B2BB3: call    sub_18000C8D0
 * 00000001800B2BB8: cmp     cs:dword_1801C95A4, r14d
 * 00000001800B2BBF: jnz     loc_1800B2C7F
 * 00000001800B2BC5: lea     rax, unk_180144EE0
 * 00000001800B2BCC: mov     qword ptr [rbp+9E40h+var_90F0], rax
 * 00000001800B2BD3: lea     rax, unk_180145EF8
 * 00000001800B2BDA: mov     qword ptr [rbp+9E40h+var_90F0+8], rax
 * 00000001800B2BE1: movups  xmm7, [rbp+9E40h+var_90F0]
 * 00000001800B2BE8: mov     dword ptr [rbp+9E40h+var_7140], esi
 * 00000001800B2BEE: mov     dword ptr [rbp+9E40h+var_7140+4], esi
 * 00000001800B2BF4: movups  xmm6, [rbp+9E40h+var_7140]
 * 00000001800B2BFB: call    sub_1800A5D74
 * 00000001800B2C00: mov     r8, rax
 * 00000001800B2C03: mov     r9d, r12d
 * 00000001800B2C06: mov     edx, 11Ah
 * 00000001800B2C0B: lea     rcx, [rbp+9E40h+var_1570]
 * 00000001800B2C12: call    sub_180073668
 * 00000001800B2C17: nop
 * 00000001800B2C18: mov     r8, rax
 * 00000001800B2C1B: mov     rdx, r13
 * 00000001800B2C1E: lea     rcx, [rbp+9E40h+var_1590]
 * 00000001800B2C25: call    sub_18001B518
 * 00000001800B2C2A: nop
 * 00000001800B2C2B: lea     r8, aVertex; "/Vertex"
 * 00000001800B2C32: mov     rdx, rax
 * 00000001800B2C35: lea     rcx, [rbp+9E40h+var_4DF0]
 * 00000001800B2C3C: call    sub_18001B448
 * 00000001800B2C41: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2C46: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2C4B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2C50: mov     rcx, rax
 * 00000001800B2C53: call    sub_18007370C
 * 00000001800B2C58: nop
 * 00000001800B2C59: lea     rcx, [rbp+9E40h+var_1590]
 * 00000001800B2C60: call    sub_180010F20
 * 00000001800B2C65: nop
 * 00000001800B2C66: lea     rcx, [rbp+9E40h+var_1570]
 * 00000001800B2C6D: call    sub_180010F20
 * 00000001800B2C72: nop
 * 00000001800B2C73: lea     rcx, dword_1801C95A4
 * 00000001800B2C7A: call    _Init_thread_footer
 * 00000001800B2C7F: mov     rax, [rdi+rbx*8]
 * 00000001800B2C83: mov     ecx, [r15+rax]
 * 00000001800B2C87: cmp     cs:dword_1801C95A8, ecx
 * 00000001800B2C8D: jle     loc_1800B2D66
 * 00000001800B2C93: lea     rcx, dword_1801C95A8
 * 00000001800B2C9A: call    sub_18000C8D0
 * 00000001800B2C9F: cmp     cs:dword_1801C95A8, r14d
 * 00000001800B2CA6: jnz     loc_1800B2D66
 * 00000001800B2CAC: lea     rax, unk_180145F00
 * 00000001800B2CB3: mov     qword ptr [rbp+9E40h+var_90E0], rax
 * 00000001800B2CBA: lea     rax, unk_180147918
 * 00000001800B2CC1: mov     qword ptr [rbp+9E40h+var_90E0+8], rax
 * 00000001800B2CC8: movups  xmm7, [rbp+9E40h+var_90E0]
 * 00000001800B2CCF: mov     dword ptr [rbp+9E40h+var_7120], esi
 * 00000001800B2CD5: mov     dword ptr [rbp+9E40h+var_7120+4], esi
 * 00000001800B2CDB: movups  xmm6, [rbp+9E40h+var_7120]
 * 00000001800B2CE2: call    sub_1800A5D74
 * 00000001800B2CE7: mov     r8, rax
 * 00000001800B2CEA: mov     r9d, r12d
 * 00000001800B2CED: mov     edx, 120h
 * 00000001800B2CF2: lea     rcx, [rbp+9E40h+var_1510]
 * 00000001800B2CF9: call    sub_180073668
 * 00000001800B2CFE: nop
 * 00000001800B2CFF: mov     r8, rax
 * 00000001800B2D02: mov     rdx, r13
 * 00000001800B2D05: lea     rcx, [rbp+9E40h+var_1530]
 * 00000001800B2D0C: call    sub_18001B518
 * 00000001800B2D11: nop
 * 00000001800B2D12: lea     r8, aVertex; "/Vertex"
 * 00000001800B2D19: mov     rdx, rax
 * 00000001800B2D1C: lea     rcx, [rbp+9E40h+var_4DD0]
 * 00000001800B2D23: call    sub_18001B448
 * 00000001800B2D28: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2D2D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2D32: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2D37: mov     rcx, rax
 * 00000001800B2D3A: call    sub_18007370C
 * 00000001800B2D3F: nop
 * 00000001800B2D40: lea     rcx, [rbp+9E40h+var_1530]
 * 00000001800B2D47: call    sub_180010F20
 * 00000001800B2D4C: nop
 * 00000001800B2D4D: lea     rcx, [rbp+9E40h+var_1510]
 * 00000001800B2D54: call    sub_180010F20
 * 00000001800B2D59: nop
 * 00000001800B2D5A: lea     rcx, dword_1801C95A8
 * 00000001800B2D61: call    _Init_thread_footer
 * 00000001800B2D66: mov     rax, [rdi+rbx*8]
 * 00000001800B2D6A: mov     ecx, [r15+rax]
 * 00000001800B2D6E: cmp     cs:dword_1801C95AC, ecx
 * 00000001800B2D74: jle     loc_1800B2E4D
 * 00000001800B2D7A: lea     rcx, dword_1801C95AC
 * 00000001800B2D81: call    sub_18000C8D0
 * 00000001800B2D86: cmp     cs:dword_1801C95AC, r14d
 * 00000001800B2D8D: jnz     loc_1800B2E4D
 * 00000001800B2D93: lea     rax, unk_180145F00
 * 00000001800B2D9A: mov     qword ptr [rbp+9E40h+var_90D0], rax
 * 00000001800B2DA1: lea     rax, unk_180147918
 * 00000001800B2DA8: mov     qword ptr [rbp+9E40h+var_90D0+8], rax
 * 00000001800B2DAF: movups  xmm7, [rbp+9E40h+var_90D0]
 * 00000001800B2DB6: mov     dword ptr [rbp+9E40h+var_7100], esi
 * 00000001800B2DBC: mov     dword ptr [rbp+9E40h+var_7100+4], esi
 * 00000001800B2DC2: movups  xmm6, [rbp+9E40h+var_7100]
 * 00000001800B2DC9: call    sub_1800A5D74
 * 00000001800B2DCE: mov     r8, rax
 * 00000001800B2DD1: mov     r9d, r12d
 * 00000001800B2DD4: mov     edx, 122h
 * 00000001800B2DD9: lea     rcx, [rbp+9E40h+var_14B0]
 * 00000001800B2DE0: call    sub_180073668
 * 00000001800B2DE5: nop
 * 00000001800B2DE6: mov     r8, rax
 * 00000001800B2DE9: mov     rdx, r13
 * 00000001800B2DEC: lea     rcx, [rbp+9E40h+var_14D0]
 * 00000001800B2DF3: call    sub_18001B518
 * 00000001800B2DF8: nop
 * 00000001800B2DF9: lea     r8, aVertex; "/Vertex"
 * 00000001800B2E00: mov     rdx, rax
 * 00000001800B2E03: lea     rcx, [rbp+9E40h+var_4DB0]
 * 00000001800B2E0A: call    sub_18001B448
 * 00000001800B2E0F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2E14: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2E19: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2E1E: mov     rcx, rax
 * 00000001800B2E21: call    sub_18007370C
 * 00000001800B2E26: nop
 * 00000001800B2E27: lea     rcx, [rbp+9E40h+var_14D0]
 * 00000001800B2E2E: call    sub_180010F20
 * 00000001800B2E33: nop
 * 00000001800B2E34: lea     rcx, [rbp+9E40h+var_14B0]
 * 00000001800B2E3B: call    sub_180010F20
 * 00000001800B2E40: nop
 * 00000001800B2E41: lea     rcx, dword_1801C95AC
 * 00000001800B2E48: call    _Init_thread_footer
 * 00000001800B2E4D: mov     rax, [rdi+rbx*8]
 * 00000001800B2E51: mov     ecx, [r15+rax]
 * 00000001800B2E55: cmp     cs:dword_1801C95B0, ecx
 * 00000001800B2E5B: jle     loc_1800B2F34
 * 00000001800B2E61: lea     rcx, dword_1801C95B0
 * 00000001800B2E68: call    sub_18000C8D0
 * 00000001800B2E6D: cmp     cs:dword_1801C95B0, r14d
 * 00000001800B2E74: jnz     loc_1800B2F34
 * 00000001800B2E7A: lea     rax, unk_180145F00
 * 00000001800B2E81: mov     qword ptr [rbp+9E40h+var_90C0], rax
 * 00000001800B2E88: lea     rax, unk_180147918
 * 00000001800B2E8F: mov     qword ptr [rbp+9E40h+var_90C0+8], rax
 * 00000001800B2E96: movups  xmm7, [rbp+9E40h+var_90C0]
 * 00000001800B2E9D: mov     dword ptr [rbp+9E40h+var_70E0], esi
 * 00000001800B2EA3: mov     dword ptr [rbp+9E40h+var_70E0+4], esi
 * 00000001800B2EA9: movups  xmm6, [rbp+9E40h+var_70E0]
 * 00000001800B2EB0: call    sub_1800A5D74
 * 00000001800B2EB5: mov     r8, rax
 * 00000001800B2EB8: mov     r9d, r12d
 * 00000001800B2EBB: mov     edx, 128h
 * 00000001800B2EC0: lea     rcx, [rbp+9E40h+var_1450]
 * 00000001800B2EC7: call    sub_180073668
 * 00000001800B2ECC: nop
 * 00000001800B2ECD: mov     r8, rax
 * 00000001800B2ED0: mov     rdx, r13
 * 00000001800B2ED3: lea     rcx, [rbp+9E40h+var_1470]
 * 00000001800B2EDA: call    sub_18001B518
 * 00000001800B2EDF: nop
 * 00000001800B2EE0: lea     r8, aVertex; "/Vertex"
 * 00000001800B2EE7: mov     rdx, rax
 * 00000001800B2EEA: lea     rcx, [rbp+9E40h+var_4D90]
 * 00000001800B2EF1: call    sub_18001B448
 * 00000001800B2EF6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2EFB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2F00: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2F05: mov     rcx, rax
 * 00000001800B2F08: call    sub_18007370C
 * 00000001800B2F0D: nop
 * 00000001800B2F0E: lea     rcx, [rbp+9E40h+var_1470]
 * 00000001800B2F15: call    sub_180010F20
 * 00000001800B2F1A: nop
 * 00000001800B2F1B: lea     rcx, [rbp+9E40h+var_1450]
 * 00000001800B2F22: call    sub_180010F20
 * 00000001800B2F27: nop
 * 00000001800B2F28: lea     rcx, dword_1801C95B0
 * 00000001800B2F2F: call    _Init_thread_footer
 * 00000001800B2F34: mov     rax, [rdi+rbx*8]
 * 00000001800B2F38: mov     ecx, [r15+rax]
 * 00000001800B2F3C: cmp     cs:dword_1801C95B4, ecx
 * 00000001800B2F42: jle     loc_1800B301B
 * 00000001800B2F48: lea     rcx, dword_1801C95B4
 * 00000001800B2F4F: call    sub_18000C8D0
 * 00000001800B2F54: cmp     cs:dword_1801C95B4, r14d
 * 00000001800B2F5B: jnz     loc_1800B301B
 * 00000001800B2F61: lea     rax, unk_180145F00
 * 00000001800B2F68: mov     qword ptr [rbp+9E40h+var_90B0], rax
 * 00000001800B2F6F: lea     rax, unk_180147918
 * 00000001800B2F76: mov     qword ptr [rbp+9E40h+var_90B0+8], rax
 * 00000001800B2F7D: movups  xmm7, [rbp+9E40h+var_90B0]
 * 00000001800B2F84: mov     dword ptr [rbp+9E40h+var_70C0], esi
 * 00000001800B2F8A: mov     dword ptr [rbp+9E40h+var_70C0+4], esi
 * 00000001800B2F90: movups  xmm6, [rbp+9E40h+var_70C0]
 * 00000001800B2F97: call    sub_1800A5D74
 * 00000001800B2F9C: mov     r8, rax
 * 00000001800B2F9F: mov     r9d, r12d
 * 00000001800B2FA2: mov     edx, 12Ah
 * 00000001800B2FA7: lea     rcx, [rbp+9E40h+var_13F0]
 * 00000001800B2FAE: call    sub_180073668
 * 00000001800B2FB3: nop
 * 00000001800B2FB4: mov     r8, rax
 * 00000001800B2FB7: mov     rdx, r13
 * 00000001800B2FBA: lea     rcx, [rbp+9E40h+var_1410]
 * 00000001800B2FC1: call    sub_18001B518
 * 00000001800B2FC6: nop
 * 00000001800B2FC7: lea     r8, aVertex; "/Vertex"
 * 00000001800B2FCE: mov     rdx, rax
 * 00000001800B2FD1: lea     rcx, [rbp+9E40h+var_4D70]
 * 00000001800B2FD8: call    sub_18001B448
 * 00000001800B2FDD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B2FE2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B2FE7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B2FEC: mov     rcx, rax
 * 00000001800B2FEF: call    sub_18007370C
 * 00000001800B2FF4: nop
 * 00000001800B2FF5: lea     rcx, [rbp+9E40h+var_1410]
 * 00000001800B2FFC: call    sub_180010F20
 * 00000001800B3001: nop
 * 00000001800B3002: lea     rcx, [rbp+9E40h+var_13F0]
 * 00000001800B3009: call    sub_180010F20
 * 00000001800B300E: nop
 * 00000001800B300F: lea     rcx, dword_1801C95B4
 * 00000001800B3016: call    _Init_thread_footer
 * 00000001800B301B: mov     rax, [rdi+rbx*8]
 * 00000001800B301F: mov     ecx, [r15+rax]
 * 00000001800B3023: cmp     cs:dword_1801C95B8, ecx
 * 00000001800B3029: jle     loc_1800B3102
 * 00000001800B302F: lea     rcx, dword_1801C95B8
 * 00000001800B3036: call    sub_18000C8D0
 * 00000001800B303B: cmp     cs:dword_1801C95B8, r14d
 * 00000001800B3042: jnz     loc_1800B3102
 * 00000001800B3048: lea     rax, unk_180145F00
 * 00000001800B304F: mov     qword ptr [rbp+9E40h+var_90A0], rax
 * 00000001800B3056: lea     rax, unk_180147918
 * 00000001800B305D: mov     qword ptr [rbp+9E40h+var_90A0+8], rax
 * 00000001800B3064: movups  xmm7, [rbp+9E40h+var_90A0]
 * 00000001800B306B: mov     dword ptr [rbp+9E40h+var_70A0], esi
 * 00000001800B3071: mov     dword ptr [rbp+9E40h+var_70A0+4], esi
 * 00000001800B3077: movups  xmm6, [rbp+9E40h+var_70A0]
 * 00000001800B307E: call    sub_1800A5D74
 * 00000001800B3083: mov     r8, rax
 * 00000001800B3086: mov     r9d, r12d
 * 00000001800B3089: mov     edx, 130h
 * 00000001800B308E: lea     rcx, [rbp+9E40h+var_1390]
 * 00000001800B3095: call    sub_180073668
 * 00000001800B309A: nop
 * 00000001800B309B: mov     r8, rax
 * 00000001800B309E: mov     rdx, r13
 * 00000001800B30A1: lea     rcx, [rbp+9E40h+var_13B0]
 * 00000001800B30A8: call    sub_18001B518
 * 00000001800B30AD: nop
 * 00000001800B30AE: lea     r8, aVertex; "/Vertex"
 * 00000001800B30B5: mov     rdx, rax
 * 00000001800B30B8: lea     rcx, [rbp+9E40h+var_4D50]
 * 00000001800B30BF: call    sub_18001B448
 * 00000001800B30C4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B30C9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B30CE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B30D3: mov     rcx, rax
 * 00000001800B30D6: call    sub_18007370C
 * 00000001800B30DB: nop
 * 00000001800B30DC: lea     rcx, [rbp+9E40h+var_13B0]
 * 00000001800B30E3: call    sub_180010F20
 * 00000001800B30E8: nop
 * 00000001800B30E9: lea     rcx, [rbp+9E40h+var_1390]
 * 00000001800B30F0: call    sub_180010F20
 * 00000001800B30F5: nop
 * 00000001800B30F6: lea     rcx, dword_1801C95B8
 * 00000001800B30FD: call    _Init_thread_footer
 * 00000001800B3102: mov     rax, [rdi+rbx*8]
 * 00000001800B3106: mov     ecx, [r15+rax]
 * 00000001800B310A: cmp     cs:dword_1801C95BC, ecx
 * 00000001800B3110: jle     loc_1800B31E9
 * 00000001800B3116: lea     rcx, dword_1801C95BC
 * 00000001800B311D: call    sub_18000C8D0
 * 00000001800B3122: cmp     cs:dword_1801C95BC, r14d
 * 00000001800B3129: jnz     loc_1800B31E9
 * 00000001800B312F: lea     rax, unk_180145F00
 * 00000001800B3136: mov     qword ptr [rbp+9E40h+var_9090], rax
 * 00000001800B313D: lea     rax, unk_180147918
 * 00000001800B3144: mov     qword ptr [rbp+9E40h+var_9090+8], rax
 * 00000001800B314B: movups  xmm7, [rbp+9E40h+var_9090]
 * 00000001800B3152: mov     dword ptr [rbp+9E40h+var_7080], esi
 * 00000001800B3158: mov     dword ptr [rbp+9E40h+var_7080+4], esi
 * 00000001800B315E: movups  xmm6, [rbp+9E40h+var_7080]
 * 00000001800B3165: call    sub_1800A5D74
 * 00000001800B316A: mov     r8, rax
 * 00000001800B316D: mov     r9d, r12d
 * 00000001800B3170: mov     edx, 132h
 * 00000001800B3175: lea     rcx, [rbp+9E40h+var_1330]
 * 00000001800B317C: call    sub_180073668
 * 00000001800B3181: nop
 * 00000001800B3182: mov     r8, rax
 * 00000001800B3185: mov     rdx, r13
 * 00000001800B3188: lea     rcx, [rbp+9E40h+var_1350]
 * 00000001800B318F: call    sub_18001B518
 * 00000001800B3194: nop
 * 00000001800B3195: lea     r8, aVertex; "/Vertex"
 * 00000001800B319C: mov     rdx, rax
 * 00000001800B319F: lea     rcx, [rbp+9E40h+var_4D30]
 * 00000001800B31A6: call    sub_18001B448
 * 00000001800B31AB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B31B0: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B31B5: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B31BA: mov     rcx, rax
 * 00000001800B31BD: call    sub_18007370C
 * 00000001800B31C2: nop
 * 00000001800B31C3: lea     rcx, [rbp+9E40h+var_1350]
 * 00000001800B31CA: call    sub_180010F20
 * 00000001800B31CF: nop
 * 00000001800B31D0: lea     rcx, [rbp+9E40h+var_1330]
 * 00000001800B31D7: call    sub_180010F20
 * 00000001800B31DC: nop
 * 00000001800B31DD: lea     rcx, dword_1801C95BC
 * 00000001800B31E4: call    _Init_thread_footer
 * 00000001800B31E9: mov     rax, [rdi+rbx*8]
 * 00000001800B31ED: mov     ecx, [r15+rax]
 * 00000001800B31F1: cmp     cs:dword_1801C95C0, ecx
 * 00000001800B31F7: jle     loc_1800B32D0
 * 00000001800B31FD: lea     rcx, dword_1801C95C0
 * 00000001800B3204: call    sub_18000C8D0
 * 00000001800B3209: cmp     cs:dword_1801C95C0, r14d
 * 00000001800B3210: jnz     loc_1800B32D0
 * 00000001800B3216: lea     rax, unk_180145F00
 * 00000001800B321D: mov     qword ptr [rbp+9E40h+var_9080], rax
 * 00000001800B3224: lea     rax, unk_180147918
 * 00000001800B322B: mov     qword ptr [rbp+9E40h+var_9080+8], rax
 * 00000001800B3232: movups  xmm7, [rbp+9E40h+var_9080]
 * 00000001800B3239: mov     dword ptr [rbp+9E40h+var_7060], esi
 * 00000001800B323F: mov     dword ptr [rbp+9E40h+var_7060+4], esi
 * 00000001800B3245: movups  xmm6, [rbp+9E40h+var_7060]
 * 00000001800B324C: call    sub_1800A5D74
 * 00000001800B3251: mov     r8, rax
 * 00000001800B3254: mov     r9d, r12d
 * 00000001800B3257: mov     edx, 138h
 * 00000001800B325C: lea     rcx, [rbp+9E40h+var_12D0]
 * 00000001800B3263: call    sub_180073668
 * 00000001800B3268: nop
 * 00000001800B3269: mov     r8, rax
 * 00000001800B326C: mov     rdx, r13
 * 00000001800B326F: lea     rcx, [rbp+9E40h+var_12F0]
 * 00000001800B3276: call    sub_18001B518
 * 00000001800B327B: nop
 * 00000001800B327C: lea     r8, aVertex; "/Vertex"
 * 00000001800B3283: mov     rdx, rax
 * 00000001800B3286: lea     rcx, [rbp+9E40h+var_4D10]
 * 00000001800B328D: call    sub_18001B448
 * 00000001800B3292: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3297: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B329C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B32A1: mov     rcx, rax
 * 00000001800B32A4: call    sub_18007370C
 * 00000001800B32A9: nop
 * 00000001800B32AA: lea     rcx, [rbp+9E40h+var_12F0]
 * 00000001800B32B1: call    sub_180010F20
 * 00000001800B32B6: nop
 * 00000001800B32B7: lea     rcx, [rbp+9E40h+var_12D0]
 * 00000001800B32BE: call    sub_180010F20
 * 00000001800B32C3: nop
 * 00000001800B32C4: lea     rcx, dword_1801C95C0
 * 00000001800B32CB: call    _Init_thread_footer
 * 00000001800B32D0: mov     rax, [rdi+rbx*8]
 * 00000001800B32D4: mov     ecx, [r15+rax]
 * 00000001800B32D8: cmp     cs:dword_1801C95C4, ecx
 * 00000001800B32DE: jle     loc_1800B33B7
 * 00000001800B32E4: lea     rcx, dword_1801C95C4
 * 00000001800B32EB: call    sub_18000C8D0
 * 00000001800B32F0: cmp     cs:dword_1801C95C4, r14d
 * 00000001800B32F7: jnz     loc_1800B33B7
 * 00000001800B32FD: lea     rax, unk_180145F00
 * 00000001800B3304: mov     qword ptr [rbp+9E40h+var_9070], rax
 * 00000001800B330B: lea     rax, unk_180147918
 * 00000001800B3312: mov     qword ptr [rbp+9E40h+var_9070+8], rax
 * 00000001800B3319: movups  xmm7, [rbp+9E40h+var_9070]
 * 00000001800B3320: mov     dword ptr [rbp+9E40h+var_7040], esi
 * 00000001800B3326: mov     dword ptr [rbp+9E40h+var_7040+4], esi
 * 00000001800B332C: movups  xmm6, [rbp+9E40h+var_7040]
 * 00000001800B3333: call    sub_1800A5D74
 * 00000001800B3338: mov     r8, rax
 * 00000001800B333B: mov     r9d, r12d
 * 00000001800B333E: mov     edx, 13Ah
 * 00000001800B3343: lea     rcx, [rbp+9E40h+var_1270]
 * 00000001800B334A: call    sub_180073668
 * 00000001800B334F: nop
 * 00000001800B3350: mov     r8, rax
 * 00000001800B3353: mov     rdx, r13
 * 00000001800B3356: lea     rcx, [rbp+9E40h+var_1290]
 * 00000001800B335D: call    sub_18001B518
 * 00000001800B3362: nop
 * 00000001800B3363: lea     r8, aVertex; "/Vertex"
 * 00000001800B336A: mov     rdx, rax
 * 00000001800B336D: lea     rcx, [rbp+9E40h+var_4CF0]
 * 00000001800B3374: call    sub_18001B448
 * 00000001800B3379: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B337E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3383: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3388: mov     rcx, rax
 * 00000001800B338B: call    sub_18007370C
 * 00000001800B3390: nop
 * 00000001800B3391: lea     rcx, [rbp+9E40h+var_1290]
 * 00000001800B3398: call    sub_180010F20
 * 00000001800B339D: nop
 * 00000001800B339E: lea     rcx, [rbp+9E40h+var_1270]
 * 00000001800B33A5: call    sub_180010F20
 * 00000001800B33AA: nop
 * 00000001800B33AB: lea     rcx, dword_1801C95C4
 * 00000001800B33B2: call    _Init_thread_footer
 * 00000001800B33B7: mov     rax, [rdi+rbx*8]
 * 00000001800B33BB: mov     ecx, [r15+rax]
 * 00000001800B33BF: cmp     cs:dword_1801C95C8, ecx
 * 00000001800B33C5: jle     loc_1800B349E
 * 00000001800B33CB: lea     rcx, dword_1801C95C8
 * 00000001800B33D2: call    sub_18000C8D0
 * 00000001800B33D7: cmp     cs:dword_1801C95C8, r14d
 * 00000001800B33DE: jnz     loc_1800B349E
 * 00000001800B33E4: lea     rax, unk_180143780
 * 00000001800B33EB: mov     qword ptr [rbp+9E40h+var_9060], rax
 * 00000001800B33F2: lea     rax, unk_1801447D0
 * 00000001800B33F9: mov     qword ptr [rbp+9E40h+var_9060+8], rax
 * 00000001800B3400: movups  xmm7, [rbp+9E40h+var_9060]
 * 00000001800B3407: mov     dword ptr [rbp+9E40h+var_7020], esi
 * 00000001800B340D: mov     dword ptr [rbp+9E40h+var_7020+4], esi
 * 00000001800B3413: movups  xmm6, [rbp+9E40h+var_7020]
 * 00000001800B341A: call    sub_1800A5D74
 * 00000001800B341F: mov     r8, rax
 * 00000001800B3422: mov     r9d, r12d
 * 00000001800B3425: mov     edx, 140h
 * 00000001800B342A: lea     rcx, [rbp+9E40h+var_1210]
 * 00000001800B3431: call    sub_180073668
 * 00000001800B3436: nop
 * 00000001800B3437: mov     r8, rax
 * 00000001800B343A: mov     rdx, r13
 * 00000001800B343D: lea     rcx, [rbp+9E40h+var_1230]
 * 00000001800B3444: call    sub_18001B518
 * 00000001800B3449: nop
 * 00000001800B344A: lea     r8, aVertex; "/Vertex"
 * 00000001800B3451: mov     rdx, rax
 * 00000001800B3454: lea     rcx, [rbp+9E40h+var_4CD0]
 * 00000001800B345B: call    sub_18001B448
 * 00000001800B3460: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3465: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B346A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B346F: mov     rcx, rax
 * 00000001800B3472: call    sub_18007370C
 * 00000001800B3477: nop
 * 00000001800B3478: lea     rcx, [rbp+9E40h+var_1230]
 * 00000001800B347F: call    sub_180010F20
 * 00000001800B3484: nop
 * 00000001800B3485: lea     rcx, [rbp+9E40h+var_1210]
 * 00000001800B348C: call    sub_180010F20
 * 00000001800B3491: nop
 * 00000001800B3492: lea     rcx, dword_1801C95C8
 * 00000001800B3499: call    _Init_thread_footer
 * 00000001800B349E: mov     rax, [rdi+rbx*8]
 * 00000001800B34A2: mov     ecx, [r15+rax]
 * 00000001800B34A6: cmp     cs:dword_1801C95CC, ecx
 * 00000001800B34AC: jle     loc_1800B3585
 * 00000001800B34B2: lea     rcx, dword_1801C95CC
 * 00000001800B34B9: call    sub_18000C8D0
 * 00000001800B34BE: cmp     cs:dword_1801C95CC, r14d
 * 00000001800B34C5: jnz     loc_1800B3585
 * 00000001800B34CB: lea     rax, unk_180143780
 * 00000001800B34D2: mov     qword ptr [rbp+9E40h+var_9050], rax
 * 00000001800B34D9: lea     rax, unk_1801447D0
 * 00000001800B34E0: mov     qword ptr [rbp+9E40h+var_9050+8], rax
 * 00000001800B34E7: movups  xmm7, [rbp+9E40h+var_9050]
 * 00000001800B34EE: mov     dword ptr [rbp+9E40h+var_7000], esi
 * 00000001800B34F4: mov     dword ptr [rbp+9E40h+var_7000+4], esi
 * 00000001800B34FA: movups  xmm6, [rbp+9E40h+var_7000]
 * 00000001800B3501: call    sub_1800A5D74
 * 00000001800B3506: mov     r8, rax
 * 00000001800B3509: mov     r9d, r12d
 * 00000001800B350C: mov     edx, 142h
 * 00000001800B3511: lea     rcx, [rbp+9E40h+var_11B0]
 * 00000001800B3518: call    sub_180073668
 * 00000001800B351D: nop
 * 00000001800B351E: mov     r8, rax
 * 00000001800B3521: mov     rdx, r13
 * 00000001800B3524: lea     rcx, [rbp+9E40h+var_11D0]
 * 00000001800B352B: call    sub_18001B518
 * 00000001800B3530: nop
 * 00000001800B3531: lea     r8, aVertex; "/Vertex"
 * 00000001800B3538: mov     rdx, rax
 * 00000001800B353B: lea     rcx, [rbp+9E40h+var_4CB0]
 * 00000001800B3542: call    sub_18001B448
 * 00000001800B3547: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B354C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3551: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3556: mov     rcx, rax
 * 00000001800B3559: call    sub_18007370C
 * 00000001800B355E: nop
 * 00000001800B355F: lea     rcx, [rbp+9E40h+var_11D0]
 * 00000001800B3566: call    sub_180010F20
 * 00000001800B356B: nop
 * 00000001800B356C: lea     rcx, [rbp+9E40h+var_11B0]
 * 00000001800B3573: call    sub_180010F20
 * 00000001800B3578: nop
 * 00000001800B3579: lea     rcx, dword_1801C95CC
 * 00000001800B3580: call    _Init_thread_footer
 * 00000001800B3585: mov     rax, [rdi+rbx*8]
 * 00000001800B3589: mov     ecx, [r15+rax]
 * 00000001800B358D: cmp     cs:dword_1801C95D0, ecx
 * 00000001800B3593: jle     loc_1800B366C
 * 00000001800B3599: lea     rcx, dword_1801C95D0
 * 00000001800B35A0: call    sub_18000C8D0
 * 00000001800B35A5: cmp     cs:dword_1801C95D0, r14d
 * 00000001800B35AC: jnz     loc_1800B366C
 * 00000001800B35B2: lea     rax, unk_180143780
 * 00000001800B35B9: mov     qword ptr [rbp+9E40h+var_9040], rax
 * 00000001800B35C0: lea     rax, unk_1801447D0
 * 00000001800B35C7: mov     qword ptr [rbp+9E40h+var_9040+8], rax
 * 00000001800B35CE: movups  xmm7, [rbp+9E40h+var_9040]
 * 00000001800B35D5: mov     dword ptr [rbp+9E40h+var_6FE0], esi
 * 00000001800B35DB: mov     dword ptr [rbp+9E40h+var_6FE0+4], esi
 * 00000001800B35E1: movups  xmm6, [rbp+9E40h+var_6FE0]
 * 00000001800B35E8: call    sub_1800A5D74
 * 00000001800B35ED: mov     r8, rax
 * 00000001800B35F0: mov     r9d, r12d
 * 00000001800B35F3: mov     edx, 148h
 * 00000001800B35F8: lea     rcx, [rbp+9E40h+var_1150]
 * 00000001800B35FF: call    sub_180073668
 * 00000001800B3604: nop
 * 00000001800B3605: mov     r8, rax
 * 00000001800B3608: mov     rdx, r13
 * 00000001800B360B: lea     rcx, [rbp+9E40h+var_1170]
 * 00000001800B3612: call    sub_18001B518
 * 00000001800B3617: nop
 * 00000001800B3618: lea     r8, aVertex; "/Vertex"
 * 00000001800B361F: mov     rdx, rax
 * 00000001800B3622: lea     rcx, [rbp+9E40h+var_4C90]
 * 00000001800B3629: call    sub_18001B448
 * 00000001800B362E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3633: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3638: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B363D: mov     rcx, rax
 * 00000001800B3640: call    sub_18007370C
 * 00000001800B3645: nop
 * 00000001800B3646: lea     rcx, [rbp+9E40h+var_1170]
 * 00000001800B364D: call    sub_180010F20
 * 00000001800B3652: nop
 * 00000001800B3653: lea     rcx, [rbp+9E40h+var_1150]
 * 00000001800B365A: call    sub_180010F20
 * 00000001800B365F: nop
 * 00000001800B3660: lea     rcx, dword_1801C95D0
 * 00000001800B3667: call    _Init_thread_footer
 * 00000001800B366C: mov     rax, [rdi+rbx*8]
 * 00000001800B3670: mov     ecx, [r15+rax]
 * 00000001800B3674: cmp     cs:dword_1801C95D4, ecx
 * 00000001800B367A: jle     loc_1800B3753
 * 00000001800B3680: lea     rcx, dword_1801C95D4
 * 00000001800B3687: call    sub_18000C8D0
 * 00000001800B368C: cmp     cs:dword_1801C95D4, r14d
 * 00000001800B3693: jnz     loc_1800B3753
 * 00000001800B3699: lea     rax, unk_180143780
 * 00000001800B36A0: mov     qword ptr [rbp+9E40h+var_9030], rax
 * 00000001800B36A7: lea     rax, unk_1801447D0
 * 00000001800B36AE: mov     qword ptr [rbp+9E40h+var_9030+8], rax
 * 00000001800B36B5: movups  xmm7, [rbp+9E40h+var_9030]
 * 00000001800B36BC: mov     dword ptr [rbp+9E40h+var_6FC0], esi
 * 00000001800B36C2: mov     dword ptr [rbp+9E40h+var_6FC0+4], esi
 * 00000001800B36C8: movups  xmm6, [rbp+9E40h+var_6FC0]
 * 00000001800B36CF: call    sub_1800A5D74
 * 00000001800B36D4: mov     r8, rax
 * 00000001800B36D7: mov     r9d, r12d
 * 00000001800B36DA: mov     edx, 14Ah
 * 00000001800B36DF: lea     rcx, [rbp+9E40h+var_10F0]
 * 00000001800B36E6: call    sub_180073668
 * 00000001800B36EB: nop
 * 00000001800B36EC: mov     r8, rax
 * 00000001800B36EF: mov     rdx, r13
 * 00000001800B36F2: lea     rcx, [rbp+9E40h+var_1110]
 * 00000001800B36F9: call    sub_18001B518
 * 00000001800B36FE: nop
 * 00000001800B36FF: lea     r8, aVertex; "/Vertex"
 * 00000001800B3706: mov     rdx, rax
 * 00000001800B3709: lea     rcx, [rbp+9E40h+var_4C70]
 * 00000001800B3710: call    sub_18001B448
 * 00000001800B3715: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B371A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B371F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3724: mov     rcx, rax
 * 00000001800B3727: call    sub_18007370C
 * 00000001800B372C: nop
 * 00000001800B372D: lea     rcx, [rbp+9E40h+var_1110]
 * 00000001800B3734: call    sub_180010F20
 * 00000001800B3739: nop
 * 00000001800B373A: lea     rcx, [rbp+9E40h+var_10F0]
 * 00000001800B3741: call    sub_180010F20
 * 00000001800B3746: nop
 * 00000001800B3747: lea     rcx, dword_1801C95D4
 * 00000001800B374E: call    _Init_thread_footer
 * 00000001800B3753: mov     rax, [rdi+rbx*8]
 * 00000001800B3757: mov     ecx, [r15+rax]
 * 00000001800B375B: cmp     cs:dword_1801C95D8, ecx
 * 00000001800B3761: jle     loc_1800B383A
 * 00000001800B3767: lea     rcx, dword_1801C95D8
 * 00000001800B376E: call    sub_18000C8D0
 * 00000001800B3773: cmp     cs:dword_1801C95D8, r14d
 * 00000001800B377A: jnz     loc_1800B383A
 * 00000001800B3780: lea     rax, unk_180143780
 * 00000001800B3787: mov     qword ptr [rbp+9E40h+var_9020], rax
 * 00000001800B378E: lea     rax, unk_1801447D0
 * 00000001800B3795: mov     qword ptr [rbp+9E40h+var_9020+8], rax
 * 00000001800B379C: movups  xmm7, [rbp+9E40h+var_9020]
 * 00000001800B37A3: mov     dword ptr [rbp+9E40h+var_6FA0], esi
 * 00000001800B37A9: mov     dword ptr [rbp+9E40h+var_6FA0+4], esi
 * 00000001800B37AF: movups  xmm6, [rbp+9E40h+var_6FA0]
 * 00000001800B37B6: call    sub_1800A5D74
 * 00000001800B37BB: mov     r8, rax
 * 00000001800B37BE: mov     r9d, r12d
 * 00000001800B37C1: mov     edx, 150h
 * 00000001800B37C6: lea     rcx, [rbp+9E40h+var_1090]
 * 00000001800B37CD: call    sub_180073668
 * 00000001800B37D2: nop
 * 00000001800B37D3: mov     r8, rax
 * 00000001800B37D6: mov     rdx, r13
 * 00000001800B37D9: lea     rcx, [rbp+9E40h+var_10B0]
 * 00000001800B37E0: call    sub_18001B518
 * 00000001800B37E5: nop
 * 00000001800B37E6: lea     r8, aVertex; "/Vertex"
 * 00000001800B37ED: mov     rdx, rax
 * 00000001800B37F0: lea     rcx, [rbp+9E40h+var_4C50]
 * 00000001800B37F7: call    sub_18001B448
 * 00000001800B37FC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3801: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3806: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B380B: mov     rcx, rax
 * 00000001800B380E: call    sub_18007370C
 * 00000001800B3813: nop
 * 00000001800B3814: lea     rcx, [rbp+9E40h+var_10B0]
 * 00000001800B381B: call    sub_180010F20
 * 00000001800B3820: nop
 * 00000001800B3821: lea     rcx, [rbp+9E40h+var_1090]
 * 00000001800B3828: call    sub_180010F20
 * 00000001800B382D: nop
 * 00000001800B382E: lea     rcx, dword_1801C95D8
 * 00000001800B3835: call    _Init_thread_footer
 * 00000001800B383A: mov     rax, [rdi+rbx*8]
 * 00000001800B383E: mov     ecx, [r15+rax]
 * 00000001800B3842: cmp     cs:dword_1801C95DC, ecx
 * 00000001800B3848: jle     loc_1800B3921
 * 00000001800B384E: lea     rcx, dword_1801C95DC
 * 00000001800B3855: call    sub_18000C8D0
 * 00000001800B385A: cmp     cs:dword_1801C95DC, r14d
 * 00000001800B3861: jnz     loc_1800B3921
 * 00000001800B3867: lea     rax, unk_180143780
 * 00000001800B386E: mov     qword ptr [rbp+9E40h+var_9010], rax
 * 00000001800B3875: lea     rax, unk_1801447D0
 * 00000001800B387C: mov     qword ptr [rbp+9E40h+var_9010+8], rax
 * 00000001800B3883: movups  xmm7, [rbp+9E40h+var_9010]
 * 00000001800B388A: mov     dword ptr [rbp+9E40h+var_6F80], esi
 * 00000001800B3890: mov     dword ptr [rbp+9E40h+var_6F80+4], esi
 * 00000001800B3896: movups  xmm6, [rbp+9E40h+var_6F80]
 * 00000001800B389D: call    sub_1800A5D74
 * 00000001800B38A2: mov     r8, rax
 * 00000001800B38A5: mov     r9d, r12d
 * 00000001800B38A8: mov     edx, 152h
 * 00000001800B38AD: lea     rcx, [rbp+9E40h+var_1030]
 * 00000001800B38B4: call    sub_180073668
 * 00000001800B38B9: nop
 * 00000001800B38BA: mov     r8, rax
 * 00000001800B38BD: mov     rdx, r13
 * 00000001800B38C0: lea     rcx, [rbp+9E40h+var_1050]
 * 00000001800B38C7: call    sub_18001B518
 * 00000001800B38CC: nop
 * 00000001800B38CD: lea     r8, aVertex; "/Vertex"
 * 00000001800B38D4: mov     rdx, rax
 * 00000001800B38D7: lea     rcx, [rbp+9E40h+var_4C30]
 * 00000001800B38DE: call    sub_18001B448
 * 00000001800B38E3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B38E8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B38ED: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B38F2: mov     rcx, rax
 * 00000001800B38F5: call    sub_18007370C
 * 00000001800B38FA: nop
 * 00000001800B38FB: lea     rcx, [rbp+9E40h+var_1050]
 * 00000001800B3902: call    sub_180010F20
 * 00000001800B3907: nop
 * 00000001800B3908: lea     rcx, [rbp+9E40h+var_1030]
 * 00000001800B390F: call    sub_180010F20
 * 00000001800B3914: nop
 * 00000001800B3915: lea     rcx, dword_1801C95DC
 * 00000001800B391C: call    _Init_thread_footer
 * 00000001800B3921: mov     rax, [rdi+rbx*8]
 * 00000001800B3925: mov     ecx, [r15+rax]
 * 00000001800B3929: cmp     cs:dword_1801C95E0, ecx
 * 00000001800B392F: jle     loc_1800B3A08
 * 00000001800B3935: lea     rcx, dword_1801C95E0
 * 00000001800B393C: call    sub_18000C8D0
 * 00000001800B3941: cmp     cs:dword_1801C95E0, r14d
 * 00000001800B3948: jnz     loc_1800B3A08
 * 00000001800B394E: lea     rax, unk_180143780
 * 00000001800B3955: mov     qword ptr [rbp+9E40h+var_9000], rax
 * 00000001800B395C: lea     rax, unk_1801447D0
 * 00000001800B3963: mov     qword ptr [rbp+9E40h+var_9000+8], rax
 * 00000001800B396A: movups  xmm7, [rbp+9E40h+var_9000]
 * 00000001800B3971: mov     dword ptr [rbp+9E40h+var_6F60], esi
 * 00000001800B3977: mov     dword ptr [rbp+9E40h+var_6F60+4], esi
 * 00000001800B397D: movups  xmm6, [rbp+9E40h+var_6F60]
 * 00000001800B3984: call    sub_1800A5D74
 * 00000001800B3989: mov     r8, rax
 * 00000001800B398C: mov     r9d, r12d
 * 00000001800B398F: mov     edx, 158h
 * 00000001800B3994: lea     rcx, [rbp+9E40h+var_FD0]
 * 00000001800B399B: call    sub_180073668
 * 00000001800B39A0: nop
 * 00000001800B39A1: mov     r8, rax
 * 00000001800B39A4: mov     rdx, r13
 * 00000001800B39A7: lea     rcx, [rbp+9E40h+var_FF0]
 * 00000001800B39AE: call    sub_18001B518
 * 00000001800B39B3: nop
 * 00000001800B39B4: lea     r8, aVertex; "/Vertex"
 * 00000001800B39BB: mov     rdx, rax
 * 00000001800B39BE: lea     rcx, [rbp+9E40h+var_4C10]
 * 00000001800B39C5: call    sub_18001B448
 * 00000001800B39CA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B39CF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B39D4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B39D9: mov     rcx, rax
 * 00000001800B39DC: call    sub_18007370C
 * 00000001800B39E1: nop
 * 00000001800B39E2: lea     rcx, [rbp+9E40h+var_FF0]
 * 00000001800B39E9: call    sub_180010F20
 * 00000001800B39EE: nop
 * 00000001800B39EF: lea     rcx, [rbp+9E40h+var_FD0]
 * 00000001800B39F6: call    sub_180010F20
 * 00000001800B39FB: nop
 * 00000001800B39FC: lea     rcx, dword_1801C95E0
 * 00000001800B3A03: call    _Init_thread_footer
 * 00000001800B3A08: mov     rax, [rdi+rbx*8]
 * 00000001800B3A0C: mov     ecx, [r15+rax]
 * 00000001800B3A10: cmp     cs:dword_1801C95E4, ecx
 * 00000001800B3A16: jle     loc_1800B3AEF
 * 00000001800B3A1C: lea     rcx, dword_1801C95E4
 * 00000001800B3A23: call    sub_18000C8D0
 * 00000001800B3A28: cmp     cs:dword_1801C95E4, r14d
 * 00000001800B3A2F: jnz     loc_1800B3AEF
 * 00000001800B3A35: lea     rax, unk_180143780
 * 00000001800B3A3C: mov     qword ptr [rbp+9E40h+var_8FF0], rax
 * 00000001800B3A43: lea     rax, unk_1801447D0
 * 00000001800B3A4A: mov     qword ptr [rbp+9E40h+var_8FF0+8], rax
 * 00000001800B3A51: movups  xmm7, [rbp+9E40h+var_8FF0]
 * 00000001800B3A58: mov     dword ptr [rbp+9E40h+var_6F40], esi
 * 00000001800B3A5E: mov     dword ptr [rbp+9E40h+var_6F40+4], esi
 * 00000001800B3A64: movups  xmm6, [rbp+9E40h+var_6F40]
 * 00000001800B3A6B: call    sub_1800A5D74
 * 00000001800B3A70: mov     r8, rax
 * 00000001800B3A73: mov     r9d, r12d
 * 00000001800B3A76: mov     edx, 15Ah
 * 00000001800B3A7B: lea     rcx, [rbp+9E40h+var_F70]
 * 00000001800B3A82: call    sub_180073668
 * 00000001800B3A87: nop
 * 00000001800B3A88: mov     r8, rax
 * 00000001800B3A8B: mov     rdx, r13
 * 00000001800B3A8E: lea     rcx, [rbp+9E40h+var_F90]
 * 00000001800B3A95: call    sub_18001B518
 * 00000001800B3A9A: nop
 * 00000001800B3A9B: lea     r8, aVertex; "/Vertex"
 * 00000001800B3AA2: mov     rdx, rax
 * 00000001800B3AA5: lea     rcx, [rbp+9E40h+var_4BF0]
 * 00000001800B3AAC: call    sub_18001B448
 * 00000001800B3AB1: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3AB6: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3ABB: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3AC0: mov     rcx, rax
 * 00000001800B3AC3: call    sub_18007370C
 * 00000001800B3AC8: nop
 * 00000001800B3AC9: lea     rcx, [rbp+9E40h+var_F90]
 * 00000001800B3AD0: call    sub_180010F20
 * 00000001800B3AD5: nop
 * 00000001800B3AD6: lea     rcx, [rbp+9E40h+var_F70]
 * 00000001800B3ADD: call    sub_180010F20
 * 00000001800B3AE2: nop
 * 00000001800B3AE3: lea     rcx, dword_1801C95E4
 * 00000001800B3AEA: call    _Init_thread_footer
 * 00000001800B3AEF: mov     rax, [rdi+rbx*8]
 * 00000001800B3AF3: mov     ecx, [r15+rax]
 * 00000001800B3AF7: cmp     cs:dword_1801C95E8, ecx
 * 00000001800B3AFD: jle     loc_1800B3BD6
 * 00000001800B3B03: lea     rcx, dword_1801C95E8
 * 00000001800B3B0A: call    sub_18000C8D0
 * 00000001800B3B0F: cmp     cs:dword_1801C95E8, r14d
 * 00000001800B3B16: jnz     loc_1800B3BD6
 * 00000001800B3B1C: lea     rax, unk_1801411F0
 * 00000001800B3B23: mov     qword ptr [rbp+9E40h+var_8FE0], rax
 * 00000001800B3B2A: lea     rax, unk_180142C40
 * 00000001800B3B31: mov     qword ptr [rbp+9E40h+var_8FE0+8], rax
 * 00000001800B3B38: movups  xmm7, [rbp+9E40h+var_8FE0]
 * 00000001800B3B3F: mov     dword ptr [rbp+9E40h+var_6F20], esi
 * 00000001800B3B45: mov     dword ptr [rbp+9E40h+var_6F20+4], esi
 * 00000001800B3B4B: movups  xmm6, [rbp+9E40h+var_6F20]
 * 00000001800B3B52: call    sub_1800A5D74
 * 00000001800B3B57: mov     r8, rax
 * 00000001800B3B5A: mov     r9d, r12d
 * 00000001800B3B5D: mov     edx, 160h
 * 00000001800B3B62: lea     rcx, [rbp+9E40h+var_F10]
 * 00000001800B3B69: call    sub_180073668
 * 00000001800B3B6E: nop
 * 00000001800B3B6F: mov     r8, rax
 * 00000001800B3B72: mov     rdx, r13
 * 00000001800B3B75: lea     rcx, [rbp+9E40h+var_F30]
 * 00000001800B3B7C: call    sub_18001B518
 * 00000001800B3B81: nop
 * 00000001800B3B82: lea     r8, aVertex; "/Vertex"
 * 00000001800B3B89: mov     rdx, rax
 * 00000001800B3B8C: lea     rcx, [rbp+9E40h+var_4BD0]
 * 00000001800B3B93: call    sub_18001B448
 * 00000001800B3B98: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3B9D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3BA2: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3BA7: mov     rcx, rax
 * 00000001800B3BAA: call    sub_18007370C
 * 00000001800B3BAF: nop
 * 00000001800B3BB0: lea     rcx, [rbp+9E40h+var_F30]
 * 00000001800B3BB7: call    sub_180010F20
 * 00000001800B3BBC: nop
 * 00000001800B3BBD: lea     rcx, [rbp+9E40h+var_F10]
 * 00000001800B3BC4: call    sub_180010F20
 * 00000001800B3BC9: nop
 * 00000001800B3BCA: lea     rcx, dword_1801C95E8
 * 00000001800B3BD1: call    _Init_thread_footer
 * 00000001800B3BD6: mov     rax, [rdi+rbx*8]
 * 00000001800B3BDA: mov     ecx, [r15+rax]
 * 00000001800B3BDE: cmp     cs:dword_1801C95EC, ecx
 * 00000001800B3BE4: jle     loc_1800B3CBD
 * 00000001800B3BEA: lea     rcx, dword_1801C95EC
 * 00000001800B3BF1: call    sub_18000C8D0
 * 00000001800B3BF6: cmp     cs:dword_1801C95EC, r14d
 * 00000001800B3BFD: jnz     loc_1800B3CBD
 * 00000001800B3C03: lea     rax, unk_1801411F0
 * 00000001800B3C0A: mov     qword ptr [rbp+9E40h+var_8FD0], rax
 * 00000001800B3C11: lea     rax, unk_180142C40
 * 00000001800B3C18: mov     qword ptr [rbp+9E40h+var_8FD0+8], rax
 * 00000001800B3C1F: movups  xmm7, [rbp+9E40h+var_8FD0]
 * 00000001800B3C26: mov     dword ptr [rbp+9E40h+var_6F00], esi
 * 00000001800B3C2C: mov     dword ptr [rbp+9E40h+var_6F00+4], esi
 * 00000001800B3C32: movups  xmm6, [rbp+9E40h+var_6F00]
 * 00000001800B3C39: call    sub_1800A5D74
 * 00000001800B3C3E: mov     r8, rax
 * 00000001800B3C41: mov     r9d, r12d
 * 00000001800B3C44: mov     edx, 162h
 * 00000001800B3C49: lea     rcx, [rbp+9E40h+var_EB0]
 * 00000001800B3C50: call    sub_180073668
 * 00000001800B3C55: nop
 * 00000001800B3C56: mov     r8, rax
 * 00000001800B3C59: mov     rdx, r13
 * 00000001800B3C5C: lea     rcx, [rbp+9E40h+var_ED0]
 * 00000001800B3C63: call    sub_18001B518
 * 00000001800B3C68: nop
 * 00000001800B3C69: lea     r8, aVertex; "/Vertex"
 * 00000001800B3C70: mov     rdx, rax
 * 00000001800B3C73: lea     rcx, [rbp+9E40h+var_4BB0]
 * 00000001800B3C7A: call    sub_18001B448
 * 00000001800B3C7F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3C84: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3C89: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3C8E: mov     rcx, rax
 * 00000001800B3C91: call    sub_18007370C
 * 00000001800B3C96: nop
 * 00000001800B3C97: lea     rcx, [rbp+9E40h+var_ED0]
 * 00000001800B3C9E: call    sub_180010F20
 * 00000001800B3CA3: nop
 * 00000001800B3CA4: lea     rcx, [rbp+9E40h+var_EB0]
 * 00000001800B3CAB: call    sub_180010F20
 * 00000001800B3CB0: nop
 * 00000001800B3CB1: lea     rcx, dword_1801C95EC
 * 00000001800B3CB8: call    _Init_thread_footer
 * 00000001800B3CBD: mov     rax, [rdi+rbx*8]
 * 00000001800B3CC1: mov     ecx, [r15+rax]
 * 00000001800B3CC5: cmp     cs:dword_1801C95F0, ecx
 * 00000001800B3CCB: jle     loc_1800B3DA4
 * 00000001800B3CD1: lea     rcx, dword_1801C95F0
 * 00000001800B3CD8: call    sub_18000C8D0
 * 00000001800B3CDD: cmp     cs:dword_1801C95F0, r14d
 * 00000001800B3CE4: jnz     loc_1800B3DA4
 * 00000001800B3CEA: lea     rax, unk_1801411F0
 * 00000001800B3CF1: mov     qword ptr [rbp+9E40h+var_8FC0], rax
 * 00000001800B3CF8: lea     rax, unk_180142C40
 * 00000001800B3CFF: mov     qword ptr [rbp+9E40h+var_8FC0+8], rax
 * 00000001800B3D06: movups  xmm7, [rbp+9E40h+var_8FC0]
 * 00000001800B3D0D: mov     dword ptr [rbp+9E40h+var_6EE0], esi
 * 00000001800B3D13: mov     dword ptr [rbp+9E40h+var_6EE0+4], esi
 * 00000001800B3D19: movups  xmm6, [rbp+9E40h+var_6EE0]
 * 00000001800B3D20: call    sub_1800A5D74
 * 00000001800B3D25: mov     r8, rax
 * 00000001800B3D28: mov     r9d, r12d
 * 00000001800B3D2B: mov     edx, 168h
 * 00000001800B3D30: lea     rcx, [rbp+9E40h+var_E50]
 * 00000001800B3D37: call    sub_180073668
 * 00000001800B3D3C: nop
 * 00000001800B3D3D: mov     r8, rax
 * 00000001800B3D40: mov     rdx, r13
 * 00000001800B3D43: lea     rcx, [rbp+9E40h+var_E70]
 * 00000001800B3D4A: call    sub_18001B518
 * 00000001800B3D4F: nop
 * 00000001800B3D50: lea     r8, aVertex; "/Vertex"
 * 00000001800B3D57: mov     rdx, rax
 * 00000001800B3D5A: lea     rcx, [rbp+9E40h+var_4B90]
 * 00000001800B3D61: call    sub_18001B448
 * 00000001800B3D66: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3D6B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3D70: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3D75: mov     rcx, rax
 * 00000001800B3D78: call    sub_18007370C
 * 00000001800B3D7D: nop
 * 00000001800B3D7E: lea     rcx, [rbp+9E40h+var_E70]
 * 00000001800B3D85: call    sub_180010F20
 * 00000001800B3D8A: nop
 * 00000001800B3D8B: lea     rcx, [rbp+9E40h+var_E50]
 * 00000001800B3D92: call    sub_180010F20
 * 00000001800B3D97: nop
 * 00000001800B3D98: lea     rcx, dword_1801C95F0
 * 00000001800B3D9F: call    _Init_thread_footer
 * 00000001800B3DA4: mov     rax, [rdi+rbx*8]
 * 00000001800B3DA8: mov     ecx, [r15+rax]
 * 00000001800B3DAC: cmp     cs:dword_1801C95F4, ecx
 * 00000001800B3DB2: jle     loc_1800B3E8B
 * 00000001800B3DB8: lea     rcx, dword_1801C95F4
 * 00000001800B3DBF: call    sub_18000C8D0
 * 00000001800B3DC4: cmp     cs:dword_1801C95F4, r14d
 * 00000001800B3DCB: jnz     loc_1800B3E8B
 * 00000001800B3DD1: lea     rax, unk_1801411F0
 * 00000001800B3DD8: mov     qword ptr [rbp+9E40h+var_8FB0], rax
 * 00000001800B3DDF: lea     rax, unk_180142C40
 * 00000001800B3DE6: mov     qword ptr [rbp+9E40h+var_8FB0+8], rax
 * 00000001800B3DED: movups  xmm7, [rbp+9E40h+var_8FB0]
 * 00000001800B3DF4: mov     dword ptr [rbp+9E40h+var_6EC0], esi
 * 00000001800B3DFA: mov     dword ptr [rbp+9E40h+var_6EC0+4], esi
 * 00000001800B3E00: movups  xmm6, [rbp+9E40h+var_6EC0]
 * 00000001800B3E07: call    sub_1800A5D74
 * 00000001800B3E0C: mov     r8, rax
 * 00000001800B3E0F: mov     r9d, r12d
 * 00000001800B3E12: mov     edx, 16Ah
 * 00000001800B3E17: lea     rcx, [rbp+9E40h+var_DF0]
 * 00000001800B3E1E: call    sub_180073668
 * 00000001800B3E23: nop
 * 00000001800B3E24: mov     r8, rax
 * 00000001800B3E27: mov     rdx, r13
 * 00000001800B3E2A: lea     rcx, [rbp+9E40h+var_E10]
 * 00000001800B3E31: call    sub_18001B518
 * 00000001800B3E36: nop
 * 00000001800B3E37: lea     r8, aVertex; "/Vertex"
 * 00000001800B3E3E: mov     rdx, rax
 * 00000001800B3E41: lea     rcx, [rbp+9E40h+var_4B70]
 * 00000001800B3E48: call    sub_18001B448
 * 00000001800B3E4D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3E52: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3E57: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3E5C: mov     rcx, rax
 * 00000001800B3E5F: call    sub_18007370C
 * 00000001800B3E64: nop
 * 00000001800B3E65: lea     rcx, [rbp+9E40h+var_E10]
 * 00000001800B3E6C: call    sub_180010F20
 * 00000001800B3E71: nop
 * 00000001800B3E72: lea     rcx, [rbp+9E40h+var_DF0]
 * 00000001800B3E79: call    sub_180010F20
 * 00000001800B3E7E: nop
 * 00000001800B3E7F: lea     rcx, dword_1801C95F4
 * 00000001800B3E86: call    _Init_thread_footer
 * 00000001800B3E8B: mov     rax, [rdi+rbx*8]
 * 00000001800B3E8F: mov     ecx, [r15+rax]
 * 00000001800B3E93: cmp     cs:dword_1801C95F8, ecx
 * 00000001800B3E99: jle     loc_1800B3F72
 * 00000001800B3E9F: lea     rcx, dword_1801C95F8
 * 00000001800B3EA6: call    sub_18000C8D0
 * 00000001800B3EAB: cmp     cs:dword_1801C95F8, r14d
 * 00000001800B3EB2: jnz     loc_1800B3F72
 * 00000001800B3EB8: lea     rax, unk_1801411F0
 * 00000001800B3EBF: mov     qword ptr [rbp+9E40h+var_8FA0], rax
 * 00000001800B3EC6: lea     rax, unk_180142C40
 * 00000001800B3ECD: mov     qword ptr [rbp+9E40h+var_8FA0+8], rax
 * 00000001800B3ED4: movups  xmm7, [rbp+9E40h+var_8FA0]
 * 00000001800B3EDB: mov     dword ptr [rbp+9E40h+var_6EA0], esi
 * 00000001800B3EE1: mov     dword ptr [rbp+9E40h+var_6EA0+4], esi
 * 00000001800B3EE7: movups  xmm6, [rbp+9E40h+var_6EA0]
 * 00000001800B3EEE: call    sub_1800A5D74
 * 00000001800B3EF3: mov     r8, rax
 * 00000001800B3EF6: mov     r9d, r12d
 * 00000001800B3EF9: mov     edx, 170h
 * 00000001800B3EFE: lea     rcx, [rbp+9E40h+var_D90]
 * 00000001800B3F05: call    sub_180073668
 * 00000001800B3F0A: nop
 * 00000001800B3F0B: mov     r8, rax
 * 00000001800B3F0E: mov     rdx, r13
 * 00000001800B3F11: lea     rcx, [rbp+9E40h+var_DB0]
 * 00000001800B3F18: call    sub_18001B518
 * 00000001800B3F1D: nop
 * 00000001800B3F1E: lea     r8, aVertex; "/Vertex"
 * 00000001800B3F25: mov     rdx, rax
 * 00000001800B3F28: lea     rcx, [rbp+9E40h+var_4B50]
 * 00000001800B3F2F: call    sub_18001B448
 * 00000001800B3F34: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B3F39: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B3F3E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B3F43: mov     rcx, rax
 * 00000001800B3F46: call    sub_18007370C
 * 00000001800B3F4B: nop
 * 00000001800B3F4C: lea     rcx, [rbp+9E40h+var_DB0]
 * 00000001800B3F53: call    sub_180010F20
 * 00000001800B3F58: nop
 * 00000001800B3F59: lea     rcx, [rbp+9E40h+var_D90]
 * 00000001800B3F60: call    sub_180010F20
 * 00000001800B3F65: nop
 * 00000001800B3F66: lea     rcx, dword_1801C95F8
 * 00000001800B3F6D: call    _Init_thread_footer
 * 00000001800B3F72: mov     rax, [rdi+rbx*8]
 * 00000001800B3F76: mov     ecx, [r15+rax]
 * 00000001800B3F7A: cmp     cs:dword_1801C95FC, ecx
 * 00000001800B3F80: jle     loc_1800B4059
 * 00000001800B3F86: lea     rcx, dword_1801C95FC
 * 00000001800B3F8D: call    sub_18000C8D0
 * 00000001800B3F92: cmp     cs:dword_1801C95FC, r14d
 * 00000001800B3F99: jnz     loc_1800B4059
 * 00000001800B3F9F: lea     rax, unk_1801411F0
 * 00000001800B3FA6: mov     qword ptr [rbp+9E40h+var_8D60], rax
 * 00000001800B3FAD: lea     rax, unk_180142C40
 * 00000001800B3FB4: mov     qword ptr [rbp+9E40h+var_8D60+8], rax
 * 00000001800B3FBB: movups  xmm7, [rbp+9E40h+var_8D60]
 * 00000001800B3FC2: mov     dword ptr [rbp+9E40h+var_6E80], esi
 * 00000001800B3FC8: mov     dword ptr [rbp+9E40h+var_6E80+4], esi
 * 00000001800B3FCE: movups  xmm6, [rbp+9E40h+var_6E80]
 * 00000001800B3FD5: call    sub_1800A5D74
 * 00000001800B3FDA: mov     r8, rax
 * 00000001800B3FDD: mov     r9d, r12d
 * 00000001800B3FE0: mov     edx, 172h
 * 00000001800B3FE5: lea     rcx, [rbp+9E40h+var_D30]
 * 00000001800B3FEC: call    sub_180073668
 * 00000001800B3FF1: nop
 * 00000001800B3FF2: mov     r8, rax
 * 00000001800B3FF5: mov     rdx, r13
 * 00000001800B3FF8: lea     rcx, [rbp+9E40h+var_D50]
 * 00000001800B3FFF: call    sub_18001B518
 * 00000001800B4004: nop
 * 00000001800B4005: lea     r8, aVertex; "/Vertex"
 * 00000001800B400C: mov     rdx, rax
 * 00000001800B400F: lea     rcx, [rbp+9E40h+var_4B30]
 * 00000001800B4016: call    sub_18001B448
 * 00000001800B401B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4020: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4025: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B402A: mov     rcx, rax
 * 00000001800B402D: call    sub_18007370C
 * 00000001800B4032: nop
 * 00000001800B4033: lea     rcx, [rbp+9E40h+var_D50]
 * 00000001800B403A: call    sub_180010F20
 * 00000001800B403F: nop
 * 00000001800B4040: lea     rcx, [rbp+9E40h+var_D30]
 * 00000001800B4047: call    sub_180010F20
 * 00000001800B404C: nop
 * 00000001800B404D: lea     rcx, dword_1801C95FC
 * 00000001800B4054: call    _Init_thread_footer
 * 00000001800B4059: mov     rax, [rdi+rbx*8]
 * 00000001800B405D: mov     ecx, [r15+rax]
 * 00000001800B4061: cmp     cs:dword_1801C9600, ecx
 * 00000001800B4067: jle     loc_1800B4140
 * 00000001800B406D: lea     rcx, dword_1801C9600
 * 00000001800B4074: call    sub_18000C8D0
 * 00000001800B4079: cmp     cs:dword_1801C9600, r14d
 * 00000001800B4080: jnz     loc_1800B4140
 * 00000001800B4086: lea     rax, unk_1801411F0
 * 00000001800B408D: mov     qword ptr [rbp+9E40h+var_8F80], rax
 * 00000001800B4094: lea     rax, unk_180142C40
 * 00000001800B409B: mov     qword ptr [rbp+9E40h+var_8F80+8], rax
 * 00000001800B40A2: movups  xmm7, [rbp+9E40h+var_8F80]
 * 00000001800B40A9: mov     dword ptr [rbp+9E40h+var_6E60], esi
 * 00000001800B40AF: mov     dword ptr [rbp+9E40h+var_6E60+4], esi
 * 00000001800B40B5: movups  xmm6, [rbp+9E40h+var_6E60]
 * 00000001800B40BC: call    sub_1800A5D74
 * 00000001800B40C1: mov     r8, rax
 * 00000001800B40C4: mov     r9d, r12d
 * 00000001800B40C7: mov     edx, 178h
 * 00000001800B40CC: lea     rcx, [rbp+9E40h+var_CD0]
 * 00000001800B40D3: call    sub_180073668
 * 00000001800B40D8: nop
 * 00000001800B40D9: mov     r8, rax
 * 00000001800B40DC: mov     rdx, r13
 * 00000001800B40DF: lea     rcx, [rbp+9E40h+var_CF0]
 * 00000001800B40E6: call    sub_18001B518
 * 00000001800B40EB: nop
 * 00000001800B40EC: lea     r8, aVertex; "/Vertex"
 * 00000001800B40F3: mov     rdx, rax
 * 00000001800B40F6: lea     rcx, [rbp+9E40h+var_4B10]
 * 00000001800B40FD: call    sub_18001B448
 * 00000001800B4102: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4107: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B410C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4111: mov     rcx, rax
 * 00000001800B4114: call    sub_18007370C
 * 00000001800B4119: nop
 * 00000001800B411A: lea     rcx, [rbp+9E40h+var_CF0]
 * 00000001800B4121: call    sub_180010F20
 * 00000001800B4126: nop
 * 00000001800B4127: lea     rcx, [rbp+9E40h+var_CD0]
 * 00000001800B412E: call    sub_180010F20
 * 00000001800B4133: nop
 * 00000001800B4134: lea     rcx, dword_1801C9600
 * 00000001800B413B: call    _Init_thread_footer
 * 00000001800B4140: mov     rax, [rdi+rbx*8]
 * 00000001800B4144: mov     ecx, [r15+rax]
 * 00000001800B4148: cmp     cs:dword_1801C9604, ecx
 * 00000001800B414E: jle     loc_1800B4227
 * 00000001800B4154: lea     rcx, dword_1801C9604
 * 00000001800B415B: call    sub_18000C8D0
 * 00000001800B4160: cmp     cs:dword_1801C9604, r14d
 * 00000001800B4167: jnz     loc_1800B4227
 * 00000001800B416D: lea     rax, unk_1801411F0
 * 00000001800B4174: mov     qword ptr [rbp+9E40h+var_8F70], rax
 * 00000001800B417B: lea     rax, unk_180142C40
 * 00000001800B4182: mov     qword ptr [rbp+9E40h+var_8F70+8], rax
 * 00000001800B4189: movups  xmm7, [rbp+9E40h+var_8F70]
 * 00000001800B4190: mov     dword ptr [rbp+9E40h+var_6E40], esi
 * 00000001800B4196: mov     dword ptr [rbp+9E40h+var_6E40+4], esi
 * 00000001800B419C: movups  xmm6, [rbp+9E40h+var_6E40]
 * 00000001800B41A3: call    sub_1800A5D74
 * 00000001800B41A8: mov     r8, rax
 * 00000001800B41AB: mov     r9d, r12d
 * 00000001800B41AE: mov     edx, 17Ah
 * 00000001800B41B3: lea     rcx, [rbp+9E40h+var_C70]
 * 00000001800B41BA: call    sub_180073668
 * 00000001800B41BF: nop
 * 00000001800B41C0: mov     r8, rax
 * 00000001800B41C3: mov     rdx, r13
 * 00000001800B41C6: lea     rcx, [rbp+9E40h+var_C90]
 * 00000001800B41CD: call    sub_18001B518
 * 00000001800B41D2: nop
 * 00000001800B41D3: lea     r8, aVertex; "/Vertex"
 * 00000001800B41DA: mov     rdx, rax
 * 00000001800B41DD: lea     rcx, [rbp+9E40h+var_4AF0]
 * 00000001800B41E4: call    sub_18001B448
 * 00000001800B41E9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B41EE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B41F3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B41F8: mov     rcx, rax
 * 00000001800B41FB: call    sub_18007370C
 * 00000001800B4200: nop
 * 00000001800B4201: lea     rcx, [rbp+9E40h+var_C90]
 * 00000001800B4208: call    sub_180010F20
 * 00000001800B420D: nop
 * 00000001800B420E: lea     rcx, [rbp+9E40h+var_C70]
 * 00000001800B4215: call    sub_180010F20
 * 00000001800B421A: nop
 * 00000001800B421B: lea     rcx, dword_1801C9604
 * 00000001800B4222: call    _Init_thread_footer
 * 00000001800B4227: mov     rax, [rdi+rbx*8]
 * 00000001800B422B: mov     ecx, [r15+rax]
 * 00000001800B422F: cmp     cs:dword_1801C9608, ecx
 * 00000001800B4235: jle     loc_1800B430E
 * 00000001800B423B: lea     rcx, dword_1801C9608
 * 00000001800B4242: call    sub_18000C8D0
 * 00000001800B4247: cmp     cs:dword_1801C9608, r14d
 * 00000001800B424E: jnz     loc_1800B430E
 * 00000001800B4254: lea     rax, unk_180143780
 * 00000001800B425B: mov     qword ptr [rbp+9E40h+var_8F60], rax
 * 00000001800B4262: lea     rax, unk_1801447D0
 * 00000001800B4269: mov     qword ptr [rbp+9E40h+var_8F60+8], rax
 * 00000001800B4270: movups  xmm7, [rbp+9E40h+var_8F60]
 * 00000001800B4277: mov     dword ptr [rbp+9E40h+var_6E20], esi
 * 00000001800B427D: mov     dword ptr [rbp+9E40h+var_6E20+4], esi
 * 00000001800B4283: movups  xmm6, [rbp+9E40h+var_6E20]
 * 00000001800B428A: call    sub_1800A5D74
 * 00000001800B428F: mov     r8, rax
 * 00000001800B4292: mov     r9d, r12d
 * 00000001800B4295: mov     edx, 180h
 * 00000001800B429A: lea     rcx, [rbp+9E40h+var_C10]
 * 00000001800B42A1: call    sub_180073668
 * 00000001800B42A6: nop
 * 00000001800B42A7: mov     r8, rax
 * 00000001800B42AA: mov     rdx, r13
 * 00000001800B42AD: lea     rcx, [rbp+9E40h+var_C30]
 * 00000001800B42B4: call    sub_18001B518
 * 00000001800B42B9: nop
 * 00000001800B42BA: lea     r8, aVertex; "/Vertex"
 * 00000001800B42C1: mov     rdx, rax
 * 00000001800B42C4: lea     rcx, [rbp+9E40h+var_4AD0]
 * 00000001800B42CB: call    sub_18001B448
 * 00000001800B42D0: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B42D5: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B42DA: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B42DF: mov     rcx, rax
 * 00000001800B42E2: call    sub_18007370C
 * 00000001800B42E7: nop
 * 00000001800B42E8: lea     rcx, [rbp+9E40h+var_C30]
 * 00000001800B42EF: call    sub_180010F20
 * 00000001800B42F4: nop
 * 00000001800B42F5: lea     rcx, [rbp+9E40h+var_C10]
 * 00000001800B42FC: call    sub_180010F20
 * 00000001800B4301: nop
 * 00000001800B4302: lea     rcx, dword_1801C9608
 * 00000001800B4309: call    _Init_thread_footer
 * 00000001800B430E: mov     rax, [rdi+rbx*8]
 * 00000001800B4312: mov     ecx, [r15+rax]
 * 00000001800B4316: cmp     cs:dword_1801C960C, ecx
 * 00000001800B431C: jle     loc_1800B43F5
 * 00000001800B4322: lea     rcx, dword_1801C960C
 * 00000001800B4329: call    sub_18000C8D0
 * 00000001800B432E: cmp     cs:dword_1801C960C, r14d
 * 00000001800B4335: jnz     loc_1800B43F5
 * 00000001800B433B: lea     rax, unk_180143780
 * 00000001800B4342: mov     qword ptr [rbp+9E40h+var_8F50], rax
 * 00000001800B4349: lea     rax, unk_1801447D0
 * 00000001800B4350: mov     qword ptr [rbp+9E40h+var_8F50+8], rax
 * 00000001800B4357: movups  xmm7, [rbp+9E40h+var_8F50]
 * 00000001800B435E: mov     dword ptr [rbp+9E40h+var_6E00], esi
 * 00000001800B4364: mov     dword ptr [rbp+9E40h+var_6E00+4], esi
 * 00000001800B436A: movups  xmm6, [rbp+9E40h+var_6E00]
 * 00000001800B4371: call    sub_1800A5D74
 * 00000001800B4376: mov     r8, rax
 * 00000001800B4379: mov     r9d, r12d
 * 00000001800B437C: mov     edx, 182h
 * 00000001800B4381: lea     rcx, [rbp+9E40h+var_BB0]
 * 00000001800B4388: call    sub_180073668
 * 00000001800B438D: nop
 * 00000001800B438E: mov     r8, rax
 * 00000001800B4391: mov     rdx, r13
 * 00000001800B4394: lea     rcx, [rbp+9E40h+var_BD0]
 * 00000001800B439B: call    sub_18001B518
 * 00000001800B43A0: nop
 * 00000001800B43A1: lea     r8, aVertex; "/Vertex"
 * 00000001800B43A8: mov     rdx, rax
 * 00000001800B43AB: lea     rcx, [rbp+9E40h+var_4AB0]
 * 00000001800B43B2: call    sub_18001B448
 * 00000001800B43B7: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B43BC: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B43C1: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B43C6: mov     rcx, rax
 * 00000001800B43C9: call    sub_18007370C
 * 00000001800B43CE: nop
 * 00000001800B43CF: lea     rcx, [rbp+9E40h+var_BD0]
 * 00000001800B43D6: call    sub_180010F20
 * 00000001800B43DB: nop
 * 00000001800B43DC: lea     rcx, [rbp+9E40h+var_BB0]
 * 00000001800B43E3: call    sub_180010F20
 * 00000001800B43E8: nop
 * 00000001800B43E9: lea     rcx, dword_1801C960C
 * 00000001800B43F0: call    _Init_thread_footer
 * 00000001800B43F5: mov     rax, [rdi+rbx*8]
 * 00000001800B43F9: mov     ecx, [r15+rax]
 * 00000001800B43FD: cmp     cs:dword_1801C9610, ecx
 * 00000001800B4403: jle     loc_1800B44DC
 * 00000001800B4409: lea     rcx, dword_1801C9610
 * 00000001800B4410: call    sub_18000C8D0
 * 00000001800B4415: cmp     cs:dword_1801C9610, r14d
 * 00000001800B441C: jnz     loc_1800B44DC
 * 00000001800B4422: lea     rax, unk_180143780
 * 00000001800B4429: mov     qword ptr [rbp+9E40h+var_8F40], rax
 * 00000001800B4430: lea     rax, unk_1801447D0
 * 00000001800B4437: mov     qword ptr [rbp+9E40h+var_8F40+8], rax
 * 00000001800B443E: movups  xmm7, [rbp+9E40h+var_8F40]
 * 00000001800B4445: mov     dword ptr [rbp+9E40h+var_6DE0], esi
 * 00000001800B444B: mov     dword ptr [rbp+9E40h+var_6DE0+4], esi
 * 00000001800B4451: movups  xmm6, [rbp+9E40h+var_6DE0]
 * 00000001800B4458: call    sub_1800A5D74
 * 00000001800B445D: mov     r8, rax
 * 00000001800B4460: mov     r9d, r12d
 * 00000001800B4463: mov     edx, 188h
 * 00000001800B4468: lea     rcx, [rbp+9E40h+var_B50]
 * 00000001800B446F: call    sub_180073668
 * 00000001800B4474: nop
 * 00000001800B4475: mov     r8, rax
 * 00000001800B4478: mov     rdx, r13
 * 00000001800B447B: lea     rcx, [rbp+9E40h+var_B70]
 * 00000001800B4482: call    sub_18001B518
 * 00000001800B4487: nop
 * 00000001800B4488: lea     r8, aVertex; "/Vertex"
 * 00000001800B448F: mov     rdx, rax
 * 00000001800B4492: lea     rcx, [rbp+9E40h+var_4A90]
 * 00000001800B4499: call    sub_18001B448
 * 00000001800B449E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B44A3: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B44A8: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B44AD: mov     rcx, rax
 * 00000001800B44B0: call    sub_18007370C
 * 00000001800B44B5: nop
 * 00000001800B44B6: lea     rcx, [rbp+9E40h+var_B70]
 * 00000001800B44BD: call    sub_180010F20
 * 00000001800B44C2: nop
 * 00000001800B44C3: lea     rcx, [rbp+9E40h+var_B50]
 * 00000001800B44CA: call    sub_180010F20
 * 00000001800B44CF: nop
 * 00000001800B44D0: lea     rcx, dword_1801C9610
 * 00000001800B44D7: call    _Init_thread_footer
 * 00000001800B44DC: mov     rax, [rdi+rbx*8]
 * 00000001800B44E0: mov     ecx, [r15+rax]
 * 00000001800B44E4: cmp     cs:dword_1801C9614, ecx
 * 00000001800B44EA: jle     loc_1800B45C3
 * 00000001800B44F0: lea     rcx, dword_1801C9614
 * 00000001800B44F7: call    sub_18000C8D0
 * 00000001800B44FC: cmp     cs:dword_1801C9614, r14d
 * 00000001800B4503: jnz     loc_1800B45C3
 * 00000001800B4509: lea     rax, unk_180143780
 * 00000001800B4510: mov     qword ptr [rbp+9E40h+var_8F30], rax
 * 00000001800B4517: lea     rax, unk_1801447D0
 * 00000001800B451E: mov     qword ptr [rbp+9E40h+var_8F30+8], rax
 * 00000001800B4525: movups  xmm7, [rbp+9E40h+var_8F30]
 * 00000001800B452C: mov     dword ptr [rbp+9E40h+var_6DC0], esi
 * 00000001800B4532: mov     dword ptr [rbp+9E40h+var_6DC0+4], esi
 * 00000001800B4538: movups  xmm6, [rbp+9E40h+var_6DC0]
 * 00000001800B453F: call    sub_1800A5D74
 * 00000001800B4544: mov     r8, rax
 * 00000001800B4547: mov     r9d, r12d
 * 00000001800B454A: mov     edx, 18Ah
 * 00000001800B454F: lea     rcx, [rbp+9E40h+var_AF0]
 * 00000001800B4556: call    sub_180073668
 * 00000001800B455B: nop
 * 00000001800B455C: mov     r8, rax
 * 00000001800B455F: mov     rdx, r13
 * 00000001800B4562: lea     rcx, [rbp+9E40h+var_B10]
 * 00000001800B4569: call    sub_18001B518
 * 00000001800B456E: nop
 * 00000001800B456F: lea     r8, aVertex; "/Vertex"
 * 00000001800B4576: mov     rdx, rax
 * 00000001800B4579: lea     rcx, [rbp+9E40h+var_4A70]
 * 00000001800B4580: call    sub_18001B448
 * 00000001800B4585: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B458A: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B458F: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4594: mov     rcx, rax
 * 00000001800B4597: call    sub_18007370C
 * 00000001800B459C: nop
 * 00000001800B459D: lea     rcx, [rbp+9E40h+var_B10]
 * 00000001800B45A4: call    sub_180010F20
 * 00000001800B45A9: nop
 * 00000001800B45AA: lea     rcx, [rbp+9E40h+var_AF0]
 * 00000001800B45B1: call    sub_180010F20
 * 00000001800B45B6: nop
 * 00000001800B45B7: lea     rcx, dword_1801C9614
 * 00000001800B45BE: call    _Init_thread_footer
 * 00000001800B45C3: mov     rax, [rdi+rbx*8]
 * 00000001800B45C7: mov     ecx, [r15+rax]
 * 00000001800B45CB: cmp     cs:dword_1801C9618, ecx
 * 00000001800B45D1: jle     loc_1800B46AA
 * 00000001800B45D7: lea     rcx, dword_1801C9618
 * 00000001800B45DE: call    sub_18000C8D0
 * 00000001800B45E3: cmp     cs:dword_1801C9618, r14d
 * 00000001800B45EA: jnz     loc_1800B46AA
 * 00000001800B45F0: lea     rax, unk_180143780
 * 00000001800B45F7: mov     qword ptr [rbp+9E40h+var_8F20], rax
 * 00000001800B45FE: lea     rax, unk_1801447D0
 * 00000001800B4605: mov     qword ptr [rbp+9E40h+var_8F20+8], rax
 * 00000001800B460C: movups  xmm7, [rbp+9E40h+var_8F20]
 * 00000001800B4613: mov     dword ptr [rbp+9E40h+var_6DA0], esi
 * 00000001800B4619: mov     dword ptr [rbp+9E40h+var_6DA0+4], esi
 * 00000001800B461F: movups  xmm6, [rbp+9E40h+var_6DA0]
 * 00000001800B4626: call    sub_1800A5D74
 * 00000001800B462B: mov     r8, rax
 * 00000001800B462E: mov     r9d, r12d
 * 00000001800B4631: mov     edx, 190h
 * 00000001800B4636: lea     rcx, [rbp+9E40h+var_A90]
 * 00000001800B463D: call    sub_180073668
 * 00000001800B4642: nop
 * 00000001800B4643: mov     r8, rax
 * 00000001800B4646: mov     rdx, r13
 * 00000001800B4649: lea     rcx, [rbp+9E40h+var_AB0]
 * 00000001800B4650: call    sub_18001B518
 * 00000001800B4655: nop
 * 00000001800B4656: lea     r8, aVertex; "/Vertex"
 * 00000001800B465D: mov     rdx, rax
 * 00000001800B4660: lea     rcx, [rbp+9E40h+var_4A50]
 * 00000001800B4667: call    sub_18001B448
 * 00000001800B466C: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4671: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4676: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B467B: mov     rcx, rax
 * 00000001800B467E: call    sub_18007370C
 * 00000001800B4683: nop
 * 00000001800B4684: lea     rcx, [rbp+9E40h+var_AB0]
 * 00000001800B468B: call    sub_180010F20
 * 00000001800B4690: nop
 * 00000001800B4691: lea     rcx, [rbp+9E40h+var_A90]
 * 00000001800B4698: call    sub_180010F20
 * 00000001800B469D: nop
 * 00000001800B469E: lea     rcx, dword_1801C9618
 * 00000001800B46A5: call    _Init_thread_footer
 * 00000001800B46AA: mov     rax, [rdi+rbx*8]
 * 00000001800B46AE: mov     ecx, [r15+rax]
 * 00000001800B46B2: cmp     cs:dword_1801C961C, ecx
 * 00000001800B46B8: jle     loc_1800B4791
 * 00000001800B46BE: lea     rcx, dword_1801C961C
 * 00000001800B46C5: call    sub_18000C8D0
 * 00000001800B46CA: cmp     cs:dword_1801C961C, r14d
 * 00000001800B46D1: jnz     loc_1800B4791
 * 00000001800B46D7: lea     rax, unk_180143780
 * 00000001800B46DE: mov     qword ptr [rbp+9E40h+var_8F10], rax
 * 00000001800B46E5: lea     rax, unk_1801447D0
 * 00000001800B46EC: mov     qword ptr [rbp+9E40h+var_8F10+8], rax
 * 00000001800B46F3: movups  xmm7, [rbp+9E40h+var_8F10]
 * 00000001800B46FA: mov     dword ptr [rbp+9E40h+var_6D80], esi
 * 00000001800B4700: mov     dword ptr [rbp+9E40h+var_6D80+4], esi
 * 00000001800B4706: movups  xmm6, [rbp+9E40h+var_6D80]
 * 00000001800B470D: call    sub_1800A5D74
 * 00000001800B4712: mov     r8, rax
 * 00000001800B4715: mov     r9d, r12d
 * 00000001800B4718: mov     edx, 192h
 * 00000001800B471D: lea     rcx, [rbp+9E40h+var_A30]
 * 00000001800B4724: call    sub_180073668
 * 00000001800B4729: nop
 * 00000001800B472A: mov     r8, rax
 * 00000001800B472D: mov     rdx, r13
 * 00000001800B4730: lea     rcx, [rbp+9E40h+var_A50]
 * 00000001800B4737: call    sub_18001B518
 * 00000001800B473C: nop
 * 00000001800B473D: lea     r8, aVertex; "/Vertex"
 * 00000001800B4744: mov     rdx, rax
 * 00000001800B4747: lea     rcx, [rbp+9E40h+var_4A30]
 * 00000001800B474E: call    sub_18001B448
 * 00000001800B4753: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4758: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B475D: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4762: mov     rcx, rax
 * 00000001800B4765: call    sub_18007370C
 * 00000001800B476A: nop
 * 00000001800B476B: lea     rcx, [rbp+9E40h+var_A50]
 * 00000001800B4772: call    sub_180010F20
 * 00000001800B4777: nop
 * 00000001800B4778: lea     rcx, [rbp+9E40h+var_A30]
 * 00000001800B477F: call    sub_180010F20
 * 00000001800B4784: nop
 * 00000001800B4785: lea     rcx, dword_1801C961C
 * 00000001800B478C: call    _Init_thread_footer
 * 00000001800B4791: mov     rax, [rdi+rbx*8]
 * 00000001800B4795: mov     ecx, [r15+rax]
 * 00000001800B4799: cmp     cs:dword_1801C9620, ecx
 * 00000001800B479F: jle     loc_1800B4878
 * 00000001800B47A5: lea     rcx, dword_1801C9620
 * 00000001800B47AC: call    sub_18000C8D0
 * 00000001800B47B1: cmp     cs:dword_1801C9620, r14d
 * 00000001800B47B8: jnz     loc_1800B4878
 * 00000001800B47BE: lea     rax, unk_180143780
 * 00000001800B47C5: mov     qword ptr [rbp+9E40h+var_8F00], rax
 * 00000001800B47CC: lea     rax, unk_1801447D0
 * 00000001800B47D3: mov     qword ptr [rbp+9E40h+var_8F00+8], rax
 * 00000001800B47DA: movups  xmm7, [rbp+9E40h+var_8F00]
 * 00000001800B47E1: mov     dword ptr [rbp+9E40h+var_6D60], esi
 * 00000001800B47E7: mov     dword ptr [rbp+9E40h+var_6D60+4], esi
 * 00000001800B47ED: movups  xmm6, [rbp+9E40h+var_6D60]
 * 00000001800B47F4: call    sub_1800A5D74
 * 00000001800B47F9: mov     r8, rax
 * 00000001800B47FC: mov     r9d, r12d
 * 00000001800B47FF: mov     edx, 198h
 * 00000001800B4804: lea     rcx, [rbp+9E40h+var_9D0]
 * 00000001800B480B: call    sub_180073668
 * 00000001800B4810: nop
 * 00000001800B4811: mov     r8, rax
 * 00000001800B4814: mov     rdx, r13
 * 00000001800B4817: lea     rcx, [rbp+9E40h+var_9F0]
 * 00000001800B481E: call    sub_18001B518
 * 00000001800B4823: nop
 * 00000001800B4824: lea     r8, aVertex; "/Vertex"
 * 00000001800B482B: mov     rdx, rax
 * 00000001800B482E: lea     rcx, [rbp+9E40h+var_4A10]
 * 00000001800B4835: call    sub_18001B448
 * 00000001800B483A: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B483F: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4844: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4849: mov     rcx, rax
 * 00000001800B484C: call    sub_18007370C
 * 00000001800B4851: nop
 * 00000001800B4852: lea     rcx, [rbp+9E40h+var_9F0]
 * 00000001800B4859: call    sub_180010F20
 * 00000001800B485E: nop
 * 00000001800B485F: lea     rcx, [rbp+9E40h+var_9D0]
 * 00000001800B4866: call    sub_180010F20
 * 00000001800B486B: nop
 * 00000001800B486C: lea     rcx, dword_1801C9620
 * 00000001800B4873: call    _Init_thread_footer
 * 00000001800B4878: mov     rax, [rdi+rbx*8]
 * 00000001800B487C: mov     ecx, [r15+rax]
 * 00000001800B4880: cmp     cs:dword_1801C9624, ecx
 * 00000001800B4886: jle     loc_1800B495F
 * 00000001800B488C: lea     rcx, dword_1801C9624
 * 00000001800B4893: call    sub_18000C8D0
 * 00000001800B4898: cmp     cs:dword_1801C9624, r14d
 * 00000001800B489F: jnz     loc_1800B495F
 * 00000001800B48A5: lea     rax, unk_180143780
 * 00000001800B48AC: mov     qword ptr [rbp+9E40h+var_8EF0], rax
 * 00000001800B48B3: lea     rax, unk_1801447D0
 * 00000001800B48BA: mov     qword ptr [rbp+9E40h+var_8EF0+8], rax
 * 00000001800B48C1: movups  xmm7, [rbp+9E40h+var_8EF0]
 * 00000001800B48C8: mov     dword ptr [rbp+9E40h+var_6D40], esi
 * 00000001800B48CE: mov     dword ptr [rbp+9E40h+var_6D40+4], esi
 * 00000001800B48D4: movups  xmm6, [rbp+9E40h+var_6D40]
 * 00000001800B48DB: call    sub_1800A5D74
 * 00000001800B48E0: mov     r8, rax
 * 00000001800B48E3: mov     r9d, r12d
 * 00000001800B48E6: mov     edx, 19Ah
 * 00000001800B48EB: lea     rcx, [rbp+9E40h+var_970]
 * 00000001800B48F2: call    sub_180073668
 * 00000001800B48F7: nop
 * 00000001800B48F8: mov     r8, rax
 * 00000001800B48FB: mov     rdx, r13
 * 00000001800B48FE: lea     rcx, [rbp+9E40h+var_990]
 * 00000001800B4905: call    sub_18001B518
 * 00000001800B490A: nop
 * 00000001800B490B: lea     r8, aVertex; "/Vertex"
 * 00000001800B4912: mov     rdx, rax
 * 00000001800B4915: lea     rcx, [rbp+9E40h+var_49F0]
 * 00000001800B491C: call    sub_18001B448
 * 00000001800B4921: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4926: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B492B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4930: mov     rcx, rax
 * 00000001800B4933: call    sub_18007370C
 * 00000001800B4938: nop
 * 00000001800B4939: lea     rcx, [rbp+9E40h+var_990]
 * 00000001800B4940: call    sub_180010F20
 * 00000001800B4945: nop
 * 00000001800B4946: lea     rcx, [rbp+9E40h+var_970]
 * 00000001800B494D: call    sub_180010F20
 * 00000001800B4952: nop
 * 00000001800B4953: lea     rcx, dword_1801C9624
 * 00000001800B495A: call    _Init_thread_footer
 * 00000001800B495F: mov     rax, [rdi+rbx*8]
 * 00000001800B4963: mov     ecx, [r15+rax]
 * 00000001800B4967: cmp     cs:dword_1801C9628, ecx
 * 00000001800B496D: jle     loc_1800B4A46
 * 00000001800B4973: lea     rcx, dword_1801C9628
 * 00000001800B497A: call    sub_18000C8D0
 * 00000001800B497F: cmp     cs:dword_1801C9628, r14d
 * 00000001800B4986: jnz     loc_1800B4A46
 * 00000001800B498C: lea     rax, unk_1801411F0
 * 00000001800B4993: mov     qword ptr [rbp+9E40h+var_8EE0], rax
 * 00000001800B499A: lea     rax, unk_180142C40
 * 00000001800B49A1: mov     qword ptr [rbp+9E40h+var_8EE0+8], rax
 * 00000001800B49A8: movups  xmm7, [rbp+9E40h+var_8EE0]
 * 00000001800B49AF: mov     dword ptr [rbp+9E40h+var_6D20], esi
 * 00000001800B49B5: mov     dword ptr [rbp+9E40h+var_6D20+4], esi
 * 00000001800B49BB: movups  xmm6, [rbp+9E40h+var_6D20]
 * 00000001800B49C2: call    sub_1800A5D74
 * 00000001800B49C7: mov     r8, rax
 * 00000001800B49CA: mov     r9d, r12d
 * 00000001800B49CD: mov     edx, 1A0h
 * 00000001800B49D2: lea     rcx, [rbp+9E40h+var_910]
 * 00000001800B49D9: call    sub_180073668
 * 00000001800B49DE: nop
 * 00000001800B49DF: mov     r8, rax
 * 00000001800B49E2: mov     rdx, r13
 * 00000001800B49E5: lea     rcx, [rbp+9E40h+var_930]
 * 00000001800B49EC: call    sub_18001B518
 * 00000001800B49F1: nop
 * 00000001800B49F2: lea     r8, aVertex; "/Vertex"
 * 00000001800B49F9: mov     rdx, rax
 * 00000001800B49FC: lea     rcx, [rbp+9E40h+var_49D0]
 * 00000001800B4A03: call    sub_18001B448
 * 00000001800B4A08: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4A0D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4A12: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4A17: mov     rcx, rax
 * 00000001800B4A1A: call    sub_18007370C
 * 00000001800B4A1F: nop
 * 00000001800B4A20: lea     rcx, [rbp+9E40h+var_930]
 * 00000001800B4A27: call    sub_180010F20
 * 00000001800B4A2C: nop
 * 00000001800B4A2D: lea     rcx, [rbp+9E40h+var_910]
 * 00000001800B4A34: call    sub_180010F20
 * 00000001800B4A39: nop
 * 00000001800B4A3A: lea     rcx, dword_1801C9628
 * 00000001800B4A41: call    _Init_thread_footer
 * 00000001800B4A46: mov     rax, [rdi+rbx*8]
 * 00000001800B4A4A: mov     ecx, [r15+rax]
 * 00000001800B4A4E: cmp     cs:dword_1801C962C, ecx
 * 00000001800B4A54: jle     loc_1800B4B2D
 * 00000001800B4A5A: lea     rcx, dword_1801C962C
 * 00000001800B4A61: call    sub_18000C8D0
 * 00000001800B4A66: cmp     cs:dword_1801C962C, r14d
 * 00000001800B4A6D: jnz     loc_1800B4B2D
 * 00000001800B4A73: lea     rax, unk_1801411F0
 * 00000001800B4A7A: mov     qword ptr [rbp+9E40h+var_8ED0], rax
 * 00000001800B4A81: lea     rax, unk_180142C40
 * 00000001800B4A88: mov     qword ptr [rbp+9E40h+var_8ED0+8], rax
 * 00000001800B4A8F: movups  xmm7, [rbp+9E40h+var_8ED0]
 * 00000001800B4A96: mov     dword ptr [rbp+9E40h+var_6D00], esi
 * 00000001800B4A9C: mov     dword ptr [rbp+9E40h+var_6D00+4], esi
 * 00000001800B4AA2: movups  xmm6, [rbp+9E40h+var_6D00]
 * 00000001800B4AA9: call    sub_1800A5D74
 * 00000001800B4AAE: mov     r8, rax
 * 00000001800B4AB1: mov     r9d, r12d
 * 00000001800B4AB4: mov     edx, 1A2h
 * 00000001800B4AB9: lea     rcx, [rbp+9E40h+var_8B0]
 * 00000001800B4AC0: call    sub_180073668
 * 00000001800B4AC5: nop
 * 00000001800B4AC6: mov     r8, rax
 * 00000001800B4AC9: mov     rdx, r13
 * 00000001800B4ACC: lea     rcx, [rbp+9E40h+var_8D0]
 * 00000001800B4AD3: call    sub_18001B518
 * 00000001800B4AD8: nop
 * 00000001800B4AD9: lea     r8, aVertex; "/Vertex"
 * 00000001800B4AE0: mov     rdx, rax
 * 00000001800B4AE3: lea     rcx, [rbp+9E40h+var_49B0]
 * 00000001800B4AEA: call    sub_18001B448
 * 00000001800B4AEF: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4AF4: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4AF9: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4AFE: mov     rcx, rax
 * 00000001800B4B01: call    sub_18007370C
 * 00000001800B4B06: nop
 * 00000001800B4B07: lea     rcx, [rbp+9E40h+var_8D0]
 * 00000001800B4B0E: call    sub_180010F20
 * 00000001800B4B13: nop
 * 00000001800B4B14: lea     rcx, [rbp+9E40h+var_8B0]
 * 00000001800B4B1B: call    sub_180010F20
 * 00000001800B4B20: nop
 * 00000001800B4B21: lea     rcx, dword_1801C962C
 * 00000001800B4B28: call    _Init_thread_footer
 * 00000001800B4B2D: mov     rax, [rdi+rbx*8]
 * 00000001800B4B31: mov     ecx, [r15+rax]
 * 00000001800B4B35: cmp     cs:dword_1801C9630, ecx
 * 00000001800B4B3B: jle     loc_1800B4C14
 * 00000001800B4B41: lea     rcx, dword_1801C9630
 * 00000001800B4B48: call    sub_18000C8D0
 * 00000001800B4B4D: cmp     cs:dword_1801C9630, r14d
 * 00000001800B4B54: jnz     loc_1800B4C14
 * 00000001800B4B5A: lea     rax, unk_1801411F0
 * 00000001800B4B61: mov     qword ptr [rbp+9E40h+var_8EC0], rax
 * 00000001800B4B68: lea     rax, unk_180142C40
 * 00000001800B4B6F: mov     qword ptr [rbp+9E40h+var_8EC0+8], rax
 * 00000001800B4B76: movups  xmm7, [rbp+9E40h+var_8EC0]
 * 00000001800B4B7D: mov     dword ptr [rbp+9E40h+var_6CE0], esi
 * 00000001800B4B83: mov     dword ptr [rbp+9E40h+var_6CE0+4], esi
 * 00000001800B4B89: movups  xmm6, [rbp+9E40h+var_6CE0]
 * 00000001800B4B90: call    sub_1800A5D74
 * 00000001800B4B95: mov     r8, rax
 * 00000001800B4B98: mov     r9d, r12d
 * 00000001800B4B9B: mov     edx, 1A8h
 * 00000001800B4BA0: lea     rcx, [rbp+9E40h+var_850]
 * 00000001800B4BA7: call    sub_180073668
 * 00000001800B4BAC: nop
 * 00000001800B4BAD: mov     r8, rax
 * 00000001800B4BB0: mov     rdx, r13
 * 00000001800B4BB3: lea     rcx, [rbp+9E40h+var_870]
 * 00000001800B4BBA: call    sub_18001B518
 * 00000001800B4BBF: nop
 * 00000001800B4BC0: lea     r8, aVertex; "/Vertex"
 * 00000001800B4BC7: mov     rdx, rax
 * 00000001800B4BCA: lea     rcx, [rbp+9E40h+var_4990]
 * 00000001800B4BD1: call    sub_18001B448
 * 00000001800B4BD6: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4BDB: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4BE0: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4BE5: mov     rcx, rax
 * 00000001800B4BE8: call    sub_18007370C
 * 00000001800B4BED: nop
 * 00000001800B4BEE: lea     rcx, [rbp+9E40h+var_870]
 * 00000001800B4BF5: call    sub_180010F20
 * 00000001800B4BFA: nop
 * 00000001800B4BFB: lea     rcx, [rbp+9E40h+var_850]
 * 00000001800B4C02: call    sub_180010F20
 * 00000001800B4C07: nop
 * 00000001800B4C08: lea     rcx, dword_1801C9630
 * 00000001800B4C0F: call    _Init_thread_footer
 * 00000001800B4C14: mov     rax, [rdi+rbx*8]
 * 00000001800B4C18: mov     ecx, [r15+rax]
 * 00000001800B4C1C: cmp     cs:dword_1801C9634, ecx
 * 00000001800B4C22: jle     loc_1800B4CFB
 * 00000001800B4C28: lea     rcx, dword_1801C9634
 * 00000001800B4C2F: call    sub_18000C8D0
 * 00000001800B4C34: cmp     cs:dword_1801C9634, r14d
 * 00000001800B4C3B: jnz     loc_1800B4CFB
 * 00000001800B4C41: lea     rax, unk_1801411F0
 * 00000001800B4C48: mov     qword ptr [rbp+9E40h+var_8EB0], rax
 * 00000001800B4C4F: lea     rax, unk_180142C40
 * 00000001800B4C56: mov     qword ptr [rbp+9E40h+var_8EB0+8], rax
 * 00000001800B4C5D: movups  xmm7, [rbp+9E40h+var_8EB0]
 * 00000001800B4C64: mov     dword ptr [rbp+9E40h+var_6CC0], esi
 * 00000001800B4C6A: mov     dword ptr [rbp+9E40h+var_6CC0+4], esi
 * 00000001800B4C70: movups  xmm6, [rbp+9E40h+var_6CC0]
 * 00000001800B4C77: call    sub_1800A5D74
 * 00000001800B4C7C: mov     r8, rax
 * 00000001800B4C7F: mov     r9d, r12d
 * 00000001800B4C82: mov     edx, 1AAh
 * 00000001800B4C87: lea     rcx, [rbp+9E40h+var_7F0]
 * 00000001800B4C8E: call    sub_180073668
 * 00000001800B4C93: nop
 * 00000001800B4C94: mov     r8, rax
 * 00000001800B4C97: mov     rdx, r13
 * 00000001800B4C9A: lea     rcx, [rbp+9E40h+var_810]
 * 00000001800B4CA1: call    sub_18001B518
 * 00000001800B4CA6: nop
 * 00000001800B4CA7: lea     r8, aVertex; "/Vertex"
 * 00000001800B4CAE: mov     rdx, rax
 * 00000001800B4CB1: lea     rcx, [rbp+9E40h+var_4970]
 * 00000001800B4CB8: call    sub_18001B448
 * 00000001800B4CBD: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4CC2: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4CC7: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4CCC: mov     rcx, rax
 * 00000001800B4CCF: call    sub_18007370C
 * 00000001800B4CD4: nop
 * 00000001800B4CD5: lea     rcx, [rbp+9E40h+var_810]
 * 00000001800B4CDC: call    sub_180010F20
 * 00000001800B4CE1: nop
 * 00000001800B4CE2: lea     rcx, [rbp+9E40h+var_7F0]
 * 00000001800B4CE9: call    sub_180010F20
 * 00000001800B4CEE: nop
 * 00000001800B4CEF: lea     rcx, dword_1801C9634
 * 00000001800B4CF6: call    _Init_thread_footer
 * 00000001800B4CFB: mov     rax, [rdi+rbx*8]
 * 00000001800B4CFF: mov     ecx, [r15+rax]
 * 00000001800B4D03: cmp     cs:dword_1801C9638, ecx
 * 00000001800B4D09: jle     loc_1800B4DE2
 * 00000001800B4D0F: lea     rcx, dword_1801C9638
 * 00000001800B4D16: call    sub_18000C8D0
 * 00000001800B4D1B: cmp     cs:dword_1801C9638, r14d
 * 00000001800B4D22: jnz     loc_1800B4DE2
 * 00000001800B4D28: lea     rax, unk_1801411F0
 * 00000001800B4D2F: mov     qword ptr [rbp+9E40h+var_8EA0], rax
 * 00000001800B4D36: lea     rax, unk_180142C40
 * 00000001800B4D3D: mov     qword ptr [rbp+9E40h+var_8EA0+8], rax
 * 00000001800B4D44: movups  xmm7, [rbp+9E40h+var_8EA0]
 * 00000001800B4D4B: mov     dword ptr [rbp+9E40h+var_6CA0], esi
 * 00000001800B4D51: mov     dword ptr [rbp+9E40h+var_6CA0+4], esi
 * 00000001800B4D57: movups  xmm6, [rbp+9E40h+var_6CA0]
 * 00000001800B4D5E: call    sub_1800A5D74
 * 00000001800B4D63: mov     r8, rax
 * 00000001800B4D66: mov     r9d, r12d
 * 00000001800B4D69: mov     edx, 1B0h
 * 00000001800B4D6E: lea     rcx, [rbp+9E40h+var_790]
 * 00000001800B4D75: call    sub_180073668
 * 00000001800B4D7A: nop
 * 00000001800B4D7B: mov     r8, rax
 * 00000001800B4D7E: mov     rdx, r13
 * 00000001800B4D81: lea     rcx, [rbp+9E40h+var_7B0]
 * 00000001800B4D88: call    sub_18001B518
 * 00000001800B4D8D: nop
 * 00000001800B4D8E: lea     r8, aVertex; "/Vertex"
 * 00000001800B4D95: mov     rdx, rax
 * 00000001800B4D98: lea     rcx, [rbp+9E40h+var_4950]
 * 00000001800B4D9F: call    sub_18001B448
 * 00000001800B4DA4: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4DA9: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4DAE: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4DB3: mov     rcx, rax
 * 00000001800B4DB6: call    sub_18007370C
 * 00000001800B4DBB: nop
 * 00000001800B4DBC: lea     rcx, [rbp+9E40h+var_7B0]
 * 00000001800B4DC3: call    sub_180010F20
 * 00000001800B4DC8: nop
 * 00000001800B4DC9: lea     rcx, [rbp+9E40h+var_790]
 * 00000001800B4DD0: call    sub_180010F20
 * 00000001800B4DD5: nop
 * 00000001800B4DD6: lea     rcx, dword_1801C9638
 * 00000001800B4DDD: call    _Init_thread_footer
 * 00000001800B4DE2: mov     rax, [rdi+rbx*8]
 * 00000001800B4DE6: mov     ecx, [r15+rax]
 * 00000001800B4DEA: cmp     cs:dword_1801C963C, ecx
 * 00000001800B4DF0: jle     loc_1800B4EC9
 * 00000001800B4DF6: lea     rcx, dword_1801C963C
 * 00000001800B4DFD: call    sub_18000C8D0
 * 00000001800B4E02: cmp     cs:dword_1801C963C, r14d
 * 00000001800B4E09: jnz     loc_1800B4EC9
 * 00000001800B4E0F: lea     rax, unk_1801411F0
 * 00000001800B4E16: mov     qword ptr [rbp+9E40h+var_8E90], rax
 * 00000001800B4E1D: lea     rax, unk_180142C40
 * 00000001800B4E24: mov     qword ptr [rbp+9E40h+var_8E90+8], rax
 * 00000001800B4E2B: movups  xmm7, [rbp+9E40h+var_8E90]
 * 00000001800B4E32: mov     dword ptr [rbp+9E40h+var_6C80], esi
 * 00000001800B4E38: mov     dword ptr [rbp+9E40h+var_6C80+4], esi
 * 00000001800B4E3E: movups  xmm6, [rbp+9E40h+var_6C80]
 * 00000001800B4E45: call    sub_1800A5D74
 * 00000001800B4E4A: mov     r8, rax
 * 00000001800B4E4D: mov     r9d, r12d
 * 00000001800B4E50: mov     edx, 1B2h
 * 00000001800B4E55: lea     rcx, [rbp+9E40h+var_730]
 * 00000001800B4E5C: call    sub_180073668
 * 00000001800B4E61: nop
 * 00000001800B4E62: mov     r8, rax
 * 00000001800B4E65: mov     rdx, r13
 * 00000001800B4E68: lea     rcx, [rbp+9E40h+var_750]
 * 00000001800B4E6F: call    sub_18001B518
 * 00000001800B4E74: nop
 * 00000001800B4E75: lea     r8, aVertex; "/Vertex"
 * 00000001800B4E7C: mov     rdx, rax
 * 00000001800B4E7F: lea     rcx, [rbp+9E40h+var_4930]
 * 00000001800B4E86: call    sub_18001B448
 * 00000001800B4E8B: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4E90: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4E95: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4E9A: mov     rcx, rax
 * 00000001800B4E9D: call    sub_18007370C
 * 00000001800B4EA2: nop
 * 00000001800B4EA3: lea     rcx, [rbp+9E40h+var_750]
 * 00000001800B4EAA: call    sub_180010F20
 * 00000001800B4EAF: nop
 * 00000001800B4EB0: lea     rcx, [rbp+9E40h+var_730]
 * 00000001800B4EB7: call    sub_180010F20
 * 00000001800B4EBC: nop
 * 00000001800B4EBD: lea     rcx, dword_1801C963C
 * 00000001800B4EC4: call    _Init_thread_footer
 * 00000001800B4EC9: mov     rax, [rdi+rbx*8]
 * 00000001800B4ECD: mov     ecx, [r15+rax]
 * 00000001800B4ED1: cmp     cs:dword_1801C9640, ecx
 * 00000001800B4ED7: jle     loc_1800B4FB0
 * 00000001800B4EDD: lea     rcx, dword_1801C9640
 * 00000001800B4EE4: call    sub_18000C8D0
 * 00000001800B4EE9: cmp     cs:dword_1801C9640, r14d
 * 00000001800B4EF0: jnz     loc_1800B4FB0
 * 00000001800B4EF6: lea     rax, unk_1801411F0
 * 00000001800B4EFD: mov     qword ptr [rbp+9E40h+var_8E80], rax
 * 00000001800B4F04: lea     rax, unk_180142C40
 * 00000001800B4F0B: mov     qword ptr [rbp+9E40h+var_8E80+8], rax
 * 00000001800B4F12: movups  xmm7, [rbp+9E40h+var_8E80]
 * 00000001800B4F19: mov     dword ptr [rbp+9E40h+var_6C60], esi
 * 00000001800B4F1F: mov     dword ptr [rbp+9E40h+var_6C60+4], esi
 * 00000001800B4F25: movups  xmm6, [rbp+9E40h+var_6C60]
 * 00000001800B4F2C: call    sub_1800A5D74
 * 00000001800B4F31: mov     r8, rax
 * 00000001800B4F34: mov     r9d, r12d
 * 00000001800B4F37: mov     edx, 1B8h
 * 00000001800B4F3C: lea     rcx, [rbp+9E40h+var_6D0]
 * 00000001800B4F43: call    sub_180073668
 * 00000001800B4F48: nop
 * 00000001800B4F49: mov     r8, rax
 * 00000001800B4F4C: mov     rdx, r13
 * 00000001800B4F4F: lea     rcx, [rbp+9E40h+var_6F0]
 * 00000001800B4F56: call    sub_18001B518
 * 00000001800B4F5B: nop
 * 00000001800B4F5C: lea     r8, aVertex; "/Vertex"
 * 00000001800B4F63: mov     rdx, rax
 * 00000001800B4F66: lea     rcx, [rbp+9E40h+var_4910]
 * 00000001800B4F6D: call    sub_18001B448
 * 00000001800B4F72: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B4F77: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B4F7C: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B4F81: mov     rcx, rax
 * 00000001800B4F84: call    sub_18007370C
 * 00000001800B4F89: nop
 * 00000001800B4F8A: lea     rcx, [rbp+9E40h+var_6F0]
 * 00000001800B4F91: call    sub_180010F20
 * 00000001800B4F96: nop
 * 00000001800B4F97: lea     rcx, [rbp+9E40h+var_6D0]
 * 00000001800B4F9E: call    sub_180010F20
 * 00000001800B4FA3: nop
 * 00000001800B4FA4: lea     rcx, dword_1801C9640
 * 00000001800B4FAB: call    _Init_thread_footer
 * 00000001800B4FB0: mov     rax, [rdi+rbx*8]
 * 00000001800B4FB4: mov     ecx, [r15+rax]
 * 00000001800B4FB8: cmp     cs:dword_1801C9644, ecx
 * 00000001800B4FBE: jle     loc_1800B5097
 * 00000001800B4FC4: lea     rcx, dword_1801C9644
 * 00000001800B4FCB: call    sub_18000C8D0
 * 00000001800B4FD0: cmp     cs:dword_1801C9644, r14d
 * 00000001800B4FD7: jnz     loc_1800B5097
 * 00000001800B4FDD: lea     rax, unk_1801411F0
 * 00000001800B4FE4: mov     qword ptr [rbp+9E40h+var_8E70], rax
 * 00000001800B4FEB: lea     rax, unk_180142C40
 * 00000001800B4FF2: mov     qword ptr [rbp+9E40h+var_8E70+8], rax
 * 00000001800B4FF9: movups  xmm7, [rbp+9E40h+var_8E70]
 * 00000001800B5000: mov     dword ptr [rbp+9E40h+var_6C40], esi
 * 00000001800B5006: mov     dword ptr [rbp+9E40h+var_6C40+4], esi
 * 00000001800B500C: movups  xmm6, [rbp+9E40h+var_6C40]
 * 00000001800B5013: call    sub_1800A5D74
 * 00000001800B5018: mov     r8, rax
 * 00000001800B501B: mov     r9d, r12d
 * 00000001800B501E: mov     edx, 1BAh
 * 00000001800B5023: lea     rcx, [rbp+9E40h+var_670]
 * 00000001800B502A: call    sub_180073668
 * 00000001800B502F: nop
 * 00000001800B5030: mov     r8, rax
 * 00000001800B5033: mov     rdx, r13
 * 00000001800B5036: lea     rcx, [rbp+9E40h+var_690]
 * 00000001800B503D: call    sub_18001B518
 * 00000001800B5042: nop
 * 00000001800B5043: lea     r8, aVertex; "/Vertex"
 * 00000001800B504A: mov     rdx, rax
 * 00000001800B504D: lea     rcx, [rbp+9E40h+var_48F0]
 * 00000001800B5054: call    sub_18001B448
 * 00000001800B5059: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B505E: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5063: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5068: mov     rcx, rax
 * 00000001800B506B: call    sub_18007370C
 * 00000001800B5070: nop
 * 00000001800B5071: lea     rcx, [rbp+9E40h+var_690]
 * 00000001800B5078: call    sub_180010F20
 * 00000001800B507D: nop
 * 00000001800B507E: lea     rcx, [rbp+9E40h+var_670]
 * 00000001800B5085: call    sub_180010F20
 * 00000001800B508A: nop
 * 00000001800B508B: lea     rcx, dword_1801C9644
 * 00000001800B5092: call    _Init_thread_footer
 * 00000001800B5097: mov     rax, [rdi+rbx*8]
 * 00000001800B509B: mov     ecx, [r15+rax]
 * 00000001800B509F: cmp     cs:dword_1801C9648, ecx
 * 00000001800B50A5: jle     loc_1800B517E
 * 00000001800B50AB: lea     rcx, dword_1801C9648
 * 00000001800B50B2: call    sub_18000C8D0
 * 00000001800B50B7: cmp     cs:dword_1801C9648, r14d
 * 00000001800B50BE: jnz     loc_1800B517E
 * 00000001800B50C4: lea     rax, unk_180143780
 * 00000001800B50CB: mov     qword ptr [rbp+9E40h+var_8E60], rax
 * 00000001800B50D2: lea     rax, unk_1801447D0
 * 00000001800B50D9: mov     qword ptr [rbp+9E40h+var_8E60+8], rax
 * 00000001800B50E0: movups  xmm7, [rbp+9E40h+var_8E60]
 * 00000001800B50E7: mov     dword ptr [rbp+9E40h+var_6C20], esi
 * 00000001800B50ED: mov     dword ptr [rbp+9E40h+var_6C20+4], esi
 * 00000001800B50F3: movups  xmm6, [rbp+9E40h+var_6C20]
 * 00000001800B50FA: call    sub_1800A5D74
 * 00000001800B50FF: mov     r8, rax
 * 00000001800B5102: mov     r9d, r12d
 * 00000001800B5105: mov     edx, 1C0h
 * 00000001800B510A: lea     rcx, [rbp+9E40h+var_610]
 * 00000001800B5111: call    sub_180073668
 * 00000001800B5116: nop
 * 00000001800B5117: mov     r8, rax
 * 00000001800B511A: mov     rdx, r13
 * 00000001800B511D: lea     rcx, [rbp+9E40h+var_630]
 * 00000001800B5124: call    sub_18001B518
 * 00000001800B5129: nop
 * 00000001800B512A: lea     r8, aVertex; "/Vertex"
 * 00000001800B5131: mov     rdx, rax
 * 00000001800B5134: lea     rcx, [rbp+9E40h+var_48D0]
 * 00000001800B513B: call    sub_18001B448
 * 00000001800B5140: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5145: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B514A: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B514F: mov     rcx, rax
 * 00000001800B5152: call    sub_18007370C
 * 00000001800B5157: nop
 * 00000001800B5158: lea     rcx, [rbp+9E40h+var_630]
 * 00000001800B515F: call    sub_180010F20
 * 00000001800B5164: nop
 * 00000001800B5165: lea     rcx, [rbp+9E40h+var_610]
 * 00000001800B516C: call    sub_180010F20
 * 00000001800B5171: nop
 * 00000001800B5172: lea     rcx, dword_1801C9648
 * 00000001800B5179: call    _Init_thread_footer
 * 00000001800B517E: mov     rax, [rdi+rbx*8]
 * 00000001800B5182: mov     ecx, [r15+rax]
 * 00000001800B5186: cmp     cs:dword_1801C964C, ecx
 * 00000001800B518C: jle     loc_1800B5265
 * 00000001800B5192: lea     rcx, dword_1801C964C
 * 00000001800B5199: call    sub_18000C8D0
 * 00000001800B519E: cmp     cs:dword_1801C964C, r14d
 * 00000001800B51A5: jnz     loc_1800B5265
 * 00000001800B51AB: lea     rax, unk_180143780
 * 00000001800B51B2: mov     qword ptr [rbp+9E40h+var_8E50], rax
 * 00000001800B51B9: lea     rax, unk_1801447D0
 * 00000001800B51C0: mov     qword ptr [rbp+9E40h+var_8E50+8], rax
 * 00000001800B51C7: movups  xmm7, [rbp+9E40h+var_8E50]
 * 00000001800B51CE: mov     dword ptr [rbp+9E40h+var_6C00], esi
 * 00000001800B51D4: mov     dword ptr [rbp+9E40h+var_6C00+4], esi
 * 00000001800B51DA: movups  xmm6, [rbp+9E40h+var_6C00]
 * 00000001800B51E1: call    sub_1800A5D74
 * 00000001800B51E6: mov     r8, rax
 * 00000001800B51E9: mov     r9d, r12d
 * 00000001800B51EC: mov     edx, 1C2h
 * 00000001800B51F1: lea     rcx, [rbp+9E40h+var_5B0]
 * 00000001800B51F8: call    sub_180073668
 * 00000001800B51FD: nop
 * 00000001800B51FE: mov     r8, rax
 * 00000001800B5201: mov     rdx, r13
 * 00000001800B5204: lea     rcx, [rbp+9E40h+var_5D0]
 * 00000001800B520B: call    sub_18001B518
 * 00000001800B5210: nop
 * 00000001800B5211: lea     r8, aVertex; "/Vertex"
 * 00000001800B5218: mov     rdx, rax
 * 00000001800B521B: lea     rcx, [rbp+9E40h+var_48B0]
 * 00000001800B5222: call    sub_18001B448
 * 00000001800B5227: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B522C: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5231: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5236: mov     rcx, rax
 * 00000001800B5239: call    sub_18007370C
 * 00000001800B523E: nop
 * 00000001800B523F: lea     rcx, [rbp+9E40h+var_5D0]
 * 00000001800B5246: call    sub_180010F20
 * 00000001800B524B: nop
 * 00000001800B524C: lea     rcx, [rbp+9E40h+var_5B0]
 * 00000001800B5253: call    sub_180010F20
 * 00000001800B5258: nop
 * 00000001800B5259: lea     rcx, dword_1801C964C
 * 00000001800B5260: call    _Init_thread_footer
 * 00000001800B5265: mov     rax, [rdi+rbx*8]
 * 00000001800B5269: mov     ecx, [r15+rax]
 * 00000001800B526D: cmp     cs:dword_1801C9650, ecx
 * 00000001800B5273: jle     loc_1800B534C
 * 00000001800B5279: lea     rcx, dword_1801C9650
 * 00000001800B5280: call    sub_18000C8D0
 * 00000001800B5285: cmp     cs:dword_1801C9650, r14d
 * 00000001800B528C: jnz     loc_1800B534C
 * 00000001800B5292: lea     rax, unk_180143780
 * 00000001800B5299: mov     qword ptr [rbp+9E40h+var_8E40], rax
 * 00000001800B52A0: lea     rax, unk_1801447D0
 * 00000001800B52A7: mov     qword ptr [rbp+9E40h+var_8E40+8], rax
 * 00000001800B52AE: movups  xmm7, [rbp+9E40h+var_8E40]
 * 00000001800B52B5: mov     dword ptr [rbp+9E40h+var_6BE0], esi
 * 00000001800B52BB: mov     dword ptr [rbp+9E40h+var_6BE0+4], esi
 * 00000001800B52C1: movups  xmm6, [rbp+9E40h+var_6BE0]
 * 00000001800B52C8: call    sub_1800A5D74
 * 00000001800B52CD: mov     r8, rax
 * 00000001800B52D0: mov     r9d, r12d
 * 00000001800B52D3: mov     edx, 1C8h
 * 00000001800B52D8: lea     rcx, [rbp+9E40h+var_550]
 * 00000001800B52DF: call    sub_180073668
 * 00000001800B52E4: nop
 * 00000001800B52E5: mov     r8, rax
 * 00000001800B52E8: mov     rdx, r13
 * 00000001800B52EB: lea     rcx, [rbp+9E40h+var_570]
 * 00000001800B52F2: call    sub_18001B518
 * 00000001800B52F7: nop
 * 00000001800B52F8: lea     r8, aVertex; "/Vertex"
 * 00000001800B52FF: mov     rdx, rax
 * 00000001800B5302: lea     rcx, [rbp+9E40h+var_4890]
 * 00000001800B5309: call    sub_18001B448
 * 00000001800B530E: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5313: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5318: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B531D: mov     rcx, rax
 * 00000001800B5320: call    sub_18007370C
 * 00000001800B5325: nop
 * 00000001800B5326: lea     rcx, [rbp+9E40h+var_570]
 * 00000001800B532D: call    sub_180010F20
 * 00000001800B5332: nop
 * 00000001800B5333: lea     rcx, [rbp+9E40h+var_550]
 * 00000001800B533A: call    sub_180010F20
 * 00000001800B533F: nop
 * 00000001800B5340: lea     rcx, dword_1801C9650
 * 00000001800B5347: call    _Init_thread_footer
 * 00000001800B534C: mov     rax, [rdi+rbx*8]
 * 00000001800B5350: mov     ecx, [r15+rax]
 * 00000001800B5354: cmp     cs:dword_1801C9654, ecx
 * 00000001800B535A: jle     loc_1800B5433
 * 00000001800B5360: lea     rcx, dword_1801C9654
 * 00000001800B5367: call    sub_18000C8D0
 * 00000001800B536C: cmp     cs:dword_1801C9654, r14d
 * 00000001800B5373: jnz     loc_1800B5433
 * 00000001800B5379: lea     rax, unk_180143780
 * 00000001800B5380: mov     qword ptr [rbp+9E40h+var_8E30], rax
 * 00000001800B5387: lea     rax, unk_1801447D0
 * 00000001800B538E: mov     qword ptr [rbp+9E40h+var_8E30+8], rax
 * 00000001800B5395: movups  xmm7, [rbp+9E40h+var_8E30]
 * 00000001800B539C: mov     dword ptr [rbp+9E40h+var_6BC0], esi
 * 00000001800B53A2: mov     dword ptr [rbp+9E40h+var_6BC0+4], esi
 * 00000001800B53A8: movups  xmm6, [rbp+9E40h+var_6BC0]
 * 00000001800B53AF: call    sub_1800A5D74
 * 00000001800B53B4: mov     r8, rax
 * 00000001800B53B7: mov     r9d, r12d
 * 00000001800B53BA: mov     edx, 1CAh
 * 00000001800B53BF: lea     rcx, [rbp+9E40h+var_4F0]
 * 00000001800B53C6: call    sub_180073668
 * 00000001800B53CB: nop
 * 00000001800B53CC: mov     r8, rax
 * 00000001800B53CF: mov     rdx, r13
 * 00000001800B53D2: lea     rcx, [rbp+9E40h+var_510]
 * 00000001800B53D9: call    sub_18001B518
 * 00000001800B53DE: nop
 * 00000001800B53DF: lea     r8, aVertex; "/Vertex"
 * 00000001800B53E6: mov     rdx, rax
 * 00000001800B53E9: lea     rcx, [rbp+9E40h+var_4870]
 * 00000001800B53F0: call    sub_18001B448
 * 00000001800B53F5: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B53FA: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B53FF: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5404: mov     rcx, rax
 * 00000001800B5407: call    sub_18007370C
 * 00000001800B540C: nop
 * 00000001800B540D: lea     rcx, [rbp+9E40h+var_510]
 * 00000001800B5414: call    sub_180010F20
 * 00000001800B5419: nop
 * 00000001800B541A: lea     rcx, [rbp+9E40h+var_4F0]
 * 00000001800B5421: call    sub_180010F20
 * 00000001800B5426: nop
 * 00000001800B5427: lea     rcx, dword_1801C9654
 * 00000001800B542E: call    _Init_thread_footer
 * 00000001800B5433: mov     rax, [rdi+rbx*8]
 * 00000001800B5437: mov     ecx, [r15+rax]
 * 00000001800B543B: cmp     cs:dword_1801C9658, ecx
 * 00000001800B5441: jle     loc_1800B551A
 * 00000001800B5447: lea     rcx, dword_1801C9658
 * 00000001800B544E: call    sub_18000C8D0
 * 00000001800B5453: cmp     cs:dword_1801C9658, r14d
 * 00000001800B545A: jnz     loc_1800B551A
 * 00000001800B5460: lea     rax, unk_180143780
 * 00000001800B5467: mov     qword ptr [rbp+9E40h+var_8E20], rax
 * 00000001800B546E: lea     rax, unk_1801447D0
 * 00000001800B5475: mov     qword ptr [rbp+9E40h+var_8E20+8], rax
 * 00000001800B547C: movups  xmm7, [rbp+9E40h+var_8E20]
 * 00000001800B5483: mov     dword ptr [rbp+9E40h+var_6BA0], esi
 * 00000001800B5489: mov     dword ptr [rbp+9E40h+var_6BA0+4], esi
 * 00000001800B548F: movups  xmm6, [rbp+9E40h+var_6BA0]
 * 00000001800B5496: call    sub_1800A5D74
 * 00000001800B549B: mov     r8, rax
 * 00000001800B549E: mov     r9d, r12d
 * 00000001800B54A1: mov     edx, 1D0h
 * 00000001800B54A6: lea     rcx, [rbp+9E40h+var_490]
 * 00000001800B54AD: call    sub_180073668
 * 00000001800B54B2: nop
 * 00000001800B54B3: mov     r8, rax
 * 00000001800B54B6: mov     rdx, r13
 * 00000001800B54B9: lea     rcx, [rbp+9E40h+var_4B0]
 * 00000001800B54C0: call    sub_18001B518
 * 00000001800B54C5: nop
 * 00000001800B54C6: lea     r8, aVertex; "/Vertex"
 * 00000001800B54CD: mov     rdx, rax
 * 00000001800B54D0: lea     rcx, [rbp+9E40h+var_4850]
 * 00000001800B54D7: call    sub_18001B448
 * 00000001800B54DC: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B54E1: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B54E6: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B54EB: mov     rcx, rax
 * 00000001800B54EE: call    sub_18007370C
 * 00000001800B54F3: nop
 * 00000001800B54F4: lea     rcx, [rbp+9E40h+var_4B0]
 * 00000001800B54FB: call    sub_180010F20
 * 00000001800B5500: nop
 * 00000001800B5501: lea     rcx, [rbp+9E40h+var_490]
 * 00000001800B5508: call    sub_180010F20
 * 00000001800B550D: nop
 * 00000001800B550E: lea     rcx, dword_1801C9658
 * 00000001800B5515: call    _Init_thread_footer
 * 00000001800B551A: mov     rax, [rdi+rbx*8]
 * 00000001800B551E: mov     ecx, [r15+rax]
 * 00000001800B5522: cmp     cs:dword_1801C965C, ecx
 * 00000001800B5528: jle     loc_1800B5601
 * 00000001800B552E: lea     rcx, dword_1801C965C
 * 00000001800B5535: call    sub_18000C8D0
 * 00000001800B553A: cmp     cs:dword_1801C965C, r14d
 * 00000001800B5541: jnz     loc_1800B5601
 * 00000001800B5547: lea     rax, unk_180143780
 * 00000001800B554E: mov     qword ptr [rbp+9E40h+var_8E10], rax
 * 00000001800B5555: lea     rax, unk_1801447D0
 * 00000001800B555C: mov     qword ptr [rbp+9E40h+var_8E10+8], rax
 * 00000001800B5563: movups  xmm7, [rbp+9E40h+var_8E10]
 * 00000001800B556A: mov     dword ptr [rbp+9E40h+var_6B80], esi
 * 00000001800B5570: mov     dword ptr [rbp+9E40h+var_6B80+4], esi
 * 00000001800B5576: movups  xmm6, [rbp+9E40h+var_6B80]
 * 00000001800B557D: call    sub_1800A5D74
 * 00000001800B5582: mov     r8, rax
 * 00000001800B5585: mov     r9d, r12d
 * 00000001800B5588: mov     edx, 1D2h
 * 00000001800B558D: lea     rcx, [rbp+9E40h+var_430]
 * 00000001800B5594: call    sub_180073668
 * 00000001800B5599: nop
 * 00000001800B559A: mov     r8, rax
 * 00000001800B559D: mov     rdx, r13
 * 00000001800B55A0: lea     rcx, [rbp+9E40h+var_450]
 * 00000001800B55A7: call    sub_18001B518
 * 00000001800B55AC: nop
 * 00000001800B55AD: lea     r8, aVertex; "/Vertex"
 * 00000001800B55B4: mov     rdx, rax
 * 00000001800B55B7: lea     rcx, [rbp+9E40h+var_4830]
 * 00000001800B55BE: call    sub_18001B448
 * 00000001800B55C3: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B55C8: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B55CD: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B55D2: mov     rcx, rax
 * 00000001800B55D5: call    sub_18007370C
 * 00000001800B55DA: nop
 * 00000001800B55DB: lea     rcx, [rbp+9E40h+var_450]
 * 00000001800B55E2: call    sub_180010F20
 * 00000001800B55E7: nop
 * 00000001800B55E8: lea     rcx, [rbp+9E40h+var_430]
 * 00000001800B55EF: call    sub_180010F20
 * 00000001800B55F4: nop
 * 00000001800B55F5: lea     rcx, dword_1801C965C
 * 00000001800B55FC: call    _Init_thread_footer
 * 00000001800B5601: mov     rax, [rdi+rbx*8]
 * 00000001800B5605: mov     ecx, [r15+rax]
 * 00000001800B5609: cmp     cs:dword_1801C9660, ecx
 * 00000001800B560F: jle     loc_1800B56E8
 * 00000001800B5615: lea     rcx, dword_1801C9660
 * 00000001800B561C: call    sub_18000C8D0
 * 00000001800B5621: cmp     cs:dword_1801C9660, r14d
 * 00000001800B5628: jnz     loc_1800B56E8
 * 00000001800B562E: lea     rax, unk_180143780
 * 00000001800B5635: mov     qword ptr [rbp+9E40h+var_8E00], rax
 * 00000001800B563C: lea     rax, unk_1801447D0
 * 00000001800B5643: mov     qword ptr [rbp+9E40h+var_8E00+8], rax
 * 00000001800B564A: movups  xmm7, [rbp+9E40h+var_8E00]
 * 00000001800B5651: mov     dword ptr [rbp+9E40h+var_6B60], esi
 * 00000001800B5657: mov     dword ptr [rbp+9E40h+var_6B60+4], esi
 * 00000001800B565D: movups  xmm6, [rbp+9E40h+var_6B60]
 * 00000001800B5664: call    sub_1800A5D74
 * 00000001800B5669: mov     r8, rax
 * 00000001800B566C: mov     r9d, r12d
 * 00000001800B566F: mov     edx, 1D8h
 * 00000001800B5674: lea     rcx, [rbp+9E40h+var_3D0]
 * 00000001800B567B: call    sub_180073668
 * 00000001800B5680: nop
 * 00000001800B5681: mov     r8, rax
 * 00000001800B5684: mov     rdx, r13
 * 00000001800B5687: lea     rcx, [rbp+9E40h+var_3F0]
 * 00000001800B568E: call    sub_18001B518
 * 00000001800B5693: nop
 * 00000001800B5694: lea     r8, aVertex; "/Vertex"
 * 00000001800B569B: mov     rdx, rax
 * 00000001800B569E: lea     rcx, [rbp+9E40h+var_4810]
 * 00000001800B56A5: call    sub_18001B448
 * 00000001800B56AA: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B56AF: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B56B4: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B56B9: mov     rcx, rax
 * 00000001800B56BC: call    sub_18007370C
 * 00000001800B56C1: nop
 * 00000001800B56C2: lea     rcx, [rbp+9E40h+var_3F0]
 * 00000001800B56C9: call    sub_180010F20
 * 00000001800B56CE: nop
 * 00000001800B56CF: lea     rcx, [rbp+9E40h+var_3D0]
 * 00000001800B56D6: call    sub_180010F20
 * 00000001800B56DB: nop
 * 00000001800B56DC: lea     rcx, dword_1801C9660
 * 00000001800B56E3: call    _Init_thread_footer
 * 00000001800B56E8: mov     rax, [rdi+rbx*8]
 * 00000001800B56EC: mov     ecx, [r15+rax]
 * 00000001800B56F0: cmp     cs:dword_1801C9664, ecx
 * 00000001800B56F6: jle     loc_1800B57CF
 * 00000001800B56FC: lea     rcx, dword_1801C9664
 * 00000001800B5703: call    sub_18000C8D0
 * 00000001800B5708: cmp     cs:dword_1801C9664, r14d
 * 00000001800B570F: jnz     loc_1800B57CF
 * 00000001800B5715: lea     rax, unk_180143780
 * 00000001800B571C: mov     qword ptr [rbp+9E40h+var_8DF0], rax
 * 00000001800B5723: lea     rax, unk_1801447D0
 * 00000001800B572A: mov     qword ptr [rbp+9E40h+var_8DF0+8], rax
 * 00000001800B5731: movups  xmm7, [rbp+9E40h+var_8DF0]
 * 00000001800B5738: mov     dword ptr [rbp+9E40h+var_6B40], esi
 * 00000001800B573E: mov     dword ptr [rbp+9E40h+var_6B40+4], esi
 * 00000001800B5744: movups  xmm6, [rbp+9E40h+var_6B40]
 * 00000001800B574B: call    sub_1800A5D74
 * 00000001800B5750: mov     r8, rax
 * 00000001800B5753: mov     r9d, r12d
 * 00000001800B5756: mov     edx, 1DAh
 * 00000001800B575B: lea     rcx, [rbp+9E40h+var_370]
 * 00000001800B5762: call    sub_180073668
 * 00000001800B5767: nop
 * 00000001800B5768: mov     r8, rax
 * 00000001800B576B: mov     rdx, r13
 * 00000001800B576E: lea     rcx, [rbp+9E40h+var_390]
 * 00000001800B5775: call    sub_18001B518
 * 00000001800B577A: nop
 * 00000001800B577B: lea     r8, aVertex; "/Vertex"
 * 00000001800B5782: mov     rdx, rax
 * 00000001800B5785: lea     rcx, [rbp+9E40h+var_47F0]
 * 00000001800B578C: call    sub_18001B448
 * 00000001800B5791: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5796: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B579B: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B57A0: mov     rcx, rax
 * 00000001800B57A3: call    sub_18007370C
 * 00000001800B57A8: nop
 * 00000001800B57A9: lea     rcx, [rbp+9E40h+var_390]
 * 00000001800B57B0: call    sub_180010F20
 * 00000001800B57B5: nop
 * 00000001800B57B6: lea     rcx, [rbp+9E40h+var_370]
 * 00000001800B57BD: call    sub_180010F20
 * 00000001800B57C2: nop
 * 00000001800B57C3: lea     rcx, dword_1801C9664
 * 00000001800B57CA: call    _Init_thread_footer
 * 00000001800B57CF: mov     rax, [rdi+rbx*8]
 * 00000001800B57D3: mov     ecx, [r15+rax]
 * 00000001800B57D7: cmp     cs:dword_1801C9668, ecx
 * 00000001800B57DD: jle     loc_1800B58B6
 * 00000001800B57E3: lea     rcx, dword_1801C9668
 * 00000001800B57EA: call    sub_18000C8D0
 * 00000001800B57EF: cmp     cs:dword_1801C9668, r14d
 * 00000001800B57F6: jnz     loc_1800B58B6
 * 00000001800B57FC: lea     rax, unk_1801411F0
 * 00000001800B5803: mov     qword ptr [rbp+9E40h+var_8DE0], rax
 * 00000001800B580A: lea     rax, unk_180142C40
 * 00000001800B5811: mov     qword ptr [rbp+9E40h+var_8DE0+8], rax
 * 00000001800B5818: movups  xmm7, [rbp+9E40h+var_8DE0]
 * 00000001800B581F: mov     dword ptr [rbp+9E40h+var_6B20], esi
 * 00000001800B5825: mov     dword ptr [rbp+9E40h+var_6B20+4], esi
 * 00000001800B582B: movups  xmm6, [rbp+9E40h+var_6B20]
 * 00000001800B5832: call    sub_1800A5D74
 * 00000001800B5837: mov     r8, rax
 * 00000001800B583A: mov     r9d, r12d
 * 00000001800B583D: mov     edx, 1E0h
 * 00000001800B5842: lea     rcx, [rbp+9E40h+var_310]
 * 00000001800B5849: call    sub_180073668
 * 00000001800B584E: nop
 * 00000001800B584F: mov     r8, rax
 * 00000001800B5852: mov     rdx, r13
 * 00000001800B5855: lea     rcx, [rbp+9E40h+var_330]
 * 00000001800B585C: call    sub_18001B518
 * 00000001800B5861: nop
 * 00000001800B5862: lea     r8, aVertex; "/Vertex"
 * 00000001800B5869: mov     rdx, rax
 * 00000001800B586C: lea     rcx, [rbp+9E40h+var_47D0]
 * 00000001800B5873: call    sub_18001B448
 * 00000001800B5878: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B587D: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5882: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5887: mov     rcx, rax
 * 00000001800B588A: call    sub_18007370C
 * 00000001800B588F: nop
 * 00000001800B5890: lea     rcx, [rbp+9E40h+var_330]
 * 00000001800B5897: call    sub_180010F20
 * 00000001800B589C: nop
 * 00000001800B589D: lea     rcx, [rbp+9E40h+var_310]
 * 00000001800B58A4: call    sub_180010F20
 * 00000001800B58A9: nop
 * 00000001800B58AA: lea     rcx, dword_1801C9668
 * 00000001800B58B1: call    _Init_thread_footer
 * 00000001800B58B6: mov     rax, [rdi+rbx*8]
 * 00000001800B58BA: mov     ecx, [r15+rax]
 * 00000001800B58BE: cmp     cs:dword_1801C966C, ecx
 * 00000001800B58C4: jle     loc_1800B599D
 * 00000001800B58CA: lea     rcx, dword_1801C966C
 * 00000001800B58D1: call    sub_18000C8D0
 * 00000001800B58D6: cmp     cs:dword_1801C966C, r14d
 * 00000001800B58DD: jnz     loc_1800B599D
 * 00000001800B58E3: lea     rax, unk_1801411F0
 * 00000001800B58EA: mov     qword ptr [rbp+9E40h+var_8DD0], rax
 * 00000001800B58F1: lea     rax, unk_180142C40
 * 00000001800B58F8: mov     qword ptr [rbp+9E40h+var_8DD0+8], rax
 * 00000001800B58FF: movups  xmm7, [rbp+9E40h+var_8DD0]
 * 00000001800B5906: mov     dword ptr [rbp+9E40h+var_6B00], esi
 * 00000001800B590C: mov     dword ptr [rbp+9E40h+var_6B00+4], esi
 * 00000001800B5912: movups  xmm6, [rbp+9E40h+var_6B00]
 * 00000001800B5919: call    sub_1800A5D74
 * 00000001800B591E: mov     r8, rax
 * 00000001800B5921: mov     r9d, r12d
 * 00000001800B5924: mov     edx, 1E2h
 * 00000001800B5929: lea     rcx, [rbp+9E40h+var_2B0]
 * 00000001800B5930: call    sub_180073668
 * 00000001800B5935: nop
 * 00000001800B5936: mov     r8, rax
 * 00000001800B5939: mov     rdx, r13
 * 00000001800B593C: lea     rcx, [rbp+9E40h+var_2D0]
 * 00000001800B5943: call    sub_18001B518
 * 00000001800B5948: nop
 * 00000001800B5949: lea     r8, aVertex; "/Vertex"
 * 00000001800B5950: mov     rdx, rax
 * 00000001800B5953: lea     rcx, [rbp+9E40h+var_47B0]
 * 00000001800B595A: call    sub_18001B448
 * 00000001800B595F: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5964: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5969: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B596E: mov     rcx, rax
 * 00000001800B5971: call    sub_18007370C
 * 00000001800B5976: nop
 * 00000001800B5977: lea     rcx, [rbp+9E40h+var_2D0]
 * 00000001800B597E: call    sub_180010F20
 * 00000001800B5983: nop
 * 00000001800B5984: lea     rcx, [rbp+9E40h+var_2B0]
 * 00000001800B598B: call    sub_180010F20
 * 00000001800B5990: nop
 * 00000001800B5991: lea     rcx, dword_1801C966C
 * 00000001800B5998: call    _Init_thread_footer
 * 00000001800B599D: mov     rax, [rdi+rbx*8]
 * 00000001800B59A1: mov     ecx, [r15+rax]
 * 00000001800B59A5: cmp     cs:dword_1801C9670, ecx
 * 00000001800B59AB: jle     loc_1800B5A84
 * 00000001800B59B1: lea     rcx, dword_1801C9670
 * 00000001800B59B8: call    sub_18000C8D0
 * 00000001800B59BD: cmp     cs:dword_1801C9670, r14d
 * 00000001800B59C4: jnz     loc_1800B5A84
 * 00000001800B59CA: lea     rax, unk_1801411F0
 * 00000001800B59D1: mov     qword ptr [rbp+9E40h+var_8DC0], rax
 * 00000001800B59D8: lea     rax, unk_180142C40
 * 00000001800B59DF: mov     qword ptr [rbp+9E40h+var_8DC0+8], rax
 * 00000001800B59E6: movups  xmm7, [rbp+9E40h+var_8DC0]
 * 00000001800B59ED: mov     dword ptr [rbp+9E40h+var_6AE0], esi
 * 00000001800B59F3: mov     dword ptr [rbp+9E40h+var_6AE0+4], esi
 * 00000001800B59F9: movups  xmm6, [rbp+9E40h+var_6AE0]
 * 00000001800B5A00: call    sub_1800A5D74
 * 00000001800B5A05: mov     r8, rax
 * 00000001800B5A08: mov     r9d, r12d
 * 00000001800B5A0B: mov     edx, 1E8h
 * 00000001800B5A10: lea     rcx, [rbp+9E40h+var_250]
 * 00000001800B5A17: call    sub_180073668
 * 00000001800B5A1C: nop
 * 00000001800B5A1D: mov     r8, rax
 * 00000001800B5A20: mov     rdx, r13
 * 00000001800B5A23: lea     rcx, [rbp+9E40h+var_270]
 * 00000001800B5A2A: call    sub_18001B518
 * 00000001800B5A2F: nop
 * 00000001800B5A30: lea     r8, aVertex; "/Vertex"
 * 00000001800B5A37: mov     rdx, rax
 * 00000001800B5A3A: lea     rcx, [rbp+9E40h+var_4790]
 * 00000001800B5A41: call    sub_18001B448
 * 00000001800B5A46: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5A4B: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5A50: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5A55: mov     rcx, rax
 * 00000001800B5A58: call    sub_18007370C
 * 00000001800B5A5D: nop
 * 00000001800B5A5E: lea     rcx, [rbp+9E40h+var_270]
 * 00000001800B5A65: call    sub_180010F20
 * 00000001800B5A6A: nop
 * 00000001800B5A6B: lea     rcx, [rbp+9E40h+var_250]
 * 00000001800B5A72: call    sub_180010F20
 * 00000001800B5A77: nop
 * 00000001800B5A78: lea     rcx, dword_1801C9670
 * 00000001800B5A7F: call    _Init_thread_footer
 * 00000001800B5A84: mov     rax, [rdi+rbx*8]
 * 00000001800B5A88: mov     ecx, [r15+rax]
 * 00000001800B5A8C: cmp     cs:dword_1801C9674, ecx
 * 00000001800B5A92: jle     loc_1800B5B6B
 * 00000001800B5A98: lea     rcx, dword_1801C9674
 * 00000001800B5A9F: call    sub_18000C8D0
 * 00000001800B5AA4: cmp     cs:dword_1801C9674, r14d
 * 00000001800B5AAB: jnz     loc_1800B5B6B
 * 00000001800B5AB1: lea     rax, unk_1801411F0
 * 00000001800B5AB8: mov     qword ptr [rbp+9E40h+var_8DB0], rax
 * 00000001800B5ABF: lea     rax, unk_180142C40
 * 00000001800B5AC6: mov     qword ptr [rbp+9E40h+var_8DB0+8], rax
 * 00000001800B5ACD: movups  xmm7, [rbp+9E40h+var_8DB0]
 * 00000001800B5AD4: mov     dword ptr [rbp+9E40h+var_6AC0], esi
 * 00000001800B5ADA: mov     dword ptr [rbp+9E40h+var_6AC0+4], esi
 * 00000001800B5AE0: movups  xmm6, [rbp+9E40h+var_6AC0]
 * 00000001800B5AE7: call    sub_1800A5D74
 * 00000001800B5AEC: mov     r8, rax
 * 00000001800B5AEF: mov     r9d, r12d
 * 00000001800B5AF2: mov     edx, 1EAh
 * 00000001800B5AF7: lea     rcx, [rbp+9E40h+var_1F0]
 * 00000001800B5AFE: call    sub_180073668
 * 00000001800B5B03: nop
 * 00000001800B5B04: mov     r8, rax
 * 00000001800B5B07: mov     rdx, r13
 * 00000001800B5B0A: lea     rcx, [rbp+9E40h+var_210]
 * 00000001800B5B11: call    sub_18001B518
 * 00000001800B5B16: nop
 * 00000001800B5B17: lea     r8, aVertex; "/Vertex"
 * 00000001800B5B1E: mov     rdx, rax
 * 00000001800B5B21: lea     rcx, [rbp+9E40h+var_4770]
 * 00000001800B5B28: call    sub_18001B448
 * 00000001800B5B2D: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5B32: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5B37: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5B3C: mov     rcx, rax
 * 00000001800B5B3F: call    sub_18007370C
 * 00000001800B5B44: nop
 * 00000001800B5B45: lea     rcx, [rbp+9E40h+var_210]
 * 00000001800B5B4C: call    sub_180010F20
 * 00000001800B5B51: nop
 * 00000001800B5B52: lea     rcx, [rbp+9E40h+var_1F0]
 * 00000001800B5B59: call    sub_180010F20
 * 00000001800B5B5E: nop
 * 00000001800B5B5F: lea     rcx, dword_1801C9674
 * 00000001800B5B66: call    _Init_thread_footer
 * 00000001800B5B6B: mov     rax, [rdi+rbx*8]
 * 00000001800B5B6F: mov     ecx, [r15+rax]
 * 00000001800B5B73: cmp     cs:dword_1801C9678, ecx
 * 00000001800B5B79: jle     loc_1800B5C52
 * 00000001800B5B7F: lea     rcx, dword_1801C9678
 * 00000001800B5B86: call    sub_18000C8D0
 * 00000001800B5B8B: cmp     cs:dword_1801C9678, r14d
 * 00000001800B5B92: jnz     loc_1800B5C52
 * 00000001800B5B98: lea     rax, unk_1801411F0
 * 00000001800B5B9F: mov     qword ptr [rbp+9E40h+var_8DA0], rax
 * 00000001800B5BA6: lea     rax, unk_180142C40
 * 00000001800B5BAD: mov     qword ptr [rbp+9E40h+var_8DA0+8], rax
 * 00000001800B5BB4: movups  xmm7, [rbp+9E40h+var_8DA0]
 * 00000001800B5BBB: mov     dword ptr [rbp+9E40h+var_6AA0], esi
 * 00000001800B5BC1: mov     dword ptr [rbp+9E40h+var_6AA0+4], esi
 * 00000001800B5BC7: movups  xmm6, [rbp+9E40h+var_6AA0]
 * 00000001800B5BCE: call    sub_1800A5D74
 * 00000001800B5BD3: mov     r8, rax
 * 00000001800B5BD6: mov     r9d, r12d
 * 00000001800B5BD9: mov     edx, 1F0h
 * 00000001800B5BDE: lea     rcx, [rbp+9E40h+var_190]
 * 00000001800B5BE5: call    sub_180073668
 * 00000001800B5BEA: nop
 * 00000001800B5BEB: mov     r8, rax
 * 00000001800B5BEE: mov     rdx, r13
 * 00000001800B5BF1: lea     rcx, [rbp+9E40h+var_1B0]
 * 00000001800B5BF8: call    sub_18001B518
 * 00000001800B5BFD: nop
 * 00000001800B5BFE: lea     r8, aVertex; "/Vertex"
 * 00000001800B5C05: mov     rdx, rax
 * 00000001800B5C08: lea     rcx, [rbp+9E40h+var_4750]
 * 00000001800B5C0F: call    sub_18001B448
 * 00000001800B5C14: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5C19: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5C1E: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5C23: mov     rcx, rax
 * 00000001800B5C26: call    sub_18007370C
 * 00000001800B5C2B: nop
 * 00000001800B5C2C: lea     rcx, [rbp+9E40h+var_1B0]
 * 00000001800B5C33: call    sub_180010F20
 * 00000001800B5C38: nop
 * 00000001800B5C39: lea     rcx, [rbp+9E40h+var_190]
 * 00000001800B5C40: call    sub_180010F20
 * 00000001800B5C45: nop
 * 00000001800B5C46: lea     rcx, dword_1801C9678
 * 00000001800B5C4D: call    _Init_thread_footer
 * 00000001800B5C52: mov     rax, [rdi+rbx*8]
 * 00000001800B5C56: mov     ecx, [r15+rax]
 * 00000001800B5C5A: cmp     cs:dword_1801C967C, ecx
 * 00000001800B5C60: jle     loc_1800B5D39
 * 00000001800B5C66: lea     rcx, dword_1801C967C
 * 00000001800B5C6D: call    sub_18000C8D0
 * 00000001800B5C72: cmp     cs:dword_1801C967C, r14d
 * 00000001800B5C79: jnz     loc_1800B5D39
 * 00000001800B5C7F: lea     rax, unk_1801411F0
 * 00000001800B5C86: mov     qword ptr [rbp+9E40h+var_8D90], rax
 * 00000001800B5C8D: lea     rax, unk_180142C40
 * 00000001800B5C94: mov     qword ptr [rbp+9E40h+var_8D90+8], rax
 * 00000001800B5C9B: movups  xmm7, [rbp+9E40h+var_8D90]
 * 00000001800B5CA2: mov     dword ptr [rbp+9E40h+var_6A80], esi
 * 00000001800B5CA8: mov     dword ptr [rbp+9E40h+var_6A80+4], esi
 * 00000001800B5CAE: movups  xmm6, [rbp+9E40h+var_6A80]
 * 00000001800B5CB5: call    sub_1800A5D74
 * 00000001800B5CBA: mov     r8, rax
 * 00000001800B5CBD: mov     r9d, r12d
 * 00000001800B5CC0: mov     edx, 1F2h
 * 00000001800B5CC5: lea     rcx, [rbp+9E40h+var_130]
 * 00000001800B5CCC: call    sub_180073668
 * 00000001800B5CD1: nop
 * 00000001800B5CD2: mov     r8, rax
 * 00000001800B5CD5: mov     rdx, r13
 * 00000001800B5CD8: lea     rcx, [rbp+9E40h+var_150]
 * 00000001800B5CDF: call    sub_18001B518
 * 00000001800B5CE4: nop
 * 00000001800B5CE5: lea     r8, aVertex; "/Vertex"
 * 00000001800B5CEC: mov     rdx, rax
 * 00000001800B5CEF: lea     rcx, [rbp+9E40h+var_4730]
 * 00000001800B5CF6: call    sub_18001B448
 * 00000001800B5CFB: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5D00: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5D05: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5D0A: mov     rcx, rax
 * 00000001800B5D0D: call    sub_18007370C
 * 00000001800B5D12: nop
 * 00000001800B5D13: lea     rcx, [rbp+9E40h+var_150]
 * 00000001800B5D1A: call    sub_180010F20
 * 00000001800B5D1F: nop
 * 00000001800B5D20: lea     rcx, [rbp+9E40h+var_130]
 * 00000001800B5D27: call    sub_180010F20
 * 00000001800B5D2C: nop
 * 00000001800B5D2D: lea     rcx, dword_1801C967C
 * 00000001800B5D34: call    _Init_thread_footer
 * 00000001800B5D39: mov     rax, [rdi+rbx*8]
 * 00000001800B5D3D: mov     ecx, [r15+rax]
 * 00000001800B5D41: cmp     cs:dword_1801C9680, ecx
 * 00000001800B5D47: jle     loc_1800B5E20
 * 00000001800B5D4D: lea     rcx, dword_1801C9680
 * 00000001800B5D54: call    sub_18000C8D0
 * 00000001800B5D59: cmp     cs:dword_1801C9680, r14d
 * 00000001800B5D60: jnz     loc_1800B5E20
 * 00000001800B5D66: lea     rax, unk_1801411F0
 * 00000001800B5D6D: mov     qword ptr [rbp+9E40h+var_8D80], rax
 * 00000001800B5D74: lea     rax, unk_180142C40
 * 00000001800B5D7B: mov     qword ptr [rbp+9E40h+var_8D80+8], rax
 * 00000001800B5D82: movups  xmm7, [rbp+9E40h+var_8D80]
 * 00000001800B5D89: mov     dword ptr [rbp+9E40h+var_6A60], esi
 * 00000001800B5D8F: mov     dword ptr [rbp+9E40h+var_6A60+4], esi
 * 00000001800B5D95: movups  xmm6, [rbp+9E40h+var_6A60]
 * 00000001800B5D9C: call    sub_1800A5D74
 * 00000001800B5DA1: mov     r8, rax
 * 00000001800B5DA4: mov     r9d, r12d
 * 00000001800B5DA7: mov     edx, 1F8h
 * 00000001800B5DAC: lea     rcx, [rbp+9E40h+var_D0]
 * 00000001800B5DB3: call    sub_180073668
 * 00000001800B5DB8: nop
 * 00000001800B5DB9: mov     r8, rax
 * 00000001800B5DBC: mov     rdx, r13
 * 00000001800B5DBF: lea     rcx, [rbp+9E40h+var_F0]
 * 00000001800B5DC6: call    sub_18001B518
 * 00000001800B5DCB: nop
 * 00000001800B5DCC: lea     r8, aVertex; "/Vertex"
 * 00000001800B5DD3: mov     rdx, rax
 * 00000001800B5DD6: lea     rcx, [rbp+9E40h+var_4710]
 * 00000001800B5DDD: call    sub_18001B448
 * 00000001800B5DE2: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5DE7: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5DEC: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5DF1: mov     rcx, rax
 * 00000001800B5DF4: call    sub_18007370C
 * 00000001800B5DF9: nop
 * 00000001800B5DFA: lea     rcx, [rbp+9E40h+var_F0]
 * 00000001800B5E01: call    sub_180010F20
 * 00000001800B5E06: nop
 * 00000001800B5E07: lea     rcx, [rbp+9E40h+var_D0]
 * 00000001800B5E0E: call    sub_180010F20
 * 00000001800B5E13: nop
 * 00000001800B5E14: lea     rcx, dword_1801C9680
 * 00000001800B5E1B: call    _Init_thread_footer
 * 00000001800B5E20: mov     rax, [rdi+rbx*8]
 * 00000001800B5E24: mov     ecx, [r15+rax]
 * 00000001800B5E28: cmp     cs:dword_1801C9684, ecx
 * 00000001800B5E2E: jle     loc_1800B5F07
 * 00000001800B5E34: lea     rcx, dword_1801C9684
 * 00000001800B5E3B: call    sub_18000C8D0
 * 00000001800B5E40: cmp     cs:dword_1801C9684, r14d
 * 00000001800B5E47: jnz     loc_1800B5F07
 * 00000001800B5E4D: lea     rax, unk_1801411F0
 * 00000001800B5E54: mov     qword ptr [rbp+9E40h+var_8D70], rax
 * 00000001800B5E5B: lea     rax, unk_180142C40
 * 00000001800B5E62: mov     qword ptr [rbp+9E40h+var_8D70+8], rax
 * 00000001800B5E69: movups  xmm7, [rbp+9E40h+var_8D70]
 * 00000001800B5E70: mov     dword ptr [rbp+9E40h+var_6A40], esi
 * 00000001800B5E76: mov     dword ptr [rbp+9E40h+var_6A40+4], esi
 * 00000001800B5E7C: movups  xmm6, [rbp+9E40h+var_6A40]
 * 00000001800B5E83: call    sub_1800A5D74
 * 00000001800B5E88: mov     r8, rax
 * 00000001800B5E8B: mov     r9d, r12d
 * 00000001800B5E8E: mov     edx, 1FAh
 * 00000001800B5E93: lea     rcx, [rbp+9E40h+var_70]
 * 00000001800B5E9A: call    sub_180073668
 * 00000001800B5E9F: nop
 * 00000001800B5EA0: mov     r8, rax
 * 00000001800B5EA3: mov     rdx, r13
 * 00000001800B5EA6: lea     rcx, [rbp+9E40h+var_90]
 * 00000001800B5EAD: call    sub_18001B518
 * 00000001800B5EB2: nop
 * 00000001800B5EB3: lea     r8, aVertex; "/Vertex"
 * 00000001800B5EBA: mov     rdx, rax
 * 00000001800B5EBD: lea     rcx, [rbp+9E40h+var_46F0]
 * 00000001800B5EC4: call    sub_18001B448
 * 00000001800B5EC9: movaps  [rsp+9F40h+var_9F18+8], xmm7
 * 00000001800B5ECE: movaps  [rsp+9F40h+var_9F08+8], xmm6
 * 00000001800B5ED3: lea     rdx, [rsp+9F40h+var_9F18+8]
 * 00000001800B5ED8: mov     rcx, rax
 * 00000001800B5EDB: call    sub_18007370C
 * 00000001800B5EE0: nop
 * 00000001800B5EE1: lea     rcx, [rbp+9E40h+var_90]
 * 00000001800B5EE8: call    sub_180010F20
 * 00000001800B5EED: nop
 * 00000001800B5EEE: lea     rcx, [rbp+9E40h+var_70]
 * 00000001800B5EF5: call    sub_180010F20
 * 00000001800B5EFA: nop
 * 00000001800B5EFB: lea     rcx, dword_1801C9684
 * 00000001800B5F02: call    _Init_thread_footer
 * 00000001800B5F07: xor     eax, eax
 * 00000001800B5F09: mov     rcx, [rbp+9E40h+var_50]
 * 00000001800B5F10: xor     rcx, rsp; StackCookie
 * 00000001800B5F13: call    __security_check_cookie
 * 00000001800B5F18: lea     r11, [rsp+9F40h+var_20]
 * 00000001800B5F20: mov     rbx, [r11+30h]
 * 00000001800B5F24: mov     rsi, [r11+38h]
 * 00000001800B5F28: mov     rdi, [r11+40h]
 * 00000001800B5F2C: movaps  xmm6, xmmword ptr [r11-10h]
 * 00000001800B5F31: movaps  xmm7, xmmword ptr [r11-20h]
 * 00000001800B5F36: mov     rsp, r11
 * 00000001800B5F39: pop     r15
 * 00000001800B5F3B: pop     r14
 * 00000001800B5F3D: pop     r13
 * 00000001800B5F3F: pop     r12
 * 00000001800B5F41: pop     rbp
 * 00000001800B5F42: retn
 */
