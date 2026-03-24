/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140BB0010
 * Callers:
 *     KiDecodeMcaFault @ 0x140505970 (KiDecodeMcaFault.c)
 *     sub_1405168E0 @ 0x1405168E0 (sub_1405168E0.c)
 *     FsRtlUninitializeSmallMcb @ 0x140BC9800 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     sub_140516AFC @ 0x140516AFC (sub_140516AFC.c)
 *     sub_140516BE4 @ 0x140516BE4 (sub_140516BE4.c)
 *     sub_140517CE8 @ 0x140517CE8 (sub_140517CE8.c)
 *     sub_140BC50B0 @ 0x140BC50B0 (sub_140BC50B0.c)
 *     sub_140BC6AF8 @ 0x140BC6AF8 (sub_140BC6AF8.c)
 *     sub_140BC7384 @ 0x140BC7384 (sub_140BC7384.c)
 *     sub_140BC74C8 @ 0x140BC74C8 (sub_140BC74C8.c)
 *     sub_140BC7680 @ 0x140BC7680 (sub_140BC7680.c)
 *     sub_140BC7D30 @ 0x140BC7D30 (sub_140BC7D30.c)
 *     KiGetGdtIdt @ 0x140BC9690 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140BC96A0 (KiGetLdtr.c)
 *     KiGetSs @ 0x140BC96B0 (KiGetSs.c)
 *     KiGetTr @ 0x140BC96C0 (KiGetTr.c)
 *     KiErrata361Present @ 0x140BC96D0 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140BC96F0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140BC9700 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140BC97B0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140BC9A60 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140BC9A70 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140BC9BD4 (RtlInitMinimalBarrier.c)
 *     sub_140BCE96C @ 0x140BCE96C (sub_140BCE96C.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x140BB0010
 * Reason: Hex-Rays returned no pseudocode for 0x140BB0010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140BB0010: mov     [rsp-8+arg_0], rcx
 * 0000000140BB0015: push    rbp
 * 0000000140BB0016: push    rbx
 * 0000000140BB0017: push    rsi
 * 0000000140BB0018: push    rdi
 * 0000000140BB0019: push    r12
 * 0000000140BB001B: push    r13
 * 0000000140BB001D: push    r14
 * 0000000140BB001F: push    r15
 * 0000000140BB0021: lea     rbp, [rsp-898h]
 * 0000000140BB0029: sub     rsp, 998h
 * 0000000140BB0030: mov     eax, [rcx+9D8h]
 * 0000000140BB0036: xor     r9d, r9d
 * 0000000140BB0039: mov     r13, rcx
 * 0000000140BB003C: mov     edi, 0FFFFFFF8h
 * 0000000140BB0041: mov     ecx, 88000h
 * 0000000140BB0046: mov     r11d, 0FFFFFFFFh
 * 0000000140BB004C: and     eax, ecx
 * 0000000140BB004E: mov     r10d, 12Fh
 * 0000000140BB0054: lea     r14d, [r9+1]
 * 0000000140BB0058: cmp     eax, ecx
 * 0000000140BB005A: jz      loc_140BB0115
 * 0000000140BB0060: mov     rdx, [r13+900h]
 * 0000000140BB0067: lea     ecx, [r10+1]
 * 0000000140BB006B: mov     rax, rdx
 * 0000000140BB006E: lea     r8d, [r9+26h]
 * 0000000140BB0072: mov     [rax], r9
 * 0000000140BB0075: add     ecx, edi
 * 0000000140BB0077: add     rax, 8
 * 0000000140BB007B: sub     r8, r14
 * 0000000140BB007E: jnz     short loc_140BB0072
 * 0000000140BB0080: test    ecx, ecx
 * 0000000140BB0082: jz      short loc_140BB008F
 * 0000000140BB0084: mov     [rax], r9b
 * 0000000140BB0087: add     rax, r14
 * 0000000140BB008A: add     ecx, r11d
 * 0000000140BB008D: jnz     short loc_140BB0084
 * 0000000140BB008F: movups  xmm0, xmmword ptr [r13+868h]
 * 0000000140BB0097: lea     rax, [r13+898h]
 * 0000000140BB009E: mov     rcx, rax
 * 0000000140BB00A1: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BB00A6: shr     rcx, 10h
 * 0000000140BB00AA: movups  xmm1, xmmword ptr [r13+878h]
 * 0000000140BB00B2: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BB00B7: movups  xmm0, xmmword ptr [r13+888h]
 * 0000000140BB00BF: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BB00C7: mov     [rbp+152h], rdx
 * 0000000140BB00CE: mov     word ptr [rbp+8D0h+var_780], r10w
 * 0000000140BB00D6: mov     [rdx+10h], ax
 * 0000000140BB00DA: shr     rax, 20h
 * 0000000140BB00DE: mov     [rdx+16h], cx
 * 0000000140BB00E2: mov     [rdx+18h], eax
 * 0000000140BB00E5: cli
 * 0000000140BB00E6: test    dword ptr [r13+9D8h], 40000000h
 * 0000000140BB00F1: jz      short loc_140BB00FB
 * 0000000140BB00F3: xor     eax, eax
 * 0000000140BB00F5: mov     dr7, rax
 * 0000000140BB00F8: sti
 * 0000000140BB00F9: jmp     short loc_140BB0117
 * 0000000140BB00FB: sidt    fword ptr [rbp+8D0h+var_698]
 * 0000000140BB0102: lidt    fword ptr [rbp+8D0h+var_780]
 * 0000000140BB0109: mov     dr7, r9
 * 0000000140BB010D: lidt    fword ptr [rbp+8D0h+var_698]
 * 0000000140BB0114: sti
 * 0000000140BB0115: xor     eax, eax
 * 0000000140BB0117: test    dword ptr [r13+9DCh], 100h
 * 0000000140BB0122: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BB0126: jz      short loc_140BB013E
 * 0000000140BB0128: mov     rax, [rbp+8D8h]
 * 0000000140BB012F: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BB0133: xor     eax, eax
 * 0000000140BB0135: mov     [rbp+8D8h], rax
 * 0000000140BB013C: jmp     short loc_140BB0140
 * 0000000140BB013E: xor     eax, eax
 * 0000000140BB0140: mov     r15d, 20h ; ' '
 * 0000000140BB0146: mov     [r13+848h], eax
 * 0000000140BB014D: xor     esi, esi
 * 0000000140BB014F: mov     rbx, 7010008004002001h
 * 0000000140BB0159: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140BB0164: lea     r12d, [r15-1Ch]
 * 0000000140BB0168: jz      short loc_140BB0177
 * 0000000140BB016A: cmp     [r13+0AC0h], rsi
 * 0000000140BB0171: jnz     loc_140BB04BA
 * 0000000140BB0177: mov     r14, [r13+7D8h]
 * 0000000140BB017E: lea     rbx, [r13+7B8h]
 * 0000000140BB0185: mov     [rbp+8D0h+arg_8], r14
 * 0000000140BB018C: lea     rdx, [rbp+8D0h+var_148]
 * 0000000140BB0193: mov     rcx, rbx
 * 0000000140BB0196: mov     r8d, r15d
 * 0000000140BB0199: mov     r9, r12
 * 0000000140BB019C: mov     r10d, 1
 * 0000000140BB01A2: mov     rax, [rcx]
 * 0000000140BB01A5: add     r8d, edi
 * 0000000140BB01A8: mov     [rdx], rax
 * 0000000140BB01AB: add     rcx, 8
 * 0000000140BB01AF: add     rdx, 8
 * 0000000140BB01B3: sub     r9, r10
 * 0000000140BB01B6: jnz     short loc_140BB01A2
 * 0000000140BB01B8: test    r8d, r8d
 * 0000000140BB01BB: jz      short loc_140BB01CC
 * 0000000140BB01BD: mov     al, [rcx]
 * 0000000140BB01BF: add     rcx, r10
 * 0000000140BB01C2: mov     [rdx], al
 * 0000000140BB01C4: add     rdx, r10
 * 0000000140BB01C7: add     r8d, r11d
 * 0000000140BB01CA: jnz     short loc_140BB01BD
 * 0000000140BB01CC: mov     [r13+7D8h], rsi
 * 0000000140BB01D3: mov     ecx, r15d
 * 0000000140BB01D6: mov     [r13+848h], esi
 * 0000000140BB01DD: mov     rax, rbx
 * 0000000140BB01E0: mov     rdx, r12
 * 0000000140BB01E3: mov     [rax], rsi
 * 0000000140BB01E6: add     ecx, edi
 * 0000000140BB01E8: add     rax, 8
 * 0000000140BB01EC: sub     rdx, r10
 * 0000000140BB01EF: jnz     short loc_140BB01E3
 * 0000000140BB01F1: test    ecx, ecx
 * 0000000140BB01F3: jz      short loc_140BB0200
 * 0000000140BB01F5: mov     [rax], sil
 * 0000000140BB01F8: add     rax, r10
 * 0000000140BB01FB: add     ecx, r11d
 * 0000000140BB01FE: jnz     short loc_140BB01F5
 * 0000000140BB0200: mov     r10d, [r13+804h]
 * 0000000140BB0207: mov     r9, r13
 * 0000000140BB020A: add     [r13+848h], r10d
 * 0000000140BB0211: mov     rax, r13
 * 0000000140BB0214: mov     r11d, [r13+834h]
 * 0000000140BB021B: mov     rsi, [r13+838h]
 * 0000000140BB0222: lea     rcx, [r10+r13]
 * 0000000140BB0226: cmp     r13, rcx
 * 0000000140BB0229: jnb     short loc_140BB023B
 * 0000000140BB022B: mov     edx, 40h ; '@'
 * 0000000140BB0230: prefetchnta byte ptr [rax]
 * 0000000140BB0233: add     rax, rdx
 * 0000000140BB0236: cmp     rax, rcx
 * 0000000140BB0239: jb      short loc_140BB0230
 * 0000000140BB023B: mov     edi, r10d
 * 0000000140BB023E: mov     r8, rsi
 * 0000000140BB0241: shr     edi, 7
 * 0000000140BB0244: mov     edx, 1
 * 0000000140BB0249: test    edi, edi
 * 0000000140BB024B: jz      short loc_140BB02C0
 * 0000000140BB024D: mov     rbx, 7010008004002001h
 * 0000000140BB0257: mov     r14d, 0FFFFFFFFh
 * 0000000140BB025D: mov     eax, 8
 * 0000000140BB0262: xor     r8, [r9]
 * 0000000140BB0265: mov     ecx, r11d
 * 0000000140BB0268: rol     r8, cl
 * 0000000140BB026B: xor     r8, [r9+8]
 * 0000000140BB026F: add     r9, 10h
 * 0000000140BB0273: rol     r8, cl
 * 0000000140BB0276: sub     rax, rdx
 * 0000000140BB0279: jnz     short loc_140BB0262
 * 0000000140BB027B: mov     rcx, r9
 * 0000000140BB027E: sub     rcx, r13
 * 0000000140BB0281: xor     rcx, rsi
 * 0000000140BB0284: mov     rax, rcx
 * 0000000140BB0287: rol     rax, 11h
 * 0000000140BB028B: xor     rcx, rax
 * 0000000140BB028E: mov     rax, rbx
 * 0000000140BB0291: mul     rcx
 * 0000000140BB0294: mov     [rbp+8D0h+var_3B8], rdx
 * 0000000140BB029B: xor     edx, eax
 * 0000000140BB029D: xor     r11d, edx
 * 0000000140BB02A0: mov     edx, 1
 * 0000000140BB02A5: and     r11d, 3Fh
 * 0000000140BB02A9: cmovz   r11d, edx
 * 0000000140BB02AD: add     edi, r14d
 * 0000000140BB02B0: jnz     short loc_140BB025D
 * 0000000140BB02B2: mov     r14, [rbp+8D0h+arg_8]
 * 0000000140BB02B9: lea     rbx, [r13+7B8h]
 * 0000000140BB02C0: and     r10d, 7Fh
 * 0000000140BB02C4: cmp     r10d, 8
 * 0000000140BB02C8: jb      short loc_140BB02E7
 * 0000000140BB02CA: mov     eax, r10d
 * 0000000140BB02CD: shr     rax, 3
 * 0000000140BB02D1: xor     r8, [r9]
 * 0000000140BB02D4: mov     ecx, r11d
 * 0000000140BB02D7: rol     r8, cl
 * 0000000140BB02DA: add     r9, 8
 * 0000000140BB02DE: add     r10d, 0FFFFFFF8h
 * 0000000140BB02E2: sub     rax, rdx
 * 0000000140BB02E5: jnz     short loc_140BB02D1
 * 0000000140BB02E7: xor     esi, esi
 * 0000000140BB02E9: test    r10d, r10d
 * 0000000140BB02EC: jz      short loc_140BB0310
 * 0000000140BB02EE: mov     r13d, 0FFFFFFFFh
 * 0000000140BB02F4: movzx   eax, byte ptr [r9]
 * 0000000140BB02F8: mov     ecx, r11d
 * 0000000140BB02FB: xor     r8, rax
 * 0000000140BB02FE: add     r9, rdx
 * 0000000140BB0301: rol     r8, cl
 * 0000000140BB0304: add     r10d, r13d
 * 0000000140BB0307: jnz     short loc_140BB02F4
 * 0000000140BB0309: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BB0310: mov     [r13+7D8h], r14
 * 0000000140BB0317: lea     rcx, [rbp+8D0h+var_148]
 * 0000000140BB031E: mov     r14d, 1
 * 0000000140BB0324: mov     edx, r15d
 * 0000000140BB0327: mov     r9, r12
 * 0000000140BB032A: mov     rax, [rcx]
 * 0000000140BB032D: add     edx, 0FFFFFFF8h
 * 0000000140BB0330: mov     [rbx], rax
 * 0000000140BB0333: add     rcx, 8
 * 0000000140BB0337: add     rbx, 8
 * 0000000140BB033B: sub     r9, r14
 * 0000000140BB033E: jnz     short loc_140BB032A
 * 0000000140BB0340: test    edx, edx
 * 0000000140BB0342: jz      short loc_140BB0359
 * 0000000140BB0344: mov     r11d, 0FFFFFFFFh
 * 0000000140BB034A: mov     al, [rcx]
 * 0000000140BB034C: add     rcx, r14
 * 0000000140BB034F: mov     [rbx], al
 * 0000000140BB0351: add     rbx, r14
 * 0000000140BB0354: add     edx, r11d
 * 0000000140BB0357: jnz     short loc_140BB034A
 * 0000000140BB0359: cmp     [r13+7D8h], r8
 * 0000000140BB0360: jz      loc_140BB04B0
 * 0000000140BB0366: mov     ecx, [r13+804h]
 * 0000000140BB036D: mov     rax, [r13+588h]
 * 0000000140BB0374: mov     [rax], r13
 * 0000000140BB0377: mov     [rax+10h], ecx
 * 0000000140BB037A: mov     rcx, [r13+7D8h]
 * 0000000140BB0381: cmp     [r13+918h], esi
 * 0000000140BB0388: jnz     loc_140BB04B0
 * 0000000140BB038E: mov     rax, [r13+588h]
 * 0000000140BB0395: xor     rcx, r8
 * 0000000140BB0398: mov     [rax+18h], rcx
 * 0000000140BB039C: cmp     [r13+918h], esi
 * 0000000140BB03A3: jnz     loc_140BB04B0
 * 0000000140BB03A9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB03B3: add     rax, r13
 * 0000000140BB03B6: mov     [r13+920h], rax
 * 0000000140BB03BD: mov     [r13+928h], rsi
 * 0000000140BB03C4: mov     qword ptr [r13+930h], 101h
 * 0000000140BB03CF: mov     [r13+938h], r8
 * 0000000140BB03D6: mov     [r13+918h], r14d
 * 0000000140BB03DD: mov     ecx, [r13+9D8h]
 * 0000000140BB03E4: bt      ecx, 1Dh
 * 0000000140BB03E8: jb      loc_140BB04B0
 * 0000000140BB03EE: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BB03F9: jz      loc_140BB04B0
 * 0000000140BB03FF: test    r14b, cl
 * 0000000140BB0402: jz      loc_140BB04B0
 * 0000000140BB0408: mov     ecx, [r13+0A74h]
 * 0000000140BB040F: mov     eax, [r13+804h]
 * 0000000140BB0416: mov     r10, [r13+838h]
 * 0000000140BB041D: sub     eax, ecx
 * 0000000140BB041F: mov     r8, [r13+0A78h]
 * 0000000140BB0426: lea     rdx, [rcx+r13]
 * 0000000140BB042A: mov     ecx, eax
 * 0000000140BB042C: shr     rcx, 3
 * 0000000140BB0430: lea     r9, [rdx+rcx*8]
 * 0000000140BB0434: jmp     short loc_140BB0457
 * 0000000140BB0436: xor     [rdx], r8
 * 0000000140BB0439: mov     rax, [rdx]
 * 0000000140BB043C: movzx   ecx, r8b
 * 0000000140BB0440: xor     rax, r10
 * 0000000140BB0443: and     ecx, 3Fh
 * 0000000140BB0446: ror     r8, cl
 * 0000000140BB0449: add     r8, rax
 * 0000000140BB044C: xor     r8, 0EFAh
 * 0000000140BB0453: add     rdx, 8
 * 0000000140BB0457: cmp     rdx, r9
 * 0000000140BB045A: jnz     short loc_140BB0436
 * 0000000140BB045C: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BB0465: cmp     r8, [r13+0A80h]
 * 0000000140BB046C: jz      short loc_140BB04B0
 * 0000000140BB046E: mov     ecx, [r13+804h]
 * 0000000140BB0475: mov     rax, [r13+588h]
 * 0000000140BB047C: mov     [rax], r13
 * 0000000140BB047F: mov     [rax+10h], ecx
 * 0000000140BB0482: mov     rcx, [r13+0A80h]
 * 0000000140BB0489: cmp     [r13+918h], esi
 * 0000000140BB0490: jnz     short loc_140BB04A0
 * 0000000140BB0492: mov     rax, [r13+588h]
 * 0000000140BB0499: xor     rcx, r8
 * 0000000140BB049C: mov     [rax+18h], rcx
 * 0000000140BB04A0: xor     edx, edx
 * 0000000140BB04A2: mov     r9d, 100h
 * 0000000140BB04A8: mov     rcx, r13
 * 0000000140BB04AB: call    sub_140BC7384
 * 0000000140BB04B0: mov     rbx, 7010008004002001h
 * 0000000140BB04BA: mov     r8d, [r13+9D8h]
 * 0000000140BB04C1: mov     ecx, 2
 * 0000000140BB04C6: or      r8d, ecx
 * 0000000140BB04C9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB04D0: mov     [r13+9D8h], r8d
 * 0000000140BB04D7: mov     r9, 0ABCC77118461CEFDh
 * 0000000140BB04E1: add     [r13+854h], r14d
 * 0000000140BB04E8: test    r12b, r8b
 * 0000000140BB04EB: jz      loc_140BB09AC
 * 0000000140BB04F1: bt      r8d, 16h
 * 0000000140BB04F6: jb      loc_140BB09AC
 * 0000000140BB04FC: mov     r10, [r13+0AB8h]
 * 0000000140BB0503: mov     eax, [r13+9DCh]
 * 0000000140BB050A: mov     esi, [r13+804h]
 * 0000000140BB0511: mov     r11, [r13+0A40h]
 * 0000000140BB0518: mov     r15d, [r13+828h]
 * 0000000140BB051F: mov     [rbp+8D0h+arg_8], r10
 * 0000000140BB0526: test    cl, al
 * 0000000140BB0528: jz      short loc_140BB0531
 * 0000000140BB052A: mov     r11, [r13+5D0h]
 * 0000000140BB0531: mov     rax, [r13+2C8h]
 * 0000000140BB0538: mov     r12, [r13+170h]
 * 0000000140BB053F: mov     [rbp+8D0h+var_940], rax
 * 0000000140BB0543: mov     rax, [r13+340h]
 * 0000000140BB054A: mov     [rsp+9D0h+var_968], rax
 * 0000000140BB054F: mov     [rsp+9D0h+var_978], r12
 * 0000000140BB0554: rdtsc
 * 0000000140BB0556: shl     rdx, 20h
 * 0000000140BB055A: or      rax, rdx
 * 0000000140BB055D: mov     rcx, rax
 * 0000000140BB0560: ror     rax, 3
 * 0000000140BB0564: xor     rcx, rax
 * 0000000140BB0567: mov     rax, rbx
 * 0000000140BB056A: mul     rcx
 * 0000000140BB056D: mov     rcx, rdx
 * 0000000140BB0570: mov     [rbp+8D0h+var_3A0], rdx
 * 0000000140BB0577: xor     rcx, rax
 * 0000000140BB057A: mov     rax, r9
 * 0000000140BB057D: mul     rcx
 * 0000000140BB0580: mov     r9, rdi
 * 0000000140BB0583: shr     rdx, 1Ah
 * 0000000140BB0587: imul    rax, rdx, 5F5E100h
 * 0000000140BB058E: sub     rcx, rax
 * 0000000140BB0591: sub     r9, rcx
 * 0000000140BB0594: mov     [rbp+8D0h+var_840], r9
 * 0000000140BB059B: bt      r8d, 19h
 * 0000000140BB05A0: jnb     loc_140BB063C
 * 0000000140BB05A6: rdtsc
 * 0000000140BB05A8: shl     rdx, 20h
 * 0000000140BB05AC: mov     r13, 0CCCCCCCCCCCCCCCDh
 * 0000000140BB05B6: or      rax, rdx
 * 0000000140BB05B9: mov     rcx, rax
 * 0000000140BB05BC: ror     rax, 3
 * 0000000140BB05C0: xor     rcx, rax
 * 0000000140BB05C3: mov     rax, rbx
 * 0000000140BB05C6: mul     rcx
 * 0000000140BB05C9: mov     rcx, rdx
 * 0000000140BB05CC: mov     [rbp+8D0h+var_398], rdx
 * 0000000140BB05D3: xor     rcx, rax
 * 0000000140BB05D6: mov     rax, r13
 * 0000000140BB05D9: mul     rcx
 * 0000000140BB05DC: shr     rdx, 3
 * 0000000140BB05E0: lea     rax, [rdx+rdx*4]
 * 0000000140BB05E4: add     rax, rax
 * 0000000140BB05E7: sub     rcx, rax
 * 0000000140BB05EA: mov     eax, 2
 * 0000000140BB05EF: cmp     rcx, rax
 * 0000000140BB05F2: jnb     short loc_140BB063C
 * 0000000140BB05F4: rdtsc
 * 0000000140BB05F6: shl     rdx, 20h
 * 0000000140BB05FA: or      rax, rdx
 * 0000000140BB05FD: mov     rcx, rax
 * 0000000140BB0600: ror     rax, 3
 * 0000000140BB0604: xor     rcx, rax
 * 0000000140BB0607: mov     rax, rbx
 * 0000000140BB060A: mul     rcx
 * 0000000140BB060D: mov     rcx, rdx
 * 0000000140BB0610: mov     [rbp+8D0h+var_390], rdx
 * 0000000140BB0617: xor     rcx, rax
 * 0000000140BB061A: mov     rax, r13
 * 0000000140BB061D: mul     rcx
 * 0000000140BB0620: shr     rdx, 3
 * 0000000140BB0624: lea     rax, [rdx+rdx*4]
 * 0000000140BB0628: add     rax, rax
 * 0000000140BB062B: sub     rcx, rax
 * 0000000140BB062E: add     rcx, r14
 * 0000000140BB0631: imul    rcx, r9
 * 0000000140BB0635: mov     [rbp+8D0h+var_840], rcx
 * 0000000140BB063C: xor     r9d, r9d
 * 0000000140BB063F: mov     ebx, r9d
 * 0000000140BB0642: mov     r14d, r9d
 * 0000000140BB0645: lea     eax, [r9+1]
 * 0000000140BB0649: test    al, r8b
 * 0000000140BB064C: lea     ecx, [rax+3Fh]
 * 0000000140BB064F: cmovz   esi, r15d
 * 0000000140BB0653: test    cl, r8b
 * 0000000140BB0656: jnz     short loc_140BB0660
 * 0000000140BB0658: mov     r13d, r9d
 * 0000000140BB065B: jmp     loc_140BB0739
 * 0000000140BB0660: mov     r13d, eax
 * 0000000140BB0663: rdtsc
 * 0000000140BB0665: shl     rdx, 20h
 * 0000000140BB0669: or      rax, rdx
 * 0000000140BB066C: mov     rcx, rax
 * 0000000140BB066F: ror     rax, 3
 * 0000000140BB0673: xor     rcx, rax
 * 0000000140BB0676: mov     rax, 7010008004002001h
 * 0000000140BB0680: mul     rcx
 * 0000000140BB0683: mov     ecx, 15Dh
 * 0000000140BB0688: mov     rbx, rdx
 * 0000000140BB068B: mov     [rbp+8D0h+var_388], rdx
 * 0000000140BB0692: mov     rdx, [rbp+8D0h+arg_0]
 * 0000000140BB0699: xor     rbx, rax
 * 0000000140BB069C: mov     r14, rbx
 * 0000000140BB069F: mov     r8, rbx
 * 0000000140BB06A2: xor     r14, rdx
 * 0000000140BB06A5: lea     rax, [rdx+0AE0h]
 * 0000000140BB06AC: xor     [rax], r8
 * 0000000140BB06AF: lea     rax, [rax-8]
 * 0000000140BB06B3: ror     r8, cl
 * 0000000140BB06B6: sub     ecx, r13d
 * 0000000140BB06B9: jnz     short loc_140BB06AC
 * 0000000140BB06BB: lea     r9, [r15-0AE8h]
 * 0000000140BB06C2: mov     r12, r15
 * 0000000140BB06C5: shr     r9, 3
 * 0000000140BB06C9: test    r9d, r9d
 * 0000000140BB06CC: jz      short loc_140BB070C
 * 0000000140BB06CE: movsxd  r10, r9d
 * 0000000140BB06D1: mov     rdi, r13
 * 0000000140BB06D4: add     r10, 15Ch
 * 0000000140BB06DB: lea     r10, [rdx+r10*8]
 * 0000000140BB06DF: mov     rdx, [r10]
 * 0000000140BB06E2: lea     rax, [r14+r14]
 * 0000000140BB06E6: mov     ecx, r9d
 * 0000000140BB06E9: lea     r10, [r10-8]
 * 0000000140BB06ED: ror     rdx, cl
 * 0000000140BB06F0: mov     r14, rdx
 * 0000000140BB06F3: xor     r14, rax
 * 0000000140BB06F6: sub     r9d, edi
 * 0000000140BB06F9: jnz     short loc_140BB06DF
 * 0000000140BB06FB: mov     r10, [rbp+8D0h+arg_8]
 * 0000000140BB0702: mov     r12, r15
 * 0000000140BB0705: mov     rdx, [rbp+8D0h+arg_0]
 * 0000000140BB070C: mov     ecx, esi
 * 0000000140BB070E: add     rdx, r12
 * 0000000140BB0711: sub     ecx, r15d
 * 0000000140BB0714: shr     ecx, 3
 * 0000000140BB0717: test    ecx, ecx
 * 0000000140BB0719: jz      short loc_140BB0734
 * 0000000140BB071B: lea     rdx, [rdx+rcx*8]
 * 0000000140BB071F: mov     rax, r13
 * 0000000140BB0722: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140BB0726: xor     [rdx], r8
 * 0000000140BB0729: lea     rdx, [rdx-8]
 * 0000000140BB072D: ror     r8, cl
 * 0000000140BB0730: sub     ecx, eax
 * 0000000140BB0732: jnz     short loc_140BB0726
 * 0000000140BB0734: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BB0739: test    r10, r10
 * 0000000140BB073C: jz      short loc_140BB0762
 * 0000000140BB073E: mov     rcx, [rbp+8D0h+arg_0]
 * 0000000140BB0745: lea     r8, [rbp+8D0h+var_840]
 * 0000000140BB074C: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BB0751: mov     r9, r12
 * 0000000140BB0754: mov     edx, esi
 * 0000000140BB0756: mov     [rsp+9D0h+BugCheckParameter4], r10
 * 0000000140BB075B: call    KeGuardDispatchICall
 * 0000000140BB0760: jmp     short loc_140BB079A
 * 0000000140BB0762: xor     edx, edx
 * 0000000140BB0764: test    r11, r11
 * 0000000140BB0767: jnz     short loc_140BB077C
 * 0000000140BB0769: lea     r8, [rbp+8D0h+var_840]
 * 0000000140BB0770: xor     ecx, ecx
 * 0000000140BB0772: mov     rax, r12
 * 0000000140BB0775: call    KeGuardDispatchICall
 * 0000000140BB077A: jmp     short loc_140BB079A
 * 0000000140BB077C: lea     rax, [rbp+8D0h+var_840]
 * 0000000140BB0783: xor     r9d, r9d
 * 0000000140BB0786: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BB078B: xor     r8d, r8d
 * 0000000140BB078E: mov     rax, [rbp+8D0h+var_940]
 * 0000000140BB0792: mov     rcx, r11
 * 0000000140BB0795: call    KeGuardDispatchICall
 * 0000000140BB079A: xor     r12d, r12d
 * 0000000140BB079D: test    r13d, r13d
 * 0000000140BB07A0: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BB07A7: jz      loc_140BB09A0
 * 0000000140BB07AD: mov     r8, rbx
 * 0000000140BB07B0: lea     rax, [r13+0AE0h]
 * 0000000140BB07B7: xor     r8, r13
 * 0000000140BB07BA: lea     r10d, [r12+1]
 * 0000000140BB07BF: mov     ecx, 15Dh
 * 0000000140BB07C4: xor     [rax], rbx
 * 0000000140BB07C7: lea     rax, [rax-8]
 * 0000000140BB07CB: ror     rbx, cl
 * 0000000140BB07CE: sub     ecx, r10d
 * 0000000140BB07D1: jnz     short loc_140BB07C4
 * 0000000140BB07D3: lea     r9, [r15-0AE8h]
 * 0000000140BB07DA: mov     r11, r15
 * 0000000140BB07DD: shr     r9, 3
 * 0000000140BB07E1: test    r9d, r9d
 * 0000000140BB07E4: jz      short loc_140BB081B
 * 0000000140BB07E6: movsxd  rax, r9d
 * 0000000140BB07E9: lea     r10, [r13+0AE0h]
 * 0000000140BB07F0: lea     r11d, [rcx+1]
 * 0000000140BB07F4: lea     r10, [r10+rax*8]
 * 0000000140BB07F8: mov     rdx, [r10]
 * 0000000140BB07FB: lea     rax, [r8+r8]
 * 0000000140BB07FF: mov     ecx, r9d
 * 0000000140BB0802: lea     r10, [r10-8]
 * 0000000140BB0806: ror     rdx, cl
 * 0000000140BB0809: mov     r8, rdx
 * 0000000140BB080C: xor     r8, rax
 * 0000000140BB080F: sub     r9d, r11d
 * 0000000140BB0812: jnz     short loc_140BB07F8
 * 0000000140BB0814: mov     r11, r15
 * 0000000140BB0817: lea     r10d, [r9+1]
 * 0000000140BB081B: sub     esi, r15d
 * 0000000140BB081E: lea     rcx, [r11+r13]
 * 0000000140BB0822: shr     esi, 3
 * 0000000140BB0825: test    esi, esi
 * 0000000140BB0827: jz      short loc_140BB0843
 * 0000000140BB0829: mov     edx, esi
 * 0000000140BB082B: dec     rdx
 * 0000000140BB082E: lea     rdx, [rcx+rdx*8]
 * 0000000140BB0832: xor     [rdx], rbx
 * 0000000140BB0835: mov     ecx, esi
 * 0000000140BB0837: ror     rbx, cl
 * 0000000140BB083A: lea     rdx, [rdx-8]
 * 0000000140BB083E: sub     esi, r10d
 * 0000000140BB0841: jnz     short loc_140BB0832
 * 0000000140BB0843: cmp     r8, r14
 * 0000000140BB0846: jz      loc_140BB09A0
 * 0000000140BB084C: mov     rax, [r13+588h]
 * 0000000140BB0853: mov     ecx, [r13+804h]
 * 0000000140BB085A: mov     [rax], r13
 * 0000000140BB085D: mov     [rax+10h], ecx
 * 0000000140BB0860: cmp     [r13+918h], r12d
 * 0000000140BB0867: jnz     loc_140BB09A0
 * 0000000140BB086D: mov     rax, [r13+588h]
 * 0000000140BB0874: mov     rcx, r8
 * 0000000140BB0877: xor     rcx, r14
 * 0000000140BB087A: mov     [rax+18h], rcx
 * 0000000140BB087E: cmp     [r13+918h], r12d
 * 0000000140BB0885: jnz     loc_140BB09A0
 * 0000000140BB088B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB0895: mov     r14d, 1
 * 0000000140BB089B: add     rax, r13
 * 0000000140BB089E: mov     [r13+920h], rax
 * 0000000140BB08A5: mov     [r13+928h], r12
 * 0000000140BB08AC: mov     qword ptr [r13+930h], 10Eh
 * 0000000140BB08B7: mov     [r13+938h], r8
 * 0000000140BB08BE: mov     [r13+918h], r14d
 * 0000000140BB08C5: mov     ecx, [r13+9D8h]
 * 0000000140BB08CC: bt      ecx, 1Dh
 * 0000000140BB08D0: jb      loc_140BB0998
 * 0000000140BB08D6: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BB08E1: jz      loc_140BB0998
 * 0000000140BB08E7: test    r14b, cl
 * 0000000140BB08EA: jz      loc_140BB0998
 * 0000000140BB08F0: mov     ecx, [r13+0A74h]
 * 0000000140BB08F7: mov     eax, [r13+804h]
 * 0000000140BB08FE: mov     r10, [r13+838h]
 * 0000000140BB0905: sub     eax, ecx
 * 0000000140BB0907: mov     r8, [r13+0A78h]
 * 0000000140BB090E: lea     rdx, [rcx+r13]
 * 0000000140BB0912: mov     ecx, eax
 * 0000000140BB0914: shr     rcx, 3
 * 0000000140BB0918: lea     r9, [rdx+rcx*8]
 * 0000000140BB091C: jmp     short loc_140BB093F
 * 0000000140BB091E: xor     [rdx], r8
 * 0000000140BB0921: mov     rax, [rdx]
 * 0000000140BB0924: movzx   ecx, r8b
 * 0000000140BB0928: xor     rax, r10
 * 0000000140BB092B: and     ecx, 3Fh
 * 0000000140BB092E: ror     r8, cl
 * 0000000140BB0931: add     r8, rax
 * 0000000140BB0934: xor     r8, 0EFAh
 * 0000000140BB093B: add     rdx, 8
 * 0000000140BB093F: cmp     rdx, r9
 * 0000000140BB0942: jnz     short loc_140BB091E
 * 0000000140BB0944: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BB094D: cmp     r8, [r13+0A80h]
 * 0000000140BB0954: jz      short loc_140BB0998
 * 0000000140BB0956: mov     ecx, [r13+804h]
 * 0000000140BB095D: mov     rax, [r13+588h]
 * 0000000140BB0964: mov     [rax], r13
 * 0000000140BB0967: mov     [rax+10h], ecx
 * 0000000140BB096A: mov     rcx, [r13+0A80h]
 * 0000000140BB0971: cmp     [r13+918h], r12d
 * 0000000140BB0978: jnz     short loc_140BB0988
 * 0000000140BB097A: mov     rax, [r13+588h]
 * 0000000140BB0981: xor     rcx, r8
 * 0000000140BB0984: mov     [rax+18h], rcx
 * 0000000140BB0988: xor     edx, edx
 * 0000000140BB098A: mov     r9d, 100h
 * 0000000140BB0990: mov     rcx, r13
 * 0000000140BB0993: call    sub_140BC7384
 * 0000000140BB0998: mov     r15d, 20h ; ' '
 * 0000000140BB099E: jmp     short loc_140BB09AF
 * 0000000140BB09A0: mov     r15d, 20h ; ' '
 * 0000000140BB09A6: lea     r14d, [r15-1Fh]
 * 0000000140BB09AA: jmp     short loc_140BB09AF
 * 0000000140BB09AC: xor     r12d, r12d
 * 0000000140BB09AF: mov     esi, [r13+0C4h]
 * 0000000140BB09B6: lea     rcx, [r13+630h]
 * 0000000140BB09BD: mov     [r13+0C4h], r12d
 * 0000000140BB09C4: mov     r9, r13
 * 0000000140BB09C7: add     dword ptr [r13+848h], 630h
 * 0000000140BB09D2: mov     rax, r13
 * 0000000140BB09D5: mov     r10d, [r13+834h]
 * 0000000140BB09DC: mov     rbx, [r13+838h]
 * 0000000140BB09E3: mov     dword ptr [rbp+8D0h+arg_8], esi
 * 0000000140BB09E9: cmp     r13, rcx
 * 0000000140BB09EC: jnb     short loc_140BB09FE
 * 0000000140BB09EE: mov     edx, 40h ; '@'
 * 0000000140BB09F3: prefetchnta byte ptr [rax]
 * 0000000140BB09F6: add     rax, rdx
 * 0000000140BB09F9: cmp     rax, rcx
 * 0000000140BB09FC: jb      short loc_140BB09F3
 * 0000000140BB09FE: mov     r8, rbx
 * 0000000140BB0A01: mov     edi, 0FFFFFFFFh
 * 0000000140BB0A06: mov     rsi, 7010008004002001h
 * 0000000140BB0A10: mov     r11d, 0Ch
 * 0000000140BB0A16: mov     eax, 8
 * 0000000140BB0A1B: xor     r8, [r9]
 * 0000000140BB0A1E: mov     ecx, r10d
 * 0000000140BB0A21: rol     r8, cl
 * 0000000140BB0A24: xor     r8, [r9+8]
 * 0000000140BB0A28: add     r9, 10h
 * 0000000140BB0A2C: rol     r8, cl
 * 0000000140BB0A2F: sub     rax, r14
 * 0000000140BB0A32: jnz     short loc_140BB0A1B
 * 0000000140BB0A34: mov     rcx, r9
 * 0000000140BB0A37: sub     rcx, r13
 * 0000000140BB0A3A: xor     rcx, rbx
 * 0000000140BB0A3D: mov     rax, rcx
 * 0000000140BB0A40: rol     rax, 11h
 * 0000000140BB0A44: xor     rcx, rax
 * 0000000140BB0A47: mov     rax, rsi
 * 0000000140BB0A4A: mul     rcx
 * 0000000140BB0A4D: mov     [rbp+8D0h+var_380], rdx
 * 0000000140BB0A54: xor     edx, eax
 * 0000000140BB0A56: xor     r10d, edx
 * 0000000140BB0A59: and     r10d, 3Fh
 * 0000000140BB0A5D: cmovz   r10d, r14d
 * 0000000140BB0A61: add     r11d, edi
 * 0000000140BB0A64: jnz     short loc_140BB0A16
 * 0000000140BB0A66: mov     esi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB0A6C: lea     r12d, [r11+6]
 * 0000000140BB0A70: mov     eax, r12d
 * 0000000140BB0A73: lea     edx, [r11+30h]
 * 0000000140BB0A77: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB0A7E: xor     r8, [r9]
 * 0000000140BB0A81: mov     ecx, r10d
 * 0000000140BB0A84: rol     r8, cl
 * 0000000140BB0A87: add     r9, 8
 * 0000000140BB0A8B: add     edx, 0FFFFFFF8h
 * 0000000140BB0A8E: sub     rax, r14
 * 0000000140BB0A91: jnz     short loc_140BB0A7E
 * 0000000140BB0A93: xor     r11d, r11d
 * 0000000140BB0A96: test    edx, edx
 * 0000000140BB0A98: jz      short loc_140BB0ABC
 * 0000000140BB0A9A: mov     r13d, 0FFFFFFFFh
 * 0000000140BB0AA0: movzx   eax, byte ptr [r9]
 * 0000000140BB0AA4: mov     ecx, r10d
 * 0000000140BB0AA7: xor     r8, rax
 * 0000000140BB0AAA: add     r9, r14
 * 0000000140BB0AAD: rol     r8, cl
 * 0000000140BB0AB0: add     edx, r13d
 * 0000000140BB0AB3: jnz     short loc_140BB0AA0
 * 0000000140BB0AB5: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BB0ABC: mov     [r13+0C4h], esi
 * 0000000140BB0AC3: cmp     [r13+0A68h], r8
 * 0000000140BB0ACA: jz      loc_140BB0C20
 * 0000000140BB0AD0: mov     rax, [r13+588h]
 * 0000000140BB0AD7: mov     ecx, [r13+804h]
 * 0000000140BB0ADE: mov     [rax], r13
 * 0000000140BB0AE1: mov     [rax+10h], ecx
 * 0000000140BB0AE4: mov     rax, [r13+0A68h]
 * 0000000140BB0AEB: cmp     [r13+918h], r11d
 * 0000000140BB0AF2: jnz     loc_140BB0C20
 * 0000000140BB0AF8: mov     rcx, r8
 * 0000000140BB0AFB: xor     rcx, rax
 * 0000000140BB0AFE: mov     rax, [r13+588h]
 * 0000000140BB0B05: mov     [rax+18h], rcx
 * 0000000140BB0B09: cmp     [r13+918h], r11d
 * 0000000140BB0B10: jnz     loc_140BB0C20
 * 0000000140BB0B16: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140BB0B20: lea     rax, [rbx+r13]
 * 0000000140BB0B24: mov     [r13+920h], rax
 * 0000000140BB0B2B: mov     [r13+928h], r11
 * 0000000140BB0B32: mov     qword ptr [r13+930h], 109h
 * 0000000140BB0B3D: mov     [r13+938h], r8
 * 0000000140BB0B44: mov     [r13+918h], r14d
 * 0000000140BB0B4B: mov     ecx, [r13+9D8h]
 * 0000000140BB0B52: bt      ecx, 1Dh
 * 0000000140BB0B56: jb      loc_140BB0C2A
 * 0000000140BB0B5C: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BB0B67: jz      loc_140BB0C2A
 * 0000000140BB0B6D: test    r14b, cl
 * 0000000140BB0B70: jz      loc_140BB0C2A
 * 0000000140BB0B76: mov     ecx, [r13+0A74h]
 * 0000000140BB0B7D: mov     eax, [r13+804h]
 * 0000000140BB0B84: mov     r10, [r13+838h]
 * 0000000140BB0B8B: sub     eax, ecx
 * 0000000140BB0B8D: mov     r8, [r13+0A78h]
 * 0000000140BB0B94: lea     rdx, [rcx+r13]
 * 0000000140BB0B98: mov     ecx, eax
 * 0000000140BB0B9A: shr     rcx, 3
 * 0000000140BB0B9E: lea     r9, [rdx+rcx*8]
 * 0000000140BB0BA2: jmp     short loc_140BB0BC5
 * 0000000140BB0BA4: xor     [rdx], r8
 * 0000000140BB0BA7: mov     rax, [rdx]
 * 0000000140BB0BAA: movzx   ecx, r8b
 * 0000000140BB0BAE: xor     rax, r10
 * 0000000140BB0BB1: and     ecx, 3Fh
 * 0000000140BB0BB4: ror     r8, cl
 * 0000000140BB0BB7: add     r8, rax
 * 0000000140BB0BBA: xor     r8, 0EFAh
 * 0000000140BB0BC1: add     rdx, 8
 * 0000000140BB0BC5: cmp     rdx, r9
 * 0000000140BB0BC8: jnz     short loc_140BB0BA4
 * 0000000140BB0BCA: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BB0BD3: cmp     r8, [r13+0A80h]
 * 0000000140BB0BDA: jz      short loc_140BB0C2A
 * 0000000140BB0BDC: mov     ecx, [r13+804h]
 * 0000000140BB0BE3: mov     rax, [r13+588h]
 * 0000000140BB0BEA: mov     [rax], r13
 * 0000000140BB0BED: mov     [rax+10h], ecx
 * 0000000140BB0BF0: mov     rcx, [r13+0A80h]
 * 0000000140BB0BF7: cmp     [r13+918h], r11d
 * 0000000140BB0BFE: jnz     short loc_140BB0C0E
 * 0000000140BB0C00: mov     rax, [r13+588h]
 * 0000000140BB0C07: xor     rcx, r8
 * 0000000140BB0C0A: mov     [rax+18h], rcx
 * 0000000140BB0C0E: xor     edx, edx
 * 0000000140BB0C10: mov     r9d, 100h
 * 0000000140BB0C16: mov     rcx, r13
 * 0000000140BB0C19: call    sub_140BC7384
 * 0000000140BB0C1E: jmp     short loc_140BB0C2A
 * 0000000140BB0C20: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140BB0C2A: mov     ecx, [r13+9D8h]
 * 0000000140BB0C31: bt      ecx, 1Dh
 * 0000000140BB0C35: jb      loc_140BB0D2D
 * 0000000140BB0C3B: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BB0C46: jz      loc_140BB0D2D
 * 0000000140BB0C4C: test    r14b, cl
 * 0000000140BB0C4F: jz      loc_140BB0D2D
 * 0000000140BB0C55: mov     ecx, [r13+0A74h]
 * 0000000140BB0C5C: mov     eax, [r13+804h]
 * 0000000140BB0C63: mov     r10, [r13+838h]
 * 0000000140BB0C6A: sub     eax, ecx
 * 0000000140BB0C6C: mov     rdx, [r13+0A78h]
 * 0000000140BB0C73: lea     r8, [rcx+r13]
 * 0000000140BB0C77: mov     ecx, eax
 * 0000000140BB0C79: shr     rcx, 3
 * 0000000140BB0C7D: lea     r9, [r8+rcx*8]
 * 0000000140BB0C81: jmp     short loc_140BB0CA3
 * 0000000140BB0C83: xor     [r8], rdx
 * 0000000140BB0C86: mov     rax, [r8]
 * 0000000140BB0C89: movzx   ecx, dl
 * 0000000140BB0C8C: xor     rax, r10
 * 0000000140BB0C8F: and     ecx, 3Fh
 * 0000000140BB0C92: ror     rdx, cl
 * 0000000140BB0C95: add     rdx, rax
 * 0000000140BB0C98: xor     rdx, 0EFAh
 * 0000000140BB0C9F: add     r8, 8
 * 0000000140BB0CA3: cmp     r8, r9
 * 0000000140BB0CA6: jnz     short loc_140BB0C83
 * 0000000140BB0CA8: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BB0CB1: xor     r10d, r10d
 * 0000000140BB0CB4: cmp     rdx, [r13+0A80h]
 * 0000000140BB0CBB: jz      short loc_140BB0D30
 * 0000000140BB0CBD: mov     ecx, [r13+804h]
 * 0000000140BB0CC4: mov     rax, [r13+588h]
 * 0000000140BB0CCB: mov     [rax], r13
 * 0000000140BB0CCE: mov     [rax+10h], ecx
 * 0000000140BB0CD1: mov     rcx, [r13+0A80h]
 * 0000000140BB0CD8: cmp     [r13+918h], r10d
 * 0000000140BB0CDF: jnz     short loc_140BB0D30
 * 0000000140BB0CE1: mov     rax, [r13+588h]
 * 0000000140BB0CE8: xor     rcx, rdx
 * 0000000140BB0CEB: mov     [rax+18h], rcx
 * 0000000140BB0CEF: cmp     [r13+918h], r10d
 * 0000000140BB0CF6: jnz     short loc_140BB0D30
 * 0000000140BB0CF8: lea     rax, [rbx+r13]
 * 0000000140BB0CFC: mov     rcx, r13
 * 0000000140BB0CFF: mov     [r13+920h], rax
 * 0000000140BB0D06: mov     [r13+928h], r10
 * 0000000140BB0D0D: mov     qword ptr [r13+930h], 100h
 * 0000000140BB0D18: mov     [r13+938h], rdx
 * 0000000140BB0D1F: xor     edx, edx
 * 0000000140BB0D21: mov     [r13+918h], r14d
 * 0000000140BB0D28: call    sub_140BC74C8
 * 0000000140BB0D2D: xor     r10d, r10d
 * 0000000140BB0D30: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140BB0D3B: mov     rsi, r13
 * 0000000140BB0D3E: mov     [rsp+9D0h+var_970], r13
 * 0000000140BB0D43: mov     rbx, r13
 * 0000000140BB0D46: jz      short loc_140BB0D52
 * 0000000140BB0D48: mov     [rsp+9D0h+var_970], r13
 * 0000000140BB0D4D: jmp     loc_140BB14F5
 * 0000000140BB0D52: mov     ecx, [r13+9B8h]
 * 0000000140BB0D59: test    ecx, ecx
 * 0000000140BB0D5B: jz      loc_140BB0F69
 * 0000000140BB0D61: cmp     ecx, 1
 * 0000000140BB0D64: jnz     loc_140BB14E7
 * 0000000140BB0D6A: mov     r13d, ecx
 * 0000000140BB0D6D: mov     rax, [rsi+610h]
 * 0000000140BB0D74: mov     rbx, rsi
 * 0000000140BB0D77: test    rax, rax
 * 0000000140BB0D7A: jz      loc_140BB14E7
 * 0000000140BB0D80: mov     rax, [rax]
 * 0000000140BB0D83: test    rax, rax
 * 0000000140BB0D86: jz      loc_140BB14E7
 * 0000000140BB0D8C: mov     rax, [rsi+610h]
 * 0000000140BB0D93: mov     r14, [rax]
 * 0000000140BB0D96: lock or [rsp+9D0h+var_9D0], r10d
 * 0000000140BB0D9B: mov     r10d, [r14+804h]
 * 0000000140BB0DA2: mov     r9, r14
 * 0000000140BB0DA5: mov     r11d, [r14+834h]
 * 0000000140BB0DAC: mov     rax, r14
 * 0000000140BB0DAF: mov     r15, [r14+838h]
 * 0000000140BB0DB6: lea     rcx, [r14+r10]
 * 0000000140BB0DBA: cmp     r14, rcx
 * 0000000140BB0DBD: jnb     short loc_140BB0DCF
 * 0000000140BB0DBF: mov     edx, 40h ; '@'
 * 0000000140BB0DC4: prefetchnta byte ptr [rax]
 * 0000000140BB0DC7: add     rax, rdx
 * 0000000140BB0DCA: cmp     rax, rcx
 * 0000000140BB0DCD: jb      short loc_140BB0DC4
 * 0000000140BB0DCF: mov     ebx, r10d
 * 0000000140BB0DD2: mov     r8, r15
 * 0000000140BB0DD5: shr     ebx, 7
 * 0000000140BB0DD8: mov     r12d, 0FFFFFFFFh
 * 0000000140BB0DDE: test    ebx, ebx
 * 0000000140BB0DE0: jz      short loc_140BB0E42
 * 0000000140BB0DE2: mov     rsi, 7010008004002001h
 * 0000000140BB0DEC: mov     eax, 8
 * 0000000140BB0DF1: xor     r8, [r9]
 * 0000000140BB0DF4: mov     ecx, r11d
 * 0000000140BB0DF7: rol     r8, cl
 * 0000000140BB0DFA: xor     r8, [r9+8]
 * 0000000140BB0DFE: add     r9, 10h
 * 0000000140BB0E02: rol     r8, cl
 * 0000000140BB0E05: sub     rax, r13
 * 0000000140BB0E08: jnz     short loc_140BB0DF1
 * 0000000140BB0E0A: mov     rcx, r9
 * 0000000140BB0E0D: sub     rcx, r14
 * 0000000140BB0E10: xor     rcx, r15
 * 0000000140BB0E13: mov     rax, rcx
 * 0000000140BB0E16: rol     rax, 11h
 * 0000000140BB0E1A: xor     rcx, rax
 * 0000000140BB0E1D: mov     rax, rsi
 * 0000000140BB0E20: mul     rcx
 * 0000000140BB0E23: xor     r11d, edx
 * 0000000140BB0E26: mov     [rbp+8D0h+var_370], rdx
 * 0000000140BB0E2D: xor     r11d, eax
 * 0000000140BB0E30: and     r11d, 3Fh
 * 0000000140BB0E34: cmovz   r11d, r13d
 * 0000000140BB0E38: add     ebx, r12d
 * 0000000140BB0E3B: jnz     short loc_140BB0DEC
 * 0000000140BB0E3D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB0E42: and     r10d, 7Fh
 * 0000000140BB0E46: cmp     r10d, 8
 * 0000000140BB0E4A: jb      short loc_140BB0E69
 * 0000000140BB0E4C: mov     eax, r10d
 * 0000000140BB0E4F: shr     rax, 3
 * 0000000140BB0E53: xor     r8, [r9]
 * 0000000140BB0E56: mov     ecx, r11d
 * 0000000140BB0E59: rol     r8, cl
 * 0000000140BB0E5C: add     r9, 8
 * 0000000140BB0E60: add     r10d, 0FFFFFFF8h
 * 0000000140BB0E64: sub     rax, r13
 * 0000000140BB0E67: jnz     short loc_140BB0E53
 * 0000000140BB0E69: test    r10d, r10d
 * 0000000140BB0E6C: jz      short loc_140BB0E83
 * 0000000140BB0E6E: movzx   eax, byte ptr [r9]
 * 0000000140BB0E72: mov     ecx, r11d
 * 0000000140BB0E75: xor     r8, rax
 * 0000000140BB0E78: add     r9, r13
 * 0000000140BB0E7B: rol     r8, cl
 * 0000000140BB0E7E: add     r10d, r12d
 * 0000000140BB0E81: jnz     short loc_140BB0E6E
 * 0000000140BB0E83: mov     rax, [rsi+618h]
 * 0000000140BB0E8A: mov     r12d, [r14+804h]
 * 0000000140BB0E91: cmp     r8, [rax]
 * 0000000140BB0E94: jz      loc_140BB1206
 * 0000000140BB0E9A: mov     rax, [rsi+588h]
 * 0000000140BB0EA1: xor     r10d, r10d
 * 0000000140BB0EA4: mov     [rax], r14
 * 0000000140BB0EA7: mov     [rax+10h], r12d
 * 0000000140BB0EAB: mov     rax, [rsi+618h]
 * 0000000140BB0EB2: mov     rcx, [rax]
 * 0000000140BB0EB5: cmp     [rsi+918h], r10d
 * 0000000140BB0EBC: jnz     loc_140BB11FE
 * 0000000140BB0EC2: mov     rax, [rsi+588h]
 * 0000000140BB0EC9: xor     rcx, r8
 * 0000000140BB0ECC: mov     [rax+18h], rcx
 * 0000000140BB0ED0: cmp     [rsi+918h], r10d
 * 0000000140BB0ED7: jnz     loc_140BB11FE
 * 0000000140BB0EDD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB0EE7: add     rax, rsi
 * 0000000140BB0EEA: mov     [rsi+920h], rax
 * 0000000140BB0EF1: mov     [rsi+928h], r10
 * 0000000140BB0EF8: mov     qword ptr [rsi+930h], 111h
 * 0000000140BB0F03: mov     [rsi+938h], r8
 * 0000000140BB0F0A: mov     [rsi+918h], r13d
 * 0000000140BB0F11: mov     ecx, [rsi+9D8h]
 * 0000000140BB0F17: bt      ecx, 1Dh
 * 0000000140BB0F1B: jb      loc_140BB11FE
 * 0000000140BB0F21: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB0F2B: jz      loc_140BB11FE
 * 0000000140BB0F31: test    r13b, cl
 * 0000000140BB0F34: jz      loc_140BB11FE
 * 0000000140BB0F3A: mov     ecx, [rsi+0A74h]
 * 0000000140BB0F40: mov     eax, [rsi+804h]
 * 0000000140BB0F46: mov     r10, [rsi+838h]
 * 0000000140BB0F4D: sub     eax, ecx
 * 0000000140BB0F4F: mov     r8, [rsi+0A78h]
 * 0000000140BB0F56: lea     rdx, [rcx+rsi]
 * 0000000140BB0F5A: mov     ecx, eax
 * 0000000140BB0F5C: shr     rcx, 3
 * 0000000140BB0F60: lea     r9, [rdx+rcx*8]
 * 0000000140BB0F64: jmp     loc_140BB11A6
 * 0000000140BB0F69: mov     r14, [r13+610h]
 * 0000000140BB0F70: test    r14, r14
 * 0000000140BB0F73: jz      loc_140BB14E7
 * 0000000140BB0F79: cmp     [r14], r10
 * 0000000140BB0F7C: jz      loc_140BB14E7
 * 0000000140BB0F82: mov     r12d, [r13+858h]
 * 0000000140BB0F89: cmp     r12d, 7
 * 0000000140BB0F8D: mov     rbx, [rbp+8D0h+arg_0]
 * 0000000140BB0F94: mov     r13d, [r13+804h]
 * 0000000140BB0F9B: cmovnz  r15d, r10d
 * 0000000140BB0F9F: mov     r8d, [rbx+944h]
 * 0000000140BB0FA6: lea     eax, [r13+30h]
 * 0000000140BB0FAA: cmp     eax, [rbx+0A64h]
 * 0000000140BB0FB0: jbe     loc_140BB109A
 * 0000000140BB0FB6: mov     edx, eax
 * 0000000140BB0FB8: mov     rcx, rbx
 * 0000000140BB0FBB: call    sub_140BC6AF8
 * 0000000140BB0FC0: xor     r10d, r10d
 * 0000000140BB0FC3: mov     [rsp+9D0h+var_970], rax
 * 0000000140BB0FC8: mov     rsi, rax
 * 0000000140BB0FCB: test    rax, rax
 * 0000000140BB0FCE: jz      loc_140BB14E7
 * 0000000140BB0FD4: mov     ecx, [rbx+9D8h]
 * 0000000140BB0FDA: lea     eax, [r10+2]
 * 0000000140BB0FDE: test    al, cl
 * 0000000140BB0FE0: jnz     loc_140BB1091
 * 0000000140BB0FE6: mov     eax, [rbx+804h]
 * 0000000140BB0FEC: lea     r11d, [r10+1]
 * 0000000140BB0FF0: mov     r9, [rbx+7E8h]
 * 0000000140BB0FF7: and     ecx, 10000000h
 * 0000000140BB0FFD: neg     ecx
 * 0000000140BB0FFF: mov     rcx, rbx
 * 0000000140BB1002: sbb     edx, edx
 * 0000000140BB1004: and     edx, [rbx+944h]
 * 0000000140BB100A: cmp     eax, 8
 * 0000000140BB100D: jb      short loc_140BB1025
 * 0000000140BB100F: mov     r8d, eax
 * 0000000140BB1012: shr     r8, 3
 * 0000000140BB1016: mov     [rcx], r10
 * 0000000140BB1019: add     eax, 0FFFFFFF8h
 * 0000000140BB101C: add     rcx, 8
 * 0000000140BB1020: sub     r8, r11
 * 0000000140BB1023: jnz     short loc_140BB1016
 * 0000000140BB1025: test    eax, eax
 * 0000000140BB1027: jz      short loc_140BB103A
 * 0000000140BB1029: mov     r8d, 0FFFFFFFFh
 * 0000000140BB102F: mov     [rcx], r10b
 * 0000000140BB1032: add     rcx, r11
 * 0000000140BB1035: add     eax, r8d
 * 0000000140BB1038: jnz     short loc_140BB102F
 * 0000000140BB103A: mov     ebx, [rsi+944h]
 * 0000000140BB1040: mov     [rsi+944h], edx
 * 0000000140BB1046: cmp     edx, 3
 * 0000000140BB1049: jz      short loc_140BB1079
 * 0000000140BB104B: test    dword ptr [rsi+9D8h], 8000000h
 * 0000000140BB1055: jnz     short loc_140BB1070
 * 0000000140BB1057: test    edx, edx
 * 0000000140BB1059: jz      short loc_140BB1070
 * 0000000140BB105B: mov     rax, [rsi+238h]
 * 0000000140BB1062: lea     rcx, [r9-8]
 * 0000000140BB1066: mov     rdx, [rcx]
 * 0000000140BB1069: call    KeGuardDispatchICall
 * 0000000140BB106E: jmp     short loc_140BB1088
 * 0000000140BB1070: mov     rax, [rsi+108h]
 * 0000000140BB1077: jmp     short loc_140BB1080
 * 0000000140BB1079: mov     rax, [rsi+368h]
 * 0000000140BB1080: mov     rcx, r9
 * 0000000140BB1083: call    KeGuardDispatchICall
 * 0000000140BB1088: mov     [rsi+944h], ebx
 * 0000000140BB108E: xor     r10d, r10d
 * 0000000140BB1091: and     dword ptr [rsi+9D8h], 0FFFFFFFDh
 * 0000000140BB1098: jmp     short loc_140BB10A8
 * 0000000140BB109A: mov     rsi, rbx
 * 0000000140BB109D: mov     [rsp+9D0h+var_970], rbx
 * 0000000140BB10A2: mov     [rbx+804h], eax
 * 0000000140BB10A8: mov     eax, 1
 * 0000000140BB10AD: lea     rbx, [rsi+r13]
 * 0000000140BB10B1: add     [rsi+82Ch], eax
 * 0000000140BB10B7: mov     [rbp+8D0h+var_378], rbx
 * 0000000140BB10BE: lea     ecx, [rax+2Fh]
 * 0000000140BB10C1: mov     rax, rbx
 * 0000000140BB10C4: lea     edx, [rcx-2Ah]
 * 0000000140BB10C7: lea     r13d, [rcx-2Fh]
 * 0000000140BB10CB: mov     [rax], r10
 * 0000000140BB10CE: add     ecx, 0FFFFFFF8h
 * 0000000140BB10D1: add     rax, 8
 * 0000000140BB10D5: sub     rdx, r13
 * 0000000140BB10D8: jnz     short loc_140BB10CB
 * 0000000140BB10DA: test    ecx, ecx
 * 0000000140BB10DC: jz      short loc_140BB10ED
 * 0000000140BB10DE: mov     edx, 0FFFFFFFFh
 * 0000000140BB10E3: mov     [rax], r10b
 * 0000000140BB10E6: add     rax, r13
 * 0000000140BB10E9: add     ecx, edx
 * 0000000140BB10EB: jnz     short loc_140BB10E3
 * 0000000140BB10ED: mov     [rbx], r15d
 * 0000000140BB10F0: mov     [rbx+8], r14
 * 0000000140BB10F4: cmp     r12d, 7
 * 0000000140BB10F8: jnz     short loc_140BB1111
 * 0000000140BB10FA: lea     r9, [rbx+18h]
 * 0000000140BB10FE: mov     rdx, r14
 * 0000000140BB1101: lea     r8d, [r12+1]
 * 0000000140BB1106: mov     rcx, rsi
 * 0000000140BB1109: call    sub_140516AFC
 * 0000000140BB110E: xor     r10d, r10d
 * 0000000140BB1111: mov     dword ptr [rbx+10h], 8
 * 0000000140BB1118: lea     r8, [r14+8]
 * 0000000140BB111C: add     dword ptr [rsi+848h], 8
 * 0000000140BB1123: mov     rdx, r14
 * 0000000140BB1126: mov     ecx, [rsi+834h]
 * 0000000140BB112C: mov     rax, [rsi+838h]
 * 0000000140BB1133: cmp     r14, r8
 * 0000000140BB1136: jnb     short loc_140BB1144
 * 0000000140BB1138: prefetchnta byte ptr [rdx]
 * 0000000140BB113B: add     rdx, 40h ; '@'
 * 0000000140BB113F: cmp     rdx, r8
 * 0000000140BB1142: jb      short loc_140BB1138
 * 0000000140BB1144: xor     rax, [r14]
 * 0000000140BB1147: rol     rax, cl
 * 0000000140BB114A: mov     rcx, rax
 * 0000000140BB114D: jmp     short loc_140BB1151
 * 0000000140BB114F: xor     eax, ecx
 * 0000000140BB1151: shr     rcx, 1Fh
 * 0000000140BB1155: test    rcx, rcx
 * 0000000140BB1158: jnz     short loc_140BB114F
 * 0000000140BB115A: btr     eax, 1Fh
 * 0000000140BB115E: mov     [rbx+14h], eax
 * 0000000140BB1161: add     dword ptr [rsi+848h], 8
 * 0000000140BB1168: test    rsi, rsi
 * 0000000140BB116B: jnz     short loc_140BB1179
 * 0000000140BB116D: mov     rbx, [rbp+8D0h+arg_0]
 * 0000000140BB1174: jmp     loc_140BB14E7
 * 0000000140BB1179: add     [rsi+9B8h], r13d
 * 0000000140BB1180: jmp     loc_140BB0D6D
 * 0000000140BB1185: xor     [rdx], r8
 * 0000000140BB1188: mov     rax, [rdx]
 * 0000000140BB118B: movzx   ecx, r8b
 * 0000000140BB118F: xor     rax, r10
 * 0000000140BB1192: and     ecx, 3Fh
 * 0000000140BB1195: ror     r8, cl
 * 0000000140BB1198: add     r8, rax
 * 0000000140BB119B: xor     r8, 0EFAh
 * 0000000140BB11A2: add     rdx, 8
 * 0000000140BB11A6: cmp     rdx, r9
 * 0000000140BB11A9: jnz     short loc_140BB1185
 * 0000000140BB11AB: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB11B3: cmp     r8, [rsi+0A80h]
 * 0000000140BB11BA: jz      short loc_140BB11FE
 * 0000000140BB11BC: mov     rax, [rsi+588h]
 * 0000000140BB11C3: mov     ecx, [rsi+804h]
 * 0000000140BB11C9: mov     [rax], rsi
 * 0000000140BB11CC: mov     [rax+10h], ecx
 * 0000000140BB11CF: xor     eax, eax
 * 0000000140BB11D1: mov     rcx, [rsi+0A80h]
 * 0000000140BB11D8: cmp     [rsi+918h], eax
 * 0000000140BB11DE: jnz     short loc_140BB11EE
 * 0000000140BB11E0: mov     rax, [rsi+588h]
 * 0000000140BB11E7: xor     rcx, r8
 * 0000000140BB11EA: mov     [rax+18h], rcx
 * 0000000140BB11EE: xor     edx, edx
 * 0000000140BB11F0: mov     r9d, 100h
 * 0000000140BB11F6: mov     rcx, rsi
 * 0000000140BB11F9: call    sub_140BC7384
 * 0000000140BB11FE: mov     rbx, rsi
 * 0000000140BB1201: jmp     loc_140BB14E7
 * 0000000140BB1206: mov     r15d, [rsi+804h]
 * 0000000140BB120D: mov     r13d, 20h ; ' '
 * 0000000140BB1213: mov     r9d, [rsi+858h]
 * 0000000140BB121A: cmp     r9d, 7
 * 0000000140BB121E: mov     r8d, [rsi+944h]
 * 0000000140BB1225: mov     dword ptr [rsp+9D0h+var_960], r9d
 * 0000000140BB122A: lea     r10d, [r13-20h]
 * 0000000140BB122E: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BB1235: lea     eax, [r15+30h]
 * 0000000140BB1239: cmovnz  r13d, r10d
 * 0000000140BB123D: cmp     eax, [rsi+0A64h]
 * 0000000140BB1243: jbe     loc_140BB1336
 * 0000000140BB1249: mov     edx, eax
 * 0000000140BB124B: mov     rcx, rsi
 * 0000000140BB124E: call    sub_140BC6AF8
 * 0000000140BB1253: xor     r10d, r10d
 * 0000000140BB1256: mov     rbx, rax
 * 0000000140BB1259: test    rax, rax
 * 0000000140BB125C: jz      loc_140BB14EF
 * 0000000140BB1262: mov     ecx, [rsi+9D8h]
 * 0000000140BB1268: lea     eax, [r10+2]
 * 0000000140BB126C: test    al, cl
 * 0000000140BB126E: jnz     loc_140BB1328
 * 0000000140BB1274: mov     eax, [rsi+804h]
 * 0000000140BB127A: lea     r11d, [r10+1]
 * 0000000140BB127E: mov     r9, [rsi+7E8h]
 * 0000000140BB1285: and     ecx, 10000000h
 * 0000000140BB128B: neg     ecx
 * 0000000140BB128D: mov     rcx, rsi
 * 0000000140BB1290: sbb     edx, edx
 * 0000000140BB1292: and     edx, [rsi+944h]
 * 0000000140BB1298: cmp     eax, 8
 * 0000000140BB129B: jb      short loc_140BB12B3
 * 0000000140BB129D: mov     r8d, eax
 * 0000000140BB12A0: shr     r8, 3
 * 0000000140BB12A4: mov     [rcx], r10
 * 0000000140BB12A7: add     eax, 0FFFFFFF8h
 * 0000000140BB12AA: add     rcx, 8
 * 0000000140BB12AE: sub     r8, r11
 * 0000000140BB12B1: jnz     short loc_140BB12A4
 * 0000000140BB12B3: test    eax, eax
 * 0000000140BB12B5: jz      short loc_140BB12C8
 * 0000000140BB12B7: mov     r8d, 0FFFFFFFFh
 * 0000000140BB12BD: mov     [rcx], r10b
 * 0000000140BB12C0: add     rcx, r11
 * 0000000140BB12C3: add     eax, r8d
 * 0000000140BB12C6: jnz     short loc_140BB12BD
 * 0000000140BB12C8: mov     r15d, [rbx+944h]
 * 0000000140BB12CF: mov     [rbx+944h], edx
 * 0000000140BB12D5: cmp     edx, 3
 * 0000000140BB12D8: jz      short loc_140BB1308
 * 0000000140BB12DA: test    dword ptr [rbx+9D8h], 8000000h
 * 0000000140BB12E4: jnz     short loc_140BB12FF
 * 0000000140BB12E6: test    edx, edx
 * 0000000140BB12E8: jz      short loc_140BB12FF
 * 0000000140BB12EA: mov     rax, [rbx+238h]
 * 0000000140BB12F1: lea     rcx, [r9-8]
 * 0000000140BB12F5: mov     rdx, [rcx]
 * 0000000140BB12F8: call    KeGuardDispatchICall
 * 0000000140BB12FD: jmp     short loc_140BB1317
 * 0000000140BB12FF: mov     rax, [rbx+108h]
 * 0000000140BB1306: jmp     short loc_140BB130F
 * 0000000140BB1308: mov     rax, [rbx+368h]
 * 0000000140BB130F: mov     rcx, r9
 * 0000000140BB1312: call    KeGuardDispatchICall
 * 0000000140BB1317: mov     [rbx+944h], r15d
 * 0000000140BB131E: xor     r10d, r10d
 * 0000000140BB1321: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB1328: and     dword ptr [rbx+9D8h], 0FFFFFFFDh
 * 0000000140BB132F: mov     r9d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BB1334: jmp     short loc_140BB133F
 * 0000000140BB1336: mov     rbx, rsi
 * 0000000140BB1339: mov     [rsi+804h], eax
 * 0000000140BB133F: mov     r8d, 1
 * 0000000140BB1345: add     [rbx+82Ch], r8d
 * 0000000140BB134C: add     r15, rbx
 * 0000000140BB134F: mov     [rbp+8D0h+arg_8], r15
 * 0000000140BB1356: mov     rax, r15
 * 0000000140BB1359: lea     ecx, [r8+2Fh]
 * 0000000140BB135D: mov     [rbp+8D0h+var_368], r15
 * 0000000140BB1364: lea     edx, [rcx-2Ah]
 * 0000000140BB1367: mov     [rax], r10
 * 0000000140BB136A: add     ecx, 0FFFFFFF8h
 * 0000000140BB136D: add     rax, 8
 * 0000000140BB1371: sub     rdx, r8
 * 0000000140BB1374: jnz     short loc_140BB1367
 * 0000000140BB1376: test    ecx, ecx
 * 0000000140BB1378: jz      short loc_140BB1389
 * 0000000140BB137A: mov     edx, 0FFFFFFFFh
 * 0000000140BB137F: mov     [rax], r10b
 * 0000000140BB1382: add     rax, r8
 * 0000000140BB1385: add     ecx, edx
 * 0000000140BB1387: jnz     short loc_140BB137F
 * 0000000140BB1389: mov     [r15], r13d
 * 0000000140BB138C: mov     [r15+8], r14
 * 0000000140BB1390: cmp     r9d, 7
 * 0000000140BB1394: jnz     short loc_140BB13AD
 * 0000000140BB1396: test    r12d, r12d
 * 0000000140BB1399: jz      short loc_140BB13AD
 * 0000000140BB139B: lea     r9, [r15+18h]
 * 0000000140BB139F: mov     r8d, r12d
 * 0000000140BB13A2: mov     rdx, r14
 * 0000000140BB13A5: mov     rcx, rbx
 * 0000000140BB13A8: call    sub_140516AFC
 * 0000000140BB13AD: mov     [r15+10h], r12d
 * 0000000140BB13B1: lea     rcx, [r14+r12]
 * 0000000140BB13B5: add     [rbx+848h], r12d
 * 0000000140BB13BC: mov     r9, r14
 * 0000000140BB13BF: mov     r10d, [rbx+834h]
 * 0000000140BB13C6: mov     rax, r14
 * 0000000140BB13C9: mov     r13, [rbx+838h]
 * 0000000140BB13D0: cmp     r14, rcx
 * 0000000140BB13D3: jnb     short loc_140BB13E5
 * 0000000140BB13D5: mov     edx, 40h ; '@'
 * 0000000140BB13DA: prefetchnta byte ptr [rax]
 * 0000000140BB13DD: add     rax, rdx
 * 0000000140BB13E0: cmp     rax, rcx
 * 0000000140BB13E3: jb      short loc_140BB13DA
 * 0000000140BB13E5: mov     r11d, r12d
 * 0000000140BB13E8: mov     r8, r13
 * 0000000140BB13EB: shr     r11d, 7
 * 0000000140BB13EF: test    r11d, r11d
 * 0000000140BB13F2: jz      short loc_140BB146C
 * 0000000140BB13F4: mov     esi, 1
 * 0000000140BB13F9: mov     edi, 0FFFFFFFFh
 * 0000000140BB13FE: mov     r15, 7010008004002001h
 * 0000000140BB1408: mov     eax, 8
 * 0000000140BB140D: xor     r8, [r9]
 * 0000000140BB1410: mov     ecx, r10d
 * 0000000140BB1413: rol     r8, cl
 * 0000000140BB1416: xor     r8, [r9+8]
 * 0000000140BB141A: add     r9, 10h
 * 0000000140BB141E: rol     r8, cl
 * 0000000140BB1421: sub     rax, rsi
 * 0000000140BB1424: jnz     short loc_140BB140D
 * 0000000140BB1426: mov     rcx, r9
 * 0000000140BB1429: sub     rcx, r14
 * 0000000140BB142C: xor     rcx, r13
 * 0000000140BB142F: mov     rax, rcx
 * 0000000140BB1432: rol     rax, 11h
 * 0000000140BB1436: xor     rcx, rax
 * 0000000140BB1439: mov     rax, r15
 * 0000000140BB143C: mul     rcx
 * 0000000140BB143F: xor     r10d, edx
 * 0000000140BB1442: mov     [rbp+8D0h+var_360], rdx
 * 0000000140BB1449: xor     r10d, eax
 * 0000000140BB144C: and     r10d, 3Fh
 * 0000000140BB1450: cmovz   r10d, esi
 * 0000000140BB1454: add     r11d, edi
 * 0000000140BB1457: jnz     short loc_140BB1408
 * 0000000140BB1459: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB145E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB1465: mov     r15, [rbp+8D0h+arg_8]
 * 0000000140BB146C: mov     edx, r12d
 * 0000000140BB146F: mov     r11d, 1
 * 0000000140BB1475: and     edx, 7Fh
 * 0000000140BB1478: cmp     edx, 8
 * 0000000140BB147B: jb      short loc_140BB1498
 * 0000000140BB147D: mov     eax, edx
 * 0000000140BB147F: shr     rax, 3
 * 0000000140BB1483: xor     r8, [r9]
 * 0000000140BB1486: mov     ecx, r10d
 * 0000000140BB1489: rol     r8, cl
 * 0000000140BB148C: add     r9, 8
 * 0000000140BB1490: add     edx, 0FFFFFFF8h
 * 0000000140BB1493: sub     rax, r11
 * 0000000140BB1496: jnz     short loc_140BB1483
 * 0000000140BB1498: test    edx, edx
 * 0000000140BB149A: jz      short loc_140BB14BA
 * 0000000140BB149C: mov     esi, 0FFFFFFFFh
 * 0000000140BB14A1: movzx   eax, byte ptr [r9]
 * 0000000140BB14A5: mov     ecx, r10d
 * 0000000140BB14A8: xor     r8, rax
 * 0000000140BB14AB: add     r9, r11
 * 0000000140BB14AE: rol     r8, cl
 * 0000000140BB14B1: add     edx, esi
 * 0000000140BB14B3: jnz     short loc_140BB14A1
 * 0000000140BB14B5: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB14BA: mov     rax, r8
 * 0000000140BB14BD: jmp     short loc_140BB14C2
 * 0000000140BB14BF: xor     r8d, eax
 * 0000000140BB14C2: shr     rax, 1Fh
 * 0000000140BB14C6: test    rax, rax
 * 0000000140BB14C9: jnz     short loc_140BB14BF
 * 0000000140BB14CB: btr     r8d, 1Fh
 * 0000000140BB14D0: mov     [r15+14h], r8d
 * 0000000140BB14D4: add     [rbx+848h], r12d
 * 0000000140BB14DB: test    rbx, rbx
 * 0000000140BB14DE: jz      short loc_140BB14EF
 * 0000000140BB14E0: add     [rbx+9B8h], r11d
 * 0000000140BB14E7: mov     [rsp+9D0h+var_970], rbx
 * 0000000140BB14EC: mov     rsi, rbx
 * 0000000140BB14EF: mov     r12d, 6
 * 0000000140BB14F5: mov     eax, [rsi+9DCh]
 * 0000000140BB14FB: mov     r11d, 1000h
 * 0000000140BB1501: test    al, 8
 * 0000000140BB1503: jz      loc_140BB160E
 * 0000000140BB1509: test    r11d, eax
 * 0000000140BB150C: jnz     loc_140BB160E
 * 0000000140BB1512: rdtsc
 * 0000000140BB1514: shl     rdx, 20h
 * 0000000140BB1518: mov     rbx, 7010008004002001h
 * 0000000140BB1522: or      rax, rdx
 * 0000000140BB1525: mov     rcx, rax
 * 0000000140BB1528: ror     rax, 3
 * 0000000140BB152C: xor     rcx, rax
 * 0000000140BB152F: mov     rax, rbx
 * 0000000140BB1532: mul     rcx
 * 0000000140BB1535: mov     [rbp+8D0h+var_358], rdx
 * 0000000140BB153C: xor     dl, al
 * 0000000140BB153E: test    dl, 3
 * 0000000140BB1541: jnz     loc_140BB160E
 * 0000000140BB1547: mov     rax, [rsi+100h]
 * 0000000140BB154E: mov     ecx, 40h ; '@'
 * 0000000140BB1553: mov     r8d, [rsi+830h]
 * 0000000140BB155A: mov     rdx, [rsi+778h]
 * 0000000140BB1561: call    KeGuardDispatchICall
 * 0000000140BB1566: xor     r13d, r13d
 * 0000000140BB1569: mov     r15, rax
 * 0000000140BB156C: test    rax, rax
 * 0000000140BB156F: jz      loc_140BB1608
 * 0000000140BB1575: mov     rax, [rsi+1B8h]
 * 0000000140BB157C: mov     rcx, r15
 * 0000000140BB157F: movzx   edx, word ptr [rsi+780h]
 * 0000000140BB1586: call    KeGuardDispatchICall
 * 0000000140BB158B: mov     rcx, [rsi+6F8h]
 * 0000000140BB1592: mov     rax, [rsi+510h]
 * 0000000140BB1599: mov     r14d, [rcx+rax]
 * 0000000140BB159D: test    r14d, r14d
 * 0000000140BB15A0: jz      short loc_140BB15CD
 * 0000000140BB15A2: rdtsc
 * 0000000140BB15A4: shl     rdx, 20h
 * 0000000140BB15A8: or      rax, rdx
 * 0000000140BB15AB: mov     rcx, rax
 * 0000000140BB15AE: ror     rax, 3
 * 0000000140BB15B2: xor     rcx, rax
 * 0000000140BB15B5: mov     rax, rbx
 * 0000000140BB15B8: mul     rcx
 * 0000000140BB15BB: mov     [rbp+8D0h+var_350], rdx
 * 0000000140BB15C2: xor     rax, rdx
 * 0000000140BB15C5: xor     edx, edx
 * 0000000140BB15C7: div     r14
 * 0000000140BB15CA: mov     r14, rdx
 * 0000000140BB15CD: xor     ecx, ecx
 * 0000000140BB15CF: jmp     short loc_140BB15E5
 * 0000000140BB15D1: mov     rcx, rbx
 * 0000000140BB15D4: test    r14d, r14d
 * 0000000140BB15D7: jz      loc_140BB1738
 * 0000000140BB15DD: mov     eax, 0FFFFFFFFh
 * 0000000140BB15E2: add     r14d, eax
 * 0000000140BB15E5: mov     rax, [rsi+3B0h]
 * 0000000140BB15EC: call    KeGuardDispatchICall
 * 0000000140BB15F1: mov     rbx, rax
 * 0000000140BB15F4: test    rax, rax
 * 0000000140BB15F7: jnz     short loc_140BB15D1
 * 0000000140BB15F9: mov     rax, [rsi+108h]
 * 0000000140BB1600: mov     rcx, r15
 * 0000000140BB1603: call    KeGuardDispatchICall
 * 0000000140BB1608: mov     r11d, 1000h
 * 0000000140BB160E: xor     r15d, r15d
 * 0000000140BB1611: mov     [rbp+8D0h+var_8E0], r15d
 * 0000000140BB1615: lea     ebx, [r15+1]
 * 0000000140BB1619: mov     [rbp+8D0h+var_898], r15
 * 0000000140BB161D: lea     rax, [rbp+8D0h+var_890]
 * 0000000140BB1621: mov     ecx, 4
 * 0000000140BB1626: mov     edx, 0FFFFFFFFh
 * 0000000140BB162B: mov     [rax], r15b
 * 0000000140BB162E: add     rax, rbx
 * 0000000140BB1631: add     ecx, edx
 * 0000000140BB1633: jnz     short loc_140BB162B
 * 0000000140BB1635: mov     eax, [rsi+84Ch]
 * 0000000140BB163B: mov     edx, 28h ; '('
 * 0000000140BB1640: mov     ecx, [rsi+840h]
 * 0000000140BB1646: mov     [rbp+8D0h+var_8C4], ecx
 * 0000000140BB1649: lea     r14d, [rdx-23h]
 * 0000000140BB164D: cmp     [rsi+848h], eax
 * 0000000140BB1653: jge     loc_140BBF466
 * 0000000140BB1659: mov     eax, [rsi+9D8h]
 * 0000000140BB165F: mov     r8d, 88000h
 * 0000000140BB1665: and     eax, r8d
 * 0000000140BB1668: cmp     eax, r8d
 * 0000000140BB166B: jz      short loc_140BB1671
 * 0000000140BB166D: mov     dr7, r15
 * 0000000140BB1671: cmp     ecx, [rsi+82Ch]
 * 0000000140BB1677: jnz     short loc_140BB1685
 * 0000000140BB1679: add     [rsi+850h], ebx
 * 0000000140BB167F: mov     ecx, r15d
 * 0000000140BB1682: mov     [rbp+8D0h+var_8C4], ecx
 * 0000000140BB1685: mov     rax, [rsi+0AC0h]
 * 0000000140BB168C: mov     r8, rsi
 * 0000000140BB168F: test    rax, rax
 * 0000000140BB1692: mov     r9d, r15d
 * 0000000140BB1695: cmovnz  r8, rax
 * 0000000140BB1699: mov     r13d, [r8+828h]
 * 0000000140BB16A0: add     r13, r8
 * 0000000140BB16A3: mov     [rsp+9D0h+var_980], r13
 * 0000000140BB16A8: cmp     dword ptr [rbp+8D0h+var_898], r15d
 * 0000000140BB16AC: jz      short loc_140BB16C3
 * 0000000140BB16AE: cmp     dword ptr [rbp+8D0h+var_898+4], ecx
 * 0000000140BB16B1: ja      short loc_140BB16C3
 * 0000000140BB16B3: mov     r13d, [rbp+8D0h+var_890]
 * 0000000140BB16B7: mov     r9d, dword ptr [rbp+8D0h+var_898+4]
 * 0000000140BB16BB: add     r13, r8
 * 0000000140BB16BE: mov     [rsp+9D0h+var_980], r13
 * 0000000140BB16C3: cmp     r9d, ecx
 * 0000000140BB16C6: jz      loc_140BB1939
 * 0000000140BB16CC: mov     r10d, ecx
 * 0000000140BB16CF: mov     esi, 2
 * 0000000140BB16D4: sub     r10d, r9d
 * 0000000140BB16D7: mov     rdi, 0AAAAAAAAAAAAAAABh
 * 0000000140BB16E1: mov     r9d, ecx
 * 0000000140BB16E4: mov     ecx, [r13+0]
 * 0000000140BB16E8: sub     ecx, 1
 * 0000000140BB16EB: jz      loc_140BB1903
 * 0000000140BB16F1: sub     ecx, r12d
 * 0000000140BB16F4: jz      loc_140BB18F5
 * 0000000140BB16FA: sub     ecx, 1
 * 0000000140BB16FD: jz      loc_140BB18E8
 * 0000000140BB1703: sub     ecx, esi
 * 0000000140BB1705: jz      loc_140BB18DC
 * 0000000140BB170B: sub     ecx, 12h
 * 0000000140BB170E: jz      loc_140BB18D5
 * 0000000140BB1714: sub     ecx, esi
 * 0000000140BB1716: jz      loc_140BB18A9
 * 0000000140BB171C: sub     ecx, 3
 * 0000000140BB171F: jz      loc_140BB1881
 * 0000000140BB1725: cmp     ecx, 0Ah
 * 0000000140BB1728: jz      loc_140BB1903
 * 0000000140BB172E: mov     eax, 30h ; '0'
 * 0000000140BB1733: jmp     loc_140BB1918
 * 0000000140BB1738: mov     rax, [rsi+3A0h]
 * 0000000140BB173F: call    KeGuardDispatchICall
 * 0000000140BB1744: mov     rcx, rbx
 * 0000000140BB1747: test    eax, eax
 * 0000000140BB1749: jns     short loc_140BB175C
 * 0000000140BB174B: mov     rax, [rsi+3B8h]
 * 0000000140BB1752: call    KeGuardDispatchICall
 * 0000000140BB1757: jmp     loc_140BB15F9
 * 0000000140BB175C: mov     rax, [rsi+438h]
 * 0000000140BB1763: lea     rdx, [rbp+8D0h+var_78]
 * 0000000140BB176A: call    KeGuardDispatchICall
 * 0000000140BB176F: mov     rax, [rsi+1D8h]
 * 0000000140BB1776: xor     r9d, r9d
 * 0000000140BB1779: xor     r8d, r8d
 * 0000000140BB177C: mov     [rsp+9D0h+BugCheckParameter4], r13
 * 0000000140BB1781: mov     rdx, r15
 * 0000000140BB1784: mov     rcx, rbx
 * 0000000140BB1787: call    KeGuardDispatchICall
 * 0000000140BB178C: rdtsc
 * 0000000140BB178E: shl     rdx, 20h
 * 0000000140BB1792: or      rax, rdx
 * 0000000140BB1795: mov     rcx, rax
 * 0000000140BB1798: ror     rax, 3
 * 0000000140BB179C: xor     rcx, rax
 * 0000000140BB179F: mov     rax, 7010008004002001h
 * 0000000140BB17A9: mul     rcx
 * 0000000140BB17AC: mov     rcx, r15
 * 0000000140BB17AF: mov     rbx, rdx
 * 0000000140BB17B2: mov     [rbp+8D0h+var_348], rdx
 * 0000000140BB17B9: xor     rbx, rax
 * 0000000140BB17BC: mov     rax, [rsi+1D0h]
 * 0000000140BB17C3: call    KeGuardDispatchICall
 * 0000000140BB17C8: mov     ecx, eax
 * 0000000140BB17CA: xor     edx, edx
 * 0000000140BB17CC: mov     rax, rbx
 * 0000000140BB17CF: div     rcx
 * 0000000140BB17D2: mov     rbx, rdx
 * 0000000140BB17D5: cli
 * 0000000140BB17D6: sti
 * 0000000140BB17D7: mov     rax, [rsi+1B0h]
 * 0000000140BB17DE: lea     rcx, [rbp+8D0h+var_5F8]
 * 0000000140BB17E5: xor     edx, edx
 * 0000000140BB17E7: call    KeGuardDispatchICall
 * 0000000140BB17EC: mov     rax, [rsi+1C0h]
 * 0000000140BB17F3: lea     rcx, [rbp+8D0h+var_248]
 * 0000000140BB17FA: mov     rdx, r15
 * 0000000140BB17FD: call    KeGuardDispatchICall
 * 0000000140BB1802: jmp     short loc_140BB180F
 * 0000000140BB1804: test    ebx, ebx
 * 0000000140BB1806: jz      short loc_140BB182C
 * 0000000140BB1808: mov     eax, 0FFFFFFFFh
 * 0000000140BB180D: add     ebx, eax
 * 0000000140BB180F: mov     rax, [rsi+1C8h]
 * 0000000140BB1816: lea     rdx, [rbp+8D0h+var_248]
 * 0000000140BB181D: lea     rcx, [rbp+8D0h+var_880]
 * 0000000140BB1821: call    KeGuardDispatchICall
 * 0000000140BB1826: test    eax, eax
 * 0000000140BB1828: jns     short loc_140BB1804
 * 0000000140BB182A: jmp     short loc_140BB1842
 * 0000000140BB182C: mov     rax, [rsi+1B0h]
 * 0000000140BB1833: lea     rcx, [rbp+8D0h+var_5F8]
 * 0000000140BB183A: mov     edx, [rbp+8D0h+var_880]
 * 0000000140BB183D: call    KeGuardDispatchICall
 * 0000000140BB1842: mov     rax, [rsi+1E0h]
 * 0000000140BB1849: lea     rdx, [rbp+8D0h+var_260]
 * 0000000140BB1850: lea     rcx, [rbp+8D0h+var_5F8]
 * 0000000140BB1857: call    KeGuardDispatchICall
 * 0000000140BB185C: mov     rax, [rsi+108h]
 * 0000000140BB1863: mov     rcx, r15
 * 0000000140BB1866: call    KeGuardDispatchICall
 * 0000000140BB186B: mov     ebx, 1
 * 0000000140BB1870: mov     r11d, 1000h
 * 0000000140BB1876: mov     [rbp+8D0h+var_8E0], ebx
 * 0000000140BB1879: xor     r15d, r15d
 * 0000000140BB187C: jmp     loc_140BB1619
 * 0000000140BB1881: mov     ecx, [r13+20h]
 * 0000000140BB1885: mov     edx, [r13+28h]
 * 0000000140BB1889: and     ecx, 0FFFh
 * 0000000140BB188F: add     rdx, 0FFFh
 * 0000000140BB1896: add     rdx, rcx
 * 0000000140BB1899: shr     rdx, 0Ch
 * 0000000140BB189D: lea     eax, [rdx+rdx*4]
 * 0000000140BB18A0: lea     eax, ds:30h[rax*4]
 * 0000000140BB18A7: jmp     short loc_140BB1918
 * 0000000140BB18A9: mov     eax, [r13+24h]
 * 0000000140BB18AD: lea     ecx, [rax-1]
 * 0000000140BB18B0: neg     eax
 * 0000000140BB18B2: sbb     eax, eax
 * 0000000140BB18B4: and     ecx, eax
 * 0000000140BB18B6: mov     rax, rdi
 * 0000000140BB18B9: mul     rcx
 * 0000000140BB18BC: movzx   eax, word ptr [r13+28h]
 * 0000000140BB18C1: shr     rdx, 3
 * 0000000140BB18C5: add     edx, 7
 * 0000000140BB18C8: and     edx, 0FFFFFFF8h
 * 0000000140BB18CB: add     eax, esi
 * 0000000140BB18CD: lea     eax, [rax+rax*2]
 * 0000000140BB18D0: lea     eax, [rdx+rax*8]
 * 0000000140BB18D3: jmp     short loc_140BB1918
 * 0000000140BB18D5: movzx   eax, word ptr [r13+28h]
 * 0000000140BB18DA: jmp     short loc_140BB18ED
 * 0000000140BB18DC: mov     eax, [r13+1Ch]
 * 0000000140BB18E0: add     eax, 3
 * 0000000140BB18E3: shl     eax, 4
 * 0000000140BB18E6: jmp     short loc_140BB1918
 * 0000000140BB18E8: movzx   eax, word ptr [r13+20h]
 * 0000000140BB18ED: add     eax, 37h ; '7'
 * 0000000140BB18F0: and     eax, 0FFFFFFF8h
 * 0000000140BB18F3: jmp     short loc_140BB1918
 * 0000000140BB18F5: mov     eax, [r13+18h]
 * 0000000140BB18F9: add     eax, esi
 * 0000000140BB18FB: lea     eax, [rax+rax*2]
 * 0000000140BB18FE: shl     eax, 3
 * 0000000140BB1901: jmp     short loc_140BB1918
 * 0000000140BB1903: mov     ecx, [r13+10h]
 * 0000000140BB1907: mov     rax, rdi
 * 0000000140BB190A: mul     rcx
 * 0000000140BB190D: shr     rdx, 3
 * 0000000140BB1911: lea     eax, ds:30h[rdx*4]
 * 0000000140BB1918: add     r13, rax
 * 0000000140BB191B: sub     r10, rbx
 * 0000000140BB191E: jnz     loc_140BB16E4
 * 0000000140BB1924: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB1929: lea     edx, [r10+28h]
 * 0000000140BB192D: mov     [rsp+9D0h+var_980], r13
 * 0000000140BB1932: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB1939: mov     eax, r13d
 * 0000000140BB193C: mov     dword ptr [rbp+8D0h+var_898], ebx
 * 0000000140BB193F: sub     eax, r8d
 * 0000000140BB1942: mov     dword ptr [rbp+8D0h+var_898+4], r9d
 * 0000000140BB1946: mov     [rbp+8D0h+var_890], eax
 * 0000000140BB1949: mov     r10d, [r13+0]
 * 0000000140BB194D: mov     [rbp+8D0h+var_948], r10d
 * 0000000140BB1951: cmp     r10d, 1Eh
 * 0000000140BB1955: jg      loc_140BB966F
 * 0000000140BB195B: jz      loc_140BB8DC6
 * 0000000140BB1961: mov     eax, 0Fh
 * 0000000140BB1966: cmp     r10d, eax
 * 0000000140BB1969: jg      loc_140BB3DBA
 * 0000000140BB196F: jz      loc_140BB3ABE
 * 0000000140BB1975: mov     ecx, r10d
 * 0000000140BB1978: test    r10d, r10d
 * 0000000140BB197B: jz      loc_140BB3785
 * 0000000140BB1981: sub     ecx, 1
 * 0000000140BB1984: jz      loc_140BBE4C9
 * 0000000140BB198A: sub     ecx, 3
 * 0000000140BB198D: jz      loc_140BB3349
 * 0000000140BB1993: sub     ecx, 1
 * 0000000140BB1996: jz      loc_140BB2DA1
 * 0000000140BB199C: mov     eax, 2
 * 0000000140BB19A1: sub     ecx, eax
 * 0000000140BB19A3: jz      loc_140BB2B68
 * 0000000140BB19A9: sub     ecx, 1
 * 0000000140BB19AC: jz      loc_140BB23DD
 * 0000000140BB19B2: sub     ecx, eax
 * 0000000140BB19B4: jz      loc_140BB1FF4
 * 0000000140BB19BA: cmp     ecx, 3
 * 0000000140BB19BD: jnz     loc_140BBC176
 * 0000000140BB19C3: mov     r14, [r13+8]
 * 0000000140BB19C7: mov     r8d, [r13+10h]
 * 0000000140BB19CB: mov     r9, r14
 * 0000000140BB19CE: add     [rsi+848h], r8d
 * 0000000140BB19D5: mov     rax, r14
 * 0000000140BB19D8: mov     r11d, [rsi+834h]
 * 0000000140BB19DF: mov     r15, [rsi+838h]
 * 0000000140BB19E6: lea     rcx, [r14+r8]
 * 0000000140BB19EA: cmp     r14, rcx
 * 0000000140BB19ED: jnb     short loc_140BB19FF
 * 0000000140BB19EF: mov     edx, 40h ; '@'
 * 0000000140BB19F4: prefetchnta byte ptr [rax]
 * 0000000140BB19F7: add     rax, rdx
 * 0000000140BB19FA: cmp     rax, rcx
 * 0000000140BB19FD: jb      short loc_140BB19F4
 * 0000000140BB19FF: xor     r12d, r12d
 * 0000000140BB1A02: mov     r10d, r8d
 * 0000000140BB1A05: shr     r10d, 7
 * 0000000140BB1A09: mov     rbx, r15
 * 0000000140BB1A0C: lea     edx, [r12+1]
 * 0000000140BB1A11: test    r10d, r10d
 * 0000000140BB1A14: jz      short loc_140BB1A86
 * 0000000140BB1A16: mov     esi, 0FFFFFFFFh
 * 0000000140BB1A1B: mov     rdi, 7010008004002001h
 * 0000000140BB1A25: mov     eax, 8
 * 0000000140BB1A2A: xor     rbx, [r9]
 * 0000000140BB1A2D: mov     ecx, r11d
 * 0000000140BB1A30: rol     rbx, cl
 * 0000000140BB1A33: xor     rbx, [r9+8]
 * 0000000140BB1A37: add     r9, 10h
 * 0000000140BB1A3B: rol     rbx, cl
 * 0000000140BB1A3E: sub     rax, rdx
 * 0000000140BB1A41: jnz     short loc_140BB1A2A
 * 0000000140BB1A43: mov     rcx, r9
 * 0000000140BB1A46: sub     rcx, r14
 * 0000000140BB1A49: xor     rcx, r15
 * 0000000140BB1A4C: mov     rax, rcx
 * 0000000140BB1A4F: rol     rax, 11h
 * 0000000140BB1A53: xor     rcx, rax
 * 0000000140BB1A56: mov     rax, rdi
 * 0000000140BB1A59: mul     rcx
 * 0000000140BB1A5C: mov     [rbp+8D0h+var_340], rdx
 * 0000000140BB1A63: xor     edx, eax
 * 0000000140BB1A65: xor     r11d, edx
 * 0000000140BB1A68: mov     edx, 1
 * 0000000140BB1A6D: and     r11d, 3Fh
 * 0000000140BB1A71: cmovz   r11d, edx
 * 0000000140BB1A75: add     r10d, esi
 * 0000000140BB1A78: jnz     short loc_140BB1A25
 * 0000000140BB1A7A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB1A7F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB1A86: and     r8d, 7Fh
 * 0000000140BB1A8A: cmp     r8d, 8
 * 0000000140BB1A8E: jb      short loc_140BB1AAD
 * 0000000140BB1A90: mov     eax, r8d
 * 0000000140BB1A93: shr     rax, 3
 * 0000000140BB1A97: xor     rbx, [r9]
 * 0000000140BB1A9A: mov     ecx, r11d
 * 0000000140BB1A9D: rol     rbx, cl
 * 0000000140BB1AA0: add     r9, 8
 * 0000000140BB1AA4: add     r8d, 0FFFFFFF8h
 * 0000000140BB1AA8: sub     rax, rdx
 * 0000000140BB1AAB: jnz     short loc_140BB1A97
 * 0000000140BB1AAD: test    r8d, r8d
 * 0000000140BB1AB0: jz      short loc_140BB1AD1
 * 0000000140BB1AB2: mov     esi, 0FFFFFFFFh
 * 0000000140BB1AB7: movzx   eax, byte ptr [r9]
 * 0000000140BB1ABB: mov     ecx, r11d
 * 0000000140BB1ABE: xor     rbx, rax
 * 0000000140BB1AC1: add     r9, rdx
 * 0000000140BB1AC4: rol     rbx, cl
 * 0000000140BB1AC7: add     r8d, esi
 * 0000000140BB1ACA: jnz     short loc_140BB1AB7
 * 0000000140BB1ACC: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB1AD1: mov     rax, rbx
 * 0000000140BB1AD4: jmp     short loc_140BB1AD8
 * 0000000140BB1AD6: xor     ebx, eax
 * 0000000140BB1AD8: shr     rax, 1Fh
 * 0000000140BB1ADC: test    rax, rax
 * 0000000140BB1ADF: jnz     short loc_140BB1AD6
 * 0000000140BB1AE1: btr     ebx, 1Fh
 * 0000000140BB1AE5: cmp     ebx, [r13+14h]
 * 0000000140BB1AE9: jz      loc_140BB1BC1
 * 0000000140BB1AEF: lock or [rsp+9D0h+var_9D0], r12d
 * 0000000140BB1AF4: mov     eax, [r13+18h]
 * 0000000140BB1AF8: test    dl, al
 * 0000000140BB1AFA: jz      short loc_140BB1B0D
 * 0000000140BB1AFC: mov     rax, [rsi+578h]
 * 0000000140BB1B03: mov     cl, [rax]
 * 0000000140BB1B05: test    cl, cl
 * 0000000140BB1B07: jnz     loc_140BB1BC1
 * 0000000140BB1B0D: mov     ecx, [r13+10h]
 * 0000000140BB1B11: mov     rdx, [r13+8]
 * 0000000140BB1B15: test    rcx, rcx
 * 0000000140BB1B18: jz      loc_140BB1C5B
 * 0000000140BB1B1E: mov     eax, [rsi+9DCh]
 * 0000000140BB1B24: mov     r8d, 40h ; '@'
 * 0000000140BB1B2A: test    r8b, al
 * 0000000140BB1B2D: jz      loc_140BB1C5B
 * 0000000140BB1B33: mov     r12, cr8
 * 0000000140BB1B37: lea     eax, [r8-3Eh]
 * 0000000140BB1B3B: mov     cr8, rax
 * 0000000140BB1B3F: mov     r14, rdx
 * 0000000140BB1B42: lea     rax, [rcx-1]
 * 0000000140BB1B46: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BB1B4D: add     rax, rdx
 * 0000000140BB1B50: or      rax, 0FFFh
 * 0000000140BB1B56: mov     [rsp+9D0h+var_978], rax
 * 0000000140BB1B5B: lea     r13, [r14-1]
 * 0000000140BB1B5F: movzx   r15d, r12b
 * 0000000140BB1B63: mov     rax, [rsi+468h]
 * 0000000140BB1B6A: xor     edx, edx
 * 0000000140BB1B6C: mov     rcx, r14
 * 0000000140BB1B6F: call    KeGuardDispatchICall
 * 0000000140BB1B74: cmp     eax, 0C000022Dh
 * 0000000140BB1B79: jnz     short loc_140BB1B9B
 * 0000000140BB1B7B: mov     eax, 1
 * 0000000140BB1B80: cmp     r12b, al
 * 0000000140BB1B83: ja      short loc_140BB1BA3
 * 0000000140BB1B85: movzx   r15d, r12b
 * 0000000140BB1B89: mov     cr8, r15
 * 0000000140BB1B8D: mov     al, [r14]
 * 0000000140BB1B90: mov     eax, 2
 * 0000000140BB1B95: mov     cr8, rax
 * 0000000140BB1B99: jmp     short loc_140BB1B63
 * 0000000140BB1B9B: test    eax, eax
 * 0000000140BB1B9D: js      loc_140BB1C4F
 * 0000000140BB1BA3: mov     eax, 1000h
 * 0000000140BB1BA8: add     r14, rax
 * 0000000140BB1BAB: add     r13, rax
 * 0000000140BB1BAE: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BB1BB3: jnz     short loc_140BB1B5F
 * 0000000140BB1BB5: mov     cr8, r15
 * 0000000140BB1BB9: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB1BBE: xor     r12d, r12d
 * 0000000140BB1BC1: mov     ebx, 1
 * 0000000140BB1BC6: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB1BD0: jz      loc_140BB1F9B
 * 0000000140BB1BD6: mov     r8d, [r13+10h]
 * 0000000140BB1BDA: test    r8d, r8d
 * 0000000140BB1BDD: jz      loc_140BB1F9B
 * 0000000140BB1BE3: mov     rdx, [r13+8]
 * 0000000140BB1BE7: lea     r9, [rbp+8D0h+var_328]
 * 0000000140BB1BEE: mov     rcx, rsi
 * 0000000140BB1BF1: call    sub_140516AFC
 * 0000000140BB1BF6: mov     edx, 10h
 * 0000000140BB1BFB: lea     r8, [r13+1Ch]
 * 0000000140BB1BFF: lea     r9, [rbp+8D0h+var_328]
 * 0000000140BB1C06: mov     rcx, [r9]
 * 0000000140BB1C09: add     r9, 8
 * 0000000140BB1C0D: mov     rax, [r8]
 * 0000000140BB1C10: add     r8, 8
 * 0000000140BB1C14: cmp     rcx, rax
 * 0000000140BB1C17: jnz     loc_140BB1DA5
 * 0000000140BB1C1D: add     edx, 0FFFFFFF8h
 * 0000000140BB1C20: cmp     edx, 8
 * 0000000140BB1C23: jnb     short loc_140BB1C06
 * 0000000140BB1C25: test    edx, edx
 * 0000000140BB1C27: jz      loc_140BB1F8E
 * 0000000140BB1C2D: mov     cl, [r9]
 * 0000000140BB1C30: add     r9, rbx
 * 0000000140BB1C33: mov     al, [r8]
 * 0000000140BB1C36: add     r8, rbx
 * 0000000140BB1C39: cmp     cl, al
 * 0000000140BB1C3B: jnz     loc_140BB1DA5
 * 0000000140BB1C41: mov     eax, 0FFFFFFFFh
 * 0000000140BB1C46: add     edx, eax
 * 0000000140BB1C48: jnz     short loc_140BB1C2D
 * 0000000140BB1C4A: jmp     loc_140BB1F8E
 * 0000000140BB1C4F: mov     cr8, r15
 * 0000000140BB1C53: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB1C58: xor     r12d, r12d
 * 0000000140BB1C5B: mov     eax, [r13+14h]
 * 0000000140BB1C5F: cmp     [rsi+918h], r12d
 * 0000000140BB1C66: jnz     short loc_140BB1C7A
 * 0000000140BB1C68: mov     ecx, eax
 * 0000000140BB1C6A: mov     eax, ebx
 * 0000000140BB1C6C: xor     rcx, rax
 * 0000000140BB1C6F: mov     rax, [rsi+588h]
 * 0000000140BB1C76: mov     [rax+18h], rcx
 * 0000000140BB1C7A: mov     ebx, 1
 * 0000000140BB1C7F: mov     rcx, [r13+8]
 * 0000000140BB1C83: cmp     [rsi+918h], r12d
 * 0000000140BB1C8A: jnz     loc_140BB1BC6
 * 0000000140BB1C90: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB1C9A: add     rax, rsi
 * 0000000140BB1C9D: mov     [rsi+920h], rax
 * 0000000140BB1CA4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB1CAE: add     rax, r13
 * 0000000140BB1CB1: mov     [rsi+928h], rax
 * 0000000140BB1CB8: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB1CBC: mov     [rsi+930h], rax
 * 0000000140BB1CC3: mov     [rsi+938h], rcx
 * 0000000140BB1CCA: mov     [rsi+918h], ebx
 * 0000000140BB1CD0: mov     ecx, [rsi+9D8h]
 * 0000000140BB1CD6: bt      ecx, 1Dh
 * 0000000140BB1CDA: jb      loc_140BB1BC6
 * 0000000140BB1CE0: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB1CEA: jz      loc_140BB1BC6
 * 0000000140BB1CF0: test    bl, cl
 * 0000000140BB1CF2: jz      loc_140BB1BC6
 * 0000000140BB1CF8: mov     ecx, [rsi+0A74h]
 * 0000000140BB1CFE: mov     eax, [rsi+804h]
 * 0000000140BB1D04: mov     r10, [rsi+838h]
 * 0000000140BB1D0B: sub     eax, ecx
 * 0000000140BB1D0D: mov     r8, [rsi+0A78h]
 * 0000000140BB1D14: lea     rdx, [rcx+rsi]
 * 0000000140BB1D18: mov     ecx, eax
 * 0000000140BB1D1A: shr     rcx, 3
 * 0000000140BB1D1E: lea     r9, [rdx+rcx*8]
 * 0000000140BB1D22: jmp     short loc_140BB1D45
 * 0000000140BB1D24: xor     [rdx], r8
 * 0000000140BB1D27: mov     rax, [rdx]
 * 0000000140BB1D2A: movzx   ecx, r8b
 * 0000000140BB1D2E: xor     rax, r10
 * 0000000140BB1D31: and     ecx, 3Fh
 * 0000000140BB1D34: ror     r8, cl
 * 0000000140BB1D37: add     r8, rax
 * 0000000140BB1D3A: xor     r8, 0EFAh
 * 0000000140BB1D41: add     rdx, 8
 * 0000000140BB1D45: cmp     rdx, r9
 * 0000000140BB1D48: jnz     short loc_140BB1D24
 * 0000000140BB1D4A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB1D52: cmp     r8, [rsi+0A80h]
 * 0000000140BB1D59: jz      loc_140BB1BC6
 * 0000000140BB1D5F: mov     ecx, [rsi+804h]
 * 0000000140BB1D65: mov     rax, [rsi+588h]
 * 0000000140BB1D6C: mov     [rax], rsi
 * 0000000140BB1D6F: mov     [rax+10h], ecx
 * 0000000140BB1D72: mov     rcx, [rsi+0A80h]
 * 0000000140BB1D79: cmp     [rsi+918h], r12d
 * 0000000140BB1D80: jnz     short loc_140BB1D90
 * 0000000140BB1D82: mov     rax, [rsi+588h]
 * 0000000140BB1D89: xor     rcx, r8
 * 0000000140BB1D8C: mov     [rax+18h], rcx
 * 0000000140BB1D90: xor     edx, edx
 * 0000000140BB1D92: mov     r9d, 100h
 * 0000000140BB1D98: mov     rcx, rsi
 * 0000000140BB1D9B: call    sub_140BC7384
 * 0000000140BB1DA0: jmp     loc_140BB1BC6
 * 0000000140BB1DA5: lock or [rsp+9D0h+var_9D0], r12d
 * 0000000140BB1DAA: mov     eax, [r13+18h]
 * 0000000140BB1DAE: test    bl, al
 * 0000000140BB1DB0: jz      short loc_140BB1DC3
 * 0000000140BB1DB2: mov     rax, [rsi+578h]
 * 0000000140BB1DB9: mov     cl, [rax]
 * 0000000140BB1DBB: test    cl, cl
 * 0000000140BB1DBD: jnz     loc_140BB1F8E
 * 0000000140BB1DC3: mov     ecx, [r13+10h]
 * 0000000140BB1DC7: mov     rdx, [r13+8]
 * 0000000140BB1DCB: test    rcx, rcx
 * 0000000140BB1DCE: jz      loc_140BB1E71
 * 0000000140BB1DD4: mov     eax, [rsi+9DCh]
 * 0000000140BB1DDA: mov     r8d, 40h ; '@'
 * 0000000140BB1DE0: test    r8b, al
 * 0000000140BB1DE3: jz      loc_140BB1E71
 * 0000000140BB1DE9: mov     r14, cr8
 * 0000000140BB1DED: mov     rbx, rdx
 * 0000000140BB1DF0: lea     r12, [rcx-1]
 * 0000000140BB1DF4: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140BB1DFB: add     r12, rdx
 * 0000000140BB1DFE: or      r12, 0FFFh
 * 0000000140BB1E05: lea     r15, [rbx-1]
 * 0000000140BB1E09: mov     eax, 2
 * 0000000140BB1E0E: mov     cr8, rax
 * 0000000140BB1E12: mov     rax, [rsi+468h]
 * 0000000140BB1E19: xor     edx, edx
 * 0000000140BB1E1B: mov     rcx, rbx
 * 0000000140BB1E1E: call    KeGuardDispatchICall
 * 0000000140BB1E23: cmp     eax, 0C000022Dh
 * 0000000140BB1E28: jnz     short loc_140BB1E40
 * 0000000140BB1E2A: mov     eax, 1
 * 0000000140BB1E2F: cmp     r14b, al
 * 0000000140BB1E32: ja      short loc_140BB1E44
 * 0000000140BB1E34: movzx   eax, r14b
 * 0000000140BB1E38: mov     cr8, rax
 * 0000000140BB1E3C: mov     al, [rbx]
 * 0000000140BB1E3E: jmp     short loc_140BB1E09
 * 0000000140BB1E40: test    eax, eax
 * 0000000140BB1E42: js      short loc_140BB1E61
 * 0000000140BB1E44: mov     eax, 1000h
 * 0000000140BB1E49: add     rbx, rax
 * 0000000140BB1E4C: add     r15, rax
 * 0000000140BB1E4F: cmp     r15, r12
 * 0000000140BB1E52: jnz     short loc_140BB1E12
 * 0000000140BB1E54: movzx   eax, r14b
 * 0000000140BB1E58: mov     cr8, rax
 * 0000000140BB1E5C: jmp     loc_140BB1F8E
 * 0000000140BB1E61: movzx   eax, r14b
 * 0000000140BB1E65: mov     cr8, rax
 * 0000000140BB1E69: xor     r12d, r12d
 * 0000000140BB1E6C: lea     ebx, [r12+1]
 * 0000000140BB1E71: mov     rcx, [r13+8]
 * 0000000140BB1E75: cmp     [rsi+918h], r12d
 * 0000000140BB1E7C: jnz     loc_140BB1F8E
 * 0000000140BB1E82: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB1E8C: add     rax, rsi
 * 0000000140BB1E8F: mov     [rsi+920h], rax
 * 0000000140BB1E96: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB1EA0: add     rax, r13
 * 0000000140BB1EA3: mov     [rsi+928h], rax
 * 0000000140BB1EAA: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB1EAE: mov     [rsi+930h], rax
 * 0000000140BB1EB5: mov     [rsi+938h], rcx
 * 0000000140BB1EBC: mov     [rsi+918h], ebx
 * 0000000140BB1EC2: mov     ecx, [rsi+9D8h]
 * 0000000140BB1EC8: bt      ecx, 1Dh
 * 0000000140BB1ECC: jb      loc_140BB1F8E
 * 0000000140BB1ED2: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB1EDC: jz      loc_140BB1F8E
 * 0000000140BB1EE2: test    bl, cl
 * 0000000140BB1EE4: jz      loc_140BB1F8E
 * 0000000140BB1EEA: mov     ecx, [rsi+0A74h]
 * 0000000140BB1EF0: mov     eax, [rsi+804h]
 * 0000000140BB1EF6: mov     r10, [rsi+838h]
 * 0000000140BB1EFD: sub     eax, ecx
 * 0000000140BB1EFF: mov     r8, [rsi+0A78h]
 * 0000000140BB1F06: lea     rdx, [rcx+rsi]
 * 0000000140BB1F0A: mov     ecx, eax
 * 0000000140BB1F0C: shr     rcx, 3
 * 0000000140BB1F10: lea     r9, [rdx+rcx*8]
 * 0000000140BB1F14: jmp     short loc_140BB1F37
 * 0000000140BB1F16: xor     [rdx], r8
 * 0000000140BB1F19: mov     rax, [rdx]
 * 0000000140BB1F1C: movzx   ecx, r8b
 * 0000000140BB1F20: xor     rax, r10
 * 0000000140BB1F23: and     ecx, 3Fh
 * 0000000140BB1F26: ror     r8, cl
 * 0000000140BB1F29: add     r8, rax
 * 0000000140BB1F2C: xor     r8, 0EFAh
 * 0000000140BB1F33: add     rdx, 8
 * 0000000140BB1F37: cmp     rdx, r9
 * 0000000140BB1F3A: jnz     short loc_140BB1F16
 * 0000000140BB1F3C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB1F44: cmp     r8, [rsi+0A80h]
 * 0000000140BB1F4B: jz      short loc_140BB1F8E
 * 0000000140BB1F4D: mov     ecx, [rsi+804h]
 * 0000000140BB1F53: mov     rax, [rsi+588h]
 * 0000000140BB1F5A: mov     [rax], rsi
 * 0000000140BB1F5D: mov     [rax+10h], ecx
 * 0000000140BB1F60: mov     rcx, [rsi+0A80h]
 * 0000000140BB1F67: cmp     [rsi+918h], r12d
 * 0000000140BB1F6E: jnz     short loc_140BB1F7E
 * 0000000140BB1F70: mov     rax, [rsi+588h]
 * 0000000140BB1F77: xor     rcx, r8
 * 0000000140BB1F7A: mov     [rax+18h], rcx
 * 0000000140BB1F7E: xor     edx, edx
 * 0000000140BB1F80: mov     r9d, 100h
 * 0000000140BB1F86: mov     rcx, rsi
 * 0000000140BB1F89: call    sub_140BC7384
 * 0000000140BB1F8E: mov     eax, [r13+10h]
 * 0000000140BB1F92: shl     eax, 4
 * 0000000140BB1F95: add     [rsi+848h], eax
 * 0000000140BB1F9B: mov     r11d, 1000h
 * 0000000140BB1FA1: xor     r15d, r15d
 * 0000000140BB1FA4: mov     ebx, 1
 * 0000000140BB1FA9: mov     r12d, 6
 * 0000000140BB1FAF: mov     ecx, [rbp+8D0h+var_8C4]
 * 0000000140BB1FB2: cmp     [rsi+844h], r15d
 * 0000000140BB1FB9: jz      short loc_140BB1FC2
 * 0000000140BB1FBB: mov     eax, 0FFFFFFFFh
 * 0000000140BB1FC0: add     ecx, eax
 * 0000000140BB1FC2: add     ecx, ebx
 * 0000000140BB1FC4: mov     [rbp+8D0h+var_8C4], ecx
 * 0000000140BB1FC7: cmp     [rsi+918h], r15d
 * 0000000140BB1FCE: jnz     loc_140BBF466
 * 0000000140BB1FD4: mov     eax, [rsi+84Ch]
 * 0000000140BB1FDA: cmp     [rsi+848h], eax
 * 0000000140BB1FE0: jge     loc_140BBF466
 * 0000000140BB1FE6: mov     edx, 28h ; '('
 * 0000000140BB1FEB: lea     r14d, [rdx-23h]
 * 0000000140BB1FEF: jmp     loc_140BB1659
 * 0000000140BB1FF4: mov     r15d, [rsi+844h]
 * 0000000140BB1FFB: lea     rax, [r13+30h]
 * 0000000140BB1FFF: mov     r12d, [r13+1Ch]
 * 0000000140BB2003: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BB2008: shl     r15, 4
 * 0000000140BB200C: shl     r12, 4
 * 0000000140BB2010: add     r15, rax
 * 0000000140BB2013: add     r12, rax
 * 0000000140BB2016: mov     [rsp+9D0h+var_978], r12
 * 0000000140BB201B: xor     edx, edx
 * 0000000140BB201D: cmp     [r15], edx
 * 0000000140BB2020: jl      loc_140BB2386
 * 0000000140BB2026: mov     r13, [r15+8]
 * 0000000140BB202A: mov     r14d, [r15+4]
 * 0000000140BB202E: mov     r8, r13
 * 0000000140BB2031: add     [rsi+848h], r14d
 * 0000000140BB2038: mov     rax, r13
 * 0000000140BB203B: mov     r10d, [rsi+834h]
 * 0000000140BB2042: mov     r11, [rsi+838h]
 * 0000000140BB2049: lea     rcx, [r14+r13]
 * 0000000140BB204D: mov     [rbp+8D0h+var_940], r13
 * 0000000140BB2051: mov     dword ptr [rbp+8D0h+arg_8], r14d
 * 0000000140BB2058: cmp     r13, rcx
 * 0000000140BB205B: jnb     short loc_140BB206E
 * 0000000140BB205D: mov     r9d, 40h ; '@'
 * 0000000140BB2063: prefetchnta byte ptr [rax]
 * 0000000140BB2066: add     rax, r9
 * 0000000140BB2069: cmp     rax, rcx
 * 0000000140BB206C: jb      short loc_140BB2063
 * 0000000140BB206E: mov     r9d, r14d
 * 0000000140BB2071: mov     rbx, r11
 * 0000000140BB2074: shr     r9d, 7
 * 0000000140BB2078: test    r9d, r9d
 * 0000000140BB207B: jz      short loc_140BB20F3
 * 0000000140BB207D: mov     esi, 0FFFFFFFFh
 * 0000000140BB2082: mov     r12d, 1
 * 0000000140BB2088: mov     r14, 7010008004002001h
 * 0000000140BB2092: mov     eax, 8
 * 0000000140BB2097: xor     rbx, [r8]
 * 0000000140BB209A: mov     ecx, r10d
 * 0000000140BB209D: rol     rbx, cl
 * 0000000140BB20A0: xor     rbx, [r8+8]
 * 0000000140BB20A4: add     r8, 10h
 * 0000000140BB20A8: rol     rbx, cl
 * 0000000140BB20AB: sub     rax, r12
 * 0000000140BB20AE: jnz     short loc_140BB2097
 * 0000000140BB20B0: mov     rcx, r8
 * 0000000140BB20B3: sub     rcx, r13
 * 0000000140BB20B6: xor     rcx, r11
 * 0000000140BB20B9: mov     rax, rcx
 * 0000000140BB20BC: rol     rax, 11h
 * 0000000140BB20C0: xor     rcx, rax
 * 0000000140BB20C3: mov     rax, r14
 * 0000000140BB20C6: mul     rcx
 * 0000000140BB20C9: xor     eax, edx
 * 0000000140BB20CB: mov     [rbp+8D0h+var_338], rdx
 * 0000000140BB20D2: xor     r10d, eax
 * 0000000140BB20D5: and     r10d, 3Fh
 * 0000000140BB20D9: cmovz   r10d, r12d
 * 0000000140BB20DD: add     r9d, esi
 * 0000000140BB20E0: jnz     short loc_140BB2092
 * 0000000140BB20E2: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB20E7: mov     r14d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB20EE: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BB20F3: mov     edx, r14d
 * 0000000140BB20F6: mov     r9d, 1
 * 0000000140BB20FC: and     edx, 7Fh
 * 0000000140BB20FF: cmp     edx, 8
 * 0000000140BB2102: jb      short loc_140BB211F
 * 0000000140BB2104: mov     eax, edx
 * 0000000140BB2106: shr     rax, 3
 * 0000000140BB210A: xor     rbx, [r8]
 * 0000000140BB210D: mov     ecx, r10d
 * 0000000140BB2110: rol     rbx, cl
 * 0000000140BB2113: add     r8, 8
 * 0000000140BB2117: add     edx, 0FFFFFFF8h
 * 0000000140BB211A: sub     rax, r9
 * 0000000140BB211D: jnz     short loc_140BB210A
 * 0000000140BB211F: test    edx, edx
 * 0000000140BB2121: jz      short loc_140BB2141
 * 0000000140BB2123: mov     esi, 0FFFFFFFFh
 * 0000000140BB2128: movzx   eax, byte ptr [r8]
 * 0000000140BB212C: mov     ecx, r10d
 * 0000000140BB212F: xor     rbx, rax
 * 0000000140BB2132: add     r8, r9
 * 0000000140BB2135: rol     rbx, cl
 * 0000000140BB2138: add     edx, esi
 * 0000000140BB213A: jnz     short loc_140BB2128
 * 0000000140BB213C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB2141: mov     rax, rbx
 * 0000000140BB2144: shr     rax, 1Fh
 * 0000000140BB2148: xor     edx, edx
 * 0000000140BB214A: jmp     short loc_140BB2152
 * 0000000140BB214C: xor     ebx, eax
 * 0000000140BB214E: shr     rax, 1Fh
 * 0000000140BB2152: test    rax, rax
 * 0000000140BB2155: jnz     short loc_140BB214C
 * 0000000140BB2157: mov     eax, [r15]
 * 0000000140BB215A: btr     ebx, 1Fh
 * 0000000140BB215E: btr     eax, 1Fh
 * 0000000140BB2162: cmp     ebx, eax
 * 0000000140BB2164: jz      loc_140BB23B7
 * 0000000140BB216A: mov     ecx, r14d
 * 0000000140BB216D: test    r14d, r14d
 * 0000000140BB2170: jz      loc_140BB220E
 * 0000000140BB2176: mov     eax, [rsi+9DCh]
 * 0000000140BB217C: mov     r8d, 40h ; '@'
 * 0000000140BB2182: test    r8b, al
 * 0000000140BB2185: jz      loc_140BB220E
 * 0000000140BB218B: mov     r12, cr8
 * 0000000140BB218F: lea     eax, [r8-3Eh]
 * 0000000140BB2193: mov     cr8, rax
 * 0000000140BB2197: mov     r14, r13
 * 0000000140BB219A: lea     rax, [r13-1]
 * 0000000140BB219E: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BB21A5: add     rax, rcx
 * 0000000140BB21A8: or      rax, 0FFFh
 * 0000000140BB21AE: mov     [rsp+9D0h+var_968], rax
 * 0000000140BB21B3: lea     r13, [r14-1]
 * 0000000140BB21B7: mov     rax, [rsi+468h]
 * 0000000140BB21BE: xor     edx, edx
 * 0000000140BB21C0: mov     rcx, r14
 * 0000000140BB21C3: call    KeGuardDispatchICall
 * 0000000140BB21C8: cmp     eax, 0C000022Dh
 * 0000000140BB21CD: jnz     short loc_140BB21F3
 * 0000000140BB21CF: mov     eax, 1
 * 0000000140BB21D4: cmp     r12b, al
 * 0000000140BB21D7: ja      loc_140BB22D5
 * 0000000140BB21DD: movzx   eax, r12b
 * 0000000140BB21E1: mov     cr8, rax
 * 0000000140BB21E5: mov     al, [r14]
 * 0000000140BB21E8: mov     eax, 2
 * 0000000140BB21ED: mov     cr8, rax
 * 0000000140BB21F1: jmp     short loc_140BB21B7
 * 0000000140BB21F3: xor     edx, edx
 * 0000000140BB21F5: test    eax, eax
 * 0000000140BB21F7: jns     loc_140BB22D7
 * 0000000140BB21FD: movzx   eax, r12b
 * 0000000140BB2201: mov     cr8, rax
 * 0000000140BB2205: mov     r13, [rbp+8D0h+var_940]
 * 0000000140BB2209: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BB220E: mov     eax, [r15]
 * 0000000140BB2211: btr     eax, 1Fh
 * 0000000140BB2215: cmp     [rsi+918h], edx
 * 0000000140BB221B: jnz     loc_140BB23B7
 * 0000000140BB2221: mov     ecx, ebx
 * 0000000140BB2223: xor     rcx, rax
 * 0000000140BB2226: mov     rax, [rsi+588h]
 * 0000000140BB222D: mov     [rax+18h], rcx
 * 0000000140BB2231: cmp     [rsi+918h], edx
 * 0000000140BB2237: jnz     loc_140BB23B7
 * 0000000140BB223D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB2247: mov     ebx, 1
 * 0000000140BB224C: add     rax, rsi
 * 0000000140BB224F: mov     [rsi+920h], rax
 * 0000000140BB2256: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB2260: add     rax, rdi
 * 0000000140BB2263: mov     [rsi+928h], rax
 * 0000000140BB226A: movsxd  rax, dword ptr [rdi]
 * 0000000140BB226D: mov     [rsi+930h], rax
 * 0000000140BB2274: mov     [rsi+938h], r13
 * 0000000140BB227B: mov     [rsi+918h], ebx
 * 0000000140BB2281: mov     ecx, [rsi+9D8h]
 * 0000000140BB2287: bt      ecx, 1Dh
 * 0000000140BB228B: jb      loc_140BB2380
 * 0000000140BB2291: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB229B: jz      loc_140BB2380
 * 0000000140BB22A1: test    bl, cl
 * 0000000140BB22A3: jz      loc_140BB2380
 * 0000000140BB22A9: mov     ecx, [rsi+0A74h]
 * 0000000140BB22AF: mov     eax, [rsi+804h]
 * 0000000140BB22B5: mov     r10, [rsi+838h]
 * 0000000140BB22BC: sub     eax, ecx
 * 0000000140BB22BE: mov     r8, [rsi+0A78h]
 * 0000000140BB22C5: lea     rdx, [rcx+rsi]
 * 0000000140BB22C9: mov     ecx, eax
 * 0000000140BB22CB: shr     rcx, 3
 * 0000000140BB22CF: lea     r9, [rdx+rcx*8]
 * 0000000140BB22D3: jmp     short loc_140BB2326
 * 0000000140BB22D5: xor     edx, edx
 * 0000000140BB22D7: mov     r11d, 1000h
 * 0000000140BB22DD: add     r14, r11
 * 0000000140BB22E0: add     r13, r11
 * 0000000140BB22E3: cmp     r13, [rsp+9D0h+var_968]
 * 0000000140BB22E8: jnz     loc_140BB21B7
 * 0000000140BB22EE: movzx   eax, r12b
 * 0000000140BB22F2: mov     cr8, rax
 * 0000000140BB22F6: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BB22FB: mov     ebx, 1
 * 0000000140BB2300: jmp     loc_140BB2386
 * 0000000140BB2305: xor     [rdx], r8
 * 0000000140BB2308: mov     rax, [rdx]
 * 0000000140BB230B: movzx   ecx, r8b
 * 0000000140BB230F: xor     rax, r10
 * 0000000140BB2312: and     ecx, 3Fh
 * 0000000140BB2315: ror     r8, cl
 * 0000000140BB2318: add     r8, rax
 * 0000000140BB231B: xor     r8, 0EFAh
 * 0000000140BB2322: add     rdx, 8
 * 0000000140BB2326: cmp     rdx, r9
 * 0000000140BB2329: jnz     short loc_140BB2305
 * 0000000140BB232B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB2333: cmp     r8, [rsi+0A80h]
 * 0000000140BB233A: jz      short loc_140BB237E
 * 0000000140BB233C: mov     rax, [rsi+588h]
 * 0000000140BB2343: mov     ecx, [rsi+804h]
 * 0000000140BB2349: mov     [rax], rsi
 * 0000000140BB234C: mov     [rax+10h], ecx
 * 0000000140BB234F: xor     eax, eax
 * 0000000140BB2351: mov     rcx, [rsi+0A80h]
 * 0000000140BB2358: cmp     [rsi+918h], eax
 * 0000000140BB235E: jnz     short loc_140BB236E
 * 0000000140BB2360: mov     rax, [rsi+588h]
 * 0000000140BB2367: xor     rcx, r8
 * 0000000140BB236A: mov     [rax+18h], rcx
 * 0000000140BB236E: xor     edx, edx
 * 0000000140BB2370: mov     r9d, 100h
 * 0000000140BB2376: mov     rcx, rsi
 * 0000000140BB2379: call    sub_140BC7384
 * 0000000140BB237E: xor     edx, edx
 * 0000000140BB2380: mov     r11d, 1000h
 * 0000000140BB2386: add     r15, 10h
 * 0000000140BB238A: cmp     r15, r12
 * 0000000140BB238D: jnb     short loc_140BB23A4
 * 0000000140BB238F: mov     eax, [rsi+84Ch]
 * 0000000140BB2395: cmp     [rsi+848h], eax
 * 0000000140BB239B: jl      loc_140BB201D
 * 0000000140BB23A1: cmp     r15, r12
 * 0000000140BB23A4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB23AB: mov     ecx, 844h
 * 0000000140BB23B0: jnz     short loc_140BB23BE
 * 0000000140BB23B2: mov     r15d, edx
 * 0000000140BB23B5: jmp     short loc_140BB23CE
 * 0000000140BB23B7: mov     ebx, 1
 * 0000000140BB23BC: jmp     short loc_140BB2380
 * 0000000140BB23BE: mov     rax, [rsp+9D0h+var_980]
 * 0000000140BB23C3: add     rax, 30h ; '0'
 * 0000000140BB23C7: sub     r15, rax
 * 0000000140BB23CA: sar     r15, 4
 * 0000000140BB23CE: mov     rax, rsi
 * 0000000140BB23D1: mov     [rax+rcx], r15d
 * 0000000140BB23D5: xor     r15d, r15d
 * 0000000140BB23D8: jmp     loc_140BB1FA9
 * 0000000140BB23DD: mov     rbx, [r13+18h]
 * 0000000140BB23E1: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140BB23EB: mov     rdx, [rsi+700h]
 * 0000000140BB23F2: mov     r12d, 1
 * 0000000140BB23F8: mov     rcx, [rsi+730h]
 * 0000000140BB23FF: add     rdx, rbx
 * 0000000140BB2402: movzx   eax, word ptr [r13+22h]
 * 0000000140BB2407: cmp     [rdx+rcx], ax
 * 0000000140BB240B: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140BB2415: jz      loc_140BB2538
 * 0000000140BB241B: cmp     [rsi+918h], r15d
 * 0000000140BB2422: jnz     loc_140BB2538
 * 0000000140BB2428: lea     rax, [rsi+r8]
 * 0000000140BB242C: mov     [rsi+920h], rax
 * 0000000140BB2433: lea     rax, [rdx+r13]
 * 0000000140BB2437: mov     [rsi+928h], rax
 * 0000000140BB243E: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB2442: mov     [rsi+930h], rax
 * 0000000140BB2449: mov     [rsi+938h], rbx
 * 0000000140BB2450: mov     [rsi+918h], r12d
 * 0000000140BB2457: mov     ecx, [rsi+9D8h]
 * 0000000140BB245D: bt      ecx, 1Dh
 * 0000000140BB2461: jb      loc_140BB2538
 * 0000000140BB2467: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB2471: jz      loc_140BB2538
 * 0000000140BB2477: test    r12b, cl
 * 0000000140BB247A: jz      loc_140BB2538
 * 0000000140BB2480: mov     ecx, [rsi+0A74h]
 * 0000000140BB2486: mov     eax, [rsi+804h]
 * 0000000140BB248C: mov     r10, [rsi+838h]
 * 0000000140BB2493: sub     eax, ecx
 * 0000000140BB2495: mov     r8, [rsi+0A78h]
 * 0000000140BB249C: lea     rdx, [rcx+rsi]
 * 0000000140BB24A0: mov     ecx, eax
 * 0000000140BB24A2: shr     rcx, 3
 * 0000000140BB24A6: lea     r9, [rdx+rcx*8]
 * 0000000140BB24AA: jmp     short loc_140BB24CD
 * 0000000140BB24AC: xor     [rdx], r8
 * 0000000140BB24AF: mov     rax, [rdx]
 * 0000000140BB24B2: movzx   ecx, r8b
 * 0000000140BB24B6: xor     rax, r10
 * 0000000140BB24B9: and     ecx, 3Fh
 * 0000000140BB24BC: ror     r8, cl
 * 0000000140BB24BF: add     r8, rax
 * 0000000140BB24C2: xor     r8, 0EFAh
 * 0000000140BB24C9: add     rdx, 8
 * 0000000140BB24CD: cmp     rdx, r9
 * 0000000140BB24D0: jnz     short loc_140BB24AC
 * 0000000140BB24D2: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB24DA: cmp     r8, [rsi+0A80h]
 * 0000000140BB24E1: jz      short loc_140BB2524
 * 0000000140BB24E3: mov     ecx, [rsi+804h]
 * 0000000140BB24E9: mov     rax, [rsi+588h]
 * 0000000140BB24F0: mov     [rax], rsi
 * 0000000140BB24F3: mov     [rax+10h], ecx
 * 0000000140BB24F6: mov     rcx, [rsi+0A80h]
 * 0000000140BB24FD: cmp     [rsi+918h], r15d
 * 0000000140BB2504: jnz     short loc_140BB2514
 * 0000000140BB2506: mov     rax, [rsi+588h]
 * 0000000140BB250D: xor     rcx, r8
 * 0000000140BB2510: mov     [rax+18h], rcx
 * 0000000140BB2514: xor     edx, edx
 * 0000000140BB2516: mov     r9d, 100h
 * 0000000140BB251C: mov     rcx, rsi
 * 0000000140BB251F: call    sub_140BC7384
 * 0000000140BB2524: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140BB252E: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140BB2538: movzx   eax, word ptr [r13+22h]
 * 0000000140BB253D: test    [rsi+738h], ax
 * 0000000140BB2544: jnz     loc_140BB2666
 * 0000000140BB254A: mov     rcx, [rsi+708h]
 * 0000000140BB2551: add     rcx, rbx
 * 0000000140BB2554: cmp     [rcx], rcx
 * 0000000140BB2557: jz      loc_140BB2666
 * 0000000140BB255D: cmp     [rsi+918h], r15d
 * 0000000140BB2564: jnz     loc_140BB2666
 * 0000000140BB256A: lea     rax, [rsi+r8]
 * 0000000140BB256E: mov     [rsi+920h], rax
 * 0000000140BB2575: lea     rax, [rdx+r13]
 * 0000000140BB2579: mov     [rsi+928h], rax
 * 0000000140BB2580: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB2584: mov     [rsi+930h], rax
 * 0000000140BB258B: mov     [rsi+938h], rbx
 * 0000000140BB2592: mov     [rsi+918h], r12d
 * 0000000140BB2599: mov     ecx, [rsi+9D8h]
 * 0000000140BB259F: bt      ecx, 1Dh
 * 0000000140BB25A3: jb      loc_140BB2666
 * 0000000140BB25A9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB25B3: jz      loc_140BB2666
 * 0000000140BB25B9: test    r12b, cl
 * 0000000140BB25BC: jz      loc_140BB2666
 * 0000000140BB25C2: mov     ecx, [rsi+0A74h]
 * 0000000140BB25C8: mov     eax, [rsi+804h]
 * 0000000140BB25CE: mov     r10, [rsi+838h]
 * 0000000140BB25D5: sub     eax, ecx
 * 0000000140BB25D7: mov     r8, [rsi+0A78h]
 * 0000000140BB25DE: lea     rdx, [rcx+rsi]
 * 0000000140BB25E2: mov     ecx, eax
 * 0000000140BB25E4: shr     rcx, 3
 * 0000000140BB25E8: lea     r9, [rdx+rcx*8]
 * 0000000140BB25EC: jmp     short loc_140BB260F
 * 0000000140BB25EE: xor     [rdx], r8
 * 0000000140BB25F1: mov     rax, [rdx]
 * 0000000140BB25F4: movzx   ecx, r8b
 * 0000000140BB25F8: xor     rax, r10
 * 0000000140BB25FB: and     ecx, 3Fh
 * 0000000140BB25FE: ror     r8, cl
 * 0000000140BB2601: add     r8, rax
 * 0000000140BB2604: xor     r8, 0EFAh
 * 0000000140BB260B: add     rdx, 8
 * 0000000140BB260F: cmp     rdx, r9
 * 0000000140BB2612: jnz     short loc_140BB25EE
 * 0000000140BB2614: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB261C: cmp     r8, [rsi+0A80h]
 * 0000000140BB2623: jz      short loc_140BB2666
 * 0000000140BB2625: mov     ecx, [rsi+804h]
 * 0000000140BB262B: mov     rax, [rsi+588h]
 * 0000000140BB2632: mov     [rax], rsi
 * 0000000140BB2635: mov     [rax+10h], ecx
 * 0000000140BB2638: mov     rcx, [rsi+0A80h]
 * 0000000140BB263F: cmp     [rsi+918h], r15d
 * 0000000140BB2646: jnz     short loc_140BB2656
 * 0000000140BB2648: mov     rax, [rsi+588h]
 * 0000000140BB264F: xor     rcx, r8
 * 0000000140BB2652: mov     [rax+18h], rcx
 * 0000000140BB2656: xor     edx, edx
 * 0000000140BB2658: mov     r9d, 100h
 * 0000000140BB265E: mov     rcx, rsi
 * 0000000140BB2661: call    sub_140BC7384
 * 0000000140BB2666: mov     r14, [r13+8]
 * 0000000140BB266A: mov     r8d, [r13+10h]
 * 0000000140BB266E: mov     r9, r14
 * 0000000140BB2671: add     [rsi+848h], r8d
 * 0000000140BB2678: mov     rax, r14
 * 0000000140BB267B: mov     r10d, [rsi+834h]
 * 0000000140BB2682: mov     r15, [rsi+838h]
 * 0000000140BB2689: lea     rcx, [r14+r8]
 * 0000000140BB268D: cmp     r14, rcx
 * 0000000140BB2690: jnb     short loc_140BB26A2
 * 0000000140BB2692: mov     edx, 40h ; '@'
 * 0000000140BB2697: prefetchnta byte ptr [rax]
 * 0000000140BB269A: add     rax, rdx
 * 0000000140BB269D: cmp     rax, rcx
 * 0000000140BB26A0: jb      short loc_140BB2697
 * 0000000140BB26A2: mov     r11d, r8d
 * 0000000140BB26A5: mov     rbx, r15
 * 0000000140BB26A8: shr     r11d, 7
 * 0000000140BB26AC: test    r11d, r11d
 * 0000000140BB26AF: jz      short loc_140BB2718
 * 0000000140BB26B1: mov     rsi, 7010008004002001h
 * 0000000140BB26BB: mov     eax, 8
 * 0000000140BB26C0: xor     rbx, [r9]
 * 0000000140BB26C3: mov     ecx, r10d
 * 0000000140BB26C6: rol     rbx, cl
 * 0000000140BB26C9: xor     rbx, [r9+8]
 * 0000000140BB26CD: add     r9, 10h
 * 0000000140BB26D1: rol     rbx, cl
 * 0000000140BB26D4: sub     rax, r12
 * 0000000140BB26D7: jnz     short loc_140BB26C0
 * 0000000140BB26D9: mov     rcx, r9
 * 0000000140BB26DC: sub     rcx, r14
 * 0000000140BB26DF: xor     rcx, r15
 * 0000000140BB26E2: mov     rax, rcx
 * 0000000140BB26E5: rol     rax, 11h
 * 0000000140BB26E9: xor     rcx, rax
 * 0000000140BB26EC: mov     rax, rsi
 * 0000000140BB26EF: mul     rcx
 * 0000000140BB26F2: xor     r10d, eax
 * 0000000140BB26F5: mov     [rbp+8D0h+var_330], rdx
 * 0000000140BB26FC: xor     r10d, edx
 * 0000000140BB26FF: mov     edx, 0FFFFFFFFh
 * 0000000140BB2704: and     r10d, 3Fh
 * 0000000140BB2708: cmovz   r10d, r12d
 * 0000000140BB270C: add     r11d, edx
 * 0000000140BB270F: jnz     short loc_140BB26BB
 * 0000000140BB2711: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB2716: jmp     short loc_140BB271D
 * 0000000140BB2718: mov     edx, 0FFFFFFFFh
 * 0000000140BB271D: and     r8d, 7Fh
 * 0000000140BB2721: cmp     r8d, 8
 * 0000000140BB2725: jb      short loc_140BB2744
 * 0000000140BB2727: mov     eax, r8d
 * 0000000140BB272A: shr     rax, 3
 * 0000000140BB272E: xor     rbx, [r9]
 * 0000000140BB2731: mov     ecx, r10d
 * 0000000140BB2734: rol     rbx, cl
 * 0000000140BB2737: add     r9, 8
 * 0000000140BB273B: add     r8d, 0FFFFFFF8h
 * 0000000140BB273F: sub     rax, r12
 * 0000000140BB2742: jnz     short loc_140BB272E
 * 0000000140BB2744: xor     r15d, r15d
 * 0000000140BB2747: test    r8d, r8d
 * 0000000140BB274A: jz      short loc_140BB2761
 * 0000000140BB274C: movzx   eax, byte ptr [r9]
 * 0000000140BB2750: mov     ecx, r10d
 * 0000000140BB2753: xor     rbx, rax
 * 0000000140BB2756: add     r9, r12
 * 0000000140BB2759: rol     rbx, cl
 * 0000000140BB275C: add     r8d, edx
 * 0000000140BB275F: jnz     short loc_140BB274C
 * 0000000140BB2761: mov     rax, rbx
 * 0000000140BB2764: jmp     short loc_140BB2768
 * 0000000140BB2766: xor     ebx, eax
 * 0000000140BB2768: shr     rax, 1Fh
 * 0000000140BB276C: test    rax, rax
 * 0000000140BB276F: jnz     short loc_140BB2766
 * 0000000140BB2771: btr     ebx, 1Fh
 * 0000000140BB2775: mov     r12d, r15d
 * 0000000140BB2778: cmp     ebx, [r13+14h]
 * 0000000140BB277C: jz      loc_140BB2852
 * 0000000140BB2782: cmp     [r13+0], r15d
 * 0000000140BB2786: jnz     short loc_140BB2795
 * 0000000140BB2788: cmp     [r13+18h], r15d
 * 0000000140BB278C: mov     eax, 1
 * 0000000140BB2791: cmovnz  r12d, eax
 * 0000000140BB2795: mov     ecx, [r13+10h]
 * 0000000140BB2799: mov     rdx, [r13+8]
 * 0000000140BB279D: test    rcx, rcx
 * 0000000140BB27A0: jz      loc_140BB2981
 * 0000000140BB27A6: mov     eax, [rsi+9DCh]
 * 0000000140BB27AC: mov     r8d, 40h ; '@'
 * 0000000140BB27B2: test    r8b, al
 * 0000000140BB27B5: jz      loc_140BB2981
 * 0000000140BB27BB: mov     r15, cr8
 * 0000000140BB27BF: lea     eax, [r8-3Eh]
 * 0000000140BB27C3: mov     cr8, rax
 * 0000000140BB27C7: mov     r14, rdx
 * 0000000140BB27CA: lea     rax, [rcx-1]
 * 0000000140BB27CE: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BB27D5: add     rax, rdx
 * 0000000140BB27D8: or      rax, 0FFFh
 * 0000000140BB27DE: mov     [rsp+9D0h+var_978], rax
 * 0000000140BB27E3: lea     r13, [r14-1]
 * 0000000140BB27E7: mov     rax, [rsi+468h]
 * 0000000140BB27EE: xor     edx, edx
 * 0000000140BB27F0: mov     rcx, r14
 * 0000000140BB27F3: call    KeGuardDispatchICall
 * 0000000140BB27F8: cmp     eax, 0C000022Dh
 * 0000000140BB27FD: jnz     short loc_140BB2828
 * 0000000140BB27FF: test    r12d, r12d
 * 0000000140BB2802: jnz     loc_140BB2971
 * 0000000140BB2808: lea     eax, [r12+1]
 * 0000000140BB280D: cmp     r15b, al
 * 0000000140BB2810: ja      short loc_140BB2830
 * 0000000140BB2812: movzx   eax, r15b
 * 0000000140BB2816: mov     cr8, rax
 * 0000000140BB281A: mov     al, [r14]
 * 0000000140BB281D: lea     eax, [r12+2]
 * 0000000140BB2822: mov     cr8, rax
 * 0000000140BB2826: jmp     short loc_140BB27E7
 * 0000000140BB2828: test    eax, eax
 * 0000000140BB282A: js      loc_140BB2971
 * 0000000140BB2830: mov     eax, 1000h
 * 0000000140BB2835: add     r14, rax
 * 0000000140BB2838: add     r13, rax
 * 0000000140BB283B: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BB2840: jnz     short loc_140BB27E7
 * 0000000140BB2842: movzx   eax, r15b
 * 0000000140BB2846: mov     cr8, rax
 * 0000000140BB284A: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB284F: xor     r15d, r15d
 * 0000000140BB2852: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140BB285C: mov     r14, 0B3B74BDEE4453415h
 * 0000000140BB2866: mov     ebx, 1
 * 0000000140BB286B: lea     rax, [r13+30h]
 * 0000000140BB286F: xor     r9d, r9d
 * 0000000140BB2872: mov     [rbp+8D0h+var_6D8], rax
 * 0000000140BB2879: lea     rcx, [rbp+8D0h+var_6E0]
 * 0000000140BB2880: movzx   eax, word ptr [r13+20h]
 * 0000000140BB2885: xor     r8d, r8d
 * 0000000140BB2888: mov     [rbp+8D0h+var_6E0], ax
 * 0000000140BB288F: xor     edx, edx
 * 0000000140BB2891: mov     [rbp+8D0h+var_6DE], ax
 * 0000000140BB2898: lea     rax, [rbp+8D0h+var_818]
 * 0000000140BB289F: mov     [rsp+9D0h+var_998], rax
 * 0000000140BB28A4: mov     rax, [rsi+500h]
 * 0000000140BB28AB: mov     [rsp+9D0h+var_9A0], r15
 * 0000000140BB28B0: mov     byte ptr [rsp+9D0h+var_9A8], r15b
 * 0000000140BB28B5: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BB28BA: mov     rax, [rsi+1F8h]
 * 0000000140BB28C1: call    KeGuardDispatchICall
 * 0000000140BB28C6: test    eax, eax
 * 0000000140BB28C8: js      loc_140BB2B58
 * 0000000140BB28CE: mov     rcx, [rbp+8D0h+var_818]
 * 0000000140BB28D5: cmp     rcx, [r13+18h]
 * 0000000140BB28D9: jz      loc_140BB2B4C
 * 0000000140BB28DF: cmp     [rsi+918h], r15d
 * 0000000140BB28E6: jnz     loc_140BB2B4C
 * 0000000140BB28EC: lea     rax, [rsi+r12]
 * 0000000140BB28F0: mov     [rsi+920h], rax
 * 0000000140BB28F7: lea     rax, [r14+r13]
 * 0000000140BB28FB: mov     [rsi+928h], rax
 * 0000000140BB2902: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB2906: mov     [rsi+930h], rax
 * 0000000140BB290D: mov     [rsi+938h], rcx
 * 0000000140BB2914: mov     [rsi+918h], ebx
 * 0000000140BB291A: mov     ecx, [rsi+9D8h]
 * 0000000140BB2920: bt      ecx, 1Dh
 * 0000000140BB2924: jb      loc_140BB2B45
 * 0000000140BB292A: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB2934: jz      loc_140BB2B45
 * 0000000140BB293A: test    bl, cl
 * 0000000140BB293C: jz      loc_140BB2B45
 * 0000000140BB2942: mov     ecx, [rsi+0A74h]
 * 0000000140BB2948: mov     eax, [rsi+804h]
 * 0000000140BB294E: mov     r10, [rsi+838h]
 * 0000000140BB2955: sub     eax, ecx
 * 0000000140BB2957: mov     r8, [rsi+0A78h]
 * 0000000140BB295E: lea     rdx, [rcx+rsi]
 * 0000000140BB2962: mov     ecx, eax
 * 0000000140BB2964: shr     rcx, 3
 * 0000000140BB2968: lea     r9, [rdx+rcx*8]
 * 0000000140BB296C: jmp     loc_140BB2AEE
 * 0000000140BB2971: movzx   eax, r15b
 * 0000000140BB2975: mov     cr8, rax
 * 0000000140BB2979: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB297E: xor     r15d, r15d
 * 0000000140BB2981: mov     eax, [r13+14h]
 * 0000000140BB2985: cmp     [rsi+918h], r15d
 * 0000000140BB298C: jnz     short loc_140BB29A0
 * 0000000140BB298E: mov     ecx, eax
 * 0000000140BB2990: mov     eax, ebx
 * 0000000140BB2992: xor     rcx, rax
 * 0000000140BB2995: mov     rax, [rsi+588h]
 * 0000000140BB299C: mov     [rax+18h], rcx
 * 0000000140BB29A0: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140BB29AA: mov     rcx, [r13+8]
 * 0000000140BB29AE: mov     r14, 0B3B74BDEE4453415h
 * 0000000140BB29B8: mov     ebx, 1
 * 0000000140BB29BD: cmp     [rsi+918h], r15d
 * 0000000140BB29C4: jnz     loc_140BB286B
 * 0000000140BB29CA: lea     rax, [rsi+r12]
 * 0000000140BB29CE: mov     [rsi+920h], rax
 * 0000000140BB29D5: lea     rax, [r14+r13]
 * 0000000140BB29D9: mov     [rsi+928h], rax
 * 0000000140BB29E0: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB29E4: mov     [rsi+930h], rax
 * 0000000140BB29EB: mov     [rsi+938h], rcx
 * 0000000140BB29F2: mov     [rsi+918h], ebx
 * 0000000140BB29F8: mov     ecx, [rsi+9D8h]
 * 0000000140BB29FE: bt      ecx, 1Dh
 * 0000000140BB2A02: jb      loc_140BB286B
 * 0000000140BB2A08: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB2A12: jz      loc_140BB286B
 * 0000000140BB2A18: test    bl, cl
 * 0000000140BB2A1A: jz      loc_140BB286B
 * 0000000140BB2A20: mov     ecx, [rsi+0A74h]
 * 0000000140BB2A26: mov     eax, [rsi+804h]
 * 0000000140BB2A2C: mov     r10, [rsi+838h]
 * 0000000140BB2A33: sub     eax, ecx
 * 0000000140BB2A35: mov     r8, [rsi+0A78h]
 * 0000000140BB2A3C: lea     rdx, [rcx+rsi]
 * 0000000140BB2A40: mov     ecx, eax
 * 0000000140BB2A42: shr     rcx, 3
 * 0000000140BB2A46: lea     r9, [rdx+rcx*8]
 * 0000000140BB2A4A: jmp     short loc_140BB2A6D
 * 0000000140BB2A4C: xor     [rdx], r8
 * 0000000140BB2A4F: mov     rax, [rdx]
 * 0000000140BB2A52: movzx   ecx, r8b
 * 0000000140BB2A56: xor     rax, r10
 * 0000000140BB2A59: and     ecx, 3Fh
 * 0000000140BB2A5C: ror     r8, cl
 * 0000000140BB2A5F: add     r8, rax
 * 0000000140BB2A62: xor     r8, 0EFAh
 * 0000000140BB2A69: add     rdx, 8
 * 0000000140BB2A6D: cmp     rdx, r9
 * 0000000140BB2A70: jnz     short loc_140BB2A4C
 * 0000000140BB2A72: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB2A7A: cmp     r8, [rsi+0A80h]
 * 0000000140BB2A81: jz      loc_140BB286B
 * 0000000140BB2A87: mov     ecx, [rsi+804h]
 * 0000000140BB2A8D: mov     rax, [rsi+588h]
 * 0000000140BB2A94: mov     [rax], rsi
 * 0000000140BB2A97: mov     [rax+10h], ecx
 * 0000000140BB2A9A: mov     rcx, [rsi+0A80h]
 * 0000000140BB2AA1: cmp     [rsi+918h], r15d
 * 0000000140BB2AA8: jnz     short loc_140BB2AB8
 * 0000000140BB2AAA: mov     rax, [rsi+588h]
 * 0000000140BB2AB1: xor     rcx, r8
 * 0000000140BB2AB4: mov     [rax+18h], rcx
 * 0000000140BB2AB8: xor     edx, edx
 * 0000000140BB2ABA: mov     r9d, 100h
 * 0000000140BB2AC0: mov     rcx, rsi
 * 0000000140BB2AC3: call    sub_140BC7384
 * 0000000140BB2AC8: jmp     loc_140BB286B
 * 0000000140BB2ACD: xor     [rdx], r8
 * 0000000140BB2AD0: mov     rax, [rdx]
 * 0000000140BB2AD3: movzx   ecx, r8b
 * 0000000140BB2AD7: xor     rax, r10
 * 0000000140BB2ADA: and     ecx, 3Fh
 * 0000000140BB2ADD: ror     r8, cl
 * 0000000140BB2AE0: add     r8, rax
 * 0000000140BB2AE3: xor     r8, 0EFAh
 * 0000000140BB2AEA: add     rdx, 8
 * 0000000140BB2AEE: cmp     rdx, r9
 * 0000000140BB2AF1: jnz     short loc_140BB2ACD
 * 0000000140BB2AF3: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB2AFB: cmp     r8, [rsi+0A80h]
 * 0000000140BB2B02: jz      short loc_140BB2B45
 * 0000000140BB2B04: mov     ecx, [rsi+804h]
 * 0000000140BB2B0A: mov     rax, [rsi+588h]
 * 0000000140BB2B11: mov     [rax], rsi
 * 0000000140BB2B14: mov     [rax+10h], ecx
 * 0000000140BB2B17: mov     rcx, [rsi+0A80h]
 * 0000000140BB2B1E: cmp     [rsi+918h], r15d
 * 0000000140BB2B25: jnz     short loc_140BB2B35
 * 0000000140BB2B27: mov     rax, [rsi+588h]
 * 0000000140BB2B2E: xor     rcx, r8
 * 0000000140BB2B31: mov     [rax+18h], rcx
 * 0000000140BB2B35: xor     edx, edx
 * 0000000140BB2B37: mov     r9d, 100h
 * 0000000140BB2B3D: mov     rcx, rsi
 * 0000000140BB2B40: call    sub_140BC7384
 * 0000000140BB2B45: mov     rcx, [rbp+8D0h+var_818]
 * 0000000140BB2B4C: mov     rax, [rsi+1F0h]
 * 0000000140BB2B53: call    KeGuardDispatchICall
 * 0000000140BB2B58: mov     ebx, 1
 * 0000000140BB2B5D: mov     r11d, 1000h
 * 0000000140BB2B63: jmp     loc_140BB1FA9
 * 0000000140BB2B68: mov     rax, [rsi+1B0h]
 * 0000000140BB2B6F: lea     rcx, [rbp+8D0h+var_318]
 * 0000000140BB2B76: mov     edx, [r13+1Ch]
 * 0000000140BB2B7A: call    KeGuardDispatchICall
 * 0000000140BB2B7F: mov     rax, [rsi+1E0h]
 * 0000000140BB2B86: lea     rdx, [rbp+8D0h+var_308]
 * 0000000140BB2B8D: lea     rcx, [rbp+8D0h+var_318]
 * 0000000140BB2B94: call    KeGuardDispatchICall
 * 0000000140BB2B99: mov     ebx, r15d
 * 0000000140BB2B9C: cmp     [r13+18h], r15d
 * 0000000140BB2BA0: jbe     loc_140BB2D77
 * 0000000140BB2BA6: test    byte ptr [rsi+89Bh], 2
 * 0000000140BB2BAD: mov     eax, ebx
 * 0000000140BB2BAF: lea     r8, [rax+rax*2]
 * 0000000140BB2BB3: mov     r9d, [r13+r8*8+40h]
 * 0000000140BB2BB8: jz      short loc_140BB2BDD
 * 0000000140BB2BBA: mov     eax, 0C0000082h
 * 0000000140BB2BBF: cmp     r9d, eax
 * 0000000140BB2BC2: jnz     short loc_140BB2BDD
 * 0000000140BB2BC4: mov     eax, gs:1A4h
 * 0000000140BB2BCC: cmp     eax, [rsi+910h]
 * 0000000140BB2BD2: jnz     short loc_140BB2BDD
 * 0000000140BB2BD4: mov     rdx, [rsi+908h]
 * 0000000140BB2BDB: jmp     short loc_140BB2BE9
 * 0000000140BB2BDD: mov     ecx, r9d
 * 0000000140BB2BE0: rdmsr
 * 0000000140BB2BE2: shl     rdx, 20h
 * 0000000140BB2BE6: or      rdx, rax
 * 0000000140BB2BE9: mov     rcx, [r13+r8*8+30h]
 * 0000000140BB2BEE: mov     r8, [r13+r8*8+38h]
 * 0000000140BB2BF3: and     rdx, rcx
 * 0000000140BB2BF6: cmp     rdx, r8
 * 0000000140BB2BF9: jz      loc_140BB2D46
 * 0000000140BB2BFF: mov     ecx, [r13+1Ch]
 * 0000000140BB2C03: shl     rcx, 20h
 * 0000000140BB2C07: or      rcx, r9
 * 0000000140BB2C0A: cmp     [rsi+918h], r15d
 * 0000000140BB2C11: jnz     loc_140BB2D64
 * 0000000140BB2C17: mov     rax, [rsi+588h]
 * 0000000140BB2C1E: xor     r8, rdx
 * 0000000140BB2C21: mov     [rax+18h], r8
 * 0000000140BB2C25: cmp     [rsi+918h], r15d
 * 0000000140BB2C2C: jnz     loc_140BB2D64
 * 0000000140BB2C32: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB2C3C: mov     edi, 1
 * 0000000140BB2C41: add     rax, rsi
 * 0000000140BB2C44: mov     [rsi+920h], rax
 * 0000000140BB2C4B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB2C55: add     rax, r13
 * 0000000140BB2C58: mov     [rsi+928h], rax
 * 0000000140BB2C5F: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB2C63: mov     [rsi+930h], rax
 * 0000000140BB2C6A: mov     [rsi+938h], rcx
 * 0000000140BB2C71: mov     [rsi+918h], edi
 * 0000000140BB2C77: mov     ecx, [rsi+9D8h]
 * 0000000140BB2C7D: bt      ecx, 1Dh
 * 0000000140BB2C81: jb      loc_140BB2D64
 * 0000000140BB2C87: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB2C91: jz      loc_140BB2D64
 * 0000000140BB2C97: test    dil, cl
 * 0000000140BB2C9A: jz      loc_140BB2D64
 * 0000000140BB2CA0: mov     ecx, [rsi+0A74h]
 * 0000000140BB2CA6: mov     eax, [rsi+804h]
 * 0000000140BB2CAC: mov     r10, [rsi+838h]
 * 0000000140BB2CB3: sub     eax, ecx
 * 0000000140BB2CB5: mov     r8, [rsi+0A78h]
 * 0000000140BB2CBC: lea     rdx, [rcx+rsi]
 * 0000000140BB2CC0: mov     ecx, eax
 * 0000000140BB2CC2: shr     rcx, 3
 * 0000000140BB2CC6: lea     r9, [rdx+rcx*8]
 * 0000000140BB2CCA: jmp     short loc_140BB2CED
 * 0000000140BB2CCC: xor     [rdx], r8
 * 0000000140BB2CCF: mov     rax, [rdx]
 * 0000000140BB2CD2: movzx   ecx, r8b
 * 0000000140BB2CD6: xor     rax, r10
 * 0000000140BB2CD9: and     ecx, 3Fh
 * 0000000140BB2CDC: ror     r8, cl
 * 0000000140BB2CDF: add     r8, rax
 * 0000000140BB2CE2: xor     r8, 0EFAh
 * 0000000140BB2CE9: add     rdx, 8
 * 0000000140BB2CED: cmp     rdx, r9
 * 0000000140BB2CF0: jnz     short loc_140BB2CCC
 * 0000000140BB2CF2: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB2CFA: cmp     r8, [rsi+0A80h]
 * 0000000140BB2D01: jz      short loc_140BB2D64
 * 0000000140BB2D03: mov     ecx, [rsi+804h]
 * 0000000140BB2D09: mov     rax, [rsi+588h]
 * 0000000140BB2D10: mov     [rax], rsi
 * 0000000140BB2D13: mov     [rax+10h], ecx
 * 0000000140BB2D16: mov     rcx, [rsi+0A80h]
 * 0000000140BB2D1D: cmp     [rsi+918h], r15d
 * 0000000140BB2D24: jnz     short loc_140BB2D34
 * 0000000140BB2D26: mov     rax, [rsi+588h]
 * 0000000140BB2D2D: xor     rcx, r8
 * 0000000140BB2D30: mov     [rax+18h], rcx
 * 0000000140BB2D34: xor     edx, edx
 * 0000000140BB2D36: mov     r9d, 100h
 * 0000000140BB2D3C: mov     rcx, rsi
 * 0000000140BB2D3F: call    sub_140BC7384
 * 0000000140BB2D44: jmp     short loc_140BB2D64
 * 0000000140BB2D46: test    dword ptr [rsi+9DCh], 200h
 * 0000000140BB2D50: jz      short loc_140BB2D64
 * 0000000140BB2D52: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 0000000140BB2D56: jnz     short loc_140BB2D64
 * 0000000140BB2D58: mov     rax, rdx
 * 0000000140BB2D5B: mov     ecx, r9d
 * 0000000140BB2D5E: shr     rdx, 20h
 * 0000000140BB2D62: wrmsr
 * 0000000140BB2D64: inc     ebx
 * 0000000140BB2D66: cmp     ebx, [r13+18h]
 * 0000000140BB2D6A: jb      loc_140BB2BA6
 * 0000000140BB2D70: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB2D77: mov     rax, [rsi+1A8h]
 * 0000000140BB2D7E: lea     rcx, [rbp+8D0h+var_308]
 * 0000000140BB2D85: call    KeGuardDispatchICall
 * 0000000140BB2D8A: mov     eax, [r13+18h]
 * 0000000140BB2D8E: shl     eax, 0Fh
 * 0000000140BB2D91: add     [rsi+848h], eax
 * 0000000140BB2D97: mov     ebx, 1
 * 0000000140BB2D9C: jmp     loc_140BBD398
 * 0000000140BB2DA1: mov     ecx, [rsi+850h]
 * 0000000140BB2DA7: test    bl, cl
 * 0000000140BB2DA9: jz      loc_140BB1FAF
 * 0000000140BB2DAF: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BB2DB7: jb      short loc_140BB2DCF
 * 0000000140BB2DB9: mov     r14d, r15d
 * 0000000140BB2DBC: and     ecx, 3
 * 0000000140BB2DBF: cmp     cl, 3
 * 0000000140BB2DC2: setz    r14b
 * 0000000140BB2DC6: mov     dword ptr [rbp+8D0h+arg_8], r14d
 * 0000000140BB2DCD: jmp     short loc_140BB2E1F
 * 0000000140BB2DCF: rdtsc
 * 0000000140BB2DD1: shl     rdx, 20h
 * 0000000140BB2DD5: or      rax, rdx
 * 0000000140BB2DD8: mov     rcx, rax
 * 0000000140BB2DDB: ror     rax, 3
 * 0000000140BB2DDF: xor     rcx, rax
 * 0000000140BB2DE2: mov     rax, 7010008004002001h
 * 0000000140BB2DEC: mul     rcx
 * 0000000140BB2DEF: mov     rcx, rdx
 * 0000000140BB2DF2: mov     [rbp+8D0h+var_250], rdx
 * 0000000140BB2DF9: xor     rcx, rax
 * 0000000140BB2DFC: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BB2E06: mul     rcx
 * 0000000140BB2E09: shr     rdx, 1
 * 0000000140BB2E0C: lea     rax, [rdx+rdx*2]
 * 0000000140BB2E10: cmp     rcx, rax
 * 0000000140BB2E13: mov     eax, r15d
 * 0000000140BB2E16: setz    al
 * 0000000140BB2E19: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BB2E1F: mov     rax, [rsi+188h]
 * 0000000140BB2E26: mov     rbx, [rsi+540h]
 * 0000000140BB2E2D: mov     dword ptr [rsp+9D0h+var_960], r15d
 * 0000000140BB2E32: call    KeGuardDispatchICall
 * 0000000140BB2E37: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BB2E3F: jb      short loc_140BB2E5A
 * 0000000140BB2E41: mov     ecx, [rsi+978h]
 * 0000000140BB2E47: cmp     ecx, 7
 * 0000000140BB2E4A: jnb     short loc_140BB2E5A
 * 0000000140BB2E4C: mov     r12d, 1
 * 0000000140BB2E52: mov     r14d, r12d
 * 0000000140BB2E55: shl     r14b, cl
 * 0000000140BB2E58: jmp     short loc_140BB2E78
 * 0000000140BB2E5A: mov     rax, [rsi+138h]
 * 0000000140BB2E61: xor     edx, edx
 * 0000000140BB2E63: mov     rcx, [rsi+0A48h]
 * 0000000140BB2E6A: call    KeGuardDispatchICall
 * 0000000140BB2E6F: mov     r14b, 80h
 * 0000000140BB2E72: mov     r12d, 1
 * 0000000140BB2E78: mov     rax, [rsi+148h]
 * 0000000140BB2E7F: xor     edx, edx
 * 0000000140BB2E81: mov     rcx, rbx
 * 0000000140BB2E84: call    KeGuardDispatchICall
 * 0000000140BB2E89: mov     r8, [rsi+518h]
 * 0000000140BB2E90: mov     rdx, [r8]
 * 0000000140BB2E93: cmp     rdx, r8
 * 0000000140BB2E96: jz      short loc_140BB2EBE
 * 0000000140BB2E98: mov     rax, [rsi+6C8h]
 * 0000000140BB2E9F: mov     rcx, rdx
 * 0000000140BB2EA2: sub     rcx, [rsi+6E0h]
 * 0000000140BB2EA9: lock or [rcx+rax], r14b
 * 0000000140BB2EAE: mov     rdx, [rdx]
 * 0000000140BB2EB1: add     r15d, r12d
 * 0000000140BB2EB4: cmp     rdx, r8
 * 0000000140BB2EB7: jnz     short loc_140BB2E98
 * 0000000140BB2EB9: mov     dword ptr [rsp+9D0h+var_960], r15d
 * 0000000140BB2EBE: mov     rax, [rsi+548h]
 * 0000000140BB2EC5: mov     r15d, 4
 * 0000000140BB2ECB: mov     edi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB2ED1: mov     r13, [rax]
 * 0000000140BB2ED4: mov     rax, [rsi+740h]
 * 0000000140BB2EDB: mov     ebx, [rax+r13]
 * 0000000140BB2EDF: mov     [rsp+9D0h+var_978], rbx
 * 0000000140BB2EE4: mov     rax, [rsi+110h]
 * 0000000140BB2EEB: mov     rdx, r15
 * 0000000140BB2EEE: mov     rcx, r13
 * 0000000140BB2EF1: call    KeGuardDispatchICall
 * 0000000140BB2EF6: mov     r12, rax
 * 0000000140BB2EF9: test    rax, rax
 * 0000000140BB2EFC: jz      loc_140BB32E7
 * 0000000140BB2F02: mov     rax, [rsi+118h]
 * 0000000140BB2F09: mov     rcx, r12
 * 0000000140BB2F0C: call    KeGuardDispatchICall
 * 0000000140BB2F11: mov     rbx, rax
 * 0000000140BB2F14: mov     al, [rax]
 * 0000000140BB2F16: and     al, 7Fh
 * 0000000140BB2F18: cmp     al, 3
 * 0000000140BB2F1A: jnz     loc_140BB3080
 * 0000000140BB2F20: mov     rax, [rsi+6C8h]
 * 0000000140BB2F27: test    [rbx+rax], r14b
 * 0000000140BB2F2B: jnz     loc_140BB306B
 * 0000000140BB2F31: mov     rax, [rsi+6D0h]
 * 0000000140BB2F38: mov     ecx, [rbx+rax]
 * 0000000140BB2F3B: test    [rsi+6E8h], ecx
 * 0000000140BB2F41: jz      loc_140BB306B
 * 0000000140BB2F47: xor     r11d, r11d
 * 0000000140BB2F4A: cmp     [rsi+918h], r11d
 * 0000000140BB2F51: jnz     loc_140BB306B
 * 0000000140BB2F57: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BB2F5C: lea     edx, [r11+1]
 * 0000000140BB2F60: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB2F6A: add     rax, rsi
 * 0000000140BB2F6D: mov     [rsi+920h], rax
 * 0000000140BB2F74: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB2F7E: add     rax, rcx
 * 0000000140BB2F81: mov     [rsi+928h], rax
 * 0000000140BB2F88: movsxd  rax, dword ptr [rcx]
 * 0000000140BB2F8B: mov     [rsi+930h], rax
 * 0000000140BB2F92: mov     [rsi+938h], rbx
 * 0000000140BB2F99: mov     [rsi+918h], edx
 * 0000000140BB2F9F: mov     ecx, [rsi+9D8h]
 * 0000000140BB2FA5: bt      ecx, 1Dh
 * 0000000140BB2FA9: jb      loc_140BB306B
 * 0000000140BB2FAF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB2FB9: jz      loc_140BB306B
 * 0000000140BB2FBF: test    dl, cl
 * 0000000140BB2FC1: jz      loc_140BB306B
 * 0000000140BB2FC7: mov     ecx, [rsi+0A74h]
 * 0000000140BB2FCD: mov     eax, [rsi+804h]
 * 0000000140BB2FD3: mov     r10, [rsi+838h]
 * 0000000140BB2FDA: sub     eax, ecx
 * 0000000140BB2FDC: mov     r8, [rsi+0A78h]
 * 0000000140BB2FE3: lea     rdx, [rcx+rsi]
 * 0000000140BB2FE7: mov     ecx, eax
 * 0000000140BB2FE9: shr     rcx, 3
 * 0000000140BB2FED: lea     r9, [rdx+rcx*8]
 * 0000000140BB2FF1: jmp     short loc_140BB3014
 * 0000000140BB2FF3: xor     [rdx], r8
 * 0000000140BB2FF6: mov     rax, [rdx]
 * 0000000140BB2FF9: movzx   ecx, r8b
 * 0000000140BB2FFD: xor     rax, r10
 * 0000000140BB3000: and     ecx, 3Fh
 * 0000000140BB3003: ror     r8, cl
 * 0000000140BB3006: add     r8, rax
 * 0000000140BB3009: xor     r8, 0EFAh
 * 0000000140BB3010: add     rdx, 8
 * 0000000140BB3014: cmp     rdx, r9
 * 0000000140BB3017: jnz     short loc_140BB2FF3
 * 0000000140BB3019: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB3021: cmp     r8, [rsi+0A80h]
 * 0000000140BB3028: jz      short loc_140BB306B
 * 0000000140BB302A: mov     ecx, [rsi+804h]
 * 0000000140BB3030: mov     rax, [rsi+588h]
 * 0000000140BB3037: mov     [rax], rsi
 * 0000000140BB303A: mov     [rax+10h], ecx
 * 0000000140BB303D: mov     rcx, [rsi+0A80h]
 * 0000000140BB3044: cmp     [rsi+918h], r11d
 * 0000000140BB304B: jnz     short loc_140BB305B
 * 0000000140BB304D: mov     rax, [rsi+588h]
 * 0000000140BB3054: xor     rcx, r8
 * 0000000140BB3057: mov     [rax+18h], rcx
 * 0000000140BB305B: xor     edx, edx
 * 0000000140BB305D: mov     r9d, 100h
 * 0000000140BB3063: mov     rcx, rsi
 * 0000000140BB3066: call    sub_140BC7384
 * 0000000140BB306B: mov     rax, [rsi+6C8h]
 * 0000000140BB3072: mov     cl, r14b
 * 0000000140BB3075: not     cl
 * 0000000140BB3077: lock and [rbx+rax], cl
 * 0000000140BB307B: jmp     loc_140BB32D0
 * 0000000140BB3080: xor     r11d, r11d
 * 0000000140BB3083: cmp     al, 6
 * 0000000140BB3085: jnz     loc_140BB31A6
 * 0000000140BB308B: test    edi, edi
 * 0000000140BB308D: jz      loc_140BB32D0
 * 0000000140BB3093: mov     rcx, [rsi+690h]
 * 0000000140BB309A: mov     rax, [rbx+rcx+20h]
 * 0000000140BB309F: cmp     rax, [rsi+320h]
 * 0000000140BB30A6: jz      short loc_140BB30B1
 * 0000000140BB30A8: cmp     rax, [rsi+328h]
 * 0000000140BB30AF: jnz     short loc_140BB30D1
 * 0000000140BB30B1: mov     rax, [rsi+330h]
 * 0000000140BB30B8: cmp     [rbx+rcx+30h], rax
 * 0000000140BB30BD: jnz     short loc_140BB30D1
 * 0000000140BB30BF: mov     rax, [rsi+338h]
 * 0000000140BB30C6: cmp     [rbx+rcx+28h], rax
 * 0000000140BB30CB: jz      loc_140BB32D0
 * 0000000140BB30D1: cmp     [rsi+918h], r11d
 * 0000000140BB30D8: jnz     loc_140BB32D0
 * 0000000140BB30DE: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BB30E3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB30ED: add     rax, rsi
 * 0000000140BB30F0: mov     [rsi+920h], rax
 * 0000000140BB30F7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB3101: add     rax, rcx
 * 0000000140BB3104: mov     [rsi+928h], rax
 * 0000000140BB310B: movsxd  rax, dword ptr [rcx]
 * 0000000140BB310E: mov     [rsi+930h], rax
 * 0000000140BB3115: mov     [rsi+938h], rbx
 * 0000000140BB311C: mov     ebx, 1
 * 0000000140BB3121: mov     [rsi+918h], ebx
 * 0000000140BB3127: mov     ecx, [rsi+9D8h]
 * 0000000140BB312D: bt      ecx, 1Dh
 * 0000000140BB3131: jb      loc_140BB32D0
 * 0000000140BB3137: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB3141: jz      loc_140BB32D0
 * 0000000140BB3147: test    bl, cl
 * 0000000140BB3149: jz      loc_140BB32D0
 * 0000000140BB314F: mov     ecx, [rsi+0A74h]
 * 0000000140BB3155: mov     eax, [rsi+804h]
 * 0000000140BB315B: mov     r10, [rsi+838h]
 * 0000000140BB3162: sub     eax, ecx
 * 0000000140BB3164: mov     r8, [rsi+0A78h]
 * 0000000140BB316B: lea     rdx, [rcx+rsi]
 * 0000000140BB316F: mov     ecx, eax
 * 0000000140BB3171: shr     rcx, 3
 * 0000000140BB3175: lea     r9, [rdx+rcx*8]
 * 0000000140BB3179: jmp     short loc_140BB319C
 * 0000000140BB317B: xor     [rdx], r8
 * 0000000140BB317E: mov     rax, [rdx]
 * 0000000140BB3181: movzx   ecx, r8b
 * 0000000140BB3185: xor     rax, r10
 * 0000000140BB3188: and     ecx, 3Fh
 * 0000000140BB318B: ror     r8, cl
 * 0000000140BB318E: add     r8, rax
 * 0000000140BB3191: xor     r8, 0EFAh
 * 0000000140BB3198: add     rdx, 8
 * 0000000140BB319C: cmp     rdx, r9
 * 0000000140BB319F: jnz     short loc_140BB317B
 * 0000000140BB31A1: jmp     loc_140BB327E
 * 0000000140BB31A6: test    al, al
 * 0000000140BB31A8: jz      loc_140BB32D0
 * 0000000140BB31AE: cmp     [rsi+918h], r11d
 * 0000000140BB31B5: jnz     loc_140BB32D0
 * 0000000140BB31BB: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BB31C0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB31CA: add     rax, rsi
 * 0000000140BB31CD: mov     [rsi+920h], rax
 * 0000000140BB31D4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB31DE: add     rax, rcx
 * 0000000140BB31E1: mov     [rsi+928h], rax
 * 0000000140BB31E8: movsxd  rax, dword ptr [rcx]
 * 0000000140BB31EB: mov     [rsi+930h], rax
 * 0000000140BB31F2: mov     [rsi+938h], rbx
 * 0000000140BB31F9: mov     ebx, 1
 * 0000000140BB31FE: mov     [rsi+918h], ebx
 * 0000000140BB3204: mov     ecx, [rsi+9D8h]
 * 0000000140BB320A: bt      ecx, 1Dh
 * 0000000140BB320E: jb      loc_140BB32D0
 * 0000000140BB3214: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB321E: jz      loc_140BB32D0
 * 0000000140BB3224: test    bl, cl
 * 0000000140BB3226: jz      loc_140BB32D0
 * 0000000140BB322C: mov     ecx, [rsi+0A74h]
 * 0000000140BB3232: mov     eax, [rsi+804h]
 * 0000000140BB3238: mov     r10, [rsi+838h]
 * 0000000140BB323F: sub     eax, ecx
 * 0000000140BB3241: mov     r8, [rsi+0A78h]
 * 0000000140BB3248: lea     rdx, [rcx+rsi]
 * 0000000140BB324C: mov     ecx, eax
 * 0000000140BB324E: shr     rcx, 3
 * 0000000140BB3252: lea     r9, [rdx+rcx*8]
 * 0000000140BB3256: jmp     short loc_140BB3279
 * 0000000140BB3258: xor     [rdx], r8
 * 0000000140BB325B: mov     rax, [rdx]
 * 0000000140BB325E: movzx   ecx, r8b
 * 0000000140BB3262: xor     rax, r10
 * 0000000140BB3265: and     ecx, 3Fh
 * 0000000140BB3268: ror     r8, cl
 * 0000000140BB326B: add     r8, rax
 * 0000000140BB326E: xor     r8, 0EFAh
 * 0000000140BB3275: add     rdx, 8
 * 0000000140BB3279: cmp     rdx, r9
 * 0000000140BB327C: jnz     short loc_140BB3258
 * 0000000140BB327E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB3286: cmp     r8, [rsi+0A80h]
 * 0000000140BB328D: jz      short loc_140BB32D0
 * 0000000140BB328F: mov     ecx, [rsi+804h]
 * 0000000140BB3295: mov     rax, [rsi+588h]
 * 0000000140BB329C: mov     [rax], rsi
 * 0000000140BB329F: mov     [rax+10h], ecx
 * 0000000140BB32A2: mov     rcx, [rsi+0A80h]
 * 0000000140BB32A9: cmp     [rsi+918h], r11d
 * 0000000140BB32B0: jnz     short loc_140BB32C0
 * 0000000140BB32B2: mov     rax, [rsi+588h]
 * 0000000140BB32B9: xor     rcx, r8
 * 0000000140BB32BC: mov     [rax+18h], rcx
 * 0000000140BB32C0: mov     r9d, 100h
 * 0000000140BB32C6: xor     edx, edx
 * 0000000140BB32C8: mov     rcx, rsi
 * 0000000140BB32CB: call    sub_140BC7384
 * 0000000140BB32D0: mov     rax, [rsi+130h]
 * 0000000140BB32D7: mov     rdx, r12
 * 0000000140BB32DA: mov     rcx, r13
 * 0000000140BB32DD: call    KeGuardDispatchICall
 * 0000000140BB32E2: mov     rbx, [rsp+9D0h+var_978]
 * 0000000140BB32E7: add     r15, 4
 * 0000000140BB32EB: cmp     r15, rbx
 * 0000000140BB32EE: jb      loc_140BB2EE4
 * 0000000140BB32F4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB32FB: cmp     r14b, 80h
 * 0000000140BB32FF: jnz     short loc_140BB3316
 * 0000000140BB3301: mov     rax, [rsi+140h]
 * 0000000140BB3308: xor     edx, edx
 * 0000000140BB330A: mov     rcx, [rsi+0A48h]
 * 0000000140BB3311: call    KeGuardDispatchICall
 * 0000000140BB3316: mov     rcx, [rsi+540h]
 * 0000000140BB331D: xor     edx, edx
 * 0000000140BB331F: mov     rax, [rsi+150h]
 * 0000000140BB3326: call    KeGuardDispatchICall
 * 0000000140BB332B: mov     rax, [rsi+190h]
 * 0000000140BB3332: call    KeGuardDispatchICall
 * 0000000140BB3337: mov     eax, dword ptr [rsp+9D0h+var_960]
 * 0000000140BB333B: shr     rbx, 2
 * 0000000140BB333F: add     eax, ebx
 * 0000000140BB3341: shl     eax, 8
 * 0000000140BB3344: jmp     loc_140BB1F95
 * 0000000140BB3349: mov     eax, [rsi+850h]
 * 0000000140BB334F: test    bl, al
 * 0000000140BB3351: jnz     loc_140BB1FAF
 * 0000000140BB3357: mov     rax, [rsi+188h]
 * 0000000140BB335E: mov     r13d, r15d
 * 0000000140BB3361: mov     rbx, [rsi+540h]
 * 0000000140BB3368: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BB336D: call    KeGuardDispatchICall
 * 0000000140BB3372: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB337C: jnz     short loc_140BB3394
 * 0000000140BB337E: mov     ecx, [rsi+978h]
 * 0000000140BB3384: cmp     ecx, 7
 * 0000000140BB3387: jnb     short loc_140BB3394
 * 0000000140BB3389: mov     r12d, 1
 * 0000000140BB338F: shl     r12b, cl
 * 0000000140BB3392: jmp     short loc_140BB33AC
 * 0000000140BB3394: mov     rax, [rsi+138h]
 * 0000000140BB339B: xor     edx, edx
 * 0000000140BB339D: mov     rcx, [rsi+0A48h]
 * 0000000140BB33A4: call    KeGuardDispatchICall
 * 0000000140BB33A9: mov     r12b, 80h
 * 0000000140BB33AC: mov     rax, [rsi+148h]
 * 0000000140BB33B3: xor     edx, edx
 * 0000000140BB33B5: mov     rcx, rbx
 * 0000000140BB33B8: mov     dword ptr [rsp+9D0h+var_960], r12d
 * 0000000140BB33BD: call    KeGuardDispatchICall
 * 0000000140BB33C2: mov     r15, [rsi+518h]
 * 0000000140BB33C9: mov     r14, [r15]
 * 0000000140BB33CC: cmp     r14, r15
 * 0000000140BB33CF: jz      loc_140BB3565
 * 0000000140BB33D5: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BB33DA: mov     rbx, r14
 * 0000000140BB33DD: sub     rbx, [rsi+6E0h]
 * 0000000140BB33E4: cmp     r12b, 80h
 * 0000000140BB33E8: jz      loc_140BB353E
 * 0000000140BB33EE: mov     rax, [rsi+6C8h]
 * 0000000140BB33F5: test    [rbx+rax], r12b
 * 0000000140BB33F9: jz      loc_140BB353E
 * 0000000140BB33FF: mov     rax, [rsi+6D0h]
 * 0000000140BB3406: mov     ecx, [rbx+rax]
 * 0000000140BB3409: test    [rsi+6E8h], ecx
 * 0000000140BB340F: jz      loc_140BB353E
 * 0000000140BB3415: xor     r11d, r11d
 * 0000000140BB3418: cmp     [rsi+918h], r11d
 * 0000000140BB341F: jnz     loc_140BB353E
 * 0000000140BB3425: lea     ecx, [r11+1]
 * 0000000140BB3429: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB3433: add     rax, rsi
 * 0000000140BB3436: mov     [rsi+920h], rax
 * 0000000140BB343D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB3447: add     rax, rdi
 * 0000000140BB344A: mov     [rsi+928h], rax
 * 0000000140BB3451: movsxd  rax, dword ptr [rdi]
 * 0000000140BB3454: mov     [rsi+930h], rax
 * 0000000140BB345B: mov     rax, rbx
 * 0000000140BB345E: or      rax, rcx
 * 0000000140BB3461: mov     [rsi+938h], rax
 * 0000000140BB3468: mov     [rsi+918h], ecx
 * 0000000140BB346E: mov     ecx, [rsi+9D8h]
 * 0000000140BB3474: bt      ecx, 1Dh
 * 0000000140BB3478: jb      loc_140BB353E
 * 0000000140BB347E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB3488: jz      loc_140BB353E
 * 0000000140BB348E: lea     eax, [r11+1]
 * 0000000140BB3492: test    al, cl
 * 0000000140BB3494: jz      loc_140BB353E
 * 0000000140BB349A: mov     ecx, [rsi+0A74h]
 * 0000000140BB34A0: mov     eax, [rsi+804h]
 * 0000000140BB34A6: mov     r10, [rsi+838h]
 * 0000000140BB34AD: sub     eax, ecx
 * 0000000140BB34AF: mov     r8, [rsi+0A78h]
 * 0000000140BB34B6: lea     rdx, [rcx+rsi]
 * 0000000140BB34BA: mov     ecx, eax
 * 0000000140BB34BC: shr     rcx, 3
 * 0000000140BB34C0: lea     r9, [rdx+rcx*8]
 * 0000000140BB34C4: jmp     short loc_140BB34E7
 * 0000000140BB34C6: xor     [rdx], r8
 * 0000000140BB34C9: mov     rax, [rdx]
 * 0000000140BB34CC: movzx   ecx, r8b
 * 0000000140BB34D0: xor     rax, r10
 * 0000000140BB34D3: and     ecx, 3Fh
 * 0000000140BB34D6: ror     r8, cl
 * 0000000140BB34D9: add     r8, rax
 * 0000000140BB34DC: xor     r8, 0EFAh
 * 0000000140BB34E3: add     rdx, 8
 * 0000000140BB34E7: cmp     rdx, r9
 * 0000000140BB34EA: jnz     short loc_140BB34C6
 * 0000000140BB34EC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB34F4: cmp     r8, [rsi+0A80h]
 * 0000000140BB34FB: jz      short loc_140BB353E
 * 0000000140BB34FD: mov     ecx, [rsi+804h]
 * 0000000140BB3503: mov     rax, [rsi+588h]
 * 0000000140BB350A: mov     [rax], rsi
 * 0000000140BB350D: mov     [rax+10h], ecx
 * 0000000140BB3510: mov     rcx, [rsi+0A80h]
 * 0000000140BB3517: cmp     [rsi+918h], r11d
 * 0000000140BB351E: jnz     short loc_140BB352E
 * 0000000140BB3520: mov     rax, [rsi+588h]
 * 0000000140BB3527: xor     rcx, r8
 * 0000000140BB352A: mov     [rax+18h], rcx
 * 0000000140BB352E: xor     edx, edx
 * 0000000140BB3530: mov     r9d, 100h
 * 0000000140BB3536: mov     rcx, rsi
 * 0000000140BB3539: call    sub_140BC7384
 * 0000000140BB353E: mov     rax, [rsi+6C8h]
 * 0000000140BB3545: lock or [rbx+rax], r12b
 * 0000000140BB354A: mov     r14, [r14]
 * 0000000140BB354D: inc     r13d
 * 0000000140BB3550: cmp     r14, r15
 * 0000000140BB3553: jnz     loc_140BB33DA
 * 0000000140BB3559: mov     [rsp+9D0h+var_958], r13d
 * 0000000140BB355E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB3565: mov     rcx, [rsi+4F8h]
 * 0000000140BB356C: mov     rax, cr8
 * 0000000140BB3570: mov     [rsp+9D0h+var_978], rax
 * 0000000140BB3575: mov     eax, 0Ch
 * 0000000140BB357A: mov     cr8, rax
 * 0000000140BB357E: mov     rax, [rsi+158h]
 * 0000000140BB3585: lea     rdx, [rbp+8D0h+var_178]
 * 0000000140BB358C: call    KeGuardDispatchICall
 * 0000000140BB3591: mov     r13, [rsi+4F0h]
 * 0000000140BB3598: mov     r14, [r13+0]
 * 0000000140BB359C: cmp     r14, r13
 * 0000000140BB359F: jz      loc_140BB3724
 * 0000000140BB35A5: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BB35AA: mov     r15b, r12b
 * 0000000140BB35AD: movzx   edx, r12b
 * 0000000140BB35B1: not     r15b
 * 0000000140BB35B4: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BB35BA: xor     r12d, r12d
 * 0000000140BB35BD: mov     rax, [rsi+6C8h]
 * 0000000140BB35C4: mov     rbx, r14
 * 0000000140BB35C7: sub     rbx, [rsi+6C0h]
 * 0000000140BB35CE: movsx   ecx, byte ptr [rax+rbx]
 * 0000000140BB35D2: test    edx, ecx
 * 0000000140BB35D4: jnz     loc_140BB3700
 * 0000000140BB35DA: cmp     [rsi+918h], r12d
 * 0000000140BB35E1: jnz     loc_140BB3700
 * 0000000140BB35E7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB35F1: mov     r8d, 1
 * 0000000140BB35F7: add     rax, rsi
 * 0000000140BB35FA: mov     [rsi+920h], rax
 * 0000000140BB3601: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB360B: add     rax, rdi
 * 0000000140BB360E: mov     [rsi+928h], rax
 * 0000000140BB3615: movsxd  rax, dword ptr [rdi]
 * 0000000140BB3618: mov     [rsi+930h], rax
 * 0000000140BB361F: mov     [rsi+938h], rbx
 * 0000000140BB3626: mov     [rsi+918h], r8d
 * 0000000140BB362D: mov     ecx, [rsi+9D8h]
 * 0000000140BB3633: bt      ecx, 1Dh
 * 0000000140BB3637: jb      loc_140BB3700
 * 0000000140BB363D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB3647: jz      loc_140BB3700
 * 0000000140BB364D: test    r8b, cl
 * 0000000140BB3650: jz      loc_140BB3700
 * 0000000140BB3656: mov     ecx, [rsi+0A74h]
 * 0000000140BB365C: mov     eax, [rsi+804h]
 * 0000000140BB3662: mov     r10, [rsi+838h]
 * 0000000140BB3669: sub     eax, ecx
 * 0000000140BB366B: mov     r8, [rsi+0A78h]
 * 0000000140BB3672: lea     rdx, [rcx+rsi]
 * 0000000140BB3676: mov     ecx, eax
 * 0000000140BB3678: shr     rcx, 3
 * 0000000140BB367C: lea     r9, [rdx+rcx*8]
 * 0000000140BB3680: jmp     short loc_140BB36A3
 * 0000000140BB3682: xor     [rdx], r8
 * 0000000140BB3685: mov     rax, [rdx]
 * 0000000140BB3688: movzx   ecx, r8b
 * 0000000140BB368C: xor     rax, r10
 * 0000000140BB368F: and     ecx, 3Fh
 * 0000000140BB3692: ror     r8, cl
 * 0000000140BB3695: add     r8, rax
 * 0000000140BB3698: xor     r8, 0EFAh
 * 0000000140BB369F: add     rdx, 8
 * 0000000140BB36A3: cmp     rdx, r9
 * 0000000140BB36A6: jnz     short loc_140BB3682
 * 0000000140BB36A8: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB36B0: cmp     r8, [rsi+0A80h]
 * 0000000140BB36B7: jz      short loc_140BB36FA
 * 0000000140BB36B9: mov     ecx, [rsi+804h]
 * 0000000140BB36BF: mov     rax, [rsi+588h]
 * 0000000140BB36C6: mov     [rax], rsi
 * 0000000140BB36C9: mov     [rax+10h], ecx
 * 0000000140BB36CC: mov     rcx, [rsi+0A80h]
 * 0000000140BB36D3: cmp     [rsi+918h], r12d
 * 0000000140BB36DA: jnz     short loc_140BB36EA
 * 0000000140BB36DC: mov     rax, [rsi+588h]
 * 0000000140BB36E3: xor     rcx, r8
 * 0000000140BB36E6: mov     [rax+18h], rcx
 * 0000000140BB36EA: xor     edx, edx
 * 0000000140BB36EC: mov     r9d, 100h
 * 0000000140BB36F2: mov     rcx, rsi
 * 0000000140BB36F5: call    sub_140BC7384
 * 0000000140BB36FA: mov     edx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB3700: mov     rax, [rsi+6C8h]
 * 0000000140BB3707: lock and [rbx+rax], r15b
 * 0000000140BB370C: mov     r14, [r14]
 * 0000000140BB370F: cmp     r14, r13
 * 0000000140BB3712: jnz     loc_140BB35BD
 * 0000000140BB3718: mov     r12d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BB371D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB3724: mov     rax, [rsi+198h]
 * 0000000140BB372B: lea     rcx, [rbp+8D0h+var_178]
 * 0000000140BB3732: call    KeGuardDispatchICall
 * 0000000140BB3737: movzx   eax, byte ptr [rsp+9D0h+var_978]
 * 0000000140BB373C: mov     cr8, rax
 * 0000000140BB3740: cmp     r12b, 80h
 * 0000000140BB3744: jnz     short loc_140BB375B
 * 0000000140BB3746: mov     rax, [rsi+140h]
 * 0000000140BB374D: xor     edx, edx
 * 0000000140BB374F: mov     rcx, [rsi+0A48h]
 * 0000000140BB3756: call    KeGuardDispatchICall
 * 0000000140BB375B: mov     rcx, [rsi+540h]
 * 0000000140BB3762: xor     edx, edx
 * 0000000140BB3764: mov     rax, [rsi+150h]
 * 0000000140BB376B: call    KeGuardDispatchICall
 * 0000000140BB3770: mov     rax, [rsi+190h]
 * 0000000140BB3777: call    KeGuardDispatchICall
 * 0000000140BB377C: mov     eax, [rsp+9D0h+var_958]
 * 0000000140BB3780: jmp     loc_140BB3341
 * 0000000140BB3785: mov     r14, [r13+8]
 * 0000000140BB3789: mov     r8d, [r13+10h]
 * 0000000140BB378D: mov     r9, r14
 * 0000000140BB3790: add     [rsi+848h], r8d
 * 0000000140BB3797: mov     rax, r14
 * 0000000140BB379A: mov     r10d, [rsi+834h]
 * 0000000140BB37A1: mov     r15, [rsi+838h]
 * 0000000140BB37A8: lea     rcx, [r14+r8]
 * 0000000140BB37AC: cmp     r14, rcx
 * 0000000140BB37AF: jnb     short loc_140BB37C1
 * 0000000140BB37B1: mov     edx, 40h ; '@'
 * 0000000140BB37B6: prefetchnta byte ptr [rax]
 * 0000000140BB37B9: add     rax, rdx
 * 0000000140BB37BC: cmp     rax, rcx
 * 0000000140BB37BF: jb      short loc_140BB37B6
 * 0000000140BB37C1: mov     r11d, r8d
 * 0000000140BB37C4: mov     rbx, r15
 * 0000000140BB37C7: shr     r11d, 7
 * 0000000140BB37CB: mov     edx, 1
 * 0000000140BB37D0: mov     r12d, 0FFFFFFFFh
 * 0000000140BB37D6: test    r11d, r11d
 * 0000000140BB37D9: jz      short loc_140BB3840
 * 0000000140BB37DB: mov     rsi, 7010008004002001h
 * 0000000140BB37E5: mov     eax, 8
 * 0000000140BB37EA: xor     rbx, [r9]
 * 0000000140BB37ED: mov     ecx, r10d
 * 0000000140BB37F0: rol     rbx, cl
 * 0000000140BB37F3: xor     rbx, [r9+8]
 * 0000000140BB37F7: add     r9, 10h
 * 0000000140BB37FB: rol     rbx, cl
 * 0000000140BB37FE: sub     rax, rdx
 * 0000000140BB3801: jnz     short loc_140BB37EA
 * 0000000140BB3803: mov     rcx, r9
 * 0000000140BB3806: sub     rcx, r14
 * 0000000140BB3809: xor     rcx, r15
 * 0000000140BB380C: mov     rax, rcx
 * 0000000140BB380F: rol     rax, 11h
 * 0000000140BB3813: xor     rcx, rax
 * 0000000140BB3816: mov     rax, rsi
 * 0000000140BB3819: mul     rcx
 * 0000000140BB381C: xor     r10d, edx
 * 0000000140BB381F: mov     [rbp+8D0h+var_218], rdx
 * 0000000140BB3826: xor     r10d, eax
 * 0000000140BB3829: mov     edx, 1
 * 0000000140BB382E: and     r10d, 3Fh
 * 0000000140BB3832: cmovz   r10d, edx
 * 0000000140BB3836: add     r11d, r12d
 * 0000000140BB3839: jnz     short loc_140BB37E5
 * 0000000140BB383B: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB3840: and     r8d, 7Fh
 * 0000000140BB3844: cmp     r8d, 8
 * 0000000140BB3848: jb      short loc_140BB3867
 * 0000000140BB384A: mov     eax, r8d
 * 0000000140BB384D: shr     rax, 3
 * 0000000140BB3851: xor     rbx, [r9]
 * 0000000140BB3854: mov     ecx, r10d
 * 0000000140BB3857: rol     rbx, cl
 * 0000000140BB385A: add     r9, 8
 * 0000000140BB385E: add     r8d, 0FFFFFFF8h
 * 0000000140BB3862: sub     rax, rdx
 * 0000000140BB3865: jnz     short loc_140BB3851
 * 0000000140BB3867: xor     r15d, r15d
 * 0000000140BB386A: test    r8d, r8d
 * 0000000140BB386D: jz      short loc_140BB3884
 * 0000000140BB386F: movzx   eax, byte ptr [r9]
 * 0000000140BB3873: mov     ecx, r10d
 * 0000000140BB3876: xor     rbx, rax
 * 0000000140BB3879: add     r9, rdx
 * 0000000140BB387C: rol     rbx, cl
 * 0000000140BB387F: add     r8d, r12d
 * 0000000140BB3882: jnz     short loc_140BB386F
 * 0000000140BB3884: mov     rax, rbx
 * 0000000140BB3887: jmp     short loc_140BB388B
 * 0000000140BB3889: xor     ebx, eax
 * 0000000140BB388B: shr     rax, 1Fh
 * 0000000140BB388F: test    rax, rax
 * 0000000140BB3892: jnz     short loc_140BB3889
 * 0000000140BB3894: btr     ebx, 1Fh
 * 0000000140BB3898: mov     r12d, r15d
 * 0000000140BB389B: cmp     ebx, [r13+14h]
 * 0000000140BB389F: jz      loc_140BB2B58
 * 0000000140BB38A5: cmp     [r13+0], r15d
 * 0000000140BB38A9: jnz     short loc_140BB38B3
 * 0000000140BB38AB: cmp     [r13+18h], r15d
 * 0000000140BB38AF: cmovnz  r12d, edx
 * 0000000140BB38B3: mov     ecx, [r13+10h]
 * 0000000140BB38B7: mov     rdx, [r13+8]
 * 0000000140BB38BB: test    rcx, rcx
 * 0000000140BB38BE: jz      loc_140BB3976
 * 0000000140BB38C4: mov     eax, [rsi+9DCh]
 * 0000000140BB38CA: mov     r8d, 40h ; '@'
 * 0000000140BB38D0: test    r8b, al
 * 0000000140BB38D3: jz      loc_140BB3976
 * 0000000140BB38D9: mov     r15, cr8
 * 0000000140BB38DD: lea     eax, [r8-3Eh]
 * 0000000140BB38E1: mov     cr8, rax
 * 0000000140BB38E5: mov     r14, rdx
 * 0000000140BB38E8: lea     rax, [rcx-1]
 * 0000000140BB38EC: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BB38F3: add     rax, rdx
 * 0000000140BB38F6: or      rax, 0FFFh
 * 0000000140BB38FC: mov     [rsp+9D0h+var_978], rax
 * 0000000140BB3901: lea     r13, [r14-1]
 * 0000000140BB3905: mov     rax, [rsi+468h]
 * 0000000140BB390C: xor     edx, edx
 * 0000000140BB390E: mov     rcx, r14
 * 0000000140BB3911: call    KeGuardDispatchICall
 * 0000000140BB3916: cmp     eax, 0C000022Dh
 * 0000000140BB391B: jnz     short loc_140BB3942
 * 0000000140BB391D: test    r12d, r12d
 * 0000000140BB3920: jnz     short loc_140BB3966
 * 0000000140BB3922: lea     eax, [r12+1]
 * 0000000140BB3927: cmp     r15b, al
 * 0000000140BB392A: ja      short loc_140BB3946
 * 0000000140BB392C: movzx   eax, r15b
 * 0000000140BB3930: mov     cr8, rax
 * 0000000140BB3934: mov     al, [r14]
 * 0000000140BB3937: lea     eax, [r12+2]
 * 0000000140BB393C: mov     cr8, rax
 * 0000000140BB3940: jmp     short loc_140BB3905
 * 0000000140BB3942: test    eax, eax
 * 0000000140BB3944: js      short loc_140BB3966
 * 0000000140BB3946: mov     r11d, 1000h
 * 0000000140BB394C: add     r14, r11
 * 0000000140BB394F: add     r13, r11
 * 0000000140BB3952: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BB3957: jnz     short loc_140BB3905
 * 0000000140BB3959: movzx   eax, r15b
 * 0000000140BB395D: mov     cr8, rax
 * 0000000140BB3961: jmp     loc_140BB1FA1
 * 0000000140BB3966: movzx   eax, r15b
 * 0000000140BB396A: mov     cr8, rax
 * 0000000140BB396E: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB3973: xor     r15d, r15d
 * 0000000140BB3976: mov     eax, [r13+14h]
 * 0000000140BB397A: cmp     [rsi+918h], r15d
 * 0000000140BB3981: jnz     short loc_140BB3993
 * 0000000140BB3983: mov     ecx, ebx
 * 0000000140BB3985: xor     rcx, rax
 * 0000000140BB3988: mov     rax, [rsi+588h]
 * 0000000140BB398F: mov     [rax+18h], rcx
 * 0000000140BB3993: mov     ebx, 1
 * 0000000140BB3998: mov     rcx, [r13+8]
 * 0000000140BB399C: cmp     [rsi+918h], r15d
 * 0000000140BB39A3: jnz     loc_140BB2B5D
 * 0000000140BB39A9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB39B3: add     rax, rsi
 * 0000000140BB39B6: mov     [rsi+920h], rax
 * 0000000140BB39BD: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB39C7: add     rax, r13
 * 0000000140BB39CA: mov     [rsi+928h], rax
 * 0000000140BB39D1: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB39D5: mov     [rsi+930h], rax
 * 0000000140BB39DC: mov     [rsi+938h], rcx
 * 0000000140BB39E3: mov     [rsi+918h], ebx
 * 0000000140BB39E9: mov     ecx, [rsi+9D8h]
 * 0000000140BB39EF: bt      ecx, 1Dh
 * 0000000140BB39F3: jb      loc_140BB2B5D
 * 0000000140BB39F9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB3A03: jz      loc_140BB2B5D
 * 0000000140BB3A09: test    bl, cl
 * 0000000140BB3A0B: jz      loc_140BB2B5D
 * 0000000140BB3A11: mov     ecx, [rsi+0A74h]
 * 0000000140BB3A17: mov     eax, [rsi+804h]
 * 0000000140BB3A1D: mov     r10, [rsi+838h]
 * 0000000140BB3A24: sub     eax, ecx
 * 0000000140BB3A26: mov     r8, [rsi+0A78h]
 * 0000000140BB3A2D: lea     rdx, [rcx+rsi]
 * 0000000140BB3A31: mov     ecx, eax
 * 0000000140BB3A33: shr     rcx, 3
 * 0000000140BB3A37: lea     r9, [rdx+rcx*8]
 * 0000000140BB3A3B: jmp     short loc_140BB3A5E
 * 0000000140BB3A3D: xor     [rdx], r8
 * 0000000140BB3A40: mov     rax, [rdx]
 * 0000000140BB3A43: movzx   ecx, r8b
 * 0000000140BB3A47: xor     rax, r10
 * 0000000140BB3A4A: and     ecx, 3Fh
 * 0000000140BB3A4D: ror     r8, cl
 * 0000000140BB3A50: add     r8, rax
 * 0000000140BB3A53: xor     r8, 0EFAh
 * 0000000140BB3A5A: add     rdx, 8
 * 0000000140BB3A5E: cmp     rdx, r9
 * 0000000140BB3A61: jnz     short loc_140BB3A3D
 * 0000000140BB3A63: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB3A6B: cmp     r8, [rsi+0A80h]
 * 0000000140BB3A72: jz      loc_140BB2B5D
 * 0000000140BB3A78: mov     ecx, [rsi+804h]
 * 0000000140BB3A7E: mov     rax, [rsi+588h]
 * 0000000140BB3A85: mov     [rax], rsi
 * 0000000140BB3A88: mov     [rax+10h], ecx
 * 0000000140BB3A8B: mov     rcx, [rsi+0A80h]
 * 0000000140BB3A92: cmp     [rsi+918h], r15d
 * 0000000140BB3A99: jnz     short loc_140BB3AA9
 * 0000000140BB3A9B: mov     rax, [rsi+588h]
 * 0000000140BB3AA2: xor     rcx, r8
 * 0000000140BB3AA5: mov     [rax+18h], rcx
 * 0000000140BB3AA9: xor     edx, edx
 * 0000000140BB3AAB: mov     r9d, 100h
 * 0000000140BB3AB1: mov     rcx, rsi
 * 0000000140BB3AB4: call    sub_140BC7384
 * 0000000140BB3AB9: jmp     loc_140BB2B5D
 * 0000000140BB3ABE: mov     rax, [rsi+568h]
 * 0000000140BB3AC5: cmp     [rax+20h], r15
 * 0000000140BB3AC9: jz      loc_140BB1FAF
 * 0000000140BB3ACF: add     dword ptr [rsi+848h], 100h
 * 0000000140BB3AD9: mov     r15, [rsi+580h]
 * 0000000140BB3AE0: mov     rax, [rsi+2D8h]
 * 0000000140BB3AE7: mov     rcx, r15
 * 0000000140BB3AEA: call    KeGuardDispatchICall
 * 0000000140BB3AEF: mov     r14, rax
 * 0000000140BB3AF2: test    rax, rax
 * 0000000140BB3AF5: jz      loc_140BB3DAC
 * 0000000140BB3AFB: mov     rax, [rsi+2E0h]
 * 0000000140BB3B02: mov     rcx, r14
 * 0000000140BB3B05: call    KeGuardDispatchICall
 * 0000000140BB3B0A: mov     rbx, rax
 * 0000000140BB3B0D: xor     r11d, r11d
 * 0000000140BB3B10: mov     rax, [r13+18h]
 * 0000000140BB3B14: test    rax, rax
 * 0000000140BB3B17: jz      loc_140BB3C4C
 * 0000000140BB3B1D: cmp     rax, rbx
 * 0000000140BB3B20: jz      loc_140BB3D95
 * 0000000140BB3B26: cmp     [rsi+918h], r11d
 * 0000000140BB3B2D: jnz     loc_140BB3D95
 * 0000000140BB3B33: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB3B3D: add     rax, rsi
 * 0000000140BB3B40: mov     [rsi+920h], rax
 * 0000000140BB3B47: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB3B51: add     rax, r13
 * 0000000140BB3B54: mov     [rsi+928h], rax
 * 0000000140BB3B5B: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB3B5F: mov     [rsi+930h], rax
 * 0000000140BB3B66: mov     [rsi+938h], rbx
 * 0000000140BB3B6D: lea     ebx, [r11+1]
 * 0000000140BB3B71: mov     [rsi+918h], ebx
 * 0000000140BB3B77: mov     ecx, [rsi+9D8h]
 * 0000000140BB3B7D: bt      ecx, 1Dh
 * 0000000140BB3B81: jb      loc_140BB3D9A
 * 0000000140BB3B87: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB3B91: jz      loc_140BB3D9A
 * 0000000140BB3B97: test    bl, cl
 * 0000000140BB3B99: jz      loc_140BB3D9A
 * 0000000140BB3B9F: mov     ecx, [rsi+0A74h]
 * 0000000140BB3BA5: mov     eax, [rsi+804h]
 * 0000000140BB3BAB: mov     r10, [rsi+838h]
 * 0000000140BB3BB2: sub     eax, ecx
 * 0000000140BB3BB4: mov     r8, [rsi+0A78h]
 * 0000000140BB3BBB: lea     rdx, [rcx+rsi]
 * 0000000140BB3BBF: mov     ecx, eax
 * 0000000140BB3BC1: shr     rcx, 3
 * 0000000140BB3BC5: lea     r9, [rdx+rcx*8]
 * 0000000140BB3BC9: jmp     short loc_140BB3BEC
 * 0000000140BB3BCB: xor     [rdx], r8
 * 0000000140BB3BCE: mov     rax, [rdx]
 * 0000000140BB3BD1: movzx   ecx, r8b
 * 0000000140BB3BD5: xor     rax, r10
 * 0000000140BB3BD8: and     ecx, 3Fh
 * 0000000140BB3BDB: ror     r8, cl
 * 0000000140BB3BDE: add     r8, rax
 * 0000000140BB3BE1: xor     r8, 0EFAh
 * 0000000140BB3BE8: add     rdx, 8
 * 0000000140BB3BEC: cmp     rdx, r9
 * 0000000140BB3BEF: jnz     short loc_140BB3BCB
 * 0000000140BB3BF1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB3BF9: cmp     r8, [rsi+0A80h]
 * 0000000140BB3C00: jz      loc_140BB3D9A
 * 0000000140BB3C06: mov     ecx, [rsi+804h]
 * 0000000140BB3C0C: mov     rax, [rsi+588h]
 * 0000000140BB3C13: mov     [rax], rsi
 * 0000000140BB3C16: mov     [rax+10h], ecx
 * 0000000140BB3C19: mov     rcx, [rsi+0A80h]
 * 0000000140BB3C20: cmp     [rsi+918h], r11d
 * 0000000140BB3C27: jnz     short loc_140BB3C37
 * 0000000140BB3C29: mov     rax, [rsi+588h]
 * 0000000140BB3C30: xor     rcx, r8
 * 0000000140BB3C33: mov     [rax+18h], rcx
 * 0000000140BB3C37: xor     edx, edx
 * 0000000140BB3C39: mov     r9d, 100h
 * 0000000140BB3C3F: mov     rcx, rsi
 * 0000000140BB3C42: call    sub_140BC7384
 * 0000000140BB3C47: jmp     loc_140BB3D9A
 * 0000000140BB3C4C: mov     eax, [rsi+9C0h]
 * 0000000140BB3C52: mov     rcx, [rsi+9C8h]
 * 0000000140BB3C59: test    rax, rax
 * 0000000140BB3C5C: jz      short loc_140BB3C73
 * 0000000140BB3C5E: lea     rdx, [rax-1]
 * 0000000140BB3C62: add     rdx, rcx
 * 0000000140BB3C65: cmp     rbx, rcx
 * 0000000140BB3C68: jb      short loc_140BB3C73
 * 0000000140BB3C6A: cmp     rbx, rdx
 * 0000000140BB3C6D: jbe     loc_140BB3D91
 * 0000000140BB3C73: cmp     [rsi+918h], r11d
 * 0000000140BB3C7A: jnz     loc_140BB3D91
 * 0000000140BB3C80: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB3C8A: mov     edx, 1
 * 0000000140BB3C8F: add     rax, rsi
 * 0000000140BB3C92: mov     [rsi+920h], rax
 * 0000000140BB3C99: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB3CA3: add     rax, r13
 * 0000000140BB3CA6: mov     [rsi+928h], rax
 * 0000000140BB3CAD: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB3CB1: mov     [rsi+930h], rax
 * 0000000140BB3CB8: mov     [rsi+938h], rbx
 * 0000000140BB3CBF: mov     [rsi+918h], edx
 * 0000000140BB3CC5: mov     ecx, [rsi+9D8h]
 * 0000000140BB3CCB: bt      ecx, 1Dh
 * 0000000140BB3CCF: jb      loc_140BB3D91
 * 0000000140BB3CD5: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB3CDF: jz      loc_140BB3D91
 * 0000000140BB3CE5: test    dl, cl
 * 0000000140BB3CE7: jz      loc_140BB3D91
 * 0000000140BB3CED: mov     ecx, [rsi+0A74h]
 * 0000000140BB3CF3: mov     eax, [rsi+804h]
 * 0000000140BB3CF9: mov     r10, [rsi+838h]
 * 0000000140BB3D00: sub     eax, ecx
 * 0000000140BB3D02: mov     r8, [rsi+0A78h]
 * 0000000140BB3D09: lea     rdx, [rcx+rsi]
 * 0000000140BB3D0D: mov     ecx, eax
 * 0000000140BB3D0F: shr     rcx, 3
 * 0000000140BB3D13: lea     r9, [rdx+rcx*8]
 * 0000000140BB3D17: jmp     short loc_140BB3D3A
 * 0000000140BB3D19: xor     [rdx], r8
 * 0000000140BB3D1C: mov     rax, [rdx]
 * 0000000140BB3D1F: movzx   ecx, r8b
 * 0000000140BB3D23: xor     rax, r10
 * 0000000140BB3D26: and     ecx, 3Fh
 * 0000000140BB3D29: ror     r8, cl
 * 0000000140BB3D2C: add     r8, rax
 * 0000000140BB3D2F: xor     r8, 0EFAh
 * 0000000140BB3D36: add     rdx, 8
 * 0000000140BB3D3A: cmp     rdx, r9
 * 0000000140BB3D3D: jnz     short loc_140BB3D19
 * 0000000140BB3D3F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB3D47: cmp     r8, [rsi+0A80h]
 * 0000000140BB3D4E: jz      short loc_140BB3D91
 * 0000000140BB3D50: mov     ecx, [rsi+804h]
 * 0000000140BB3D56: mov     rax, [rsi+588h]
 * 0000000140BB3D5D: mov     [rax], rsi
 * 0000000140BB3D60: mov     [rax+10h], ecx
 * 0000000140BB3D63: mov     rcx, [rsi+0A80h]
 * 0000000140BB3D6A: cmp     [rsi+918h], r11d
 * 0000000140BB3D71: jnz     short loc_140BB3D81
 * 0000000140BB3D73: mov     rax, [rsi+588h]
 * 0000000140BB3D7A: xor     rcx, r8
 * 0000000140BB3D7D: mov     [rax+18h], rcx
 * 0000000140BB3D81: xor     edx, edx
 * 0000000140BB3D83: mov     r9d, 100h
 * 0000000140BB3D89: mov     rcx, rsi
 * 0000000140BB3D8C: call    sub_140BC7384
 * 0000000140BB3D91: mov     [r13+18h], rbx
 * 0000000140BB3D95: mov     ebx, 1
 * 0000000140BB3D9A: mov     rax, [rsi+2E8h]
 * 0000000140BB3DA1: mov     rdx, r14
 * 0000000140BB3DA4: mov     rcx, r15
 * 0000000140BB3DA7: call    KeGuardDispatchICall
 * 0000000140BB3DAC: mov     r11d, 1000h
 * 0000000140BB3DB2: xor     r15d, r15d
 * 0000000140BB3DB5: jmp     loc_140BB1FAF
 * 0000000140BB3DBA: mov     ecx, r10d
 * 0000000140BB3DBD: sub     ecx, 15h
 * 0000000140BB3DC0: jz      loc_140BB8C0F
 * 0000000140BB3DC6: sub     ecx, 3
 * 0000000140BB3DC9: jz      loc_140BB5B5D
 * 0000000140BB3DCF: sub     ecx, 1
 * 0000000140BB3DD2: jz      loc_140BB566E
 * 0000000140BB3DD8: sub     ecx, 1
 * 0000000140BB3DDB: jz      loc_140BB537E
 * 0000000140BB3DE1: sub     ecx, 1
 * 0000000140BB3DE4: jz      loc_140BB4FE0
 * 0000000140BB3DEA: sub     ecx, 1
 * 0000000140BB3DED: jz      loc_140BB43C7
 * 0000000140BB3DF3: cmp     ecx, 1
 * 0000000140BB3DF6: jnz     loc_140BBC176
 * 0000000140BB3DFC: mov     r14, [r13+8]
 * 0000000140BB3E00: mov     r8d, [r13+10h]
 * 0000000140BB3E04: mov     r9, r14
 * 0000000140BB3E07: add     [rsi+848h], r8d
 * 0000000140BB3E0E: mov     rax, r14
 * 0000000140BB3E11: mov     r11d, [rsi+834h]
 * 0000000140BB3E18: mov     r15, [rsi+838h]
 * 0000000140BB3E1F: lea     rcx, [r14+r8]
 * 0000000140BB3E23: cmp     r14, rcx
 * 0000000140BB3E26: jnb     short loc_140BB3E38
 * 0000000140BB3E28: mov     edx, 40h ; '@'
 * 0000000140BB3E2D: prefetchnta byte ptr [rax]
 * 0000000140BB3E30: add     rax, rdx
 * 0000000140BB3E33: cmp     rax, rcx
 * 0000000140BB3E36: jb      short loc_140BB3E2D
 * 0000000140BB3E38: mov     r10d, r8d
 * 0000000140BB3E3B: mov     rbx, r15
 * 0000000140BB3E3E: shr     r10d, 7
 * 0000000140BB3E42: mov     edx, 1
 * 0000000140BB3E47: mov     r12d, 0FFFFFFFFh
 * 0000000140BB3E4D: test    r10d, r10d
 * 0000000140BB3E50: jz      short loc_140BB3EB6
 * 0000000140BB3E52: mov     rsi, 7010008004002001h
 * 0000000140BB3E5C: mov     eax, 8
 * 0000000140BB3E61: xor     rbx, [r9]
 * 0000000140BB3E64: mov     ecx, r11d
 * 0000000140BB3E67: rol     rbx, cl
 * 0000000140BB3E6A: xor     rbx, [r9+8]
 * 0000000140BB3E6E: add     r9, 10h
 * 0000000140BB3E72: rol     rbx, cl
 * 0000000140BB3E75: sub     rax, rdx
 * 0000000140BB3E78: jnz     short loc_140BB3E61
 * 0000000140BB3E7A: mov     rcx, r9
 * 0000000140BB3E7D: sub     rcx, r14
 * 0000000140BB3E80: xor     rcx, r15
 * 0000000140BB3E83: mov     rax, rcx
 * 0000000140BB3E86: rol     rax, 11h
 * 0000000140BB3E8A: xor     rcx, rax
 * 0000000140BB3E8D: mov     rax, rsi
 * 0000000140BB3E90: mul     rcx
 * 0000000140BB3E93: mov     [rbp+8D0h+var_210], rdx
 * 0000000140BB3E9A: xor     edx, eax
 * 0000000140BB3E9C: xor     r11d, edx
 * 0000000140BB3E9F: mov     edx, 1
 * 0000000140BB3EA4: and     r11d, 3Fh
 * 0000000140BB3EA8: cmovz   r11d, edx
 * 0000000140BB3EAC: add     r10d, r12d
 * 0000000140BB3EAF: jnz     short loc_140BB3E5C
 * 0000000140BB3EB1: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB3EB6: and     r8d, 7Fh
 * 0000000140BB3EBA: cmp     r8d, 8
 * 0000000140BB3EBE: jb      short loc_140BB3EDD
 * 0000000140BB3EC0: mov     eax, r8d
 * 0000000140BB3EC3: shr     rax, 3
 * 0000000140BB3EC7: xor     rbx, [r9]
 * 0000000140BB3ECA: mov     ecx, r11d
 * 0000000140BB3ECD: rol     rbx, cl
 * 0000000140BB3ED0: add     r9, 8
 * 0000000140BB3ED4: add     r8d, 0FFFFFFF8h
 * 0000000140BB3ED8: sub     rax, rdx
 * 0000000140BB3EDB: jnz     short loc_140BB3EC7
 * 0000000140BB3EDD: xor     r15d, r15d
 * 0000000140BB3EE0: test    r8d, r8d
 * 0000000140BB3EE3: jz      short loc_140BB3EFA
 * 0000000140BB3EE5: movzx   eax, byte ptr [r9]
 * 0000000140BB3EE9: mov     ecx, r11d
 * 0000000140BB3EEC: xor     rbx, rax
 * 0000000140BB3EEF: add     r9, rdx
 * 0000000140BB3EF2: rol     rbx, cl
 * 0000000140BB3EF5: add     r8d, r12d
 * 0000000140BB3EF8: jnz     short loc_140BB3EE5
 * 0000000140BB3EFA: mov     rax, rbx
 * 0000000140BB3EFD: jmp     short loc_140BB3F01
 * 0000000140BB3EFF: xor     ebx, eax
 * 0000000140BB3F01: shr     rax, 1Fh
 * 0000000140BB3F05: test    rax, rax
 * 0000000140BB3F08: jnz     short loc_140BB3EFF
 * 0000000140BB3F0A: btr     ebx, 1Fh
 * 0000000140BB3F0E: mov     r12d, r15d
 * 0000000140BB3F11: cmp     ebx, [r13+14h]
 * 0000000140BB3F15: jz      loc_140BB4139
 * 0000000140BB3F1B: cmp     [r13+0], r15d
 * 0000000140BB3F1F: jnz     short loc_140BB3F29
 * 0000000140BB3F21: cmp     [r13+18h], r15d
 * 0000000140BB3F25: cmovnz  r12d, edx
 * 0000000140BB3F29: mov     ecx, [r13+10h]
 * 0000000140BB3F2D: mov     rdx, [r13+8]
 * 0000000140BB3F31: test    rcx, rcx
 * 0000000140BB3F34: jz      loc_140BB3FF8
 * 0000000140BB3F3A: mov     eax, [rsi+9DCh]
 * 0000000140BB3F40: mov     r8d, 40h ; '@'
 * 0000000140BB3F46: test    r8b, al
 * 0000000140BB3F49: jz      loc_140BB3FF8
 * 0000000140BB3F4F: mov     r15, cr8
 * 0000000140BB3F53: lea     eax, [r8-3Eh]
 * 0000000140BB3F57: mov     cr8, rax
 * 0000000140BB3F5B: mov     r14, rdx
 * 0000000140BB3F5E: lea     rax, [rcx-1]
 * 0000000140BB3F62: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BB3F69: add     rax, rdx
 * 0000000140BB3F6C: or      rax, 0FFFh
 * 0000000140BB3F72: mov     [rsp+9D0h+var_978], rax
 * 0000000140BB3F77: lea     r13, [r14-1]
 * 0000000140BB3F7B: mov     rax, [rsi+468h]
 * 0000000140BB3F82: xor     edx, edx
 * 0000000140BB3F84: mov     rcx, r14
 * 0000000140BB3F87: call    KeGuardDispatchICall
 * 0000000140BB3F8C: cmp     eax, 0C000022Dh
 * 0000000140BB3F91: jnz     short loc_140BB3FB8
 * 0000000140BB3F93: test    r12d, r12d
 * 0000000140BB3F96: jnz     short loc_140BB3FE8
 * 0000000140BB3F98: lea     eax, [r12+1]
 * 0000000140BB3F9D: cmp     r15b, al
 * 0000000140BB3FA0: ja      short loc_140BB3FBC
 * 0000000140BB3FA2: movzx   eax, r15b
 * 0000000140BB3FA6: mov     cr8, rax
 * 0000000140BB3FAA: mov     al, [r14]
 * 0000000140BB3FAD: lea     eax, [r12+2]
 * 0000000140BB3FB2: mov     cr8, rax
 * 0000000140BB3FB6: jmp     short loc_140BB3F7B
 * 0000000140BB3FB8: test    eax, eax
 * 0000000140BB3FBA: js      short loc_140BB3FE8
 * 0000000140BB3FBC: mov     r11d, 1000h
 * 0000000140BB3FC2: add     r14, r11
 * 0000000140BB3FC5: add     r13, r11
 * 0000000140BB3FC8: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BB3FCD: jnz     short loc_140BB3F7B
 * 0000000140BB3FCF: movzx   eax, r15b
 * 0000000140BB3FD3: mov     cr8, rax
 * 0000000140BB3FD7: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB3FDC: xor     r15d, r15d
 * 0000000140BB3FDF: lea     ebx, [r15+1]
 * 0000000140BB3FE3: jmp     loc_140BB4144
 * 0000000140BB3FE8: movzx   eax, r15b
 * 0000000140BB3FEC: mov     cr8, rax
 * 0000000140BB3FF0: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB3FF5: xor     r15d, r15d
 * 0000000140BB3FF8: mov     eax, [r13+14h]
 * 0000000140BB3FFC: cmp     [rsi+918h], r15d
 * 0000000140BB4003: jnz     short loc_140BB4015
 * 0000000140BB4005: mov     ecx, ebx
 * 0000000140BB4007: xor     rcx, rax
 * 0000000140BB400A: mov     rax, [rsi+588h]
 * 0000000140BB4011: mov     [rax+18h], rcx
 * 0000000140BB4015: mov     ebx, 1
 * 0000000140BB401A: mov     rcx, [r13+8]
 * 0000000140BB401E: cmp     [rsi+918h], r15d
 * 0000000140BB4025: jnz     loc_140BB413E
 * 0000000140BB402B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB4035: add     rax, rsi
 * 0000000140BB4038: mov     [rsi+920h], rax
 * 0000000140BB403F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB4049: add     rax, r13
 * 0000000140BB404C: mov     [rsi+928h], rax
 * 0000000140BB4053: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB4057: mov     [rsi+930h], rax
 * 0000000140BB405E: mov     [rsi+938h], rcx
 * 0000000140BB4065: mov     [rsi+918h], ebx
 * 0000000140BB406B: mov     ecx, [rsi+9D8h]
 * 0000000140BB4071: bt      ecx, 1Dh
 * 0000000140BB4075: jb      loc_140BB413E
 * 0000000140BB407B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB4085: jz      loc_140BB413E
 * 0000000140BB408B: test    bl, cl
 * 0000000140BB408D: jz      loc_140BB413E
 * 0000000140BB4093: mov     ecx, [rsi+0A74h]
 * 0000000140BB4099: mov     eax, [rsi+804h]
 * 0000000140BB409F: mov     r10, [rsi+838h]
 * 0000000140BB40A6: sub     eax, ecx
 * 0000000140BB40A8: mov     r8, [rsi+0A78h]
 * 0000000140BB40AF: lea     rdx, [rcx+rsi]
 * 0000000140BB40B3: mov     ecx, eax
 * 0000000140BB40B5: shr     rcx, 3
 * 0000000140BB40B9: lea     r9, [rdx+rcx*8]
 * 0000000140BB40BD: jmp     short loc_140BB40E0
 * 0000000140BB40BF: xor     [rdx], r8
 * 0000000140BB40C2: mov     rax, [rdx]
 * 0000000140BB40C5: movzx   ecx, r8b
 * 0000000140BB40C9: xor     rax, r10
 * 0000000140BB40CC: and     ecx, 3Fh
 * 0000000140BB40CF: ror     r8, cl
 * 0000000140BB40D2: add     r8, rax
 * 0000000140BB40D5: xor     r8, 0EFAh
 * 0000000140BB40DC: add     rdx, 8
 * 0000000140BB40E0: cmp     rdx, r9
 * 0000000140BB40E3: jnz     short loc_140BB40BF
 * 0000000140BB40E5: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB40ED: cmp     r8, [rsi+0A80h]
 * 0000000140BB40F4: jz      short loc_140BB413E
 * 0000000140BB40F6: mov     ecx, [rsi+804h]
 * 0000000140BB40FC: mov     rax, [rsi+588h]
 * 0000000140BB4103: mov     [rax], rsi
 * 0000000140BB4106: mov     [rax+10h], ecx
 * 0000000140BB4109: mov     rcx, [rsi+0A80h]
 * 0000000140BB4110: cmp     [rsi+918h], r15d
 * 0000000140BB4117: jnz     short loc_140BB4127
 * 0000000140BB4119: mov     rax, [rsi+588h]
 * 0000000140BB4120: xor     rcx, r8
 * 0000000140BB4123: mov     [rax+18h], rcx
 * 0000000140BB4127: xor     edx, edx
 * 0000000140BB4129: mov     r9d, 100h
 * 0000000140BB412F: mov     rcx, rsi
 * 0000000140BB4132: call    sub_140BC7384
 * 0000000140BB4137: jmp     short loc_140BB413E
 * 0000000140BB4139: mov     ebx, 1
 * 0000000140BB413E: mov     r11d, 1000h
 * 0000000140BB4144: mov     eax, [r13+10h]
 * 0000000140BB4148: mov     r12, [r13+8]
 * 0000000140BB414C: shr     eax, 4
 * 0000000140BB414F: mov     [rbp+8D0h+arg_8], r12
 * 0000000140BB4156: test    eax, eax
 * 0000000140BB4158: jz      loc_140BB1FA9
 * 0000000140BB415E: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BB4163: mov     r13d, eax
 * 0000000140BB4166: mov     [rsp+9D0h+var_978], r13
 * 0000000140BB416B: mov     rax, [r12]
 * 0000000140BB416F: lea     rdx, [rbp+8D0h+var_788]
 * 0000000140BB4176: mov     rbx, rdi
 * 0000000140BB4179: mov     r15, [rax]
 * 0000000140BB417C: xor     eax, eax
 * 0000000140BB417E: mov     [rbp+8D0h+var_788], rax
 * 0000000140BB4185: mov     rcx, r15
 * 0000000140BB4188: mov     rax, [rsi+310h]
 * 0000000140BB418F: call    KeGuardDispatchICall
 * 0000000140BB4194: mov     r14, rax
 * 0000000140BB4197: test    rax, rax
 * 0000000140BB419A: jz      loc_140BB4397
 * 0000000140BB41A0: mov     r12d, 6
 * 0000000140BB41A6: xor     r13d, r13d
 * 0000000140BB41A9: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140BB41B3: mov     rax, [rsi+218h]
 * 0000000140BB41BA: lea     rdx, [rbp+8D0h+var_208]
 * 0000000140BB41C1: mov     rcx, r14
 * 0000000140BB41C4: call    KeGuardDispatchICall
 * 0000000140BB41C9: test    rax, rax
 * 0000000140BB41CC: jnz     loc_140BB4364
 * 0000000140BB41D2: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB41DC: lea     r9d, [rax+1]
 * 0000000140BB41E0: jz      short loc_140BB4228
 * 0000000140BB41E2: mov     rcx, [rsi+0AC8h]
 * 0000000140BB41E9: lea     edx, [rax+30h]
 * 0000000140BB41EC: mov     r8, r12
 * 0000000140BB41EF: mov     rax, [rbx]
 * 0000000140BB41F2: add     edx, 0FFFFFFF8h
 * 0000000140BB41F5: mov     [rcx], rax
 * 0000000140BB41F8: add     rbx, 8
 * 0000000140BB41FC: add     rcx, 8
 * 0000000140BB4200: sub     r8, r9
 * 0000000140BB4203: jnz     short loc_140BB41EF
 * 0000000140BB4205: test    edx, edx
 * 0000000140BB4207: jz      short loc_140BB4221
 * 0000000140BB4209: mov     esi, 0FFFFFFFFh
 * 0000000140BB420E: mov     al, [rbx]
 * 0000000140BB4210: add     rbx, r9
 * 0000000140BB4213: mov     [rcx], al
 * 0000000140BB4215: add     rcx, r9
 * 0000000140BB4218: add     edx, esi
 * 0000000140BB421A: jnz     short loc_140BB420E
 * 0000000140BB421C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB4221: mov     rbx, [rsi+0AC8h]
 * 0000000140BB4228: mov     [rbx+18h], r14
 * 0000000140BB422C: mov     [rbx+20h], r15
 * 0000000140BB4230: mov     rax, [rsi+588h]
 * 0000000140BB4237: mov     [rax], rbx
 * 0000000140BB423A: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BB4241: mov     rax, [rsi+588h]
 * 0000000140BB4248: mov     [rax+8], r14
 * 0000000140BB424C: mov     dword ptr [rax+14h], 1000h
 * 0000000140BB4253: cmp     [rsi+918h], r13d
 * 0000000140BB425A: jnz     loc_140BB4364
 * 0000000140BB4260: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB426A: add     rax, rsi
 * 0000000140BB426D: mov     [rsi+920h], rax
 * 0000000140BB4274: lea     rax, [rbx+rdi]
 * 0000000140BB4278: mov     [rsi+928h], rax
 * 0000000140BB427F: movsxd  rax, dword ptr [rbx]
 * 0000000140BB4282: mov     [rsi+930h], rax
 * 0000000140BB4289: mov     [rsi+938h], r12
 * 0000000140BB4290: mov     [rsi+918h], r9d
 * 0000000140BB4297: mov     ecx, [rsi+9D8h]
 * 0000000140BB429D: bt      ecx, 1Dh
 * 0000000140BB42A1: jb      loc_140BB4364
 * 0000000140BB42A7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB42B1: jz      loc_140BB4364
 * 0000000140BB42B7: test    r9b, cl
 * 0000000140BB42BA: jz      loc_140BB4364
 * 0000000140BB42C0: mov     ecx, [rsi+0A74h]
 * 0000000140BB42C6: mov     eax, [rsi+804h]
 * 0000000140BB42CC: mov     r10, [rsi+838h]
 * 0000000140BB42D3: sub     eax, ecx
 * 0000000140BB42D5: mov     r8, [rsi+0A78h]
 * 0000000140BB42DC: lea     rdx, [rcx+rsi]
 * 0000000140BB42E0: mov     ecx, eax
 * 0000000140BB42E2: shr     rcx, 3
 * 0000000140BB42E6: lea     r9, [rdx+rcx*8]
 * 0000000140BB42EA: jmp     short loc_140BB430D
 * 0000000140BB42EC: xor     [rdx], r8
 * 0000000140BB42EF: mov     rax, [rdx]
 * 0000000140BB42F2: movzx   ecx, r8b
 * 0000000140BB42F6: xor     rax, r10
 * 0000000140BB42F9: and     ecx, 3Fh
 * 0000000140BB42FC: ror     r8, cl
 * 0000000140BB42FF: add     r8, rax
 * 0000000140BB4302: xor     r8, 0EFAh
 * 0000000140BB4309: add     rdx, 8
 * 0000000140BB430D: cmp     rdx, r9
 * 0000000140BB4310: jnz     short loc_140BB42EC
 * 0000000140BB4312: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB431A: cmp     r8, [rsi+0A80h]
 * 0000000140BB4321: jz      short loc_140BB4364
 * 0000000140BB4323: mov     ecx, [rsi+804h]
 * 0000000140BB4329: mov     rax, [rsi+588h]
 * 0000000140BB4330: mov     [rax], rsi
 * 0000000140BB4333: mov     [rax+10h], ecx
 * 0000000140BB4336: mov     rcx, [rsi+0A80h]
 * 0000000140BB433D: cmp     [rsi+918h], r13d
 * 0000000140BB4344: jnz     short loc_140BB4354
 * 0000000140BB4346: mov     rax, [rsi+588h]
 * 0000000140BB434D: xor     rcx, r8
 * 0000000140BB4350: mov     [rax+18h], rcx
 * 0000000140BB4354: xor     edx, edx
 * 0000000140BB4356: mov     r9d, 100h
 * 0000000140BB435C: mov     rcx, rsi
 * 0000000140BB435F: call    sub_140BC7384
 * 0000000140BB4364: mov     rax, [rsi+310h]
 * 0000000140BB436B: lea     rdx, [rbp+8D0h+var_788]
 * 0000000140BB4372: mov     rcx, r15
 * 0000000140BB4375: call    KeGuardDispatchICall
 * 0000000140BB437A: mov     r14, rax
 * 0000000140BB437D: test    rax, rax
 * 0000000140BB4380: jnz     loc_140BB41B3
 * 0000000140BB4386: mov     r12, [rbp+8D0h+arg_8]
 * 0000000140BB438D: mov     r13, [rsp+9D0h+var_978]
 * 0000000140BB4392: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BB4397: add     r12, 10h
 * 0000000140BB439B: mov     ebx, 1
 * 0000000140BB43A0: sub     r13, rbx
 * 0000000140BB43A3: mov     [rbp+8D0h+arg_8], r12
 * 0000000140BB43AA: mov     [rsp+9D0h+var_978], r13
 * 0000000140BB43AF: jnz     loc_140BB416B
 * 0000000140BB43B5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB43BC: mov     r11d, 1000h
 * 0000000140BB43C2: jmp     loc_140BB23D5
 * 0000000140BB43C7: cmp     [r13+10h], r15d
 * 0000000140BB43CB: jnz     loc_140BB4A6E
 * 0000000140BB43D1: lea     rax, [r13+30h]
 * 0000000140BB43D5: xor     r9d, r9d
 * 0000000140BB43D8: mov     [rbp+8D0h+var_6F8], rax
 * 0000000140BB43DF: lea     rcx, [rbp+8D0h+var_700]
 * 0000000140BB43E6: movzx   eax, word ptr [r13+28h]
 * 0000000140BB43EB: xor     r8d, r8d
 * 0000000140BB43EE: mov     [rbp+8D0h+var_700], ax
 * 0000000140BB43F5: xor     edx, edx
 * 0000000140BB43F7: mov     [rbp+8D0h+var_6FE], ax
 * 0000000140BB43FE: lea     rax, [rbp+8D0h+var_8A0]
 * 0000000140BB4402: mov     [rsp+9D0h+var_998], rax
 * 0000000140BB4407: mov     rax, [rsi+508h]
 * 0000000140BB440E: mov     [rsp+9D0h+var_9A0], r15
 * 0000000140BB4413: mov     byte ptr [rsp+9D0h+var_9A8], r15b
 * 0000000140BB4418: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BB441D: mov     rax, [rsi+1F8h]
 * 0000000140BB4424: call    KeGuardDispatchICall
 * 0000000140BB4429: test    eax, eax
 * 0000000140BB442B: js      loc_140BBD398
 * 0000000140BB4431: mov     rax, [rbp+8D0h+var_8A0]
 * 0000000140BB4435: mov     ecx, [rax+10h]
 * 0000000140BB4438: mov     eax, 10h
 * 0000000140BB443D: test    al, cl
 * 0000000140BB443F: jnz     short loc_140BB4456
 * 0000000140BB4441: mov     rax, [rsi+1F0h]
 * 0000000140BB4448: mov     rcx, [rbp+8D0h+var_8A0]
 * 0000000140BB444C: call    KeGuardDispatchICall
 * 0000000140BB4451: jmp     loc_140BBD398
 * 0000000140BB4456: mov     rcx, [rsi+1F8h]
 * 0000000140BB445D: lea     rdx, [rbp+8D0h+var_160]
 * 0000000140BB4464: mov     rax, [rsi+210h]
 * 0000000140BB446B: call    KeGuardDispatchICall
 * 0000000140BB4470: mov     rcx, [rbp+8D0h+var_158]
 * 0000000140BB4477: test    rcx, rcx
 * 0000000140BB447A: jz      short loc_140BB449E
 * 0000000140BB447C: mov     rax, [rsi+208h]
 * 0000000140BB4483: mov     r12, rcx
 * 0000000140BB4486: mov     [rbp+8D0h+var_8D8], rcx
 * 0000000140BB448A: call    KeGuardDispatchICall
 * 0000000140BB448F: test    rax, rax
 * 0000000140BB4492: jz      short loc_140BB44A2
 * 0000000140BB4494: mov     r14d, [rax+50h]
 * 0000000140BB4498: mov     [rbp+8D0h+var_8F8], r14d
 * 0000000140BB449C: jmp     short loc_140BB44A6
 * 0000000140BB449E: mov     r12, [rbp+8D0h+var_8D8]
 * 0000000140BB44A2: mov     r14d, [rbp+8D0h+var_8F8]
 * 0000000140BB44A6: mov     rcx, [r13+18h]
 * 0000000140BB44AA: lea     rdx, [rbp+8D0h+var_190]
 * 0000000140BB44B1: mov     rax, [rsi+210h]
 * 0000000140BB44B8: call    KeGuardDispatchICall
 * 0000000140BB44BD: mov     rcx, [rbp+8D0h+var_188]
 * 0000000140BB44C4: test    rcx, rcx
 * 0000000140BB44C7: jz      short loc_140BB44EB
 * 0000000140BB44C9: mov     rax, [rsi+208h]
 * 0000000140BB44D0: mov     rbx, rcx
 * 0000000140BB44D3: mov     [rbp+8D0h+var_8F0], rcx
 * 0000000140BB44D7: call    KeGuardDispatchICall
 * 0000000140BB44DC: test    rax, rax
 * 0000000140BB44DF: jz      short loc_140BB44EF
 * 0000000140BB44E1: mov     r8d, [rax+50h]
 * 0000000140BB44E5: mov     [rbp+8D0h+var_8C8], r8d
 * 0000000140BB44E9: jmp     short loc_140BB44F3
 * 0000000140BB44EB: mov     rbx, [rbp+8D0h+var_8F0]
 * 0000000140BB44EF: mov     r8d, [rbp+8D0h+var_8C8]
 * 0000000140BB44F3: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BB44FB: jb      short loc_140BB4511
 * 0000000140BB44FD: mov     rax, [rbp+8D0h+var_8A0]
 * 0000000140BB4501: add     rax, 70h ; 'p'
 * 0000000140BB4505: mov     [r13+8], rax
 * 0000000140BB4509: mov     dword ptr [r13+10h], 0E0h
 * 0000000140BB4511: mov     rcx, [rbp+8D0h+var_8A0]
 * 0000000140BB4515: mov     dl, r15b
 * 0000000140BB4518: mov     r10d, r14d
 * 0000000140BB451B: movzx   eax, dl
 * 0000000140BB451E: mov     r9, [rcx+rax*8+70h]
 * 0000000140BB4523: test    r14d, r14d
 * 0000000140BB4526: jz      short loc_140BB453A
 * 0000000140BB4528: lea     rax, [r12-1]
 * 0000000140BB452D: add     rax, r10
 * 0000000140BB4530: cmp     r9, r12
 * 0000000140BB4533: jb      short loc_140BB453A
 * 0000000140BB4535: cmp     r9, rax
 * 0000000140BB4538: jbe     short loc_140BB455F
 * 0000000140BB453A: mov     eax, r8d
 * 0000000140BB453D: test    r8d, r8d
 * 0000000140BB4540: jz      loc_140BB4930
 * 0000000140BB4546: lea     r8, [rbx-1]
 * 0000000140BB454A: add     r8, rax
 * 0000000140BB454D: cmp     r9, rbx
 * 0000000140BB4550: jb      loc_140BB4930
 * 0000000140BB4556: cmp     r9, r8
 * 0000000140BB4559: ja      loc_140BB4930
 * 0000000140BB455F: mov     r8d, [rbp+8D0h+var_8C8]
 * 0000000140BB4563: add     dl, 1
 * 0000000140BB4566: cmp     dl, 1Ch
 * 0000000140BB4569: jb      short loc_140BB451B
 * 0000000140BB456B: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BB4573: jb      loc_140BB2B4C
 * 0000000140BB4579: mov     r14, [r13+8]
 * 0000000140BB457D: mov     r9d, [r13+10h]
 * 0000000140BB4581: mov     r10, r14
 * 0000000140BB4584: add     [rsi+848h], r9d
 * 0000000140BB458B: mov     rax, r14
 * 0000000140BB458E: mov     r11d, [rsi+834h]
 * 0000000140BB4595: mov     r15, [rsi+838h]
 * 0000000140BB459C: lea     rcx, [r14+r9]
 * 0000000140BB45A0: cmp     r14, rcx
 * 0000000140BB45A3: jnb     short loc_140BB45B5
 * 0000000140BB45A5: mov     edx, 40h ; '@'
 * 0000000140BB45AA: prefetchnta byte ptr [rax]
 * 0000000140BB45AD: add     rax, rdx
 * 0000000140BB45B0: cmp     rax, rcx
 * 0000000140BB45B3: jb      short loc_140BB45AA
 * 0000000140BB45B5: mov     ebx, r9d
 * 0000000140BB45B8: mov     r8, r15
 * 0000000140BB45BB: shr     ebx, 7
 * 0000000140BB45BE: test    ebx, ebx
 * 0000000140BB45C0: jz      short loc_140BB4638
 * 0000000140BB45C2: mov     esi, 1
 * 0000000140BB45C7: mov     rdi, 7010008004002001h
 * 0000000140BB45D1: mov     r12d, 0FFFFFFFFh
 * 0000000140BB45D7: mov     eax, 8
 * 0000000140BB45DC: xor     r8, [r10]
 * 0000000140BB45DF: mov     ecx, r11d
 * 0000000140BB45E2: rol     r8, cl
 * 0000000140BB45E5: xor     r8, [r10+8]
 * 0000000140BB45E9: add     r10, 10h
 * 0000000140BB45ED: rol     r8, cl
 * 0000000140BB45F0: sub     rax, rsi
 * 0000000140BB45F3: jnz     short loc_140BB45DC
 * 0000000140BB45F5: mov     rcx, r10
 * 0000000140BB45F8: sub     rcx, r14
 * 0000000140BB45FB: xor     rcx, r15
 * 0000000140BB45FE: mov     rax, rcx
 * 0000000140BB4601: rol     rax, 11h
 * 0000000140BB4605: xor     rcx, rax
 * 0000000140BB4608: mov     rax, rdi
 * 0000000140BB460B: mul     rcx
 * 0000000140BB460E: xor     r11d, edx
 * 0000000140BB4611: mov     [rbp+8D0h+var_5E8], rdx
 * 0000000140BB4618: xor     r11d, eax
 * 0000000140BB461B: and     r11d, 3Fh
 * 0000000140BB461F: cmovz   r11d, esi
 * 0000000140BB4623: add     ebx, r12d
 * 0000000140BB4626: jnz     short loc_140BB45D7
 * 0000000140BB4628: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB462D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB4634: mov     r12, [rbp+8D0h+var_8D8]
 * 0000000140BB4638: and     r9d, 7Fh
 * 0000000140BB463C: mov     ebx, 1
 * 0000000140BB4641: cmp     r9d, 8
 * 0000000140BB4645: jb      short loc_140BB4664
 * 0000000140BB4647: mov     eax, r9d
 * 0000000140BB464A: shr     rax, 3
 * 0000000140BB464E: xor     r8, [r10]
 * 0000000140BB4651: mov     ecx, r11d
 * 0000000140BB4654: rol     r8, cl
 * 0000000140BB4657: add     r10, 8
 * 0000000140BB465B: add     r9d, 0FFFFFFF8h
 * 0000000140BB465F: sub     rax, rbx
 * 0000000140BB4662: jnz     short loc_140BB464E
 * 0000000140BB4664: test    r9d, r9d
 * 0000000140BB4667: jz      short loc_140BB4688
 * 0000000140BB4669: mov     r12d, 0FFFFFFFFh
 * 0000000140BB466F: movzx   eax, byte ptr [r10]
 * 0000000140BB4673: mov     ecx, r11d
 * 0000000140BB4676: xor     r8, rax
 * 0000000140BB4679: add     r10, rbx
 * 0000000140BB467C: rol     r8, cl
 * 0000000140BB467F: add     r9d, r12d
 * 0000000140BB4682: jnz     short loc_140BB466F
 * 0000000140BB4684: mov     r12, [rbp+8D0h+var_8D8]
 * 0000000140BB4688: mov     rax, r8
 * 0000000140BB468B: shr     rax, 1Fh
 * 0000000140BB468F: xor     r9d, r9d
 * 0000000140BB4692: jmp     short loc_140BB469B
 * 0000000140BB4694: xor     r8d, eax
 * 0000000140BB4697: shr     rax, 1Fh
 * 0000000140BB469B: test    rax, rax
 * 0000000140BB469E: jnz     short loc_140BB4694
 * 0000000140BB46A0: btr     r8d, 1Fh
 * 0000000140BB46A5: mov     r10d, r9d
 * 0000000140BB46A8: mov     [r13+14h], r8d
 * 0000000140BB46AC: mov     rax, [rbp+8D0h+var_8A0]
 * 0000000140BB46B0: mov     r14, [rax+50h]
 * 0000000140BB46B4: test    r14, r14
 * 0000000140BB46B7: jz      short loc_140BB472E
 * 0000000140BB46B9: mov     r10d, [r14]
 * 0000000140BB46BC: mov     dl, r9b
 * 0000000140BB46BF: lea     r8d, [r10-8]
 * 0000000140BB46C3: shr     r8d, 3
 * 0000000140BB46C7: test    r8d, r8d
 * 0000000140BB46CA: jz      short loc_140BB472E
 * 0000000140BB46CC: mov     r11d, [rbp+8D0h+var_8F8]
 * 0000000140BB46D0: mov     rbx, [rbp+8D0h+var_8F0]
 * 0000000140BB46D4: mov     r15d, [rbp+8D0h+var_8C8]
 * 0000000140BB46D8: movzx   eax, dl
 * 0000000140BB46DB: mov     rcx, [r14+rax*8+8]
 * 0000000140BB46E0: test    rcx, rcx
 * 0000000140BB46E3: jz      short loc_140BB4723
 * 0000000140BB46E5: test    r11, r11
 * 0000000140BB46E8: jz      short loc_140BB46FB
 * 0000000140BB46EA: lea     rax, [r11-1]
 * 0000000140BB46EE: add     rax, r12
 * 0000000140BB46F1: cmp     rcx, r12
 * 0000000140BB46F4: jb      short loc_140BB46FB
 * 0000000140BB46F6: cmp     rcx, rax
 * 0000000140BB46F9: jbe     short loc_140BB4723
 * 0000000140BB46FB: mov     rax, r15
 * 0000000140BB46FE: test    r15d, r15d
 * 0000000140BB4701: jz      loc_140BB47E2
 * 0000000140BB4707: lea     r9, [rbx-1]
 * 0000000140BB470B: add     r9, rax
 * 0000000140BB470E: cmp     rcx, rbx
 * 0000000140BB4711: jb      loc_140BB47E2
 * 0000000140BB4717: cmp     rcx, r9
 * 0000000140BB471A: ja      loc_140BB47E2
 * 0000000140BB4720: xor     r9d, r9d
 * 0000000140BB4723: add     dl, 1
 * 0000000140BB4726: movzx   eax, dl
 * 0000000140BB4729: cmp     eax, r8d
 * 0000000140BB472C: jb      short loc_140BB46D8
 * 0000000140BB472E: add     [rsi+848h], r10d
 * 0000000140BB4735: mov     r9, r14
 * 0000000140BB4738: mov     ebx, [rsi+834h]
 * 0000000140BB473E: mov     rax, r14
 * 0000000140BB4741: mov     r15, [rsi+838h]
 * 0000000140BB4748: mov     ecx, r10d
 * 0000000140BB474B: add     rcx, r14
 * 0000000140BB474E: cmp     r14, rcx
 * 0000000140BB4751: jnb     short loc_140BB4763
 * 0000000140BB4753: mov     edx, 40h ; '@'
 * 0000000140BB4758: prefetchnta byte ptr [rax]
 * 0000000140BB475B: add     rax, rdx
 * 0000000140BB475E: cmp     rax, rcx
 * 0000000140BB4761: jb      short loc_140BB4758
 * 0000000140BB4763: mov     r11d, r10d
 * 0000000140BB4766: mov     r8, r15
 * 0000000140BB4769: shr     r11d, 7
 * 0000000140BB476D: mov     r12d, 1
 * 0000000140BB4773: test    r11d, r11d
 * 0000000140BB4776: jz      loc_140BB48CA
 * 0000000140BB477C: mov     rsi, 7010008004002001h
 * 0000000140BB4786: mov     eax, 8
 * 0000000140BB478B: xor     r8, [r9]
 * 0000000140BB478E: mov     ecx, ebx
 * 0000000140BB4790: rol     r8, cl
 * 0000000140BB4793: xor     r8, [r9+8]
 * 0000000140BB4797: add     r9, 10h
 * 0000000140BB479B: rol     r8, cl
 * 0000000140BB479E: sub     rax, r12
 * 0000000140BB47A1: jnz     short loc_140BB478B
 * 0000000140BB47A3: mov     rcx, r9
 * 0000000140BB47A6: sub     rcx, r14
 * 0000000140BB47A9: xor     rcx, r15
 * 0000000140BB47AC: mov     rax, rcx
 * 0000000140BB47AF: rol     rax, 11h
 * 0000000140BB47B3: xor     rcx, rax
 * 0000000140BB47B6: mov     rax, rsi
 * 0000000140BB47B9: mul     rcx
 * 0000000140BB47BC: xor     eax, edx
 * 0000000140BB47BE: mov     [rbp+8D0h+var_5E0], rdx
 * 0000000140BB47C5: xor     ebx, eax
 * 0000000140BB47C7: mov     edx, 0FFFFFFFFh
 * 0000000140BB47CC: and     ebx, 3Fh
 * 0000000140BB47CF: cmovz   ebx, r12d
 * 0000000140BB47D3: add     r11d, edx
 * 0000000140BB47D6: jnz     short loc_140BB4786
 * 0000000140BB47D8: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB47DD: jmp     loc_140BB48CF
 * 0000000140BB47E2: mov     [r13+20h], rcx
 * 0000000140BB47E6: xor     r15d, r15d
 * 0000000140BB47E9: mov     rax, [rsi+588h]
 * 0000000140BB47F0: lea     ebx, [r15+1]
 * 0000000140BB47F4: mov     [rax], r13
 * 0000000140BB47F7: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BB47FE: cmp     [rsi+918h], r15d
 * 0000000140BB4805: jnz     loc_140BB2B5D
 * 0000000140BB480B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB4815: add     rax, rsi
 * 0000000140BB4818: mov     [rsi+920h], rax
 * 0000000140BB481F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB4829: add     rax, r13
 * 0000000140BB482C: mov     [rsi+928h], rax
 * 0000000140BB4833: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB4837: mov     [rsi+930h], rax
 * 0000000140BB483E: mov     [rsi+938h], r14
 * 0000000140BB4845: mov     [rsi+918h], ebx
 * 0000000140BB484B: mov     ecx, [rsi+9D8h]
 * 0000000140BB4851: bt      ecx, 1Dh
 * 0000000140BB4855: jb      loc_140BB2B5D
 * 0000000140BB485B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB4865: jz      loc_140BB2B5D
 * 0000000140BB486B: test    bl, cl
 * 0000000140BB486D: jz      loc_140BB2B5D
 * 0000000140BB4873: mov     ecx, [rsi+0A74h]
 * 0000000140BB4879: mov     eax, [rsi+804h]
 * 0000000140BB487F: mov     r10, [rsi+838h]
 * 0000000140BB4886: sub     eax, ecx
 * 0000000140BB4888: mov     r8, [rsi+0A78h]
 * 0000000140BB488F: lea     rdx, [rcx+rsi]
 * 0000000140BB4893: mov     ecx, eax
 * 0000000140BB4895: shr     rcx, 3
 * 0000000140BB4899: lea     r9, [rdx+rcx*8]
 * 0000000140BB489D: jmp     short loc_140BB48C0
 * 0000000140BB489F: xor     [rdx], r8
 * 0000000140BB48A2: mov     rax, [rdx]
 * 0000000140BB48A5: movzx   ecx, r8b
 * 0000000140BB48A9: xor     rax, r10
 * 0000000140BB48AC: and     ecx, 3Fh
 * 0000000140BB48AF: ror     r8, cl
 * 0000000140BB48B2: add     r8, rax
 * 0000000140BB48B5: xor     r8, 0EFAh
 * 0000000140BB48BC: add     rdx, 8
 * 0000000140BB48C0: cmp     rdx, r9
 * 0000000140BB48C3: jnz     short loc_140BB489F
 * 0000000140BB48C5: jmp     loc_140BB3A63
 * 0000000140BB48CA: mov     edx, 0FFFFFFFFh
 * 0000000140BB48CF: and     r10d, 7Fh
 * 0000000140BB48D3: cmp     r10d, 8
 * 0000000140BB48D7: jb      short loc_140BB48F5
 * 0000000140BB48D9: mov     eax, r10d
 * 0000000140BB48DC: shr     rax, 3
 * 0000000140BB48E0: xor     r8, [r9]
 * 0000000140BB48E3: mov     ecx, ebx
 * 0000000140BB48E5: rol     r8, cl
 * 0000000140BB48E8: add     r9, 8
 * 0000000140BB48EC: add     r10d, 0FFFFFFF8h
 * 0000000140BB48F0: sub     rax, r12
 * 0000000140BB48F3: jnz     short loc_140BB48E0
 * 0000000140BB48F5: xor     r15d, r15d
 * 0000000140BB48F8: test    r10d, r10d
 * 0000000140BB48FB: jz      short loc_140BB4911
 * 0000000140BB48FD: movzx   eax, byte ptr [r9]
 * 0000000140BB4901: mov     ecx, ebx
 * 0000000140BB4903: xor     r8, rax
 * 0000000140BB4906: add     r9, r12
 * 0000000140BB4909: rol     r8, cl
 * 0000000140BB490C: add     r10d, edx
 * 0000000140BB490F: jnz     short loc_140BB48FD
 * 0000000140BB4911: mov     rax, r8
 * 0000000140BB4914: jmp     short loc_140BB4919
 * 0000000140BB4916: xor     r8d, eax
 * 0000000140BB4919: shr     rax, 1Fh
 * 0000000140BB491D: test    rax, rax
 * 0000000140BB4920: jnz     short loc_140BB4916
 * 0000000140BB4922: btr     r8d, 1Fh
 * 0000000140BB4927: mov     [r13+2Ch], r8d
 * 0000000140BB492B: jmp     loc_140BB2B58
 * 0000000140BB4930: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BB4938: mov     ebx, 1
 * 0000000140BB493D: jnb     short loc_140BB4989
 * 0000000140BB493F: mov     rcx, [rsi+0AC8h]
 * 0000000140BB4946: lea     edx, [rbx+2Fh]
 * 0000000140BB4949: lea     r8d, [rbx+5]
 * 0000000140BB494D: mov     rax, [r13+0]
 * 0000000140BB4951: add     edx, 0FFFFFFF8h
 * 0000000140BB4954: mov     [rcx], rax
 * 0000000140BB4957: add     r13, 8
 * 0000000140BB495B: add     rcx, 8
 * 0000000140BB495F: sub     r8, rbx
 * 0000000140BB4962: jnz     short loc_140BB494D
 * 0000000140BB4964: test    edx, edx
 * 0000000140BB4966: jz      short loc_140BB4982
 * 0000000140BB4968: mov     esi, 0FFFFFFFFh
 * 0000000140BB496D: mov     al, [r13+0]
 * 0000000140BB4971: add     r13, rbx
 * 0000000140BB4974: mov     [rcx], al
 * 0000000140BB4976: add     rcx, rbx
 * 0000000140BB4979: add     edx, esi
 * 0000000140BB497B: jnz     short loc_140BB496D
 * 0000000140BB497D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB4982: mov     r13, [rsi+0AC8h]
 * 0000000140BB4989: mov     [r13+20h], r9
 * 0000000140BB498D: mov     rax, [rsi+588h]
 * 0000000140BB4994: mov     [rax], r13
 * 0000000140BB4997: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BB499E: mov     rcx, [r13+8]
 * 0000000140BB49A2: cmp     [rsi+918h], r15d
 * 0000000140BB49A9: jnz     loc_140BB2B5D
 * 0000000140BB49AF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB49B9: add     rax, rsi
 * 0000000140BB49BC: mov     [rsi+920h], rax
 * 0000000140BB49C3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB49CD: add     rax, r13
 * 0000000140BB49D0: mov     [rsi+928h], rax
 * 0000000140BB49D7: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB49DB: mov     [rsi+930h], rax
 * 0000000140BB49E2: mov     [rsi+938h], rcx
 * 0000000140BB49E9: mov     [rsi+918h], ebx
 * 0000000140BB49EF: mov     ecx, [rsi+9D8h]
 * 0000000140BB49F5: bt      ecx, 1Dh
 * 0000000140BB49F9: jb      loc_140BB2B5D
 * 0000000140BB49FF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB4A09: jz      loc_140BB2B5D
 * 0000000140BB4A0F: test    bl, cl
 * 0000000140BB4A11: jz      loc_140BB2B5D
 * 0000000140BB4A17: mov     ecx, [rsi+0A74h]
 * 0000000140BB4A1D: mov     eax, [rsi+804h]
 * 0000000140BB4A23: mov     r10, [rsi+838h]
 * 0000000140BB4A2A: sub     eax, ecx
 * 0000000140BB4A2C: mov     r8, [rsi+0A78h]
 * 0000000140BB4A33: lea     rdx, [rcx+rsi]
 * 0000000140BB4A37: mov     ecx, eax
 * 0000000140BB4A39: shr     rcx, 3
 * 0000000140BB4A3D: lea     r9, [rdx+rcx*8]
 * 0000000140BB4A41: jmp     short loc_140BB4A64
 * 0000000140BB4A43: xor     [rdx], r8
 * 0000000140BB4A46: mov     rax, [rdx]
 * 0000000140BB4A49: movzx   ecx, r8b
 * 0000000140BB4A4D: xor     rax, r10
 * 0000000140BB4A50: and     ecx, 3Fh
 * 0000000140BB4A53: ror     r8, cl
 * 0000000140BB4A56: add     r8, rax
 * 0000000140BB4A59: xor     r8, 0EFAh
 * 0000000140BB4A60: add     rdx, 8
 * 0000000140BB4A64: cmp     rdx, r9
 * 0000000140BB4A67: jnz     short loc_140BB4A43
 * 0000000140BB4A69: jmp     loc_140BB3A63
 * 0000000140BB4A6E: mov     r14, [r13+8]
 * 0000000140BB4A72: mov     r8d, [r13+10h]
 * 0000000140BB4A76: mov     r9, r14
 * 0000000140BB4A79: add     [rsi+848h], r8d
 * 0000000140BB4A80: mov     rax, r14
 * 0000000140BB4A83: mov     r10d, [rsi+834h]
 * 0000000140BB4A8A: mov     r15, [rsi+838h]
 * 0000000140BB4A91: lea     rcx, [r14+r8]
 * 0000000140BB4A95: cmp     r14, rcx
 * 0000000140BB4A98: jnb     short loc_140BB4AAA
 * 0000000140BB4A9A: mov     edx, 40h ; '@'
 * 0000000140BB4A9F: prefetchnta byte ptr [rax]
 * 0000000140BB4AA2: add     rax, rdx
 * 0000000140BB4AA5: cmp     rax, rcx
 * 0000000140BB4AA8: jb      short loc_140BB4A9F
 * 0000000140BB4AAA: mov     r11d, r8d
 * 0000000140BB4AAD: mov     rbx, r15
 * 0000000140BB4AB0: shr     r11d, 7
 * 0000000140BB4AB4: mov     edx, 1
 * 0000000140BB4AB9: mov     r12d, 0FFFFFFFFh
 * 0000000140BB4ABF: test    r11d, r11d
 * 0000000140BB4AC2: jz      short loc_140BB4B29
 * 0000000140BB4AC4: mov     rsi, 7010008004002001h
 * 0000000140BB4ACE: mov     eax, 8
 * 0000000140BB4AD3: xor     rbx, [r9]
 * 0000000140BB4AD6: mov     ecx, r10d
 * 0000000140BB4AD9: rol     rbx, cl
 * 0000000140BB4ADC: xor     rbx, [r9+8]
 * 0000000140BB4AE0: add     r9, 10h
 * 0000000140BB4AE4: rol     rbx, cl
 * 0000000140BB4AE7: sub     rax, rdx
 * 0000000140BB4AEA: jnz     short loc_140BB4AD3
 * 0000000140BB4AEC: mov     rcx, r9
 * 0000000140BB4AEF: sub     rcx, r14
 * 0000000140BB4AF2: xor     rcx, r15
 * 0000000140BB4AF5: mov     rax, rcx
 * 0000000140BB4AF8: rol     rax, 11h
 * 0000000140BB4AFC: xor     rcx, rax
 * 0000000140BB4AFF: mov     rax, rsi
 * 0000000140BB4B02: mul     rcx
 * 0000000140BB4B05: xor     r10d, edx
 * 0000000140BB4B08: mov     [rbp+8D0h+var_5D8], rdx
 * 0000000140BB4B0F: xor     r10d, eax
 * 0000000140BB4B12: mov     edx, 1
 * 0000000140BB4B17: and     r10d, 3Fh
 * 0000000140BB4B1B: cmovz   r10d, edx
 * 0000000140BB4B1F: add     r11d, r12d
 * 0000000140BB4B22: jnz     short loc_140BB4ACE
 * 0000000140BB4B24: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB4B29: and     r8d, 7Fh
 * 0000000140BB4B2D: cmp     r8d, 8
 * 0000000140BB4B31: jb      short loc_140BB4B50
 * 0000000140BB4B33: mov     eax, r8d
 * 0000000140BB4B36: shr     rax, 3
 * 0000000140BB4B3A: xor     rbx, [r9]
 * 0000000140BB4B3D: mov     ecx, r10d
 * 0000000140BB4B40: rol     rbx, cl
 * 0000000140BB4B43: add     r9, 8
 * 0000000140BB4B47: add     r8d, 0FFFFFFF8h
 * 0000000140BB4B4B: sub     rax, rdx
 * 0000000140BB4B4E: jnz     short loc_140BB4B3A
 * 0000000140BB4B50: xor     r15d, r15d
 * 0000000140BB4B53: test    r8d, r8d
 * 0000000140BB4B56: jz      short loc_140BB4B6D
 * 0000000140BB4B58: movzx   eax, byte ptr [r9]
 * 0000000140BB4B5C: mov     ecx, r10d
 * 0000000140BB4B5F: xor     rbx, rax
 * 0000000140BB4B62: add     r9, rdx
 * 0000000140BB4B65: rol     rbx, cl
 * 0000000140BB4B68: add     r8d, r12d
 * 0000000140BB4B6B: jnz     short loc_140BB4B58
 * 0000000140BB4B6D: mov     rax, rbx
 * 0000000140BB4B70: jmp     short loc_140BB4B74
 * 0000000140BB4B72: xor     ebx, eax
 * 0000000140BB4B74: shr     rax, 1Fh
 * 0000000140BB4B78: test    rax, rax
 * 0000000140BB4B7B: jnz     short loc_140BB4B72
 * 0000000140BB4B7D: btr     ebx, 1Fh
 * 0000000140BB4B81: mov     r12d, r15d
 * 0000000140BB4B84: cmp     ebx, [r13+14h]
 * 0000000140BB4B88: jz      loc_140BB4C59
 * 0000000140BB4B8E: cmp     [r13+0], r15d
 * 0000000140BB4B92: jnz     short loc_140BB4B9C
 * 0000000140BB4B94: cmp     [r13+18h], r15d
 * 0000000140BB4B98: cmovnz  r12d, edx
 * 0000000140BB4B9C: mov     ecx, [r13+10h]
 * 0000000140BB4BA0: mov     rdx, [r13+8]
 * 0000000140BB4BA4: test    rcx, rcx
 * 0000000140BB4BA7: jz      loc_140BB4D3A
 * 0000000140BB4BAD: mov     eax, [rsi+9DCh]
 * 0000000140BB4BB3: mov     r8d, 40h ; '@'
 * 0000000140BB4BB9: test    r8b, al
 * 0000000140BB4BBC: jz      loc_140BB4D3A
 * 0000000140BB4BC2: mov     r15, cr8
 * 0000000140BB4BC6: lea     eax, [r8-3Eh]
 * 0000000140BB4BCA: mov     cr8, rax
 * 0000000140BB4BCE: mov     r14, rdx
 * 0000000140BB4BD1: lea     rax, [rcx-1]
 * 0000000140BB4BD5: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BB4BDC: add     rax, rdx
 * 0000000140BB4BDF: or      rax, 0FFFh
 * 0000000140BB4BE5: mov     [rsp+9D0h+var_978], rax
 * 0000000140BB4BEA: lea     r13, [r14-1]
 * 0000000140BB4BEE: mov     rax, [rsi+468h]
 * 0000000140BB4BF5: xor     edx, edx
 * 0000000140BB4BF7: mov     rcx, r14
 * 0000000140BB4BFA: call    KeGuardDispatchICall
 * 0000000140BB4BFF: cmp     eax, 0C000022Dh
 * 0000000140BB4C04: jnz     short loc_140BB4C2F
 * 0000000140BB4C06: test    r12d, r12d
 * 0000000140BB4C09: jnz     loc_140BB4D2A
 * 0000000140BB4C0F: lea     eax, [r12+1]
 * 0000000140BB4C14: cmp     r15b, al
 * 0000000140BB4C17: ja      short loc_140BB4C37
 * 0000000140BB4C19: movzx   eax, r15b
 * 0000000140BB4C1D: mov     cr8, rax
 * 0000000140BB4C21: mov     al, [r14]
 * 0000000140BB4C24: lea     eax, [r12+2]
 * 0000000140BB4C29: mov     cr8, rax
 * 0000000140BB4C2D: jmp     short loc_140BB4BEE
 * 0000000140BB4C2F: test    eax, eax
 * 0000000140BB4C31: js      loc_140BB4D2A
 * 0000000140BB4C37: mov     eax, 1000h
 * 0000000140BB4C3C: add     r14, rax
 * 0000000140BB4C3F: add     r13, rax
 * 0000000140BB4C42: cmp     r13, [rsp+9D0h+var_978]
 * 0000000140BB4C47: jnz     short loc_140BB4BEE
 * 0000000140BB4C49: movzx   eax, r15b
 * 0000000140BB4C4D: mov     cr8, rax
 * 0000000140BB4C51: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB4C56: xor     r15d, r15d
 * 0000000140BB4C59: mov     r12d, 1
 * 0000000140BB4C5F: mov     rax, [r13+8]
 * 0000000140BB4C63: mov     r9d, r15d
 * 0000000140BB4C66: add     rax, 0FFFFFFFFFFFFFF90h
 * 0000000140BB4C6A: mov     [rbp+8D0h+var_8A0], rax
 * 0000000140BB4C6E: mov     r14, [rax+50h]
 * 0000000140BB4C72: test    r14, r14
 * 0000000140BB4C75: jz      short loc_140BB4C7A
 * 0000000140BB4C77: mov     r9d, [r14]
 * 0000000140BB4C7A: add     [rsi+848h], r9d
 * 0000000140BB4C81: mov     r10, r14
 * 0000000140BB4C84: mov     r11d, [rsi+834h]
 * 0000000140BB4C8B: mov     rax, r14
 * 0000000140BB4C8E: mov     r15, [rsi+838h]
 * 0000000140BB4C95: mov     ecx, r9d
 * 0000000140BB4C98: add     rcx, r14
 * 0000000140BB4C9B: cmp     r14, rcx
 * 0000000140BB4C9E: jnb     short loc_140BB4CB0
 * 0000000140BB4CA0: mov     edx, 40h ; '@'
 * 0000000140BB4CA5: prefetchnta byte ptr [rax]
 * 0000000140BB4CA8: add     rax, rdx
 * 0000000140BB4CAB: cmp     rax, rcx
 * 0000000140BB4CAE: jb      short loc_140BB4CA5
 * 0000000140BB4CB0: mov     ebx, r9d
 * 0000000140BB4CB3: mov     r8, r15
 * 0000000140BB4CB6: shr     ebx, 7
 * 0000000140BB4CB9: test    ebx, ebx
 * 0000000140BB4CBB: jz      loc_140BB4E85
 * 0000000140BB4CC1: mov     rsi, 7010008004002001h
 * 0000000140BB4CCB: mov     eax, 8
 * 0000000140BB4CD0: xor     r8, [r10]
 * 0000000140BB4CD3: mov     ecx, r11d
 * 0000000140BB4CD6: rol     r8, cl
 * 0000000140BB4CD9: xor     r8, [r10+8]
 * 0000000140BB4CDD: add     r10, 10h
 * 0000000140BB4CE1: rol     r8, cl
 * 0000000140BB4CE4: sub     rax, r12
 * 0000000140BB4CE7: jnz     short loc_140BB4CD0
 * 0000000140BB4CE9: mov     rcx, r10
 * 0000000140BB4CEC: sub     rcx, r14
 * 0000000140BB4CEF: xor     rcx, r15
 * 0000000140BB4CF2: mov     rax, rcx
 * 0000000140BB4CF5: rol     rax, 11h
 * 0000000140BB4CF9: xor     rcx, rax
 * 0000000140BB4CFC: mov     rax, rsi
 * 0000000140BB4CFF: mul     rcx
 * 0000000140BB4D02: xor     r11d, edx
 * 0000000140BB4D05: mov     [rbp+8D0h+var_5D0], rdx
 * 0000000140BB4D0C: xor     r11d, eax
 * 0000000140BB4D0F: mov     edx, 0FFFFFFFFh
 * 0000000140BB4D14: and     r11d, 3Fh
 * 0000000140BB4D18: cmovz   r11d, r12d
 * 0000000140BB4D1C: add     ebx, edx
 * 0000000140BB4D1E: jnz     short loc_140BB4CCB
 * 0000000140BB4D20: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB4D25: jmp     loc_140BB4E8A
 * 0000000140BB4D2A: movzx   eax, r15b
 * 0000000140BB4D2E: mov     cr8, rax
 * 0000000140BB4D32: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB4D37: xor     r15d, r15d
 * 0000000140BB4D3A: mov     eax, [r13+14h]
 * 0000000140BB4D3E: cmp     [rsi+918h], r15d
 * 0000000140BB4D45: jnz     short loc_140BB4D57
 * 0000000140BB4D47: mov     ecx, ebx
 * 0000000140BB4D49: xor     rcx, rax
 * 0000000140BB4D4C: mov     rax, [rsi+588h]
 * 0000000140BB4D53: mov     [rax+18h], rcx
 * 0000000140BB4D57: mov     r12d, 1
 * 0000000140BB4D5D: mov     rcx, [r13+8]
 * 0000000140BB4D61: cmp     [rsi+918h], r15d
 * 0000000140BB4D68: jnz     loc_140BB4C5F
 * 0000000140BB4D6E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB4D78: add     rax, rsi
 * 0000000140BB4D7B: mov     [rsi+920h], rax
 * 0000000140BB4D82: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB4D8C: add     rax, r13
 * 0000000140BB4D8F: mov     [rsi+928h], rax
 * 0000000140BB4D96: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB4D9A: mov     [rsi+930h], rax
 * 0000000140BB4DA1: mov     [rsi+938h], rcx
 * 0000000140BB4DA8: mov     [rsi+918h], r12d
 * 0000000140BB4DAF: mov     ecx, [rsi+9D8h]
 * 0000000140BB4DB5: bt      ecx, 1Dh
 * 0000000140BB4DB9: jb      loc_140BB4C5F
 * 0000000140BB4DBF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB4DC9: jz      loc_140BB4C5F
 * 0000000140BB4DCF: test    r12b, cl
 * 0000000140BB4DD2: jz      loc_140BB4C5F
 * 0000000140BB4DD8: mov     ecx, [rsi+0A74h]
 * 0000000140BB4DDE: mov     eax, [rsi+804h]
 * 0000000140BB4DE4: mov     r10, [rsi+838h]
 * 0000000140BB4DEB: sub     eax, ecx
 * 0000000140BB4DED: mov     r8, [rsi+0A78h]
 * 0000000140BB4DF4: lea     rdx, [rcx+rsi]
 * 0000000140BB4DF8: mov     ecx, eax
 * 0000000140BB4DFA: shr     rcx, 3
 * 0000000140BB4DFE: lea     r9, [rdx+rcx*8]
 * 0000000140BB4E02: jmp     short loc_140BB4E25
 * 0000000140BB4E04: xor     [rdx], r8
 * 0000000140BB4E07: mov     rax, [rdx]
 * 0000000140BB4E0A: movzx   ecx, r8b
 * 0000000140BB4E0E: xor     rax, r10
 * 0000000140BB4E11: and     ecx, 3Fh
 * 0000000140BB4E14: ror     r8, cl
 * 0000000140BB4E17: add     r8, rax
 * 0000000140BB4E1A: xor     r8, 0EFAh
 * 0000000140BB4E21: add     rdx, 8
 * 0000000140BB4E25: cmp     rdx, r9
 * 0000000140BB4E28: jnz     short loc_140BB4E04
 * 0000000140BB4E2A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB4E32: cmp     r8, [rsi+0A80h]
 * 0000000140BB4E39: jz      loc_140BB4C5F
 * 0000000140BB4E3F: mov     ecx, [rsi+804h]
 * 0000000140BB4E45: mov     rax, [rsi+588h]
 * 0000000140BB4E4C: mov     [rax], rsi
 * 0000000140BB4E4F: mov     [rax+10h], ecx
 * 0000000140BB4E52: mov     rcx, [rsi+0A80h]
 * 0000000140BB4E59: cmp     [rsi+918h], r15d
 * 0000000140BB4E60: jnz     short loc_140BB4E70
 * 0000000140BB4E62: mov     rax, [rsi+588h]
 * 0000000140BB4E69: xor     rcx, r8
 * 0000000140BB4E6C: mov     [rax+18h], rcx
 * 0000000140BB4E70: xor     edx, edx
 * 0000000140BB4E72: mov     r9d, 100h
 * 0000000140BB4E78: mov     rcx, rsi
 * 0000000140BB4E7B: call    sub_140BC7384
 * 0000000140BB4E80: jmp     loc_140BB4C5F
 * 0000000140BB4E85: mov     edx, 0FFFFFFFFh
 * 0000000140BB4E8A: and     r9d, 7Fh
 * 0000000140BB4E8E: mov     ebx, 1
 * 0000000140BB4E93: cmp     r9d, 8
 * 0000000140BB4E97: jb      short loc_140BB4EB6
 * 0000000140BB4E99: mov     eax, r9d
 * 0000000140BB4E9C: shr     rax, 3
 * 0000000140BB4EA0: xor     r8, [r10]
 * 0000000140BB4EA3: mov     ecx, r11d
 * 0000000140BB4EA6: rol     r8, cl
 * 0000000140BB4EA9: add     r10, 8
 * 0000000140BB4EAD: add     r9d, 0FFFFFFF8h
 * 0000000140BB4EB1: sub     rax, rbx
 * 0000000140BB4EB4: jnz     short loc_140BB4EA0
 * 0000000140BB4EB6: xor     r15d, r15d
 * 0000000140BB4EB9: test    r9d, r9d
 * 0000000140BB4EBC: jz      short loc_140BB4ED3
 * 0000000140BB4EBE: movzx   eax, byte ptr [r10]
 * 0000000140BB4EC2: mov     ecx, r11d
 * 0000000140BB4EC5: xor     r8, rax
 * 0000000140BB4EC8: add     r10, rbx
 * 0000000140BB4ECB: rol     r8, cl
 * 0000000140BB4ECE: add     r9d, edx
 * 0000000140BB4ED1: jnz     short loc_140BB4EBE
 * 0000000140BB4ED3: mov     rax, r8
 * 0000000140BB4ED6: jmp     short loc_140BB4EDB
 * 0000000140BB4ED8: xor     r8d, eax
 * 0000000140BB4EDB: shr     rax, 1Fh
 * 0000000140BB4EDF: test    rax, rax
 * 0000000140BB4EE2: jnz     short loc_140BB4ED8
 * 0000000140BB4EE4: mov     eax, [r13+2Ch]
 * 0000000140BB4EE8: btr     r8d, 1Fh
 * 0000000140BB4EED: cmp     r8d, eax
 * 0000000140BB4EF0: jz      loc_140BB2B5D
 * 0000000140BB4EF6: cmp     [rsi+918h], r15d
 * 0000000140BB4EFD: jnz     loc_140BB2B5D
 * 0000000140BB4F03: mov     ecx, r8d
 * 0000000140BB4F06: xor     rcx, rax
 * 0000000140BB4F09: mov     rax, [rsi+588h]
 * 0000000140BB4F10: mov     [rax+18h], rcx
 * 0000000140BB4F14: cmp     [rsi+918h], r15d
 * 0000000140BB4F1B: jnz     loc_140BB2B5D
 * 0000000140BB4F21: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB4F2B: add     rax, rsi
 * 0000000140BB4F2E: mov     [rsi+920h], rax
 * 0000000140BB4F35: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB4F3F: add     rax, r13
 * 0000000140BB4F42: mov     [rsi+928h], rax
 * 0000000140BB4F49: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB4F4D: mov     [rsi+930h], rax
 * 0000000140BB4F54: mov     [rsi+938h], r14
 * 0000000140BB4F5B: mov     [rsi+918h], ebx
 * 0000000140BB4F61: mov     ecx, [rsi+9D8h]
 * 0000000140BB4F67: bt      ecx, 1Dh
 * 0000000140BB4F6B: jb      loc_140BB2B5D
 * 0000000140BB4F71: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB4F7B: jz      loc_140BB2B5D
 * 0000000140BB4F81: test    bl, cl
 * 0000000140BB4F83: jz      loc_140BB2B5D
 * 0000000140BB4F89: mov     ecx, [rsi+0A74h]
 * 0000000140BB4F8F: mov     eax, [rsi+804h]
 * 0000000140BB4F95: mov     r10, [rsi+838h]
 * 0000000140BB4F9C: sub     eax, ecx
 * 0000000140BB4F9E: mov     r8, [rsi+0A78h]
 * 0000000140BB4FA5: lea     rdx, [rcx+rsi]
 * 0000000140BB4FA9: mov     ecx, eax
 * 0000000140BB4FAB: shr     rcx, 3
 * 0000000140BB4FAF: lea     r9, [rdx+rcx*8]
 * 0000000140BB4FB3: jmp     short loc_140BB4FD6
 * 0000000140BB4FB5: xor     [rdx], r8
 * 0000000140BB4FB8: mov     rax, [rdx]
 * 0000000140BB4FBB: movzx   ecx, r8b
 * 0000000140BB4FBF: xor     rax, r10
 * 0000000140BB4FC2: and     ecx, 3Fh
 * 0000000140BB4FC5: ror     r8, cl
 * 0000000140BB4FC8: add     r8, rax
 * 0000000140BB4FCB: xor     r8, 0EFAh
 * 0000000140BB4FD2: add     rdx, 8
 * 0000000140BB4FD6: cmp     rdx, r9
 * 0000000140BB4FD9: jnz     short loc_140BB4FB5
 * 0000000140BB4FDB: jmp     loc_140BB3A63
 * 0000000140BB4FE0: mov     eax, [rsi+850h]
 * 0000000140BB4FE6: test    bl, al
 * 0000000140BB4FE8: jz      loc_140BB1FAF
 * 0000000140BB4FEE: mov     r14, [rsi+5A0h]
 * 0000000140BB4FF5: mov     r13, [rsi+5A8h]
 * 0000000140BB4FFC: mov     rax, [rsi+188h]
 * 0000000140BB5003: mov     rbx, [rsi+540h]
 * 0000000140BB500A: mov     [rbp+8D0h+var_940], r14
 * 0000000140BB500E: mov     [rsp+9D0h+var_978], r13
 * 0000000140BB5013: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BB501A: call    KeGuardDispatchICall
 * 0000000140BB501F: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB5029: jnz     short loc_140BB5044
 * 0000000140BB502B: mov     ecx, [rsi+978h]
 * 0000000140BB5031: cmp     ecx, 7
 * 0000000140BB5034: jnb     short loc_140BB5044
 * 0000000140BB5036: mov     r12d, 1
 * 0000000140BB503C: mov     r15d, r12d
 * 0000000140BB503F: shl     r15b, cl
 * 0000000140BB5042: jmp     short loc_140BB5062
 * 0000000140BB5044: mov     rax, [rsi+138h]
 * 0000000140BB504B: xor     edx, edx
 * 0000000140BB504D: mov     rcx, [rsi+0A48h]
 * 0000000140BB5054: call    KeGuardDispatchICall
 * 0000000140BB5059: mov     r15b, 80h
 * 0000000140BB505C: mov     r12d, 1
 * 0000000140BB5062: mov     rax, [rsi+148h]
 * 0000000140BB5069: xor     edx, edx
 * 0000000140BB506B: mov     rcx, rbx
 * 0000000140BB506E: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BB5073: call    KeGuardDispatchICall
 * 0000000140BB5078: mov     rax, [rsi+148h]
 * 0000000140BB507F: xor     edx, edx
 * 0000000140BB5081: mov     rcx, r14
 * 0000000140BB5084: call    KeGuardDispatchICall
 * 0000000140BB5089: mov     r9, [rsi+598h]
 * 0000000140BB5090: xor     r11d, r11d
 * 0000000140BB5093: mov     r10d, r11d
 * 0000000140BB5096: mov     [rsp+9D0h+var_968], r11
 * 0000000140BB509B: mov     r8, [r9]
 * 0000000140BB509E: cmp     r8, r9
 * 0000000140BB50A1: jz      short loc_140BB50EF
 * 0000000140BB50A3: lea     rdx, [r8-18h]
 * 0000000140BB50A7: cmp     rdx, r13
 * 0000000140BB50AA: jz      short loc_140BB50E2
 * 0000000140BB50AC: mov     rax, [rsi+748h]
 * 0000000140BB50B3: mov     rdx, [rdx+rax]
 * 0000000140BB50B7: mov     rax, [rsi+6D0h]
 * 0000000140BB50BE: mov     ecx, [rdx+rax]
 * 0000000140BB50C1: test    [rsi+6E8h], ecx
 * 0000000140BB50C7: jnz     short loc_140BB50D6
 * 0000000140BB50C9: test    r10, r10
 * 0000000140BB50CC: mov     rax, rdx
 * 0000000140BB50CF: cmovnz  rax, r12
 * 0000000140BB50D3: mov     r10, rax
 * 0000000140BB50D6: mov     rax, [rsi+6C8h]
 * 0000000140BB50DD: lock or [rdx+rax], r15b
 * 0000000140BB50E2: mov     r8, [r8]
 * 0000000140BB50E5: cmp     r8, r9
 * 0000000140BB50E8: jnz     short loc_140BB50A3
 * 0000000140BB50EA: mov     [rsp+9D0h+var_968], r10
 * 0000000140BB50EF: mov     r12, [rsi+518h]
 * 0000000140BB50F6: mov     r14, [r12]
 * 0000000140BB50FA: cmp     r14, r12
 * 0000000140BB50FD: jz      loc_140BB52BD
 * 0000000140BB5103: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BB5108: mov     r13b, r15b
 * 0000000140BB510B: movzx   edx, r15b
 * 0000000140BB510F: not     r13b
 * 0000000140BB5112: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB5119: mov     dword ptr [rsp+9D0h+var_960], edx
 * 0000000140BB511D: mov     rax, [rsi+6C8h]
 * 0000000140BB5124: mov     rbx, r14
 * 0000000140BB5127: sub     rbx, [rsi+6E0h]
 * 0000000140BB512E: movsx   ecx, byte ptr [rbx+rax]
 * 0000000140BB5132: test    edx, ecx
 * 0000000140BB5134: jnz     loc_140BB5283
 * 0000000140BB513A: mov     rax, [rsi+6D8h]
 * 0000000140BB5141: mov     rcx, [rbx+rax]
 * 0000000140BB5145: test    rcx, rcx
 * 0000000140BB5148: jz      loc_140BB5283
 * 0000000140BB514E: cmp     rcx, rdi
 * 0000000140BB5151: jz      loc_140BB5283
 * 0000000140BB5157: cmp     [rsi+918h], r11d
 * 0000000140BB515E: jnz     loc_140BB5283
 * 0000000140BB5164: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BB5169: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB5173: add     rax, rsi
 * 0000000140BB5176: mov     r8d, 1
 * 0000000140BB517C: mov     [rsi+920h], rax
 * 0000000140BB5183: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB518D: add     rax, rcx
 * 0000000140BB5190: mov     [rsi+928h], rax
 * 0000000140BB5197: movsxd  rax, dword ptr [rcx]
 * 0000000140BB519A: mov     [rsi+930h], rax
 * 0000000140BB51A1: mov     [rsi+938h], rbx
 * 0000000140BB51A8: mov     [rsi+918h], r8d
 * 0000000140BB51AF: mov     ecx, [rsi+9D8h]
 * 0000000140BB51B5: bt      ecx, 1Dh
 * 0000000140BB51B9: jb      loc_140BB5283
 * 0000000140BB51BF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB51C9: jz      loc_140BB5283
 * 0000000140BB51CF: test    r8b, cl
 * 0000000140BB51D2: jz      loc_140BB5283
 * 0000000140BB51D8: mov     ecx, [rsi+0A74h]
 * 0000000140BB51DE: mov     eax, [rsi+804h]
 * 0000000140BB51E4: mov     r10, [rsi+838h]
 * 0000000140BB51EB: sub     eax, ecx
 * 0000000140BB51ED: mov     r8, [rsi+0A78h]
 * 0000000140BB51F4: lea     rdx, [rcx+rsi]
 * 0000000140BB51F8: mov     ecx, eax
 * 0000000140BB51FA: shr     rcx, 3
 * 0000000140BB51FE: lea     r9, [rdx+rcx*8]
 * 0000000140BB5202: jmp     short loc_140BB5225
 * 0000000140BB5204: xor     [rdx], r8
 * 0000000140BB5207: mov     rax, [rdx]
 * 0000000140BB520A: movzx   ecx, r8b
 * 0000000140BB520E: xor     rax, r10
 * 0000000140BB5211: and     ecx, 3Fh
 * 0000000140BB5214: ror     r8, cl
 * 0000000140BB5217: add     r8, rax
 * 0000000140BB521A: xor     r8, 0EFAh
 * 0000000140BB5221: add     rdx, 8
 * 0000000140BB5225: cmp     rdx, r9
 * 0000000140BB5228: jnz     short loc_140BB5204
 * 0000000140BB522A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB5232: cmp     r8, [rsi+0A80h]
 * 0000000140BB5239: jz      short loc_140BB527F
 * 0000000140BB523B: mov     ecx, [rsi+804h]
 * 0000000140BB5241: mov     rax, [rsi+588h]
 * 0000000140BB5248: mov     [rax], rsi
 * 0000000140BB524B: mov     [rax+10h], ecx
 * 0000000140BB524E: mov     rcx, [rsi+0A80h]
 * 0000000140BB5255: cmp     [rsi+918h], r11d
 * 0000000140BB525C: jnz     short loc_140BB526C
 * 0000000140BB525E: mov     rax, [rsi+588h]
 * 0000000140BB5265: xor     rcx, r8
 * 0000000140BB5268: mov     [rax+18h], rcx
 * 0000000140BB526C: xor     edx, edx
 * 0000000140BB526E: mov     r9d, 100h
 * 0000000140BB5274: mov     rcx, rsi
 * 0000000140BB5277: call    sub_140BC7384
 * 0000000140BB527C: xor     r11d, r11d
 * 0000000140BB527F: mov     edx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BB5283: mov     rax, [rsi+6C8h]
 * 0000000140BB528A: lock and [rbx+rax], r13b
 * 0000000140BB528F: mov     r14, [r14]
 * 0000000140BB5292: mov     ebx, 1
 * 0000000140BB5297: add     r15d, ebx
 * 0000000140BB529A: cmp     r14, r12
 * 0000000140BB529D: jnz     loc_140BB511D
 * 0000000140BB52A3: mov     r13, [rsp+9D0h+var_978]
 * 0000000140BB52A8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB52AF: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BB52B6: mov     r15d, [rsp+9D0h+var_958]
 * 0000000140BB52BB: jmp     short loc_140BB52C2
 * 0000000140BB52BD: mov     ebx, 1
 * 0000000140BB52C2: mov     rdx, [rsp+9D0h+var_968]
 * 0000000140BB52C7: test    rdx, rdx
 * 0000000140BB52CA: jz      short loc_140BB531C
 * 0000000140BB52CC: cmp     rdx, rbx
 * 0000000140BB52CF: jz      short loc_140BB52E3
 * 0000000140BB52D1: mov     rax, [rsi+6C8h]
 * 0000000140BB52D8: mov     cl, r15b
 * 0000000140BB52DB: not     cl
 * 0000000140BB52DD: lock and [rdx+rax], cl
 * 0000000140BB52E1: jmp     short loc_140BB531C
 * 0000000140BB52E3: mov     r10, [rsi+598h]
 * 0000000140BB52EA: mov     r9, [r10]
 * 0000000140BB52ED: jmp     short loc_140BB5317
 * 0000000140BB52EF: lea     r8, [r9-18h]
 * 0000000140BB52F3: cmp     r8, r13
 * 0000000140BB52F6: jz      short loc_140BB5314
 * 0000000140BB52F8: mov     rax, [rsi+748h]
 * 0000000140BB52FF: mov     dl, r15b
 * 0000000140BB5302: not     dl
 * 0000000140BB5304: mov     r8, [r8+rax]
 * 0000000140BB5308: mov     rax, [rsi+6C8h]
 * 0000000140BB530F: lock and [r8+rax], dl
 * 0000000140BB5314: mov     r9, [r9]
 * 0000000140BB5317: cmp     r9, r10
 * 0000000140BB531A: jnz     short loc_140BB52EF
 * 0000000140BB531C: mov     rax, [rsi+150h]
 * 0000000140BB5323: xor     edx, edx
 * 0000000140BB5325: mov     rcx, [rbp+8D0h+var_940]
 * 0000000140BB5329: call    KeGuardDispatchICall
 * 0000000140BB532E: cmp     r15b, 80h
 * 0000000140BB5332: jnz     short loc_140BB5349
 * 0000000140BB5334: mov     rax, [rsi+140h]
 * 0000000140BB533B: xor     edx, edx
 * 0000000140BB533D: mov     rcx, [rsi+0A48h]
 * 0000000140BB5344: call    KeGuardDispatchICall
 * 0000000140BB5349: mov     rcx, [rsi+540h]
 * 0000000140BB5350: xor     edx, edx
 * 0000000140BB5352: mov     rax, [rsi+150h]
 * 0000000140BB5359: call    KeGuardDispatchICall
 * 0000000140BB535E: mov     rax, [rsi+190h]
 * 0000000140BB5365: call    KeGuardDispatchICall
 * 0000000140BB536A: mov     eax, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB5370: shl     eax, 8
 * 0000000140BB5373: add     [rsi+848h], eax
 * 0000000140BB5379: jmp     loc_140BB43BC
 * 0000000140BB537E: mov     eax, [rsi+850h]
 * 0000000140BB5384: test    bl, al
 * 0000000140BB5386: jnz     loc_140BB1FAF
 * 0000000140BB538C: mov     rax, [rsi+5A8h]
 * 0000000140BB5393: mov     r13d, r15d
 * 0000000140BB5396: mov     r14, [rsi+5A0h]
 * 0000000140BB539D: mov     rbx, [rsi+540h]
 * 0000000140BB53A4: mov     [rsp+9D0h+var_978], rax
 * 0000000140BB53A9: mov     rax, [rsi+188h]
 * 0000000140BB53B0: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BB53B7: mov     [rsp+9D0h+var_968], r14
 * 0000000140BB53BC: call    KeGuardDispatchICall
 * 0000000140BB53C1: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB53CB: jnz     short loc_140BB53E6
 * 0000000140BB53CD: mov     ecx, [rsi+978h]
 * 0000000140BB53D3: cmp     ecx, 7
 * 0000000140BB53D6: jnb     short loc_140BB53E6
 * 0000000140BB53D8: mov     r12d, 1
 * 0000000140BB53DE: mov     r15d, r12d
 * 0000000140BB53E1: shl     r15b, cl
 * 0000000140BB53E4: jmp     short loc_140BB5404
 * 0000000140BB53E6: mov     rax, [rsi+138h]
 * 0000000140BB53ED: xor     edx, edx
 * 0000000140BB53EF: mov     rcx, [rsi+0A48h]
 * 0000000140BB53F6: call    KeGuardDispatchICall
 * 0000000140BB53FB: mov     r15b, 80h
 * 0000000140BB53FE: mov     r12d, 1
 * 0000000140BB5404: mov     rax, [rsi+148h]
 * 0000000140BB540B: xor     edx, edx
 * 0000000140BB540D: mov     rcx, rbx
 * 0000000140BB5410: call    KeGuardDispatchICall
 * 0000000140BB5415: mov     r8, [rsi+518h]
 * 0000000140BB541C: mov     rdx, [r8]
 * 0000000140BB541F: cmp     rdx, r8
 * 0000000140BB5422: jz      short loc_140BB544C
 * 0000000140BB5424: mov     rax, [rsi+6C8h]
 * 0000000140BB542B: mov     rcx, rdx
 * 0000000140BB542E: sub     rcx, [rsi+6E0h]
 * 0000000140BB5435: lock or [rcx+rax], r15b
 * 0000000140BB543A: mov     rdx, [rdx]
 * 0000000140BB543D: add     r13d, r12d
 * 0000000140BB5440: cmp     rdx, r8
 * 0000000140BB5443: jnz     short loc_140BB5424
 * 0000000140BB5445: mov     dword ptr [rbp+8D0h+arg_8], r13d
 * 0000000140BB544C: mov     rax, [rsi+148h]
 * 0000000140BB5453: xor     edx, edx
 * 0000000140BB5455: mov     rcx, r14
 * 0000000140BB5458: call    KeGuardDispatchICall
 * 0000000140BB545D: mov     r12, [rsi+598h]
 * 0000000140BB5464: mov     r14, [r12]
 * 0000000140BB5468: cmp     r14, r12
 * 0000000140BB546B: jz      loc_140BB560F
 * 0000000140BB5471: mov     rax, [rsp+9D0h+var_978]
 * 0000000140BB5476: xor     r13d, r13d
 * 0000000140BB5479: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BB547E: mov     rcx, r14
 * 0000000140BB5481: sub     rcx, [rsi+750h]
 * 0000000140BB5488: cmp     rcx, rax
 * 0000000140BB548B: jz      loc_140BB55F5
 * 0000000140BB5491: mov     rax, [rsi+748h]
 * 0000000140BB5498: mov     rbx, [rcx+rax]
 * 0000000140BB549C: mov     rax, [rsi+6C8h]
 * 0000000140BB54A3: test    [rbx+rax], r15b
 * 0000000140BB54A7: jnz     loc_140BB55E0
 * 0000000140BB54AD: mov     rax, [rsi+6D0h]
 * 0000000140BB54B4: mov     ecx, [rbx+rax]
 * 0000000140BB54B7: test    [rsi+6E8h], ecx
 * 0000000140BB54BD: jz      loc_140BB55E0
 * 0000000140BB54C3: cmp     [rsi+918h], r13d
 * 0000000140BB54CA: jnz     loc_140BB55E0
 * 0000000140BB54D0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB54DA: mov     edx, 1
 * 0000000140BB54DF: add     rax, rsi
 * 0000000140BB54E2: mov     [rsi+920h], rax
 * 0000000140BB54E9: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB54F3: add     rax, rdi
 * 0000000140BB54F6: mov     [rsi+928h], rax
 * 0000000140BB54FD: movsxd  rax, dword ptr [rdi]
 * 0000000140BB5500: mov     [rsi+930h], rax
 * 0000000140BB5507: mov     [rsi+938h], rbx
 * 0000000140BB550E: mov     [rsi+918h], edx
 * 0000000140BB5514: mov     ecx, [rsi+9D8h]
 * 0000000140BB551A: bt      ecx, 1Dh
 * 0000000140BB551E: jb      loc_140BB55E0
 * 0000000140BB5524: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB552E: jz      loc_140BB55E0
 * 0000000140BB5534: test    dl, cl
 * 0000000140BB5536: jz      loc_140BB55E0
 * 0000000140BB553C: mov     ecx, [rsi+0A74h]
 * 0000000140BB5542: mov     eax, [rsi+804h]
 * 0000000140BB5548: mov     r10, [rsi+838h]
 * 0000000140BB554F: sub     eax, ecx
 * 0000000140BB5551: mov     r8, [rsi+0A78h]
 * 0000000140BB5558: lea     rdx, [rcx+rsi]
 * 0000000140BB555C: mov     ecx, eax
 * 0000000140BB555E: shr     rcx, 3
 * 0000000140BB5562: lea     r9, [rdx+rcx*8]
 * 0000000140BB5566: jmp     short loc_140BB5589
 * 0000000140BB5568: xor     [rdx], r8
 * 0000000140BB556B: mov     rax, [rdx]
 * 0000000140BB556E: movzx   ecx, r8b
 * 0000000140BB5572: xor     rax, r10
 * 0000000140BB5575: and     ecx, 3Fh
 * 0000000140BB5578: ror     r8, cl
 * 0000000140BB557B: add     r8, rax
 * 0000000140BB557E: xor     r8, 0EFAh
 * 0000000140BB5585: add     rdx, 8
 * 0000000140BB5589: cmp     rdx, r9
 * 0000000140BB558C: jnz     short loc_140BB5568
 * 0000000140BB558E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB5596: cmp     r8, [rsi+0A80h]
 * 0000000140BB559D: jz      short loc_140BB55E0
 * 0000000140BB559F: mov     ecx, [rsi+804h]
 * 0000000140BB55A5: mov     rax, [rsi+588h]
 * 0000000140BB55AC: mov     [rax], rsi
 * 0000000140BB55AF: mov     [rax+10h], ecx
 * 0000000140BB55B2: mov     rcx, [rsi+0A80h]
 * 0000000140BB55B9: cmp     [rsi+918h], r13d
 * 0000000140BB55C0: jnz     short loc_140BB55D0
 * 0000000140BB55C2: mov     rax, [rsi+588h]
 * 0000000140BB55C9: xor     rcx, r8
 * 0000000140BB55CC: mov     [rax+18h], rcx
 * 0000000140BB55D0: xor     edx, edx
 * 0000000140BB55D2: mov     r9d, 100h
 * 0000000140BB55D8: mov     rcx, rsi
 * 0000000140BB55DB: call    sub_140BC7384
 * 0000000140BB55E0: mov     rax, [rsi+6C8h]
 * 0000000140BB55E7: mov     dl, r15b
 * 0000000140BB55EA: not     dl
 * 0000000140BB55EC: lock and [rbx+rax], dl
 * 0000000140BB55F0: mov     rax, [rsp+9D0h+var_978]
 * 0000000140BB55F5: mov     r14, [r14]
 * 0000000140BB55F8: cmp     r14, r12
 * 0000000140BB55FB: jnz     loc_140BB547E
 * 0000000140BB5601: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB5608: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB560F: mov     rax, [rsi+150h]
 * 0000000140BB5616: xor     edx, edx
 * 0000000140BB5618: mov     rcx, [rsp+9D0h+var_968]
 * 0000000140BB561D: call    KeGuardDispatchICall
 * 0000000140BB5622: cmp     r15b, 80h
 * 0000000140BB5626: jnz     short loc_140BB563D
 * 0000000140BB5628: mov     rax, [rsi+140h]
 * 0000000140BB562F: xor     edx, edx
 * 0000000140BB5631: mov     rcx, [rsi+0A48h]
 * 0000000140BB5638: call    KeGuardDispatchICall
 * 0000000140BB563D: mov     rcx, [rsi+540h]
 * 0000000140BB5644: xor     edx, edx
 * 0000000140BB5646: mov     rax, [rsi+150h]
 * 0000000140BB564D: call    KeGuardDispatchICall
 * 0000000140BB5652: mov     rax, [rsi+190h]
 * 0000000140BB5659: call    KeGuardDispatchICall
 * 0000000140BB565E: shl     r13d, 8
 * 0000000140BB5662: add     [rsi+848h], r13d
 * 0000000140BB5669: jmp     loc_140BB1F9B
 * 0000000140BB566E: mov     rax, [rsi+378h]
 * 0000000140BB5675: mov     r12, [rsi+528h]
 * 0000000140BB567C: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BB5683: call    KeGuardDispatchICall
 * 0000000140BB5688: mov     [rbp+8D0h+var_940], rax
 * 0000000140BB568C: cli
 * 0000000140BB568D: mov     rcx, gs:20h
 * 0000000140BB5696: mov     rax, [rsi+658h]
 * 0000000140BB569D: mov     rcx, [rcx+rax]
 * 0000000140BB56A1: sti
 * 0000000140BB56A2: mov     rax, [rsi+178h]
 * 0000000140BB56A9: call    KeGuardDispatchICall
 * 0000000140BB56AE: mov     rcx, [rsi+530h]
 * 0000000140BB56B5: mov     dl, bl
 * 0000000140BB56B7: mov     rax, [rsi+0F8h]
 * 0000000140BB56BE: call    KeGuardDispatchICall
 * 0000000140BB56C3: mov     rax, [rsi+620h]
 * 0000000140BB56CA: mov     dword ptr [rsp+9D0h+var_960], r15d
 * 0000000140BB56CF: mov     rcx, [rax]
 * 0000000140BB56D2: mov     r13d, [rcx]
 * 0000000140BB56D5: lea     rdx, [rcx+10h]
 * 0000000140BB56D9: mov     [rsp+9D0h+var_978], rdx
 * 0000000140BB56DE: lea     rax, ds:0[r13*2]
 * 0000000140BB56E6: add     rax, r13
 * 0000000140BB56E9: lea     rax, [rdx+rax*8]
 * 0000000140BB56ED: mov     [rsp+9D0h+var_968], rax
 * 0000000140BB56F2: cmp     [rcx+0Ch], r15b
 * 0000000140BB56F6: jz      short loc_140BB570C
 * 0000000140BB56F8: mov     rax, [r12]
 * 0000000140BB56FC: mov     r13d, r15d
 * 0000000140BB56FF: jmp     short loc_140BB5707
 * 0000000140BB5701: mov     rax, [rax]
 * 0000000140BB5704: add     r13d, ebx
 * 0000000140BB5707: cmp     rax, r12
 * 0000000140BB570A: jnz     short loc_140BB5701
 * 0000000140BB570C: mov     r8d, [rsi+830h]
 * 0000000140BB5713: lea     r15d, ds:0[r13*8]
 * 0000000140BB571B: rdtsc
 * 0000000140BB571D: shl     rdx, 20h
 * 0000000140BB5721: mov     r9, 7010008004002001h
 * 0000000140BB572B: or      rax, rdx
 * 0000000140BB572E: mov     rcx, rax
 * 0000000140BB5731: ror     rax, 3
 * 0000000140BB5735: xor     rcx, rax
 * 0000000140BB5738: mov     rax, r9
 * 0000000140BB573B: mul     rcx
 * 0000000140BB573E: mov     rbx, rax
 * 0000000140BB5741: mov     [rbp+8D0h+var_5C8], rdx
 * 0000000140BB5748: xor     ebx, edx
 * 0000000140BB574A: and     ebx, 7FFh
 * 0000000140BB5750: rdtsc
 * 0000000140BB5752: shl     rdx, 20h
 * 0000000140BB5756: or      rax, rdx
 * 0000000140BB5759: mov     rcx, rax
 * 0000000140BB575C: ror     rax, 3
 * 0000000140BB5760: xor     rcx, rax
 * 0000000140BB5763: mov     rax, r9
 * 0000000140BB5766: mul     rcx
 * 0000000140BB5769: lea     r9d, [rbx+1]
 * 0000000140BB576D: mov     ecx, 42h ; 'B'
 * 0000000140BB5772: xor     rax, rdx
 * 0000000140BB5775: mov     [rbp+8D0h+var_5C0], rdx
 * 0000000140BB577C: xor     edx, edx
 * 0000000140BB577E: div     r9
 * 0000000140BB5781: mov     rax, [rsi+100h]
 * 0000000140BB5788: mov     r14, rdx
 * 0000000140BB578B: lea     edx, [rbx+r15]
 * 0000000140BB578F: call    KeGuardDispatchICall
 * 0000000140BB5794: mov     r11, rax
 * 0000000140BB5797: test    rax, rax
 * 0000000140BB579A: jnz     short loc_140BB57AE
 * 0000000140BB579C: lea     eax, [r11+1]
 * 0000000140BB57A0: add     [rsi+0A60h], eax
 * 0000000140BB57A6: xor     r15d, r15d
 * 0000000140BB57A9: jmp     loc_140BB590C
 * 0000000140BB57AE: mov     r10d, r14d
 * 0000000140BB57B1: mov     r9, r11
 * 0000000140BB57B4: cmp     r14d, 8
 * 0000000140BB57B8: jb      short loc_140BB580F
 * 0000000140BB57BA: mov     r8d, r14d
 * 0000000140BB57BD: mov     esi, 1
 * 0000000140BB57C2: shr     r8, 3
 * 0000000140BB57C6: mov     rdi, 7010008004002001h
 * 0000000140BB57D0: rdtsc
 * 0000000140BB57D2: shl     rdx, 20h
 * 0000000140BB57D6: add     r10d, 0FFFFFFF8h
 * 0000000140BB57DA: or      rax, rdx
 * 0000000140BB57DD: mov     rcx, rax
 * 0000000140BB57E0: ror     rax, 3
 * 0000000140BB57E4: xor     rcx, rax
 * 0000000140BB57E7: mov     rax, rdi
 * 0000000140BB57EA: mul     rcx
 * 0000000140BB57ED: mov     [rbp+8D0h+var_5B8], rdx
 * 0000000140BB57F4: xor     rdx, rax
 * 0000000140BB57F7: mov     [r9], rdx
 * 0000000140BB57FA: add     r9, 8
 * 0000000140BB57FE: sub     r8, rsi
 * 0000000140BB5801: jnz     short loc_140BB57D0
 * 0000000140BB5803: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB5808: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB580F: test    r10d, r10d
 * 0000000140BB5812: jz      short loc_140BB5857
 * 0000000140BB5814: rdtsc
 * 0000000140BB5816: shl     rdx, 20h
 * 0000000140BB581A: or      rax, rdx
 * 0000000140BB581D: mov     rcx, rax
 * 0000000140BB5820: ror     rax, 3
 * 0000000140BB5824: xor     rcx, rax
 * 0000000140BB5827: mov     rax, 7010008004002001h
 * 0000000140BB5831: mul     rcx
 * 0000000140BB5834: mov     ecx, 0FFFFFFFFh
 * 0000000140BB5839: mov     [rbp+8D0h+var_5B0], rdx
 * 0000000140BB5840: xor     rdx, rax
 * 0000000140BB5843: mov     eax, 1
 * 0000000140BB5848: mov     [r9], dl
 * 0000000140BB584B: add     r9, rax
 * 0000000140BB584E: shr     rdx, 8
 * 0000000140BB5852: add     r10d, ecx
 * 0000000140BB5855: jnz     short loc_140BB5848
 * 0000000140BB5857: mov     eax, r14d
 * 0000000140BB585A: sub     ebx, r14d
 * 0000000140BB585D: add     rax, r11
 * 0000000140BB5860: mov     r8d, r15d
 * 0000000140BB5863: add     r8, rax
 * 0000000140BB5866: mov     r10d, 1
 * 0000000140BB586C: cmp     ebx, 8
 * 0000000140BB586F: jb      short loc_140BB58B9
 * 0000000140BB5871: mov     r9d, ebx
 * 0000000140BB5874: mov     rsi, 7010008004002001h
 * 0000000140BB587E: shr     r9, 3
 * 0000000140BB5882: rdtsc
 * 0000000140BB5884: shl     rdx, 20h
 * 0000000140BB5888: add     ebx, 0FFFFFFF8h
 * 0000000140BB588B: or      rax, rdx
 * 0000000140BB588E: mov     rcx, rax
 * 0000000140BB5891: ror     rax, 3
 * 0000000140BB5895: xor     rcx, rax
 * 0000000140BB5898: mov     rax, rsi
 * 0000000140BB589B: mul     rcx
 * 0000000140BB589E: mov     [rbp+8D0h+var_5A8], rdx
 * 0000000140BB58A5: xor     rdx, rax
 * 0000000140BB58A8: mov     [r8], rdx
 * 0000000140BB58AB: add     r8, 8
 * 0000000140BB58AF: sub     r9, r10
 * 0000000140BB58B2: jnz     short loc_140BB5882
 * 0000000140BB58B4: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB58B9: xor     r15d, r15d
 * 0000000140BB58BC: test    ebx, ebx
 * 0000000140BB58BE: jz      short loc_140BB58FD
 * 0000000140BB58C0: rdtsc
 * 0000000140BB58C2: shl     rdx, 20h
 * 0000000140BB58C6: or      rax, rdx
 * 0000000140BB58C9: mov     rcx, rax
 * 0000000140BB58CC: ror     rax, 3
 * 0000000140BB58D0: xor     rcx, rax
 * 0000000140BB58D3: mov     rax, 7010008004002001h
 * 0000000140BB58DD: mul     rcx
 * 0000000140BB58E0: mov     [rbp+8D0h+var_5A0], rdx
 * 0000000140BB58E7: xor     rdx, rax
 * 0000000140BB58EA: mov     eax, 0FFFFFFFFh
 * 0000000140BB58EF: mov     [r8], dl
 * 0000000140BB58F2: add     r8, r10
 * 0000000140BB58F5: shr     rdx, 8
 * 0000000140BB58F9: add     ebx, eax
 * 0000000140BB58FB: jnz     short loc_140BB58EF
 * 0000000140BB58FD: mov     ebx, r14d
 * 0000000140BB5900: mov     [rbp+8D0h+var_820], r11
 * 0000000140BB5907: add     rbx, r11
 * 0000000140BB590A: jnz     short loc_140BB5918
 * 0000000140BB590C: mov     [rbp+8D0h+var_820], r15
 * 0000000140BB5913: jmp     loc_140BB5AFF
 * 0000000140BB5918: mov     rdx, [r12]
 * 0000000140BB591C: mov     r14d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BB5921: cmp     rdx, r12
 * 0000000140BB5924: jz      short loc_140BB5964
 * 0000000140BB5926: mov     eax, r14d
 * 0000000140BB5929: mov     r8, rdx
 * 0000000140BB592C: sub     r8, [rsi+758h]
 * 0000000140BB5933: cmp     r14d, r13d
 * 0000000140BB5936: jnb     short loc_140BB5953
 * 0000000140BB5938: mov     rax, [rsi+760h]
 * 0000000140BB593F: mov     ecx, r14d
 * 0000000140BB5942: add     r14d, r10d
 * 0000000140BB5945: mov     rax, [r8+rax]
 * 0000000140BB5949: mov     [rbx+rcx*8], rax
 * 0000000140BB594D: mov     eax, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB5953: mov     rdx, [rdx]
 * 0000000140BB5956: add     eax, r10d
 * 0000000140BB5959: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BB595F: cmp     rdx, r12
 * 0000000140BB5962: jnz     short loc_140BB5929
 * 0000000140BB5964: mov     rax, [rsi+398h]
 * 0000000140BB596B: mov     edx, r14d
 * 0000000140BB596E: mov     rcx, rbx
 * 0000000140BB5971: call    KeGuardDispatchICall
 * 0000000140BB5976: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BB597B: dec     r14d
 * 0000000140BB597E: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BB5983: xor     r11d, r11d
 * 0000000140BB5986: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BB598B: mov     r10, [r15+8]
 * 0000000140BB598F: mov     r8d, r11d
 * 0000000140BB5992: mov     edx, r14d
 * 0000000140BB5995: test    r14d, r14d
 * 0000000140BB5998: js      short loc_140BB59C8
 * 0000000140BB599A: lea     ecx, [rdx+r8]
 * 0000000140BB599E: sar     ecx, 1
 * 0000000140BB59A0: movsxd  rax, ecx
 * 0000000140BB59A3: cmp     r10, [rbx+rax*8]
 * 0000000140BB59A7: jnb     short loc_140BB59B2
 * 0000000140BB59A9: test    ecx, ecx
 * 0000000140BB59AB: jz      short loc_140BB59C8
 * 0000000140BB59AD: lea     edx, [rcx-1]
 * 0000000140BB59B0: jmp     short loc_140BB59B8
 * 0000000140BB59B2: jbe     short loc_140BB59BF
 * 0000000140BB59B4: lea     r8d, [rcx+1]
 * 0000000140BB59B8: cmp     edx, r8d
 * 0000000140BB59BB: jge     short loc_140BB599A
 * 0000000140BB59BD: jmp     short loc_140BB59C8
 * 0000000140BB59BF: cmp     edx, r8d
 * 0000000140BB59C2: jge     loc_140BB5AE8
 * 0000000140BB59C8: cmp     [rsi+918h], r11d
 * 0000000140BB59CF: jnz     loc_140BB5AE8
 * 0000000140BB59D5: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB59DF: mov     edx, 1
 * 0000000140BB59E4: add     rax, rsi
 * 0000000140BB59E7: mov     [rsi+920h], rax
 * 0000000140BB59EE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB59F8: add     rax, rdi
 * 0000000140BB59FB: mov     [rsi+928h], rax
 * 0000000140BB5A02: movsxd  rax, dword ptr [rdi]
 * 0000000140BB5A05: mov     [rsi+930h], rax
 * 0000000140BB5A0C: mov     [rsi+938h], r10
 * 0000000140BB5A13: mov     [rsi+918h], edx
 * 0000000140BB5A19: mov     ecx, [rsi+9D8h]
 * 0000000140BB5A1F: bt      ecx, 1Dh
 * 0000000140BB5A23: jb      loc_140BB5AE8
 * 0000000140BB5A29: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB5A33: jz      loc_140BB5AE8
 * 0000000140BB5A39: test    dl, cl
 * 0000000140BB5A3B: jz      loc_140BB5AE8
 * 0000000140BB5A41: mov     ecx, [rsi+0A74h]
 * 0000000140BB5A47: mov     eax, [rsi+804h]
 * 0000000140BB5A4D: mov     r10, [rsi+838h]
 * 0000000140BB5A54: sub     eax, ecx
 * 0000000140BB5A56: mov     r8, [rsi+0A78h]
 * 0000000140BB5A5D: lea     rdx, [rcx+rsi]
 * 0000000140BB5A61: mov     ecx, eax
 * 0000000140BB5A63: shr     rcx, 3
 * 0000000140BB5A67: lea     r9, [rdx+rcx*8]
 * 0000000140BB5A6B: jmp     short loc_140BB5A8E
 * 0000000140BB5A6D: xor     [rdx], r8
 * 0000000140BB5A70: mov     rax, [rdx]
 * 0000000140BB5A73: movzx   ecx, r8b
 * 0000000140BB5A77: xor     rax, r10
 * 0000000140BB5A7A: and     ecx, 3Fh
 * 0000000140BB5A7D: ror     r8, cl
 * 0000000140BB5A80: add     r8, rax
 * 0000000140BB5A83: xor     r8, 0EFAh
 * 0000000140BB5A8A: add     rdx, 8
 * 0000000140BB5A8E: cmp     rdx, r9
 * 0000000140BB5A91: jnz     short loc_140BB5A6D
 * 0000000140BB5A93: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB5A9B: cmp     r8, [rsi+0A80h]
 * 0000000140BB5AA2: jz      short loc_140BB5AE8
 * 0000000140BB5AA4: mov     ecx, [rsi+804h]
 * 0000000140BB5AAA: mov     rax, [rsi+588h]
 * 0000000140BB5AB1: mov     [rax], rsi
 * 0000000140BB5AB4: mov     [rax+10h], ecx
 * 0000000140BB5AB7: mov     rcx, [rsi+0A80h]
 * 0000000140BB5ABE: cmp     [rsi+918h], r11d
 * 0000000140BB5AC5: jnz     short loc_140BB5AD5
 * 0000000140BB5AC7: mov     rax, [rsi+588h]
 * 0000000140BB5ACE: xor     rcx, r8
 * 0000000140BB5AD1: mov     [rax+18h], rcx
 * 0000000140BB5AD5: xor     edx, edx
 * 0000000140BB5AD7: mov     r9d, 100h
 * 0000000140BB5ADD: mov     rcx, rsi
 * 0000000140BB5AE0: call    sub_140BC7384
 * 0000000140BB5AE5: xor     r11d, r11d
 * 0000000140BB5AE8: add     r15, 18h
 * 0000000140BB5AEC: cmp     r15, r12
 * 0000000140BB5AEF: jb      loc_140BB598B
 * 0000000140BB5AF5: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB5AFC: xor     r15d, r15d
 * 0000000140BB5AFF: mov     rcx, [rsi+530h]
 * 0000000140BB5B06: mov     rax, [rsi+128h]
 * 0000000140BB5B0D: call    KeGuardDispatchICall
 * 0000000140BB5B12: mov     rax, [rsi+180h]
 * 0000000140BB5B19: call    KeGuardDispatchICall
 * 0000000140BB5B1E: mov     rax, [rsi+380h]
 * 0000000140BB5B25: mov     rcx, [rbp+8D0h+var_940]
 * 0000000140BB5B29: call    KeGuardDispatchICall
 * 0000000140BB5B2E: cmp     [rbp+8D0h+var_820], r15
 * 0000000140BB5B35: jz      loc_140BB2B58
 * 0000000140BB5B3B: mov     eax, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB5B41: shl     eax, 9
 * 0000000140BB5B44: add     [rsi+848h], eax
 * 0000000140BB5B4A: mov     rax, [rsi+108h]
 * 0000000140BB5B51: mov     rcx, [rbp+8D0h+var_820]
 * 0000000140BB5B58: jmp     loc_140BB2B53
 * 0000000140BB5B5D: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB5B67: jz      short loc_140BB5BBD
 * 0000000140BB5B69: test    [rsi+9DCh], r11d
 * 0000000140BB5B70: jnz     short loc_140BB5BBD
 * 0000000140BB5B72: rdtsc
 * 0000000140BB5B74: shl     rdx, 20h
 * 0000000140BB5B78: or      rax, rdx
 * 0000000140BB5B7B: mov     rcx, rax
 * 0000000140BB5B7E: ror     rax, 3
 * 0000000140BB5B82: xor     rcx, rax
 * 0000000140BB5B85: mov     rax, 7010008004002001h
 * 0000000140BB5B8F: mul     rcx
 * 0000000140BB5B92: mov     rcx, rdx
 * 0000000140BB5B95: mov     [rbp+8D0h+var_598], rdx
 * 0000000140BB5B9C: xor     rcx, rax
 * 0000000140BB5B9F: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BB5BA9: mul     rcx
 * 0000000140BB5BAC: shr     rdx, 2
 * 0000000140BB5BB0: lea     rax, [rdx+rdx*4]
 * 0000000140BB5BB4: sub     rcx, rax
 * 0000000140BB5BB7: mov     [rsi+844h], ecx
 * 0000000140BB5BBD: mov     ecx, [rsi+844h]
 * 0000000140BB5BC3: test    ecx, ecx
 * 0000000140BB5BC5: jz      loc_140BB89B0
 * 0000000140BB5BCB: sub     ecx, 1
 * 0000000140BB5BCE: jz      loc_140BB8776
 * 0000000140BB5BD4: sub     ecx, 1
 * 0000000140BB5BD7: jz      loc_140BB84F2
 * 0000000140BB5BDD: sub     ecx, 1
 * 0000000140BB5BE0: jz      loc_140BB609E
 * 0000000140BB5BE6: sub     ecx, 1
 * 0000000140BB5BE9: jz      loc_140BB5E2E
 * 0000000140BB5BEF: cmp     ecx, 1
 * 0000000140BB5BF2: jnz     loc_140BB8BFE
 * 0000000140BB5BF8: mov     rbx, r13
 * 0000000140BB5BFB: mov     [rbp+8D0h+arg_10], 0FFh
 * 0000000140BB5C02: mov     r13d, r15d
 * 0000000140BB5C05: mov     r14d, r15d
 * 0000000140BB5C08: xor     edi, edi
 * 0000000140BB5C0A: mov     [rbp+8D0h+var_7B8], rdi
 * 0000000140BB5C11: jmp     loc_140BB5DDF
 * 0000000140BB5C16: mov     rax, [rsi+218h]
 * 0000000140BB5C1D: lea     rdx, [rbp+8D0h+var_590]
 * 0000000140BB5C24: mov     rcx, [rbp+8D0h+var_838]
 * 0000000140BB5C2B: inc     r13d
 * 0000000140BB5C2E: call    KeGuardDispatchICall
 * 0000000140BB5C33: test    rax, rax
 * 0000000140BB5C36: jnz     loc_140BB5DDF
 * 0000000140BB5C3C: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB5C46: lea     r9d, [rax+1]
 * 0000000140BB5C4A: jz      short loc_140BB5C92
 * 0000000140BB5C4C: mov     rcx, [rsi+0AC8h]
 * 0000000140BB5C53: lea     edx, [rax+30h]
 * 0000000140BB5C56: mov     r8, r12
 * 0000000140BB5C59: mov     rax, [rbx]
 * 0000000140BB5C5C: add     edx, 0FFFFFFF8h
 * 0000000140BB5C5F: mov     [rcx], rax
 * 0000000140BB5C62: add     rbx, 8
 * 0000000140BB5C66: add     rcx, 8
 * 0000000140BB5C6A: sub     r8, r9
 * 0000000140BB5C6D: jnz     short loc_140BB5C59
 * 0000000140BB5C6F: test    edx, edx
 * 0000000140BB5C71: jz      short loc_140BB5C8B
 * 0000000140BB5C73: mov     esi, 0FFFFFFFFh
 * 0000000140BB5C78: mov     al, [rbx]
 * 0000000140BB5C7A: add     rbx, r9
 * 0000000140BB5C7D: mov     [rcx], al
 * 0000000140BB5C7F: add     rcx, r9
 * 0000000140BB5C82: add     edx, esi
 * 0000000140BB5C84: jnz     short loc_140BB5C78
 * 0000000140BB5C86: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB5C8B: mov     rbx, [rsi+0AC8h]
 * 0000000140BB5C92: mov     rax, [rbp+8D0h+var_838]
 * 0000000140BB5C99: mov     [rbx+18h], rax
 * 0000000140BB5C9D: mov     rax, [rsi+588h]
 * 0000000140BB5CA4: mov     [rax], rbx
 * 0000000140BB5CA7: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BB5CAE: mov     rcx, [rsi+588h]
 * 0000000140BB5CB5: mov     rax, [rbp+8D0h+var_838]
 * 0000000140BB5CBC: mov     [rcx+8], rax
 * 0000000140BB5CC0: mov     dword ptr [rcx+14h], 1000h
 * 0000000140BB5CC7: cmp     [rsi+918h], edi
 * 0000000140BB5CCD: jnz     loc_140BB5DDF
 * 0000000140BB5CD3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB5CDD: add     rax, rsi
 * 0000000140BB5CE0: mov     [rsi+920h], rax
 * 0000000140BB5CE7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB5CF1: add     rax, rbx
 * 0000000140BB5CF4: mov     [rsi+928h], rax
 * 0000000140BB5CFB: movsxd  rax, dword ptr [rbx]
 * 0000000140BB5CFE: mov     [rsi+930h], rax
 * 0000000140BB5D05: mov     [rsi+938h], r15
 * 0000000140BB5D0C: mov     [rsi+918h], r9d
 * 0000000140BB5D13: mov     ecx, [rsi+9D8h]
 * 0000000140BB5D19: bt      ecx, 1Dh
 * 0000000140BB5D1D: jb      loc_140BB5DDF
 * 0000000140BB5D23: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB5D2D: jz      loc_140BB5DDF
 * 0000000140BB5D33: test    r9b, cl
 * 0000000140BB5D36: jz      loc_140BB5DDF
 * 0000000140BB5D3C: mov     ecx, [rsi+0A74h]
 * 0000000140BB5D42: mov     eax, [rsi+804h]
 * 0000000140BB5D48: mov     r10, [rsi+838h]
 * 0000000140BB5D4F: sub     eax, ecx
 * 0000000140BB5D51: mov     r8, [rsi+0A78h]
 * 0000000140BB5D58: lea     rdx, [rcx+rsi]
 * 0000000140BB5D5C: mov     ecx, eax
 * 0000000140BB5D5E: shr     rcx, 3
 * 0000000140BB5D62: lea     r9, [rdx+rcx*8]
 * 0000000140BB5D66: jmp     short loc_140BB5D89
 * 0000000140BB5D68: xor     [rdx], r8
 * 0000000140BB5D6B: mov     rax, [rdx]
 * 0000000140BB5D6E: movzx   ecx, r8b
 * 0000000140BB5D72: xor     rax, r10
 * 0000000140BB5D75: and     ecx, 3Fh
 * 0000000140BB5D78: ror     r8, cl
 * 0000000140BB5D7B: add     r8, rax
 * 0000000140BB5D7E: xor     r8, 0EFAh
 * 0000000140BB5D85: add     rdx, 8
 * 0000000140BB5D89: cmp     rdx, r9
 * 0000000140BB5D8C: jnz     short loc_140BB5D68
 * 0000000140BB5D8E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB5D96: cmp     r8, [rsi+0A80h]
 * 0000000140BB5D9D: jz      short loc_140BB5DDF
 * 0000000140BB5D9F: mov     ecx, [rsi+804h]
 * 0000000140BB5DA5: mov     rax, [rsi+588h]
 * 0000000140BB5DAC: mov     [rax], rsi
 * 0000000140BB5DAF: mov     [rax+10h], ecx
 * 0000000140BB5DB2: mov     rcx, [rsi+0A80h]
 * 0000000140BB5DB9: cmp     [rsi+918h], edi
 * 0000000140BB5DBF: jnz     short loc_140BB5DCF
 * 0000000140BB5DC1: mov     rax, [rsi+588h]
 * 0000000140BB5DC8: xor     rcx, r8
 * 0000000140BB5DCB: mov     [rax+18h], rcx
 * 0000000140BB5DCF: xor     edx, edx
 * 0000000140BB5DD1: mov     r9d, 100h
 * 0000000140BB5DD7: mov     rcx, rsi
 * 0000000140BB5DDA: call    sub_140BC7384
 * 0000000140BB5DDF: mov     rax, [rsi+430h]
 * 0000000140BB5DE6: lea     r9, [rbp+8D0h+var_838]
 * 0000000140BB5DED: lea     r8, [rbp+8D0h+arg_10]
 * 0000000140BB5DF4: mov     ecx, r14d
 * 0000000140BB5DF7: lea     rdx, [rbp+8D0h+var_7B8]
 * 0000000140BB5DFE: call    KeGuardDispatchICall
 * 0000000140BB5E03: test    eax, eax
 * 0000000140BB5E05: jnz     loc_140BB5C16
 * 0000000140BB5E0B: mov     eax, 1
 * 0000000140BB5E10: add     r14d, eax
 * 0000000140BB5E13: add     r15, rax
 * 0000000140BB5E16: cmp     r14d, 3
 * 0000000140BB5E1A: jb      loc_140BB5C0A
 * 0000000140BB5E20: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB5E27: mov     ebx, eax
 * 0000000140BB5E29: jmp     loc_140BB8BC4
 * 0000000140BB5E2E: mov     rax, [rsi+318h]
 * 0000000140BB5E35: xor     ecx, ecx
 * 0000000140BB5E37: mov     r13d, r15d
 * 0000000140BB5E3A: mov     [rbp+8D0h+var_948], r15d
 * 0000000140BB5E3E: call    KeGuardDispatchICall
 * 0000000140BB5E43: mov     r15, rax
 * 0000000140BB5E46: xor     eax, eax
 * 0000000140BB5E48: test    r15, r15
 * 0000000140BB5E4B: jz      loc_140BB8BC4
 * 0000000140BB5E51: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BB5E56: mov     [rbp+8D0h+var_7B0], rax
 * 0000000140BB5E5D: lea     rdx, [rbp+8D0h+var_7B0]
 * 0000000140BB5E64: mov     rax, [rsi+310h]
 * 0000000140BB5E6B: mov     rcx, r15
 * 0000000140BB5E6E: mov     rbx, rdi
 * 0000000140BB5E71: mov     r12d, 1
 * 0000000140BB5E77: call    KeGuardDispatchICall
 * 0000000140BB5E7C: mov     r14, rax
 * 0000000140BB5E7F: test    rax, rax
 * 0000000140BB5E82: jz      loc_140BB6075
 * 0000000140BB5E88: xor     edi, edi
 * 0000000140BB5E8A: lea     r13d, [r12+5]
 * 0000000140BB5E8F: mov     rax, [rsi+218h]
 * 0000000140BB5E96: lea     rdx, [rbp+8D0h+var_588]
 * 0000000140BB5E9D: mov     rcx, r14
 * 0000000140BB5EA0: inc     r12d
 * 0000000140BB5EA3: call    KeGuardDispatchICall
 * 0000000140BB5EA8: test    rax, rax
 * 0000000140BB5EAB: jnz     loc_140BB604A
 * 0000000140BB5EB1: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB5EBB: lea     r9d, [rax+1]
 * 0000000140BB5EBF: jz      short loc_140BB5F07
 * 0000000140BB5EC1: mov     rcx, [rsi+0AC8h]
 * 0000000140BB5EC8: lea     edx, [rax+30h]
 * 0000000140BB5ECB: mov     r8, r13
 * 0000000140BB5ECE: mov     rax, [rbx]
 * 0000000140BB5ED1: add     edx, 0FFFFFFF8h
 * 0000000140BB5ED4: mov     [rcx], rax
 * 0000000140BB5ED7: add     rbx, 8
 * 0000000140BB5EDB: add     rcx, 8
 * 0000000140BB5EDF: sub     r8, r9
 * 0000000140BB5EE2: jnz     short loc_140BB5ECE
 * 0000000140BB5EE4: test    edx, edx
 * 0000000140BB5EE6: jz      short loc_140BB5F00
 * 0000000140BB5EE8: mov     esi, 0FFFFFFFFh
 * 0000000140BB5EED: mov     al, [rbx]
 * 0000000140BB5EEF: add     rbx, r9
 * 0000000140BB5EF2: mov     [rcx], al
 * 0000000140BB5EF4: add     rcx, r9
 * 0000000140BB5EF7: add     edx, esi
 * 0000000140BB5EF9: jnz     short loc_140BB5EED
 * 0000000140BB5EFB: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB5F00: mov     rbx, [rsi+0AC8h]
 * 0000000140BB5F07: mov     [rbx+18h], r14
 * 0000000140BB5F0B: mov     [rbx+20h], r15
 * 0000000140BB5F0F: mov     rax, [rsi+588h]
 * 0000000140BB5F16: mov     [rax], rbx
 * 0000000140BB5F19: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BB5F20: mov     rax, [rsi+588h]
 * 0000000140BB5F27: mov     [rax+8], r14
 * 0000000140BB5F2B: mov     dword ptr [rax+14h], 1000h
 * 0000000140BB5F32: cmp     [rsi+918h], edi
 * 0000000140BB5F38: jnz     loc_140BB604A
 * 0000000140BB5F3E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB5F48: add     rax, rsi
 * 0000000140BB5F4B: mov     [rsi+920h], rax
 * 0000000140BB5F52: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB5F5C: add     rax, rbx
 * 0000000140BB5F5F: mov     [rsi+928h], rax
 * 0000000140BB5F66: movsxd  rax, dword ptr [rbx]
 * 0000000140BB5F69: mov     [rsi+930h], rax
 * 0000000140BB5F70: mov     [rsi+938h], r13
 * 0000000140BB5F77: mov     [rsi+918h], r9d
 * 0000000140BB5F7E: mov     ecx, [rsi+9D8h]
 * 0000000140BB5F84: bt      ecx, 1Dh
 * 0000000140BB5F88: jb      loc_140BB604A
 * 0000000140BB5F8E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB5F98: jz      loc_140BB604A
 * 0000000140BB5F9E: test    r9b, cl
 * 0000000140BB5FA1: jz      loc_140BB604A
 * 0000000140BB5FA7: mov     ecx, [rsi+0A74h]
 * 0000000140BB5FAD: mov     eax, [rsi+804h]
 * 0000000140BB5FB3: mov     r10, [rsi+838h]
 * 0000000140BB5FBA: sub     eax, ecx
 * 0000000140BB5FBC: mov     r8, [rsi+0A78h]
 * 0000000140BB5FC3: lea     rdx, [rcx+rsi]
 * 0000000140BB5FC7: mov     ecx, eax
 * 0000000140BB5FC9: shr     rcx, 3
 * 0000000140BB5FCD: lea     r9, [rdx+rcx*8]
 * 0000000140BB5FD1: jmp     short loc_140BB5FF4
 * 0000000140BB5FD3: xor     [rdx], r8
 * 0000000140BB5FD6: mov     rax, [rdx]
 * 0000000140BB5FD9: movzx   ecx, r8b
 * 0000000140BB5FDD: xor     rax, r10
 * 0000000140BB5FE0: and     ecx, 3Fh
 * 0000000140BB5FE3: ror     r8, cl
 * 0000000140BB5FE6: add     r8, rax
 * 0000000140BB5FE9: xor     r8, 0EFAh
 * 0000000140BB5FF0: add     rdx, 8
 * 0000000140BB5FF4: cmp     rdx, r9
 * 0000000140BB5FF7: jnz     short loc_140BB5FD3
 * 0000000140BB5FF9: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB6001: cmp     r8, [rsi+0A80h]
 * 0000000140BB6008: jz      short loc_140BB604A
 * 0000000140BB600A: mov     ecx, [rsi+804h]
 * 0000000140BB6010: mov     rax, [rsi+588h]
 * 0000000140BB6017: mov     [rax], rsi
 * 0000000140BB601A: mov     [rax+10h], ecx
 * 0000000140BB601D: mov     rcx, [rsi+0A80h]
 * 0000000140BB6024: cmp     [rsi+918h], edi
 * 0000000140BB602A: jnz     short loc_140BB603A
 * 0000000140BB602C: mov     rax, [rsi+588h]
 * 0000000140BB6033: xor     rcx, r8
 * 0000000140BB6036: mov     [rax+18h], rcx
 * 0000000140BB603A: xor     edx, edx
 * 0000000140BB603C: mov     r9d, 100h
 * 0000000140BB6042: mov     rcx, rsi
 * 0000000140BB6045: call    sub_140BC7384
 * 0000000140BB604A: mov     rax, [rsi+310h]
 * 0000000140BB6051: lea     rdx, [rbp+8D0h+var_7B0]
 * 0000000140BB6058: mov     rcx, r15
 * 0000000140BB605B: call    KeGuardDispatchICall
 * 0000000140BB6060: mov     r14, rax
 * 0000000140BB6063: test    rax, rax
 * 0000000140BB6066: jnz     loc_140BB5E8F
 * 0000000140BB606C: mov     r13d, [rbp+8D0h+var_948]
 * 0000000140BB6070: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BB6075: mov     rax, [rsi+318h]
 * 0000000140BB607C: add     r13d, r12d
 * 0000000140BB607F: mov     rcx, r15
 * 0000000140BB6082: mov     [rbp+8D0h+var_948], r13d
 * 0000000140BB6086: call    KeGuardDispatchICall
 * 0000000140BB608B: mov     r15, rax
 * 0000000140BB608E: xor     eax, eax
 * 0000000140BB6090: test    r15, r15
 * 0000000140BB6093: jnz     loc_140BB5E56
 * 0000000140BB6099: jmp     loc_140BB8BB8
 * 0000000140BB609E: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB60A8: mov     r13d, r15d
 * 0000000140BB60AB: mov     rax, [rsi+4E8h]
 * 0000000140BB60B2: mov     [rbp+8D0h+var_8B8], rsi
 * 0000000140BB60B6: mov     rbx, [rax]
 * 0000000140BB60B9: mov     [rbp+8D0h+var_900], rbx
 * 0000000140BB60BD: jnz     loc_140BB8BBF
 * 0000000140BB60C3: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BB60C8: mov     rax, [rcx+28h]
 * 0000000140BB60CC: test    rax, rax
 * 0000000140BB60CF: jz      loc_140BB622B
 * 0000000140BB60D5: mov     edx, 1
 * 0000000140BB60DA: mov     r13d, edx
 * 0000000140BB60DD: cmp     rbx, rax
 * 0000000140BB60E0: jz      loc_140BB8BBF
 * 0000000140BB60E6: mov     [rcx+18h], rbx
 * 0000000140BB60EA: mov     rax, [rsi+588h]
 * 0000000140BB60F1: mov     [rax], rcx
 * 0000000140BB60F4: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BB60FB: mov     rax, [rsi+588h]
 * 0000000140BB6102: mov     [rax+8], rbx
 * 0000000140BB6106: mov     [rax+14h], r11d
 * 0000000140BB610A: cmp     [rsi+918h], r15d
 * 0000000140BB6111: jnz     loc_140BB8BBF
 * 0000000140BB6117: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB6121: add     rax, rsi
 * 0000000140BB6124: mov     [rsi+920h], rax
 * 0000000140BB612B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB6135: add     rax, rcx
 * 0000000140BB6138: mov     [rsi+928h], rax
 * 0000000140BB613F: movsxd  rax, dword ptr [rcx]
 * 0000000140BB6142: mov     [rsi+930h], rax
 * 0000000140BB6149: mov     [rsi+938h], r14
 * 0000000140BB6150: mov     [rsi+918h], edx
 * 0000000140BB6156: mov     ecx, [rsi+9D8h]
 * 0000000140BB615C: bt      ecx, 1Dh
 * 0000000140BB6160: jb      loc_140BB8BBF
 * 0000000140BB6166: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB6170: jz      loc_140BB8BBF
 * 0000000140BB6176: test    dl, cl
 * 0000000140BB6178: jz      loc_140BB8BBF
 * 0000000140BB617E: mov     ecx, [rsi+0A74h]
 * 0000000140BB6184: mov     eax, [rsi+804h]
 * 0000000140BB618A: mov     r10, [rsi+838h]
 * 0000000140BB6191: sub     eax, ecx
 * 0000000140BB6193: mov     r8, [rsi+0A78h]
 * 0000000140BB619A: lea     rdx, [rcx+rsi]
 * 0000000140BB619E: mov     ecx, eax
 * 0000000140BB61A0: shr     rcx, 3
 * 0000000140BB61A4: lea     r9, [rdx+rcx*8]
 * 0000000140BB61A8: jmp     short loc_140BB61CB
 * 0000000140BB61AA: xor     [rdx], r8
 * 0000000140BB61AD: mov     rax, [rdx]
 * 0000000140BB61B0: movzx   ecx, r8b
 * 0000000140BB61B4: xor     rax, r10
 * 0000000140BB61B7: and     ecx, 3Fh
 * 0000000140BB61BA: ror     r8, cl
 * 0000000140BB61BD: add     r8, rax
 * 0000000140BB61C0: xor     r8, 0EFAh
 * 0000000140BB61C7: add     rdx, 8
 * 0000000140BB61CB: cmp     rdx, r9
 * 0000000140BB61CE: jnz     short loc_140BB61AA
 * 0000000140BB61D0: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB61D8: cmp     r8, [rsi+0A80h]
 * 0000000140BB61DF: jz      loc_140BB8BBF
 * 0000000140BB61E5: mov     ecx, [rsi+804h]
 * 0000000140BB61EB: mov     rax, [rsi+588h]
 * 0000000140BB61F2: mov     [rax], rsi
 * 0000000140BB61F5: mov     [rax+10h], ecx
 * 0000000140BB61F8: mov     rcx, [rsi+0A80h]
 * 0000000140BB61FF: cmp     [rsi+918h], r15d
 * 0000000140BB6206: jnz     short loc_140BB6216
 * 0000000140BB6208: mov     rax, [rsi+588h]
 * 0000000140BB620F: xor     rcx, r8
 * 0000000140BB6212: mov     [rax+18h], rcx
 * 0000000140BB6216: xor     edx, edx
 * 0000000140BB6218: mov     r9d, 100h
 * 0000000140BB621E: mov     rcx, rsi
 * 0000000140BB6221: call    sub_140BC7384
 * 0000000140BB6226: jmp     loc_140BB8BBF
 * 0000000140BB622B: test    rbx, rbx
 * 0000000140BB622E: jz      loc_140BB8BBF
 * 0000000140BB6234: mov     rax, [rsi+210h]
 * 0000000140BB623B: lea     rdx, [rbp+8D0h+var_230]
 * 0000000140BB6242: mov     rcx, rbx
 * 0000000140BB6245: mov     [rbp+8D0h+var_948], 1
 * 0000000140BB624C: mov     [rbp+8D0h+var_8C0], rsi
 * 0000000140BB6250: call    KeGuardDispatchICall
 * 0000000140BB6255: mov     r15, [rbp+8D0h+BugCheckParameter2]
 * 0000000140BB625C: xor     r13d, r13d
 * 0000000140BB625F: mov     r14d, [rbp+8D0h+var_21C]
 * 0000000140BB6266: mov     r12, rax
 * 0000000140BB6269: mov     [rbp+8D0h+var_930], rax
 * 0000000140BB626D: mov     [rbp+8D0h+var_914], r14d
 * 0000000140BB6271: mov     [rbp+8D0h+var_910], r15
 * 0000000140BB6275: test    r15, r15
 * 0000000140BB6278: jnz     short loc_140BB6294
 * 0000000140BB627A: test    dword ptr [rsi+9D8h], 100000h
 * 0000000140BB6284: jz      loc_140BC24B1
 * 0000000140BB628A: mov     ecx, 0C000007Bh
 * 0000000140BB628F: jmp     loc_140BB84B5
 * 0000000140BB6294: mov     ecx, 4
 * 0000000140BB6299: mov     [rbp+8D0h+var_870], r13
 * 0000000140BB629D: lea     rax, [rbp+8D0h+var_868]
 * 0000000140BB62A1: mov     r8d, 0FFFFFFFFh
 * 0000000140BB62A7: lea     edx, [rcx-3]
 * 0000000140BB62AA: mov     [rax], r13b
 * 0000000140BB62AD: add     rax, rdx
 * 0000000140BB62B0: add     ecx, r8d
 * 0000000140BB62B3: jnz     short loc_140BB62AA
 * 0000000140BB62B5: mov     ebx, r13d
 * 0000000140BB62B8: cmp     [rsi+82Ch], r13d
 * 0000000140BB62BF: jbe     loc_140BB6484
 * 0000000140BB62C5: mov     ecx, [rbp+8D0h+var_868]
 * 0000000140BB62C8: mov     edx, dword ptr [rbp+8D0h+var_870+4]
 * 0000000140BB62CB: mov     r9d, dword ptr [rbp+8D0h+var_870]
 * 0000000140BB62CF: mov     rax, [rsi+0AC0h]
 * 0000000140BB62D6: mov     r11, rsi
 * 0000000140BB62D9: test    rax, rax
 * 0000000140BB62DC: mov     r10d, r13d
 * 0000000140BB62DF: cmovnz  r11, rax
 * 0000000140BB62E3: mov     r8d, [r11+828h]
 * 0000000140BB62EA: add     r8, r11
 * 0000000140BB62ED: test    r9d, r9d
 * 0000000140BB62F0: jz      short loc_140BB62FF
 * 0000000140BB62F2: cmp     edx, ebx
 * 0000000140BB62F4: ja      short loc_140BB62FF
 * 0000000140BB62F6: mov     r8d, ecx
 * 0000000140BB62F9: mov     r10d, edx
 * 0000000140BB62FC: add     r8, r11
 * 0000000140BB62FF: cmp     r10d, ebx
 * 0000000140BB6302: jz      loc_140BB641E
 * 0000000140BB6308: mov     esi, 2
 * 0000000140BB630D: mov     r9d, ebx
 * 0000000140BB6310: sub     r9d, r10d
 * 0000000140BB6313: mov     rdi, 0AAAAAAAAAAAAAAABh
 * 0000000140BB631D: mov     r10d, ebx
 * 0000000140BB6320: lea     r12d, [rsi-1]
 * 0000000140BB6324: mov     ecx, [r8]
 * 0000000140BB6327: sub     ecx, r12d
 * 0000000140BB632A: jz      loc_140BB63E9
 * 0000000140BB6330: sub     ecx, 6
 * 0000000140BB6333: jz      loc_140BB63DB
 * 0000000140BB6339: sub     ecx, r12d
 * 0000000140BB633C: jz      loc_140BB63CE
 * 0000000140BB6342: sub     ecx, esi
 * 0000000140BB6344: jz      short loc_140BB63C2
 * 0000000140BB6346: sub     ecx, 12h
 * 0000000140BB6349: jz      short loc_140BB63BB
 * 0000000140BB634B: sub     ecx, esi
 * 0000000140BB634D: jz      short loc_140BB638F
 * 0000000140BB634F: sub     ecx, 3
 * 0000000140BB6352: jz      short loc_140BB6367
 * 0000000140BB6354: cmp     ecx, 0Ah
 * 0000000140BB6357: jz      loc_140BB63E9
 * 0000000140BB635D: mov     eax, 30h ; '0'
 * 0000000140BB6362: jmp     loc_140BB63FE
 * 0000000140BB6367: mov     ecx, [r8+20h]
 * 0000000140BB636B: mov     edx, [r8+28h]
 * 0000000140BB636F: and     ecx, 0FFFh
 * 0000000140BB6375: add     rdx, 0FFFh
 * 0000000140BB637C: add     rdx, rcx
 * 0000000140BB637F: shr     rdx, 0Ch
 * 0000000140BB6383: lea     eax, [rdx+rdx*4]
 * 0000000140BB6386: lea     eax, ds:30h[rax*4]
 * 0000000140BB638D: jmp     short loc_140BB63FE
 * 0000000140BB638F: mov     eax, [r8+24h]
 * 0000000140BB6393: lea     ecx, [rax-1]
 * 0000000140BB6396: neg     eax
 * 0000000140BB6398: sbb     eax, eax
 * 0000000140BB639A: and     ecx, eax
 * 0000000140BB639C: mov     rax, rdi
 * 0000000140BB639F: mul     rcx
 * 0000000140BB63A2: movzx   eax, word ptr [r8+28h]
 * 0000000140BB63A7: shr     rdx, 3
 * 0000000140BB63AB: add     edx, 7
 * 0000000140BB63AE: and     edx, 0FFFFFFF8h
 * 0000000140BB63B1: add     eax, esi
 * 0000000140BB63B3: lea     eax, [rax+rax*2]
 * 0000000140BB63B6: lea     eax, [rdx+rax*8]
 * 0000000140BB63B9: jmp     short loc_140BB63FE
 * 0000000140BB63BB: movzx   eax, word ptr [r8+28h]
 * 0000000140BB63C0: jmp     short loc_140BB63D3
 * 0000000140BB63C2: mov     eax, [r8+1Ch]
 * 0000000140BB63C6: add     eax, 3
 * 0000000140BB63C9: shl     eax, 4
 * 0000000140BB63CC: jmp     short loc_140BB63FE
 * 0000000140BB63CE: movzx   eax, word ptr [r8+20h]
 * 0000000140BB63D3: add     eax, 37h ; '7'
 * 0000000140BB63D6: and     eax, 0FFFFFFF8h
 * 0000000140BB63D9: jmp     short loc_140BB63FE
 * 0000000140BB63DB: mov     eax, [r8+18h]
 * 0000000140BB63DF: add     eax, esi
 * 0000000140BB63E1: lea     eax, [rax+rax*2]
 * 0000000140BB63E4: shl     eax, 3
 * 0000000140BB63E7: jmp     short loc_140BB63FE
 * 0000000140BB63E9: mov     ecx, [r8+10h]
 * 0000000140BB63ED: mov     rax, rdi
 * 0000000140BB63F0: mul     rcx
 * 0000000140BB63F3: shr     rdx, 3
 * 0000000140BB63F7: lea     eax, ds:30h[rdx*4]
 * 0000000140BB63FE: add     r8, rax
 * 0000000140BB6401: sub     r9, r12
 * 0000000140BB6404: jnz     loc_140BB6324
 * 0000000140BB640A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB640F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB6416: mov     r15, [rbp+8D0h+var_910]
 * 0000000140BB641A: mov     r12, [rbp+8D0h+var_930]
 * 0000000140BB641E: mov     eax, 1
 * 0000000140BB6423: mov     edx, r10d
 * 0000000140BB6426: mov     r9d, eax
 * 0000000140BB6429: mov     dword ptr [rbp+8D0h+var_870], eax
 * 0000000140BB642C: mov     ecx, r8d
 * 0000000140BB642F: mov     dword ptr [rbp+8D0h+var_870+4], edx
 * 0000000140BB6432: sub     ecx, r11d
 * 0000000140BB6435: mov     r10d, r9d
 * 0000000140BB6438: mov     [rbp+8D0h+var_868], ecx
 * 0000000140BB643B: mov     eax, [r8]
 * 0000000140BB643E: cmp     eax, r10d
 * 0000000140BB6441: jz      short loc_140BB6453
 * 0000000140BB6443: mov     r11d, 0Ch
 * 0000000140BB6449: cmp     eax, r11d
 * 0000000140BB644C: jz      short loc_140BB6453
 * 0000000140BB644E: cmp     eax, 2Bh ; '+'
 * 0000000140BB6451: jnz     short loc_140BB6463
 * 0000000140BB6453: cmp     [r8+8], r12
 * 0000000140BB6457: jnz     short loc_140BB6463
 * 0000000140BB6459: cmp     [r8+10h], r14d
 * 0000000140BB645D: jz      loc_140BB6516
 * 0000000140BB6463: add     eax, 0FFFFFFDFh
 * 0000000140BB6466: cmp     eax, r10d
 * 0000000140BB6469: ja      short loc_140BB6475
 * 0000000140BB646B: cmp     [r8+20h], r15
 * 0000000140BB646F: jz      loc_140BB6516
 * 0000000140BB6475: add     ebx, r10d
 * 0000000140BB6478: cmp     ebx, [rsi+82Ch]
 * 0000000140BB647E: jb      loc_140BB62CF
 * 0000000140BB6484: mov     [rbp+8D0h+var_8B0], r13
 * 0000000140BB6488: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BB648B: mov     rbx, [rsi+528h]
 * 0000000140BB6492: mov     dword ptr [rsp+9D0h+var_960], eax
 * 0000000140BB6496: cli
 * 0000000140BB6497: mov     rcx, gs:20h
 * 0000000140BB64A0: mov     rax, [rsi+658h]
 * 0000000140BB64A7: mov     rcx, [rcx+rax]
 * 0000000140BB64AB: sti
 * 0000000140BB64AC: mov     rax, [rsi+178h]
 * 0000000140BB64B3: call    KeGuardDispatchICall
 * 0000000140BB64B8: mov     rcx, [rsi+530h]
 * 0000000140BB64BF: mov     r12d, 1
 * 0000000140BB64C5: mov     rax, [rsi+0F8h]
 * 0000000140BB64CC: mov     dl, r12b
 * 0000000140BB64CF: call    KeGuardDispatchICall
 * 0000000140BB64D4: mov     rdx, [rbx]
 * 0000000140BB64D7: cmp     rdx, rbx
 * 0000000140BB64DA: jz      short loc_140BB653C
 * 0000000140BB64DC: mov     r9, [rsi+758h]
 * 0000000140BB64E3: mov     r10, [rsi+760h]
 * 0000000140BB64EA: mov     r11, [rsi+768h]
 * 0000000140BB64F1: mov     rcx, rdx
 * 0000000140BB64F4: sub     rcx, r9
 * 0000000140BB64F7: mov     rax, [rcx+r10]
 * 0000000140BB64FB: mov     r8d, [rcx+r11]
 * 0000000140BB64FF: add     r8, rax
 * 0000000140BB6502: cmp     r15, rax
 * 0000000140BB6505: jb      short loc_140BB650C
 * 0000000140BB6507: cmp     r15, r8
 * 0000000140BB650A: jb      short loc_140BB652D
 * 0000000140BB650C: mov     rdx, [rdx]
 * 0000000140BB650F: cmp     rdx, rbx
 * 0000000140BB6512: jnz     short loc_140BB64F1
 * 0000000140BB6514: jmp     short loc_140BB653C
 * 0000000140BB6516: mov     [rbp+8D0h+var_8B0], r8
 * 0000000140BB651A: test    r8, r8
 * 0000000140BB651D: jz      loc_140BB6488
 * 0000000140BB6523: mov     ecx, 0C000010Eh
 * 0000000140BB6528: jmp     loc_140BB84B1
 * 0000000140BB652D: mov     rax, [rsi+0E8h]
 * 0000000140BB6534: mov     edx, r12d
 * 0000000140BB6537: call    KeGuardDispatchICall
 * 0000000140BB653C: mov     rcx, [rsi+530h]
 * 0000000140BB6543: mov     rax, [rsi+128h]
 * 0000000140BB654A: call    KeGuardDispatchICall
 * 0000000140BB654F: mov     rax, [rsi+180h]
 * 0000000140BB6556: call    KeGuardDispatchICall
 * 0000000140BB655B: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BB6563: jnb     short loc_140BB657E
 * 0000000140BB6565: mov     r8d, 9
 * 0000000140BB656B: lea     rcx, [rbp+8D0h+var_8B8]
 * 0000000140BB656F: mov     rdx, r15
 * 0000000140BB6572: call    sub_140BCE96C
 * 0000000140BB6577: mov     ecx, eax
 * 0000000140BB6579: jmp     loc_140BB84B1
 * 0000000140BB657E: mov     rax, [rsi+200h]
 * 0000000140BB6585: lea     r9, [rbp+8D0h+var_914]
 * 0000000140BB6589: xor     r8d, r8d
 * 0000000140BB658C: mov     [rbp+8D0h+var_6A8], r13
 * 0000000140BB6593: mov     dl, r12b
 * 0000000140BB6596: mov     [rbp+8D0h+var_7D0], r13d
 * 0000000140BB659D: mov     rcx, r15
 * 0000000140BB65A0: call    KeGuardDispatchICall
 * 0000000140BB65A5: mov     rcx, rax
 * 0000000140BB65A8: test    rax, rax
 * 0000000140BB65AB: jnz     short loc_140BB65B5
 * 0000000140BB65AD: mov     eax, r13d
 * 0000000140BB65B0: mov     [rbp+8D0h+var_914], eax
 * 0000000140BB65B3: jmp     short loc_140BB65B8
 * 0000000140BB65B5: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BB65B8: mov     [rbp+8D0h+var_6C0], rcx
 * 0000000140BB65BF: lea     r9, [rbp+8D0h+var_914]
 * 0000000140BB65C3: mov     [rbp+8D0h+var_7DC], eax
 * 0000000140BB65C9: mov     rcx, r15
 * 0000000140BB65CC: mov     rax, [rsi+200h]
 * 0000000140BB65D3: mov     r8d, 0Ch
 * 0000000140BB65D9: mov     dl, r12b
 * 0000000140BB65DC: call    KeGuardDispatchICall
 * 0000000140BB65E1: mov     [rbp+8D0h+var_920], rax
 * 0000000140BB65E5: mov     rcx, rax
 * 0000000140BB65E8: test    rax, rax
 * 0000000140BB65EB: jnz     short loc_140BB65F5
 * 0000000140BB65ED: mov     eax, r13d
 * 0000000140BB65F0: mov     [rbp+8D0h+var_914], eax
 * 0000000140BB65F3: jmp     short loc_140BB65F8
 * 0000000140BB65F5: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BB65F8: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BB65FE: lea     r9, [rbp+8D0h+var_914]
 * 0000000140BB6602: mov     [rbp+8D0h+var_6B8], rcx
 * 0000000140BB6609: mov     r8d, 0Ah
 * 0000000140BB660F: mov     [rbp+8D0h+var_7D8], eax
 * 0000000140BB6615: mov     rcx, r15
 * 0000000140BB6618: mov     rax, [rsi+200h]
 * 0000000140BB661F: mov     dl, r12b
 * 0000000140BB6622: call    KeGuardDispatchICall
 * 0000000140BB6627: mov     rcx, rax
 * 0000000140BB662A: test    rax, rax
 * 0000000140BB662D: jnz     short loc_140BB6637
 * 0000000140BB662F: mov     eax, r13d
 * 0000000140BB6632: mov     [rbp+8D0h+var_914], eax
 * 0000000140BB6635: jmp     short loc_140BB663A
 * 0000000140BB6637: mov     eax, [rbp+8D0h+var_914]
 * 0000000140BB663A: mov     [rbp+8D0h+var_6B0], rcx
 * 0000000140BB6641: mov     rcx, r15
 * 0000000140BB6644: mov     [rbp+8D0h+var_7D4], eax
 * 0000000140BB664A: mov     rax, [rsi+208h]
 * 0000000140BB6651: call    KeGuardDispatchICall
 * 0000000140BB6656: mov     rbx, rax
 * 0000000140BB6659: test    rax, rax
 * 0000000140BB665C: jnz     loc_140BB6784
 * 0000000140BB6662: mov     ecx, [rsi+9D8h]
 * 0000000140BB6668: bt      ecx, 14h
 * 0000000140BB666C: jnb     loc_140BC24DC
 * 0000000140BB6672: cmp     [rsi+918h], r13d
 * 0000000140BB6679: jnz     loc_140BB677A
 * 0000000140BB667F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB6689: add     rax, rsi
 * 0000000140BB668C: bt      ecx, 1Dh
 * 0000000140BB6690: mov     [rsi+920h], rax
 * 0000000140BB6697: mov     [rsi+928h], r13
 * 0000000140BB669E: mov     qword ptr [rsi+930h], 10Fh
 * 0000000140BB66A9: mov     [rsi+938h], r15
 * 0000000140BB66B0: mov     [rsi+918h], r12d
 * 0000000140BB66B7: jb      loc_140BB677A
 * 0000000140BB66BD: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB66C7: jz      loc_140BB677A
 * 0000000140BB66CD: test    r12b, cl
 * 0000000140BB66D0: jz      loc_140BB677A
 * 0000000140BB66D6: mov     ecx, [rsi+0A74h]
 * 0000000140BB66DC: mov     eax, [rsi+804h]
 * 0000000140BB66E2: mov     r10, [rsi+838h]
 * 0000000140BB66E9: sub     eax, ecx
 * 0000000140BB66EB: mov     r8, [rsi+0A78h]
 * 0000000140BB66F2: lea     rdx, [rcx+rsi]
 * 0000000140BB66F6: mov     ecx, eax
 * 0000000140BB66F8: shr     rcx, 3
 * 0000000140BB66FC: lea     r9, [rdx+rcx*8]
 * 0000000140BB6700: jmp     short loc_140BB6723
 * 0000000140BB6702: xor     [rdx], r8
 * 0000000140BB6705: mov     rax, [rdx]
 * 0000000140BB6708: movzx   ecx, r8b
 * 0000000140BB670C: xor     rax, r10
 * 0000000140BB670F: and     ecx, 3Fh
 * 0000000140BB6712: ror     r8, cl
 * 0000000140BB6715: add     r8, rax
 * 0000000140BB6718: xor     r8, 0EFAh
 * 0000000140BB671F: add     rdx, 8
 * 0000000140BB6723: cmp     rdx, r9
 * 0000000140BB6726: jnz     short loc_140BB6702
 * 0000000140BB6728: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB6730: cmp     r8, [rsi+0A80h]
 * 0000000140BB6737: jz      short loc_140BB677A
 * 0000000140BB6739: mov     ecx, [rsi+804h]
 * 0000000140BB673F: mov     rax, [rsi+588h]
 * 0000000140BB6746: mov     [rax], rsi
 * 0000000140BB6749: mov     [rax+10h], ecx
 * 0000000140BB674C: mov     rcx, [rsi+0A80h]
 * 0000000140BB6753: cmp     [rsi+918h], r13d
 * 0000000140BB675A: jnz     short loc_140BB676A
 * 0000000140BB675C: mov     rax, [rsi+588h]
 * 0000000140BB6763: xor     rcx, r8
 * 0000000140BB6766: mov     [rax+18h], rcx
 * 0000000140BB676A: mov     rcx, rsi
 * 0000000140BB676D: xor     edx, edx
 * 0000000140BB676F: mov     r9d, 100h
 * 0000000140BB6775: call    sub_140BC7384
 * 0000000140BB677A: mov     ecx, 0C000007Bh
 * 0000000140BB677F: jmp     loc_140BB84B1
 * 0000000140BB6784: mov     rax, [rsi+498h]
 * 0000000140BB678B: lea     rdx, [rbp+8D0h+var_6F0]
 * 0000000140BB6792: mov     rcx, r15
 * 0000000140BB6795: call    KeGuardDispatchICall
 * 0000000140BB679A: mov     r8d, [rsi+944h]
 * 0000000140BB67A1: mov     [rbp+8D0h+var_6A0], rax
 * 0000000140BB67A8: mov     eax, [rbp+8D0h+var_6F0]
 * 0000000140BB67AE: mov     [rbp+8D0h+var_7CC], eax
 * 0000000140BB67B4: mov     eax, [rbx+54h]
 * 0000000140BB67B7: mov     [rbp+8D0h+var_6C8], r15
 * 0000000140BB67BE: mov     r15d, [rsi+804h]
 * 0000000140BB67C5: mov     [rbp+8D0h+var_7E0], eax
 * 0000000140BB67CB: lea     eax, [r15+120h]
 * 0000000140BB67D2: cmp     eax, [rsi+0A64h]
 * 0000000140BB67D8: jbe     loc_140BB68C4
 * 0000000140BB67DE: mov     edx, eax
 * 0000000140BB67E0: mov     rcx, rsi
 * 0000000140BB67E3: call    sub_140BC6AF8
 * 0000000140BB67E8: mov     [rsp+9D0h+var_978], rax
 * 0000000140BB67ED: mov     r14, rax
 * 0000000140BB67F0: test    rax, rax
 * 0000000140BB67F3: jnz     short loc_140BB67FE
 * 0000000140BB67F5: mov     [rbp+8D0h+var_8C0], r13
 * 0000000140BB67F9: jmp     loc_140BB6AC2
 * 0000000140BB67FE: mov     ecx, [rsi+9D8h]
 * 0000000140BB6804: mov     eax, 2
 * 0000000140BB6809: test    al, cl
 * 0000000140BB680B: jnz     loc_140BB68BA
 * 0000000140BB6811: mov     eax, [rsi+804h]
 * 0000000140BB6817: and     ecx, 10000000h
 * 0000000140BB681D: mov     r9, [rsi+7E8h]
 * 0000000140BB6824: neg     ecx
 * 0000000140BB6826: mov     rcx, rsi
 * 0000000140BB6829: sbb     r8d, r8d
 * 0000000140BB682C: and     r8d, [rsi+944h]
 * 0000000140BB6833: cmp     eax, 8
 * 0000000140BB6836: jb      short loc_140BB684D
 * 0000000140BB6838: mov     edx, eax
 * 0000000140BB683A: shr     rdx, 3
 * 0000000140BB683E: mov     [rcx], r13
 * 0000000140BB6841: add     eax, 0FFFFFFF8h
 * 0000000140BB6844: add     rcx, 8
 * 0000000140BB6848: sub     rdx, r12
 * 0000000140BB684B: jnz     short loc_140BB683E
 * 0000000140BB684D: test    eax, eax
 * 0000000140BB684F: jz      short loc_140BB6860
 * 0000000140BB6851: mov     edx, 0FFFFFFFFh
 * 0000000140BB6856: mov     [rcx], r13b
 * 0000000140BB6859: add     rcx, r12
 * 0000000140BB685C: add     eax, edx
 * 0000000140BB685E: jnz     short loc_140BB6856
 * 0000000140BB6860: mov     ebx, [r14+944h]
 * 0000000140BB6867: mov     [r14+944h], r8d
 * 0000000140BB686E: cmp     r8d, 3
 * 0000000140BB6872: jz      short loc_140BB68A4
 * 0000000140BB6874: test    dword ptr [r14+9D8h], 8000000h
 * 0000000140BB687F: jnz     short loc_140BB689B
 * 0000000140BB6881: test    r8d, r8d
 * 0000000140BB6884: jz      short loc_140BB689B
 * 0000000140BB6886: mov     rax, [r14+238h]
 * 0000000140BB688D: lea     rcx, [r9-8]
 * 0000000140BB6891: mov     rdx, [rcx]
 * 0000000140BB6894: call    KeGuardDispatchICall
 * 0000000140BB6899: jmp     short loc_140BB68B3
 * 0000000140BB689B: mov     rax, [r14+108h]
 * 0000000140BB68A2: jmp     short loc_140BB68AB
 * 0000000140BB68A4: mov     rax, [r14+368h]
 * 0000000140BB68AB: mov     rcx, r9
 * 0000000140BB68AE: call    KeGuardDispatchICall
 * 0000000140BB68B3: mov     [r14+944h], ebx
 * 0000000140BB68BA: and     dword ptr [r14+9D8h], 0FFFFFFFDh
 * 0000000140BB68C2: jmp     short loc_140BB68D2
 * 0000000140BB68C4: mov     r14, rsi
 * 0000000140BB68C7: mov     [rsp+9D0h+var_978], rsi
 * 0000000140BB68CC: mov     [rsi+804h], eax
 * 0000000140BB68D2: mov     eax, 6
 * 0000000140BB68D7: lea     r12, [r14+r15]
 * 0000000140BB68DB: add     [r14+82Ch], eax
 * 0000000140BB68E2: lea     rdi, [rbp+8D0h+var_6C8]
 * 0000000140BB68E9: mov     [rbp+8D0h+var_7A8], r12
 * 0000000140BB68F0: lea     rsi, [rbp+8D0h+var_7E0]
 * 0000000140BB68F7: mov     [rbp+8D0h+var_8B0], r12
 * 0000000140BB68FB: xor     r10d, r10d
 * 0000000140BB68FE: lea     ebx, [rax-5]
 * 0000000140BB6901: mov     [rsp+9D0h+var_968], rdi
 * 0000000140BB6906: mov     [rbp+8D0h+var_940], rax
 * 0000000140BB690A: mov     r13d, [rsi]
 * 0000000140BB690D: mov     rdx, rax
 * 0000000140BB6910: mov     r15, [rdi]
 * 0000000140BB6913: mov     ecx, 30h ; '0'
 * 0000000140BB6918: mov     [rsp+9D0h+var_958], r13d
 * 0000000140BB691D: mov     rax, r12
 * 0000000140BB6920: mov     [rax], r10
 * 0000000140BB6923: add     ecx, 0FFFFFFF8h
 * 0000000140BB6926: add     rax, 8
 * 0000000140BB692A: sub     rdx, rbx
 * 0000000140BB692D: jnz     short loc_140BB6920
 * 0000000140BB692F: test    ecx, ecx
 * 0000000140BB6931: jz      short loc_140BB6942
 * 0000000140BB6933: mov     edx, 0FFFFFFFFh
 * 0000000140BB6938: mov     [rax], r10b
 * 0000000140BB693B: add     rax, rbx
 * 0000000140BB693E: add     ecx, edx
 * 0000000140BB6940: jnz     short loc_140BB6938
 * 0000000140BB6942: mov     [r12], r10d
 * 0000000140BB6946: lea     rcx, [r15+r13]
 * 0000000140BB694A: mov     [r12+8], r15
 * 0000000140BB694F: mov     r9, r15
 * 0000000140BB6952: mov     [r12+10h], r13d
 * 0000000140BB6957: mov     rax, r15
 * 0000000140BB695A: add     [r14+848h], r13d
 * 0000000140BB6961: mov     r11d, [r14+834h]
 * 0000000140BB6968: mov     rbx, [r14+838h]
 * 0000000140BB696F: cmp     r15, rcx
 * 0000000140BB6972: jnb     short loc_140BB6984
 * 0000000140BB6974: mov     edx, 40h ; '@'
 * 0000000140BB6979: prefetchnta byte ptr [rax]
 * 0000000140BB697C: add     rax, rdx
 * 0000000140BB697F: cmp     rax, rcx
 * 0000000140BB6982: jb      short loc_140BB6979
 * 0000000140BB6984: mov     r10d, r13d
 * 0000000140BB6987: mov     r8, rbx
 * 0000000140BB698A: shr     r10d, 7
 * 0000000140BB698E: test    r10d, r10d
 * 0000000140BB6991: jz      short loc_140BB6A09
 * 0000000140BB6993: mov     rdi, 7010008004002001h
 * 0000000140BB699D: mov     r14d, 1
 * 0000000140BB69A3: mov     r13d, 0FFFFFFFFh
 * 0000000140BB69A9: mov     eax, 8
 * 0000000140BB69AE: xor     r8, [r9]
 * 0000000140BB69B1: mov     ecx, r11d
 * 0000000140BB69B4: rol     r8, cl
 * 0000000140BB69B7: xor     r8, [r9+8]
 * 0000000140BB69BB: add     r9, 10h
 * 0000000140BB69BF: rol     r8, cl
 * 0000000140BB69C2: sub     rax, r14
 * 0000000140BB69C5: jnz     short loc_140BB69AE
 * 0000000140BB69C7: mov     rcx, r9
 * 0000000140BB69CA: sub     rcx, r15
 * 0000000140BB69CD: xor     rcx, rbx
 * 0000000140BB69D0: mov     rax, rcx
 * 0000000140BB69D3: rol     rax, 11h
 * 0000000140BB69D7: xor     rcx, rax
 * 0000000140BB69DA: mov     rax, rdi
 * 0000000140BB69DD: mul     rcx
 * 0000000140BB69E0: xor     r11d, eax
 * 0000000140BB69E3: mov     [rbp+8D0h+var_580], rdx
 * 0000000140BB69EA: xor     r11d, edx
 * 0000000140BB69ED: and     r11d, 3Fh
 * 0000000140BB69F1: cmovz   r11d, r14d
 * 0000000140BB69F5: add     r10d, r13d
 * 0000000140BB69F8: jnz     short loc_140BB69A9
 * 0000000140BB69FA: mov     r14, [rsp+9D0h+var_978]
 * 0000000140BB69FF: mov     r13d, [rsp+9D0h+var_958]
 * 0000000140BB6A04: mov     rdi, [rsp+9D0h+var_968]
 * 0000000140BB6A09: mov     edx, r13d
 * 0000000140BB6A0C: mov     ebx, 1
 * 0000000140BB6A11: and     edx, 7Fh
 * 0000000140BB6A14: cmp     edx, 8
 * 0000000140BB6A17: jb      short loc_140BB6A34
 * 0000000140BB6A19: mov     eax, edx
 * 0000000140BB6A1B: shr     rax, 3
 * 0000000140BB6A1F: xor     r8, [r9]
 * 0000000140BB6A22: mov     ecx, r11d
 * 0000000140BB6A25: rol     r8, cl
 * 0000000140BB6A28: add     r9, 8
 * 0000000140BB6A2C: add     edx, 0FFFFFFF8h
 * 0000000140BB6A2F: sub     rax, rbx
 * 0000000140BB6A32: jnz     short loc_140BB6A1F
 * 0000000140BB6A34: xor     r10d, r10d
 * 0000000140BB6A37: test    edx, edx
 * 0000000140BB6A39: jz      short loc_140BB6A5B
 * 0000000140BB6A3B: mov     r14d, 0FFFFFFFFh
 * 0000000140BB6A41: movzx   eax, byte ptr [r9]
 * 0000000140BB6A45: mov     ecx, r11d
 * 0000000140BB6A48: xor     r8, rax
 * 0000000140BB6A4B: add     r9, rbx
 * 0000000140BB6A4E: rol     r8, cl
 * 0000000140BB6A51: add     edx, r14d
 * 0000000140BB6A54: jnz     short loc_140BB6A41
 * 0000000140BB6A56: mov     r14, [rsp+9D0h+var_978]
 * 0000000140BB6A5B: mov     rax, r8
 * 0000000140BB6A5E: jmp     short loc_140BB6A63
 * 0000000140BB6A60: xor     r8d, eax
 * 0000000140BB6A63: shr     rax, 1Fh
 * 0000000140BB6A67: test    rax, rax
 * 0000000140BB6A6A: jnz     short loc_140BB6A60
 * 0000000140BB6A6C: btr     r8d, 1Fh
 * 0000000140BB6A71: lea     r15d, [rax+4]
 * 0000000140BB6A75: mov     [r12+14h], r8d
 * 0000000140BB6A7A: lea     eax, [r15+2]
 * 0000000140BB6A7E: add     [r14+848h], r13d
 * 0000000140BB6A85: add     rdi, 8
 * 0000000140BB6A89: mov     r12, [rbp+8D0h+var_7A8]
 * 0000000140BB6A90: add     rsi, r15
 * 0000000140BB6A93: add     r12, 30h ; '0'
 * 0000000140BB6A97: mov     [rsp+9D0h+var_968], rdi
 * 0000000140BB6A9C: sub     [rbp+8D0h+var_940], rbx
 * 0000000140BB6AA0: mov     [rbp+8D0h+var_7A8], r12
 * 0000000140BB6AA7: jnz     loc_140BB690A
 * 0000000140BB6AAD: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB6AB2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB6AB9: mov     [rbp+8D0h+var_8C0], r14
 * 0000000140BB6ABD: test    r14, r14
 * 0000000140BB6AC0: jnz     short loc_140BB6ACC
 * 0000000140BB6AC2: mov     ecx, 0C000009Ah
 * 0000000140BB6AC7: jmp     loc_140BB84B1
 * 0000000140BB6ACC: mov     rbx, [rbp+8D0h+var_8B0]
 * 0000000140BB6AD0: mov     r12, [rbp+8D0h+var_910]
 * 0000000140BB6AD4: mov     dword ptr [rbx], 2Ch ; ','
 * 0000000140BB6ADA: mov     [rbx+18h], r12
 * 0000000140BB6ADE: test    dword ptr [r14+9D8h], 8100000h
 * 0000000140BB6AE9: jnz     short loc_140BB6B11
 * 0000000140BB6AEB: bt      dword ptr [r14+9DCh], 0Fh
 * 0000000140BB6AF4: jnb     short loc_140BB6B11
 * 0000000140BB6AF6: mov     ecx, 1
 * 0000000140BB6AFB: mov     rdx, r12
 * 0000000140BB6AFE: or      [rbx+20h], ecx
 * 0000000140BB6B01: mov     rcx, r14
 * 0000000140BB6B04: call    sub_140BC7D30
 * 0000000140BB6B09: test    eax, eax
 * 0000000140BB6B0B: jz      short loc_140BB6B11
 * 0000000140BB6B0D: or      [rbx+20h], r15d
 * 0000000140BB6B11: mov     r8d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BB6B16: lea     rax, [rbp+8D0h+var_830]
 * 0000000140BB6B1D: mov     rdx, [rbp+8D0h+var_930]
 * 0000000140BB6B21: lea     rcx, [rbp+8D0h+var_8C0]
 * 0000000140BB6B25: mov     [rsp+9D0h+var_9A0], rax
 * 0000000140BB6B2A: mov     r9, r12
 * 0000000140BB6B2D: lea     rax, [rbp+8D0h+var_884]
 * 0000000140BB6B31: mov     [rbp+8D0h+var_8B8], r14
 * 0000000140BB6B35: mov     [rsp+9D0h+var_9A8], rax
 * 0000000140BB6B3A: mov     dword ptr [rsp+9D0h+BugCheckParameter4], 9
 * 0000000140BB6B42: call    sub_140BC50B0
 * 0000000140BB6B47: xor     r8d, r8d
 * 0000000140BB6B4A: mov     ecx, eax
 * 0000000140BB6B4C: test    eax, eax
 * 0000000140BB6B4E: js      loc_140BB84B1
 * 0000000140BB6B54: mov     rbx, [rbp+8D0h+var_8C0]
 * 0000000140BB6B58: lea     r10d, [r8+1]
 * 0000000140BB6B5C: mov     rcx, [rbp+8D0h+var_8B0]
 * 0000000140BB6B60: mov     rax, rbx
 * 0000000140BB6B63: mov     r9d, [rbp+8D0h+var_830]
 * 0000000140BB6B6A: sub     rax, r14
 * 0000000140BB6B6D: sub     r9d, [rbp+8D0h+var_884]
 * 0000000140BB6B71: add     rcx, rax
 * 0000000140BB6B74: mov     r15d, [rbp+8D0h+var_884]
 * 0000000140BB6B78: mov     [rbp+8D0h+var_8B0], rcx
 * 0000000140BB6B7C: add     r15, r12
 * 0000000140BB6B7F: mov     [rbp+8D0h+var_8B8], rbx
 * 0000000140BB6B83: lea     r13, [rcx+0C0h]
 * 0000000140BB6B8A: lea     ecx, [r8+30h]
 * 0000000140BB6B8E: mov     rax, r13
 * 0000000140BB6B91: lea     edx, [rcx-2Ah]
 * 0000000140BB6B94: mov     [rax], r8
 * 0000000140BB6B97: add     ecx, 0FFFFFFF8h
 * 0000000140BB6B9A: add     rax, 8
 * 0000000140BB6B9E: sub     rdx, r10
 * 0000000140BB6BA1: jnz     short loc_140BB6B94
 * 0000000140BB6BA3: mov     rdx, r10
 * 0000000140BB6BA6: test    ecx, ecx
 * 0000000140BB6BA8: jz      short loc_140BB6BBB
 * 0000000140BB6BAA: mov     r10d, 0FFFFFFFFh
 * 0000000140BB6BB0: mov     [rax], r8b
 * 0000000140BB6BB3: add     rax, rdx
 * 0000000140BB6BB6: add     ecx, r10d
 * 0000000140BB6BB9: jnz     short loc_140BB6BB0
 * 0000000140BB6BBB: mov     [r13+0], r8d
 * 0000000140BB6BBF: mov     r10, r15
 * 0000000140BB6BC2: mov     [r13+8], r15
 * 0000000140BB6BC6: mov     rax, r15
 * 0000000140BB6BC9: mov     [r13+10h], r9d
 * 0000000140BB6BCD: add     [rbx+848h], r9d
 * 0000000140BB6BD4: mov     r11d, [rbx+834h]
 * 0000000140BB6BDB: mov     r12, [rbx+838h]
 * 0000000140BB6BE2: mov     ecx, r9d
 * 0000000140BB6BE5: add     rcx, r15
 * 0000000140BB6BE8: cmp     r15, rcx
 * 0000000140BB6BEB: jnb     short loc_140BB6BFE
 * 0000000140BB6BED: mov     r8d, 40h ; '@'
 * 0000000140BB6BF3: prefetchnta byte ptr [rax]
 * 0000000140BB6BF6: add     rax, r8
 * 0000000140BB6BF9: cmp     rax, rcx
 * 0000000140BB6BFC: jb      short loc_140BB6BF3
 * 0000000140BB6BFE: mov     r14d, r9d
 * 0000000140BB6C01: mov     r8, r12
 * 0000000140BB6C04: shr     r14d, 7
 * 0000000140BB6C08: test    r14d, r14d
 * 0000000140BB6C0B: jz      short loc_140BB6C7E
 * 0000000140BB6C0D: mov     esi, 0FFFFFFFFh
 * 0000000140BB6C12: mov     rdi, 7010008004002001h
 * 0000000140BB6C1C: mov     eax, 8
 * 0000000140BB6C21: xor     r8, [r10]
 * 0000000140BB6C24: mov     ecx, r11d
 * 0000000140BB6C27: rol     r8, cl
 * 0000000140BB6C2A: xor     r8, [r10+8]
 * 0000000140BB6C2E: add     r10, 10h
 * 0000000140BB6C32: rol     r8, cl
 * 0000000140BB6C35: sub     rax, rdx
 * 0000000140BB6C38: jnz     short loc_140BB6C21
 * 0000000140BB6C3A: mov     rcx, r10
 * 0000000140BB6C3D: sub     rcx, r15
 * 0000000140BB6C40: xor     rcx, r12
 * 0000000140BB6C43: mov     rax, rcx
 * 0000000140BB6C46: rol     rax, 11h
 * 0000000140BB6C4A: xor     rcx, rax
 * 0000000140BB6C4D: mov     rax, rdi
 * 0000000140BB6C50: mul     rcx
 * 0000000140BB6C53: xor     r11d, edx
 * 0000000140BB6C56: mov     [rbp+8D0h+var_578], rdx
 * 0000000140BB6C5D: xor     r11d, eax
 * 0000000140BB6C60: mov     edx, 1
 * 0000000140BB6C65: and     r11d, 3Fh
 * 0000000140BB6C69: cmovz   r11d, edx
 * 0000000140BB6C6D: add     r14d, esi
 * 0000000140BB6C70: jnz     short loc_140BB6C1C
 * 0000000140BB6C72: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB6C77: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB6C7E: and     r9d, 7Fh
 * 0000000140BB6C82: mov     r12d, 1
 * 0000000140BB6C88: cmp     r9d, 8
 * 0000000140BB6C8C: jb      short loc_140BB6CAB
 * 0000000140BB6C8E: mov     eax, r9d
 * 0000000140BB6C91: shr     rax, 3
 * 0000000140BB6C95: xor     r8, [r10]
 * 0000000140BB6C98: mov     ecx, r11d
 * 0000000140BB6C9B: rol     r8, cl
 * 0000000140BB6C9E: add     r10, 8
 * 0000000140BB6CA2: add     r9d, 0FFFFFFF8h
 * 0000000140BB6CA6: sub     rax, r12
 * 0000000140BB6CA9: jnz     short loc_140BB6C95
 * 0000000140BB6CAB: xor     r15d, r15d
 * 0000000140BB6CAE: test    r9d, r9d
 * 0000000140BB6CB1: jz      short loc_140BB6CD2
 * 0000000140BB6CB3: mov     esi, 0FFFFFFFFh
 * 0000000140BB6CB8: movzx   eax, byte ptr [r10]
 * 0000000140BB6CBC: mov     ecx, r11d
 * 0000000140BB6CBF: xor     r8, rax
 * 0000000140BB6CC2: add     r10, r12
 * 0000000140BB6CC5: rol     r8, cl
 * 0000000140BB6CC8: add     r9d, esi
 * 0000000140BB6CCB: jnz     short loc_140BB6CB8
 * 0000000140BB6CCD: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB6CD2: mov     rax, r8
 * 0000000140BB6CD5: jmp     short loc_140BB6CDA
 * 0000000140BB6CD7: xor     r8d, eax
 * 0000000140BB6CDA: shr     rax, 1Fh
 * 0000000140BB6CDE: test    rax, rax
 * 0000000140BB6CE1: jnz     short loc_140BB6CD7
 * 0000000140BB6CE3: btr     r8d, 1Fh
 * 0000000140BB6CE8: mov     [rbp+8D0h+var_8B8], rbx
 * 0000000140BB6CEC: mov     [r13+14h], r8d
 * 0000000140BB6CF0: mov     rax, [rbp+8D0h+var_8B0]
 * 0000000140BB6CF4: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140BB6CFE: mov     rax, [rbp+8D0h+var_8B0]
 * 0000000140BB6D02: add     rax, 60h ; '`'
 * 0000000140BB6D06: mov     [rbp+8D0h+var_860], rax
 * 0000000140BB6D0A: jnz     loc_140BB6FAA
 * 0000000140BB6D10: mov     r14d, [rbx+804h]
 * 0000000140BB6D17: mov     r8d, [rbx+944h]
 * 0000000140BB6D1E: lea     eax, [r14+30h]
 * 0000000140BB6D22: cmp     eax, [rbx+0A64h]
 * 0000000140BB6D28: jbe     loc_140BB6E0D
 * 0000000140BB6D2E: mov     edx, eax
 * 0000000140BB6D30: mov     rcx, rbx
 * 0000000140BB6D33: call    sub_140BC6AF8
 * 0000000140BB6D38: mov     [rsp+9D0h+var_968], rax
 * 0000000140BB6D3D: mov     r13, rax
 * 0000000140BB6D40: test    rax, rax
 * 0000000140BB6D43: jnz     short loc_140BB6D4E
 * 0000000140BB6D45: mov     [rbp+8D0h+var_8C0], r15
 * 0000000140BB6D49: jmp     loc_140BB6AC2
 * 0000000140BB6D4E: mov     ecx, [rbx+9D8h]
 * 0000000140BB6D54: mov     eax, 2
 * 0000000140BB6D59: test    al, cl
 * 0000000140BB6D5B: jnz     loc_140BB6E03
 * 0000000140BB6D61: mov     eax, [rbx+804h]
 * 0000000140BB6D67: and     ecx, 10000000h
 * 0000000140BB6D6D: mov     r8, [rbx+7E8h]
 * 0000000140BB6D74: neg     ecx
 * 0000000140BB6D76: sbb     edx, edx
 * 0000000140BB6D78: and     edx, [rbx+944h]
 * 0000000140BB6D7E: cmp     eax, 8
 * 0000000140BB6D81: jb      short loc_140BB6D98
 * 0000000140BB6D83: mov     ecx, eax
 * 0000000140BB6D85: shr     rcx, 3
 * 0000000140BB6D89: mov     [rbx], r15
 * 0000000140BB6D8C: add     eax, 0FFFFFFF8h
 * 0000000140BB6D8F: add     rbx, 8
 * 0000000140BB6D93: sub     rcx, r12
 * 0000000140BB6D96: jnz     short loc_140BB6D89
 * 0000000140BB6D98: test    eax, eax
 * 0000000140BB6D9A: jz      short loc_140BB6DAB
 * 0000000140BB6D9C: mov     ecx, 0FFFFFFFFh
 * 0000000140BB6DA1: mov     [rbx], r15b
 * 0000000140BB6DA4: add     rbx, r12
 * 0000000140BB6DA7: add     eax, ecx
 * 0000000140BB6DA9: jnz     short loc_140BB6DA1
 * 0000000140BB6DAB: mov     ebx, [r13+944h]
 * 0000000140BB6DB2: mov     [r13+944h], edx
 * 0000000140BB6DB9: cmp     edx, 3
 * 0000000140BB6DBC: jz      short loc_140BB6DED
 * 0000000140BB6DBE: test    dword ptr [r13+9D8h], 8000000h
 * 0000000140BB6DC9: jnz     short loc_140BB6DE4
 * 0000000140BB6DCB: test    edx, edx
 * 0000000140BB6DCD: jz      short loc_140BB6DE4
 * 0000000140BB6DCF: mov     rax, [r13+238h]
 * 0000000140BB6DD6: lea     rcx, [r8-8]
 * 0000000140BB6DDA: mov     rdx, [rcx]
 * 0000000140BB6DDD: call    KeGuardDispatchICall
 * 0000000140BB6DE2: jmp     short loc_140BB6DFC
 * 0000000140BB6DE4: mov     rax, [r13+108h]
 * 0000000140BB6DEB: jmp     short loc_140BB6DF4
 * 0000000140BB6DED: mov     rax, [r13+368h]
 * 0000000140BB6DF4: mov     rcx, r8
 * 0000000140BB6DF7: call    KeGuardDispatchICall
 * 0000000140BB6DFC: mov     [r13+944h], ebx
 * 0000000140BB6E03: and     dword ptr [r13+9D8h], 0FFFFFFFDh
 * 0000000140BB6E0B: jmp     short loc_140BB6E1B
 * 0000000140BB6E0D: mov     r13, rbx
 * 0000000140BB6E10: mov     [rsp+9D0h+var_968], rbx
 * 0000000140BB6E15: mov     [rbx+804h], eax
 * 0000000140BB6E1B: add     [r13+82Ch], r12d
 * 0000000140BB6E22: mov     ecx, 30h ; '0'
 * 0000000140BB6E27: add     r14, r13
 * 0000000140BB6E2A: mov     [rbp+8D0h+var_708], r14
 * 0000000140BB6E31: mov     rax, r14
 * 0000000140BB6E34: lea     edx, [rcx-2Ah]
 * 0000000140BB6E37: mov     [rax], r15
 * 0000000140BB6E3A: add     ecx, 0FFFFFFF8h
 * 0000000140BB6E3D: add     rax, 8
 * 0000000140BB6E41: sub     rdx, r12
 * 0000000140BB6E44: jnz     short loc_140BB6E37
 * 0000000140BB6E46: test    ecx, ecx
 * 0000000140BB6E48: jz      short loc_140BB6E59
 * 0000000140BB6E4A: mov     edx, 0FFFFFFFFh
 * 0000000140BB6E4F: mov     [rax], r15b
 * 0000000140BB6E52: add     rax, r12
 * 0000000140BB6E55: add     ecx, edx
 * 0000000140BB6E57: jnz     short loc_140BB6E4F
 * 0000000140BB6E59: mov     r12, [rbp+8D0h+var_920]
 * 0000000140BB6E5D: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB6E64: mov     r9, r12
 * 0000000140BB6E67: mov     dword ptr [r14], 0Dh
 * 0000000140BB6E6E: mov     [r14+8], r12
 * 0000000140BB6E72: mov     [r14+10h], r15d
 * 0000000140BB6E76: add     [r13+848h], r15d
 * 0000000140BB6E7D: lea     rcx, [r12+r15]
 * 0000000140BB6E81: mov     r10d, [r13+834h]
 * 0000000140BB6E88: mov     rbx, [r13+838h]
 * 0000000140BB6E8F: cmp     r12, rcx
 * 0000000140BB6E92: jnb     short loc_140BB6EA7
 * 0000000140BB6E94: mov     rax, r12
 * 0000000140BB6E97: mov     edx, 40h ; '@'
 * 0000000140BB6E9C: prefetchnta byte ptr [rax]
 * 0000000140BB6E9F: add     rax, rdx
 * 0000000140BB6EA2: cmp     rax, rcx
 * 0000000140BB6EA5: jb      short loc_140BB6E9C
 * 0000000140BB6EA7: mov     r11d, r15d
 * 0000000140BB6EAA: mov     r8, rbx
 * 0000000140BB6EAD: shr     r11d, 7
 * 0000000140BB6EB1: test    r11d, r11d
 * 0000000140BB6EB4: jz      short loc_140BB6F2F
 * 0000000140BB6EB6: mov     esi, 1
 * 0000000140BB6EBB: mov     rdi, 7010008004002001h
 * 0000000140BB6EC5: mov     r15d, 0FFFFFFFFh
 * 0000000140BB6ECB: mov     eax, 8
 * 0000000140BB6ED0: xor     r8, [r9]
 * 0000000140BB6ED3: mov     ecx, r10d
 * 0000000140BB6ED6: rol     r8, cl
 * 0000000140BB6ED9: xor     r8, [r9+8]
 * 0000000140BB6EDD: add     r9, 10h
 * 0000000140BB6EE1: rol     r8, cl
 * 0000000140BB6EE4: sub     rax, rsi
 * 0000000140BB6EE7: jnz     short loc_140BB6ED0
 * 0000000140BB6EE9: mov     rcx, r9
 * 0000000140BB6EEC: sub     rcx, r12
 * 0000000140BB6EEF: xor     rcx, rbx
 * 0000000140BB6EF2: mov     rax, rcx
 * 0000000140BB6EF5: rol     rax, 11h
 * 0000000140BB6EF9: xor     rcx, rax
 * 0000000140BB6EFC: mov     rax, rdi
 * 0000000140BB6EFF: mul     rcx
 * 0000000140BB6F02: xor     r10d, edx
 * 0000000140BB6F05: mov     [rbp+8D0h+var_570], rdx
 * 0000000140BB6F0C: xor     r10d, eax
 * 0000000140BB6F0F: and     r10d, 3Fh
 * 0000000140BB6F13: cmovz   r10d, esi
 * 0000000140BB6F17: add     r11d, r15d
 * 0000000140BB6F1A: jnz     short loc_140BB6ECB
 * 0000000140BB6F1C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB6F21: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB6F28: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB6F2F: mov     edx, r15d
 * 0000000140BB6F32: mov     ebx, 1
 * 0000000140BB6F37: and     edx, 7Fh
 * 0000000140BB6F3A: cmp     edx, 8
 * 0000000140BB6F3D: jb      short loc_140BB6F5A
 * 0000000140BB6F3F: mov     eax, edx
 * 0000000140BB6F41: shr     rax, 3
 * 0000000140BB6F45: xor     r8, [r9]
 * 0000000140BB6F48: mov     ecx, r10d
 * 0000000140BB6F4B: rol     r8, cl
 * 0000000140BB6F4E: add     r9, 8
 * 0000000140BB6F52: add     edx, 0FFFFFFF8h
 * 0000000140BB6F55: sub     rax, rbx
 * 0000000140BB6F58: jnz     short loc_140BB6F45
 * 0000000140BB6F5A: test    edx, edx
 * 0000000140BB6F5C: jz      short loc_140BB6F7C
 * 0000000140BB6F5E: mov     esi, 0FFFFFFFFh
 * 0000000140BB6F63: movzx   eax, byte ptr [r9]
 * 0000000140BB6F67: mov     ecx, r10d
 * 0000000140BB6F6A: xor     r8, rax
 * 0000000140BB6F6D: add     r9, rbx
 * 0000000140BB6F70: rol     r8, cl
 * 0000000140BB6F73: add     edx, esi
 * 0000000140BB6F75: jnz     short loc_140BB6F63
 * 0000000140BB6F77: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB6F7C: mov     rax, r8
 * 0000000140BB6F7F: jmp     short loc_140BB6F84
 * 0000000140BB6F81: xor     r8d, eax
 * 0000000140BB6F84: shr     rax, 1Fh
 * 0000000140BB6F88: test    rax, rax
 * 0000000140BB6F8B: jnz     short loc_140BB6F81
 * 0000000140BB6F8D: btr     r8d, 1Fh
 * 0000000140BB6F92: mov     [r14+14h], r8d
 * 0000000140BB6F96: mov     rax, [rbp+8D0h+var_708]
 * 0000000140BB6F9D: mov     [rbp+8D0h+var_860], rax
 * 0000000140BB6FA1: add     [r13+848h], r15d
 * 0000000140BB6FA8: jmp     short loc_140BB6FC3
 * 0000000140BB6FAA: mov     r15d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB6FB1: mov     r13, rbx
 * 0000000140BB6FB4: mov     r12, [rbp+8D0h+var_920]
 * 0000000140BB6FB8: mov     [rsp+9D0h+var_968], rbx
 * 0000000140BB6FBD: mov     dword ptr [rax], 0Dh
 * 0000000140BB6FC3: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140BB6FCE: jz      short loc_140BB6FEB
 * 0000000140BB6FD0: test    r15d, r15d
 * 0000000140BB6FD3: jz      short loc_140BB6FEB
 * 0000000140BB6FD5: mov     r9, [rbp+8D0h+var_860]
 * 0000000140BB6FD9: mov     r8d, r15d
 * 0000000140BB6FDC: add     r9, 1Ch
 * 0000000140BB6FE0: mov     rdx, r12
 * 0000000140BB6FE3: mov     rcx, r13
 * 0000000140BB6FE6: call    sub_140516AFC
 * 0000000140BB6FEB: mov     rax, [rbp+8D0h+var_860]
 * 0000000140BB6FEF: xor     r15d, r15d
 * 0000000140BB6FF2: mov     [rbp+8D0h+var_8C0], r13
 * 0000000140BB6FF6: mov     [rax+18h], r15d
 * 0000000140BB6FFA: lea     r12d, [r15+1]
 * 0000000140BB6FFE: mov     rax, [rbp+8D0h+var_860]
 * 0000000140BB7002: or      [rax+18h], r12d
 * 0000000140BB7006: test    r13, r13
 * 0000000140BB7009: jz      loc_140BB6AC2
 * 0000000140BB700F: mov     rbx, [rbp+8D0h+var_8B0]
 * 0000000140BB7013: mov     [rbp+8D0h+var_8B8], r13
 * 0000000140BB7017: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140BB7021: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140BB702B: jb      loc_140BB71C9
 * 0000000140BB7031: mov     r15, [rbp+8D0h+var_910]
 * 0000000140BB7035: mov     rax, [r13+208h]
 * 0000000140BB703C: mov     rcx, r15
 * 0000000140BB703F: mov     r14, [rbx+98h]
 * 0000000140BB7046: call    KeGuardDispatchICall
 * 0000000140BB704B: xor     ecx, ecx
 * 0000000140BB704D: test    rax, rax
 * 0000000140BB7050: jnz     short loc_140BB705B
 * 0000000140BB7052: mov     [rbp+8D0h+var_8C0], rcx
 * 0000000140BB7056: jmp     loc_140BB6AC2
 * 0000000140BB705B: mov     r8d, [rax+50h]
 * 0000000140BB705F: mov     edx, [rbx+0B8h]
 * 0000000140BB7065: add     r8, r15
 * 0000000140BB7068: or      edx, 2
 * 0000000140BB706B: mov     [rbx+0B8h], edx
 * 0000000140BB7071: mov     ecx, edx
 * 0000000140BB7073: mov     rax, [r14+70h]
 * 0000000140BB7077: cmp     rax, r15
 * 0000000140BB707A: jb      short loc_140BB7094
 * 0000000140BB707C: cmp     rax, r8
 * 0000000140BB707F: jnb     short loc_140BB7094
 * 0000000140BB7081: mov     rax, [rax]
 * 0000000140BB7084: or      ecx, 4
 * 0000000140BB7087: mov     [rbx+0A8h], rax
 * 0000000140BB708E: mov     [rbx+0B8h], ecx
 * 0000000140BB7094: mov     rax, [r14+78h]
 * 0000000140BB7098: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BB709C: cmp     rax, r14
 * 0000000140BB709F: jb      short loc_140BB70B9
 * 0000000140BB70A1: cmp     rax, r8
 * 0000000140BB70A4: jnb     short loc_140BB70B9
 * 0000000140BB70A6: mov     rax, [rax]
 * 0000000140BB70A9: or      ecx, 8
 * 0000000140BB70AC: mov     [rbx+0B0h], rax
 * 0000000140BB70B3: mov     [rbx+0B8h], ecx
 * 0000000140BB70B9: xor     r15d, r15d
 * 0000000140BB70BC: bt      dword ptr [r13+9D8h], 15h
 * 0000000140BB70C5: mov     [rbp+8D0h+var_8B8], r13
 * 0000000140BB70C9: jnb     loc_140BB84AA
 * 0000000140BB70CF: mov     rax, [r13+208h]
 * 0000000140BB70D6: mov     rcx, r14
 * 0000000140BB70D9: call    KeGuardDispatchICall
 * 0000000140BB70DE: xor     r11d, r11d
 * 0000000140BB70E1: mov     [rbp+8D0h+var_950], rax
 * 0000000140BB70E5: mov     r15, rax
 * 0000000140BB70E8: test    rax, rax
 * 0000000140BB70EB: jz      loc_140BB677A
 * 0000000140BB70F1: movzx   r10d, word ptr [r15+6]
 * 0000000140BB70F6: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BB7100: mov     ecx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BB7104: mul     rcx
 * 0000000140BB7107: mov     word ptr [rbp+8D0h+arg_8], r10w
 * 0000000140BB710F: mov     r9, rdx
 * 0000000140BB7112: shr     r9, 3
 * 0000000140BB7116: mov     [rbp+8D0h+var_940], r9
 * 0000000140BB711A: test    r10w, r10w
 * 0000000140BB711E: jnz     loc_140BB7248
 * 0000000140BB7124: mov     ecx, [r13+9D8h]
 * 0000000140BB712B: bt      ecx, 14h
 * 0000000140BB712F: jnb     loc_140BC2507
 * 0000000140BB7135: xor     r15d, r15d
 * 0000000140BB7138: cmp     [r13+918h], r15d
 * 0000000140BB713F: jnz     loc_140BB677A
 * 0000000140BB7145: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB714F: add     rax, r13
 * 0000000140BB7152: mov     [r13+920h], rax
 * 0000000140BB7159: mov     [r13+928h], r15
 * 0000000140BB7160: mov     qword ptr [r13+930h], 10Fh
 * 0000000140BB716B: mov     [r13+938h], r14
 * 0000000140BB7172: mov     [r13+918h], r12d
 * 0000000140BB7179: bt      ecx, 1Dh
 * 0000000140BB717D: jb      loc_140BB677A
 * 0000000140BB7183: bt      dword ptr [r13+9DCh], 15h
 * 0000000140BB718C: jnb     loc_140BB677A
 * 0000000140BB7192: test    r12b, cl
 * 0000000140BB7195: jz      loc_140BB677A
 * 0000000140BB719B: mov     ecx, [r13+0A74h]
 * 0000000140BB71A2: mov     eax, [r13+804h]
 * 0000000140BB71A9: mov     r10, [r13+838h]
 * 0000000140BB71B0: sub     eax, ecx
 * 0000000140BB71B2: mov     r8, [r13+0A78h]
 * 0000000140BB71B9: lea     rdx, [rcx+r13]
 * 0000000140BB71BD: mov     ecx, eax
 * 0000000140BB71BF: shr     rcx, 3
 * 0000000140BB71C3: lea     r9, [rdx+rcx*8]
 * 0000000140BB71C7: jmp     short loc_140BB71F3
 * 0000000140BB71C9: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BB71CD: jmp     loc_140BB70BC
 * 0000000140BB71D2: xor     [rdx], r8
 * 0000000140BB71D5: mov     rax, [rdx]
 * 0000000140BB71D8: movzx   ecx, r8b
 * 0000000140BB71DC: xor     rax, r10
 * 0000000140BB71DF: and     ecx, 3Fh
 * 0000000140BB71E2: ror     r8, cl
 * 0000000140BB71E5: add     r8, rax
 * 0000000140BB71E8: xor     r8, 0EFAh
 * 0000000140BB71EF: add     rdx, 8
 * 0000000140BB71F3: cmp     rdx, r9
 * 0000000140BB71F6: jnz     short loc_140BB71D2
 * 0000000140BB71F8: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BB7201: cmp     r8, [r13+0A80h]
 * 0000000140BB7208: jz      loc_140BB677A
 * 0000000140BB720E: mov     rax, [r13+588h]
 * 0000000140BB7215: mov     ecx, [r13+804h]
 * 0000000140BB721C: mov     [rax], r13
 * 0000000140BB721F: mov     [rax+10h], ecx
 * 0000000140BB7222: mov     rdx, [r13+0A80h]
 * 0000000140BB7229: cmp     [r13+918h], r15d
 * 0000000140BB7230: jnz     short loc_140BB7240
 * 0000000140BB7232: mov     rax, [r13+588h]
 * 0000000140BB7239: xor     rdx, r8
 * 0000000140BB723C: mov     [rax+18h], rdx
 * 0000000140BB7240: mov     rcx, r13
 * 0000000140BB7243: jmp     loc_140BB676D
 * 0000000140BB7248: mov     rdx, [rbp+8D0h+var_930]
 * 0000000140BB724C: movzx   r12d, word ptr [r15+14h]
 * 0000000140BB7251: mov     r13, rdx
 * 0000000140BB7254: mov     eax, r9d
 * 0000000140BB7257: add     r12, 18h
 * 0000000140BB725B: add     r12, r15
 * 0000000140BB725E: mov     [rsp+9D0h+var_978], r12
 * 0000000140BB7263: lea     rcx, [rax+rax*2]
 * 0000000140BB7267: lea     rax, [rdx+rcx*4]
 * 0000000140BB726B: mov     ecx, r11d
 * 0000000140BB726E: mov     [rbp+8D0h+var_908], rax
 * 0000000140BB7272: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BB7277: mov     [rsp+9D0h+var_958], ecx
 * 0000000140BB727B: mov     rbx, rax
 * 0000000140BB727E: test    r10w, r10w
 * 0000000140BB7282: jz      loc_140BB7828
 * 0000000140BB7288: mov     r11, [rbp+8D0h+var_908]
 * 0000000140BB728C: mov     r8, r12
 * 0000000140BB728F: mov     [rbp+8D0h+var_920], r12
 * 0000000140BB7293: xor     r15d, r15d
 * 0000000140BB7296: mov     edx, [r8+10h]
 * 0000000140BB729A: mov     eax, [r8+8]
 * 0000000140BB729E: cmp     edx, eax
 * 0000000140BB72A0: mov     r9d, [r8+0Ch]
 * 0000000140BB72A4: cmovbe  edx, eax
 * 0000000140BB72A7: mov     [rbp+8D0h+var_928], r9d
 * 0000000140BB72AB: add     edx, r9d
 * 0000000140BB72AE: mov     [rbp+8D0h+var_938], edx
 * 0000000140BB72B1: test    ecx, ecx
 * 0000000140BB72B3: jz      short loc_140BB72CB
 * 0000000140BB72B5: lea     eax, [rcx-1]
 * 0000000140BB72B8: lea     rax, [rax+rax*4]
 * 0000000140BB72BC: cmp     edx, [r12+rax*8+0Ch]
 * 0000000140BB72C1: jb      loc_140BB7643
 * 0000000140BB72C7: mov     ecx, [rsp+9D0h+var_958]
 * 0000000140BB72CB: cmp     r13, r11
 * 0000000140BB72CE: jz      loc_140BB7614
 * 0000000140BB72D4: mov     ecx, [r13+0]
 * 0000000140BB72D8: mov     eax, [r13+4]
 * 0000000140BB72DC: cmp     ecx, edx
 * 0000000140BB72DE: jnb     loc_140BB75FF
 * 0000000140BB72E4: cmp     eax, r9d
 * 0000000140BB72E7: jbe     loc_140BB75FF
 * 0000000140BB72ED: cmp     ecx, r9d
 * 0000000140BB72F0: jb      loc_140BB775A
 * 0000000140BB72F6: cmp     eax, edx
 * 0000000140BB72F8: ja      loc_140BB775A
 * 0000000140BB72FE: mov     eax, [r13+8]
 * 0000000140BB7302: mov     ecx, 1
 * 0000000140BB7307: mov     [rbp+8D0h+var_568], r13
 * 0000000140BB730E: test    cl, al
 * 0000000140BB7310: jnz     short loc_140BB731D
 * 0000000140BB7312: test    byte ptr [rax+r14], 20h
 * 0000000140BB7317: jz      loc_140BB75F1
 * 0000000140BB731D: mov     eax, [r8+8]
 * 0000000140BB7321: mov     rcx, r13
 * 0000000140BB7324: mov     r14d, [r8+10h]
 * 0000000140BB7328: cmp     r14d, eax
 * 0000000140BB732B: mov     r12d, [r8+0Ch]
 * 0000000140BB732F: mov     rdx, [rbp+8D0h+var_910]
 * 0000000140BB7333: cmovbe  r14d, eax
 * 0000000140BB7337: mov     rax, [rbx+418h]
 * 0000000140BB733E: add     r14d, r12d
 * 0000000140BB7341: call    KeGuardDispatchICall
 * 0000000140BB7346: mov     r15, rax
 * 0000000140BB7349: cmp     [rax], r12d
 * 0000000140BB734C: jb      short loc_140BB7358
 * 0000000140BB734E: cmp     [rax+4], r14d
 * 0000000140BB7352: jbe     loc_140BB7486
 * 0000000140BB7358: mov     r8, [rbp+8D0h+var_910]; BugCheckParameter2
 * 0000000140BB735C: mov     ecx, 80000000h
 * 0000000140BB7361: sub     eax, r8d
 * 0000000140BB7364: or      eax, ecx
 * 0000000140BB7366: mov     rcx, rbx
 * 0000000140BB7369: mov     ecx, [rbx+9D8h]
 * 0000000140BB736F: bt      ecx, 14h
 * 0000000140BB7373: jnb     loc_140BC2583
 * 0000000140BB7379: xor     r11d, r11d
 * 0000000140BB737C: cmp     [rbx+918h], r11d
 * 0000000140BB7383: jnz     loc_140BB7486
 * 0000000140BB7389: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB7393: lea     edx, [r11+1]
 * 0000000140BB7397: add     rax, rbx
 * 0000000140BB739A: mov     [rbx+920h], rax
 * 0000000140BB73A1: mov     [rbx+928h], r11
 * 0000000140BB73A8: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BB73B3: mov     [rbx+938h], r8
 * 0000000140BB73BA: mov     [rbx+918h], edx
 * 0000000140BB73C0: bt      ecx, 1Dh
 * 0000000140BB73C4: jb      loc_140BB7486
 * 0000000140BB73CA: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BB73D4: jz      loc_140BB7486
 * 0000000140BB73DA: test    dl, cl
 * 0000000140BB73DC: jz      loc_140BB7486
 * 0000000140BB73E2: mov     ecx, [rbx+0A74h]
 * 0000000140BB73E8: mov     eax, [rbx+804h]
 * 0000000140BB73EE: mov     r10, [rbx+838h]
 * 0000000140BB73F5: sub     eax, ecx
 * 0000000140BB73F7: mov     r8, [rbx+0A78h]
 * 0000000140BB73FE: lea     rdx, [rcx+rbx]
 * 0000000140BB7402: mov     ecx, eax
 * 0000000140BB7404: shr     rcx, 3
 * 0000000140BB7408: lea     r9, [rdx+rcx*8]
 * 0000000140BB740C: jmp     short loc_140BB742F
 * 0000000140BB740E: xor     [rdx], r8
 * 0000000140BB7411: mov     rax, [rdx]
 * 0000000140BB7414: movzx   ecx, r8b
 * 0000000140BB7418: xor     rax, r10
 * 0000000140BB741B: and     ecx, 3Fh
 * 0000000140BB741E: ror     r8, cl
 * 0000000140BB7421: add     r8, rax
 * 0000000140BB7424: xor     r8, 0EFAh
 * 0000000140BB742B: add     rdx, 8
 * 0000000140BB742F: cmp     rdx, r9
 * 0000000140BB7432: jnz     short loc_140BB740E
 * 0000000140BB7434: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140BB743C: cmp     r8, [rbx+0A80h]
 * 0000000140BB7443: jz      short loc_140BB7486
 * 0000000140BB7445: mov     ecx, [rbx+804h]
 * 0000000140BB744B: mov     rax, [rbx+588h]
 * 0000000140BB7452: mov     [rax], rbx
 * 0000000140BB7455: mov     [rax+10h], ecx
 * 0000000140BB7458: mov     rcx, [rbx+0A80h]
 * 0000000140BB745F: cmp     [rbx+918h], r11d
 * 0000000140BB7466: jnz     short loc_140BB7476
 * 0000000140BB7468: mov     rax, [rbx+588h]
 * 0000000140BB746F: xor     rcx, r8
 * 0000000140BB7472: mov     [rax+18h], rcx
 * 0000000140BB7476: xor     edx, edx
 * 0000000140BB7478: mov     r9d, 100h
 * 0000000140BB747E: mov     rcx, rbx
 * 0000000140BB7481: call    sub_140BC7384
 * 0000000140BB7486: mov     r8d, [r15]
 * 0000000140BB7489: mov     rcx, r15
 * 0000000140BB748C: add     r8, [rbp+8D0h+var_910]
 * 0000000140BB7490: mov     rax, [rbx+420h]
 * 0000000140BB7497: mov     rdx, [rbp+8D0h+var_910]
 * 0000000140BB749B: call    KeGuardDispatchICall
 * 0000000140BB74A0: cmp     [rax], r12d
 * 0000000140BB74A3: jb      short loc_140BB74AF
 * 0000000140BB74A5: cmp     [rax+4], r14d
 * 0000000140BB74A9: jbe     loc_140BB75DF
 * 0000000140BB74AF: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BB74B3: mov     ecx, 80000000h
 * 0000000140BB74B8: sub     eax, r14d
 * 0000000140BB74BB: or      eax, ecx
 * 0000000140BB74BD: mov     rcx, rbx
 * 0000000140BB74C0: mov     ecx, [rbx+9D8h]
 * 0000000140BB74C6: bt      ecx, 14h
 * 0000000140BB74CA: jnb     loc_140BC255A
 * 0000000140BB74D0: xor     r15d, r15d
 * 0000000140BB74D3: cmp     [rbx+918h], r15d
 * 0000000140BB74DA: jnz     loc_140BB75E6
 * 0000000140BB74E0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB74EA: lea     edx, [r15+1]
 * 0000000140BB74EE: add     rax, rbx
 * 0000000140BB74F1: mov     [rbx+920h], rax
 * 0000000140BB74F8: mov     [rbx+928h], r15
 * 0000000140BB74FF: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BB750A: mov     [rbx+938h], r14
 * 0000000140BB7511: mov     [rbx+918h], edx
 * 0000000140BB7517: bt      ecx, 1Dh
 * 0000000140BB751B: jb      loc_140BB75E6
 * 0000000140BB7521: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BB752B: jz      loc_140BB75E6
 * 0000000140BB7531: test    dl, cl
 * 0000000140BB7533: jz      loc_140BB75E6
 * 0000000140BB7539: mov     ecx, [rbx+0A74h]
 * 0000000140BB753F: mov     eax, [rbx+804h]
 * 0000000140BB7545: mov     r10, [rbx+838h]
 * 0000000140BB754C: sub     eax, ecx
 * 0000000140BB754E: mov     r8, [rbx+0A78h]
 * 0000000140BB7555: lea     rdx, [rcx+rbx]
 * 0000000140BB7559: mov     ecx, eax
 * 0000000140BB755B: shr     rcx, 3
 * 0000000140BB755F: lea     r9, [rdx+rcx*8]
 * 0000000140BB7563: jmp     short loc_140BB7586
 * 0000000140BB7565: xor     [rdx], r8
 * 0000000140BB7568: mov     rax, [rdx]
 * 0000000140BB756B: movzx   ecx, r8b
 * 0000000140BB756F: xor     rax, r10
 * 0000000140BB7572: and     ecx, 3Fh
 * 0000000140BB7575: ror     r8, cl
 * 0000000140BB7578: add     r8, rax
 * 0000000140BB757B: xor     r8, 0EFAh
 * 0000000140BB7582: add     rdx, 8
 * 0000000140BB7586: cmp     rdx, r9
 * 0000000140BB7589: jnz     short loc_140BB7565
 * 0000000140BB758B: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140BB7593: cmp     r8, [rbx+0A80h]
 * 0000000140BB759A: jz      short loc_140BB75E6
 * 0000000140BB759C: mov     ecx, [rbx+804h]
 * 0000000140BB75A2: mov     rax, [rbx+588h]
 * 0000000140BB75A9: mov     [rax], rbx
 * 0000000140BB75AC: mov     [rax+10h], ecx
 * 0000000140BB75AF: mov     rcx, [rbx+0A80h]
 * 0000000140BB75B6: cmp     [rbx+918h], r15d
 * 0000000140BB75BD: jnz     short loc_140BB75CD
 * 0000000140BB75BF: mov     rax, [rbx+588h]
 * 0000000140BB75C6: xor     rcx, r8
 * 0000000140BB75C9: mov     [rax+18h], rcx
 * 0000000140BB75CD: xor     edx, edx
 * 0000000140BB75CF: mov     r9d, 100h
 * 0000000140BB75D5: mov     rcx, rbx
 * 0000000140BB75D8: call    sub_140BC7384
 * 0000000140BB75DD: jmp     short loc_140BB75E6
 * 0000000140BB75DF: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BB75E3: xor     r15d, r15d
 * 0000000140BB75E6: mov     edx, [rbp+8D0h+var_938]
 * 0000000140BB75E9: mov     r8, [rbp+8D0h+var_920]
 * 0000000140BB75ED: mov     r9d, [rbp+8D0h+var_928]
 * 0000000140BB75F1: add     r13, 0Ch
 * 0000000140BB75F5: cmp     r13, [rbp+8D0h+var_908]
 * 0000000140BB75F9: jnz     loc_140BB72D4
 * 0000000140BB75FF: mov     ecx, [rsp+9D0h+var_958]
 * 0000000140BB7603: movzx   r10d, word ptr [rbp+8D0h+arg_8]
 * 0000000140BB760B: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BB7610: mov     r11, [rbp+8D0h+var_908]
 * 0000000140BB7614: add     r8, 28h ; '('
 * 0000000140BB7618: movzx   eax, r10w
 * 0000000140BB761C: mov     edx, 1
 * 0000000140BB7621: mov     [rbp+8D0h+var_920], r8
 * 0000000140BB7625: add     ecx, edx
 * 0000000140BB7627: mov     [rsp+9D0h+var_958], ecx
 * 0000000140BB762B: cmp     ecx, eax
 * 0000000140BB762D: jb      loc_140BB7296
 * 0000000140BB7633: mov     r9, [rbp+8D0h+var_940]
 * 0000000140BB7637: xor     r11d, r11d
 * 0000000140BB763A: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BB763E: jmp     loc_140BB782D
 * 0000000140BB7643: mov     ecx, [rbx+9D8h]
 * 0000000140BB7649: bt      ecx, 14h
 * 0000000140BB764D: jnb     loc_140BC252F
 * 0000000140BB7653: cmp     [rbx+918h], r15d
 * 0000000140BB765A: jnz     loc_140BB677A
 * 0000000140BB7660: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB766A: mov     edx, 1
 * 0000000140BB766F: add     rax, rbx
 * 0000000140BB7672: mov     [rbx+920h], rax
 * 0000000140BB7679: mov     [rbx+928h], r15
 * 0000000140BB7680: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BB768B: mov     [rbx+938h], r14
 * 0000000140BB7692: mov     [rbx+918h], edx
 * 0000000140BB7698: bt      ecx, 1Dh
 * 0000000140BB769C: jb      loc_140BB677A
 * 0000000140BB76A2: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BB76AC: jz      loc_140BB677A
 * 0000000140BB76B2: test    dl, cl
 * 0000000140BB76B4: jz      loc_140BB677A
 * 0000000140BB76BA: mov     ecx, [rbx+0A74h]
 * 0000000140BB76C0: mov     eax, [rbx+804h]
 * 0000000140BB76C6: mov     r10, [rbx+838h]
 * 0000000140BB76CD: sub     eax, ecx
 * 0000000140BB76CF: mov     r8, [rbx+0A78h]
 * 0000000140BB76D6: lea     rdx, [rcx+rbx]
 * 0000000140BB76DA: mov     ecx, eax
 * 0000000140BB76DC: shr     rcx, 3
 * 0000000140BB76E0: lea     r9, [rdx+rcx*8]
 * 0000000140BB76E4: jmp     short loc_140BB7707
 * 0000000140BB76E6: xor     [rdx], r8
 * 0000000140BB76E9: mov     rax, [rdx]
 * 0000000140BB76EC: movzx   ecx, r8b
 * 0000000140BB76F0: xor     rax, r10
 * 0000000140BB76F3: and     ecx, 3Fh
 * 0000000140BB76F6: ror     r8, cl
 * 0000000140BB76F9: add     r8, rax
 * 0000000140BB76FC: xor     r8, 0EFAh
 * 0000000140BB7703: add     rdx, 8
 * 0000000140BB7707: cmp     rdx, r9
 * 0000000140BB770A: jnz     short loc_140BB76E6
 * 0000000140BB770C: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140BB7714: cmp     r8, [rbx+0A80h]
 * 0000000140BB771B: jz      loc_140BB677A
 * 0000000140BB7721: mov     ecx, [rbx+804h]
 * 0000000140BB7727: mov     rax, [rbx+588h]
 * 0000000140BB772E: mov     [rax], rbx
 * 0000000140BB7731: mov     [rax+10h], ecx
 * 0000000140BB7734: mov     rcx, [rbx+0A80h]
 * 0000000140BB773B: cmp     [rbx+918h], r15d
 * 0000000140BB7742: jnz     short loc_140BB7752
 * 0000000140BB7744: mov     rax, [rbx+588h]
 * 0000000140BB774B: xor     rcx, r8
 * 0000000140BB774E: mov     [rax+18h], rcx
 * 0000000140BB7752: mov     rcx, rbx
 * 0000000140BB7755: jmp     loc_140BB676D
 * 0000000140BB775A: mov     ecx, [rbx+9D8h]
 * 0000000140BB7760: bt      ecx, 14h
 * 0000000140BB7764: jnb     loc_140BC25A9
 * 0000000140BB776A: cmp     [rbx+918h], r15d
 * 0000000140BB7771: jnz     loc_140BB677A
 * 0000000140BB7777: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB7781: mov     edx, 1
 * 0000000140BB7786: add     rax, rbx
 * 0000000140BB7789: mov     [rbx+920h], rax
 * 0000000140BB7790: mov     [rbx+928h], r15
 * 0000000140BB7797: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BB77A2: mov     [rbx+938h], r14
 * 0000000140BB77A9: mov     [rbx+918h], edx
 * 0000000140BB77AF: bt      ecx, 1Dh
 * 0000000140BB77B3: jb      loc_140BB677A
 * 0000000140BB77B9: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BB77C3: jz      loc_140BB677A
 * 0000000140BB77C9: test    dl, cl
 * 0000000140BB77CB: jz      loc_140BB677A
 * 0000000140BB77D1: mov     ecx, [rbx+0A74h]
 * 0000000140BB77D7: mov     eax, [rbx+804h]
 * 0000000140BB77DD: mov     r10, [rbx+838h]
 * 0000000140BB77E4: sub     eax, ecx
 * 0000000140BB77E6: mov     r8, [rbx+0A78h]
 * 0000000140BB77ED: lea     rdx, [rcx+rbx]
 * 0000000140BB77F1: mov     ecx, eax
 * 0000000140BB77F3: shr     rcx, 3
 * 0000000140BB77F7: lea     r9, [rdx+rcx*8]
 * 0000000140BB77FB: jmp     short loc_140BB781E
 * 0000000140BB77FD: xor     [rdx], r8
 * 0000000140BB7800: mov     rax, [rdx]
 * 0000000140BB7803: movzx   ecx, r8b
 * 0000000140BB7807: xor     rax, r10
 * 0000000140BB780A: and     ecx, 3Fh
 * 0000000140BB780D: ror     r8, cl
 * 0000000140BB7810: add     r8, rax
 * 0000000140BB7813: xor     r8, 0EFAh
 * 0000000140BB781A: add     rdx, 8
 * 0000000140BB781E: cmp     rdx, r9
 * 0000000140BB7821: jnz     short loc_140BB77FD
 * 0000000140BB7823: jmp     loc_140BB770C
 * 0000000140BB7828: mov     edx, 1
 * 0000000140BB782D: cmp     r13, [rbp+8D0h+var_908]
 * 0000000140BB7831: jz      loc_140BB7903
 * 0000000140BB7837: mov     ecx, [rbx+9D8h]
 * 0000000140BB783D: bt      ecx, 14h
 * 0000000140BB7841: jnb     loc_140BC25D4
 * 0000000140BB7847: xor     r15d, r15d
 * 0000000140BB784A: cmp     [rbx+918h], r15d
 * 0000000140BB7851: jnz     loc_140BB677A
 * 0000000140BB7857: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB7861: add     rax, rbx
 * 0000000140BB7864: mov     [rbx+920h], rax
 * 0000000140BB786B: mov     [rbx+928h], r15
 * 0000000140BB7872: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140BB787D: mov     [rbx+938h], r14
 * 0000000140BB7884: mov     [rbx+918h], edx
 * 0000000140BB788A: bt      ecx, 1Dh
 * 0000000140BB788E: jb      loc_140BB677A
 * 0000000140BB7894: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140BB789E: jz      loc_140BB677A
 * 0000000140BB78A4: test    dl, cl
 * 0000000140BB78A6: jz      loc_140BB677A
 * 0000000140BB78AC: mov     ecx, [rbx+0A74h]
 * 0000000140BB78B2: mov     eax, [rbx+804h]
 * 0000000140BB78B8: mov     r10, [rbx+838h]
 * 0000000140BB78BF: sub     eax, ecx
 * 0000000140BB78C1: mov     r8, [rbx+0A78h]
 * 0000000140BB78C8: lea     rdx, [rcx+rbx]
 * 0000000140BB78CC: mov     ecx, eax
 * 0000000140BB78CE: shr     rcx, 3
 * 0000000140BB78D2: lea     r9, [rdx+rcx*8]
 * 0000000140BB78D6: jmp     short loc_140BB78F9
 * 0000000140BB78D8: xor     [rdx], r8
 * 0000000140BB78DB: mov     rax, [rdx]
 * 0000000140BB78DE: movzx   ecx, r8b
 * 0000000140BB78E2: xor     rax, r10
 * 0000000140BB78E5: and     ecx, 3Fh
 * 0000000140BB78E8: ror     r8, cl
 * 0000000140BB78EB: add     r8, rax
 * 0000000140BB78EE: xor     r8, 0EFAh
 * 0000000140BB78F5: add     rdx, 8
 * 0000000140BB78F9: cmp     rdx, r9
 * 0000000140BB78FC: jnz     short loc_140BB78D8
 * 0000000140BB78FE: jmp     loc_140BB770C
 * 0000000140BB7903: test    r9d, r9d
 * 0000000140BB7906: jz      short loc_140BB7911
 * 0000000140BB7908: lea     edx, [r9+6]
 * 0000000140BB790C: and     edx, 0FFFFFFF8h
 * 0000000140BB790F: jmp     short loc_140BB7914
 * 0000000140BB7911: mov     edx, r11d
 * 0000000140BB7914: mov     r14d, [rbx+804h]
 * 0000000140BB791B: mov     r8d, [rbx+944h]
 * 0000000140BB7922: movzx   eax, r10w
 * 0000000140BB7926: lea     ecx, [rax+rax*2]
 * 0000000140BB7929: lea     eax, [rdx+rcx*8]
 * 0000000140BB792C: lea     ecx, [r14+30h]
 * 0000000140BB7930: add     ecx, eax
 * 0000000140BB7932: cmp     ecx, [rbx+0A64h]
 * 0000000140BB7938: jbe     loc_140BB7A28
 * 0000000140BB793E: mov     edx, ecx
 * 0000000140BB7940: mov     rcx, rbx
 * 0000000140BB7943: call    sub_140BC6AF8
 * 0000000140BB7948: xor     r11d, r11d
 * 0000000140BB794B: mov     r13, rax
 * 0000000140BB794E: test    rax, rax
 * 0000000140BB7951: jz      loc_140BB6AC2
 * 0000000140BB7957: mov     ecx, [rbx+9D8h]
 * 0000000140BB795D: lea     eax, [r11+2]
 * 0000000140BB7961: test    al, cl
 * 0000000140BB7963: jnz     loc_140BB7A12
 * 0000000140BB7969: mov     eax, [rbx+804h]
 * 0000000140BB796F: lea     r9d, [r11+1]
 * 0000000140BB7973: mov     r8, [rbx+7E8h]
 * 0000000140BB797A: and     ecx, 10000000h
 * 0000000140BB7980: neg     ecx
 * 0000000140BB7982: sbb     edx, edx
 * 0000000140BB7984: and     edx, [rbx+944h]
 * 0000000140BB798A: cmp     eax, 8
 * 0000000140BB798D: jb      short loc_140BB79A4
 * 0000000140BB798F: mov     ecx, eax
 * 0000000140BB7991: shr     rcx, 3
 * 0000000140BB7995: mov     [rbx], r11
 * 0000000140BB7998: add     eax, 0FFFFFFF8h
 * 0000000140BB799B: add     rbx, 8
 * 0000000140BB799F: sub     rcx, r9
 * 0000000140BB79A2: jnz     short loc_140BB7995
 * 0000000140BB79A4: test    eax, eax
 * 0000000140BB79A6: jz      short loc_140BB79B7
 * 0000000140BB79A8: mov     ecx, 0FFFFFFFFh
 * 0000000140BB79AD: mov     [rbx], r11b
 * 0000000140BB79B0: add     rbx, r9
 * 0000000140BB79B3: add     eax, ecx
 * 0000000140BB79B5: jnz     short loc_140BB79AD
 * 0000000140BB79B7: mov     ebx, [r13+944h]
 * 0000000140BB79BE: mov     [r13+944h], edx
 * 0000000140BB79C5: cmp     edx, 3
 * 0000000140BB79C8: jz      short loc_140BB79F9
 * 0000000140BB79CA: test    dword ptr [r13+9D8h], 8000000h
 * 0000000140BB79D5: jnz     short loc_140BB79F0
 * 0000000140BB79D7: test    edx, edx
 * 0000000140BB79D9: jz      short loc_140BB79F0
 * 0000000140BB79DB: mov     rax, [r13+238h]
 * 0000000140BB79E2: lea     rcx, [r8-8]
 * 0000000140BB79E6: mov     rdx, [rcx]
 * 0000000140BB79E9: call    KeGuardDispatchICall
 * 0000000140BB79EE: jmp     short loc_140BB7A08
 * 0000000140BB79F0: mov     rax, [r13+108h]
 * 0000000140BB79F7: jmp     short loc_140BB7A00
 * 0000000140BB79F9: mov     rax, [r13+368h]
 * 0000000140BB7A00: mov     rcx, r8
 * 0000000140BB7A03: call    KeGuardDispatchICall
 * 0000000140BB7A08: mov     [r13+944h], ebx
 * 0000000140BB7A0F: xor     r11d, r11d
 * 0000000140BB7A12: and     dword ptr [r13+9D8h], 0FFFFFFFDh
 * 0000000140BB7A1A: mov     r9, [rbp+8D0h+var_940]
 * 0000000140BB7A1E: movzx   r10d, word ptr [rbp+8D0h+arg_8]
 * 0000000140BB7A26: jmp     short loc_140BB7A31
 * 0000000140BB7A28: mov     r13, rbx
 * 0000000140BB7A2B: mov     [rbx+804h], ecx
 * 0000000140BB7A31: mov     eax, 1
 * 0000000140BB7A36: lea     rdx, [r14+r13]
 * 0000000140BB7A3A: add     [r13+82Ch], eax
 * 0000000140BB7A41: mov     [rbp+8D0h+var_6D0], rdx
 * 0000000140BB7A48: lea     ecx, [rax+2Fh]
 * 0000000140BB7A4B: mov     rax, rdx
 * 0000000140BB7A4E: lea     r8d, [rcx-2Ah]
 * 0000000140BB7A52: lea     r14d, [rcx-2Fh]
 * 0000000140BB7A56: mov     [rax], r11
 * 0000000140BB7A59: add     ecx, 0FFFFFFF8h
 * 0000000140BB7A5C: add     rax, 8
 * 0000000140BB7A60: sub     r8, r14
 * 0000000140BB7A63: jnz     short loc_140BB7A56
 * 0000000140BB7A65: test    ecx, ecx
 * 0000000140BB7A67: jz      short loc_140BB7A7A
 * 0000000140BB7A69: mov     r8d, 0FFFFFFFFh
 * 0000000140BB7A6F: mov     [rax], r11b
 * 0000000140BB7A72: add     rax, r14
 * 0000000140BB7A75: add     ecx, r8d
 * 0000000140BB7A78: jnz     short loc_140BB7A6F
 * 0000000140BB7A7A: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BB7A7E: mov     dword ptr [rdx], 1Eh
 * 0000000140BB7A84: mov     [rdx+8], rbx
 * 0000000140BB7A88: mov     [rdx+10h], r11d
 * 0000000140BB7A8C: mov     rcx, [r13+838h]
 * 0000000140BB7A93: mov     rax, rcx
 * 0000000140BB7A96: jmp     short loc_140BB7A9A
 * 0000000140BB7A98: xor     ecx, eax
 * 0000000140BB7A9A: shr     rax, 1Fh
 * 0000000140BB7A9E: test    rax, rax
 * 0000000140BB7AA1: jnz     short loc_140BB7A98
 * 0000000140BB7AA3: mov     rax, [rbp+8D0h+var_910]
 * 0000000140BB7AA7: btr     ecx, 1Fh
 * 0000000140BB7AAB: mov     [rdx+14h], ecx
 * 0000000140BB7AAE: mov     rcx, [rbp+8D0h+var_6D0]
 * 0000000140BB7AB5: mov     [rbp+8D0h+var_858], rcx
 * 0000000140BB7AB9: mov     [rbp+8D0h+var_8C0], r13
 * 0000000140BB7ABD: mov     [rcx+18h], rax
 * 0000000140BB7AC1: mov     ecx, [r15+50h]
 * 0000000140BB7AC5: xor     r15d, r15d
 * 0000000140BB7AC8: mov     rax, [rbp+8D0h+var_858]
 * 0000000140BB7ACC: mov     [rax+20h], ecx
 * 0000000140BB7ACF: mov     rax, [rbp+8D0h+var_858]
 * 0000000140BB7AD3: mov     ecx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BB7AD7: mov     [rax+24h], ecx
 * 0000000140BB7ADA: mov     rax, [rbp+8D0h+var_858]
 * 0000000140BB7ADE: mov     [rax+28h], r10w
 * 0000000140BB7AE3: mov     rcx, [rbp+8D0h+var_858]
 * 0000000140BB7AE7: lea     rdx, [rcx+30h]
 * 0000000140BB7AEB: mov     [rbp+8D0h+var_940], rdx
 * 0000000140BB7AEF: test    r9d, r9d
 * 0000000140BB7AF2: jz      short loc_140BB7B05
 * 0000000140BB7AF4: lea     r11d, [r9-1]
 * 0000000140BB7AF8: add     r11, 7
 * 0000000140BB7AFC: and     r11, 0FFFFFFFFFFFFFFF8h
 * 0000000140BB7B00: add     r11, rdx
 * 0000000140BB7B03: jmp     short loc_140BB7B08
 * 0000000140BB7B05: mov     r11, rdx
 * 0000000140BB7B08: movzx   eax, word ptr [rcx+28h]
 * 0000000140BB7B0C: mov     [rbp+8D0h+var_920], r11
 * 0000000140BB7B10: lea     rcx, [rax+rax*2]
 * 0000000140BB7B14: lea     r8, [r11+rcx*8]
 * 0000000140BB7B18: mov     [rbp+8D0h+var_950], r8
 * 0000000140BB7B1C: lea     rax, [rbx+0Ch]
 * 0000000140BB7B20: test    r9d, r9d
 * 0000000140BB7B23: jnz     short loc_140BB7B29
 * 0000000140BB7B25: mov     rax, [rbp+8D0h+var_908]
 * 0000000140BB7B29: mov     [rsp+9D0h+var_968], rax
 * 0000000140BB7B2E: cmp     r15w, r10w
 * 0000000140BB7B32: jnb     short loc_140BB7B68
 * 0000000140BB7B34: mov     esi, 2
 * 0000000140BB7B39: movzx   edx, r10w
 * 0000000140BB7B3D: lea     rax, [r11+8]
 * 0000000140BB7B41: lea     r10d, [rsi+0Ah]
 * 0000000140BB7B45: mov     rcx, rsi
 * 0000000140BB7B48: mov     [rax-8], r15d
 * 0000000140BB7B4C: mov     [rax-4], r15d
 * 0000000140BB7B50: mov     dword ptr [rax], 80000000h
 * 0000000140BB7B56: add     rax, r10
 * 0000000140BB7B59: sub     rcx, r14
 * 0000000140BB7B5C: jnz     short loc_140BB7B48
 * 0000000140BB7B5E: sub     rdx, r14
 * 0000000140BB7B61: jnz     short loc_140BB7B45
 * 0000000140BB7B63: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB7B68: cmp     r11, r8
 * 0000000140BB7B6B: jz      loc_140BB84AA
 * 0000000140BB7B71: test    dword ptr [r12+24h], 2000000h
 * 0000000140BB7B7A: mov     [rbp+8D0h+var_938], r15d
 * 0000000140BB7B7E: jnz     short loc_140BB7BC2
 * 0000000140BB7B80: mov     ecx, [r12]
 * 0000000140BB7B84: lea     rax, [r12+4]
 * 0000000140BB7B89: cmp     ecx, 54494E49h
 * 0000000140BB7B8F: jnz     short loc_140BB7B99
 * 0000000140BB7B91: cmp     dword ptr [rax], 4742444Bh
 * 0000000140BB7B97: jz      short loc_140BB7BC2
 * 0000000140BB7B99: cmp     ecx, 45474150h
 * 0000000140BB7B9F: jnz     short loc_140BB7BCE
 * 0000000140BB7BA1: movzx   ecx, word ptr [rax]
 * 0000000140BB7BA4: mov     eax, 7877h
 * 0000000140BB7BA9: cmp     cx, ax
 * 0000000140BB7BAC: jz      short loc_140BB7BC2
 * 0000000140BB7BAE: mov     eax, 7277h
 * 0000000140BB7BB3: cmp     cx, ax
 * 0000000140BB7BB6: jz      short loc_140BB7BC2
 * 0000000140BB7BB8: mov     eax, 7777h
 * 0000000140BB7BBD: cmp     cx, ax
 * 0000000140BB7BC0: jnz     short loc_140BB7BE0
 * 0000000140BB7BC2: mov     r15d, r14d
 * 0000000140BB7BC5: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BB7BC9: jmp     loc_140BB7CB5
 * 0000000140BB7BCE: cmp     ecx, 41525245h
 * 0000000140BB7BD4: jnz     short loc_140BB7BE0
 * 0000000140BB7BD6: mov     ecx, 4154h
 * 0000000140BB7BDB: cmp     [rax], cx
 * 0000000140BB7BDE: jz      short loc_140BB7BC2
 * 0000000140BB7BE0: mov     r9, [r13+958h]
 * 0000000140BB7BE7: mov     r10d, 7
 * 0000000140BB7BED: mov     r11, [r13+960h]
 * 0000000140BB7BF4: mov     rdx, r12
 * 0000000140BB7BF7: mov     rbx, [r13+968h]
 * 0000000140BB7BFE: mov     r8, [r13+950h]
 * 0000000140BB7C05: mov     cl, [rdx]
 * 0000000140BB7C07: add     rdx, r14
 * 0000000140BB7C0A: mov     al, [r8]
 * 0000000140BB7C0D: add     r8, r14
 * 0000000140BB7C10: cmp     cl, al
 * 0000000140BB7C12: jnz     short loc_140BB7C23
 * 0000000140BB7C14: mov     eax, 0FFFFFFFFh
 * 0000000140BB7C19: add     r10d, eax
 * 0000000140BB7C1C: jnz     short loc_140BB7C05
 * 0000000140BB7C1E: jmp     loc_140BB7CA6
 * 0000000140BB7C23: mov     edx, 8
 * 0000000140BB7C28: mov     r8, r12
 * 0000000140BB7C2B: mov     rcx, [r8]
 * 0000000140BB7C2E: add     r8, 8
 * 0000000140BB7C32: mov     rax, [r9]
 * 0000000140BB7C35: add     r9, 8
 * 0000000140BB7C39: cmp     rcx, rax
 * 0000000140BB7C3C: jnz     short loc_140BB7C65
 * 0000000140BB7C3E: add     edx, 0FFFFFFF8h
 * 0000000140BB7C41: cmp     edx, 8
 * 0000000140BB7C44: jnb     short loc_140BB7C2B
 * 0000000140BB7C46: test    edx, edx
 * 0000000140BB7C48: jz      short loc_140BB7CA6
 * 0000000140BB7C4A: mov     cl, [r8]
 * 0000000140BB7C4D: add     r8, r14
 * 0000000140BB7C50: mov     al, [r9]
 * 0000000140BB7C53: add     r9, r14
 * 0000000140BB7C56: cmp     cl, al
 * 0000000140BB7C58: jnz     short loc_140BB7C65
 * 0000000140BB7C5A: mov     eax, 0FFFFFFFFh
 * 0000000140BB7C5F: add     edx, eax
 * 0000000140BB7C61: jnz     short loc_140BB7C4A
 * 0000000140BB7C63: jmp     short loc_140BB7CA6
 * 0000000140BB7C65: mov     r8d, 4
 * 0000000140BB7C6B: mov     rdx, r12
 * 0000000140BB7C6E: mov     r9d, 0FFFFFFFFh
 * 0000000140BB7C74: mov     cl, [rdx]
 * 0000000140BB7C76: add     rdx, r14
 * 0000000140BB7C79: mov     al, [r11]
 * 0000000140BB7C7C: add     r11, r14
 * 0000000140BB7C7F: cmp     cl, al
 * 0000000140BB7C81: jnz     short loc_140BB7C8A
 * 0000000140BB7C83: add     r8d, r9d
 * 0000000140BB7C86: jnz     short loc_140BB7C74
 * 0000000140BB7C88: jmp     short loc_140BB7CA6
 * 0000000140BB7C8A: mov     r8d, 6
 * 0000000140BB7C90: mov     rdx, r12
 * 0000000140BB7C93: mov     cl, [rdx]
 * 0000000140BB7C95: add     rdx, r14
 * 0000000140BB7C98: mov     al, [rbx]
 * 0000000140BB7C9A: add     rbx, r14
 * 0000000140BB7C9D: cmp     cl, al
 * 0000000140BB7C9F: jnz     short loc_140BB7CAD
 * 0000000140BB7CA1: add     r8d, r9d
 * 0000000140BB7CA4: jnz     short loc_140BB7C93
 * 0000000140BB7CA6: mov     r15d, r14d
 * 0000000140BB7CA9: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BB7CAD: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BB7CB1: mov     r11, [rbp+8D0h+var_920]
 * 0000000140BB7CB5: mov     ecx, [r12+24h]
 * 0000000140BB7CBA: xor     r10d, r10d
 * 0000000140BB7CBD: test    ecx, ecx
 * 0000000140BB7CBF: jns     short loc_140BB7CCA
 * 0000000140BB7CC1: mov     r15d, r14d
 * 0000000140BB7CC4: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BB7CC8: jmp     short loc_140BB7CCF
 * 0000000140BB7CCA: test    r15d, r15d
 * 0000000140BB7CCD: jz      short loc_140BB7CF7
 * 0000000140BB7CCF: cmp     dword ptr [r12], 54494E49h
 * 0000000140BB7CD7: jnz     short loc_140BB7CF7
 * 0000000140BB7CD9: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140BB7CE2: jnz     short loc_140BB7CF7
 * 0000000140BB7CE4: test    dword ptr [r13+9DCh], 2000h
 * 0000000140BB7CEF: cmovnz  r15d, r10d
 * 0000000140BB7CF3: mov     [rbp+8D0h+var_938], r15d
 * 0000000140BB7CF7: test    dword ptr [r13+9DCh], 4000h
 * 0000000140BB7D02: mov     r9, [rbp+8D0h+var_910]
 * 0000000140BB7D06: jz      short loc_140BB7D27
 * 0000000140BB7D08: bt      ecx, 1Dh
 * 0000000140BB7D0C: jnb     short loc_140BB7D27
 * 0000000140BB7D0E: cmp     r9, [r13+5E0h]
 * 0000000140BB7D15: jz      short loc_140BB7D20
 * 0000000140BB7D17: cmp     r9, [r13+5E8h]
 * 0000000140BB7D1E: jnz     short loc_140BB7D27
 * 0000000140BB7D20: mov     r15d, r14d
 * 0000000140BB7D23: mov     [rbp+8D0h+var_938], r14d
 * 0000000140BB7D27: mov     edx, [r12+0Ch]
 * 0000000140BB7D2C: mov     r14d, [r12+10h]
 * 0000000140BB7D31: mov     eax, [r12+8]
 * 0000000140BB7D36: cmp     r14d, eax
 * 0000000140BB7D39: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BB7D3D: cmovbe  r14d, eax
 * 0000000140BB7D41: mov     dword ptr [rsp+9D0h+var_960], edx
 * 0000000140BB7D45: add     r14d, edx
 * 0000000140BB7D48: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BB7D4E: mov     [rsp+9D0h+var_958], r14d
 * 0000000140BB7D53: cmp     rbx, r8
 * 0000000140BB7D56: jz      loc_140BB7F1B
 * 0000000140BB7D5C: mov     eax, [rbx]
 * 0000000140BB7D5E: mov     ecx, [rbx+4]
 * 0000000140BB7D61: mov     r12d, ecx
 * 0000000140BB7D64: cmp     eax, edx
 * 0000000140BB7D66: jbe     loc_140BB7F21
 * 0000000140BB7D6C: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BB7D72: cmp     ecx, r14d
 * 0000000140BB7D75: ja      loc_140BB7F40
 * 0000000140BB7D7B: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BB7D81: test    r15d, r15d
 * 0000000140BB7D84: jnz     loc_140BB7F56
 * 0000000140BB7D8A: mov     [r11], edx
 * 0000000140BB7D8D: lea     rbx, [r9+rdx]
 * 0000000140BB7D91: mov     [r11+4], eax
 * 0000000140BB7D95: lea     rdx, [rbp+8D0h+var_7E0]
 * 0000000140BB7D9C: mov     r9d, eax
 * 0000000140BB7D9F: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BB7DA5: sub     r9d, [r11]
 * 0000000140BB7DA8: lea     r8, [rbp+8D0h+var_6C8]
 * 0000000140BB7DAF: mov     r11d, r9d
 * 0000000140BB7DB2: add     r11, rbx
 * 0000000140BB7DB5: mov     rcx, [r8]
 * 0000000140BB7DB8: mov     eax, [rdx]
 * 0000000140BB7DBA: add     rax, rcx
 * 0000000140BB7DBD: cmp     rbx, rax
 * 0000000140BB7DC0: jnb     short loc_140BB7DCB
 * 0000000140BB7DC2: cmp     r11, rcx
 * 0000000140BB7DC5: ja      loc_140BB7F2D
 * 0000000140BB7DCB: inc     r10d
 * 0000000140BB7DCE: add     r8, 8
 * 0000000140BB7DD2: add     rdx, 4
 * 0000000140BB7DD6: cmp     r10d, 6
 * 0000000140BB7DDA: jb      short loc_140BB7DB5
 * 0000000140BB7DDC: add     [r13+848h], r9d
 * 0000000140BB7DE3: mov     r11, rbx
 * 0000000140BB7DE6: mov     r15d, [r13+834h]
 * 0000000140BB7DED: mov     rax, rbx
 * 0000000140BB7DF0: mov     r14, [r13+838h]
 * 0000000140BB7DF7: mov     ecx, r9d
 * 0000000140BB7DFA: add     rcx, rbx
 * 0000000140BB7DFD: cmp     rbx, rcx
 * 0000000140BB7E00: jnb     short loc_140BB7E12
 * 0000000140BB7E02: mov     edx, 40h ; '@'
 * 0000000140BB7E07: prefetchnta byte ptr [rax]
 * 0000000140BB7E0A: add     rax, rdx
 * 0000000140BB7E0D: cmp     rax, rcx
 * 0000000140BB7E10: jb      short loc_140BB7E07
 * 0000000140BB7E12: mov     r10d, r9d
 * 0000000140BB7E15: mov     r8, r14
 * 0000000140BB7E18: shr     r10d, 7
 * 0000000140BB7E1C: mov     edx, 1
 * 0000000140BB7E21: test    r10d, r10d
 * 0000000140BB7E24: jz      short loc_140BB7E96
 * 0000000140BB7E26: mov     esi, 0FFFFFFFFh
 * 0000000140BB7E2B: mov     rdi, 7010008004002001h
 * 0000000140BB7E35: mov     eax, 8
 * 0000000140BB7E3A: xor     r8, [r11]
 * 0000000140BB7E3D: mov     ecx, r15d
 * 0000000140BB7E40: rol     r8, cl
 * 0000000140BB7E43: xor     r8, [r11+8]
 * 0000000140BB7E47: add     r11, 10h
 * 0000000140BB7E4B: rol     r8, cl
 * 0000000140BB7E4E: sub     rax, rdx
 * 0000000140BB7E51: jnz     short loc_140BB7E3A
 * 0000000140BB7E53: mov     rcx, r11
 * 0000000140BB7E56: sub     rcx, rbx
 * 0000000140BB7E59: xor     rcx, r14
 * 0000000140BB7E5C: mov     rax, rcx
 * 0000000140BB7E5F: rol     rax, 11h
 * 0000000140BB7E63: xor     rcx, rax
 * 0000000140BB7E66: mov     rax, rdi
 * 0000000140BB7E69: mul     rcx
 * 0000000140BB7E6C: xor     eax, edx
 * 0000000140BB7E6E: mov     [rbp+8D0h+var_560], rdx
 * 0000000140BB7E75: xor     r15d, eax
 * 0000000140BB7E78: mov     edx, 1
 * 0000000140BB7E7D: and     r15d, 3Fh
 * 0000000140BB7E81: cmovz   r15d, edx
 * 0000000140BB7E85: add     r10d, esi
 * 0000000140BB7E88: jnz     short loc_140BB7E35
 * 0000000140BB7E8A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB7E8F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB7E96: and     r9d, 7Fh
 * 0000000140BB7E9A: cmp     r9d, 8
 * 0000000140BB7E9E: jb      short loc_140BB7EBD
 * 0000000140BB7EA0: mov     eax, r9d
 * 0000000140BB7EA3: shr     rax, 3
 * 0000000140BB7EA7: xor     r8, [r11]
 * 0000000140BB7EAA: mov     ecx, r15d
 * 0000000140BB7EAD: rol     r8, cl
 * 0000000140BB7EB0: add     r11, 8
 * 0000000140BB7EB4: add     r9d, 0FFFFFFF8h
 * 0000000140BB7EB8: sub     rax, rdx
 * 0000000140BB7EBB: jnz     short loc_140BB7EA7
 * 0000000140BB7EBD: xor     r10d, r10d
 * 0000000140BB7EC0: test    r9d, r9d
 * 0000000140BB7EC3: jz      short loc_140BB7EE4
 * 0000000140BB7EC5: mov     esi, 0FFFFFFFFh
 * 0000000140BB7ECA: movzx   eax, byte ptr [r11]
 * 0000000140BB7ECE: mov     ecx, r15d
 * 0000000140BB7ED1: xor     r8, rax
 * 0000000140BB7ED4: add     r11, rdx
 * 0000000140BB7ED7: rol     r8, cl
 * 0000000140BB7EDA: add     r9d, esi
 * 0000000140BB7EDD: jnz     short loc_140BB7ECA
 * 0000000140BB7EDF: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB7EE4: mov     rax, r8
 * 0000000140BB7EE7: jmp     short loc_140BB7EEC
 * 0000000140BB7EE9: xor     r8d, eax
 * 0000000140BB7EEC: shr     rax, 1Fh
 * 0000000140BB7EF0: test    rax, rax
 * 0000000140BB7EF3: jnz     short loc_140BB7EE9
 * 0000000140BB7EF5: mov     rcx, [rbp+8D0h+var_920]
 * 0000000140BB7EF9: btr     r8d, 1Fh
 * 0000000140BB7EFE: mov     r14d, [rsp+9D0h+var_958]
 * 0000000140BB7F03: mov     r15d, [rbp+8D0h+var_938]
 * 0000000140BB7F07: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BB7F0B: mov     [rcx+8], r8d
 * 0000000140BB7F0F: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB7F15: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BB7F19: jmp     short loc_140BB7F42
 * 0000000140BB7F1B: mov     eax, r10d
 * 0000000140BB7F1E: mov     r12d, r10d
 * 0000000140BB7F21: mov     ecx, edx
 * 0000000140BB7F23: cmp     eax, edx
 * 0000000140BB7F25: jb      loc_140BB8298
 * 0000000140BB7F2B: jmp     short loc_140BB7F42
 * 0000000140BB7F2D: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB7F33: xor     r10d, r10d
 * 0000000140BB7F36: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BB7F3A: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BB7F3E: jmp     short loc_140BB7F42
 * 0000000140BB7F40: mov     ecx, edx
 * 0000000140BB7F42: cmp     r12d, r14d
 * 0000000140BB7F45: ja      loc_140BB8298
 * 0000000140BB7F4B: cmp     rbx, r8
 * 0000000140BB7F4E: jz      loc_140BB8298
 * 0000000140BB7F54: jmp     short loc_140BB7F58
 * 0000000140BB7F56: mov     ecx, edx
 * 0000000140BB7F58: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BB7F5D: cmp     rax, r8
 * 0000000140BB7F60: jz      loc_140BB8298
 * 0000000140BB7F66: mov     r12d, [rax+4]
 * 0000000140BB7F6A: cmp     r12d, r14d
 * 0000000140BB7F6D: ja      loc_140BB8298
 * 0000000140BB7F73: mov     ecx, 0Ch
 * 0000000140BB7F78: cmp     rax, r8
 * 0000000140BB7F7B: jz      loc_140BB8292
 * 0000000140BB7F81: test    r15d, r15d
 * 0000000140BB7F84: jz      short loc_140BB7F8E
 * 0000000140BB7F86: mov     r8b, 80h
 * 0000000140BB7F89: jmp     loc_140BB825D
 * 0000000140BB7F8E: mov     r15d, [rax]
 * 0000000140BB7F91: mov     r14d, [rbx+4]
 * 0000000140BB7F95: mov     dword ptr [rbp+8D0h+arg_8], r15d
 * 0000000140BB7F9C: cmp     r15d, r14d
 * 0000000140BB7F9F: jnb     loc_140BB80D0
 * 0000000140BB7FA5: mov     ecx, [r13+9D8h]
 * 0000000140BB7FAC: bt      ecx, 14h
 * 0000000140BB7FB0: jnb     loc_140BC25FF
 * 0000000140BB7FB6: cmp     [r13+918h], r10d
 * 0000000140BB7FBD: jnz     loc_140BB80D0
 * 0000000140BB7FC3: mov     rdx, [rbp+8D0h+var_910]
 * 0000000140BB7FC7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB7FD1: add     rax, r13
 * 0000000140BB7FD4: mov     [r13+920h], rax
 * 0000000140BB7FDB: mov     [r13+928h], r10
 * 0000000140BB7FE2: mov     qword ptr [r13+930h], 10Fh
 * 0000000140BB7FED: mov     [r13+938h], rdx
 * 0000000140BB7FF4: mov     edx, 1
 * 0000000140BB7FF9: mov     [r13+918h], edx
 * 0000000140BB8000: bt      ecx, 1Dh
 * 0000000140BB8004: jb      loc_140BB80D0
 * 0000000140BB800A: test    dword ptr [r13+9DCh], 200000h
 * 0000000140BB8015: jz      loc_140BB80D0
 * 0000000140BB801B: test    dl, cl
 * 0000000140BB801D: jz      loc_140BB80D0
 * 0000000140BB8023: mov     ecx, [r13+0A74h]
 * 0000000140BB802A: mov     eax, [r13+804h]
 * 0000000140BB8031: mov     r10, [r13+838h]
 * 0000000140BB8038: sub     eax, ecx
 * 0000000140BB803A: mov     r8, [r13+0A78h]
 * 0000000140BB8041: lea     rdx, [rcx+r13]
 * 0000000140BB8045: mov     ecx, eax
 * 0000000140BB8047: shr     rcx, 3
 * 0000000140BB804B: lea     r9, [rdx+rcx*8]
 * 0000000140BB804F: jmp     short loc_140BB8072
 * 0000000140BB8051: xor     [rdx], r8
 * 0000000140BB8054: mov     rax, [rdx]
 * 0000000140BB8057: movzx   ecx, r8b
 * 0000000140BB805B: xor     rax, r10
 * 0000000140BB805E: and     ecx, 3Fh
 * 0000000140BB8061: ror     r8, cl
 * 0000000140BB8064: add     r8, rax
 * 0000000140BB8067: xor     r8, 0EFAh
 * 0000000140BB806E: add     rdx, 8
 * 0000000140BB8072: cmp     rdx, r9
 * 0000000140BB8075: jnz     short loc_140BB8051
 * 0000000140BB8077: btr     dword ptr [r13+9DCh], 15h
 * 0000000140BB8080: cmp     r8, [r13+0A80h]
 * 0000000140BB8087: jz      short loc_140BB80CD
 * 0000000140BB8089: mov     rax, [r13+588h]
 * 0000000140BB8090: mov     ecx, [r13+804h]
 * 0000000140BB8097: mov     [rax], r13
 * 0000000140BB809A: mov     [rax+10h], ecx
 * 0000000140BB809D: xor     eax, eax
 * 0000000140BB809F: mov     rcx, [r13+0A80h]
 * 0000000140BB80A6: cmp     [r13+918h], eax
 * 0000000140BB80AD: jnz     short loc_140BB80BD
 * 0000000140BB80AF: mov     rax, [r13+588h]
 * 0000000140BB80B6: xor     rcx, r8
 * 0000000140BB80B9: mov     [rax+18h], rcx
 * 0000000140BB80BD: xor     edx, edx
 * 0000000140BB80BF: mov     r9d, 100h
 * 0000000140BB80C5: mov     rcx, r13
 * 0000000140BB80C8: call    sub_140BC7384
 * 0000000140BB80CD: xor     r10d, r10d
 * 0000000140BB80D0: mov     r9d, r15d
 * 0000000140BB80D3: lea     rdx, [rbp+8D0h+var_7E0]
 * 0000000140BB80DA: sub     r9d, r14d
 * 0000000140BB80DD: lea     r8, [rbp+8D0h+var_6C8]
 * 0000000140BB80E4: mov     rbx, r14
 * 0000000140BB80E7: mov     r11d, r9d
 * 0000000140BB80EA: add     rbx, [rbp+8D0h+var_910]
 * 0000000140BB80EE: add     r11, rbx
 * 0000000140BB80F1: mov     rcx, [r8]
 * 0000000140BB80F4: mov     eax, [rdx]
 * 0000000140BB80F6: add     rax, rcx
 * 0000000140BB80F9: cmp     rbx, rax
 * 0000000140BB80FC: jnb     short loc_140BB8107
 * 0000000140BB80FE: cmp     r11, rcx
 * 0000000140BB8101: ja      loc_140BB8245
 * 0000000140BB8107: mov     eax, 4
 * 0000000140BB810C: inc     r10d
 * 0000000140BB810F: add     rdx, rax
 * 0000000140BB8112: add     r8, 8
 * 0000000140BB8116: cmp     r10d, 6
 * 0000000140BB811A: jb      short loc_140BB80F1
 * 0000000140BB811C: cmp     r9d, eax
 * 0000000140BB811F: jb      loc_140BB8245
 * 0000000140BB8125: add     [r13+848h], r9d
 * 0000000140BB812C: mov     r11, rbx
 * 0000000140BB812F: mov     r14d, [r13+834h]
 * 0000000140BB8136: mov     rax, rbx
 * 0000000140BB8139: mov     r15, [r13+838h]
 * 0000000140BB8140: mov     ecx, r9d
 * 0000000140BB8143: add     rcx, rbx
 * 0000000140BB8146: cmp     rbx, rcx
 * 0000000140BB8149: jnb     short loc_140BB815B
 * 0000000140BB814B: mov     edx, 40h ; '@'
 * 0000000140BB8150: prefetchnta byte ptr [rax]
 * 0000000140BB8153: add     rax, rdx
 * 0000000140BB8156: cmp     rax, rcx
 * 0000000140BB8159: jb      short loc_140BB8150
 * 0000000140BB815B: mov     r10d, r9d
 * 0000000140BB815E: mov     r8, r15
 * 0000000140BB8161: shr     r10d, 7
 * 0000000140BB8165: mov     edx, 1
 * 0000000140BB816A: test    r10d, r10d
 * 0000000140BB816D: jz      short loc_140BB81E0
 * 0000000140BB816F: mov     esi, 0FFFFFFFFh
 * 0000000140BB8174: mov     rdi, 7010008004002001h
 * 0000000140BB817E: mov     eax, 8
 * 0000000140BB8183: xor     r8, [r11]
 * 0000000140BB8186: mov     ecx, r14d
 * 0000000140BB8189: rol     r8, cl
 * 0000000140BB818C: xor     r8, [r11+8]
 * 0000000140BB8190: add     r11, 10h
 * 0000000140BB8194: rol     r8, cl
 * 0000000140BB8197: sub     rax, rdx
 * 0000000140BB819A: jnz     short loc_140BB8183
 * 0000000140BB819C: mov     rcx, r11
 * 0000000140BB819F: sub     rcx, rbx
 * 0000000140BB81A2: xor     rcx, r15
 * 0000000140BB81A5: mov     rax, rcx
 * 0000000140BB81A8: rol     rax, 11h
 * 0000000140BB81AC: xor     rcx, rax
 * 0000000140BB81AF: mov     rax, rdi
 * 0000000140BB81B2: mul     rcx
 * 0000000140BB81B5: xor     r14d, eax
 * 0000000140BB81B8: mov     [rbp+8D0h+var_558], rdx
 * 0000000140BB81BF: xor     r14d, edx
 * 0000000140BB81C2: mov     edx, 1
 * 0000000140BB81C7: and     r14d, 3Fh
 * 0000000140BB81CB: cmovz   r14d, edx
 * 0000000140BB81CF: add     r10d, esi
 * 0000000140BB81D2: jnz     short loc_140BB817E
 * 0000000140BB81D4: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB81D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB81E0: and     r9d, 7Fh
 * 0000000140BB81E4: cmp     r9d, 8
 * 0000000140BB81E8: jb      short loc_140BB8207
 * 0000000140BB81EA: mov     eax, r9d
 * 0000000140BB81ED: shr     rax, 3
 * 0000000140BB81F1: xor     r8, [r11]
 * 0000000140BB81F4: mov     ecx, r14d
 * 0000000140BB81F7: rol     r8, cl
 * 0000000140BB81FA: add     r11, 8
 * 0000000140BB81FE: add     r9d, 0FFFFFFF8h
 * 0000000140BB8202: sub     rax, rdx
 * 0000000140BB8205: jnz     short loc_140BB81F1
 * 0000000140BB8207: xor     r10d, r10d
 * 0000000140BB820A: test    r9d, r9d
 * 0000000140BB820D: jz      short loc_140BB822E
 * 0000000140BB820F: mov     esi, 0FFFFFFFFh
 * 0000000140BB8214: movzx   eax, byte ptr [r11]
 * 0000000140BB8218: mov     ecx, r14d
 * 0000000140BB821B: xor     r8, rax
 * 0000000140BB821E: add     r11, rdx
 * 0000000140BB8221: rol     r8, cl
 * 0000000140BB8224: add     r9d, esi
 * 0000000140BB8227: jnz     short loc_140BB8214
 * 0000000140BB8229: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB822E: mov     rax, r8
 * 0000000140BB8231: jmp     short loc_140BB8236
 * 0000000140BB8233: xor     r8b, al
 * 0000000140BB8236: shr     rax, 7
 * 0000000140BB823A: test    rax, rax
 * 0000000140BB823D: jnz     short loc_140BB8233
 * 0000000140BB823F: and     r8b, 7Fh
 * 0000000140BB8243: jmp     short loc_140BB824B
 * 0000000140BB8245: xor     r10d, r10d
 * 0000000140BB8248: mov     r8b, 80h
 * 0000000140BB824B: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BB824F: mov     ecx, 0Ch
 * 0000000140BB8254: mov     r15d, [rbp+8D0h+var_938]
 * 0000000140BB8258: mov     r14d, [rsp+9D0h+var_958]
 * 0000000140BB825D: mov     rax, [rbp+8D0h+var_940]
 * 0000000140BB8261: add     rbx, rcx
 * 0000000140BB8264: inc     [rbp+8D0h+var_940]
 * 0000000140BB8268: mov     [rbp+8D0h+var_930], rbx
 * 0000000140BB826C: mov     [rax], r8b
 * 0000000140BB826F: mov     rax, [rsp+9D0h+var_968]
 * 0000000140BB8274: mov     r8, [rbp+8D0h+var_908]
 * 0000000140BB8278: add     rax, rcx
 * 0000000140BB827B: mov     [rsp+9D0h+var_968], rax
 * 0000000140BB8280: cmp     rax, r8
 * 0000000140BB8283: jz      short loc_140BB8289
 * 0000000140BB8285: mov     r12d, [rax+4]
 * 0000000140BB8289: cmp     r12d, r14d
 * 0000000140BB828C: jbe     loc_140BB7F78
 * 0000000140BB8292: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BB8298: test    r15d, r15d
 * 0000000140BB829B: jnz     loc_140BB842D
 * 0000000140BB82A1: cmp     ecx, r14d
 * 0000000140BB82A4: jz      loc_140BB842D
 * 0000000140BB82AA: mov     rax, [rbp+8D0h+var_920]
 * 0000000140BB82AE: lea     rdx, [rbp+8D0h+var_7E0]
 * 0000000140BB82B5: mov     r9d, r14d
 * 0000000140BB82B8: lea     r8, [rbp+8D0h+var_6C8]
 * 0000000140BB82BF: mov     [rax+0Ch], ecx
 * 0000000140BB82C2: mov     [rax+10h], r14d
 * 0000000140BB82C6: mov     eax, [rax+0Ch]
 * 0000000140BB82C9: sub     r9d, eax
 * 0000000140BB82CC: mov     ebx, eax
 * 0000000140BB82CE: add     rbx, [rbp+8D0h+var_910]
 * 0000000140BB82D2: mov     r11d, r9d
 * 0000000140BB82D5: add     r11, rbx
 * 0000000140BB82D8: xor     r15d, r15d
 * 0000000140BB82DB: mov     r10d, r15d
 * 0000000140BB82DE: lea     r12d, [r15+1]
 * 0000000140BB82E2: mov     rcx, [r8]
 * 0000000140BB82E5: mov     eax, [rdx]
 * 0000000140BB82E7: add     rax, rcx
 * 0000000140BB82EA: cmp     rbx, rax
 * 0000000140BB82ED: jnb     short loc_140BB82F8
 * 0000000140BB82EF: cmp     r11, rcx
 * 0000000140BB82F2: ja      loc_140BB8427
 * 0000000140BB82F8: add     r10d, r12d
 * 0000000140BB82FB: add     r8, 8
 * 0000000140BB82FF: add     rdx, 4
 * 0000000140BB8303: cmp     r10d, 6
 * 0000000140BB8307: jb      short loc_140BB82E2
 * 0000000140BB8309: add     [r13+848h], r9d
 * 0000000140BB8310: mov     r10, rbx
 * 0000000140BB8313: mov     r14d, [r13+834h]
 * 0000000140BB831A: mov     rax, rbx
 * 0000000140BB831D: mov     r15, [r13+838h]
 * 0000000140BB8324: mov     ecx, r9d
 * 0000000140BB8327: add     rcx, rbx
 * 0000000140BB832A: cmp     rbx, rcx
 * 0000000140BB832D: jnb     short loc_140BB833F
 * 0000000140BB832F: mov     edx, 40h ; '@'
 * 0000000140BB8334: prefetchnta byte ptr [rax]
 * 0000000140BB8337: add     rax, rdx
 * 0000000140BB833A: cmp     rax, rcx
 * 0000000140BB833D: jb      short loc_140BB8334
 * 0000000140BB833F: mov     r11d, r9d
 * 0000000140BB8342: mov     r8, r15
 * 0000000140BB8345: shr     r11d, 7
 * 0000000140BB8349: test    r11d, r11d
 * 0000000140BB834C: jz      short loc_140BB83B5
 * 0000000140BB834E: mov     rsi, 7010008004002001h
 * 0000000140BB8358: mov     eax, 8
 * 0000000140BB835D: xor     r8, [r10]
 * 0000000140BB8360: mov     ecx, r14d
 * 0000000140BB8363: rol     r8, cl
 * 0000000140BB8366: xor     r8, [r10+8]
 * 0000000140BB836A: add     r10, 10h
 * 0000000140BB836E: rol     r8, cl
 * 0000000140BB8371: sub     rax, r12
 * 0000000140BB8374: jnz     short loc_140BB835D
 * 0000000140BB8376: mov     rcx, r10
 * 0000000140BB8379: sub     rcx, rbx
 * 0000000140BB837C: xor     rcx, r15
 * 0000000140BB837F: mov     rax, rcx
 * 0000000140BB8382: rol     rax, 11h
 * 0000000140BB8386: xor     rcx, rax
 * 0000000140BB8389: mov     rax, rsi
 * 0000000140BB838C: mul     rcx
 * 0000000140BB838F: xor     r14d, eax
 * 0000000140BB8392: mov     [rbp+8D0h+var_550], rdx
 * 0000000140BB8399: xor     r14d, edx
 * 0000000140BB839C: mov     edx, 0FFFFFFFFh
 * 0000000140BB83A1: and     r14d, 3Fh
 * 0000000140BB83A5: cmovz   r14d, r12d
 * 0000000140BB83A9: add     r11d, edx
 * 0000000140BB83AC: jnz     short loc_140BB8358
 * 0000000140BB83AE: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB83B3: jmp     short loc_140BB83BA
 * 0000000140BB83B5: mov     edx, 0FFFFFFFFh
 * 0000000140BB83BA: and     r9d, 7Fh
 * 0000000140BB83BE: cmp     r9d, 8
 * 0000000140BB83C2: jb      short loc_140BB83E1
 * 0000000140BB83C4: mov     eax, r9d
 * 0000000140BB83C7: shr     rax, 3
 * 0000000140BB83CB: xor     r8, [r10]
 * 0000000140BB83CE: mov     ecx, r14d
 * 0000000140BB83D1: rol     r8, cl
 * 0000000140BB83D4: add     r10, 8
 * 0000000140BB83D8: add     r9d, 0FFFFFFF8h
 * 0000000140BB83DC: sub     rax, r12
 * 0000000140BB83DF: jnz     short loc_140BB83CB
 * 0000000140BB83E1: xor     r15d, r15d
 * 0000000140BB83E4: test    r9d, r9d
 * 0000000140BB83E7: jz      short loc_140BB83FE
 * 0000000140BB83E9: movzx   eax, byte ptr [r10]
 * 0000000140BB83ED: mov     ecx, r14d
 * 0000000140BB83F0: xor     r8, rax
 * 0000000140BB83F3: add     r10, r12
 * 0000000140BB83F6: rol     r8, cl
 * 0000000140BB83F9: add     r9d, edx
 * 0000000140BB83FC: jnz     short loc_140BB83E9
 * 0000000140BB83FE: mov     rax, r8
 * 0000000140BB8401: jmp     short loc_140BB8406
 * 0000000140BB8403: xor     r8d, eax
 * 0000000140BB8406: shr     rax, 1Fh
 * 0000000140BB840A: test    rax, rax
 * 0000000140BB840D: jnz     short loc_140BB8403
 * 0000000140BB840F: mov     r11, [rbp+8D0h+var_920]
 * 0000000140BB8413: btr     r8d, 1Fh
 * 0000000140BB8418: mov     r14d, [rsp+9D0h+var_958]
 * 0000000140BB841D: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BB8421: mov     [r11+14h], r8d
 * 0000000140BB8425: jmp     short loc_140BB8434
 * 0000000140BB8427: mov     rbx, [rbp+8D0h+var_930]
 * 0000000140BB842B: jmp     short loc_140BB8430
 * 0000000140BB842D: xor     r15d, r15d
 * 0000000140BB8430: mov     r11, [rbp+8D0h+var_920]
 * 0000000140BB8434: mov     rdx, [rbp+8D0h+var_908]
 * 0000000140BB8438: cmp     rbx, rdx
 * 0000000140BB843B: jz      short loc_140BB8480
 * 0000000140BB843D: mov     eax, [rbx]
 * 0000000140BB843F: mov     ecx, [rbx+4]
 * 0000000140BB8442: cmp     eax, dword ptr [rsp+9D0h+var_960]
 * 0000000140BB8446: jb      short loc_140BB8480
 * 0000000140BB8448: cmp     ecx, r14d
 * 0000000140BB844B: ja      short loc_140BB8480
 * 0000000140BB844D: mov     r8, [rsp+9D0h+var_968]
 * 0000000140BB8452: cmp     r8, rdx
 * 0000000140BB8455: jz      short loc_140BB8474
 * 0000000140BB8457: mov     rax, [rbp+8D0h+var_940]
 * 0000000140BB845B: mov     byte ptr [rax], 80h
 * 0000000140BB845E: inc     rax
 * 0000000140BB8461: mov     [rbp+8D0h+var_940], rax
 * 0000000140BB8465: mov     eax, 0Ch
 * 0000000140BB846A: add     r8, rax
 * 0000000140BB846D: mov     [rsp+9D0h+var_968], r8
 * 0000000140BB8472: jmp     short loc_140BB8479
 * 0000000140BB8474: mov     eax, 0Ch
 * 0000000140BB8479: add     rbx, rax
 * 0000000140BB847C: mov     [rbp+8D0h+var_930], rbx
 * 0000000140BB8480: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BB8485: add     r11, 18h
 * 0000000140BB8489: add     r12, 28h ; '('
 * 0000000140BB848D: mov     [rbp+8D0h+var_920], r11
 * 0000000140BB8491: mov     r14d, 1
 * 0000000140BB8497: mov     [rsp+9D0h+var_978], r12
 * 0000000140BB849C: cmp     r11, [rbp+8D0h+var_950]
 * 0000000140BB84A0: jnz     loc_140BB7B71
 * 0000000140BB84A6: mov     r13, [rbp+8D0h+var_8C0]
 * 0000000140BB84AA: mov     [rbp+8D0h+var_8B8], r13
 * 0000000140BB84AE: mov     ecx, r15d
 * 0000000140BB84B1: mov     rbx, [rbp+8D0h+var_900]
 * 0000000140BB84B5: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BB84BA: mov     r8d, 80000000h
 * 0000000140BB84C0: sub     rdx, rsi
 * 0000000140BB84C3: mov     rsi, [rbp+8D0h+var_8B8]
 * 0000000140BB84C7: add     rdx, rsi
 * 0000000140BB84CA: mov     [rsp+9D0h+var_970], rsi
 * 0000000140BB84CF: mov     [rsp+9D0h+var_980], rdx
 * 0000000140BB84D4: lea     eax, [rcx+r8]
 * 0000000140BB84D8: test    r8d, eax
 * 0000000140BB84DB: jnz     short loc_140BB84E5
 * 0000000140BB84DD: cmp     ecx, 0C000010Eh
 * 0000000140BB84E3: jnz     short loc_140BB84E9
 * 0000000140BB84E5: mov     [rdx+28h], rbx
 * 0000000140BB84E9: mov     r13d, [rbp+8D0h+var_948]
 * 0000000140BB84ED: jmp     loc_140BB8BBF
 * 0000000140BB84F2: xor     edi, edi
 * 0000000140BB84F4: mov     [rbp+8D0h+var_948], r15d
 * 0000000140BB84F8: mov     r14, r13
 * 0000000140BB84FB: mov     r12d, edi
 * 0000000140BB84FE: mov     r13d, edi
 * 0000000140BB8501: mov     [rbp+8D0h+var_888], edi
 * 0000000140BB8504: lea     r8, [rbp+8D0h+var_808]
 * 0000000140BB850B: mov     rax, [rsi+2F8h]
 * 0000000140BB8512: lea     rdx, [rbp+8D0h+var_888]
 * 0000000140BB8516: mov     ecx, r12d
 * 0000000140BB8519: call    KeGuardDispatchICall
 * 0000000140BB851E: test    eax, eax
 * 0000000140BB8520: jz      loc_140BB85B4
 * 0000000140BB8526: mov     rax, [rsi+2D8h]
 * 0000000140BB852D: mov     rcx, [rbp+8D0h+var_808]
 * 0000000140BB8534: call    KeGuardDispatchICall
 * 0000000140BB8539: mov     rbx, rax
 * 0000000140BB853C: test    rax, rax
 * 0000000140BB853F: jz      short loc_140BB858F
 * 0000000140BB8541: mov     rax, [rsi+2E0h]
 * 0000000140BB8548: inc     r15d
 * 0000000140BB854B: mov     rcx, rbx
 * 0000000140BB854E: mov     [rbp+8D0h+var_948], r15d
 * 0000000140BB8552: call    KeGuardDispatchICall
 * 0000000140BB8557: mov     r15, rax
 * 0000000140BB855A: lea     rdx, [rbp+8D0h+var_548]
 * 0000000140BB8561: mov     rax, [rsi+218h]
 * 0000000140BB8568: mov     rcx, r15
 * 0000000140BB856B: call    KeGuardDispatchICall
 * 0000000140BB8570: test    rax, rax
 * 0000000140BB8573: jz      short loc_140BB85D7
 * 0000000140BB8575: mov     rax, [rsi+2E8h]
 * 0000000140BB857C: mov     rdx, rbx
 * 0000000140BB857F: mov     rcx, [rbp+8D0h+var_808]
 * 0000000140BB8586: call    KeGuardDispatchICall
 * 0000000140BB858B: mov     r15d, [rbp+8D0h+var_948]
 * 0000000140BB858F: mov     rax, [rsi+2F8h]
 * 0000000140BB8596: lea     r8, [rbp+8D0h+var_808]
 * 0000000140BB859D: lea     rdx, [rbp+8D0h+var_888]
 * 0000000140BB85A1: mov     ecx, r12d
 * 0000000140BB85A4: call    KeGuardDispatchICall
 * 0000000140BB85A9: test    eax, eax
 * 0000000140BB85AB: jnz     loc_140BB8526
 * 0000000140BB85B1: lea     ebx, [rax+1]
 * 0000000140BB85B4: mov     r15d, [rbp+8D0h+var_948]
 * 0000000140BB85B8: add     r12d, ebx
 * 0000000140BB85BB: add     r13, rbx
 * 0000000140BB85BE: cmp     r12d, 3
 * 0000000140BB85C2: jb      loc_140BB8501
 * 0000000140BB85C8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB85CF: mov     r13d, r15d
 * 0000000140BB85D2: jmp     loc_140BB8BC4
 * 0000000140BB85D7: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB85E1: mov     ebx, 1
 * 0000000140BB85E6: jz      short loc_140BB8630
 * 0000000140BB85E8: mov     rcx, [rsi+0AC8h]
 * 0000000140BB85EF: lea     edx, [rbx+2Fh]
 * 0000000140BB85F2: lea     r8d, [rbx+5]
 * 0000000140BB85F6: mov     rax, [r14]
 * 0000000140BB85F9: add     edx, 0FFFFFFF8h
 * 0000000140BB85FC: mov     [rcx], rax
 * 0000000140BB85FF: add     r14, 8
 * 0000000140BB8603: add     rcx, 8
 * 0000000140BB8607: sub     r8, rbx
 * 0000000140BB860A: jnz     short loc_140BB85F6
 * 0000000140BB860C: test    edx, edx
 * 0000000140BB860E: jz      short loc_140BB8629
 * 0000000140BB8610: mov     esi, 0FFFFFFFFh
 * 0000000140BB8615: mov     al, [r14]
 * 0000000140BB8618: add     r14, rbx
 * 0000000140BB861B: mov     [rcx], al
 * 0000000140BB861D: add     rcx, rbx
 * 0000000140BB8620: add     edx, esi
 * 0000000140BB8622: jnz     short loc_140BB8615
 * 0000000140BB8624: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB8629: mov     r14, [rsi+0AC8h]
 * 0000000140BB8630: mov     [r14+18h], r15
 * 0000000140BB8634: mov     rax, [rsi+588h]
 * 0000000140BB863B: mov     [rax], r14
 * 0000000140BB863E: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BB8645: mov     rax, [rsi+588h]
 * 0000000140BB864C: mov     [rax+8], r15
 * 0000000140BB8650: mov     dword ptr [rax+14h], 1000h
 * 0000000140BB8657: cmp     [rsi+918h], edi
 * 0000000140BB865D: jnz     loc_140BB85B4
 * 0000000140BB8663: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB866D: add     rax, rsi
 * 0000000140BB8670: mov     [rsi+920h], rax
 * 0000000140BB8677: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB8681: add     rax, r14
 * 0000000140BB8684: mov     [rsi+928h], rax
 * 0000000140BB868B: movsxd  rax, dword ptr [r14]
 * 0000000140BB868E: mov     [rsi+930h], rax
 * 0000000140BB8695: mov     [rsi+938h], r13
 * 0000000140BB869C: mov     [rsi+918h], ebx
 * 0000000140BB86A2: mov     ecx, [rsi+9D8h]
 * 0000000140BB86A8: bt      ecx, 1Dh
 * 0000000140BB86AC: jb      loc_140BB85B4
 * 0000000140BB86B2: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB86BC: jz      loc_140BB85B4
 * 0000000140BB86C2: test    bl, cl
 * 0000000140BB86C4: jz      loc_140BB85B4
 * 0000000140BB86CA: mov     ecx, [rsi+0A74h]
 * 0000000140BB86D0: mov     eax, [rsi+804h]
 * 0000000140BB86D6: mov     r10, [rsi+838h]
 * 0000000140BB86DD: sub     eax, ecx
 * 0000000140BB86DF: mov     r8, [rsi+0A78h]
 * 0000000140BB86E6: lea     rdx, [rcx+rsi]
 * 0000000140BB86EA: mov     ecx, eax
 * 0000000140BB86EC: shr     rcx, 3
 * 0000000140BB86F0: lea     r9, [rdx+rcx*8]
 * 0000000140BB86F4: jmp     short loc_140BB8717
 * 0000000140BB86F6: xor     [rdx], r8
 * 0000000140BB86F9: mov     rax, [rdx]
 * 0000000140BB86FC: movzx   ecx, r8b
 * 0000000140BB8700: xor     rax, r10
 * 0000000140BB8703: and     ecx, 3Fh
 * 0000000140BB8706: ror     r8, cl
 * 0000000140BB8709: add     r8, rax
 * 0000000140BB870C: xor     r8, 0EFAh
 * 0000000140BB8713: add     rdx, 8
 * 0000000140BB8717: cmp     rdx, r9
 * 0000000140BB871A: jnz     short loc_140BB86F6
 * 0000000140BB871C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB8724: cmp     r8, [rsi+0A80h]
 * 0000000140BB872B: jz      loc_140BB85B4
 * 0000000140BB8731: mov     ecx, [rsi+804h]
 * 0000000140BB8737: mov     rax, [rsi+588h]
 * 0000000140BB873E: mov     [rax], rsi
 * 0000000140BB8741: mov     [rax+10h], ecx
 * 0000000140BB8744: mov     rcx, [rsi+0A80h]
 * 0000000140BB874B: cmp     [rsi+918h], edi
 * 0000000140BB8751: jnz     short loc_140BB8761
 * 0000000140BB8753: mov     rax, [rsi+588h]
 * 0000000140BB875A: xor     rcx, r8
 * 0000000140BB875D: mov     [rax+18h], rcx
 * 0000000140BB8761: xor     edx, edx
 * 0000000140BB8763: mov     r9d, 100h
 * 0000000140BB8769: mov     rcx, rsi
 * 0000000140BB876C: call    sub_140BC7384
 * 0000000140BB8771: jmp     loc_140BB85B4
 * 0000000140BB8776: mov     rbx, r13
 * 0000000140BB8779: mov     [rbp+8D0h+var_7A0], r15
 * 0000000140BB8780: mov     r13d, r15d
 * 0000000140BB8783: mov     r15, cr8
 * 0000000140BB8787: mov     [rbp+8D0h+arg_8], r15
 * 0000000140BB878E: mov     eax, 0Ch
 * 0000000140BB8793: mov     cr8, rax
 * 0000000140BB8797: mov     rax, [rsi+308h]
 * 0000000140BB879E: lea     rcx, [rbp+8D0h+var_7A0]
 * 0000000140BB87A5: call    KeGuardDispatchICall
 * 0000000140BB87AA: mov     r14, rax
 * 0000000140BB87AD: test    rax, rax
 * 0000000140BB87B0: jz      loc_140BB89A3
 * 0000000140BB87B6: xor     edi, edi
 * 0000000140BB87B8: lea     r15d, [rdi+1]
 * 0000000140BB87BC: mov     rax, [rsi+218h]
 * 0000000140BB87C3: lea     rdx, [rbp+8D0h+var_540]
 * 0000000140BB87CA: mov     rcx, r14
 * 0000000140BB87CD: add     r13d, r15d
 * 0000000140BB87D0: call    KeGuardDispatchICall
 * 0000000140BB87D5: test    rax, rax
 * 0000000140BB87D8: jnz     loc_140BB8976
 * 0000000140BB87DE: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB87E8: jz      short loc_140BB8830
 * 0000000140BB87EA: mov     rcx, [rsi+0AC8h]
 * 0000000140BB87F1: lea     edx, [rax+30h]
 * 0000000140BB87F4: mov     r8, r12
 * 0000000140BB87F7: mov     rax, [rbx]
 * 0000000140BB87FA: add     edx, 0FFFFFFF8h
 * 0000000140BB87FD: mov     [rcx], rax
 * 0000000140BB8800: add     rbx, 8
 * 0000000140BB8804: add     rcx, 8
 * 0000000140BB8808: sub     r8, r15
 * 0000000140BB880B: jnz     short loc_140BB87F7
 * 0000000140BB880D: test    edx, edx
 * 0000000140BB880F: jz      short loc_140BB8829
 * 0000000140BB8811: mov     esi, 0FFFFFFFFh
 * 0000000140BB8816: mov     al, [rbx]
 * 0000000140BB8818: add     rbx, r15
 * 0000000140BB881B: mov     [rcx], al
 * 0000000140BB881D: add     rcx, r15
 * 0000000140BB8820: add     edx, esi
 * 0000000140BB8822: jnz     short loc_140BB8816
 * 0000000140BB8824: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB8829: mov     rbx, [rsi+0AC8h]
 * 0000000140BB8830: mov     [rbx+18h], r14
 * 0000000140BB8834: mov     rax, [rsi+588h]
 * 0000000140BB883B: mov     [rax], rbx
 * 0000000140BB883E: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BB8845: mov     rax, [rsi+588h]
 * 0000000140BB884C: mov     [rax+8], r14
 * 0000000140BB8850: mov     dword ptr [rax+14h], 1000h
 * 0000000140BB8857: cmp     [rsi+918h], edi
 * 0000000140BB885D: jnz     loc_140BB8976
 * 0000000140BB8863: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB886D: add     rax, rsi
 * 0000000140BB8870: mov     [rsi+920h], rax
 * 0000000140BB8877: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB8881: add     rax, rbx
 * 0000000140BB8884: mov     [rsi+928h], rax
 * 0000000140BB888B: movsxd  rax, dword ptr [rbx]
 * 0000000140BB888E: mov     [rsi+930h], rax
 * 0000000140BB8895: mov     qword ptr [rsi+938h], 4
 * 0000000140BB88A0: mov     [rsi+918h], r15d
 * 0000000140BB88A7: mov     ecx, [rsi+9D8h]
 * 0000000140BB88AD: bt      ecx, 1Dh
 * 0000000140BB88B1: jb      loc_140BB8976
 * 0000000140BB88B7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB88C1: jz      loc_140BB8976
 * 0000000140BB88C7: test    r15b, cl
 * 0000000140BB88CA: jz      loc_140BB8976
 * 0000000140BB88D0: mov     ecx, [rsi+0A74h]
 * 0000000140BB88D6: mov     eax, [rsi+804h]
 * 0000000140BB88DC: mov     r10, [rsi+838h]
 * 0000000140BB88E3: sub     eax, ecx
 * 0000000140BB88E5: mov     r8, [rsi+0A78h]
 * 0000000140BB88EC: lea     rdx, [rcx+rsi]
 * 0000000140BB88F0: mov     ecx, eax
 * 0000000140BB88F2: shr     rcx, 3
 * 0000000140BB88F6: lea     r9, [rdx+rcx*8]
 * 0000000140BB88FA: jmp     short loc_140BB891D
 * 0000000140BB88FC: xor     [rdx], r8
 * 0000000140BB88FF: mov     rax, [rdx]
 * 0000000140BB8902: movzx   ecx, r8b
 * 0000000140BB8906: xor     rax, r10
 * 0000000140BB8909: and     ecx, 3Fh
 * 0000000140BB890C: ror     r8, cl
 * 0000000140BB890F: add     r8, rax
 * 0000000140BB8912: xor     r8, 0EFAh
 * 0000000140BB8919: add     rdx, 8
 * 0000000140BB891D: cmp     rdx, r9
 * 0000000140BB8920: jnz     short loc_140BB88FC
 * 0000000140BB8922: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB892A: cmp     r8, [rsi+0A80h]
 * 0000000140BB8931: jz      short loc_140BB8976
 * 0000000140BB8933: mov     rax, [rsi+588h]
 * 0000000140BB893A: mov     ecx, [rsi+804h]
 * 0000000140BB8940: mov     [rax], rsi
 * 0000000140BB8943: mov     [rax+10h], ecx
 * 0000000140BB8946: mov     rax, [rsi+0A80h]
 * 0000000140BB894D: cmp     [rsi+918h], edi
 * 0000000140BB8953: jnz     short loc_140BB8966
 * 0000000140BB8955: mov     rcx, r8
 * 0000000140BB8958: xor     rcx, rax
 * 0000000140BB895B: mov     rax, [rsi+588h]
 * 0000000140BB8962: mov     [rax+18h], rcx
 * 0000000140BB8966: xor     edx, edx
 * 0000000140BB8968: mov     r9d, 100h
 * 0000000140BB896E: mov     rcx, rsi
 * 0000000140BB8971: call    sub_140BC7384
 * 0000000140BB8976: mov     rax, [rsi+308h]
 * 0000000140BB897D: lea     rcx, [rbp+8D0h+var_7A0]
 * 0000000140BB8984: call    KeGuardDispatchICall
 * 0000000140BB8989: mov     r14, rax
 * 0000000140BB898C: test    rax, rax
 * 0000000140BB898F: jnz     loc_140BB87BC
 * 0000000140BB8995: mov     r15, [rbp+8D0h+arg_8]
 * 0000000140BB899C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB89A3: movzx   eax, r15b
 * 0000000140BB89A7: mov     cr8, rax
 * 0000000140BB89AB: jmp     loc_140BB8BBF
 * 0000000140BB89B0: mov     [rbp+8D0h+var_790], r15
 * 0000000140BB89B7: lea     rcx, [rbp+8D0h+var_790]
 * 0000000140BB89BE: mov     rax, [rsi+300h]
 * 0000000140BB89C5: mov     rbx, r13
 * 0000000140BB89C8: mov     r13d, r15d
 * 0000000140BB89CB: call    KeGuardDispatchICall
 * 0000000140BB89D0: mov     r14, rax
 * 0000000140BB89D3: test    rax, rax
 * 0000000140BB89D6: jz      loc_140BB8BBF
 * 0000000140BB89DC: mov     edi, 1
 * 0000000140BB89E1: mov     rax, [rsi+218h]
 * 0000000140BB89E8: lea     rdx, [rbp+8D0h+var_538]
 * 0000000140BB89EF: mov     rcx, r14
 * 0000000140BB89F2: add     r13d, edi
 * 0000000140BB89F5: call    KeGuardDispatchICall
 * 0000000140BB89FA: test    rax, rax
 * 0000000140BB89FD: jnz     loc_140BB8B99
 * 0000000140BB8A03: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BB8A0D: jz      short loc_140BB8A55
 * 0000000140BB8A0F: mov     rcx, [rsi+0AC8h]
 * 0000000140BB8A16: lea     edx, [rax+30h]
 * 0000000140BB8A19: mov     r8, r12
 * 0000000140BB8A1C: mov     rax, [rbx]
 * 0000000140BB8A1F: add     edx, 0FFFFFFF8h
 * 0000000140BB8A22: mov     [rcx], rax
 * 0000000140BB8A25: add     rbx, 8
 * 0000000140BB8A29: add     rcx, 8
 * 0000000140BB8A2D: sub     r8, rdi
 * 0000000140BB8A30: jnz     short loc_140BB8A1C
 * 0000000140BB8A32: test    edx, edx
 * 0000000140BB8A34: jz      short loc_140BB8A4E
 * 0000000140BB8A36: mov     esi, 0FFFFFFFFh
 * 0000000140BB8A3B: mov     al, [rbx]
 * 0000000140BB8A3D: add     rbx, rdi
 * 0000000140BB8A40: mov     [rcx], al
 * 0000000140BB8A42: add     rcx, rdi
 * 0000000140BB8A45: add     edx, esi
 * 0000000140BB8A47: jnz     short loc_140BB8A3B
 * 0000000140BB8A49: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB8A4E: mov     rbx, [rsi+0AC8h]
 * 0000000140BB8A55: mov     [rbx+18h], r14
 * 0000000140BB8A59: mov     rax, [rsi+588h]
 * 0000000140BB8A60: mov     [rax], rbx
 * 0000000140BB8A63: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140BB8A6A: mov     rax, [rsi+588h]
 * 0000000140BB8A71: mov     [rax+8], r14
 * 0000000140BB8A75: mov     dword ptr [rax+14h], 1000h
 * 0000000140BB8A7C: cmp     [rsi+918h], r15d
 * 0000000140BB8A83: jnz     loc_140BB8B99
 * 0000000140BB8A89: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB8A93: add     rax, rsi
 * 0000000140BB8A96: mov     [rsi+920h], rax
 * 0000000140BB8A9D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB8AA7: add     rax, rbx
 * 0000000140BB8AAA: mov     [rsi+928h], rax
 * 0000000140BB8AB1: movsxd  rax, dword ptr [rbx]
 * 0000000140BB8AB4: mov     [rsi+930h], rax
 * 0000000140BB8ABB: mov     qword ptr [rsi+938h], 3
 * 0000000140BB8AC6: mov     [rsi+918h], edi
 * 0000000140BB8ACC: mov     ecx, [rsi+9D8h]
 * 0000000140BB8AD2: bt      ecx, 1Dh
 * 0000000140BB8AD6: jb      loc_140BB8B99
 * 0000000140BB8ADC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB8AE6: jz      loc_140BB8B99
 * 0000000140BB8AEC: test    dil, cl
 * 0000000140BB8AEF: jz      loc_140BB8B99
 * 0000000140BB8AF5: mov     ecx, [rsi+0A74h]
 * 0000000140BB8AFB: mov     eax, [rsi+804h]
 * 0000000140BB8B01: mov     r10, [rsi+838h]
 * 0000000140BB8B08: sub     eax, ecx
 * 0000000140BB8B0A: mov     r8, [rsi+0A78h]
 * 0000000140BB8B11: lea     rdx, [rcx+rsi]
 * 0000000140BB8B15: mov     ecx, eax
 * 0000000140BB8B17: shr     rcx, 3
 * 0000000140BB8B1B: lea     r9, [rdx+rcx*8]
 * 0000000140BB8B1F: jmp     short loc_140BB8B42
 * 0000000140BB8B21: xor     [rdx], r8
 * 0000000140BB8B24: mov     rax, [rdx]
 * 0000000140BB8B27: movzx   ecx, r8b
 * 0000000140BB8B2B: xor     rax, r10
 * 0000000140BB8B2E: and     ecx, 3Fh
 * 0000000140BB8B31: ror     r8, cl
 * 0000000140BB8B34: add     r8, rax
 * 0000000140BB8B37: xor     r8, 0EFAh
 * 0000000140BB8B3E: add     rdx, 8
 * 0000000140BB8B42: cmp     rdx, r9
 * 0000000140BB8B45: jnz     short loc_140BB8B21
 * 0000000140BB8B47: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB8B4F: cmp     r8, [rsi+0A80h]
 * 0000000140BB8B56: jz      short loc_140BB8B99
 * 0000000140BB8B58: mov     ecx, [rsi+804h]
 * 0000000140BB8B5E: mov     rax, [rsi+588h]
 * 0000000140BB8B65: mov     [rax], rsi
 * 0000000140BB8B68: mov     [rax+10h], ecx
 * 0000000140BB8B6B: mov     rcx, [rsi+0A80h]
 * 0000000140BB8B72: cmp     [rsi+918h], r15d
 * 0000000140BB8B79: jnz     short loc_140BB8B89
 * 0000000140BB8B7B: mov     rax, [rsi+588h]
 * 0000000140BB8B82: xor     rcx, r8
 * 0000000140BB8B85: mov     [rax+18h], rcx
 * 0000000140BB8B89: xor     edx, edx
 * 0000000140BB8B8B: mov     r9d, 100h
 * 0000000140BB8B91: mov     rcx, rsi
 * 0000000140BB8B94: call    sub_140BC7384
 * 0000000140BB8B99: mov     rax, [rsi+300h]
 * 0000000140BB8BA0: lea     rcx, [rbp+8D0h+var_790]
 * 0000000140BB8BA7: call    KeGuardDispatchICall
 * 0000000140BB8BAC: mov     r14, rax
 * 0000000140BB8BAF: test    rax, rax
 * 0000000140BB8BB2: jnz     loc_140BB89E1
 * 0000000140BB8BB8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB8BBF: mov     ebx, 1
 * 0000000140BB8BC4: shl     r13d, 0Ch
 * 0000000140BB8BC8: xor     r15d, r15d
 * 0000000140BB8BCB: add     [rsi+848h], r13d
 * 0000000140BB8BD2: mov     eax, [rsi+848h]
 * 0000000140BB8BD8: add     [rsi+844h], ebx
 * 0000000140BB8BDE: cmp     eax, [rsi+84Ch]
 * 0000000140BB8BE4: jge     short loc_140BB8C05
 * 0000000140BB8BE6: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB8BEB: lea     r12d, [r15+6]
 * 0000000140BB8BEF: mov     r11d, 1000h
 * 0000000140BB8BF5: lea     r14d, [r15+5]
 * 0000000140BB8BF9: jmp     loc_140BB5BBD
 * 0000000140BB8BFE: mov     [rsi+844h], r15d
 * 0000000140BB8C05: mov     [rsp+9D0h+var_970], rsi
 * 0000000140BB8C0A: jmp     loc_140BB2B5D
 * 0000000140BB8C0F: mov     edx, [r13+2Ch]
 * 0000000140BB8C13: lea     rcx, [rbp+8D0h+var_2F8]
 * 0000000140BB8C1A: mov     rax, [rsi+1B0h]
 * 0000000140BB8C21: mov     ebx, [r13+28h]
 * 0000000140BB8C25: call    KeGuardDispatchICall
 * 0000000140BB8C2A: mov     rax, [rsi+1E0h]
 * 0000000140BB8C31: lea     rdx, [rbp+8D0h+var_2E8]
 * 0000000140BB8C38: lea     rcx, [rbp+8D0h+var_2F8]
 * 0000000140BB8C3F: call    KeGuardDispatchICall
 * 0000000140BB8C44: test    ebx, ebx
 * 0000000140BB8C46: mov     rbx, cr4
 * 0000000140BB8C49: jnz     short loc_140BB8C4E
 * 0000000140BB8C4B: mov     rbx, cr0
 * 0000000140BB8C4E: mov     rax, [rsi+1A8h]
 * 0000000140BB8C55: lea     rcx, [rbp+8D0h+var_2E8]
 * 0000000140BB8C5C: call    KeGuardDispatchICall
 * 0000000140BB8C61: mov     r8, [r13+18h]
 * 0000000140BB8C65: mov     rdx, [r13+20h]
 * 0000000140BB8C69: and     r8, rbx
 * 0000000140BB8C6C: cmp     r8, rdx
 * 0000000140BB8C6F: jz      loc_140BB2D97
 * 0000000140BB8C75: mov     ecx, [r13+2Ch]
 * 0000000140BB8C79: mov     eax, [r13+28h]
 * 0000000140BB8C7D: shl     rcx, 20h
 * 0000000140BB8C81: or      rcx, rax
 * 0000000140BB8C84: cmp     [rsi+918h], r15d
 * 0000000140BB8C8B: jnz     loc_140BB2D97
 * 0000000140BB8C91: mov     rax, [rsi+588h]
 * 0000000140BB8C98: xor     rdx, r8
 * 0000000140BB8C9B: mov     [rax+18h], rdx
 * 0000000140BB8C9F: cmp     [rsi+918h], r15d
 * 0000000140BB8CA6: jnz     loc_140BB2D97
 * 0000000140BB8CAC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB8CB6: mov     ebx, 1
 * 0000000140BB8CBB: add     rax, rsi
 * 0000000140BB8CBE: mov     [rsi+920h], rax
 * 0000000140BB8CC5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB8CCF: add     rax, r13
 * 0000000140BB8CD2: mov     [rsi+928h], rax
 * 0000000140BB8CD9: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB8CDD: mov     [rsi+930h], rax
 * 0000000140BB8CE4: mov     [rsi+938h], rcx
 * 0000000140BB8CEB: mov     [rsi+918h], ebx
 * 0000000140BB8CF1: mov     ecx, [rsi+9D8h]
 * 0000000140BB8CF7: bt      ecx, 1Dh
 * 0000000140BB8CFB: jb      loc_140BBD398
 * 0000000140BB8D01: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB8D0B: jz      loc_140BBD398
 * 0000000140BB8D11: test    bl, cl
 * 0000000140BB8D13: jz      loc_140BBD398
 * 0000000140BB8D19: mov     ecx, [rsi+0A74h]
 * 0000000140BB8D1F: mov     eax, [rsi+804h]
 * 0000000140BB8D25: mov     r10, [rsi+838h]
 * 0000000140BB8D2C: sub     eax, ecx
 * 0000000140BB8D2E: mov     r8, [rsi+0A78h]
 * 0000000140BB8D35: lea     rdx, [rcx+rsi]
 * 0000000140BB8D39: mov     ecx, eax
 * 0000000140BB8D3B: shr     rcx, 3
 * 0000000140BB8D3F: lea     r9, [rdx+rcx*8]
 * 0000000140BB8D43: jmp     short loc_140BB8D66
 * 0000000140BB8D45: xor     [rdx], r8
 * 0000000140BB8D48: mov     rax, [rdx]
 * 0000000140BB8D4B: movzx   ecx, r8b
 * 0000000140BB8D4F: xor     rax, r10
 * 0000000140BB8D52: and     ecx, 3Fh
 * 0000000140BB8D55: ror     r8, cl
 * 0000000140BB8D58: add     r8, rax
 * 0000000140BB8D5B: xor     r8, 0EFAh
 * 0000000140BB8D62: add     rdx, 8
 * 0000000140BB8D66: cmp     rdx, r9
 * 0000000140BB8D69: jnz     short loc_140BB8D45
 * 0000000140BB8D6B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB8D73: cmp     r8, [rsi+0A80h]
 * 0000000140BB8D7A: jz      loc_140BBD398
 * 0000000140BB8D80: mov     ecx, [rsi+804h]
 * 0000000140BB8D86: mov     rax, [rsi+588h]
 * 0000000140BB8D8D: mov     [rax], rsi
 * 0000000140BB8D90: mov     [rax+10h], ecx
 * 0000000140BB8D93: mov     rcx, [rsi+0A80h]
 * 0000000140BB8D9A: cmp     [rsi+918h], r15d
 * 0000000140BB8DA1: jnz     short loc_140BB8DB1
 * 0000000140BB8DA3: xor     rcx, r8
 * 0000000140BB8DA6: mov     rax, [rsi+588h]
 * 0000000140BB8DAD: mov     [rax+18h], rcx
 * 0000000140BB8DB1: xor     edx, edx
 * 0000000140BB8DB3: mov     r9d, 100h
 * 0000000140BB8DB9: mov     rcx, rsi
 * 0000000140BB8DBC: call    sub_140BC7384
 * 0000000140BB8DC1: jmp     loc_140BBD398
 * 0000000140BB8DC6: mov     r9, [r13+8]
 * 0000000140BB8DCA: mov     r8d, [rsi+844h]
 * 0000000140BB8DD1: mov     [rbp+8D0h+var_920], r9
 * 0000000140BB8DD5: lea     rax, [r8+r8*2]
 * 0000000140BB8DD9: lea     rcx, [r9+rax*4]
 * 0000000140BB8DDD: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BB8DE7: lea     r11, [rcx+0Ch]
 * 0000000140BB8DEB: mov     [rbp+8D0h+arg_8], rcx
 * 0000000140BB8DF2: mov     ecx, [r13+24h]
 * 0000000140BB8DF6: mul     rcx
 * 0000000140BB8DF9: mov     [rsp+9D0h+var_968], r11
 * 0000000140BB8DFE: mov     r10, rdx
 * 0000000140BB8E01: shr     r10, 3
 * 0000000140BB8E05: mov     eax, r10d
 * 0000000140BB8E08: mov     [rbp+8D0h+var_908], r10
 * 0000000140BB8E0C: lea     rcx, [rax+rax*2]
 * 0000000140BB8E10: lea     rax, [r9+rcx*4]
 * 0000000140BB8E14: mov     [rbp+8D0h+var_900], rax
 * 0000000140BB8E18: lea     rax, [r13+30h]
 * 0000000140BB8E1C: lea     r12, [r8+rax]
 * 0000000140BB8E20: mov     [rsp+9D0h+var_978], r12
 * 0000000140BB8E25: lea     r9d, [r10-1]
 * 0000000140BB8E29: test    r10d, r10d
 * 0000000140BB8E2C: jz      short loc_140BB8E3E
 * 0000000140BB8E2E: mov     edx, r9d
 * 0000000140BB8E31: add     rdx, 7
 * 0000000140BB8E35: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140BB8E39: add     rdx, rax
 * 0000000140BB8E3C: jmp     short loc_140BB8E41
 * 0000000140BB8E3E: mov     rdx, rax
 * 0000000140BB8E41: movzx   eax, word ptr [r13+28h]
 * 0000000140BB8E46: mov     [rbp+8D0h+var_940], rdx
 * 0000000140BB8E4A: lea     rcx, [rax+rax*2]
 * 0000000140BB8E4E: lea     rax, [rdx+rcx*8]
 * 0000000140BB8E52: mov     [rbp+8D0h+var_930], rax
 * 0000000140BB8E56: test    r10d, r10d
 * 0000000140BB8E59: jz      loc_140BB90E7
 * 0000000140BB8E5F: cmp     r8d, r9d
 * 0000000140BB8E62: jnb     loc_140BB90DA
 * 0000000140BB8E68: mov     rdi, [rbp+8D0h+arg_8]
 * 0000000140BB8E6F: cmp     [r12], r15b
 * 0000000140BB8E73: jl      loc_140BB9074
 * 0000000140BB8E79: mov     eax, [rdi+4]
 * 0000000140BB8E7C: mov     r14d, [r11]
 * 0000000140BB8E7F: mov     r15d, eax
 * 0000000140BB8E82: add     r15, [r13+18h]
 * 0000000140BB8E86: sub     r14d, eax
 * 0000000140BB8E89: add     [rsi+848h], r14d
 * 0000000140BB8E90: mov     r9, r15
 * 0000000140BB8E93: mov     r11d, [rsi+834h]
 * 0000000140BB8E9A: mov     rax, r15
 * 0000000140BB8E9D: mov     rbx, [rsi+838h]
 * 0000000140BB8EA4: mov     ecx, r14d
 * 0000000140BB8EA7: add     rcx, r15
 * 0000000140BB8EAA: mov     [rbp+8D0h+var_950], r15
 * 0000000140BB8EAE: cmp     r15, rcx
 * 0000000140BB8EB1: jnb     short loc_140BB8EC3
 * 0000000140BB8EB3: mov     edx, 40h ; '@'
 * 0000000140BB8EB8: prefetchnta byte ptr [rax]
 * 0000000140BB8EBB: add     rax, rdx
 * 0000000140BB8EBE: cmp     rax, rcx
 * 0000000140BB8EC1: jb      short loc_140BB8EB8
 * 0000000140BB8EC3: mov     r10d, r14d
 * 0000000140BB8EC6: mov     r8, rbx
 * 0000000140BB8EC9: shr     r10d, 7
 * 0000000140BB8ECD: mov     r13d, 1
 * 0000000140BB8ED3: test    r10d, r10d
 * 0000000140BB8ED6: jz      short loc_140BB8F42
 * 0000000140BB8ED8: mov     esi, 0FFFFFFFFh
 * 0000000140BB8EDD: mov     r12, 7010008004002001h
 * 0000000140BB8EE7: mov     eax, 8
 * 0000000140BB8EEC: xor     r8, [r9]
 * 0000000140BB8EEF: mov     ecx, r11d
 * 0000000140BB8EF2: rol     r8, cl
 * 0000000140BB8EF5: xor     r8, [r9+8]
 * 0000000140BB8EF9: add     r9, 10h
 * 0000000140BB8EFD: rol     r8, cl
 * 0000000140BB8F00: sub     rax, r13
 * 0000000140BB8F03: jnz     short loc_140BB8EEC
 * 0000000140BB8F05: mov     rcx, r9
 * 0000000140BB8F08: sub     rcx, r15
 * 0000000140BB8F0B: xor     rcx, rbx
 * 0000000140BB8F0E: mov     rax, rcx
 * 0000000140BB8F11: rol     rax, 11h
 * 0000000140BB8F15: xor     rcx, rax
 * 0000000140BB8F18: mov     rax, r12
 * 0000000140BB8F1B: mul     rcx
 * 0000000140BB8F1E: xor     r11d, edx
 * 0000000140BB8F21: mov     [rbp+8D0h+var_530], rdx
 * 0000000140BB8F28: xor     r11d, eax
 * 0000000140BB8F2B: and     r11d, 3Fh
 * 0000000140BB8F2F: cmovz   r11d, r13d
 * 0000000140BB8F33: add     r10d, esi
 * 0000000140BB8F36: jnz     short loc_140BB8EE7
 * 0000000140BB8F38: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB8F3D: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BB8F42: mov     edx, r14d
 * 0000000140BB8F45: and     edx, 7Fh
 * 0000000140BB8F48: cmp     edx, 8
 * 0000000140BB8F4B: jb      short loc_140BB8F68
 * 0000000140BB8F4D: mov     eax, edx
 * 0000000140BB8F4F: shr     rax, 3
 * 0000000140BB8F53: xor     r8, [r9]
 * 0000000140BB8F56: mov     ecx, r11d
 * 0000000140BB8F59: rol     r8, cl
 * 0000000140BB8F5C: add     r9, 8
 * 0000000140BB8F60: add     edx, 0FFFFFFF8h
 * 0000000140BB8F63: sub     rax, r13
 * 0000000140BB8F66: jnz     short loc_140BB8F53
 * 0000000140BB8F68: xor     r10d, r10d
 * 0000000140BB8F6B: test    edx, edx
 * 0000000140BB8F6D: jz      short loc_140BB8F8F
 * 0000000140BB8F6F: mov     r12d, 0FFFFFFFFh
 * 0000000140BB8F75: movzx   eax, byte ptr [r9]
 * 0000000140BB8F79: mov     ecx, r11d
 * 0000000140BB8F7C: xor     r8, rax
 * 0000000140BB8F7F: add     r9, r13
 * 0000000140BB8F82: rol     r8, cl
 * 0000000140BB8F85: add     edx, r12d
 * 0000000140BB8F88: jnz     short loc_140BB8F75
 * 0000000140BB8F8A: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BB8F8F: mov     rax, r8
 * 0000000140BB8F92: jmp     short loc_140BB8F97
 * 0000000140BB8F94: xor     r8b, al
 * 0000000140BB8F97: shr     rax, 7
 * 0000000140BB8F9B: test    rax, rax
 * 0000000140BB8F9E: jnz     short loc_140BB8F94
 * 0000000140BB8FA0: movzx   eax, byte ptr [r12]
 * 0000000140BB8FA5: movzx   r13d, r8b
 * 0000000140BB8FA9: and     eax, 7Fh
 * 0000000140BB8FAC: and     r13d, 7Fh
 * 0000000140BB8FB0: cmp     r13d, eax
 * 0000000140BB8FB3: jz      loc_140BB9057
 * 0000000140BB8FB9: mov     ecx, r14d
 * 0000000140BB8FBC: test    r14d, r14d
 * 0000000140BB8FBF: jz      loc_140BB9122
 * 0000000140BB8FC5: mov     eax, [rsi+9DCh]
 * 0000000140BB8FCB: mov     edx, 40h ; '@'
 * 0000000140BB8FD0: test    dl, al
 * 0000000140BB8FD2: jz      loc_140BB9122
 * 0000000140BB8FD8: mov     r14, cr8
 * 0000000140BB8FDC: mov     rbx, r15
 * 0000000140BB8FDF: lea     r12, [r15-1]
 * 0000000140BB8FE3: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140BB8FEA: add     r12, rcx
 * 0000000140BB8FED: or      r12, 0FFFh
 * 0000000140BB8FF4: lea     r15, [rbx-1]
 * 0000000140BB8FF8: mov     eax, 2
 * 0000000140BB8FFD: mov     cr8, rax
 * 0000000140BB9001: mov     rax, [rsi+468h]
 * 0000000140BB9008: xor     edx, edx
 * 0000000140BB900A: mov     rcx, rbx
 * 0000000140BB900D: call    KeGuardDispatchICall
 * 0000000140BB9012: cmp     eax, 0C000022Dh
 * 0000000140BB9017: jnz     short loc_140BB902F
 * 0000000140BB9019: mov     eax, 1
 * 0000000140BB901E: cmp     r14b, al
 * 0000000140BB9021: ja      short loc_140BB903A
 * 0000000140BB9023: movzx   eax, r14b
 * 0000000140BB9027: mov     cr8, rax
 * 0000000140BB902B: mov     al, [rbx]
 * 0000000140BB902D: jmp     short loc_140BB8FF8
 * 0000000140BB902F: xor     r10d, r10d
 * 0000000140BB9032: test    eax, eax
 * 0000000140BB9034: js      loc_140BB9111
 * 0000000140BB903A: mov     eax, 1000h
 * 0000000140BB903F: add     rbx, rax
 * 0000000140BB9042: add     r15, rax
 * 0000000140BB9045: cmp     r15, r12
 * 0000000140BB9048: jnz     short loc_140BB9001
 * 0000000140BB904A: movzx   eax, r14b
 * 0000000140BB904E: mov     cr8, rax
 * 0000000140BB9052: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BB9057: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB905C: mov     ebx, 1
 * 0000000140BB9061: xor     r15d, r15d
 * 0000000140BB9064: mov     r11, [rsp+9D0h+var_968]
 * 0000000140BB9069: mov     ecx, 40h ; '@'
 * 0000000140BB906E: add     [rsi+848h], ecx
 * 0000000140BB9074: mov     eax, 0Ch
 * 0000000140BB9079: add     r12, rbx
 * 0000000140BB907C: add     r11, rax
 * 0000000140BB907F: mov     [rsp+9D0h+var_978], r12
 * 0000000140BB9084: add     rdi, rax
 * 0000000140BB9087: mov     [rsp+9D0h+var_968], r11
 * 0000000140BB908C: cmp     r11, [rbp+8D0h+var_900]
 * 0000000140BB9090: jnb     short loc_140BB90A4
 * 0000000140BB9092: mov     eax, [rsi+84Ch]
 * 0000000140BB9098: cmp     [rsi+848h], eax
 * 0000000140BB909E: jl      loc_140BB8E6F
 * 0000000140BB90A4: sub     rdi, [rbp+8D0h+var_920]
 * 0000000140BB90A8: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140BB90B2: mov     r10, [rbp+8D0h+var_908]
 * 0000000140BB90B6: imul    rdi
 * 0000000140BB90B9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB90C0: sar     rdx, 1
 * 0000000140BB90C3: mov     rax, rdx
 * 0000000140BB90C6: shr     rax, 3Fh
 * 0000000140BB90CA: add     rdx, rax
 * 0000000140BB90CD: mov     [rsi+844h], edx
 * 0000000140BB90D3: mov     r8d, edx
 * 0000000140BB90D6: mov     rdx, [rbp+8D0h+var_940]
 * 0000000140BB90DA: lea     eax, [r10-1]
 * 0000000140BB90DE: cmp     r8d, eax
 * 0000000140BB90E1: jb      loc_140BB2B5D
 * 0000000140BB90E7: mov     eax, [rsi+84Ch]
 * 0000000140BB90ED: cmp     [rsi+848h], eax
 * 0000000140BB90F3: jge     loc_140BB2B5D
 * 0000000140BB90F9: test    r10d, r10d
 * 0000000140BB90FC: jz      loc_140BB9277
 * 0000000140BB9102: sub     r8d, r10d
 * 0000000140BB9105: add     r8d, ebx
 * 0000000140BB9108: lea     rcx, [r8+r8*2]
 * 0000000140BB910C: jmp     loc_140BB927E
 * 0000000140BB9111: movzx   eax, r14b
 * 0000000140BB9115: mov     cr8, rax
 * 0000000140BB9119: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BB911D: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BB9122: movzx   eax, byte ptr [r12]
 * 0000000140BB9127: and     eax, 7Fh
 * 0000000140BB912A: cmp     [rsi+918h], r10d
 * 0000000140BB9131: jnz     loc_140BB9057
 * 0000000140BB9137: mov     ecx, r13d
 * 0000000140BB913A: xor     rcx, rax
 * 0000000140BB913D: mov     rax, [rsi+588h]
 * 0000000140BB9144: mov     [rax+18h], rcx
 * 0000000140BB9148: cmp     [rsi+918h], r10d
 * 0000000140BB914F: jnz     loc_140BB9057
 * 0000000140BB9155: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB915A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB9164: add     rax, rsi
 * 0000000140BB9167: mov     ebx, 1
 * 0000000140BB916C: mov     [rsi+920h], rax
 * 0000000140BB9173: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB917D: add     rax, r13
 * 0000000140BB9180: mov     [rsi+928h], rax
 * 0000000140BB9187: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB918B: mov     [rsi+930h], rax
 * 0000000140BB9192: mov     [rsi+938h], r15
 * 0000000140BB9199: mov     [rsi+918h], ebx
 * 0000000140BB919F: mov     ecx, [rsi+9D8h]
 * 0000000140BB91A5: bt      ecx, 1Dh
 * 0000000140BB91A9: jb      loc_140BB9061
 * 0000000140BB91AF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB91B9: jz      loc_140BB9061
 * 0000000140BB91BF: test    bl, cl
 * 0000000140BB91C1: jz      loc_140BB9061
 * 0000000140BB91C7: mov     ecx, [rsi+0A74h]
 * 0000000140BB91CD: mov     eax, [rsi+804h]
 * 0000000140BB91D3: mov     r10, [rsi+838h]
 * 0000000140BB91DA: sub     eax, ecx
 * 0000000140BB91DC: mov     r8, [rsi+0A78h]
 * 0000000140BB91E3: lea     rdx, [rcx+rsi]
 * 0000000140BB91E7: mov     ecx, eax
 * 0000000140BB91E9: shr     rcx, 3
 * 0000000140BB91ED: lea     r9, [rdx+rcx*8]
 * 0000000140BB91F1: jmp     short loc_140BB9214
 * 0000000140BB91F3: xor     [rdx], r8
 * 0000000140BB91F6: mov     rax, [rdx]
 * 0000000140BB91F9: movzx   ecx, r8b
 * 0000000140BB91FD: xor     rax, r10
 * 0000000140BB9200: and     ecx, 3Fh
 * 0000000140BB9203: ror     r8, cl
 * 0000000140BB9206: add     r8, rax
 * 0000000140BB9209: xor     r8, 0EFAh
 * 0000000140BB9210: add     rdx, 8
 * 0000000140BB9214: cmp     rdx, r9
 * 0000000140BB9217: jnz     short loc_140BB91F3
 * 0000000140BB9219: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB9221: cmp     r8, [rsi+0A80h]
 * 0000000140BB9228: jz      loc_140BB9061
 * 0000000140BB922E: mov     ecx, [rsi+804h]
 * 0000000140BB9234: xor     r15d, r15d
 * 0000000140BB9237: mov     rax, [rsi+588h]
 * 0000000140BB923E: mov     [rax], rsi
 * 0000000140BB9241: mov     [rax+10h], ecx
 * 0000000140BB9244: mov     rcx, [rsi+0A80h]
 * 0000000140BB924B: cmp     [rsi+918h], r15d
 * 0000000140BB9252: jnz     short loc_140BB9262
 * 0000000140BB9254: mov     rax, [rsi+588h]
 * 0000000140BB925B: xor     rcx, r8
 * 0000000140BB925E: mov     [rax+18h], rcx
 * 0000000140BB9262: xor     edx, edx
 * 0000000140BB9264: mov     r9d, 100h
 * 0000000140BB926A: mov     rcx, rsi
 * 0000000140BB926D: call    sub_140BC7384
 * 0000000140BB9272: jmp     loc_140BB9064
 * 0000000140BB9277: mov     eax, r8d
 * 0000000140BB927A: lea     rcx, [rax+rax*2]
 * 0000000140BB927E: lea     rcx, [rdx+rcx*8]
 * 0000000140BB9282: mov     [rbp+8D0h+var_940], rcx
 * 0000000140BB9286: mov     rdi, [rsp+9D0h+var_980]
 * 0000000140BB928B: lea     r15, [rcx+8]
 * 0000000140BB928F: mov     eax, 2
 * 0000000140BB9294: mov     [rsp+9D0h+var_978], r15
 * 0000000140BB9299: xor     edx, edx
 * 0000000140BB929B: mov     [rsp+9D0h+var_968], rax
 * 0000000140BB92A0: mov     r13d, eax
 * 0000000140BB92A3: lea     eax, [rdx+0Ch]
 * 0000000140BB92A6: cmp     [r15], edx
 * 0000000140BB92A9: jl      loc_140BB95FA
 * 0000000140BB92AF: mov     eax, [r15-8]
 * 0000000140BB92B3: mov     r14d, [r15-4]
 * 0000000140BB92B7: mov     r12d, eax
 * 0000000140BB92BA: add     r12, [rdi+18h]
 * 0000000140BB92BE: sub     r14d, eax
 * 0000000140BB92C1: add     [rsi+848h], r14d
 * 0000000140BB92C8: mov     r8, r12
 * 0000000140BB92CB: mov     r10d, [rsi+834h]
 * 0000000140BB92D2: mov     rax, r12
 * 0000000140BB92D5: mov     r11, [rsi+838h]
 * 0000000140BB92DC: mov     ecx, r14d
 * 0000000140BB92DF: add     rcx, r12
 * 0000000140BB92E2: mov     [rbp+8D0h+var_950], r12
 * 0000000140BB92E6: cmp     r12, rcx
 * 0000000140BB92E9: jnb     short loc_140BB92FC
 * 0000000140BB92EB: mov     r9d, 40h ; '@'
 * 0000000140BB92F1: prefetchnta byte ptr [rax]
 * 0000000140BB92F4: add     rax, r9
 * 0000000140BB92F7: cmp     rax, rcx
 * 0000000140BB92FA: jb      short loc_140BB92F1
 * 0000000140BB92FC: mov     r9d, r14d
 * 0000000140BB92FF: mov     rbx, r11
 * 0000000140BB9302: shr     r9d, 7
 * 0000000140BB9306: test    r9d, r9d
 * 0000000140BB9309: jz      short loc_140BB937F
 * 0000000140BB930B: mov     esi, 0FFFFFFFFh
 * 0000000140BB9310: mov     r13d, 1
 * 0000000140BB9316: mov     r15, 7010008004002001h
 * 0000000140BB9320: mov     eax, 8
 * 0000000140BB9325: xor     rbx, [r8]
 * 0000000140BB9328: mov     ecx, r10d
 * 0000000140BB932B: rol     rbx, cl
 * 0000000140BB932E: xor     rbx, [r8+8]
 * 0000000140BB9332: add     r8, 10h
 * 0000000140BB9336: rol     rbx, cl
 * 0000000140BB9339: sub     rax, r13
 * 0000000140BB933C: jnz     short loc_140BB9325
 * 0000000140BB933E: mov     rcx, r8
 * 0000000140BB9341: sub     rcx, r12
 * 0000000140BB9344: xor     rcx, r11
 * 0000000140BB9347: mov     rax, rcx
 * 0000000140BB934A: rol     rax, 11h
 * 0000000140BB934E: xor     rcx, rax
 * 0000000140BB9351: mov     rax, r15
 * 0000000140BB9354: mul     rcx
 * 0000000140BB9357: xor     eax, edx
 * 0000000140BB9359: mov     [rbp+8D0h+var_528], rdx
 * 0000000140BB9360: xor     r10d, eax
 * 0000000140BB9363: and     r10d, 3Fh
 * 0000000140BB9367: cmovz   r10d, r13d
 * 0000000140BB936B: add     r9d, esi
 * 0000000140BB936E: jnz     short loc_140BB9320
 * 0000000140BB9370: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB9375: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BB937A: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BB937F: mov     edx, r14d
 * 0000000140BB9382: mov     r9d, 1
 * 0000000140BB9388: and     edx, 7Fh
 * 0000000140BB938B: cmp     edx, 8
 * 0000000140BB938E: jb      short loc_140BB93AB
 * 0000000140BB9390: mov     eax, edx
 * 0000000140BB9392: shr     rax, 3
 * 0000000140BB9396: xor     rbx, [r8]
 * 0000000140BB9399: mov     ecx, r10d
 * 0000000140BB939C: rol     rbx, cl
 * 0000000140BB939F: add     r8, 8
 * 0000000140BB93A3: add     edx, 0FFFFFFF8h
 * 0000000140BB93A6: sub     rax, r9
 * 0000000140BB93A9: jnz     short loc_140BB9396
 * 0000000140BB93AB: xor     r11d, r11d
 * 0000000140BB93AE: test    edx, edx
 * 0000000140BB93B0: jz      short loc_140BB93D2
 * 0000000140BB93B2: mov     r15d, 0FFFFFFFFh
 * 0000000140BB93B8: movzx   eax, byte ptr [r8]
 * 0000000140BB93BC: mov     ecx, r10d
 * 0000000140BB93BF: xor     rbx, rax
 * 0000000140BB93C2: add     r8, r9
 * 0000000140BB93C5: rol     rbx, cl
 * 0000000140BB93C8: add     edx, r15d
 * 0000000140BB93CB: jnz     short loc_140BB93B8
 * 0000000140BB93CD: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BB93D2: mov     rax, rbx
 * 0000000140BB93D5: jmp     short loc_140BB93D9
 * 0000000140BB93D7: xor     ebx, eax
 * 0000000140BB93D9: shr     rax, 1Fh
 * 0000000140BB93DD: test    rax, rax
 * 0000000140BB93E0: jnz     short loc_140BB93D7
 * 0000000140BB93E2: mov     eax, [r15]
 * 0000000140BB93E5: btr     ebx, 1Fh
 * 0000000140BB93E9: btr     eax, 1Fh
 * 0000000140BB93ED: cmp     ebx, eax
 * 0000000140BB93EF: jz      loc_140BB9602
 * 0000000140BB93F5: mov     ecx, r14d
 * 0000000140BB93F8: test    r14d, r14d
 * 0000000140BB93FB: jz      loc_140BB94B7
 * 0000000140BB9401: mov     eax, [rsi+9DCh]
 * 0000000140BB9407: mov     edx, 40h ; '@'
 * 0000000140BB940C: test    dl, al
 * 0000000140BB940E: jz      loc_140BB94B7
 * 0000000140BB9414: mov     r15, cr8
 * 0000000140BB9418: mov     r14, r12
 * 0000000140BB941B: lea     r13, [r12-1]
 * 0000000140BB9420: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BB9427: add     r13, rcx
 * 0000000140BB942A: or      r13, 0FFFh
 * 0000000140BB9431: lea     r12, [r14-1]
 * 0000000140BB9435: mov     eax, 2
 * 0000000140BB943A: mov     cr8, rax
 * 0000000140BB943E: mov     rax, [rsi+468h]
 * 0000000140BB9445: xor     edx, edx
 * 0000000140BB9447: mov     rcx, r14
 * 0000000140BB944A: call    KeGuardDispatchICall
 * 0000000140BB944F: cmp     eax, 0C000022Dh
 * 0000000140BB9454: jnz     short loc_140BB946D
 * 0000000140BB9456: mov     eax, 1
 * 0000000140BB945B: cmp     r15b, al
 * 0000000140BB945E: ja      short loc_140BB9474
 * 0000000140BB9460: movzx   eax, r15b
 * 0000000140BB9464: mov     cr8, rax
 * 0000000140BB9468: mov     al, [r14]
 * 0000000140BB946B: jmp     short loc_140BB9435
 * 0000000140BB946D: xor     r11d, r11d
 * 0000000140BB9470: test    eax, eax
 * 0000000140BB9472: js      short loc_140BB94A1
 * 0000000140BB9474: mov     r11d, 1000h
 * 0000000140BB947A: add     r14, r11
 * 0000000140BB947D: add     r12, r11
 * 0000000140BB9480: cmp     r12, r13
 * 0000000140BB9483: jnz     short loc_140BB943E
 * 0000000140BB9485: movzx   eax, r15b
 * 0000000140BB9489: mov     cr8, rax
 * 0000000140BB948D: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BB9492: mov     ebx, 1
 * 0000000140BB9497: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BB949C: jmp     loc_140BB960D
 * 0000000140BB94A1: movzx   eax, r15b
 * 0000000140BB94A5: mov     cr8, rax
 * 0000000140BB94A9: mov     r12, [rbp+8D0h+var_950]
 * 0000000140BB94AD: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BB94B2: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BB94B7: mov     eax, [r15]
 * 0000000140BB94BA: btr     eax, 1Fh
 * 0000000140BB94BE: cmp     [rsi+918h], r11d
 * 0000000140BB94C5: jnz     loc_140BB9602
 * 0000000140BB94CB: mov     ecx, ebx
 * 0000000140BB94CD: xor     rcx, rax
 * 0000000140BB94D0: mov     rax, [rsi+588h]
 * 0000000140BB94D7: mov     [rax+18h], rcx
 * 0000000140BB94DB: cmp     [rsi+918h], r11d
 * 0000000140BB94E2: jnz     loc_140BB9602
 * 0000000140BB94E8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB94F2: mov     ebx, 1
 * 0000000140BB94F7: add     rax, rsi
 * 0000000140BB94FA: mov     [rsi+920h], rax
 * 0000000140BB9501: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB950B: add     rax, rdi
 * 0000000140BB950E: mov     [rsi+928h], rax
 * 0000000140BB9515: movsxd  rax, dword ptr [rdi]
 * 0000000140BB9518: mov     [rsi+930h], rax
 * 0000000140BB951F: mov     [rsi+938h], r12
 * 0000000140BB9526: mov     [rsi+918h], ebx
 * 0000000140BB952C: mov     ecx, [rsi+9D8h]
 * 0000000140BB9532: bt      ecx, 1Dh
 * 0000000140BB9536: jb      loc_140BB9607
 * 0000000140BB953C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB9546: jz      loc_140BB9607
 * 0000000140BB954C: test    bl, cl
 * 0000000140BB954E: jz      loc_140BB9607
 * 0000000140BB9554: mov     ecx, [rsi+0A74h]
 * 0000000140BB955A: mov     eax, [rsi+804h]
 * 0000000140BB9560: mov     r10, [rsi+838h]
 * 0000000140BB9567: sub     eax, ecx
 * 0000000140BB9569: mov     r8, [rsi+0A78h]
 * 0000000140BB9570: lea     rdx, [rcx+rsi]
 * 0000000140BB9574: mov     ecx, eax
 * 0000000140BB9576: shr     rcx, 3
 * 0000000140BB957A: lea     r9, [rdx+rcx*8]
 * 0000000140BB957E: jmp     short loc_140BB95A1
 * 0000000140BB9580: xor     [rdx], r8
 * 0000000140BB9583: mov     rax, [rdx]
 * 0000000140BB9586: movzx   ecx, r8b
 * 0000000140BB958A: xor     rax, r10
 * 0000000140BB958D: and     ecx, 3Fh
 * 0000000140BB9590: ror     r8, cl
 * 0000000140BB9593: add     r8, rax
 * 0000000140BB9596: xor     r8, 0EFAh
 * 0000000140BB959D: add     rdx, 8
 * 0000000140BB95A1: cmp     rdx, r9
 * 0000000140BB95A4: jnz     short loc_140BB9580
 * 0000000140BB95A6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB95AE: cmp     r8, [rsi+0A80h]
 * 0000000140BB95B5: jz      short loc_140BB9607
 * 0000000140BB95B7: mov     ecx, [rsi+804h]
 * 0000000140BB95BD: mov     rax, [rsi+588h]
 * 0000000140BB95C4: mov     [rax], rsi
 * 0000000140BB95C7: mov     [rax+10h], ecx
 * 0000000140BB95CA: mov     rcx, [rsi+0A80h]
 * 0000000140BB95D1: cmp     [rsi+918h], r11d
 * 0000000140BB95D8: jnz     short loc_140BB95E8
 * 0000000140BB95DA: mov     rax, [rsi+588h]
 * 0000000140BB95E1: xor     rcx, r8
 * 0000000140BB95E4: mov     [rax+18h], rcx
 * 0000000140BB95E8: xor     edx, edx
 * 0000000140BB95EA: mov     r9d, 100h
 * 0000000140BB95F0: mov     rcx, rsi
 * 0000000140BB95F3: call    sub_140BC7384
 * 0000000140BB95F8: jmp     short loc_140BB9607
 * 0000000140BB95FA: mov     r11d, 1000h
 * 0000000140BB9600: jmp     short loc_140BB9614
 * 0000000140BB9602: mov     ebx, 1
 * 0000000140BB9607: mov     r11d, 1000h
 * 0000000140BB960D: mov     eax, 0Ch
 * 0000000140BB9612: xor     edx, edx
 * 0000000140BB9614: add     r15, rax
 * 0000000140BB9617: sub     r13, rbx
 * 0000000140BB961A: mov     [rsp+9D0h+var_978], r15
 * 0000000140BB961F: mov     [rsp+9D0h+var_968], r13
 * 0000000140BB9624: jnz     loc_140BB92A6
 * 0000000140BB962A: mov     rcx, [rbp+8D0h+var_940]
 * 0000000140BB962E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB9635: add     [rsi+844h], ebx
 * 0000000140BB963B: add     rcx, 18h
 * 0000000140BB963F: mov     [rbp+8D0h+var_940], rcx
 * 0000000140BB9643: cmp     rcx, [rbp+8D0h+var_930]
 * 0000000140BB9647: jz      short loc_140BB9660
 * 0000000140BB9649: mov     eax, [rsi+84Ch]
 * 0000000140BB964F: cmp     [rsi+848h], eax
 * 0000000140BB9655: jl      loc_140BB9286
 * 0000000140BB965B: jmp     loc_140BB23D5
 * 0000000140BB9660: xor     r15d, r15d
 * 0000000140BB9663: mov     [rsi+844h], r15d
 * 0000000140BB966A: jmp     loc_140BB1FA9
 * 0000000140BB966F: cmp     r10d, edx
 * 0000000140BB9672: jg      loc_140BBC134
 * 0000000140BB9678: jz      short loc_140BB96C5
 * 0000000140BB967A: mov     ecx, r10d
 * 0000000140BB967D: sub     ecx, 1Fh
 * 0000000140BB9680: jz      loc_140BBA79C
 * 0000000140BB9686: sub     ecx, 1
 * 0000000140BB9689: jz      loc_140BBA78C
 * 0000000140BB968F: sub     ecx, 1
 * 0000000140BB9692: jz      loc_140BBA77C
 * 0000000140BB9698: sub     ecx, 2
 * 0000000140BB969B: jz      loc_140BBA191
 * 0000000140BB96A1: sub     ecx, 1
 * 0000000140BB96A4: jz      loc_140BB99DC
 * 0000000140BB96AA: sub     ecx, 1
 * 0000000140BB96AD: jz      loc_140BB98EE
 * 0000000140BB96B3: sub     ecx, 1
 * 0000000140BB96B6: jz      loc_140BB978C
 * 0000000140BB96BC: cmp     ecx, 1
 * 0000000140BB96BF: jnz     loc_140BBC176
 * 0000000140BB96C5: mov     eax, [r13+24h]
 * 0000000140BB96C9: add     [rsi+848h], eax
 * 0000000140BB96CF: mov     r11d, [r13+20h]
 * 0000000140BB96D3: mov     r9d, [r13+24h]
 * 0000000140BB96D7: add     r11, rsi
 * 0000000140BB96DA: mov     r14d, [rsi+834h]
 * 0000000140BB96E1: mov     r10, r11
 * 0000000140BB96E4: mov     r15, [rsi+838h]
 * 0000000140BB96EB: mov     rax, r11
 * 0000000140BB96EE: lea     rcx, [r11+r9]
 * 0000000140BB96F2: cmp     r11, rcx
 * 0000000140BB96F5: jnb     short loc_140BB9707
 * 0000000140BB96F7: mov     edx, 40h ; '@'
 * 0000000140BB96FC: prefetchnta byte ptr [rax]
 * 0000000140BB96FF: add     rax, rdx
 * 0000000140BB9702: cmp     rax, rcx
 * 0000000140BB9705: jb      short loc_140BB96FC
 * 0000000140BB9707: mov     ebx, r9d
 * 0000000140BB970A: mov     r8, r15
 * 0000000140BB970D: shr     ebx, 7
 * 0000000140BB9710: test    ebx, ebx
 * 0000000140BB9712: jz      loc_140BBF316
 * 0000000140BB9718: mov     esi, 1
 * 0000000140BB971D: mov     rdi, 7010008004002001h
 * 0000000140BB9727: mov     eax, 8
 * 0000000140BB972C: xor     r8, [r10]
 * 0000000140BB972F: mov     ecx, r14d
 * 0000000140BB9732: rol     r8, cl
 * 0000000140BB9735: xor     r8, [r10+8]
 * 0000000140BB9739: add     r10, 10h
 * 0000000140BB973D: rol     r8, cl
 * 0000000140BB9740: sub     rax, rsi
 * 0000000140BB9743: jnz     short loc_140BB972C
 * 0000000140BB9745: mov     rcx, r10
 * 0000000140BB9748: sub     rcx, r11
 * 0000000140BB974B: xor     rcx, r15
 * 0000000140BB974E: mov     rax, rcx
 * 0000000140BB9751: rol     rax, 11h
 * 0000000140BB9755: xor     rcx, rax
 * 0000000140BB9758: mov     rax, rdi
 * 0000000140BB975B: mul     rcx
 * 0000000140BB975E: xor     eax, edx
 * 0000000140BB9760: mov     [rbp+8D0h+var_4C0], rdx
 * 0000000140BB9767: xor     r14d, eax
 * 0000000140BB976A: mov     edx, 0FFFFFFFFh
 * 0000000140BB976F: and     r14d, 3Fh
 * 0000000140BB9773: cmovz   r14d, esi
 * 0000000140BB9777: add     ebx, edx
 * 0000000140BB9779: jnz     short loc_140BB9727
 * 0000000140BB977B: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB9780: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BB9787: jmp     loc_140BBF31B
 * 0000000140BB978C: mov     edx, [r13+2Ch]
 * 0000000140BB9790: lea     rcx, [rbp+8D0h+var_2D8]
 * 0000000140BB9797: mov     rax, [rsi+1B0h]
 * 0000000140BB979E: call    KeGuardDispatchICall
 * 0000000140BB97A3: mov     rax, [rsi+1E0h]
 * 0000000140BB97AA: lea     rdx, [rbp+8D0h+var_200]
 * 0000000140BB97B1: lea     rcx, [rbp+8D0h+var_2D8]
 * 0000000140BB97B8: call    KeGuardDispatchICall
 * 0000000140BB97BD: xor     ecx, ecx
 * 0000000140BB97BF: xgetbv
 * 0000000140BB97C2: shl     rdx, 20h
 * 0000000140BB97C6: lea     rcx, [rbp+8D0h+var_200]
 * 0000000140BB97CD: or      rdx, rax
 * 0000000140BB97D0: mov     rax, [rsi+1A8h]
 * 0000000140BB97D7: mov     rbx, rdx
 * 0000000140BB97DA: call    KeGuardDispatchICall
 * 0000000140BB97DF: mov     r8, [r13+18h]
 * 0000000140BB97E3: mov     rdx, [r13+20h]
 * 0000000140BB97E7: and     r8, rbx
 * 0000000140BB97EA: cmp     r8, rdx
 * 0000000140BB97ED: jz      loc_140BB2D97
 * 0000000140BB97F3: mov     ecx, [r13+2Ch]
 * 0000000140BB97F7: mov     eax, [r13+28h]
 * 0000000140BB97FB: shl     rcx, 20h
 * 0000000140BB97FF: or      rcx, rax
 * 0000000140BB9802: cmp     [rsi+918h], r15d
 * 0000000140BB9809: jnz     loc_140BB2D97
 * 0000000140BB980F: mov     rax, [rsi+588h]
 * 0000000140BB9816: xor     rdx, r8
 * 0000000140BB9819: mov     [rax+18h], rdx
 * 0000000140BB981D: cmp     [rsi+918h], r15d
 * 0000000140BB9824: jnz     loc_140BB2D97
 * 0000000140BB982A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB9834: mov     ebx, 1
 * 0000000140BB9839: add     rax, rsi
 * 0000000140BB983C: mov     [rsi+920h], rax
 * 0000000140BB9843: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB984D: add     rax, r13
 * 0000000140BB9850: mov     [rsi+928h], rax
 * 0000000140BB9857: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB985B: mov     [rsi+930h], rax
 * 0000000140BB9862: mov     [rsi+938h], rcx
 * 0000000140BB9869: mov     [rsi+918h], ebx
 * 0000000140BB986F: mov     ecx, [rsi+9D8h]
 * 0000000140BB9875: bt      ecx, 1Dh
 * 0000000140BB9879: jb      loc_140BBD398
 * 0000000140BB987F: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB9889: jz      loc_140BBD398
 * 0000000140BB988F: test    bl, cl
 * 0000000140BB9891: jz      loc_140BBD398
 * 0000000140BB9897: mov     ecx, [rsi+0A74h]
 * 0000000140BB989D: mov     eax, [rsi+804h]
 * 0000000140BB98A3: mov     r10, [rsi+838h]
 * 0000000140BB98AA: sub     eax, ecx
 * 0000000140BB98AC: mov     r8, [rsi+0A78h]
 * 0000000140BB98B3: lea     rdx, [rcx+rsi]
 * 0000000140BB98B7: mov     ecx, eax
 * 0000000140BB98B9: shr     rcx, 3
 * 0000000140BB98BD: lea     r9, [rdx+rcx*8]
 * 0000000140BB98C1: jmp     short loc_140BB98E4
 * 0000000140BB98C3: xor     [rdx], r8
 * 0000000140BB98C6: mov     rax, [rdx]
 * 0000000140BB98C9: movzx   ecx, r8b
 * 0000000140BB98CD: xor     rax, r10
 * 0000000140BB98D0: and     ecx, 3Fh
 * 0000000140BB98D3: ror     r8, cl
 * 0000000140BB98D6: add     r8, rax
 * 0000000140BB98D9: xor     r8, 0EFAh
 * 0000000140BB98E0: add     rdx, 8
 * 0000000140BB98E4: cmp     rdx, r9
 * 0000000140BB98E7: jnz     short loc_140BB98C3
 * 0000000140BB98E9: jmp     loc_140BB8D6B
 * 0000000140BB98EE: mov     eax, [rsi+9DCh]
 * 0000000140BB98F4: test    al, 4
 * 0000000140BB98F6: jnz     loc_140BB1FAF
 * 0000000140BB98FC: mov     rax, [rsi+428h]
 * 0000000140BB9903: call    KeGuardDispatchICall
 * 0000000140BB9908: test    al, al
 * 0000000140BB990A: jz      loc_140BBD398
 * 0000000140BB9910: cmp     [rsi+918h], r15d
 * 0000000140BB9917: jnz     loc_140BBD398
 * 0000000140BB991D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB9927: add     rax, rsi
 * 0000000140BB992A: mov     [rsi+920h], rax
 * 0000000140BB9931: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB993B: add     rax, r13
 * 0000000140BB993E: mov     [rsi+928h], rax
 * 0000000140BB9945: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB9949: mov     [rsi+930h], rax
 * 0000000140BB9950: mov     [rsi+938h], r15
 * 0000000140BB9957: mov     [rsi+918h], ebx
 * 0000000140BB995D: mov     ecx, [rsi+9D8h]
 * 0000000140BB9963: bt      ecx, 1Dh
 * 0000000140BB9967: jb      loc_140BBD398
 * 0000000140BB996D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB9977: jz      loc_140BBD398
 * 0000000140BB997D: test    bl, cl
 * 0000000140BB997F: jz      loc_140BBD398
 * 0000000140BB9985: mov     ecx, [rsi+0A74h]
 * 0000000140BB998B: mov     eax, [rsi+804h]
 * 0000000140BB9991: mov     r10, [rsi+838h]
 * 0000000140BB9998: sub     eax, ecx
 * 0000000140BB999A: mov     r8, [rsi+0A78h]
 * 0000000140BB99A1: lea     rdx, [rcx+rsi]
 * 0000000140BB99A5: mov     ecx, eax
 * 0000000140BB99A7: shr     rcx, 3
 * 0000000140BB99AB: lea     r9, [rdx+rcx*8]
 * 0000000140BB99AF: jmp     short loc_140BB99D2
 * 0000000140BB99B1: xor     [rdx], r8
 * 0000000140BB99B4: mov     rax, [rdx]
 * 0000000140BB99B7: movzx   ecx, r8b
 * 0000000140BB99BB: xor     rax, r10
 * 0000000140BB99BE: and     ecx, 3Fh
 * 0000000140BB99C1: ror     r8, cl
 * 0000000140BB99C4: add     r8, rax
 * 0000000140BB99C7: xor     r8, 0EFAh
 * 0000000140BB99CE: add     rdx, 8
 * 0000000140BB99D2: cmp     rdx, r9
 * 0000000140BB99D5: jnz     short loc_140BB99B1
 * 0000000140BB99D7: jmp     loc_140BB8D6B
 * 0000000140BB99DC: mov     r14, [r13+8]
 * 0000000140BB99E0: mov     r8d, [r13+10h]
 * 0000000140BB99E4: mov     r9, r14
 * 0000000140BB99E7: add     [rsi+848h], r8d
 * 0000000140BB99EE: mov     rax, r14
 * 0000000140BB99F1: mov     r10d, [rsi+834h]
 * 0000000140BB99F8: mov     r15, [rsi+838h]
 * 0000000140BB99FF: lea     rcx, [r14+r8]
 * 0000000140BB9A03: cmp     r14, rcx
 * 0000000140BB9A06: jnb     short loc_140BB9A18
 * 0000000140BB9A08: mov     edx, 40h ; '@'
 * 0000000140BB9A0D: prefetchnta byte ptr [rax]
 * 0000000140BB9A10: add     rax, rdx
 * 0000000140BB9A13: cmp     rax, rcx
 * 0000000140BB9A16: jb      short loc_140BB9A0D
 * 0000000140BB9A18: mov     r11d, r8d
 * 0000000140BB9A1B: mov     rbx, r15
 * 0000000140BB9A1E: shr     r11d, 7
 * 0000000140BB9A22: mov     edx, 1
 * 0000000140BB9A27: mov     r12d, 0FFFFFFFFh
 * 0000000140BB9A2D: test    r11d, r11d
 * 0000000140BB9A30: jz      short loc_140BB9A97
 * 0000000140BB9A32: mov     rsi, 7010008004002001h
 * 0000000140BB9A3C: mov     eax, 8
 * 0000000140BB9A41: xor     rbx, [r9]
 * 0000000140BB9A44: mov     ecx, r10d
 * 0000000140BB9A47: rol     rbx, cl
 * 0000000140BB9A4A: xor     rbx, [r9+8]
 * 0000000140BB9A4E: add     r9, 10h
 * 0000000140BB9A52: rol     rbx, cl
 * 0000000140BB9A55: sub     rax, rdx
 * 0000000140BB9A58: jnz     short loc_140BB9A41
 * 0000000140BB9A5A: mov     rcx, r9
 * 0000000140BB9A5D: sub     rcx, r14
 * 0000000140BB9A60: xor     rcx, r15
 * 0000000140BB9A63: mov     rax, rcx
 * 0000000140BB9A66: rol     rax, 11h
 * 0000000140BB9A6A: xor     rcx, rax
 * 0000000140BB9A6D: mov     rax, rsi
 * 0000000140BB9A70: mul     rcx
 * 0000000140BB9A73: xor     r10d, edx
 * 0000000140BB9A76: mov     [rbp+8D0h+var_520], rdx
 * 0000000140BB9A7D: xor     r10d, eax
 * 0000000140BB9A80: mov     edx, 1
 * 0000000140BB9A85: and     r10d, 3Fh
 * 0000000140BB9A89: cmovz   r10d, edx
 * 0000000140BB9A8D: add     r11d, r12d
 * 0000000140BB9A90: jnz     short loc_140BB9A3C
 * 0000000140BB9A92: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB9A97: and     r8d, 7Fh
 * 0000000140BB9A9B: cmp     r8d, 8
 * 0000000140BB9A9F: jb      short loc_140BB9ABE
 * 0000000140BB9AA1: mov     eax, r8d
 * 0000000140BB9AA4: shr     rax, 3
 * 0000000140BB9AA8: xor     rbx, [r9]
 * 0000000140BB9AAB: mov     ecx, r10d
 * 0000000140BB9AAE: rol     rbx, cl
 * 0000000140BB9AB1: add     r9, 8
 * 0000000140BB9AB5: add     r8d, 0FFFFFFF8h
 * 0000000140BB9AB9: sub     rax, rdx
 * 0000000140BB9ABC: jnz     short loc_140BB9AA8
 * 0000000140BB9ABE: xor     r11d, r11d
 * 0000000140BB9AC1: test    r8d, r8d
 * 0000000140BB9AC4: jz      short loc_140BB9ADB
 * 0000000140BB9AC6: movzx   eax, byte ptr [r9]
 * 0000000140BB9ACA: mov     ecx, r10d
 * 0000000140BB9ACD: xor     rbx, rax
 * 0000000140BB9AD0: add     r9, rdx
 * 0000000140BB9AD3: rol     rbx, cl
 * 0000000140BB9AD6: add     r8d, r12d
 * 0000000140BB9AD9: jnz     short loc_140BB9AC6
 * 0000000140BB9ADB: mov     rax, rbx
 * 0000000140BB9ADE: jmp     short loc_140BB9AE2
 * 0000000140BB9AE0: xor     ebx, eax
 * 0000000140BB9AE2: shr     rax, 1Fh
 * 0000000140BB9AE6: test    rax, rax
 * 0000000140BB9AE9: jnz     short loc_140BB9AE0
 * 0000000140BB9AEB: btr     ebx, 1Fh
 * 0000000140BB9AEF: mov     r12d, r11d
 * 0000000140BB9AF2: cmp     ebx, [r13+14h]
 * 0000000140BB9AF6: jz      loc_140BB9D0E
 * 0000000140BB9AFC: cmp     [r13+0], r11d
 * 0000000140BB9B00: jnz     short loc_140BB9B0A
 * 0000000140BB9B02: cmp     [r13+18h], r11d
 * 0000000140BB9B06: cmovnz  r12d, edx
 * 0000000140BB9B0A: mov     ecx, [r13+10h]
 * 0000000140BB9B0E: mov     rdx, [r13+8]
 * 0000000140BB9B12: test    rcx, rcx
 * 0000000140BB9B15: jz      loc_140BB9BCD
 * 0000000140BB9B1B: mov     eax, [rsi+9DCh]
 * 0000000140BB9B21: mov     r8d, 40h ; '@'
 * 0000000140BB9B27: test    r8b, al
 * 0000000140BB9B2A: jz      loc_140BB9BCD
 * 0000000140BB9B30: mov     r15, cr8
 * 0000000140BB9B34: lea     eax, [r8-3Eh]
 * 0000000140BB9B38: mov     cr8, rax
 * 0000000140BB9B3C: mov     r14, rdx
 * 0000000140BB9B3F: lea     rax, [rcx-1]
 * 0000000140BB9B43: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BB9B4A: add     rax, rdx
 * 0000000140BB9B4D: or      rax, 0FFFh
 * 0000000140BB9B53: mov     [rbp+8D0h+var_950], rax
 * 0000000140BB9B57: lea     r13, [r14-1]
 * 0000000140BB9B5B: mov     rax, [rsi+468h]
 * 0000000140BB9B62: xor     edx, edx
 * 0000000140BB9B64: mov     rcx, r14
 * 0000000140BB9B67: call    KeGuardDispatchICall
 * 0000000140BB9B6C: xor     r11d, r11d
 * 0000000140BB9B6F: cmp     eax, 0C000022Dh
 * 0000000140BB9B74: jnz     short loc_140BB9B99
 * 0000000140BB9B76: test    r12d, r12d
 * 0000000140BB9B79: jnz     short loc_140BB9BC0
 * 0000000140BB9B7B: lea     eax, [r11+1]
 * 0000000140BB9B7F: cmp     r15b, al
 * 0000000140BB9B82: ja      short loc_140BB9B9D
 * 0000000140BB9B84: movzx   eax, r15b
 * 0000000140BB9B88: mov     cr8, rax
 * 0000000140BB9B8C: mov     al, [r14]
 * 0000000140BB9B8F: lea     eax, [r11+2]
 * 0000000140BB9B93: mov     cr8, rax
 * 0000000140BB9B97: jmp     short loc_140BB9B5B
 * 0000000140BB9B99: test    eax, eax
 * 0000000140BB9B9B: js      short loc_140BB9BC0
 * 0000000140BB9B9D: mov     eax, 1000h
 * 0000000140BB9BA2: add     r14, rax
 * 0000000140BB9BA5: add     r13, rax
 * 0000000140BB9BA8: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BB9BAC: jnz     short loc_140BB9B5B
 * 0000000140BB9BAE: movzx   eax, r15b
 * 0000000140BB9BB2: mov     cr8, rax
 * 0000000140BB9BB6: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB9BBB: jmp     loc_140BB9D0E
 * 0000000140BB9BC0: movzx   eax, r15b
 * 0000000140BB9BC4: mov     cr8, rax
 * 0000000140BB9BC8: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BB9BCD: mov     eax, [r13+14h]
 * 0000000140BB9BD1: cmp     [rsi+918h], r11d
 * 0000000140BB9BD8: jnz     short loc_140BB9BEC
 * 0000000140BB9BDA: mov     ecx, eax
 * 0000000140BB9BDC: mov     eax, ebx
 * 0000000140BB9BDE: xor     rcx, rax
 * 0000000140BB9BE1: mov     rax, [rsi+588h]
 * 0000000140BB9BE8: mov     [rax+18h], rcx
 * 0000000140BB9BEC: mov     rcx, [r13+8]
 * 0000000140BB9BF0: cmp     [rsi+918h], r11d
 * 0000000140BB9BF7: jnz     loc_140BB9D0E
 * 0000000140BB9BFD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB9C07: mov     edx, 1
 * 0000000140BB9C0C: add     rax, rsi
 * 0000000140BB9C0F: mov     [rsi+920h], rax
 * 0000000140BB9C16: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB9C20: add     rax, r13
 * 0000000140BB9C23: mov     [rsi+928h], rax
 * 0000000140BB9C2A: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB9C2E: mov     [rsi+930h], rax
 * 0000000140BB9C35: mov     [rsi+938h], rcx
 * 0000000140BB9C3C: mov     [rsi+918h], edx
 * 0000000140BB9C42: mov     ecx, [rsi+9D8h]
 * 0000000140BB9C48: bt      ecx, 1Dh
 * 0000000140BB9C4C: jb      loc_140BB9D0E
 * 0000000140BB9C52: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB9C5C: jz      loc_140BB9D0E
 * 0000000140BB9C62: test    dl, cl
 * 0000000140BB9C64: jz      loc_140BB9D0E
 * 0000000140BB9C6A: mov     ecx, [rsi+0A74h]
 * 0000000140BB9C70: mov     eax, [rsi+804h]
 * 0000000140BB9C76: mov     r10, [rsi+838h]
 * 0000000140BB9C7D: sub     eax, ecx
 * 0000000140BB9C7F: mov     r8, [rsi+0A78h]
 * 0000000140BB9C86: lea     rdx, [rcx+rsi]
 * 0000000140BB9C8A: mov     ecx, eax
 * 0000000140BB9C8C: shr     rcx, 3
 * 0000000140BB9C90: lea     r9, [rdx+rcx*8]
 * 0000000140BB9C94: jmp     short loc_140BB9CB7
 * 0000000140BB9C96: xor     [rdx], r8
 * 0000000140BB9C99: mov     rax, [rdx]
 * 0000000140BB9C9C: movzx   ecx, r8b
 * 0000000140BB9CA0: xor     rax, r10
 * 0000000140BB9CA3: and     ecx, 3Fh
 * 0000000140BB9CA6: ror     r8, cl
 * 0000000140BB9CA9: add     r8, rax
 * 0000000140BB9CAC: xor     r8, 0EFAh
 * 0000000140BB9CB3: add     rdx, 8
 * 0000000140BB9CB7: cmp     rdx, r9
 * 0000000140BB9CBA: jnz     short loc_140BB9C96
 * 0000000140BB9CBC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB9CC4: cmp     r8, [rsi+0A80h]
 * 0000000140BB9CCB: jz      short loc_140BB9D0E
 * 0000000140BB9CCD: mov     ecx, [rsi+804h]
 * 0000000140BB9CD3: mov     rax, [rsi+588h]
 * 0000000140BB9CDA: mov     [rax], rsi
 * 0000000140BB9CDD: mov     [rax+10h], ecx
 * 0000000140BB9CE0: mov     rcx, [rsi+0A80h]
 * 0000000140BB9CE7: cmp     [rsi+918h], r11d
 * 0000000140BB9CEE: jnz     short loc_140BB9CFE
 * 0000000140BB9CF0: mov     rax, [rsi+588h]
 * 0000000140BB9CF7: xor     rcx, r8
 * 0000000140BB9CFA: mov     [rax+18h], rcx
 * 0000000140BB9CFE: xor     edx, edx
 * 0000000140BB9D00: mov     r9d, 100h
 * 0000000140BB9D06: mov     rcx, rsi
 * 0000000140BB9D09: call    sub_140BC7384
 * 0000000140BB9D0E: mov     rcx, [rsi+538h]
 * 0000000140BB9D15: mov     r14, cr8
 * 0000000140BB9D19: mov     eax, 0Fh
 * 0000000140BB9D1E: mov     cr8, rax
 * 0000000140BB9D22: mov     rax, [rsi+160h]
 * 0000000140BB9D29: call    KeGuardDispatchICall
 * 0000000140BB9D2E: mov     rax, [rsi+620h]
 * 0000000140BB9D35: mov     rcx, [rax]
 * 0000000140BB9D38: mov     eax, [rcx]
 * 0000000140BB9D3A: lea     rbx, [rcx+10h]
 * 0000000140BB9D3E: mov     r15b, [rcx+0Ch]
 * 0000000140BB9D42: lea     rcx, [rax+rax*2]
 * 0000000140BB9D46: lea     r12, [rbx+rcx*8]
 * 0000000140BB9D4A: mov     edx, 18h
 * 0000000140BB9D4F: lea     r8, [r13+18h]
 * 0000000140BB9D53: mov     r9, rbx
 * 0000000140BB9D56: mov     rcx, [r9]
 * 0000000140BB9D59: add     r9, 8
 * 0000000140BB9D5D: mov     rax, [r8]
 * 0000000140BB9D60: add     r8, 8
 * 0000000140BB9D64: cmp     rcx, rax
 * 0000000140BB9D67: jnz     short loc_140BB9D96
 * 0000000140BB9D69: add     edx, 0FFFFFFF8h
 * 0000000140BB9D6C: cmp     edx, 8
 * 0000000140BB9D6F: jnb     short loc_140BB9D56
 * 0000000140BB9D71: test    edx, edx
 * 0000000140BB9D73: jz      short loc_140BB9D9F
 * 0000000140BB9D75: mov     r11d, 1
 * 0000000140BB9D7B: mov     cl, [r9]
 * 0000000140BB9D7E: add     r9, r11
 * 0000000140BB9D81: mov     al, [r8]
 * 0000000140BB9D84: add     r8, r11
 * 0000000140BB9D87: cmp     cl, al
 * 0000000140BB9D89: jnz     short loc_140BB9D96
 * 0000000140BB9D8B: mov     eax, 0FFFFFFFFh
 * 0000000140BB9D90: add     edx, eax
 * 0000000140BB9D92: jnz     short loc_140BB9D7B
 * 0000000140BB9D94: jmp     short loc_140BB9D9F
 * 0000000140BB9D96: add     rbx, 18h
 * 0000000140BB9D9A: cmp     rbx, r12
 * 0000000140BB9D9D: jb      short loc_140BB9D4A
 * 0000000140BB9D9F: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BB9DA4: mov     rcx, [rsi+538h]
 * 0000000140BB9DAB: mov     rax, [rsi+1A0h]
 * 0000000140BB9DB2: call    KeGuardDispatchICall
 * 0000000140BB9DB7: movzx   eax, r14b
 * 0000000140BB9DBB: mov     cr8, rax
 * 0000000140BB9DBF: xor     r11d, r11d
 * 0000000140BB9DC2: lea     r14d, [r11+1]
 * 0000000140BB9DC6: test    r15b, r15b
 * 0000000140BB9DC9: jz      loc_140BB9F03
 * 0000000140BB9DCF: mov     ecx, [rsi+9DCh]
 * 0000000140BB9DD5: lea     eax, [r11+10h]
 * 0000000140BB9DD9: test    al, cl
 * 0000000140BB9DDB: jz      loc_140BB9EF9
 * 0000000140BB9DE1: cmp     [rsi+918h], r11d
 * 0000000140BB9DE8: jnz     loc_140BB9EF9
 * 0000000140BB9DEE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB9DF8: add     rax, rsi
 * 0000000140BB9DFB: mov     [rsi+920h], rax
 * 0000000140BB9E02: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BB9E0C: add     rax, r13
 * 0000000140BB9E0F: mov     [rsi+928h], rax
 * 0000000140BB9E16: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB9E1A: mov     [rsi+930h], rax
 * 0000000140BB9E21: mov     [rsi+938h], r14
 * 0000000140BB9E28: mov     [rsi+918h], r14d
 * 0000000140BB9E2F: mov     eax, [rsi+9D8h]
 * 0000000140BB9E35: bt      eax, 1Dh
 * 0000000140BB9E39: jb      loc_140BB9EF9
 * 0000000140BB9E3F: bt      ecx, 15h
 * 0000000140BB9E43: jnb     loc_140BB9EF9
 * 0000000140BB9E49: test    r14b, al
 * 0000000140BB9E4C: jz      loc_140BB9EF9
 * 0000000140BB9E52: mov     ecx, [rsi+0A74h]
 * 0000000140BB9E58: mov     eax, [rsi+804h]
 * 0000000140BB9E5E: mov     r10, [rsi+838h]
 * 0000000140BB9E65: sub     eax, ecx
 * 0000000140BB9E67: mov     r8, [rsi+0A78h]
 * 0000000140BB9E6E: lea     rdx, [rcx+rsi]
 * 0000000140BB9E72: mov     ecx, eax
 * 0000000140BB9E74: shr     rcx, 3
 * 0000000140BB9E78: lea     r9, [rdx+rcx*8]
 * 0000000140BB9E7C: jmp     short loc_140BB9E9F
 * 0000000140BB9E7E: xor     [rdx], r8
 * 0000000140BB9E81: mov     rax, [rdx]
 * 0000000140BB9E84: movzx   ecx, r8b
 * 0000000140BB9E88: xor     rax, r10
 * 0000000140BB9E8B: and     ecx, 3Fh
 * 0000000140BB9E8E: ror     r8, cl
 * 0000000140BB9E91: add     r8, rax
 * 0000000140BB9E94: xor     r8, 0EFAh
 * 0000000140BB9E9B: add     rdx, 8
 * 0000000140BB9E9F: cmp     rdx, r9
 * 0000000140BB9EA2: jnz     short loc_140BB9E7E
 * 0000000140BB9EA4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB9EAC: cmp     r8, [rsi+0A80h]
 * 0000000140BB9EB3: jz      short loc_140BB9EF9
 * 0000000140BB9EB5: mov     ecx, [rsi+804h]
 * 0000000140BB9EBB: mov     rax, [rsi+588h]
 * 0000000140BB9EC2: mov     [rax], rsi
 * 0000000140BB9EC5: mov     [rax+10h], ecx
 * 0000000140BB9EC8: mov     rcx, [rsi+0A80h]
 * 0000000140BB9ECF: cmp     [rsi+918h], r11d
 * 0000000140BB9ED6: jnz     short loc_140BB9EE6
 * 0000000140BB9ED8: mov     rax, [rsi+588h]
 * 0000000140BB9EDF: xor     rcx, r8
 * 0000000140BB9EE2: mov     [rax+18h], rcx
 * 0000000140BB9EE6: xor     edx, edx
 * 0000000140BB9EE8: mov     r9d, 100h
 * 0000000140BB9EEE: mov     rcx, rsi
 * 0000000140BB9EF1: call    sub_140BC7384
 * 0000000140BB9EF6: xor     r11d, r11d
 * 0000000140BB9EF9: cmp     [r13+18h], r14
 * 0000000140BB9EFD: jz      loc_140BBA02A
 * 0000000140BB9F03: cmp     rbx, r12
 * 0000000140BB9F06: jnz     loc_140BBA02A
 * 0000000140BB9F0C: mov     r12, 0B3B74BDEE4453415h
 * 0000000140BB9F16: cmp     [rsi+918h], r11d
 * 0000000140BB9F1D: jnz     loc_140BBA034
 * 0000000140BB9F23: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BB9F2D: add     rax, rsi
 * 0000000140BB9F30: mov     [rsi+920h], rax
 * 0000000140BB9F37: lea     rax, [r12+r13]
 * 0000000140BB9F3B: mov     [rsi+928h], rax
 * 0000000140BB9F42: movsxd  rax, dword ptr [r13+0]
 * 0000000140BB9F46: mov     [rsi+930h], rax
 * 0000000140BB9F4D: mov     [rsi+938h], rbx
 * 0000000140BB9F54: mov     [rsi+918h], r14d
 * 0000000140BB9F5B: mov     ecx, [rsi+9D8h]
 * 0000000140BB9F61: bt      ecx, 1Dh
 * 0000000140BB9F65: jb      loc_140BBA034
 * 0000000140BB9F6B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BB9F75: jz      loc_140BBA034
 * 0000000140BB9F7B: test    r14b, cl
 * 0000000140BB9F7E: jz      loc_140BBA034
 * 0000000140BB9F84: mov     ecx, [rsi+0A74h]
 * 0000000140BB9F8A: mov     eax, [rsi+804h]
 * 0000000140BB9F90: mov     r10, [rsi+838h]
 * 0000000140BB9F97: sub     eax, ecx
 * 0000000140BB9F99: mov     r8, [rsi+0A78h]
 * 0000000140BB9FA0: lea     rdx, [rcx+rsi]
 * 0000000140BB9FA4: mov     ecx, eax
 * 0000000140BB9FA6: shr     rcx, 3
 * 0000000140BB9FAA: lea     r9, [rdx+rcx*8]
 * 0000000140BB9FAE: jmp     short loc_140BB9FD1
 * 0000000140BB9FB0: xor     [rdx], r8
 * 0000000140BB9FB3: mov     rax, [rdx]
 * 0000000140BB9FB6: movzx   ecx, r8b
 * 0000000140BB9FBA: xor     rax, r10
 * 0000000140BB9FBD: and     ecx, 3Fh
 * 0000000140BB9FC0: ror     r8, cl
 * 0000000140BB9FC3: add     r8, rax
 * 0000000140BB9FC6: xor     r8, 0EFAh
 * 0000000140BB9FCD: add     rdx, 8
 * 0000000140BB9FD1: cmp     rdx, r9
 * 0000000140BB9FD4: jnz     short loc_140BB9FB0
 * 0000000140BB9FD6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BB9FDE: cmp     r8, [rsi+0A80h]
 * 0000000140BB9FE5: jz      short loc_140BBA034
 * 0000000140BB9FE7: mov     ecx, [rsi+804h]
 * 0000000140BB9FED: mov     rax, [rsi+588h]
 * 0000000140BB9FF4: mov     [rax], rsi
 * 0000000140BB9FF7: mov     [rax+10h], ecx
 * 0000000140BB9FFA: mov     rcx, [rsi+0A80h]
 * 0000000140BBA001: cmp     [rsi+918h], r11d
 * 0000000140BBA008: jnz     short loc_140BBA018
 * 0000000140BBA00A: mov     rax, [rsi+588h]
 * 0000000140BBA011: xor     rcx, r8
 * 0000000140BBA014: mov     [rax+18h], rcx
 * 0000000140BBA018: xor     edx, edx
 * 0000000140BBA01A: mov     r9d, 100h
 * 0000000140BBA020: mov     rcx, rsi
 * 0000000140BBA023: call    sub_140BC7384
 * 0000000140BBA028: jmp     short loc_140BBA034
 * 0000000140BBA02A: mov     r12, 0B3B74BDEE4453415h
 * 0000000140BBA034: mov     rcx, [rsi+538h]
 * 0000000140BBA03B: mov     r15, cr8
 * 0000000140BBA03F: mov     eax, 0Fh
 * 0000000140BBA044: mov     cr8, rax
 * 0000000140BBA048: mov     rax, [rsi+160h]
 * 0000000140BBA04F: call    KeGuardDispatchICall
 * 0000000140BBA054: mov     rax, [rsi+620h]
 * 0000000140BBA05B: mov     rcx, [rax]
 * 0000000140BBA05E: mov     eax, [rcx]
 * 0000000140BBA060: lea     rbx, [rcx+10h]
 * 0000000140BBA064: lea     rcx, [rax+rax*2]
 * 0000000140BBA068: xor     eax, eax
 * 0000000140BBA06A: lea     r14, [rbx+rcx*8]
 * 0000000140BBA06E: jmp     short loc_140BBA097
 * 0000000140BBA070: mov     rcx, [rbx+8]
 * 0000000140BBA074: cmp     rcx, rdx
 * 0000000140BBA077: jb      short loc_140BBA0A3
 * 0000000140BBA079: mov     rax, rcx
 * 0000000140BBA07C: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140BBA082: cmp     rax, rcx
 * 0000000140BBA085: jnz     short loc_140BBA0A3
 * 0000000140BBA087: mov     eax, [rbx+10h]
 * 0000000140BBA08A: add     rax, rcx
 * 0000000140BBA08D: cmp     rax, rcx
 * 0000000140BBA090: jbe     short loc_140BBA0A3
 * 0000000140BBA092: cmp     rax, rdx
 * 0000000140BBA095: jz      short loc_140BBA0A3
 * 0000000140BBA097: add     rbx, 18h
 * 0000000140BBA09B: mov     rdx, rax
 * 0000000140BBA09E: cmp     rbx, r14
 * 0000000140BBA0A1: jb      short loc_140BBA070
 * 0000000140BBA0A3: mov     rcx, [rsi+538h]
 * 0000000140BBA0AA: mov     rax, [rsi+1A0h]
 * 0000000140BBA0B1: call    KeGuardDispatchICall
 * 0000000140BBA0B6: movzx   eax, r15b
 * 0000000140BBA0BA: mov     cr8, rax
 * 0000000140BBA0BE: xor     r15d, r15d
 * 0000000140BBA0C1: cmp     rbx, r14
 * 0000000140BBA0C4: jz      loc_140BBF45B
 * 0000000140BBA0CA: cmp     [rsi+918h], r15d
 * 0000000140BBA0D1: jnz     loc_140BB2B58
 * 0000000140BBA0D7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBA0E1: add     rax, rsi
 * 0000000140BBA0E4: mov     [rsi+920h], rax
 * 0000000140BBA0EB: lea     rax, [r12+r13]
 * 0000000140BBA0EF: mov     [rsi+928h], rax
 * 0000000140BBA0F6: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBA0FA: mov     [rsi+930h], rax
 * 0000000140BBA101: mov     [rsi+938h], rbx
 * 0000000140BBA108: lea     ebx, [r15+1]
 * 0000000140BBA10C: mov     [rsi+918h], ebx
 * 0000000140BBA112: mov     ecx, [rsi+9D8h]
 * 0000000140BBA118: bt      ecx, 1Dh
 * 0000000140BBA11C: jb      loc_140BB2B5D
 * 0000000140BBA122: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBA12C: jz      loc_140BB2B5D
 * 0000000140BBA132: test    bl, cl
 * 0000000140BBA134: jz      loc_140BB2B5D
 * 0000000140BBA13A: mov     ecx, [rsi+0A74h]
 * 0000000140BBA140: mov     eax, [rsi+804h]
 * 0000000140BBA146: mov     r10, [rsi+838h]
 * 0000000140BBA14D: sub     eax, ecx
 * 0000000140BBA14F: mov     r8, [rsi+0A78h]
 * 0000000140BBA156: lea     rdx, [rcx+rsi]
 * 0000000140BBA15A: mov     ecx, eax
 * 0000000140BBA15C: shr     rcx, 3
 * 0000000140BBA160: lea     r9, [rdx+rcx*8]
 * 0000000140BBA164: jmp     short loc_140BBA187
 * 0000000140BBA166: xor     [rdx], r8
 * 0000000140BBA169: mov     rax, [rdx]
 * 0000000140BBA16C: movzx   ecx, r8b
 * 0000000140BBA170: xor     rax, r10
 * 0000000140BBA173: and     ecx, 3Fh
 * 0000000140BBA176: ror     r8, cl
 * 0000000140BBA179: add     r8, rax
 * 0000000140BBA17C: xor     r8, 0EFAh
 * 0000000140BBA183: add     rdx, 8
 * 0000000140BBA187: cmp     rdx, r9
 * 0000000140BBA18A: jnz     short loc_140BBA166
 * 0000000140BBA18C: jmp     loc_140BB3A63
 * 0000000140BBA191: mov     r14, [r13+8]
 * 0000000140BBA195: mov     r8d, [r13+10h]
 * 0000000140BBA199: mov     r9, r14
 * 0000000140BBA19C: add     [rsi+848h], r8d
 * 0000000140BBA1A3: mov     rax, r14
 * 0000000140BBA1A6: mov     r11d, [rsi+834h]
 * 0000000140BBA1AD: mov     r15, [rsi+838h]
 * 0000000140BBA1B4: lea     rcx, [r14+r8]
 * 0000000140BBA1B8: cmp     r14, rcx
 * 0000000140BBA1BB: jnb     short loc_140BBA1CD
 * 0000000140BBA1BD: mov     edx, 40h ; '@'
 * 0000000140BBA1C2: prefetchnta byte ptr [rax]
 * 0000000140BBA1C5: add     rax, rdx
 * 0000000140BBA1C8: cmp     rax, rcx
 * 0000000140BBA1CB: jb      short loc_140BBA1C2
 * 0000000140BBA1CD: mov     r10d, r8d
 * 0000000140BBA1D0: mov     rbx, r15
 * 0000000140BBA1D3: shr     r10d, 7
 * 0000000140BBA1D7: mov     edx, 1
 * 0000000140BBA1DC: mov     r12d, 0FFFFFFFFh
 * 0000000140BBA1E2: test    r10d, r10d
 * 0000000140BBA1E5: jz      short loc_140BBA24B
 * 0000000140BBA1E7: mov     rsi, 7010008004002001h
 * 0000000140BBA1F1: mov     eax, 8
 * 0000000140BBA1F6: xor     rbx, [r9]
 * 0000000140BBA1F9: mov     ecx, r11d
 * 0000000140BBA1FC: rol     rbx, cl
 * 0000000140BBA1FF: xor     rbx, [r9+8]
 * 0000000140BBA203: add     r9, 10h
 * 0000000140BBA207: rol     rbx, cl
 * 0000000140BBA20A: sub     rax, rdx
 * 0000000140BBA20D: jnz     short loc_140BBA1F6
 * 0000000140BBA20F: mov     rcx, r9
 * 0000000140BBA212: sub     rcx, r14
 * 0000000140BBA215: xor     rcx, r15
 * 0000000140BBA218: mov     rax, rcx
 * 0000000140BBA21B: rol     rax, 11h
 * 0000000140BBA21F: xor     rcx, rax
 * 0000000140BBA222: mov     rax, rsi
 * 0000000140BBA225: mul     rcx
 * 0000000140BBA228: xor     eax, edx
 * 0000000140BBA22A: mov     [rbp+8D0h+var_518], rdx
 * 0000000140BBA231: xor     r11d, eax
 * 0000000140BBA234: mov     edx, 1
 * 0000000140BBA239: and     r11d, 3Fh
 * 0000000140BBA23D: cmovz   r11d, edx
 * 0000000140BBA241: add     r10d, r12d
 * 0000000140BBA244: jnz     short loc_140BBA1F1
 * 0000000140BBA246: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBA24B: and     r8d, 7Fh
 * 0000000140BBA24F: cmp     r8d, 8
 * 0000000140BBA253: jb      short loc_140BBA272
 * 0000000140BBA255: mov     eax, r8d
 * 0000000140BBA258: shr     rax, 3
 * 0000000140BBA25C: xor     rbx, [r9]
 * 0000000140BBA25F: mov     ecx, r11d
 * 0000000140BBA262: rol     rbx, cl
 * 0000000140BBA265: add     r9, 8
 * 0000000140BBA269: add     r8d, 0FFFFFFF8h
 * 0000000140BBA26D: sub     rax, rdx
 * 0000000140BBA270: jnz     short loc_140BBA25C
 * 0000000140BBA272: xor     r15d, r15d
 * 0000000140BBA275: test    r8d, r8d
 * 0000000140BBA278: jz      short loc_140BBA28F
 * 0000000140BBA27A: movzx   eax, byte ptr [r9]
 * 0000000140BBA27E: mov     ecx, r11d
 * 0000000140BBA281: xor     rbx, rax
 * 0000000140BBA284: add     r9, rdx
 * 0000000140BBA287: rol     rbx, cl
 * 0000000140BBA28A: add     r8d, r12d
 * 0000000140BBA28D: jnz     short loc_140BBA27A
 * 0000000140BBA28F: mov     rax, rbx
 * 0000000140BBA292: jmp     short loc_140BBA296
 * 0000000140BBA294: xor     ebx, eax
 * 0000000140BBA296: shr     rax, 1Fh
 * 0000000140BBA29A: test    rax, rax
 * 0000000140BBA29D: jnz     short loc_140BBA294
 * 0000000140BBA29F: btr     ebx, 1Fh
 * 0000000140BBA2A3: mov     r12d, r15d
 * 0000000140BBA2A6: cmp     ebx, [r13+14h]
 * 0000000140BBA2AA: jz      loc_140BBA4E0
 * 0000000140BBA2B0: cmp     [r13+0], r15d
 * 0000000140BBA2B4: jnz     short loc_140BBA2BE
 * 0000000140BBA2B6: cmp     [r13+18h], r15d
 * 0000000140BBA2BA: cmovnz  r12d, edx
 * 0000000140BBA2BE: mov     ecx, [r13+10h]
 * 0000000140BBA2C2: mov     rdx, [r13+8]
 * 0000000140BBA2C6: test    rcx, rcx
 * 0000000140BBA2C9: jz      loc_140BBA395
 * 0000000140BBA2CF: mov     eax, [rsi+9DCh]
 * 0000000140BBA2D5: mov     r8d, 40h ; '@'
 * 0000000140BBA2DB: test    r8b, al
 * 0000000140BBA2DE: jz      loc_140BBA395
 * 0000000140BBA2E4: mov     r15, cr8
 * 0000000140BBA2E8: lea     eax, [r8-3Eh]
 * 0000000140BBA2EC: mov     cr8, rax
 * 0000000140BBA2F0: mov     r14, rdx
 * 0000000140BBA2F3: lea     rax, [rcx-1]
 * 0000000140BBA2F7: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BBA2FE: add     rax, rdx
 * 0000000140BBA301: or      rax, 0FFFh
 * 0000000140BBA307: mov     [rbp+8D0h+var_950], rax
 * 0000000140BBA30B: lea     r13, [r14-1]
 * 0000000140BBA30F: mov     rax, [rsi+468h]
 * 0000000140BBA316: xor     edx, edx
 * 0000000140BBA318: mov     rcx, r14
 * 0000000140BBA31B: call    KeGuardDispatchICall
 * 0000000140BBA320: cmp     eax, 0C000022Dh
 * 0000000140BBA325: jnz     short loc_140BBA34C
 * 0000000140BBA327: test    r12d, r12d
 * 0000000140BBA32A: jnz     short loc_140BBA385
 * 0000000140BBA32C: lea     eax, [r12+1]
 * 0000000140BBA331: cmp     r15b, al
 * 0000000140BBA334: ja      short loc_140BBA350
 * 0000000140BBA336: movzx   eax, r15b
 * 0000000140BBA33A: mov     cr8, rax
 * 0000000140BBA33E: mov     al, [r14]
 * 0000000140BBA341: lea     eax, [r12+2]
 * 0000000140BBA346: mov     cr8, rax
 * 0000000140BBA34A: jmp     short loc_140BBA30F
 * 0000000140BBA34C: test    eax, eax
 * 0000000140BBA34E: js      short loc_140BBA385
 * 0000000140BBA350: mov     r11d, 1000h
 * 0000000140BBA356: add     r14, r11
 * 0000000140BBA359: add     r13, r11
 * 0000000140BBA35C: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BBA360: jnz     short loc_140BBA30F
 * 0000000140BBA362: movzx   eax, r15b
 * 0000000140BBA366: mov     cr8, rax
 * 0000000140BBA36A: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BBA36F: xor     r15d, r15d
 * 0000000140BBA372: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BBA37C: lea     ebx, [r15+1]
 * 0000000140BBA380: jmp     loc_140BBA4F5
 * 0000000140BBA385: movzx   eax, r15b
 * 0000000140BBA389: mov     cr8, rax
 * 0000000140BBA38D: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BBA392: xor     r15d, r15d
 * 0000000140BBA395: mov     eax, [r13+14h]
 * 0000000140BBA399: cmp     [rsi+918h], r15d
 * 0000000140BBA3A0: jnz     short loc_140BBA3B2
 * 0000000140BBA3A2: mov     ecx, ebx
 * 0000000140BBA3A4: xor     rcx, rax
 * 0000000140BBA3A7: mov     rax, [rsi+588h]
 * 0000000140BBA3AE: mov     [rax+18h], rcx
 * 0000000140BBA3B2: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BBA3BC: mov     rcx, [r13+8]
 * 0000000140BBA3C0: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BBA3CA: mov     ebx, 1
 * 0000000140BBA3CF: cmp     [rsi+918h], r15d
 * 0000000140BBA3D6: jnz     loc_140BBA4D8
 * 0000000140BBA3DC: lea     rax, [rsi+r14]
 * 0000000140BBA3E0: mov     [rsi+920h], rax
 * 0000000140BBA3E7: lea     rax, [r8+r13]
 * 0000000140BBA3EB: mov     [rsi+928h], rax
 * 0000000140BBA3F2: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBA3F6: mov     [rsi+930h], rax
 * 0000000140BBA3FD: mov     [rsi+938h], rcx
 * 0000000140BBA404: mov     [rsi+918h], ebx
 * 0000000140BBA40A: mov     ecx, [rsi+9D8h]
 * 0000000140BBA410: bt      ecx, 1Dh
 * 0000000140BBA414: jb      loc_140BBA4D8
 * 0000000140BBA41A: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBA424: jz      loc_140BBA4D8
 * 0000000140BBA42A: test    bl, cl
 * 0000000140BBA42C: jz      loc_140BBA4D8
 * 0000000140BBA432: mov     ecx, [rsi+0A74h]
 * 0000000140BBA438: mov     eax, [rsi+804h]
 * 0000000140BBA43E: mov     r10, [rsi+838h]
 * 0000000140BBA445: sub     eax, ecx
 * 0000000140BBA447: mov     r8, [rsi+0A78h]
 * 0000000140BBA44E: lea     rdx, [rcx+rsi]
 * 0000000140BBA452: mov     ecx, eax
 * 0000000140BBA454: shr     rcx, 3
 * 0000000140BBA458: lea     r9, [rdx+rcx*8]
 * 0000000140BBA45C: jmp     short loc_140BBA47F
 * 0000000140BBA45E: xor     [rdx], r8
 * 0000000140BBA461: mov     rax, [rdx]
 * 0000000140BBA464: movzx   ecx, r8b
 * 0000000140BBA468: xor     rax, r10
 * 0000000140BBA46B: and     ecx, 3Fh
 * 0000000140BBA46E: ror     r8, cl
 * 0000000140BBA471: add     r8, rax
 * 0000000140BBA474: xor     r8, 0EFAh
 * 0000000140BBA47B: add     rdx, 8
 * 0000000140BBA47F: cmp     rdx, r9
 * 0000000140BBA482: jnz     short loc_140BBA45E
 * 0000000140BBA484: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBA48C: cmp     r8, [rsi+0A80h]
 * 0000000140BBA493: jz      short loc_140BBA4EF
 * 0000000140BBA495: mov     ecx, [rsi+804h]
 * 0000000140BBA49B: mov     rax, [rsi+588h]
 * 0000000140BBA4A2: mov     [rax], rsi
 * 0000000140BBA4A5: mov     [rax+10h], ecx
 * 0000000140BBA4A8: mov     rcx, [rsi+0A80h]
 * 0000000140BBA4AF: cmp     [rsi+918h], r15d
 * 0000000140BBA4B6: jnz     short loc_140BBA4C6
 * 0000000140BBA4B8: mov     rax, [rsi+588h]
 * 0000000140BBA4BF: xor     rcx, r8
 * 0000000140BBA4C2: mov     [rax+18h], rcx
 * 0000000140BBA4C6: xor     edx, edx
 * 0000000140BBA4C8: mov     r9d, 100h
 * 0000000140BBA4CE: mov     rcx, rsi
 * 0000000140BBA4D1: call    sub_140BC7384
 * 0000000140BBA4D6: jmp     short loc_140BBA4EF
 * 0000000140BBA4D8: mov     r11d, 1000h
 * 0000000140BBA4DE: jmp     short loc_140BBA4FF
 * 0000000140BBA4E0: mov     ebx, 1
 * 0000000140BBA4E5: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BBA4EF: mov     r11d, 1000h
 * 0000000140BBA4F5: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BBA4FF: mov     eax, [r13+28h]
 * 0000000140BBA503: mov     ecx, 2
 * 0000000140BBA508: test    cl, al
 * 0000000140BBA50A: jz      loc_140BB1FA9
 * 0000000140BBA510: mov     rbx, [r13+8]
 * 0000000140BBA514: test    al, 4
 * 0000000140BBA516: jz      loc_140BBA668
 * 0000000140BBA51C: mov     rax, [rbx+70h]
 * 0000000140BBA520: mov     rdx, [r13+18h]
 * 0000000140BBA524: mov     rcx, [rax]
 * 0000000140BBA527: cmp     rcx, rdx
 * 0000000140BBA52A: jz      loc_140BBA668
 * 0000000140BBA530: mov     rax, [rsi+588h]
 * 0000000140BBA537: mov     [rax], rcx
 * 0000000140BBA53A: mov     dword ptr [rax+10h], 100h
 * 0000000140BBA541: cmp     [rsi+918h], r15d
 * 0000000140BBA548: jnz     short loc_140BBA558
 * 0000000140BBA54A: mov     rax, [rsi+588h]
 * 0000000140BBA551: xor     rcx, rdx
 * 0000000140BBA554: mov     [rax+18h], rcx
 * 0000000140BBA558: mov     rcx, [rbx+70h]
 * 0000000140BBA55C: cmp     [rsi+918h], r15d
 * 0000000140BBA563: jnz     loc_140BBA668
 * 0000000140BBA569: lea     rax, [rsi+r14]
 * 0000000140BBA56D: mov     edx, 1
 * 0000000140BBA572: mov     [rsi+920h], rax
 * 0000000140BBA579: lea     rax, [r8+r13]
 * 0000000140BBA57D: mov     [rsi+928h], rax
 * 0000000140BBA584: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBA588: mov     [rsi+930h], rax
 * 0000000140BBA58F: mov     [rsi+938h], rcx
 * 0000000140BBA596: mov     [rsi+918h], edx
 * 0000000140BBA59C: mov     ecx, [rsi+9D8h]
 * 0000000140BBA5A2: bt      ecx, 1Dh
 * 0000000140BBA5A6: jb      loc_140BBA668
 * 0000000140BBA5AC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBA5B6: jz      loc_140BBA668
 * 0000000140BBA5BC: test    dl, cl
 * 0000000140BBA5BE: jz      loc_140BBA668
 * 0000000140BBA5C4: mov     ecx, [rsi+0A74h]
 * 0000000140BBA5CA: mov     eax, [rsi+804h]
 * 0000000140BBA5D0: mov     r10, [rsi+838h]
 * 0000000140BBA5D7: sub     eax, ecx
 * 0000000140BBA5D9: mov     r8, [rsi+0A78h]
 * 0000000140BBA5E0: lea     rdx, [rcx+rsi]
 * 0000000140BBA5E4: mov     ecx, eax
 * 0000000140BBA5E6: shr     rcx, 3
 * 0000000140BBA5EA: lea     r9, [rdx+rcx*8]
 * 0000000140BBA5EE: jmp     short loc_140BBA611
 * 0000000140BBA5F0: xor     [rdx], r8
 * 0000000140BBA5F3: mov     rax, [rdx]
 * 0000000140BBA5F6: movzx   ecx, r8b
 * 0000000140BBA5FA: xor     rax, r10
 * 0000000140BBA5FD: and     ecx, 3Fh
 * 0000000140BBA600: ror     r8, cl
 * 0000000140BBA603: add     r8, rax
 * 0000000140BBA606: xor     r8, 0EFAh
 * 0000000140BBA60D: add     rdx, 8
 * 0000000140BBA611: cmp     rdx, r9
 * 0000000140BBA614: jnz     short loc_140BBA5F0
 * 0000000140BBA616: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBA61E: cmp     r8, [rsi+0A80h]
 * 0000000140BBA625: jz      short loc_140BBA668
 * 0000000140BBA627: mov     ecx, [rsi+804h]
 * 0000000140BBA62D: mov     rax, [rsi+588h]
 * 0000000140BBA634: mov     [rax], rsi
 * 0000000140BBA637: mov     [rax+10h], ecx
 * 0000000140BBA63A: mov     rcx, [rsi+0A80h]
 * 0000000140BBA641: cmp     [rsi+918h], r15d
 * 0000000140BBA648: jnz     short loc_140BBA658
 * 0000000140BBA64A: mov     rax, [rsi+588h]
 * 0000000140BBA651: xor     rcx, r8
 * 0000000140BBA654: mov     [rax+18h], rcx
 * 0000000140BBA658: xor     edx, edx
 * 0000000140BBA65A: mov     r9d, 100h
 * 0000000140BBA660: mov     rcx, rsi
 * 0000000140BBA663: call    sub_140BC7384
 * 0000000140BBA668: mov     eax, [r13+28h]
 * 0000000140BBA66C: test    al, 8
 * 0000000140BBA66E: jz      loc_140BB2B58
 * 0000000140BBA674: mov     rax, [rbx+78h]
 * 0000000140BBA678: mov     rdx, [r13+20h]
 * 0000000140BBA67C: mov     rcx, [rax]
 * 0000000140BBA67F: cmp     rcx, rdx
 * 0000000140BBA682: jz      loc_140BB2B58
 * 0000000140BBA688: mov     rax, [rsi+588h]
 * 0000000140BBA68F: mov     [rax], rcx
 * 0000000140BBA692: mov     dword ptr [rax+10h], 100h
 * 0000000140BBA699: cmp     [rsi+918h], r15d
 * 0000000140BBA6A0: jnz     short loc_140BBA6B0
 * 0000000140BBA6A2: mov     rax, [rsi+588h]
 * 0000000140BBA6A9: xor     rcx, rdx
 * 0000000140BBA6AC: mov     [rax+18h], rcx
 * 0000000140BBA6B0: mov     rcx, [rbx+78h]
 * 0000000140BBA6B4: mov     ebx, 1
 * 0000000140BBA6B9: cmp     [rsi+918h], r15d
 * 0000000140BBA6C0: jnz     loc_140BB2B5D
 * 0000000140BBA6C6: lea     rax, [rsi+r14]
 * 0000000140BBA6CA: mov     [rsi+920h], rax
 * 0000000140BBA6D1: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBA6DB: add     rax, r13
 * 0000000140BBA6DE: mov     [rsi+928h], rax
 * 0000000140BBA6E5: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBA6E9: mov     [rsi+930h], rax
 * 0000000140BBA6F0: mov     [rsi+938h], rcx
 * 0000000140BBA6F7: mov     [rsi+918h], ebx
 * 0000000140BBA6FD: mov     ecx, [rsi+9D8h]
 * 0000000140BBA703: bt      ecx, 1Dh
 * 0000000140BBA707: jb      loc_140BB2B5D
 * 0000000140BBA70D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBA717: jz      loc_140BB2B5D
 * 0000000140BBA71D: test    bl, cl
 * 0000000140BBA71F: jz      loc_140BB2B5D
 * 0000000140BBA725: mov     ecx, [rsi+0A74h]
 * 0000000140BBA72B: mov     eax, [rsi+804h]
 * 0000000140BBA731: mov     r10, [rsi+838h]
 * 0000000140BBA738: sub     eax, ecx
 * 0000000140BBA73A: mov     r8, [rsi+0A78h]
 * 0000000140BBA741: lea     rdx, [rcx+rsi]
 * 0000000140BBA745: mov     ecx, eax
 * 0000000140BBA747: shr     rcx, 3
 * 0000000140BBA74B: lea     r9, [rdx+rcx*8]
 * 0000000140BBA74F: jmp     short loc_140BBA772
 * 0000000140BBA751: xor     [rdx], r8
 * 0000000140BBA754: mov     rax, [rdx]
 * 0000000140BBA757: movzx   ecx, r8b
 * 0000000140BBA75B: xor     rax, r10
 * 0000000140BBA75E: and     ecx, 3Fh
 * 0000000140BBA761: ror     r8, cl
 * 0000000140BBA764: add     r8, rax
 * 0000000140BBA767: xor     r8, 0EFAh
 * 0000000140BBA76E: add     rdx, 8
 * 0000000140BBA772: cmp     rdx, r9
 * 0000000140BBA775: jnz     short loc_140BBA751
 * 0000000140BBA777: jmp     loc_140BB3A63
 * 0000000140BBA77C: mov     rdx, r13
 * 0000000140BBA77F: mov     rcx, rsi
 * 0000000140BBA782: call    sub_140516BE4
 * 0000000140BBA787: jmp     loc_140BBD398
 * 0000000140BBA78C: mov     rdx, r13
 * 0000000140BBA78F: mov     rcx, rsi
 * 0000000140BBA792: call    sub_140517CE8
 * 0000000140BBA797: jmp     loc_140BBD398
 * 0000000140BBA79C: mov     eax, [rsi+850h]
 * 0000000140BBA7A2: test    bl, al
 * 0000000140BBA7A4: jz      loc_140BB1FAF
 * 0000000140BBA7AA: mov     rax, [rsi+568h]
 * 0000000140BBA7B1: cmp     [rax+20h], r15
 * 0000000140BBA7B5: jnz     short loc_140BBA7BF
 * 0000000140BBA7B7: mov     rbx, r15
 * 0000000140BBA7BA: jmp     loc_140BBA8D2
 * 0000000140BBA7BF: mov     ecx, [rsi+9BCh]
 * 0000000140BBA7C5: mov     r12d, 0FFFFFFFFh
 * 0000000140BBA7CB: cmp     ecx, r12d
 * 0000000140BBA7CE: jnz     short loc_140BBA7DA
 * 0000000140BBA7D0: mov     [rsi+9BCh], r15d
 * 0000000140BBA7D7: mov     ecx, r15d
 * 0000000140BBA7DA: mov     rax, [rsi+288h]
 * 0000000140BBA7E1: call    KeGuardDispatchICall
 * 0000000140BBA7E6: mov     rbx, rax
 * 0000000140BBA7E9: test    rax, rax
 * 0000000140BBA7EC: jnz     short loc_140BBA804
 * 0000000140BBA7EE: mov     rax, [rsi+290h]
 * 0000000140BBA7F5: xor     ecx, ecx
 * 0000000140BBA7F7: call    KeGuardDispatchICall
 * 0000000140BBA7FC: mov     rbx, rax
 * 0000000140BBA7FF: test    rax, rax
 * 0000000140BBA802: jz      short loc_140BBA7B7
 * 0000000140BBA804: lea     r14, [rsi+988h]
 * 0000000140BBA80B: jmp     short loc_140BBA828
 * 0000000140BBA80D: mov     rax, [rsi+290h]
 * 0000000140BBA814: mov     rcx, rbx
 * 0000000140BBA817: call    KeGuardDispatchICall
 * 0000000140BBA81C: mov     rbx, rax
 * 0000000140BBA81F: test    rax, rax
 * 0000000140BBA822: jz      loc_140BBA8B1
 * 0000000140BBA828: mov     rax, [rsi+2A0h]
 * 0000000140BBA82F: mov     rdx, r14
 * 0000000140BBA832: mov     rcx, rbx
 * 0000000140BBA835: call    KeGuardDispatchICall
 * 0000000140BBA83A: test    eax, eax
 * 0000000140BBA83C: js      short loc_140BBA80D
 * 0000000140BBA83E: mov     rax, [rsi+3D0h]
 * 0000000140BBA845: lea     rdx, [rbp+8D0h+var_710]
 * 0000000140BBA84C: xor     r9d, r9d
 * 0000000140BBA84F: xor     r8d, r8d
 * 0000000140BBA852: lea     ecx, [r9+1Ah]
 * 0000000140BBA856: call    KeGuardDispatchICall
 * 0000000140BBA85B: mov     r14d, eax
 * 0000000140BBA85E: lea     rdx, [rsi+988h]
 * 0000000140BBA865: mov     rax, [rsi+2A8h]
 * 0000000140BBA86C: mov     rcx, rbx
 * 0000000140BBA86F: call    KeGuardDispatchICall
 * 0000000140BBA874: mov     rax, [rsi+290h]
 * 0000000140BBA87B: mov     rcx, rbx
 * 0000000140BBA87E: call    KeGuardDispatchICall
 * 0000000140BBA883: mov     rbx, rax
 * 0000000140BBA886: test    rax, rax
 * 0000000140BBA889: jz      short loc_140BBA8BD
 * 0000000140BBA88B: mov     rax, [rsi+2B0h]
 * 0000000140BBA892: mov     rcx, rbx
 * 0000000140BBA895: call    KeGuardDispatchICall
 * 0000000140BBA89A: mov     [rsi+9BCh], eax
 * 0000000140BBA8A0: mov     rcx, rbx
 * 0000000140BBA8A3: mov     rax, [rsi+298h]
 * 0000000140BBA8AA: call    KeGuardDispatchICall
 * 0000000140BBA8AF: jmp     short loc_140BBA8C4
 * 0000000140BBA8B1: mov     [rsi+9BCh], r12d
 * 0000000140BBA8B8: jmp     loc_140BBA7B7
 * 0000000140BBA8BD: mov     [rsi+9BCh], r12d
 * 0000000140BBA8C4: mov     rbx, [rbp+8D0h+var_710]
 * 0000000140BBA8CB: test    r14d, r14d
 * 0000000140BBA8CE: cmovs   rbx, r15
 * 0000000140BBA8D2: mov     rax, [rsi+3B0h]
 * 0000000140BBA8D9: xor     ecx, ecx
 * 0000000140BBA8DB: mov     [rsp+9D0h+var_968], rbx
 * 0000000140BBA8E0: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BBA8E5: call    KeGuardDispatchICall
 * 0000000140BBA8EA: xor     r12d, r12d
 * 0000000140BBA8ED: mov     [rbp+8D0h+var_930], rax
 * 0000000140BBA8F1: mov     r14, rax
 * 0000000140BBA8F4: test    rax, rax
 * 0000000140BBA8F7: jz      loc_140BBB91A
 * 0000000140BBA8FD: mov     rcx, r14
 * 0000000140BBA900: cmp     rbx, r14
 * 0000000140BBA903: jnz     loc_140BBB0D6
 * 0000000140BBA909: mov     rax, [rsi+3A0h]
 * 0000000140BBA910: call    KeGuardDispatchICall
 * 0000000140BBA915: test    eax, eax
 * 0000000140BBA917: js      loc_140BBB8E7
 * 0000000140BBA91D: mov     rax, [rsi+3E0h]
 * 0000000140BBA924: mov     rcx, r14
 * 0000000140BBA927: call    KeGuardDispatchICall
 * 0000000140BBA92C: movzx   ebx, al
 * 0000000140BBA92F: lea     rdx, [rbp+8D0h+var_918]
 * 0000000140BBA933: mov     rax, [rsi+3E8h]
 * 0000000140BBA93A: mov     rcx, r14
 * 0000000140BBA93D: call    KeGuardDispatchICall
 * 0000000140BBA942: mov     byte ptr [rbp+8D0h+arg_8], al
 * 0000000140BBA948: mov     rcx, r14
 * 0000000140BBA94B: mov     rax, [rsi+3F0h]
 * 0000000140BBA952: call    KeGuardDispatchICall
 * 0000000140BBA957: mov     [rbp+8D0h+var_950], rax
 * 0000000140BBA95B: cmp     bl, 61h ; 'a'
 * 0000000140BBA95E: jz      loc_140BBAAA9
 * 0000000140BBA964: cmp     [rsi+918h], r12d
 * 0000000140BBA96B: jnz     loc_140BBAAA9
 * 0000000140BBA971: mov     rax, [rsi+588h]
 * 0000000140BBA978: mov     ecx, ebx
 * 0000000140BBA97A: xor     rcx, 61h
 * 0000000140BBA97E: mov     [rax+18h], rcx
 * 0000000140BBA982: cmp     [rsi+918h], r12d
 * 0000000140BBA989: jnz     loc_140BBAAA9
 * 0000000140BBA98F: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBA994: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBA99E: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBA9A8: mov     r8d, 1
 * 0000000140BBA9AE: lea     rax, [rsi+r10]
 * 0000000140BBA9B2: mov     [rsi+920h], rax
 * 0000000140BBA9B9: lea     rax, [rdx+r9]
 * 0000000140BBA9BD: mov     [rsi+928h], rax
 * 0000000140BBA9C4: movsxd  rax, dword ptr [rdx]
 * 0000000140BBA9C7: mov     [rsi+930h], rax
 * 0000000140BBA9CE: mov     [rsi+938h], r14
 * 0000000140BBA9D5: mov     [rsi+918h], r8d
 * 0000000140BBA9DC: mov     ecx, [rsi+9D8h]
 * 0000000140BBA9E2: bt      ecx, 1Dh
 * 0000000140BBA9E6: jb      loc_140BBAAC8
 * 0000000140BBA9EC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBA9F6: jz      loc_140BBAAC8
 * 0000000140BBA9FC: test    r8b, cl
 * 0000000140BBA9FF: jz      loc_140BBAAC8
 * 0000000140BBAA05: mov     ecx, [rsi+0A74h]
 * 0000000140BBAA0B: mov     eax, [rsi+804h]
 * 0000000140BBAA11: mov     r10, [rsi+838h]
 * 0000000140BBAA18: sub     eax, ecx
 * 0000000140BBAA1A: mov     r8, [rsi+0A78h]
 * 0000000140BBAA21: lea     rdx, [rcx+rsi]
 * 0000000140BBAA25: mov     ecx, eax
 * 0000000140BBAA27: shr     rcx, 3
 * 0000000140BBAA2B: lea     r9, [rdx+rcx*8]
 * 0000000140BBAA2F: jmp     short loc_140BBAA52
 * 0000000140BBAA31: xor     [rdx], r8
 * 0000000140BBAA34: mov     rax, [rdx]
 * 0000000140BBAA37: movzx   ecx, r8b
 * 0000000140BBAA3B: xor     rax, r10
 * 0000000140BBAA3E: and     ecx, 3Fh
 * 0000000140BBAA41: ror     r8, cl
 * 0000000140BBAA44: add     r8, rax
 * 0000000140BBAA47: xor     r8, 0EFAh
 * 0000000140BBAA4E: add     rdx, 8
 * 0000000140BBAA52: cmp     rdx, r9
 * 0000000140BBAA55: jnz     short loc_140BBAA31
 * 0000000140BBAA57: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBAA5F: cmp     r8, [rsi+0A80h]
 * 0000000140BBAA66: jz      short loc_140BBAAA9
 * 0000000140BBAA68: mov     ecx, [rsi+804h]
 * 0000000140BBAA6E: mov     rax, [rsi+588h]
 * 0000000140BBAA75: mov     [rax], rsi
 * 0000000140BBAA78: mov     [rax+10h], ecx
 * 0000000140BBAA7B: mov     rcx, [rsi+0A80h]
 * 0000000140BBAA82: cmp     [rsi+918h], r12d
 * 0000000140BBAA89: jnz     short loc_140BBAA99
 * 0000000140BBAA8B: mov     rax, [rsi+588h]
 * 0000000140BBAA92: xor     rcx, r8
 * 0000000140BBAA95: mov     [rax+18h], rcx
 * 0000000140BBAA99: xor     edx, edx
 * 0000000140BBAA9B: mov     r9d, 100h
 * 0000000140BBAAA1: mov     rcx, rsi
 * 0000000140BBAAA4: call    sub_140BC7384
 * 0000000140BBAAA9: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBAAAE: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBAAB8: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBAAC2: mov     r8d, 1
 * 0000000140BBAAC8: mov     ecx, ebx
 * 0000000140BBAACA: mov     r14b, r12b
 * 0000000140BBAACD: and     ecx, 7
 * 0000000140BBAAD0: sub     ecx, 1
 * 0000000140BBAAD3: jz      loc_140BBAC09
 * 0000000140BBAAD9: xor     r11d, r11d
 * 0000000140BBAADC: cmp     ecx, 1
 * 0000000140BBAADF: jz      loc_140BBABFC
 * 0000000140BBAAE5: test    bl, 7
 * 0000000140BBAAE8: jz      loc_140BBAC0F
 * 0000000140BBAAEE: cmp     [rsi+918h], r11d
 * 0000000140BBAAF5: jnz     loc_140BBAC0F
 * 0000000140BBAAFB: lea     rax, [rsi+r10]
 * 0000000140BBAAFF: mov     [rsi+920h], rax
 * 0000000140BBAB06: lea     rax, [rdx+r9]
 * 0000000140BBAB0A: mov     [rsi+928h], rax
 * 0000000140BBAB11: movsxd  rax, dword ptr [rdx]
 * 0000000140BBAB14: mov     [rsi+930h], rax
 * 0000000140BBAB1B: mov     rax, [rbp+8D0h+var_930]
 * 0000000140BBAB1F: mov     [rsi+938h], rax
 * 0000000140BBAB26: mov     [rsi+918h], r8d
 * 0000000140BBAB2D: mov     ecx, [rsi+9D8h]
 * 0000000140BBAB33: bt      ecx, 1Dh
 * 0000000140BBAB37: jb      loc_140BBAC0F
 * 0000000140BBAB3D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBAB47: jz      loc_140BBAC0F
 * 0000000140BBAB4D: test    r8b, cl
 * 0000000140BBAB50: jz      loc_140BBAC0F
 * 0000000140BBAB56: mov     ecx, [rsi+0A74h]
 * 0000000140BBAB5C: mov     eax, [rsi+804h]
 * 0000000140BBAB62: mov     r10, [rsi+838h]
 * 0000000140BBAB69: sub     eax, ecx
 * 0000000140BBAB6B: mov     r8, [rsi+0A78h]
 * 0000000140BBAB72: lea     rdx, [rcx+rsi]
 * 0000000140BBAB76: mov     ecx, eax
 * 0000000140BBAB78: shr     rcx, 3
 * 0000000140BBAB7C: lea     r9, [rdx+rcx*8]
 * 0000000140BBAB80: jmp     short loc_140BBABA3
 * 0000000140BBAB82: xor     [rdx], r8
 * 0000000140BBAB85: mov     rax, [rdx]
 * 0000000140BBAB88: movzx   ecx, r8b
 * 0000000140BBAB8C: xor     rax, r10
 * 0000000140BBAB8F: and     ecx, 3Fh
 * 0000000140BBAB92: ror     r8, cl
 * 0000000140BBAB95: add     r8, rax
 * 0000000140BBAB98: xor     r8, 0EFAh
 * 0000000140BBAB9F: add     rdx, 8
 * 0000000140BBABA3: cmp     rdx, r9
 * 0000000140BBABA6: jnz     short loc_140BBAB82
 * 0000000140BBABA8: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBABB0: cmp     r8, [rsi+0A80h]
 * 0000000140BBABB7: jz      short loc_140BBAC0F
 * 0000000140BBABB9: mov     ecx, [rsi+804h]
 * 0000000140BBABBF: mov     rax, [rsi+588h]
 * 0000000140BBABC6: mov     [rax], rsi
 * 0000000140BBABC9: mov     [rax+10h], ecx
 * 0000000140BBABCC: mov     rcx, [rsi+0A80h]
 * 0000000140BBABD3: cmp     [rsi+918h], r11d
 * 0000000140BBABDA: jnz     short loc_140BBABEA
 * 0000000140BBABDC: mov     rax, [rsi+588h]
 * 0000000140BBABE3: xor     rcx, r8
 * 0000000140BBABE6: mov     [rax+18h], rcx
 * 0000000140BBABEA: xor     edx, edx
 * 0000000140BBABEC: mov     r9d, 100h
 * 0000000140BBABF2: mov     rcx, rsi
 * 0000000140BBABF5: call    sub_140BC7384
 * 0000000140BBABFA: jmp     short loc_140BBAC0C
 * 0000000140BBABFC: mov     eax, 10h
 * 0000000140BBAC01: mov     r14b, al
 * 0000000140BBAC04: mov     r12b, al
 * 0000000140BBAC07: jmp     short loc_140BBAC0F
 * 0000000140BBAC09: mov     r14b, 30h ; '0'
 * 0000000140BBAC0C: xor     r11d, r11d
 * 0000000140BBAC0F: mov     r15, [rsi+5C0h]
 * 0000000140BBAC16: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBAC20: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BBAC27: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBAC31: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBAC36: mov     r8d, 1
 * 0000000140BBAC3C: shr     rbx, 4
 * 0000000140BBAC40: or      r14b, [r15+rbx*2]
 * 0000000140BBAC44: cmp     r14b, dil
 * 0000000140BBAC47: mov     r14, [rbp+8D0h+var_930]
 * 0000000140BBAC4B: jz      loc_140BBAD78
 * 0000000140BBAC51: cmp     [rsi+918h], r11d
 * 0000000140BBAC58: jnz     loc_140BBAD78
 * 0000000140BBAC5E: lea     rax, [rsi+r10]
 * 0000000140BBAC62: mov     [rsi+920h], rax
 * 0000000140BBAC69: lea     rax, [rdx+r9]
 * 0000000140BBAC6D: mov     [rsi+928h], rax
 * 0000000140BBAC74: movsxd  rax, dword ptr [rdx]
 * 0000000140BBAC77: mov     [rsi+930h], rax
 * 0000000140BBAC7E: mov     [rsi+938h], r14
 * 0000000140BBAC85: mov     [rsi+918h], r8d
 * 0000000140BBAC8C: mov     ecx, [rsi+9D8h]
 * 0000000140BBAC92: bt      ecx, 1Dh
 * 0000000140BBAC96: jb      loc_140BBAD78
 * 0000000140BBAC9C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBACA6: jz      loc_140BBAD78
 * 0000000140BBACAC: test    r8b, cl
 * 0000000140BBACAF: jz      loc_140BBAD78
 * 0000000140BBACB5: mov     ecx, [rsi+0A74h]
 * 0000000140BBACBB: mov     eax, [rsi+804h]
 * 0000000140BBACC1: mov     r10, [rsi+838h]
 * 0000000140BBACC8: sub     eax, ecx
 * 0000000140BBACCA: mov     r8, [rsi+0A78h]
 * 0000000140BBACD1: lea     rdx, [rcx+rsi]
 * 0000000140BBACD5: mov     ecx, eax
 * 0000000140BBACD7: shr     rcx, 3
 * 0000000140BBACDB: lea     r9, [rdx+rcx*8]
 * 0000000140BBACDF: jmp     short loc_140BBAD02
 * 0000000140BBACE1: xor     [rdx], r8
 * 0000000140BBACE4: mov     rax, [rdx]
 * 0000000140BBACE7: movzx   ecx, r8b
 * 0000000140BBACEB: xor     rax, r10
 * 0000000140BBACEE: and     ecx, 3Fh
 * 0000000140BBACF1: ror     r8, cl
 * 0000000140BBACF4: add     r8, rax
 * 0000000140BBACF7: xor     r8, 0EFAh
 * 0000000140BBACFE: add     rdx, 8
 * 0000000140BBAD02: cmp     rdx, r9
 * 0000000140BBAD05: jnz     short loc_140BBACE1
 * 0000000140BBAD07: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBAD0F: cmp     r8, [rsi+0A80h]
 * 0000000140BBAD16: jz      short loc_140BBAD59
 * 0000000140BBAD18: mov     ecx, [rsi+804h]
 * 0000000140BBAD1E: mov     rax, [rsi+588h]
 * 0000000140BBAD25: mov     [rax], rsi
 * 0000000140BBAD28: mov     [rax+10h], ecx
 * 0000000140BBAD2B: mov     rcx, [rsi+0A80h]
 * 0000000140BBAD32: cmp     [rsi+918h], r11d
 * 0000000140BBAD39: jnz     short loc_140BBAD49
 * 0000000140BBAD3B: mov     rax, [rsi+588h]
 * 0000000140BBAD42: xor     rcx, r8
 * 0000000140BBAD45: mov     [rax+18h], rcx
 * 0000000140BBAD49: xor     edx, edx
 * 0000000140BBAD4B: mov     r9d, 100h
 * 0000000140BBAD51: mov     rcx, rsi
 * 0000000140BBAD54: call    sub_140BC7384
 * 0000000140BBAD59: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBAD5E: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBAD68: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBAD72: mov     r8d, 1
 * 0000000140BBAD78: or      r12b, [r15+rbx*2+1]
 * 0000000140BBAD7D: cmp     r12b, [rbp+8D0h+var_918]
 * 0000000140BBAD81: jz      loc_140BBAE94
 * 0000000140BBAD87: xor     r12d, r12d
 * 0000000140BBAD8A: cmp     [rsi+918h], r12d
 * 0000000140BBAD91: jnz     loc_140BBAE97
 * 0000000140BBAD97: lea     rax, [rsi+r10]
 * 0000000140BBAD9B: mov     [rsi+920h], rax
 * 0000000140BBADA2: lea     rax, [rdx+r9]
 * 0000000140BBADA6: mov     [rsi+928h], rax
 * 0000000140BBADAD: movsxd  rax, dword ptr [rdx]
 * 0000000140BBADB0: mov     [rsi+930h], rax
 * 0000000140BBADB7: mov     [rsi+938h], r14
 * 0000000140BBADBE: mov     [rsi+918h], r8d
 * 0000000140BBADC5: mov     ecx, [rsi+9D8h]
 * 0000000140BBADCB: bt      ecx, 1Dh
 * 0000000140BBADCF: jb      loc_140BBAE97
 * 0000000140BBADD5: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBADDF: jz      loc_140BBAE97
 * 0000000140BBADE5: test    r8b, cl
 * 0000000140BBADE8: jz      loc_140BBAE97
 * 0000000140BBADEE: mov     ecx, [rsi+0A74h]
 * 0000000140BBADF4: mov     eax, [rsi+804h]
 * 0000000140BBADFA: mov     r10, [rsi+838h]
 * 0000000140BBAE01: sub     eax, ecx
 * 0000000140BBAE03: mov     r8, [rsi+0A78h]
 * 0000000140BBAE0A: lea     rdx, [rcx+rsi]
 * 0000000140BBAE0E: mov     ecx, eax
 * 0000000140BBAE10: shr     rcx, 3
 * 0000000140BBAE14: lea     r9, [rdx+rcx*8]
 * 0000000140BBAE18: jmp     short loc_140BBAE3B
 * 0000000140BBAE1A: xor     [rdx], r8
 * 0000000140BBAE1D: mov     rax, [rdx]
 * 0000000140BBAE20: movzx   ecx, r8b
 * 0000000140BBAE24: xor     rax, r10
 * 0000000140BBAE27: and     ecx, 3Fh
 * 0000000140BBAE2A: ror     r8, cl
 * 0000000140BBAE2D: add     r8, rax
 * 0000000140BBAE30: xor     r8, 0EFAh
 * 0000000140BBAE37: add     rdx, 8
 * 0000000140BBAE3B: cmp     rdx, r9
 * 0000000140BBAE3E: jnz     short loc_140BBAE1A
 * 0000000140BBAE40: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBAE48: cmp     r8, [rsi+0A80h]
 * 0000000140BBAE4F: jz      short loc_140BBAE97
 * 0000000140BBAE51: mov     ecx, [rsi+804h]
 * 0000000140BBAE57: mov     rax, [rsi+588h]
 * 0000000140BBAE5E: mov     [rax], rsi
 * 0000000140BBAE61: mov     [rax+10h], ecx
 * 0000000140BBAE64: mov     rcx, [rsi+0A80h]
 * 0000000140BBAE6B: cmp     [rsi+918h], r12d
 * 0000000140BBAE72: jnz     short loc_140BBAE82
 * 0000000140BBAE74: mov     rax, [rsi+588h]
 * 0000000140BBAE7B: xor     rcx, r8
 * 0000000140BBAE7E: mov     [rax+18h], rcx
 * 0000000140BBAE82: xor     edx, edx
 * 0000000140BBAE84: mov     r9d, 100h
 * 0000000140BBAE8A: mov     rcx, rsi
 * 0000000140BBAE8D: call    sub_140BC7384
 * 0000000140BBAE92: jmp     short loc_140BBAE97
 * 0000000140BBAE94: xor     r12d, r12d
 * 0000000140BBAE97: cmp     r14, [rsi+4D8h]
 * 0000000140BBAE9E: jz      loc_140BBB8C3
 * 0000000140BBAEA4: mov     rax, [rsi+3D8h]
 * 0000000140BBAEAB: mov     edx, 1
 * 0000000140BBAEB0: mov     rcx, r14
 * 0000000140BBAEB3: call    KeGuardDispatchICall
 * 0000000140BBAEB8: mov     rbx, rax
 * 0000000140BBAEBB: test    rax, rax
 * 0000000140BBAEBE: jz      loc_140BBB8C3
 * 0000000140BBAEC4: mov     rcx, [rax]
 * 0000000140BBAEC7: mov     r15, rax
 * 0000000140BBAECA: test    rcx, rcx
 * 0000000140BBAECD: jz      loc_140BBB8B4
 * 0000000140BBAED3: mov     r12, [rbp+8D0h+var_950]
 * 0000000140BBAED7: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BBAEDB: mov     [rsp+9D0h+var_978], rax
 * 0000000140BBAEE0: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140BBAEE4: mov     [rbx], rcx
 * 0000000140BBAEE7: mov     rax, [rsi+1F0h]
 * 0000000140BBAEEE: call    KeGuardDispatchICall
 * 0000000140BBAEF3: mov     rcx, [rbx+8]
 * 0000000140BBAEF7: movzx   edx, [rbp+8D0h+var_918]
 * 0000000140BBAEFB: mov     r14, rcx
 * 0000000140BBAEFE: movzx   eax, dil
 * 0000000140BBAF02: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140BBAF09: cmp     r14, r12
 * 0000000140BBAF0C: cmovz   edx, eax
 * 0000000140BBAF0F: mov     rax, [rsi+3F8h]
 * 0000000140BBAF16: shr     rcx, 6
 * 0000000140BBAF1A: and     cl, 0Fh
 * 0000000140BBAF1D: call    KeGuardDispatchICall
 * 0000000140BBAF22: xor     r11d, r11d
 * 0000000140BBAF25: test    eax, eax
 * 0000000140BBAF27: jnz     loc_140BBB0BC
 * 0000000140BBAF2D: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BBAF37: lea     r9d, [r11+1]
 * 0000000140BBAF3B: jz      short loc_140BBAF89
 * 0000000140BBAF3D: mov     rcx, [rsi+0AC8h]
 * 0000000140BBAF44: lea     edx, [rax+30h]
 * 0000000140BBAF47: lea     r8d, [r11+6]
 * 0000000140BBAF4B: mov     rax, [r13+0]
 * 0000000140BBAF4F: add     edx, 0FFFFFFF8h
 * 0000000140BBAF52: mov     [rcx], rax
 * 0000000140BBAF55: add     r13, 8
 * 0000000140BBAF59: add     rcx, 8
 * 0000000140BBAF5D: sub     r8, r9
 * 0000000140BBAF60: jnz     short loc_140BBAF4B
 * 0000000140BBAF62: test    edx, edx
 * 0000000140BBAF64: jz      short loc_140BBAF82
 * 0000000140BBAF66: mov     edi, 0FFFFFFFFh
 * 0000000140BBAF6B: mov     al, [r13+0]
 * 0000000140BBAF6F: add     r13, r9
 * 0000000140BBAF72: mov     [rcx], al
 * 0000000140BBAF74: add     rcx, r9
 * 0000000140BBAF77: add     edx, edi
 * 0000000140BBAF79: jnz     short loc_140BBAF6B
 * 0000000140BBAF7B: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BBAF82: mov     r13, [rsi+0AC8h]
 * 0000000140BBAF89: mov     [r13+18h], r14
 * 0000000140BBAF8D: mov     rax, [rbx]
 * 0000000140BBAF90: mov     [r13+20h], rax
 * 0000000140BBAF94: mov     eax, [rbx+8]
 * 0000000140BBAF97: shr     rax, 6
 * 0000000140BBAF9B: and     al, 0Fh
 * 0000000140BBAF9D: mov     [r13+28h], al
 * 0000000140BBAFA1: cmp     [rsi+918h], r11d
 * 0000000140BBAFA8: jnz     loc_140BBB0BC
 * 0000000140BBAFAE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBAFB8: add     rax, rsi
 * 0000000140BBAFBB: mov     [rsi+920h], rax
 * 0000000140BBAFC2: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBAFCC: add     rax, r13
 * 0000000140BBAFCF: mov     [rsi+928h], rax
 * 0000000140BBAFD6: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBAFDA: mov     [rsi+930h], rax
 * 0000000140BBAFE1: mov     [rsi+938h], r15
 * 0000000140BBAFE8: mov     [rsi+918h], r9d
 * 0000000140BBAFEF: mov     ecx, [rsi+9D8h]
 * 0000000140BBAFF5: bt      ecx, 1Dh
 * 0000000140BBAFF9: jb      loc_140BBB0BC
 * 0000000140BBAFFF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBB009: jz      loc_140BBB0BC
 * 0000000140BBB00F: test    r9b, cl
 * 0000000140BBB012: jz      loc_140BBB0BC
 * 0000000140BBB018: mov     ecx, [rsi+0A74h]
 * 0000000140BBB01E: mov     eax, [rsi+804h]
 * 0000000140BBB024: mov     r10, [rsi+838h]
 * 0000000140BBB02B: sub     eax, ecx
 * 0000000140BBB02D: mov     r8, [rsi+0A78h]
 * 0000000140BBB034: lea     rdx, [rcx+rsi]
 * 0000000140BBB038: mov     ecx, eax
 * 0000000140BBB03A: shr     rcx, 3
 * 0000000140BBB03E: lea     r9, [rdx+rcx*8]
 * 0000000140BBB042: jmp     short loc_140BBB065
 * 0000000140BBB044: xor     [rdx], r8
 * 0000000140BBB047: mov     rax, [rdx]
 * 0000000140BBB04A: movzx   ecx, r8b
 * 0000000140BBB04E: xor     rax, r10
 * 0000000140BBB051: and     ecx, 3Fh
 * 0000000140BBB054: ror     r8, cl
 * 0000000140BBB057: add     r8, rax
 * 0000000140BBB05A: xor     r8, 0EFAh
 * 0000000140BBB061: add     rdx, 8
 * 0000000140BBB065: cmp     rdx, r9
 * 0000000140BBB068: jnz     short loc_140BBB044
 * 0000000140BBB06A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBB072: cmp     r8, [rsi+0A80h]
 * 0000000140BBB079: jz      short loc_140BBB0BC
 * 0000000140BBB07B: mov     ecx, [rsi+804h]
 * 0000000140BBB081: mov     rax, [rsi+588h]
 * 0000000140BBB088: mov     [rax], rsi
 * 0000000140BBB08B: mov     [rax+10h], ecx
 * 0000000140BBB08E: mov     rcx, [rsi+0A80h]
 * 0000000140BBB095: cmp     [rsi+918h], r11d
 * 0000000140BBB09C: jnz     short loc_140BBB0AC
 * 0000000140BBB09E: mov     rax, [rsi+588h]
 * 0000000140BBB0A5: xor     rcx, r8
 * 0000000140BBB0A8: mov     [rax+18h], rcx
 * 0000000140BBB0AC: xor     edx, edx
 * 0000000140BBB0AE: mov     r9d, 100h
 * 0000000140BBB0B4: mov     rcx, rsi
 * 0000000140BBB0B7: call    sub_140BC7384
 * 0000000140BBB0BC: add     rbx, 30h ; '0'
 * 0000000140BBB0C0: mov     rcx, [rbx]
 * 0000000140BBB0C3: test    rcx, rcx
 * 0000000140BBB0C6: jnz     loc_140BBAEE0
 * 0000000140BBB0CC: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BBB0D1: jmp     loc_140BBB8AD
 * 0000000140BBB0D6: mov     rax, [rsi+3C8h]
 * 0000000140BBB0DD: call    KeGuardDispatchICall
 * 0000000140BBB0E2: test    eax, eax
 * 0000000140BBB0E4: jz      loc_140BBB8EC
 * 0000000140BBB0EA: mov     rax, [rsi+3A0h]
 * 0000000140BBB0F1: mov     rcx, r14
 * 0000000140BBB0F4: call    KeGuardDispatchICall
 * 0000000140BBB0F9: test    eax, eax
 * 0000000140BBB0FB: js      loc_140BBB8E7
 * 0000000140BBB101: mov     rax, [rsi+3E0h]
 * 0000000140BBB108: mov     rcx, r14
 * 0000000140BBB10B: call    KeGuardDispatchICall
 * 0000000140BBB110: movzx   ebx, al
 * 0000000140BBB113: lea     rdx, [rbp+8D0h+var_917]
 * 0000000140BBB117: mov     rax, [rsi+3E8h]
 * 0000000140BBB11E: mov     rcx, r14
 * 0000000140BBB121: call    KeGuardDispatchICall
 * 0000000140BBB126: movzx   edi, al
 * 0000000140BBB129: mov     rcx, r14
 * 0000000140BBB12C: mov     rax, [rsi+3F0h]
 * 0000000140BBB133: call    KeGuardDispatchICall
 * 0000000140BBB138: mov     [rbp+8D0h+arg_8], rax
 * 0000000140BBB13F: cmp     bl, 61h ; 'a'
 * 0000000140BBB142: jz      loc_140BBB28D
 * 0000000140BBB148: cmp     [rsi+918h], r12d
 * 0000000140BBB14F: jnz     loc_140BBB28D
 * 0000000140BBB155: mov     rax, [rsi+588h]
 * 0000000140BBB15C: mov     ecx, ebx
 * 0000000140BBB15E: xor     rcx, 61h
 * 0000000140BBB162: mov     [rax+18h], rcx
 * 0000000140BBB166: cmp     [rsi+918h], r12d
 * 0000000140BBB16D: jnz     loc_140BBB28D
 * 0000000140BBB173: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBB178: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBB182: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBB18C: mov     r8d, 1
 * 0000000140BBB192: lea     rax, [rsi+r10]
 * 0000000140BBB196: mov     [rsi+920h], rax
 * 0000000140BBB19D: lea     rax, [rdx+r9]
 * 0000000140BBB1A1: mov     [rsi+928h], rax
 * 0000000140BBB1A8: movsxd  rax, dword ptr [rdx]
 * 0000000140BBB1AB: mov     [rsi+930h], rax
 * 0000000140BBB1B2: mov     [rsi+938h], r14
 * 0000000140BBB1B9: mov     [rsi+918h], r8d
 * 0000000140BBB1C0: mov     ecx, [rsi+9D8h]
 * 0000000140BBB1C6: bt      ecx, 1Dh
 * 0000000140BBB1CA: jb      loc_140BBB2AC
 * 0000000140BBB1D0: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBB1DA: jz      loc_140BBB2AC
 * 0000000140BBB1E0: test    r8b, cl
 * 0000000140BBB1E3: jz      loc_140BBB2AC
 * 0000000140BBB1E9: mov     ecx, [rsi+0A74h]
 * 0000000140BBB1EF: mov     eax, [rsi+804h]
 * 0000000140BBB1F5: mov     r10, [rsi+838h]
 * 0000000140BBB1FC: sub     eax, ecx
 * 0000000140BBB1FE: mov     r8, [rsi+0A78h]
 * 0000000140BBB205: lea     rdx, [rcx+rsi]
 * 0000000140BBB209: mov     ecx, eax
 * 0000000140BBB20B: shr     rcx, 3
 * 0000000140BBB20F: lea     r9, [rdx+rcx*8]
 * 0000000140BBB213: jmp     short loc_140BBB236
 * 0000000140BBB215: xor     [rdx], r8
 * 0000000140BBB218: mov     rax, [rdx]
 * 0000000140BBB21B: movzx   ecx, r8b
 * 0000000140BBB21F: xor     rax, r10
 * 0000000140BBB222: and     ecx, 3Fh
 * 0000000140BBB225: ror     r8, cl
 * 0000000140BBB228: add     r8, rax
 * 0000000140BBB22B: xor     r8, 0EFAh
 * 0000000140BBB232: add     rdx, 8
 * 0000000140BBB236: cmp     rdx, r9
 * 0000000140BBB239: jnz     short loc_140BBB215
 * 0000000140BBB23B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBB243: cmp     r8, [rsi+0A80h]
 * 0000000140BBB24A: jz      short loc_140BBB28D
 * 0000000140BBB24C: mov     ecx, [rsi+804h]
 * 0000000140BBB252: mov     rax, [rsi+588h]
 * 0000000140BBB259: mov     [rax], rsi
 * 0000000140BBB25C: mov     [rax+10h], ecx
 * 0000000140BBB25F: mov     rcx, [rsi+0A80h]
 * 0000000140BBB266: cmp     [rsi+918h], r12d
 * 0000000140BBB26D: jnz     short loc_140BBB27D
 * 0000000140BBB26F: mov     rax, [rsi+588h]
 * 0000000140BBB276: xor     rcx, r8
 * 0000000140BBB279: mov     [rax+18h], rcx
 * 0000000140BBB27D: xor     edx, edx
 * 0000000140BBB27F: mov     r9d, 100h
 * 0000000140BBB285: mov     rcx, rsi
 * 0000000140BBB288: call    sub_140BC7384
 * 0000000140BBB28D: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBB292: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBB29C: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBB2A6: mov     r8d, 1
 * 0000000140BBB2AC: mov     ecx, ebx
 * 0000000140BBB2AE: mov     r14b, r12b
 * 0000000140BBB2B1: and     ecx, 7
 * 0000000140BBB2B4: sub     ecx, 1
 * 0000000140BBB2B7: jz      loc_140BBB3ED
 * 0000000140BBB2BD: xor     r11d, r11d
 * 0000000140BBB2C0: cmp     ecx, 1
 * 0000000140BBB2C3: jz      loc_140BBB3E0
 * 0000000140BBB2C9: test    bl, 7
 * 0000000140BBB2CC: jz      loc_140BBB3F3
 * 0000000140BBB2D2: cmp     [rsi+918h], r11d
 * 0000000140BBB2D9: jnz     loc_140BBB3F3
 * 0000000140BBB2DF: lea     rax, [rsi+r10]
 * 0000000140BBB2E3: mov     [rsi+920h], rax
 * 0000000140BBB2EA: lea     rax, [rdx+r9]
 * 0000000140BBB2EE: mov     [rsi+928h], rax
 * 0000000140BBB2F5: movsxd  rax, dword ptr [rdx]
 * 0000000140BBB2F8: mov     [rsi+930h], rax
 * 0000000140BBB2FF: mov     rax, [rbp+8D0h+var_930]
 * 0000000140BBB303: mov     [rsi+938h], rax
 * 0000000140BBB30A: mov     [rsi+918h], r8d
 * 0000000140BBB311: mov     ecx, [rsi+9D8h]
 * 0000000140BBB317: bt      ecx, 1Dh
 * 0000000140BBB31B: jb      loc_140BBB3F3
 * 0000000140BBB321: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBB32B: jz      loc_140BBB3F3
 * 0000000140BBB331: test    r8b, cl
 * 0000000140BBB334: jz      loc_140BBB3F3
 * 0000000140BBB33A: mov     ecx, [rsi+0A74h]
 * 0000000140BBB340: mov     eax, [rsi+804h]
 * 0000000140BBB346: mov     r10, [rsi+838h]
 * 0000000140BBB34D: sub     eax, ecx
 * 0000000140BBB34F: mov     r8, [rsi+0A78h]
 * 0000000140BBB356: lea     rdx, [rcx+rsi]
 * 0000000140BBB35A: mov     ecx, eax
 * 0000000140BBB35C: shr     rcx, 3
 * 0000000140BBB360: lea     r9, [rdx+rcx*8]
 * 0000000140BBB364: jmp     short loc_140BBB387
 * 0000000140BBB366: xor     [rdx], r8
 * 0000000140BBB369: mov     rax, [rdx]
 * 0000000140BBB36C: movzx   ecx, r8b
 * 0000000140BBB370: xor     rax, r10
 * 0000000140BBB373: and     ecx, 3Fh
 * 0000000140BBB376: ror     r8, cl
 * 0000000140BBB379: add     r8, rax
 * 0000000140BBB37C: xor     r8, 0EFAh
 * 0000000140BBB383: add     rdx, 8
 * 0000000140BBB387: cmp     rdx, r9
 * 0000000140BBB38A: jnz     short loc_140BBB366
 * 0000000140BBB38C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBB394: cmp     r8, [rsi+0A80h]
 * 0000000140BBB39B: jz      short loc_140BBB3F3
 * 0000000140BBB39D: mov     ecx, [rsi+804h]
 * 0000000140BBB3A3: mov     rax, [rsi+588h]
 * 0000000140BBB3AA: mov     [rax], rsi
 * 0000000140BBB3AD: mov     [rax+10h], ecx
 * 0000000140BBB3B0: mov     rcx, [rsi+0A80h]
 * 0000000140BBB3B7: cmp     [rsi+918h], r11d
 * 0000000140BBB3BE: jnz     short loc_140BBB3CE
 * 0000000140BBB3C0: mov     rax, [rsi+588h]
 * 0000000140BBB3C7: xor     rcx, r8
 * 0000000140BBB3CA: mov     [rax+18h], rcx
 * 0000000140BBB3CE: xor     edx, edx
 * 0000000140BBB3D0: mov     r9d, 100h
 * 0000000140BBB3D6: mov     rcx, rsi
 * 0000000140BBB3D9: call    sub_140BC7384
 * 0000000140BBB3DE: jmp     short loc_140BBB3F0
 * 0000000140BBB3E0: mov     eax, 10h
 * 0000000140BBB3E5: mov     r14b, al
 * 0000000140BBB3E8: mov     r12b, al
 * 0000000140BBB3EB: jmp     short loc_140BBB3F3
 * 0000000140BBB3ED: mov     r14b, 30h ; '0'
 * 0000000140BBB3F0: xor     r11d, r11d
 * 0000000140BBB3F3: mov     r15, [rsi+5C0h]
 * 0000000140BBB3FA: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBB404: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBB409: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBB413: shr     rbx, 4
 * 0000000140BBB417: mov     r8d, 1
 * 0000000140BBB41D: or      r14b, [r15+rbx*2]
 * 0000000140BBB421: cmp     r14b, dil
 * 0000000140BBB424: mov     r14, [rbp+8D0h+var_930]
 * 0000000140BBB428: jz      loc_140BBB555
 * 0000000140BBB42E: cmp     [rsi+918h], r11d
 * 0000000140BBB435: jnz     loc_140BBB555
 * 0000000140BBB43B: lea     rax, [rsi+r10]
 * 0000000140BBB43F: mov     [rsi+920h], rax
 * 0000000140BBB446: lea     rax, [rdx+r9]
 * 0000000140BBB44A: mov     [rsi+928h], rax
 * 0000000140BBB451: movsxd  rax, dword ptr [rdx]
 * 0000000140BBB454: mov     [rsi+930h], rax
 * 0000000140BBB45B: mov     [rsi+938h], r14
 * 0000000140BBB462: mov     [rsi+918h], r8d
 * 0000000140BBB469: mov     ecx, [rsi+9D8h]
 * 0000000140BBB46F: bt      ecx, 1Dh
 * 0000000140BBB473: jb      loc_140BBB555
 * 0000000140BBB479: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBB483: jz      loc_140BBB555
 * 0000000140BBB489: test    r8b, cl
 * 0000000140BBB48C: jz      loc_140BBB555
 * 0000000140BBB492: mov     ecx, [rsi+0A74h]
 * 0000000140BBB498: mov     eax, [rsi+804h]
 * 0000000140BBB49E: mov     r10, [rsi+838h]
 * 0000000140BBB4A5: sub     eax, ecx
 * 0000000140BBB4A7: mov     r8, [rsi+0A78h]
 * 0000000140BBB4AE: lea     rdx, [rcx+rsi]
 * 0000000140BBB4B2: mov     ecx, eax
 * 0000000140BBB4B4: shr     rcx, 3
 * 0000000140BBB4B8: lea     r9, [rdx+rcx*8]
 * 0000000140BBB4BC: jmp     short loc_140BBB4DF
 * 0000000140BBB4BE: xor     [rdx], r8
 * 0000000140BBB4C1: mov     rax, [rdx]
 * 0000000140BBB4C4: movzx   ecx, r8b
 * 0000000140BBB4C8: xor     rax, r10
 * 0000000140BBB4CB: and     ecx, 3Fh
 * 0000000140BBB4CE: ror     r8, cl
 * 0000000140BBB4D1: add     r8, rax
 * 0000000140BBB4D4: xor     r8, 0EFAh
 * 0000000140BBB4DB: add     rdx, 8
 * 0000000140BBB4DF: cmp     rdx, r9
 * 0000000140BBB4E2: jnz     short loc_140BBB4BE
 * 0000000140BBB4E4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBB4EC: cmp     r8, [rsi+0A80h]
 * 0000000140BBB4F3: jz      short loc_140BBB536
 * 0000000140BBB4F5: mov     ecx, [rsi+804h]
 * 0000000140BBB4FB: mov     rax, [rsi+588h]
 * 0000000140BBB502: mov     [rax], rsi
 * 0000000140BBB505: mov     [rax+10h], ecx
 * 0000000140BBB508: mov     rcx, [rsi+0A80h]
 * 0000000140BBB50F: cmp     [rsi+918h], r11d
 * 0000000140BBB516: jnz     short loc_140BBB526
 * 0000000140BBB518: mov     rax, [rsi+588h]
 * 0000000140BBB51F: xor     rcx, r8
 * 0000000140BBB522: mov     [rax+18h], rcx
 * 0000000140BBB526: xor     edx, edx
 * 0000000140BBB528: mov     r9d, 100h
 * 0000000140BBB52E: mov     rcx, rsi
 * 0000000140BBB531: call    sub_140BC7384
 * 0000000140BBB536: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBB53B: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBB545: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBB54F: mov     r8d, 1
 * 0000000140BBB555: or      r12b, [r15+rbx*2+1]
 * 0000000140BBB55A: cmp     r12b, [rbp+8D0h+var_917]
 * 0000000140BBB55E: jz      loc_140BBB671
 * 0000000140BBB564: xor     r12d, r12d
 * 0000000140BBB567: cmp     [rsi+918h], r12d
 * 0000000140BBB56E: jnz     loc_140BBB674
 * 0000000140BBB574: lea     rax, [rsi+r10]
 * 0000000140BBB578: mov     [rsi+920h], rax
 * 0000000140BBB57F: lea     rax, [rdx+r9]
 * 0000000140BBB583: mov     [rsi+928h], rax
 * 0000000140BBB58A: movsxd  rax, dword ptr [rdx]
 * 0000000140BBB58D: mov     [rsi+930h], rax
 * 0000000140BBB594: mov     [rsi+938h], r14
 * 0000000140BBB59B: mov     [rsi+918h], r8d
 * 0000000140BBB5A2: mov     ecx, [rsi+9D8h]
 * 0000000140BBB5A8: bt      ecx, 1Dh
 * 0000000140BBB5AC: jb      loc_140BBB674
 * 0000000140BBB5B2: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBB5BC: jz      loc_140BBB674
 * 0000000140BBB5C2: test    r8b, cl
 * 0000000140BBB5C5: jz      loc_140BBB674
 * 0000000140BBB5CB: mov     ecx, [rsi+0A74h]
 * 0000000140BBB5D1: mov     eax, [rsi+804h]
 * 0000000140BBB5D7: mov     r10, [rsi+838h]
 * 0000000140BBB5DE: sub     eax, ecx
 * 0000000140BBB5E0: mov     r8, [rsi+0A78h]
 * 0000000140BBB5E7: lea     rdx, [rcx+rsi]
 * 0000000140BBB5EB: mov     ecx, eax
 * 0000000140BBB5ED: shr     rcx, 3
 * 0000000140BBB5F1: lea     r9, [rdx+rcx*8]
 * 0000000140BBB5F5: jmp     short loc_140BBB618
 * 0000000140BBB5F7: xor     [rdx], r8
 * 0000000140BBB5FA: mov     rax, [rdx]
 * 0000000140BBB5FD: movzx   ecx, r8b
 * 0000000140BBB601: xor     rax, r10
 * 0000000140BBB604: and     ecx, 3Fh
 * 0000000140BBB607: ror     r8, cl
 * 0000000140BBB60A: add     r8, rax
 * 0000000140BBB60D: xor     r8, 0EFAh
 * 0000000140BBB614: add     rdx, 8
 * 0000000140BBB618: cmp     rdx, r9
 * 0000000140BBB61B: jnz     short loc_140BBB5F7
 * 0000000140BBB61D: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBB625: cmp     r8, [rsi+0A80h]
 * 0000000140BBB62C: jz      short loc_140BBB674
 * 0000000140BBB62E: mov     ecx, [rsi+804h]
 * 0000000140BBB634: mov     rax, [rsi+588h]
 * 0000000140BBB63B: mov     [rax], rsi
 * 0000000140BBB63E: mov     [rax+10h], ecx
 * 0000000140BBB641: mov     rcx, [rsi+0A80h]
 * 0000000140BBB648: cmp     [rsi+918h], r12d
 * 0000000140BBB64F: jnz     short loc_140BBB65F
 * 0000000140BBB651: mov     rax, [rsi+588h]
 * 0000000140BBB658: xor     rcx, r8
 * 0000000140BBB65B: mov     [rax+18h], rcx
 * 0000000140BBB65F: xor     edx, edx
 * 0000000140BBB661: mov     r9d, 100h
 * 0000000140BBB667: mov     rcx, rsi
 * 0000000140BBB66A: call    sub_140BC7384
 * 0000000140BBB66F: jmp     short loc_140BBB674
 * 0000000140BBB671: xor     r12d, r12d
 * 0000000140BBB674: cmp     r14, [rsi+4D8h]
 * 0000000140BBB67B: jz      loc_140BBB8C3
 * 0000000140BBB681: mov     rax, [rsi+3D8h]
 * 0000000140BBB688: mov     edx, 1
 * 0000000140BBB68D: mov     rcx, r14
 * 0000000140BBB690: call    KeGuardDispatchICall
 * 0000000140BBB695: mov     rbx, rax
 * 0000000140BBB698: test    rax, rax
 * 0000000140BBB69B: jz      loc_140BBB8C3
 * 0000000140BBB6A1: mov     rcx, [rax]
 * 0000000140BBB6A4: mov     r15, rax
 * 0000000140BBB6A7: test    rcx, rcx
 * 0000000140BBB6AA: jz      loc_140BBB8B4
 * 0000000140BBB6B0: mov     r12, [rbp+8D0h+arg_8]
 * 0000000140BBB6B7: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BBB6BB: mov     [rbp+8D0h+var_950], rax
 * 0000000140BBB6BF: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140BBB6C3: mov     [rbx], rcx
 * 0000000140BBB6C6: mov     rax, [rsi+1F0h]
 * 0000000140BBB6CD: call    KeGuardDispatchICall
 * 0000000140BBB6D2: mov     rcx, [rbx+8]
 * 0000000140BBB6D6: movzx   edx, [rbp+8D0h+var_917]
 * 0000000140BBB6DA: mov     r14, rcx
 * 0000000140BBB6DD: mov     rax, [rsi+3F8h]
 * 0000000140BBB6E4: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140BBB6EB: cmp     r14, r12
 * 0000000140BBB6EE: cmovz   edx, edi
 * 0000000140BBB6F1: shr     rcx, 6
 * 0000000140BBB6F5: and     cl, 0Fh
 * 0000000140BBB6F8: call    KeGuardDispatchICall
 * 0000000140BBB6FD: xor     r11d, r11d
 * 0000000140BBB700: test    eax, eax
 * 0000000140BBB702: jnz     loc_140BBB899
 * 0000000140BBB708: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BBB712: lea     r9d, [r11+1]
 * 0000000140BBB716: jz      short loc_140BBB766
 * 0000000140BBB718: mov     rcx, [rsi+0AC8h]
 * 0000000140BBB71F: lea     edx, [rax+30h]
 * 0000000140BBB722: lea     r8d, [r11+6]
 * 0000000140BBB726: mov     rax, [r13+0]
 * 0000000140BBB72A: add     edx, 0FFFFFFF8h
 * 0000000140BBB72D: mov     [rcx], rax
 * 0000000140BBB730: add     r13, 8
 * 0000000140BBB734: add     rcx, 8
 * 0000000140BBB738: sub     r8, r9
 * 0000000140BBB73B: jnz     short loc_140BBB726
 * 0000000140BBB73D: test    edx, edx
 * 0000000140BBB73F: jz      short loc_140BBB75F
 * 0000000140BBB741: mov     r12d, 0FFFFFFFFh
 * 0000000140BBB747: mov     al, [r13+0]
 * 0000000140BBB74B: add     r13, r9
 * 0000000140BBB74E: mov     [rcx], al
 * 0000000140BBB750: add     rcx, r9
 * 0000000140BBB753: add     edx, r12d
 * 0000000140BBB756: jnz     short loc_140BBB747
 * 0000000140BBB758: mov     r12, [rbp+8D0h+arg_8]
 * 0000000140BBB75F: mov     r13, [rsi+0AC8h]
 * 0000000140BBB766: mov     [r13+18h], r14
 * 0000000140BBB76A: mov     rax, [rbx]
 * 0000000140BBB76D: mov     [r13+20h], rax
 * 0000000140BBB771: mov     eax, [rbx+8]
 * 0000000140BBB774: shr     rax, 6
 * 0000000140BBB778: and     al, 0Fh
 * 0000000140BBB77A: mov     [r13+28h], al
 * 0000000140BBB77E: cmp     [rsi+918h], r11d
 * 0000000140BBB785: jnz     loc_140BBB899
 * 0000000140BBB78B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBB795: add     rax, rsi
 * 0000000140BBB798: mov     [rsi+920h], rax
 * 0000000140BBB79F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBB7A9: add     rax, r13
 * 0000000140BBB7AC: mov     [rsi+928h], rax
 * 0000000140BBB7B3: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBB7B7: mov     [rsi+930h], rax
 * 0000000140BBB7BE: mov     [rsi+938h], r15
 * 0000000140BBB7C5: mov     [rsi+918h], r9d
 * 0000000140BBB7CC: mov     ecx, [rsi+9D8h]
 * 0000000140BBB7D2: bt      ecx, 1Dh
 * 0000000140BBB7D6: jb      loc_140BBB899
 * 0000000140BBB7DC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBB7E6: jz      loc_140BBB899
 * 0000000140BBB7EC: test    r9b, cl
 * 0000000140BBB7EF: jz      loc_140BBB899
 * 0000000140BBB7F5: mov     ecx, [rsi+0A74h]
 * 0000000140BBB7FB: mov     eax, [rsi+804h]
 * 0000000140BBB801: mov     r10, [rsi+838h]
 * 0000000140BBB808: sub     eax, ecx
 * 0000000140BBB80A: mov     r8, [rsi+0A78h]
 * 0000000140BBB811: lea     rdx, [rcx+rsi]
 * 0000000140BBB815: mov     ecx, eax
 * 0000000140BBB817: shr     rcx, 3
 * 0000000140BBB81B: lea     r9, [rdx+rcx*8]
 * 0000000140BBB81F: jmp     short loc_140BBB842
 * 0000000140BBB821: xor     [rdx], r8
 * 0000000140BBB824: mov     rax, [rdx]
 * 0000000140BBB827: movzx   ecx, r8b
 * 0000000140BBB82B: xor     rax, r10
 * 0000000140BBB82E: and     ecx, 3Fh
 * 0000000140BBB831: ror     r8, cl
 * 0000000140BBB834: add     r8, rax
 * 0000000140BBB837: xor     r8, 0EFAh
 * 0000000140BBB83E: add     rdx, 8
 * 0000000140BBB842: cmp     rdx, r9
 * 0000000140BBB845: jnz     short loc_140BBB821
 * 0000000140BBB847: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBB84F: cmp     r8, [rsi+0A80h]
 * 0000000140BBB856: jz      short loc_140BBB899
 * 0000000140BBB858: mov     ecx, [rsi+804h]
 * 0000000140BBB85E: mov     rax, [rsi+588h]
 * 0000000140BBB865: mov     [rax], rsi
 * 0000000140BBB868: mov     [rax+10h], ecx
 * 0000000140BBB86B: mov     rcx, [rsi+0A80h]
 * 0000000140BBB872: cmp     [rsi+918h], r11d
 * 0000000140BBB879: jnz     short loc_140BBB889
 * 0000000140BBB87B: mov     rax, [rsi+588h]
 * 0000000140BBB882: xor     rcx, r8
 * 0000000140BBB885: mov     [rax+18h], rcx
 * 0000000140BBB889: xor     edx, edx
 * 0000000140BBB88B: mov     r9d, 100h
 * 0000000140BBB891: mov     rcx, rsi
 * 0000000140BBB894: call    sub_140BC7384
 * 0000000140BBB899: add     rbx, 30h ; '0'
 * 0000000140BBB89D: mov     rcx, [rbx]
 * 0000000140BBB8A0: test    rcx, rcx
 * 0000000140BBB8A3: jnz     loc_140BBB6BF
 * 0000000140BBB8A9: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BBB8AD: mov     r14, [rbp+8D0h+var_930]
 * 0000000140BBB8B1: xor     r12d, r12d
 * 0000000140BBB8B4: mov     rax, [rsi+108h]
 * 0000000140BBB8BB: mov     rcx, r15
 * 0000000140BBB8BE: call    KeGuardDispatchICall
 * 0000000140BBB8C3: mov     rax, [rsi+3A8h]
 * 0000000140BBB8CA: mov     rcx, r14
 * 0000000140BBB8CD: call    KeGuardDispatchICall
 * 0000000140BBB8D2: mov     r15d, [rsp+9D0h+var_958]
 * 0000000140BBB8D7: mov     eax, 8000h
 * 0000000140BBB8DC: add     [rsi+848h], eax
 * 0000000140BBB8E2: mov     rbx, [rsp+9D0h+var_968]
 * 0000000140BBB8E7: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BBB8EC: mov     rax, [rsi+3B0h]
 * 0000000140BBB8F3: inc     r15d
 * 0000000140BBB8F6: mov     rcx, r14
 * 0000000140BBB8F9: mov     [rsp+9D0h+var_958], r15d
 * 0000000140BBB8FE: call    KeGuardDispatchICall
 * 0000000140BBB903: mov     [rbp+8D0h+var_930], rax
 * 0000000140BBB907: mov     r14, rax
 * 0000000140BBB90A: test    rax, rax
 * 0000000140BBB90D: jnz     loc_140BBA8FD
 * 0000000140BBB913: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BBB91A: mov     r13, [rsi+4D8h]
 * 0000000140BBB921: mov     rax, [rsi+3A0h]
 * 0000000140BBB928: mov     rcx, r13
 * 0000000140BBB92B: call    KeGuardDispatchICall
 * 0000000140BBB930: test    eax, eax
 * 0000000140BBB932: js      loc_140BBC10E
 * 0000000140BBB938: mov     rax, [rsi+3E0h]
 * 0000000140BBB93F: mov     rcx, r13
 * 0000000140BBB942: call    KeGuardDispatchICall
 * 0000000140BBB947: movzx   ebx, al
 * 0000000140BBB94A: lea     rdx, [rbp+8D0h+var_916]
 * 0000000140BBB94E: mov     rax, [rsi+3E8h]
 * 0000000140BBB955: mov     rcx, r13
 * 0000000140BBB958: call    KeGuardDispatchICall
 * 0000000140BBB95D: mov     byte ptr [rbp+8D0h+arg_8], al
 * 0000000140BBB963: mov     rcx, r13
 * 0000000140BBB966: mov     rax, [rsi+3F0h]
 * 0000000140BBB96D: call    KeGuardDispatchICall
 * 0000000140BBB972: mov     [rbp+8D0h+var_950], rax
 * 0000000140BBB976: cmp     bl, 72h ; 'r'
 * 0000000140BBB979: jz      loc_140BBBAC4
 * 0000000140BBB97F: cmp     [rsi+918h], r12d
 * 0000000140BBB986: jnz     loc_140BBBAC4
 * 0000000140BBB98C: mov     rax, [rsi+588h]
 * 0000000140BBB993: mov     ecx, ebx
 * 0000000140BBB995: xor     rcx, 72h
 * 0000000140BBB999: mov     [rax+18h], rcx
 * 0000000140BBB99D: cmp     [rsi+918h], r12d
 * 0000000140BBB9A4: jnz     loc_140BBBAC4
 * 0000000140BBB9AA: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBB9AF: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBB9B9: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBB9C3: mov     r8d, 1
 * 0000000140BBB9C9: lea     rax, [rsi+r10]
 * 0000000140BBB9CD: mov     [rsi+920h], rax
 * 0000000140BBB9D4: lea     rax, [rdx+r9]
 * 0000000140BBB9D8: mov     [rsi+928h], rax
 * 0000000140BBB9DF: movsxd  rax, dword ptr [rdx]
 * 0000000140BBB9E2: mov     [rsi+930h], rax
 * 0000000140BBB9E9: mov     [rsi+938h], r13
 * 0000000140BBB9F0: mov     [rsi+918h], r8d
 * 0000000140BBB9F7: mov     ecx, [rsi+9D8h]
 * 0000000140BBB9FD: bt      ecx, 1Dh
 * 0000000140BBBA01: jb      loc_140BBBAE3
 * 0000000140BBBA07: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBBA11: jz      loc_140BBBAE3
 * 0000000140BBBA17: test    r8b, cl
 * 0000000140BBBA1A: jz      loc_140BBBAE3
 * 0000000140BBBA20: mov     ecx, [rsi+0A74h]
 * 0000000140BBBA26: mov     eax, [rsi+804h]
 * 0000000140BBBA2C: mov     r10, [rsi+838h]
 * 0000000140BBBA33: sub     eax, ecx
 * 0000000140BBBA35: mov     r8, [rsi+0A78h]
 * 0000000140BBBA3C: lea     rdx, [rcx+rsi]
 * 0000000140BBBA40: mov     ecx, eax
 * 0000000140BBBA42: shr     rcx, 3
 * 0000000140BBBA46: lea     r9, [rdx+rcx*8]
 * 0000000140BBBA4A: jmp     short loc_140BBBA6D
 * 0000000140BBBA4C: xor     [rdx], r8
 * 0000000140BBBA4F: mov     rax, [rdx]
 * 0000000140BBBA52: movzx   ecx, r8b
 * 0000000140BBBA56: xor     rax, r10
 * 0000000140BBBA59: and     ecx, 3Fh
 * 0000000140BBBA5C: ror     r8, cl
 * 0000000140BBBA5F: add     r8, rax
 * 0000000140BBBA62: xor     r8, 0EFAh
 * 0000000140BBBA69: add     rdx, 8
 * 0000000140BBBA6D: cmp     rdx, r9
 * 0000000140BBBA70: jnz     short loc_140BBBA4C
 * 0000000140BBBA72: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBBA7A: cmp     r8, [rsi+0A80h]
 * 0000000140BBBA81: jz      short loc_140BBBAC4
 * 0000000140BBBA83: mov     ecx, [rsi+804h]
 * 0000000140BBBA89: mov     rax, [rsi+588h]
 * 0000000140BBBA90: mov     [rax], rsi
 * 0000000140BBBA93: mov     [rax+10h], ecx
 * 0000000140BBBA96: mov     rcx, [rsi+0A80h]
 * 0000000140BBBA9D: cmp     [rsi+918h], r12d
 * 0000000140BBBAA4: jnz     short loc_140BBBAB4
 * 0000000140BBBAA6: mov     rax, [rsi+588h]
 * 0000000140BBBAAD: xor     rcx, r8
 * 0000000140BBBAB0: mov     [rax+18h], rcx
 * 0000000140BBBAB4: xor     edx, edx
 * 0000000140BBBAB6: mov     r9d, 100h
 * 0000000140BBBABC: mov     rcx, rsi
 * 0000000140BBBABF: call    sub_140BC7384
 * 0000000140BBBAC4: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBBAC9: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBBAD3: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBBADD: mov     r8d, 1
 * 0000000140BBBAE3: mov     ecx, ebx
 * 0000000140BBBAE5: mov     r14b, r12b
 * 0000000140BBBAE8: and     ecx, 7
 * 0000000140BBBAEB: sub     ecx, 1
 * 0000000140BBBAEE: jz      loc_140BBBC20
 * 0000000140BBBAF4: xor     r11d, r11d
 * 0000000140BBBAF7: cmp     ecx, 1
 * 0000000140BBBAFA: jz      loc_140BBBC13
 * 0000000140BBBB00: test    bl, 7
 * 0000000140BBBB03: jz      loc_140BBBC26
 * 0000000140BBBB09: cmp     [rsi+918h], r11d
 * 0000000140BBBB10: jnz     loc_140BBBC26
 * 0000000140BBBB16: lea     rax, [rsi+r10]
 * 0000000140BBBB1A: mov     [rsi+920h], rax
 * 0000000140BBBB21: lea     rax, [rdx+r9]
 * 0000000140BBBB25: mov     [rsi+928h], rax
 * 0000000140BBBB2C: movsxd  rax, dword ptr [rdx]
 * 0000000140BBBB2F: mov     [rsi+930h], rax
 * 0000000140BBBB36: mov     [rsi+938h], r13
 * 0000000140BBBB3D: mov     [rsi+918h], r8d
 * 0000000140BBBB44: mov     ecx, [rsi+9D8h]
 * 0000000140BBBB4A: bt      ecx, 1Dh
 * 0000000140BBBB4E: jb      loc_140BBBC26
 * 0000000140BBBB54: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBBB5E: jz      loc_140BBBC26
 * 0000000140BBBB64: test    r8b, cl
 * 0000000140BBBB67: jz      loc_140BBBC26
 * 0000000140BBBB6D: mov     ecx, [rsi+0A74h]
 * 0000000140BBBB73: mov     eax, [rsi+804h]
 * 0000000140BBBB79: mov     r10, [rsi+838h]
 * 0000000140BBBB80: sub     eax, ecx
 * 0000000140BBBB82: mov     r8, [rsi+0A78h]
 * 0000000140BBBB89: lea     rdx, [rcx+rsi]
 * 0000000140BBBB8D: mov     ecx, eax
 * 0000000140BBBB8F: shr     rcx, 3
 * 0000000140BBBB93: lea     r9, [rdx+rcx*8]
 * 0000000140BBBB97: jmp     short loc_140BBBBBA
 * 0000000140BBBB99: xor     [rdx], r8
 * 0000000140BBBB9C: mov     rax, [rdx]
 * 0000000140BBBB9F: movzx   ecx, r8b
 * 0000000140BBBBA3: xor     rax, r10
 * 0000000140BBBBA6: and     ecx, 3Fh
 * 0000000140BBBBA9: ror     r8, cl
 * 0000000140BBBBAC: add     r8, rax
 * 0000000140BBBBAF: xor     r8, 0EFAh
 * 0000000140BBBBB6: add     rdx, 8
 * 0000000140BBBBBA: cmp     rdx, r9
 * 0000000140BBBBBD: jnz     short loc_140BBBB99
 * 0000000140BBBBBF: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBBBC7: cmp     r8, [rsi+0A80h]
 * 0000000140BBBBCE: jz      short loc_140BBBC26
 * 0000000140BBBBD0: mov     ecx, [rsi+804h]
 * 0000000140BBBBD6: mov     rax, [rsi+588h]
 * 0000000140BBBBDD: mov     [rax], rsi
 * 0000000140BBBBE0: mov     [rax+10h], ecx
 * 0000000140BBBBE3: mov     rcx, [rsi+0A80h]
 * 0000000140BBBBEA: cmp     [rsi+918h], r11d
 * 0000000140BBBBF1: jnz     short loc_140BBBC01
 * 0000000140BBBBF3: mov     rax, [rsi+588h]
 * 0000000140BBBBFA: xor     rcx, r8
 * 0000000140BBBBFD: mov     [rax+18h], rcx
 * 0000000140BBBC01: xor     edx, edx
 * 0000000140BBBC03: mov     r9d, 100h
 * 0000000140BBBC09: mov     rcx, rsi
 * 0000000140BBBC0C: call    sub_140BC7384
 * 0000000140BBBC11: jmp     short loc_140BBBC23
 * 0000000140BBBC13: mov     eax, 10h
 * 0000000140BBBC18: mov     r14b, al
 * 0000000140BBBC1B: mov     r12b, al
 * 0000000140BBBC1E: jmp     short loc_140BBBC26
 * 0000000140BBBC20: mov     r14b, 30h ; '0'
 * 0000000140BBBC23: xor     r11d, r11d
 * 0000000140BBBC26: mov     r15, [rsi+5C0h]
 * 0000000140BBBC2D: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140BBBC37: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBBC3C: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BBBC46: shr     rbx, 4
 * 0000000140BBBC4A: or      r14b, [r15+rbx*2]
 * 0000000140BBBC4E: cmp     r14b, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BBBC55: mov     r14d, 1
 * 0000000140BBBC5B: jz      loc_140BBBD82
 * 0000000140BBBC61: cmp     [rsi+918h], r11d
 * 0000000140BBBC68: jnz     loc_140BBBD82
 * 0000000140BBBC6E: lea     rax, [rsi+r9]
 * 0000000140BBBC72: mov     [rsi+920h], rax
 * 0000000140BBBC79: lea     rax, [rdx+r8]
 * 0000000140BBBC7D: mov     [rsi+928h], rax
 * 0000000140BBBC84: movsxd  rax, dword ptr [rdx]
 * 0000000140BBBC87: mov     [rsi+930h], rax
 * 0000000140BBBC8E: mov     [rsi+938h], r13
 * 0000000140BBBC95: mov     [rsi+918h], r14d
 * 0000000140BBBC9C: mov     ecx, [rsi+9D8h]
 * 0000000140BBBCA2: bt      ecx, 1Dh
 * 0000000140BBBCA6: jb      loc_140BBBD82
 * 0000000140BBBCAC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBBCB6: jz      loc_140BBBD82
 * 0000000140BBBCBC: test    r14b, cl
 * 0000000140BBBCBF: jz      loc_140BBBD82
 * 0000000140BBBCC5: mov     ecx, [rsi+0A74h]
 * 0000000140BBBCCB: mov     eax, [rsi+804h]
 * 0000000140BBBCD1: mov     r10, [rsi+838h]
 * 0000000140BBBCD8: sub     eax, ecx
 * 0000000140BBBCDA: mov     r8, [rsi+0A78h]
 * 0000000140BBBCE1: lea     rdx, [rcx+rsi]
 * 0000000140BBBCE5: mov     ecx, eax
 * 0000000140BBBCE7: shr     rcx, 3
 * 0000000140BBBCEB: lea     r9, [rdx+rcx*8]
 * 0000000140BBBCEF: jmp     short loc_140BBBD12
 * 0000000140BBBCF1: xor     [rdx], r8
 * 0000000140BBBCF4: mov     rax, [rdx]
 * 0000000140BBBCF7: movzx   ecx, r8b
 * 0000000140BBBCFB: xor     rax, r10
 * 0000000140BBBCFE: and     ecx, 3Fh
 * 0000000140BBBD01: ror     r8, cl
 * 0000000140BBBD04: add     r8, rax
 * 0000000140BBBD07: xor     r8, 0EFAh
 * 0000000140BBBD0E: add     rdx, 8
 * 0000000140BBBD12: cmp     rdx, r9
 * 0000000140BBBD15: jnz     short loc_140BBBCF1
 * 0000000140BBBD17: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBBD1F: cmp     r8, [rsi+0A80h]
 * 0000000140BBBD26: jz      short loc_140BBBD69
 * 0000000140BBBD28: mov     ecx, [rsi+804h]
 * 0000000140BBBD2E: mov     rax, [rsi+588h]
 * 0000000140BBBD35: mov     [rax], rsi
 * 0000000140BBBD38: mov     [rax+10h], ecx
 * 0000000140BBBD3B: mov     rcx, [rsi+0A80h]
 * 0000000140BBBD42: cmp     [rsi+918h], r11d
 * 0000000140BBBD49: jnz     short loc_140BBBD59
 * 0000000140BBBD4B: mov     rax, [rsi+588h]
 * 0000000140BBBD52: xor     rcx, r8
 * 0000000140BBBD55: mov     [rax+18h], rcx
 * 0000000140BBBD59: xor     edx, edx
 * 0000000140BBBD5B: mov     r9d, 100h
 * 0000000140BBBD61: mov     rcx, rsi
 * 0000000140BBBD64: call    sub_140BC7384
 * 0000000140BBBD69: mov     rdx, [rsp+9D0h+var_980]
 * 0000000140BBBD6E: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140BBBD78: mov     r8, 0B3B74BDEE4453415h
 * 0000000140BBBD82: or      r12b, [r15+rbx*2+1]
 * 0000000140BBBD87: cmp     r12b, [rbp+8D0h+var_916]
 * 0000000140BBBD8B: jz      loc_140BBBE9C
 * 0000000140BBBD91: xor     r12d, r12d
 * 0000000140BBBD94: cmp     [rsi+918h], r12d
 * 0000000140BBBD9B: jnz     loc_140BBBE9C
 * 0000000140BBBDA1: lea     rax, [rsi+r9]
 * 0000000140BBBDA5: mov     [rsi+920h], rax
 * 0000000140BBBDAC: lea     rax, [rdx+r8]
 * 0000000140BBBDB0: mov     [rsi+928h], rax
 * 0000000140BBBDB7: movsxd  rax, dword ptr [rdx]
 * 0000000140BBBDBA: mov     [rsi+930h], rax
 * 0000000140BBBDC1: mov     [rsi+938h], r13
 * 0000000140BBBDC8: mov     [rsi+918h], r14d
 * 0000000140BBBDCF: mov     ecx, [rsi+9D8h]
 * 0000000140BBBDD5: bt      ecx, 1Dh
 * 0000000140BBBDD9: jb      loc_140BBBE9C
 * 0000000140BBBDDF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBBDE9: jz      loc_140BBBE9C
 * 0000000140BBBDEF: test    r14b, cl
 * 0000000140BBBDF2: jz      loc_140BBBE9C
 * 0000000140BBBDF8: mov     ecx, [rsi+0A74h]
 * 0000000140BBBDFE: mov     eax, [rsi+804h]
 * 0000000140BBBE04: mov     r10, [rsi+838h]
 * 0000000140BBBE0B: sub     eax, ecx
 * 0000000140BBBE0D: mov     r8, [rsi+0A78h]
 * 0000000140BBBE14: lea     rdx, [rcx+rsi]
 * 0000000140BBBE18: mov     ecx, eax
 * 0000000140BBBE1A: shr     rcx, 3
 * 0000000140BBBE1E: lea     r9, [rdx+rcx*8]
 * 0000000140BBBE22: jmp     short loc_140BBBE45
 * 0000000140BBBE24: xor     [rdx], r8
 * 0000000140BBBE27: mov     rax, [rdx]
 * 0000000140BBBE2A: movzx   ecx, r8b
 * 0000000140BBBE2E: xor     rax, r10
 * 0000000140BBBE31: and     ecx, 3Fh
 * 0000000140BBBE34: ror     r8, cl
 * 0000000140BBBE37: add     r8, rax
 * 0000000140BBBE3A: xor     r8, 0EFAh
 * 0000000140BBBE41: add     rdx, 8
 * 0000000140BBBE45: cmp     rdx, r9
 * 0000000140BBBE48: jnz     short loc_140BBBE24
 * 0000000140BBBE4A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBBE52: cmp     r8, [rsi+0A80h]
 * 0000000140BBBE59: jz      short loc_140BBBE9C
 * 0000000140BBBE5B: mov     ecx, [rsi+804h]
 * 0000000140BBBE61: mov     rax, [rsi+588h]
 * 0000000140BBBE68: mov     [rax], rsi
 * 0000000140BBBE6B: mov     [rax+10h], ecx
 * 0000000140BBBE6E: mov     rcx, [rsi+0A80h]
 * 0000000140BBBE75: cmp     [rsi+918h], r12d
 * 0000000140BBBE7C: jnz     short loc_140BBBE8C
 * 0000000140BBBE7E: mov     rax, [rsi+588h]
 * 0000000140BBBE85: xor     rcx, r8
 * 0000000140BBBE88: mov     [rax+18h], rcx
 * 0000000140BBBE8C: xor     edx, edx
 * 0000000140BBBE8E: mov     r9d, 100h
 * 0000000140BBBE94: mov     rcx, rsi
 * 0000000140BBBE97: call    sub_140BC7384
 * 0000000140BBBE9C: cmp     r13, [rsi+4D8h]
 * 0000000140BBBEA3: jz      loc_140BBC0EF
 * 0000000140BBBEA9: mov     rax, [rsi+3D8h]
 * 0000000140BBBEB0: mov     edx, r14d
 * 0000000140BBBEB3: mov     rcx, r13
 * 0000000140BBBEB6: call    KeGuardDispatchICall
 * 0000000140BBBEBB: mov     rbx, rax
 * 0000000140BBBEBE: test    rax, rax
 * 0000000140BBBEC1: jz      loc_140BBC0EF
 * 0000000140BBBEC7: mov     rcx, [rax]
 * 0000000140BBBECA: mov     r15, rax
 * 0000000140BBBECD: test    rcx, rcx
 * 0000000140BBBED0: jz      loc_140BBC0E0
 * 0000000140BBBED6: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BBBEDD: mov     r12, [rbp+8D0h+var_950]
 * 0000000140BBBEE1: mov     r15, [rsp+9D0h+var_980]
 * 0000000140BBBEE6: mov     [rsp+9D0h+var_978], rax
 * 0000000140BBBEEB: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140BBBEEF: mov     [rbx], rcx
 * 0000000140BBBEF2: mov     rax, [rsi+1F0h]
 * 0000000140BBBEF9: call    KeGuardDispatchICall
 * 0000000140BBBEFE: mov     rcx, [rbx+8]
 * 0000000140BBBF02: movzx   edx, [rbp+8D0h+var_916]
 * 0000000140BBBF06: mov     r14, rcx
 * 0000000140BBBF09: movzx   eax, dil
 * 0000000140BBBF0D: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140BBBF14: cmp     r14, r12
 * 0000000140BBBF17: cmovz   edx, eax
 * 0000000140BBBF1A: mov     rax, [rsi+3F8h]
 * 0000000140BBBF21: shr     rcx, 6
 * 0000000140BBBF25: and     cl, 0Fh
 * 0000000140BBBF28: call    KeGuardDispatchICall
 * 0000000140BBBF2D: xor     r11d, r11d
 * 0000000140BBBF30: test    eax, eax
 * 0000000140BBBF32: jnz     loc_140BBC0C4
 * 0000000140BBBF38: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BBBF42: lea     r9d, [r11+1]
 * 0000000140BBBF46: jz      short loc_140BBBF92
 * 0000000140BBBF48: mov     rcx, [rsi+0AC8h]
 * 0000000140BBBF4F: lea     edx, [rax+30h]
 * 0000000140BBBF52: lea     r8d, [r11+6]
 * 0000000140BBBF56: mov     rax, [r15]
 * 0000000140BBBF59: add     edx, 0FFFFFFF8h
 * 0000000140BBBF5C: mov     [rcx], rax
 * 0000000140BBBF5F: add     r15, 8
 * 0000000140BBBF63: add     rcx, 8
 * 0000000140BBBF67: sub     r8, r9
 * 0000000140BBBF6A: jnz     short loc_140BBBF56
 * 0000000140BBBF6C: test    edx, edx
 * 0000000140BBBF6E: jz      short loc_140BBBF8B
 * 0000000140BBBF70: mov     edi, 0FFFFFFFFh
 * 0000000140BBBF75: mov     al, [r15]
 * 0000000140BBBF78: add     r15, r9
 * 0000000140BBBF7B: mov     [rcx], al
 * 0000000140BBBF7D: add     rcx, r9
 * 0000000140BBBF80: add     edx, edi
 * 0000000140BBBF82: jnz     short loc_140BBBF75
 * 0000000140BBBF84: mov     dil, byte ptr [rbp+8D0h+arg_8]
 * 0000000140BBBF8B: mov     r15, [rsi+0AC8h]
 * 0000000140BBBF92: mov     [r15+18h], r14
 * 0000000140BBBF96: mov     rax, [rbx]
 * 0000000140BBBF99: mov     [r15+20h], rax
 * 0000000140BBBF9D: mov     eax, [rbx+8]
 * 0000000140BBBFA0: shr     rax, 6
 * 0000000140BBBFA4: and     al, 0Fh
 * 0000000140BBBFA6: mov     [r15+28h], al
 * 0000000140BBBFAA: cmp     [rsi+918h], r11d
 * 0000000140BBBFB1: jnz     loc_140BBC0C4
 * 0000000140BBBFB7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBBFC1: add     rax, rsi
 * 0000000140BBBFC4: mov     [rsi+920h], rax
 * 0000000140BBBFCB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBBFD5: add     rax, r15
 * 0000000140BBBFD8: mov     [rsi+928h], rax
 * 0000000140BBBFDF: movsxd  rax, dword ptr [r15]
 * 0000000140BBBFE2: mov     [rsi+930h], rax
 * 0000000140BBBFE9: mov     [rsi+938h], r13
 * 0000000140BBBFF0: mov     [rsi+918h], r9d
 * 0000000140BBBFF7: mov     ecx, [rsi+9D8h]
 * 0000000140BBBFFD: bt      ecx, 1Dh
 * 0000000140BBC001: jb      loc_140BBC0C4
 * 0000000140BBC007: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBC011: jz      loc_140BBC0C4
 * 0000000140BBC017: test    r9b, cl
 * 0000000140BBC01A: jz      loc_140BBC0C4
 * 0000000140BBC020: mov     ecx, [rsi+0A74h]
 * 0000000140BBC026: mov     eax, [rsi+804h]
 * 0000000140BBC02C: mov     r10, [rsi+838h]
 * 0000000140BBC033: sub     eax, ecx
 * 0000000140BBC035: mov     r8, [rsi+0A78h]
 * 0000000140BBC03C: lea     rdx, [rcx+rsi]
 * 0000000140BBC040: mov     ecx, eax
 * 0000000140BBC042: shr     rcx, 3
 * 0000000140BBC046: lea     r9, [rdx+rcx*8]
 * 0000000140BBC04A: jmp     short loc_140BBC06D
 * 0000000140BBC04C: xor     [rdx], r8
 * 0000000140BBC04F: mov     rax, [rdx]
 * 0000000140BBC052: movzx   ecx, r8b
 * 0000000140BBC056: xor     rax, r10
 * 0000000140BBC059: and     ecx, 3Fh
 * 0000000140BBC05C: ror     r8, cl
 * 0000000140BBC05F: add     r8, rax
 * 0000000140BBC062: xor     r8, 0EFAh
 * 0000000140BBC069: add     rdx, 8
 * 0000000140BBC06D: cmp     rdx, r9
 * 0000000140BBC070: jnz     short loc_140BBC04C
 * 0000000140BBC072: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBC07A: cmp     r8, [rsi+0A80h]
 * 0000000140BBC081: jz      short loc_140BBC0C4
 * 0000000140BBC083: mov     ecx, [rsi+804h]
 * 0000000140BBC089: mov     rax, [rsi+588h]
 * 0000000140BBC090: mov     [rax], rsi
 * 0000000140BBC093: mov     [rax+10h], ecx
 * 0000000140BBC096: mov     rcx, [rsi+0A80h]
 * 0000000140BBC09D: cmp     [rsi+918h], r11d
 * 0000000140BBC0A4: jnz     short loc_140BBC0B4
 * 0000000140BBC0A6: mov     rax, [rsi+588h]
 * 0000000140BBC0AD: xor     rcx, r8
 * 0000000140BBC0B0: mov     [rax+18h], rcx
 * 0000000140BBC0B4: xor     edx, edx
 * 0000000140BBC0B6: mov     r9d, 100h
 * 0000000140BBC0BC: mov     rcx, rsi
 * 0000000140BBC0BF: call    sub_140BC7384
 * 0000000140BBC0C4: add     rbx, 30h ; '0'
 * 0000000140BBC0C8: mov     rcx, [rbx]
 * 0000000140BBC0CB: test    rcx, rcx
 * 0000000140BBC0CE: jnz     loc_140BBBEEB
 * 0000000140BBC0D4: mov     r15, [rsp+9D0h+var_978]
 * 0000000140BBC0D9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BBC0E0: mov     rax, [rsi+108h]
 * 0000000140BBC0E7: mov     rcx, r15
 * 0000000140BBC0EA: call    KeGuardDispatchICall
 * 0000000140BBC0EF: mov     rax, [rsi+3A8h]
 * 0000000140BBC0F6: mov     rcx, r13
 * 0000000140BBC0F9: call    KeGuardDispatchICall
 * 0000000140BBC0FE: mov     r15d, [rsp+9D0h+var_958]
 * 0000000140BBC103: mov     eax, 8000h
 * 0000000140BBC108: add     [rsi+848h], eax
 * 0000000140BBC10E: mov     rcx, [rsp+9D0h+var_968]
 * 0000000140BBC113: test    rcx, rcx
 * 0000000140BBC116: jz      short loc_140BBC124
 * 0000000140BBC118: mov     rax, [rsi+1F0h]
 * 0000000140BBC11F: call    KeGuardDispatchICall
 * 0000000140BBC124: shl     r15d, 8
 * 0000000140BBC128: add     [rsi+848h], r15d
 * 0000000140BBC12F: jmp     loc_140BB1F9B
 * 0000000140BBC134: mov     ecx, r10d
 * 0000000140BBC137: sub     ecx, 29h ; ')'
 * 0000000140BBC13A: jz      loc_140BB96C5
 * 0000000140BBC140: sub     ecx, 1
 * 0000000140BBC143: jz      loc_140BB96C5
 * 0000000140BBC149: sub     ecx, 1
 * 0000000140BBC14C: jz      loc_140BBE4C9
 * 0000000140BBC152: sub     ecx, 1
 * 0000000140BBC155: jz      loc_140BBDB26
 * 0000000140BBC15B: sub     ecx, 2
 * 0000000140BBC15E: jz      loc_140BBDA28
 * 0000000140BBC164: sub     ecx, 1
 * 0000000140BBC167: jz      loc_140BBD74B
 * 0000000140BBC16D: cmp     ecx, 1
 * 0000000140BBC170: jz      loc_140BBD3A3
 * 0000000140BBC176: sub     r10d, 2
 * 0000000140BBC17A: jz      loc_140BBCC59
 * 0000000140BBC180: sub     r10d, 1
 * 0000000140BBC184: jz      loc_140BBC78F
 * 0000000140BBC18A: cmp     r10d, 14h
 * 0000000140BBC18E: jz      loc_140BBC275
 * 0000000140BBC194: cmp     [rsi+918h], r15d
 * 0000000140BBC19B: jnz     loc_140BB1FAF
 * 0000000140BBC1A1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBC1AB: add     rax, rsi
 * 0000000140BBC1AE: mov     [rsi+920h], rax
 * 0000000140BBC1B5: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBC1BF: add     rax, r13
 * 0000000140BBC1C2: mov     [rsi+928h], rax
 * 0000000140BBC1C9: mov     qword ptr [rsi+930h], 101h
 * 0000000140BBC1D4: mov     [rsi+938h], r15
 * 0000000140BBC1DB: mov     [rsi+918h], ebx
 * 0000000140BBC1E1: mov     ecx, [rsi+9D8h]
 * 0000000140BBC1E7: bt      ecx, 1Dh
 * 0000000140BBC1EB: jb      loc_140BB1FAF
 * 0000000140BBC1F1: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBC1FB: jz      loc_140BB1FAF
 * 0000000140BBC201: test    bl, cl
 * 0000000140BBC203: jz      loc_140BB1FAF
 * 0000000140BBC209: mov     ecx, [rsi+0A74h]
 * 0000000140BBC20F: mov     eax, [rsi+804h]
 * 0000000140BBC215: mov     r10, [rsi+838h]
 * 0000000140BBC21C: sub     eax, ecx
 * 0000000140BBC21E: mov     r8, [rsi+0A78h]
 * 0000000140BBC225: lea     rdx, [rcx+rsi]
 * 0000000140BBC229: mov     ecx, eax
 * 0000000140BBC22B: shr     rcx, 3
 * 0000000140BBC22F: lea     r9, [rdx+rcx*8]
 * 0000000140BBC233: jmp     short loc_140BBC256
 * 0000000140BBC235: xor     [rdx], r8
 * 0000000140BBC238: mov     rax, [rdx]
 * 0000000140BBC23B: movzx   ecx, r8b
 * 0000000140BBC23F: xor     rax, r10
 * 0000000140BBC242: and     ecx, 3Fh
 * 0000000140BBC245: ror     r8, cl
 * 0000000140BBC248: add     r8, rax
 * 0000000140BBC24B: xor     r8, 0EFAh
 * 0000000140BBC252: add     rdx, 8
 * 0000000140BBC256: cmp     rdx, r9
 * 0000000140BBC259: jnz     short loc_140BBC235
 * 0000000140BBC25B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBC263: cmp     r8, [rsi+0A80h]
 * 0000000140BBC26A: jz      loc_140BB1FAF
 * 0000000140BBC270: jmp     loc_140BB8D80
 * 0000000140BBC275: mov     edx, [r13+28h]
 * 0000000140BBC279: lea     rcx, [rbp+8D0h+var_2C0]
 * 0000000140BBC280: mov     rax, [rsi+1B0h]
 * 0000000140BBC287: call    KeGuardDispatchICall
 * 0000000140BBC28C: mov     rax, [rsi+1E0h]
 * 0000000140BBC293: lea     rdx, [rbp+8D0h+var_2B0]
 * 0000000140BBC29A: lea     rcx, [rbp+8D0h+var_2C0]
 * 0000000140BBC2A1: call    KeGuardDispatchICall
 * 0000000140BBC2A6: mov     rax, [rsi+0A58h]
 * 0000000140BBC2AD: test    rax, rax
 * 0000000140BBC2B0: jz      short loc_140BBC2BA
 * 0000000140BBC2B2: mov     ebx, [rax+320h]
 * 0000000140BBC2B8: jmp     short loc_140BBC2CB
 * 0000000140BBC2BA: mov     ecx, 832h
 * 0000000140BBC2BF: rdmsr
 * 0000000140BBC2C1: shl     rdx, 20h
 * 0000000140BBC2C5: or      rax, rdx
 * 0000000140BBC2C8: mov     rbx, rax
 * 0000000140BBC2CB: mov     rax, [rsi+0A58h]
 * 0000000140BBC2D2: test    rax, rax
 * 0000000140BBC2D5: jz      short loc_140BBC2E0
 * 0000000140BBC2D7: mov     r14d, [rax+340h]
 * 0000000140BBC2DE: jmp     short loc_140BBC2F1
 * 0000000140BBC2E0: mov     ecx, 834h
 * 0000000140BBC2E5: rdmsr
 * 0000000140BBC2E7: shl     rdx, 20h
 * 0000000140BBC2EB: or      rax, rdx
 * 0000000140BBC2EE: mov     r14, rax
 * 0000000140BBC2F1: mov     rax, [rsi+1A8h]
 * 0000000140BBC2F8: lea     rcx, [rbp+8D0h+var_2B0]
 * 0000000140BBC2FF: call    KeGuardDispatchICall
 * 0000000140BBC304: mov     ecx, 10h
 * 0000000140BBC309: test    [rsi+89Bh], cl
 * 0000000140BBC30F: jz      loc_140BBC458
 * 0000000140BBC315: cli
 * 0000000140BBC316: mov     rdx, [rsi+900h]
 * 0000000140BBC31D: mov     r8d, 26h ; '&'
 * 0000000140BBC323: mov     ecx, 130h
 * 0000000140BBC328: mov     rax, rdx
 * 0000000140BBC32B: lea     r9d, [r8-25h]
 * 0000000140BBC32F: mov     [rax], r15
 * 0000000140BBC332: add     ecx, 0FFFFFFF8h
 * 0000000140BBC335: add     rax, 8
 * 0000000140BBC339: sub     r8, r9
 * 0000000140BBC33C: jnz     short loc_140BBC32F
 * 0000000140BBC33E: test    ecx, ecx
 * 0000000140BBC340: jz      short loc_140BBC353
 * 0000000140BBC342: mov     r8d, 0FFFFFFFFh
 * 0000000140BBC348: mov     [rax], r15b
 * 0000000140BBC34B: add     rax, r9
 * 0000000140BBC34E: add     ecx, r8d
 * 0000000140BBC351: jnz     short loc_140BBC348
 * 0000000140BBC353: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140BBC35A: mov     eax, 12Fh
 * 0000000140BBC35F: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BBC364: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140BBC36B: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BBC370: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140BBC377: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BBC37F: mov     word ptr [rbp+8D0h+var_770], ax
 * 0000000140BBC386: lea     rax, [rsi+898h]
 * 0000000140BBC38D: mov     [rbp+162h], rdx
 * 0000000140BBC394: mov     rcx, rax
 * 0000000140BBC397: mov     [rdx+10h], ax
 * 0000000140BBC39B: shr     rcx, 10h
 * 0000000140BBC39F: mov     [rbp+8D0h+var_510], rax
 * 0000000140BBC3A6: shr     rax, 20h
 * 0000000140BBC3AA: mov     [rdx+16h], cx
 * 0000000140BBC3AE: mov     [rdx+18h], eax
 * 0000000140BBC3B1: sidt    fword ptr [rbp+8D0h+var_640]
 * 0000000140BBC3B8: lidt    fword ptr [rbp+8D0h+var_770]
 * 0000000140BBC3BF: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BBC3C9: jnz     short loc_140BBC40D
 * 0000000140BBC3CB: mov     rdx, gs:20h
 * 0000000140BBC3D4: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BBC3DE: mov     rax, [rsi+4B8h]
 * 0000000140BBC3E5: add     rcx, rsi
 * 0000000140BBC3E8: mov     [rax], rcx
 * 0000000140BBC3EB: mov     rax, [rsi+4C0h]
 * 0000000140BBC3F2: mov     [rax], rdx
 * 0000000140BBC3F5: mov     rax, [rsi+4C8h]
 * 0000000140BBC3FC: mov     [rax], r15
 * 0000000140BBC3FF: mov     rax, [rsi+4D0h]
 * 0000000140BBC406: mov     qword ptr [rax], 115h
 * 0000000140BBC40D: call    KiErrata361Present
 * 0000000140BBC412: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BBC41C: jnz     short loc_140BBC450
 * 0000000140BBC41E: mov     rax, [rsi+4B8h]
 * 0000000140BBC425: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BBC42F: mov     [rax], rcx
 * 0000000140BBC432: mov     rax, [rsi+4C0h]
 * 0000000140BBC439: mov     [rax], r15
 * 0000000140BBC43C: mov     rax, [rsi+4C8h]
 * 0000000140BBC443: mov     [rax], r15
 * 0000000140BBC446: mov     rax, [rsi+4D0h]
 * 0000000140BBC44D: mov     [rax], r15
 * 0000000140BBC450: lidt    fword ptr [rbp+8D0h+var_640]
 * 0000000140BBC457: sti
 * 0000000140BBC458: mov     eax, [r13+1Ch]
 * 0000000140BBC45C: mov     r8d, [r13+18h]
 * 0000000140BBC460: and     eax, ebx
 * 0000000140BBC462: cmp     eax, r8d
 * 0000000140BBC465: jnz     short loc_140BBC492
 * 0000000140BBC467: bt      ebx, 10h
 * 0000000140BBC46B: jb      loc_140BBC5E9
 * 0000000140BBC471: movzx   ecx, bl
 * 0000000140BBC474: sub     ecx, 0D1h
 * 0000000140BBC47A: jz      loc_140BBC5E9
 * 0000000140BBC480: sub     ecx, 2Ch ; ','
 * 0000000140BBC483: jz      loc_140BBC5E9
 * 0000000140BBC489: cmp     ecx, 1
 * 0000000140BBC48C: jz      loc_140BBC5E9
 * 0000000140BBC492: mov     edx, [r13+28h]
 * 0000000140BBC496: mov     rax, 32000000000h
 * 0000000140BBC4A0: shl     rdx, 30h
 * 0000000140BBC4A4: or      rdx, r8
 * 0000000140BBC4A7: or      rdx, rax
 * 0000000140BBC4AA: cmp     [rsi+918h], r15d
 * 0000000140BBC4B1: jnz     loc_140BBC5E9
 * 0000000140BBC4B7: mov     rax, [rsi+588h]
 * 0000000140BBC4BE: mov     ecx, ebx
 * 0000000140BBC4C0: xor     rcx, r8
 * 0000000140BBC4C3: mov     [rax+18h], rcx
 * 0000000140BBC4C7: cmp     [rsi+918h], r15d
 * 0000000140BBC4CE: jnz     loc_140BBC5E9
 * 0000000140BBC4D4: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBC4DE: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBC4E8: mov     ebx, 1
 * 0000000140BBC4ED: lea     rax, [rsi+r10]
 * 0000000140BBC4F1: mov     [rsi+920h], rax
 * 0000000140BBC4F8: lea     rax, [r9+r13]
 * 0000000140BBC4FC: mov     [rsi+928h], rax
 * 0000000140BBC503: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBC507: mov     [rsi+930h], rax
 * 0000000140BBC50E: mov     [rsi+938h], rdx
 * 0000000140BBC515: mov     [rsi+918h], ebx
 * 0000000140BBC51B: mov     ecx, [rsi+9D8h]
 * 0000000140BBC521: bt      ecx, 1Dh
 * 0000000140BBC525: jb      loc_140BBC602
 * 0000000140BBC52B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBC535: jz      loc_140BBC602
 * 0000000140BBC53B: test    bl, cl
 * 0000000140BBC53D: jz      loc_140BBC602
 * 0000000140BBC543: mov     ecx, [rsi+0A74h]
 * 0000000140BBC549: mov     eax, [rsi+804h]
 * 0000000140BBC54F: mov     r10, [rsi+838h]
 * 0000000140BBC556: sub     eax, ecx
 * 0000000140BBC558: mov     r8, [rsi+0A78h]
 * 0000000140BBC55F: lea     rdx, [rcx+rsi]
 * 0000000140BBC563: mov     ecx, eax
 * 0000000140BBC565: shr     rcx, 3
 * 0000000140BBC569: lea     r9, [rdx+rcx*8]
 * 0000000140BBC56D: jmp     short loc_140BBC590
 * 0000000140BBC56F: xor     [rdx], r8
 * 0000000140BBC572: mov     rax, [rdx]
 * 0000000140BBC575: movzx   ecx, r8b
 * 0000000140BBC579: xor     rax, r10
 * 0000000140BBC57C: and     ecx, 3Fh
 * 0000000140BBC57F: ror     r8, cl
 * 0000000140BBC582: add     r8, rax
 * 0000000140BBC585: xor     r8, 0EFAh
 * 0000000140BBC58C: add     rdx, 8
 * 0000000140BBC590: cmp     rdx, r9
 * 0000000140BBC593: jnz     short loc_140BBC56F
 * 0000000140BBC595: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBC59D: cmp     r8, [rsi+0A80h]
 * 0000000140BBC5A4: jz      short loc_140BBC5EE
 * 0000000140BBC5A6: mov     ecx, [rsi+804h]
 * 0000000140BBC5AC: mov     rax, [rsi+588h]
 * 0000000140BBC5B3: mov     [rax], rsi
 * 0000000140BBC5B6: mov     [rax+10h], ecx
 * 0000000140BBC5B9: mov     rcx, [rsi+0A80h]
 * 0000000140BBC5C0: cmp     [rsi+918h], r15d
 * 0000000140BBC5C7: jnz     short loc_140BBC5D7
 * 0000000140BBC5C9: mov     rax, [rsi+588h]
 * 0000000140BBC5D0: xor     rcx, r8
 * 0000000140BBC5D3: mov     [rax+18h], rcx
 * 0000000140BBC5D7: xor     edx, edx
 * 0000000140BBC5D9: mov     r9d, 100h
 * 0000000140BBC5DF: mov     rcx, rsi
 * 0000000140BBC5E2: call    sub_140BC7384
 * 0000000140BBC5E7: jmp     short loc_140BBC5EE
 * 0000000140BBC5E9: mov     ebx, 1
 * 0000000140BBC5EE: mov     r9, 0B3B74BDEE4453415h
 * 0000000140BBC5F8: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140BBC602: mov     eax, [r13+24h]
 * 0000000140BBC606: mov     r8d, [r13+20h]
 * 0000000140BBC60A: and     eax, r14d
 * 0000000140BBC60D: cmp     eax, r8d
 * 0000000140BBC610: jnz     short loc_140BBC63F
 * 0000000140BBC612: bt      r14d, 10h
 * 0000000140BBC617: jb      loc_140BBC77F
 * 0000000140BBC61D: movzx   ecx, r14b
 * 0000000140BBC621: sub     ecx, 0D1h
 * 0000000140BBC627: jz      loc_140BBC77F
 * 0000000140BBC62D: sub     ecx, 2Ch ; ','
 * 0000000140BBC630: jz      loc_140BBC77F
 * 0000000140BBC636: cmp     ecx, 1
 * 0000000140BBC639: jz      loc_140BBC77F
 * 0000000140BBC63F: mov     edx, [r13+28h]
 * 0000000140BBC643: mov     rax, 34000000000h
 * 0000000140BBC64D: shl     rdx, 30h
 * 0000000140BBC651: or      rdx, r8
 * 0000000140BBC654: or      rdx, rax
 * 0000000140BBC657: cmp     [rsi+918h], r15d
 * 0000000140BBC65E: jnz     loc_140BBC77F
 * 0000000140BBC664: mov     eax, r14d
 * 0000000140BBC667: mov     rcx, r8
 * 0000000140BBC66A: xor     rcx, rax
 * 0000000140BBC66D: mov     rax, [rsi+588h]
 * 0000000140BBC674: mov     [rax+18h], rcx
 * 0000000140BBC678: cmp     [rsi+918h], r15d
 * 0000000140BBC67F: jnz     loc_140BBC77F
 * 0000000140BBC685: lea     rax, [rsi+r10]
 * 0000000140BBC689: mov     [rsi+920h], rax
 * 0000000140BBC690: lea     rax, [r9+r13]
 * 0000000140BBC694: mov     [rsi+928h], rax
 * 0000000140BBC69B: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBC69F: mov     [rsi+930h], rax
 * 0000000140BBC6A6: mov     [rsi+938h], rdx
 * 0000000140BBC6AD: mov     [rsi+918h], ebx
 * 0000000140BBC6B3: mov     ecx, [rsi+9D8h]
 * 0000000140BBC6B9: bt      ecx, 1Dh
 * 0000000140BBC6BD: jb      loc_140BBC77F
 * 0000000140BBC6C3: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBC6CD: jz      loc_140BBC77F
 * 0000000140BBC6D3: test    bl, cl
 * 0000000140BBC6D5: jz      loc_140BBC77F
 * 0000000140BBC6DB: mov     ecx, [rsi+0A74h]
 * 0000000140BBC6E1: mov     eax, [rsi+804h]
 * 0000000140BBC6E7: mov     r10, [rsi+838h]
 * 0000000140BBC6EE: sub     eax, ecx
 * 0000000140BBC6F0: mov     r8, [rsi+0A78h]
 * 0000000140BBC6F7: lea     rdx, [rcx+rsi]
 * 0000000140BBC6FB: mov     ecx, eax
 * 0000000140BBC6FD: shr     rcx, 3
 * 0000000140BBC701: lea     r9, [rdx+rcx*8]
 * 0000000140BBC705: jmp     short loc_140BBC728
 * 0000000140BBC707: xor     [rdx], r8
 * 0000000140BBC70A: mov     rax, [rdx]
 * 0000000140BBC70D: movzx   ecx, r8b
 * 0000000140BBC711: xor     rax, r10
 * 0000000140BBC714: and     ecx, 3Fh
 * 0000000140BBC717: ror     r8, cl
 * 0000000140BBC71A: add     r8, rax
 * 0000000140BBC71D: xor     r8, 0EFAh
 * 0000000140BBC724: add     rdx, 8
 * 0000000140BBC728: cmp     rdx, r9
 * 0000000140BBC72B: jnz     short loc_140BBC707
 * 0000000140BBC72D: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBC735: cmp     r8, [rsi+0A80h]
 * 0000000140BBC73C: jz      short loc_140BBC77F
 * 0000000140BBC73E: mov     ecx, [rsi+804h]
 * 0000000140BBC744: mov     rax, [rsi+588h]
 * 0000000140BBC74B: mov     [rax], rsi
 * 0000000140BBC74E: mov     [rax+10h], ecx
 * 0000000140BBC751: mov     rcx, [rsi+0A80h]
 * 0000000140BBC758: cmp     [rsi+918h], r15d
 * 0000000140BBC75F: jnz     short loc_140BBC76F
 * 0000000140BBC761: mov     rax, [rsi+588h]
 * 0000000140BBC768: xor     rcx, r8
 * 0000000140BBC76B: mov     [rax+18h], rcx
 * 0000000140BBC76F: xor     edx, edx
 * 0000000140BBC771: mov     r9d, 100h
 * 0000000140BBC777: mov     rcx, rsi
 * 0000000140BBC77A: call    sub_140BC7384
 * 0000000140BBC77F: mov     eax, 8000h
 * 0000000140BBC784: add     [rsi+848h], eax
 * 0000000140BBC78A: jmp     loc_140BBD398
 * 0000000140BBC78F: mov     edx, [r13+28h]
 * 0000000140BBC793: lea     rcx, [rbp+8D0h+var_2A0]
 * 0000000140BBC79A: mov     rax, [rsi+1B0h]
 * 0000000140BBC7A1: call    KeGuardDispatchICall
 * 0000000140BBC7A6: mov     rax, [rsi+1E0h]
 * 0000000140BBC7AD: lea     rdx, [rbp+8D0h+var_290]
 * 0000000140BBC7B4: lea     rcx, [rbp+8D0h+var_2A0]
 * 0000000140BBC7BB: call    KeGuardDispatchICall
 * 0000000140BBC7C0: lea     rdx, [rbp+8D0h+var_1F0]
 * 0000000140BBC7C7: lea     rcx, [rbp+8D0h+var_7C8]
 * 0000000140BBC7CE: call    KiGetGdtIdt
 * 0000000140BBC7D3: mov     r15, [rbp+8D0h+var_7C6]
 * 0000000140BBC7DA: mov     ecx, 2
 * 0000000140BBC7DF: mov     r14d, [r13+10h]
 * 0000000140BBC7E3: test    [rsi+89Bh], cl
 * 0000000140BBC7E9: jz      loc_140BBC917
 * 0000000140BBC7EF: mov     rdx, [rsi+900h]
 * 0000000140BBC7F6: mov     ecx, 130h
 * 0000000140BBC7FB: mov     rax, rdx
 * 0000000140BBC7FE: mov     r8d, 26h ; '&'
 * 0000000140BBC804: xor     r12d, r12d
 * 0000000140BBC807: mov     [rax], r12
 * 0000000140BBC80A: add     ecx, 0FFFFFFF8h
 * 0000000140BBC80D: add     rax, 8
 * 0000000140BBC811: sub     r8, rbx
 * 0000000140BBC814: jnz     short loc_140BBC807
 * 0000000140BBC816: test    ecx, ecx
 * 0000000140BBC818: jz      short loc_140BBC82B
 * 0000000140BBC81A: mov     r8d, 0FFFFFFFFh
 * 0000000140BBC820: mov     [rax], r12b
 * 0000000140BBC823: add     rax, rbx
 * 0000000140BBC826: add     ecx, r8d
 * 0000000140BBC829: jnz     short loc_140BBC820
 * 0000000140BBC82B: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140BBC832: mov     eax, 12Fh
 * 0000000140BBC837: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BBC83C: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140BBC843: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BBC848: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140BBC84F: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BBC857: mov     word ptr [rbp+8D0h+var_760], ax
 * 0000000140BBC85E: lea     rax, [rsi+898h]
 * 0000000140BBC865: mov     [rbp+172h], rdx
 * 0000000140BBC86C: mov     rcx, rax
 * 0000000140BBC86F: mov     [rdx+10h], ax
 * 0000000140BBC873: shr     rcx, 10h
 * 0000000140BBC877: mov     [rbp+8D0h+var_508], rax
 * 0000000140BBC87E: shr     rax, 20h
 * 0000000140BBC882: mov     [rdx+16h], cx
 * 0000000140BBC886: mov     [rdx+18h], eax
 * 0000000140BBC889: cli
 * 0000000140BBC88A: sidt    fword ptr [rbp+8D0h+var_678]
 * 0000000140BBC891: lidt    fword ptr [rbp+8D0h+var_760]
 * 0000000140BBC898: mov     dr7, r12
 * 0000000140BBC89C: lea     rax, [rsi+89Eh]
 * 0000000140BBC8A3: mov     [rdx+10h], ax
 * 0000000140BBC8A7: mov     rcx, rax
 * 0000000140BBC8AA: shr     rcx, 10h
 * 0000000140BBC8AE: shr     rax, 20h
 * 0000000140BBC8B2: mov     [rdx+16h], cx
 * 0000000140BBC8B6: mov     [rdx+18h], eax
 * 0000000140BBC8B9: test    byte ptr [rsi+89Bh], 20h
 * 0000000140BBC8C0: jnz     short loc_140BBC8D0
 * 0000000140BBC8C2: call    KiErrata704Present
 * 0000000140BBC8C7: mov     [rsi+908h], rax
 * 0000000140BBC8CE: jmp     short loc_140BBC901
 * 0000000140BBC8D0: lea     rbx, [rsi+8CAh]
 * 0000000140BBC8D7: call    KiGetSs
 * 0000000140BBC8DC: mov     [rbx], ax
 * 0000000140BBC8DF: mov     dr0, rbx
 * 0000000140BBC8E2: mov     eax, 70001h
 * 0000000140BBC8E7: mov     dr7, rax
 * 0000000140BBC8EA: mov     rcx, rbx
 * 0000000140BBC8ED: call    KiErrataSkx55Present
 * 0000000140BBC8F2: mov     [rsi+908h], rax
 * 0000000140BBC8F9: mov     dr7, r12
 * 0000000140BBC8FD: mov     dr0, r12
 * 0000000140BBC901: mov     eax, gs:1A4h
 * 0000000140BBC909: mov     [rsi+910h], eax
 * 0000000140BBC90F: lidt    fword ptr [rbp+8D0h+var_678]
 * 0000000140BBC916: sti
 * 0000000140BBC917: call    KiGetLdtr
 * 0000000140BBC91C: movzx   r12d, ax
 * 0000000140BBC920: call    KiGetTr
 * 0000000140BBC925: add     [rsi+848h], r14d
 * 0000000140BBC92C: lea     rcx, [r15+r14]
 * 0000000140BBC930: mov     r10d, [rsi+834h]
 * 0000000140BBC937: mov     r8, r15
 * 0000000140BBC93A: mov     r11, [rsi+838h]
 * 0000000140BBC941: movzx   r13d, ax
 * 0000000140BBC945: mov     rax, r15
 * 0000000140BBC948: cmp     r15, rcx
 * 0000000140BBC94B: jnb     short loc_140BBC95D
 * 0000000140BBC94D: mov     edx, 40h ; '@'
 * 0000000140BBC952: prefetchnta byte ptr [rax]
 * 0000000140BBC955: add     rax, rdx
 * 0000000140BBC958: cmp     rax, rcx
 * 0000000140BBC95B: jb      short loc_140BBC952
 * 0000000140BBC95D: mov     r9d, r14d
 * 0000000140BBC960: mov     rbx, r11
 * 0000000140BBC963: shr     r9d, 7
 * 0000000140BBC967: mov     edx, 1
 * 0000000140BBC96C: test    r9d, r9d
 * 0000000140BBC96F: jz      short loc_140BBC9E1
 * 0000000140BBC971: mov     esi, 0FFFFFFFFh
 * 0000000140BBC976: mov     rdi, 7010008004002001h
 * 0000000140BBC980: mov     eax, 8
 * 0000000140BBC985: xor     rbx, [r8]
 * 0000000140BBC988: mov     ecx, r10d
 * 0000000140BBC98B: rol     rbx, cl
 * 0000000140BBC98E: xor     rbx, [r8+8]
 * 0000000140BBC992: add     r8, 10h
 * 0000000140BBC996: rol     rbx, cl
 * 0000000140BBC999: sub     rax, rdx
 * 0000000140BBC99C: jnz     short loc_140BBC985
 * 0000000140BBC99E: mov     rcx, r8
 * 0000000140BBC9A1: sub     rcx, r15
 * 0000000140BBC9A4: xor     rcx, r11
 * 0000000140BBC9A7: mov     rax, rcx
 * 0000000140BBC9AA: rol     rax, 11h
 * 0000000140BBC9AE: xor     rcx, rax
 * 0000000140BBC9B1: mov     rax, rdi
 * 0000000140BBC9B4: mul     rcx
 * 0000000140BBC9B7: xor     eax, edx
 * 0000000140BBC9B9: mov     [rbp+8D0h+var_500], rdx
 * 0000000140BBC9C0: xor     r10d, eax
 * 0000000140BBC9C3: mov     edx, 1
 * 0000000140BBC9C8: and     r10d, 3Fh
 * 0000000140BBC9CC: cmovz   r10d, edx
 * 0000000140BBC9D0: add     r9d, esi
 * 0000000140BBC9D3: jnz     short loc_140BBC980
 * 0000000140BBC9D5: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBC9DA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BBC9E1: and     r14d, 7Fh
 * 0000000140BBC9E5: cmp     r14d, 8
 * 0000000140BBC9E9: jb      short loc_140BBCA08
 * 0000000140BBC9EB: mov     eax, r14d
 * 0000000140BBC9EE: shr     rax, 3
 * 0000000140BBC9F2: xor     rbx, [r8]
 * 0000000140BBC9F5: mov     ecx, r10d
 * 0000000140BBC9F8: rol     rbx, cl
 * 0000000140BBC9FB: add     r8, 8
 * 0000000140BBC9FF: add     r14d, 0FFFFFFF8h
 * 0000000140BBCA03: sub     rax, rdx
 * 0000000140BBCA06: jnz     short loc_140BBC9F2
 * 0000000140BBCA08: xor     r15d, r15d
 * 0000000140BBCA0B: test    r14d, r14d
 * 0000000140BBCA0E: jz      short loc_140BBCA2F
 * 0000000140BBCA10: mov     esi, 0FFFFFFFFh
 * 0000000140BBCA15: movzx   eax, byte ptr [r8]
 * 0000000140BBCA19: mov     ecx, r10d
 * 0000000140BBCA1C: xor     rbx, rax
 * 0000000140BBCA1F: add     r8, rdx
 * 0000000140BBCA22: rol     rbx, cl
 * 0000000140BBCA25: add     r14d, esi
 * 0000000140BBCA28: jnz     short loc_140BBCA15
 * 0000000140BBCA2A: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBCA2F: mov     rax, rbx
 * 0000000140BBCA32: jmp     short loc_140BBCA36
 * 0000000140BBCA34: xor     ebx, eax
 * 0000000140BBCA36: shr     rax, 1Fh
 * 0000000140BBCA3A: test    rax, rax
 * 0000000140BBCA3D: jnz     short loc_140BBCA34
 * 0000000140BBCA3F: mov     rax, [rsi+1A8h]
 * 0000000140BBCA46: lea     rcx, [rbp+8D0h+var_290]
 * 0000000140BBCA4D: btr     ebx, 1Fh
 * 0000000140BBCA51: call    KeGuardDispatchICall
 * 0000000140BBCA56: mov     r9, [rsp+9D0h+var_980]
 * 0000000140BBCA5B: mov     r11d, 40h ; '@'
 * 0000000140BBCA61: cmp     ebx, [r9+14h]
 * 0000000140BBCA65: jnz     short loc_140BBCA85
 * 0000000140BBCA67: movzx   eax, word ptr [r9+2Ch]
 * 0000000140BBCA6C: cmp     [rbp+8D0h+var_7C8], ax
 * 0000000140BBCA73: jnz     short loc_140BBCA85
 * 0000000140BBCA75: test    r12w, r12w
 * 0000000140BBCA79: jnz     short loc_140BBCA85
 * 0000000140BBCA7B: cmp     r13w, r11w
 * 0000000140BBCA7F: jz      loc_140BBCC44
 * 0000000140BBCA85: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BBCA8F: jz      short loc_140BBCADF
 * 0000000140BBCA91: mov     rcx, [rsi+0AC8h]
 * 0000000140BBCA98: mov     edx, 30h ; '0'
 * 0000000140BBCA9D: lea     r8d, [rdx-2Ah]
 * 0000000140BBCAA1: lea     r10d, [rdx-2Fh]
 * 0000000140BBCAA5: mov     rax, [r9]
 * 0000000140BBCAA8: add     edx, 0FFFFFFF8h
 * 0000000140BBCAAB: mov     [rcx], rax
 * 0000000140BBCAAE: add     r9, 8
 * 0000000140BBCAB2: add     rcx, 8
 * 0000000140BBCAB6: sub     r8, r10
 * 0000000140BBCAB9: jnz     short loc_140BBCAA5
 * 0000000140BBCABB: test    edx, edx
 * 0000000140BBCABD: jz      short loc_140BBCAD8
 * 0000000140BBCABF: mov     esi, 0FFFFFFFFh
 * 0000000140BBCAC4: mov     al, [r9]
 * 0000000140BBCAC7: add     r9, r10
 * 0000000140BBCACA: mov     [rcx], al
 * 0000000140BBCACC: add     rcx, r10
 * 0000000140BBCACF: add     edx, esi
 * 0000000140BBCAD1: jnz     short loc_140BBCAC4
 * 0000000140BBCAD3: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBCAD8: mov     r9, [rsi+0AC8h]
 * 0000000140BBCADF: mov     rax, [rbp+8D0h+var_7C6]
 * 0000000140BBCAE6: mov     edx, ebx
 * 0000000140BBCAE8: mov     [r9+18h], rax
 * 0000000140BBCAEC: mov     [r9+20h], rdx
 * 0000000140BBCAF0: test    r12w, r12w
 * 0000000140BBCAF4: jz      short loc_140BBCAFC
 * 0000000140BBCAF6: mov     [r9+18h], r12
 * 0000000140BBCAFA: jmp     short loc_140BBCB06
 * 0000000140BBCAFC: cmp     r13w, r11w
 * 0000000140BBCB00: jz      short loc_140BBCB06
 * 0000000140BBCB02: mov     [r9+18h], r13
 * 0000000140BBCB06: mov     ecx, [r9+14h]
 * 0000000140BBCB0A: cmp     [rsi+918h], r15d
 * 0000000140BBCB11: jnz     short loc_140BBCB21
 * 0000000140BBCB13: mov     rax, [rsi+588h]
 * 0000000140BBCB1A: xor     rcx, rdx
 * 0000000140BBCB1D: mov     [rax+18h], rcx
 * 0000000140BBCB21: mov     ebx, 1
 * 0000000140BBCB26: mov     rcx, [r9+8]
 * 0000000140BBCB2A: cmp     [rsi+918h], r15d
 * 0000000140BBCB31: jnz     loc_140BBCC49
 * 0000000140BBCB37: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBCB41: add     rax, rsi
 * 0000000140BBCB44: mov     [rsi+920h], rax
 * 0000000140BBCB4B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBCB55: add     rax, r9
 * 0000000140BBCB58: mov     [rsi+928h], rax
 * 0000000140BBCB5F: movsxd  rax, dword ptr [r9]
 * 0000000140BBCB62: mov     [rsi+930h], rax
 * 0000000140BBCB69: mov     [rsi+938h], rcx
 * 0000000140BBCB70: mov     [rsi+918h], ebx
 * 0000000140BBCB76: mov     ecx, [rsi+9D8h]
 * 0000000140BBCB7C: bt      ecx, 1Dh
 * 0000000140BBCB80: jb      loc_140BBCC49
 * 0000000140BBCB86: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBCB90: jz      loc_140BBCC49
 * 0000000140BBCB96: test    bl, cl
 * 0000000140BBCB98: jz      loc_140BBCC49
 * 0000000140BBCB9E: mov     ecx, [rsi+0A74h]
 * 0000000140BBCBA4: mov     eax, [rsi+804h]
 * 0000000140BBCBAA: mov     r10, [rsi+838h]
 * 0000000140BBCBB1: sub     eax, ecx
 * 0000000140BBCBB3: mov     r8, [rsi+0A78h]
 * 0000000140BBCBBA: lea     rdx, [rcx+rsi]
 * 0000000140BBCBBE: mov     ecx, eax
 * 0000000140BBCBC0: shr     rcx, 3
 * 0000000140BBCBC4: lea     r9, [rdx+rcx*8]
 * 0000000140BBCBC8: jmp     short loc_140BBCBEB
 * 0000000140BBCBCA: xor     [rdx], r8
 * 0000000140BBCBCD: mov     rax, [rdx]
 * 0000000140BBCBD0: movzx   ecx, r8b
 * 0000000140BBCBD4: xor     rax, r10
 * 0000000140BBCBD7: and     ecx, 3Fh
 * 0000000140BBCBDA: ror     r8, cl
 * 0000000140BBCBDD: add     r8, rax
 * 0000000140BBCBE0: xor     r8, 0EFAh
 * 0000000140BBCBE7: add     rdx, 8
 * 0000000140BBCBEB: cmp     rdx, r9
 * 0000000140BBCBEE: jnz     short loc_140BBCBCA
 * 0000000140BBCBF0: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBCBF8: cmp     r8, [rsi+0A80h]
 * 0000000140BBCBFF: jz      short loc_140BBCC49
 * 0000000140BBCC01: mov     ecx, [rsi+804h]
 * 0000000140BBCC07: mov     rax, [rsi+588h]
 * 0000000140BBCC0E: mov     [rax], rsi
 * 0000000140BBCC11: mov     [rax+10h], ecx
 * 0000000140BBCC14: mov     rcx, [rsi+0A80h]
 * 0000000140BBCC1B: cmp     [rsi+918h], r15d
 * 0000000140BBCC22: jnz     short loc_140BBCC32
 * 0000000140BBCC24: mov     rax, [rsi+588h]
 * 0000000140BBCC2B: xor     rcx, r8
 * 0000000140BBCC2E: mov     [rax+18h], rcx
 * 0000000140BBCC32: xor     edx, edx
 * 0000000140BBCC34: mov     r9d, 100h
 * 0000000140BBCC3A: mov     rcx, rsi
 * 0000000140BBCC3D: call    sub_140BC7384
 * 0000000140BBCC42: jmp     short loc_140BBCC49
 * 0000000140BBCC44: mov     ebx, 1
 * 0000000140BBCC49: mov     ecx, 8000h
 * 0000000140BBCC4E: add     [rsi+848h], ecx
 * 0000000140BBCC54: jmp     loc_140BB2B5D
 * 0000000140BBCC59: mov     edx, [r13+28h]
 * 0000000140BBCC5D: lea     rcx, [rbp+8D0h+var_280]
 * 0000000140BBCC64: mov     rax, [rsi+1B0h]
 * 0000000140BBCC6B: mov     [rbp+8D0h+var_928], r15d
 * 0000000140BBCC6F: call    KeGuardDispatchICall
 * 0000000140BBCC74: mov     rax, [rsi+1E0h]
 * 0000000140BBCC7B: lea     rdx, [rbp+8D0h+var_270]
 * 0000000140BBCC82: lea     rcx, [rbp+8D0h+var_280]
 * 0000000140BBCC89: call    KeGuardDispatchICall
 * 0000000140BBCC8E: lea     rdx, [rbp+8D0h+var_750]
 * 0000000140BBCC95: lea     rcx, [rbp+8D0h+var_1E0]
 * 0000000140BBCC9C: call    KiGetGdtIdt
 * 0000000140BBCCA1: mov     rcx, [rbp+8D0h+var_74E]
 * 0000000140BBCCA8: mov     edi, r15d
 * 0000000140BBCCAB: mov     [rbp+8D0h+var_950], rcx
 * 0000000140BBCCAF: add     rcx, 4
 * 0000000140BBCCB3: mov     [rsp+9D0h+var_978], rcx
 * 0000000140BBCCB8: jmp     short loc_140BBCCBD
 * 0000000140BBCCBA: xor     r15d, r15d
 * 0000000140BBCCBD: mov     rax, [rsi+8E8h]
 * 0000000140BBCCC4: mov     r9, r15
 * 0000000140BBCCC7: mov     [rbp+8D0h+var_878], rax
 * 0000000140BBCCCB: mov     r14, r15
 * 0000000140BBCCCE: mov     r8, [rsi+8F0h]
 * 0000000140BBCCD5: mov     r12d, [rsi+8CCh]
 * 0000000140BBCCDC: mov     r13d, [rsi+8D0h]
 * 0000000140BBCCE3: mov     [rsp+9D0h+var_968], r8
 * 0000000140BBCCE8: mov     [rsp+9D0h+var_960], r15
 * 0000000140BBCCED: mov     [rbp+8D0h+var_940], r15
 * 0000000140BBCCF1: mov     r15, cr8
 * 0000000140BBCCF5: mov     eax, 0Fh
 * 0000000140BBCCFA: mov     cr8, rax
 * 0000000140BBCCFE: movzx   eax, word ptr [rcx-4]
 * 0000000140BBCD02: movzx   r10d, word ptr [rcx]
 * 0000000140BBCD06: mov     word ptr [rbp+8D0h+var_8A8], ax
 * 0000000140BBCD0A: movzx   eax, word ptr [rcx+2]
 * 0000000140BBCD0E: mov     word ptr [rbp+8D0h+var_8A8+2], ax
 * 0000000140BBCD12: mov     eax, [rcx+4]
 * 0000000140BBCD15: mov     rcx, [rsi+628h]
 * 0000000140BBCD1C: mov     dword ptr [rbp+8D0h+var_8A8+4], eax
 * 0000000140BBCD1F: mov     rbx, [rbp+8D0h+var_8A8]
 * 0000000140BBCD23: mov     eax, edi
 * 0000000140BBCD25: mov     word ptr [rbp+8D0h+arg_8], r10w
 * 0000000140BBCD2D: lea     rdx, [rcx+rax*8]
 * 0000000140BBCD31: cmp     rbx, rdx
 * 0000000140BBCD34: jnz     short loc_140BBCD9A
 * 0000000140BBCD36: mov     eax, 6000h
 * 0000000140BBCD3B: test    ax, r10w
 * 0000000140BBCD3F: jz      short loc_140BBCD4E
 * 0000000140BBCD41: movzx   eax, r15b
 * 0000000140BBCD45: mov     cr8, rax
 * 0000000140BBCD49: jmp     loc_140BBD10F
 * 0000000140BBCD4E: mov     rax, [rsi+470h]
 * 0000000140BBCD55: mov     ecx, edi
 * 0000000140BBCD57: call    KeGuardDispatchICall
 * 0000000140BBCD5C: mov     r14, [rax]
 * 0000000140BBCD5F: test    r14, r14
 * 0000000140BBCD62: jz      short loc_140BBCD8B
 * 0000000140BBCD64: mov     r12, [r12+r14]
 * 0000000140BBCD68: mov     [rsp+9D0h+var_960], r12
 * 0000000140BBCD6D: cmp     edi, 30h ; '0'
 * 0000000140BBCD70: jnb     short loc_140BBCD7F
 * 0000000140BBCD72: movzx   eax, r15b
 * 0000000140BBCD76: mov     cr8, rax
 * 0000000140BBCD7A: jmp     loc_140BBD10A
 * 0000000140BBCD7F: mov     r13, [r13+r14+0]
 * 0000000140BBCD84: mov     r8, [rsp+9D0h+var_968]
 * 0000000140BBCD89: jmp     short loc_140BBCDA2
 * 0000000140BBCD8B: mov     r8, [rsp+9D0h+var_968]
 * 0000000140BBCD90: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140BBCD94: mov     r13, [rbp+8D0h+var_940]
 * 0000000140BBCD98: jmp     short loc_140BBCD9D
 * 0000000140BBCD9A: mov     r13, r9
 * 0000000140BBCD9D: mov     r12, [rsp+9D0h+var_960]
 * 0000000140BBCDA2: movzx   eax, r15b
 * 0000000140BBCDA6: mov     cr8, rax
 * 0000000140BBCDAA: test    r14, r14
 * 0000000140BBCDAD: jnz     short loc_140BBCDF5
 * 0000000140BBCDAF: mov     rdx, [rbp+8D0h+var_878]
 * 0000000140BBCDB3: cmp     rbx, rdx
 * 0000000140BBCDB6: jb      loc_140BBD10A
 * 0000000140BBCDBC: cmp     rbx, r8
 * 0000000140BBCDBF: ja      loc_140BBD10A
 * 0000000140BBCDC5: mov     r8d, dword ptr [rbp+8D0h+var_8A8]
 * 0000000140BBCDC9: mov     rcx, [rsi+8F8h]
 * 0000000140BBCDD0: sub     r8d, edx
 * 0000000140BBCDD3: mov     rax, [rsi+220h]
 * 0000000140BBCDDA: call    KeGuardDispatchICall
 * 0000000140BBCDDF: test    rax, rax
 * 0000000140BBCDE2: jz      loc_140BBD10A
 * 0000000140BBCDE8: test    dword ptr [rax+24h], 2000000h
 * 0000000140BBCDEF: jnz     loc_140BBD10A
 * 0000000140BBCDF5: mov     rcx, [rsp+9D0h+var_978]
 * 0000000140BBCDFA: mov     eax, 10h
 * 0000000140BBCDFF: cmp     [rcx-2], ax
 * 0000000140BBCE03: jnz     loc_140BBD10A
 * 0000000140BBCE09: movzx   ecx, word ptr [rcx]
 * 0000000140BBCE0C: mov     edx, 1F00h
 * 0000000140BBCE11: movzx   eax, cx
 * 0000000140BBCE14: and     ax, dx
 * 0000000140BBCE17: mov     edx, 0E00h
 * 0000000140BBCE1C: cmp     ax, dx
 * 0000000140BBCE1F: jnz     loc_140BBD10A
 * 0000000140BBCE25: bt      cx, 0Fh
 * 0000000140BBCE2A: jnb     loc_140BBD10A
 * 0000000140BBCE30: mov     rax, [rsi+270h]
 * 0000000140BBCE37: lea     rdx, [rbp+8D0h+var_878]
 * 0000000140BBCE3B: xor     r8d, r8d
 * 0000000140BBCE3E: mov     rcx, rbx
 * 0000000140BBCE41: call    KeGuardDispatchICall
 * 0000000140BBCE46: test    rax, rax
 * 0000000140BBCE49: jz      loc_140BBD077
 * 0000000140BBCE4F: mov     eax, [rax]
 * 0000000140BBCE51: mov     rcx, [rbp+8D0h+var_878]
 * 0000000140BBCE55: add     rax, rcx
 * 0000000140BBCE58: cmp     rax, rbx
 * 0000000140BBCE5B: jnz     loc_140BBD077
 * 0000000140BBCE61: cmp     rcx, [rsi+8E8h]
 * 0000000140BBCE68: jnz     loc_140BBD077
 * 0000000140BBCE6E: test    r14, r14
 * 0000000140BBCE71: jnz     loc_140BBD080
 * 0000000140BBCE77: xor     r13d, r13d
 * 0000000140BBCE7A: mov     rcx, [rsp+9D0h+var_978]
 * 0000000140BBCE7F: inc     edi
 * 0000000140BBCE81: add     rcx, 10h
 * 0000000140BBCE85: mov     [rsp+9D0h+var_978], rcx
 * 0000000140BBCE8A: cmp     edi, 0FFh
 * 0000000140BBCE90: jbe     loc_140BBCCBA
 * 0000000140BBCE96: mov     ecx, 1
 * 0000000140BBCE9B: test    [rsi+89Bh], cl
 * 0000000140BBCEA1: jz      loc_140BBCF71
 * 0000000140BBCEA7: cli
 * 0000000140BBCEA8: mov     r14d, 0C0000082h
 * 0000000140BBCEAE: mov     ecx, r14d
 * 0000000140BBCEB1: rdmsr
 * 0000000140BBCEB3: shl     rdx, 20h
 * 0000000140BBCEB7: or      rax, rdx
 * 0000000140BBCEBA: lea     rdx, [rsi+89Ah]
 * 0000000140BBCEC1: mov     rbx, rax
 * 0000000140BBCEC4: mov     rax, rdx
 * 0000000140BBCEC7: shr     rdx, 20h
 * 0000000140BBCECB: wrmsr
 * 0000000140BBCECD: bt      dword ptr [rsi+9DCh], 11h
 * 0000000140BBCED5: jb      short loc_140BBCF19
 * 0000000140BBCED7: mov     rdx, gs:20h
 * 0000000140BBCEE0: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BBCEEA: mov     rax, [rsi+4B8h]
 * 0000000140BBCEF1: add     rcx, rsi
 * 0000000140BBCEF4: mov     [rax], rcx
 * 0000000140BBCEF7: mov     rax, [rsi+4C0h]
 * 0000000140BBCEFE: mov     [rax], rdx
 * 0000000140BBCF01: mov     rax, [rsi+4C8h]
 * 0000000140BBCF08: mov     [rax], r14
 * 0000000140BBCF0B: mov     rax, [rsi+4D0h]
 * 0000000140BBCF12: mov     qword ptr [rax], 112h
 * 0000000140BBCF19: lea     rax, [rsi+89Ch]
 * 0000000140BBCF20: call    KeGuardDispatchICall
 * 0000000140BBCF25: bt      dword ptr [rsi+9DCh], 11h
 * 0000000140BBCF2D: jb      short loc_140BBCF61
 * 0000000140BBCF2F: mov     rax, [rsi+4B8h]
 * 0000000140BBCF36: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BBCF40: mov     [rax], rcx
 * 0000000140BBCF43: mov     rax, [rsi+4C0h]
 * 0000000140BBCF4A: mov     [rax], r13
 * 0000000140BBCF4D: mov     rax, [rsi+4C8h]
 * 0000000140BBCF54: mov     [rax], r13
 * 0000000140BBCF57: mov     rax, [rsi+4D0h]
 * 0000000140BBCF5E: mov     [rax], r13
 * 0000000140BBCF61: mov     rdx, rbx
 * 0000000140BBCF64: mov     rax, rbx
 * 0000000140BBCF67: shr     rdx, 20h
 * 0000000140BBCF6B: mov     ecx, r14d
 * 0000000140BBCF6E: wrmsr
 * 0000000140BBCF70: sti
 * 0000000140BBCF71: mov     r14, [rbp+8D0h+var_950]
 * 0000000140BBCF75: add     dword ptr [rsi+848h], 350h
 * 0000000140BBCF7F: mov     r8, r14
 * 0000000140BBCF82: mov     r9d, [rsi+834h]
 * 0000000140BBCF89: mov     rax, r14
 * 0000000140BBCF8C: mov     r11, [rsi+838h]
 * 0000000140BBCF93: lea     rcx, [r14+350h]
 * 0000000140BBCF9A: cmp     r14, rcx
 * 0000000140BBCF9D: jnb     short loc_140BBCFAF
 * 0000000140BBCF9F: mov     edx, 40h ; '@'
 * 0000000140BBCFA4: prefetchnta byte ptr [rax]
 * 0000000140BBCFA7: add     rax, rdx
 * 0000000140BBCFAA: cmp     rax, rcx
 * 0000000140BBCFAD: jb      short loc_140BBCFA4
 * 0000000140BBCFAF: mov     r12d, 6
 * 0000000140BBCFB5: mov     rbx, r11
 * 0000000140BBCFB8: mov     r10d, r12d
 * 0000000140BBCFBB: mov     esi, 0FFFFFFFFh
 * 0000000140BBCFC0: mov     rdi, 7010008004002001h
 * 0000000140BBCFCA: lea     r15d, [r12-5]
 * 0000000140BBCFCF: mov     eax, 8
 * 0000000140BBCFD4: xor     rbx, [r8]
 * 0000000140BBCFD7: mov     ecx, r9d
 * 0000000140BBCFDA: rol     rbx, cl
 * 0000000140BBCFDD: xor     rbx, [r8+8]
 * 0000000140BBCFE1: add     r8, 10h
 * 0000000140BBCFE5: rol     rbx, cl
 * 0000000140BBCFE8: sub     rax, r15
 * 0000000140BBCFEB: jnz     short loc_140BBCFD4
 * 0000000140BBCFED: mov     rcx, r8
 * 0000000140BBCFF0: sub     rcx, r14
 * 0000000140BBCFF3: xor     rcx, r11
 * 0000000140BBCFF6: mov     rax, rcx
 * 0000000140BBCFF9: rol     rax, 11h
 * 0000000140BBCFFD: xor     rcx, rax
 * 0000000140BBD000: mov     rax, rdi
 * 0000000140BBD003: mul     rcx
 * 0000000140BBD006: xor     r9d, edx
 * 0000000140BBD009: mov     [rbp+8D0h+var_4F8], rdx
 * 0000000140BBD010: xor     r9d, eax
 * 0000000140BBD013: and     r9d, 3Fh
 * 0000000140BBD017: cmovz   r9d, r15d
 * 0000000140BBD01B: add     r10d, esi
 * 0000000140BBD01E: jnz     short loc_140BBCFCF
 * 0000000140BBD020: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBD025: lea     edx, [r10+50h]
 * 0000000140BBD029: mov     r15d, [rbp+8D0h+var_928]
 * 0000000140BBD02D: lea     eax, [rdx-46h]
 * 0000000140BBD030: lea     r10d, [rdx-4Fh]
 * 0000000140BBD034: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BBD03B: xor     rbx, [r8]
 * 0000000140BBD03E: mov     ecx, r9d
 * 0000000140BBD041: rol     rbx, cl
 * 0000000140BBD044: add     r8, 8
 * 0000000140BBD048: add     edx, 0FFFFFFF8h
 * 0000000140BBD04B: sub     rax, r10
 * 0000000140BBD04E: jnz     short loc_140BBD03B
 * 0000000140BBD050: mov     r11d, 0FFFFFFFFh
 * 0000000140BBD056: test    edx, edx
 * 0000000140BBD058: jz      short loc_140BBD06F
 * 0000000140BBD05A: movzx   eax, byte ptr [r8]
 * 0000000140BBD05E: mov     ecx, r9d
 * 0000000140BBD061: xor     rbx, rax
 * 0000000140BBD064: add     r8, r10
 * 0000000140BBD067: rol     rbx, cl
 * 0000000140BBD06A: add     edx, r11d
 * 0000000140BBD06D: jnz     short loc_140BBD05A
 * 0000000140BBD06F: mov     rax, rbx
 * 0000000140BBD072: jmp     loc_140BBD148
 * 0000000140BBD077: test    r14, r14
 * 0000000140BBD07A: jz      loc_140BBD10A
 * 0000000140BBD080: mov     eax, 6000h
 * 0000000140BBD085: test    word ptr [rbp+8D0h+arg_8], ax
 * 0000000140BBD08C: jnz     short loc_140BBD10A
 * 0000000140BBD08E: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140BBD092: jz      loc_140BBCE77
 * 0000000140BBD098: mov     rax, [rsi+270h]
 * 0000000140BBD09F: lea     rdx, [rbp+8D0h+var_878]
 * 0000000140BBD0A3: xor     r8d, r8d
 * 0000000140BBD0A6: mov     rcx, r12
 * 0000000140BBD0A9: call    KeGuardDispatchICall
 * 0000000140BBD0AE: test    rax, rax
 * 0000000140BBD0B1: jz      short loc_140BBD10A
 * 0000000140BBD0B3: mov     eax, [rax]
 * 0000000140BBD0B5: mov     rdx, [rbp+8D0h+var_878]
 * 0000000140BBD0B9: add     rax, rdx
 * 0000000140BBD0BC: cmp     rax, r12
 * 0000000140BBD0BF: jnz     short loc_140BBD10A
 * 0000000140BBD0C1: cmp     rdx, [rsi+8E8h]
 * 0000000140BBD0C8: jnz     short loc_140BBD10A
 * 0000000140BBD0CA: mov     rcx, [rsi+8F8h]
 * 0000000140BBD0D1: mov     r8d, r12d
 * 0000000140BBD0D4: mov     rax, [rsi+220h]
 * 0000000140BBD0DB: sub     r8d, edx
 * 0000000140BBD0DE: call    KeGuardDispatchICall
 * 0000000140BBD0E3: test    rax, rax
 * 0000000140BBD0E6: jz      short loc_140BBD10A
 * 0000000140BBD0E8: test    dword ptr [rax+24h], 2000000h
 * 0000000140BBD0EF: jnz     short loc_140BBD10A
 * 0000000140BBD0F1: cmp     edi, 0FEh
 * 0000000140BBD0F7: jnz     loc_140BBCE77
 * 0000000140BBD0FD: cmp     r13, [rsi+8D8h]
 * 0000000140BBD104: jz      loc_140BBCE77
 * 0000000140BBD10A: mov     r9, [rsp+9D0h+var_960]
 * 0000000140BBD10F: mov     rax, [rsi+588h]
 * 0000000140BBD116: xor     r13d, r13d
 * 0000000140BBD119: mov     [rax], rbx
 * 0000000140BBD11C: mov     dword ptr [rax+10h], 80h
 * 0000000140BBD123: test    r9, r9
 * 0000000140BBD126: jz      short loc_140BBD13A
 * 0000000140BBD128: mov     rax, [rsi+588h]
 * 0000000140BBD12F: mov     [rax+8], r9
 * 0000000140BBD133: mov     dword ptr [rax+14h], 80h
 * 0000000140BBD13A: mov     [rbp+8D0h+var_928], 1
 * 0000000140BBD141: jmp     loc_140BBCE7A
 * 0000000140BBD146: xor     ebx, eax
 * 0000000140BBD148: shr     rax, 1Fh
 * 0000000140BBD14C: test    rax, rax
 * 0000000140BBD14F: jnz     short loc_140BBD146
 * 0000000140BBD151: lea     rdx, [r14+0E10h]
 * 0000000140BBD158: btr     ebx, 1Fh
 * 0000000140BBD15C: lea     ecx, [rax+10h]
 * 0000000140BBD15F: mov     rax, rdx
 * 0000000140BBD162: add     [rsi+848h], ecx
 * 0000000140BBD168: lea     rcx, [rdx+10h]
 * 0000000140BBD16C: mov     r9d, [rsi+834h]
 * 0000000140BBD173: mov     r14, [rsi+838h]
 * 0000000140BBD17A: cmp     rdx, rcx
 * 0000000140BBD17D: jnb     short loc_140BBD190
 * 0000000140BBD17F: mov     r8d, 40h ; '@'
 * 0000000140BBD185: prefetchnta byte ptr [rax]
 * 0000000140BBD188: add     rax, r8
 * 0000000140BBD18B: cmp     rax, rcx
 * 0000000140BBD18E: jb      short loc_140BBD185
 * 0000000140BBD190: mov     eax, 2
 * 0000000140BBD195: lea     r8d, [rax+0Eh]
 * 0000000140BBD199: xor     r14, [rdx]
 * 0000000140BBD19C: mov     ecx, r9d
 * 0000000140BBD19F: rol     r14, cl
 * 0000000140BBD1A2: add     rdx, 8
 * 0000000140BBD1A6: add     r8d, 0FFFFFFF8h
 * 0000000140BBD1AA: sub     rax, r10
 * 0000000140BBD1AD: jnz     short loc_140BBD199
 * 0000000140BBD1AF: test    r8d, r8d
 * 0000000140BBD1B2: jz      short loc_140BBD1C8
 * 0000000140BBD1B4: movzx   eax, byte ptr [rdx]
 * 0000000140BBD1B7: mov     ecx, r9d
 * 0000000140BBD1BA: xor     r14, rax
 * 0000000140BBD1BD: add     rdx, r10
 * 0000000140BBD1C0: rol     r14, cl
 * 0000000140BBD1C3: add     r8d, r11d
 * 0000000140BBD1C6: jnz     short loc_140BBD1B4
 * 0000000140BBD1C8: mov     rax, r14
 * 0000000140BBD1CB: jmp     short loc_140BBD1D0
 * 0000000140BBD1CD: xor     r14d, eax
 * 0000000140BBD1D0: shr     rax, 1Fh
 * 0000000140BBD1D4: test    rax, rax
 * 0000000140BBD1D7: jnz     short loc_140BBD1CD
 * 0000000140BBD1D9: mov     rax, [rsi+1A8h]
 * 0000000140BBD1E0: lea     rcx, [rbp+8D0h+var_270]
 * 0000000140BBD1E7: btr     r14d, 1Fh
 * 0000000140BBD1EC: call    KeGuardDispatchICall
 * 0000000140BBD1F1: mov     r8, [rsp+9D0h+var_980]
 * 0000000140BBD1F6: mov     edx, [r8+14h]
 * 0000000140BBD1FA: cmp     ebx, edx
 * 0000000140BBD1FC: jnz     short loc_140BBD21E
 * 0000000140BBD1FE: mov     eax, r14d
 * 0000000140BBD201: cmp     rax, [r8+18h]
 * 0000000140BBD205: jnz     short loc_140BBD21E
 * 0000000140BBD207: movzx   eax, word ptr [r8+2Ch]
 * 0000000140BBD20C: cmp     [rbp+8D0h+var_750], ax
 * 0000000140BBD213: jnz     short loc_140BBD21E
 * 0000000140BBD215: test    r15d, r15d
 * 0000000140BBD218: jz      loc_140BBD387
 * 0000000140BBD21E: test    r15d, r15d
 * 0000000140BBD221: jnz     short loc_140BBD261
 * 0000000140BBD223: mov     eax, r14d
 * 0000000140BBD226: xor     r15d, r15d
 * 0000000140BBD229: cmp     rax, [r8+18h]
 * 0000000140BBD22D: jnz     short loc_140BBD24A
 * 0000000140BBD22F: cmp     [rsi+918h], r15d
 * 0000000140BBD236: jnz     short loc_140BBD264
 * 0000000140BBD238: mov     ecx, ebx
 * 0000000140BBD23A: xor     rcx, rdx
 * 0000000140BBD23D: mov     rax, [rsi+588h]
 * 0000000140BBD244: mov     [rax+18h], rcx
 * 0000000140BBD248: jmp     short loc_140BBD264
 * 0000000140BBD24A: mov     eax, [r8+18h]
 * 0000000140BBD24E: cmp     [rsi+918h], r15d
 * 0000000140BBD255: jnz     short loc_140BBD264
 * 0000000140BBD257: mov     ecx, eax
 * 0000000140BBD259: mov     eax, r14d
 * 0000000140BBD25C: xor     rcx, rax
 * 0000000140BBD25F: jmp     short loc_140BBD23D
 * 0000000140BBD261: xor     r15d, r15d
 * 0000000140BBD264: mov     ebx, 1
 * 0000000140BBD269: mov     rcx, [r8+8]
 * 0000000140BBD26D: cmp     [rsi+918h], r15d
 * 0000000140BBD274: jnz     loc_140BBD38E
 * 0000000140BBD27A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBD284: add     rax, rsi
 * 0000000140BBD287: mov     [rsi+920h], rax
 * 0000000140BBD28E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBD298: add     rax, r8
 * 0000000140BBD29B: mov     [rsi+928h], rax
 * 0000000140BBD2A2: movsxd  rax, dword ptr [r8]
 * 0000000140BBD2A5: mov     [rsi+930h], rax
 * 0000000140BBD2AC: mov     [rsi+938h], rcx
 * 0000000140BBD2B3: mov     [rsi+918h], ebx
 * 0000000140BBD2B9: mov     ecx, [rsi+9D8h]
 * 0000000140BBD2BF: bt      ecx, 1Dh
 * 0000000140BBD2C3: jb      loc_140BBD38E
 * 0000000140BBD2C9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBD2D3: jz      loc_140BBD38E
 * 0000000140BBD2D9: test    bl, cl
 * 0000000140BBD2DB: jz      loc_140BBD38E
 * 0000000140BBD2E1: mov     ecx, [rsi+0A74h]
 * 0000000140BBD2E7: mov     eax, [rsi+804h]
 * 0000000140BBD2ED: mov     r11, [rsi+838h]
 * 0000000140BBD2F4: sub     eax, ecx
 * 0000000140BBD2F6: mov     r8, [rsi+0A78h]
 * 0000000140BBD2FD: lea     r9, [rcx+rsi]
 * 0000000140BBD301: mov     ecx, eax
 * 0000000140BBD303: shr     rcx, 3
 * 0000000140BBD307: lea     r10, [r9+rcx*8]
 * 0000000140BBD30B: jmp     short loc_140BBD32E
 * 0000000140BBD30D: xor     [r9], r8
 * 0000000140BBD310: mov     rax, r11
 * 0000000140BBD313: xor     rax, [r9]
 * 0000000140BBD316: movzx   ecx, r8b
 * 0000000140BBD31A: and     ecx, 3Fh
 * 0000000140BBD31D: ror     r8, cl
 * 0000000140BBD320: add     r8, rax
 * 0000000140BBD323: xor     r8, 0EFAh
 * 0000000140BBD32A: add     r9, 8
 * 0000000140BBD32E: cmp     r9, r10
 * 0000000140BBD331: jnz     short loc_140BBD30D
 * 0000000140BBD333: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBD33B: cmp     r8, [rsi+0A80h]
 * 0000000140BBD342: jz      short loc_140BBD38E
 * 0000000140BBD344: mov     ecx, [rsi+804h]
 * 0000000140BBD34A: mov     rax, [rsi+588h]
 * 0000000140BBD351: mov     [rax], rsi
 * 0000000140BBD354: mov     [rax+10h], ecx
 * 0000000140BBD357: mov     rcx, [rsi+0A80h]
 * 0000000140BBD35E: cmp     [rsi+918h], r15d
 * 0000000140BBD365: jnz     short loc_140BBD375
 * 0000000140BBD367: mov     rax, [rsi+588h]
 * 0000000140BBD36E: xor     rcx, r8
 * 0000000140BBD371: mov     [rax+18h], rcx
 * 0000000140BBD375: xor     edx, edx
 * 0000000140BBD377: mov     r9d, 100h
 * 0000000140BBD37D: mov     rcx, rsi
 * 0000000140BBD380: call    sub_140BC7384
 * 0000000140BBD385: jmp     short loc_140BBD38E
 * 0000000140BBD387: xor     r15d, r15d
 * 0000000140BBD38A: lea     ebx, [r15+1]
 * 0000000140BBD38E: add     dword ptr [rsi+848h], 10000h
 * 0000000140BBD398: mov     r11d, 1000h
 * 0000000140BBD39E: jmp     loc_140BB1FAF
 * 0000000140BBD3A3: cmp     [r13+10h], r15d
 * 0000000140BBD3A7: jz      loc_140BB1FAF
 * 0000000140BBD3AD: test    dword ptr [rsi+9DCh], 4000h
 * 0000000140BBD3B7: jz      short loc_140BBD3D8
 * 0000000140BBD3B9: mov     rcx, [rsi+4D8h]
 * 0000000140BBD3C0: cli
 * 0000000140BBD3C1: mov     eax, [rsi+9D8h]
 * 0000000140BBD3C7: shr     eax, 9
 * 0000000140BBD3CA: and     eax, 1Fh
 * 0000000140BBD3CD: lock bts [rcx], eax
 * 0000000140BBD3D1: jnb     short loc_140BBD3D8
 * 0000000140BBD3D3: sti
 * 0000000140BBD3D4: pause
 * 0000000140BBD3D6: jmp     short loc_140BBD3C0
 * 0000000140BBD3D8: mov     r14, [r13+8]
 * 0000000140BBD3DC: mov     r8d, [r13+10h]
 * 0000000140BBD3E0: mov     r9, r14
 * 0000000140BBD3E3: add     [rsi+848h], r8d
 * 0000000140BBD3EA: mov     rax, r14
 * 0000000140BBD3ED: mov     r11d, [rsi+834h]
 * 0000000140BBD3F4: mov     r15, [rsi+838h]
 * 0000000140BBD3FB: lea     rcx, [r14+r8]
 * 0000000140BBD3FF: cmp     r14, rcx
 * 0000000140BBD402: jnb     short loc_140BBD414
 * 0000000140BBD404: mov     edx, 40h ; '@'
 * 0000000140BBD409: prefetchnta byte ptr [rax]
 * 0000000140BBD40C: add     rax, rdx
 * 0000000140BBD40F: cmp     rax, rcx
 * 0000000140BBD412: jb      short loc_140BBD409
 * 0000000140BBD414: mov     r10d, r8d
 * 0000000140BBD417: mov     rbx, r15
 * 0000000140BBD41A: shr     r10d, 7
 * 0000000140BBD41E: mov     edx, 1
 * 0000000140BBD423: mov     r12d, 0FFFFFFFFh
 * 0000000140BBD429: test    r10d, r10d
 * 0000000140BBD42C: jz      short loc_140BBD492
 * 0000000140BBD42E: mov     rsi, 7010008004002001h
 * 0000000140BBD438: mov     eax, 8
 * 0000000140BBD43D: xor     rbx, [r9]
 * 0000000140BBD440: mov     ecx, r11d
 * 0000000140BBD443: rol     rbx, cl
 * 0000000140BBD446: xor     rbx, [r9+8]
 * 0000000140BBD44A: add     r9, 10h
 * 0000000140BBD44E: rol     rbx, cl
 * 0000000140BBD451: sub     rax, rdx
 * 0000000140BBD454: jnz     short loc_140BBD43D
 * 0000000140BBD456: mov     rcx, r9
 * 0000000140BBD459: sub     rcx, r14
 * 0000000140BBD45C: xor     rcx, r15
 * 0000000140BBD45F: mov     rax, rcx
 * 0000000140BBD462: rol     rax, 11h
 * 0000000140BBD466: xor     rcx, rax
 * 0000000140BBD469: mov     rax, rsi
 * 0000000140BBD46C: mul     rcx
 * 0000000140BBD46F: mov     [rbp+8D0h+var_4F0], rdx
 * 0000000140BBD476: xor     edx, eax
 * 0000000140BBD478: xor     r11d, edx
 * 0000000140BBD47B: mov     edx, 1
 * 0000000140BBD480: and     r11d, 3Fh
 * 0000000140BBD484: cmovz   r11d, edx
 * 0000000140BBD488: add     r10d, r12d
 * 0000000140BBD48B: jnz     short loc_140BBD438
 * 0000000140BBD48D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBD492: and     r8d, 7Fh
 * 0000000140BBD496: cmp     r8d, 8
 * 0000000140BBD49A: jb      short loc_140BBD4B9
 * 0000000140BBD49C: mov     eax, r8d
 * 0000000140BBD49F: shr     rax, 3
 * 0000000140BBD4A3: xor     rbx, [r9]
 * 0000000140BBD4A6: mov     ecx, r11d
 * 0000000140BBD4A9: rol     rbx, cl
 * 0000000140BBD4AC: add     r9, 8
 * 0000000140BBD4B0: add     r8d, 0FFFFFFF8h
 * 0000000140BBD4B4: sub     rax, rdx
 * 0000000140BBD4B7: jnz     short loc_140BBD4A3
 * 0000000140BBD4B9: xor     r15d, r15d
 * 0000000140BBD4BC: test    r8d, r8d
 * 0000000140BBD4BF: jz      short loc_140BBD4D6
 * 0000000140BBD4C1: movzx   eax, byte ptr [r9]
 * 0000000140BBD4C5: mov     ecx, r11d
 * 0000000140BBD4C8: xor     rbx, rax
 * 0000000140BBD4CB: add     r9, rdx
 * 0000000140BBD4CE: rol     rbx, cl
 * 0000000140BBD4D1: add     r8d, r12d
 * 0000000140BBD4D4: jnz     short loc_140BBD4C1
 * 0000000140BBD4D6: mov     rax, rbx
 * 0000000140BBD4D9: jmp     short loc_140BBD4DD
 * 0000000140BBD4DB: xor     ebx, eax
 * 0000000140BBD4DD: shr     rax, 1Fh
 * 0000000140BBD4E1: test    rax, rax
 * 0000000140BBD4E4: jnz     short loc_140BBD4DB
 * 0000000140BBD4E6: btr     ebx, 1Fh
 * 0000000140BBD4EA: mov     r12d, r15d
 * 0000000140BBD4ED: cmp     ebx, [r13+14h]
 * 0000000140BBD4F1: jz      loc_140BBD70E
 * 0000000140BBD4F7: cmp     [r13+0], r15d
 * 0000000140BBD4FB: jnz     short loc_140BBD505
 * 0000000140BBD4FD: cmp     [r13+18h], r15d
 * 0000000140BBD501: cmovnz  r12d, edx
 * 0000000140BBD505: mov     ecx, [r13+10h]
 * 0000000140BBD509: mov     rdx, [r13+8]
 * 0000000140BBD50D: test    rcx, rcx
 * 0000000140BBD510: jz      loc_140BBD5CD
 * 0000000140BBD516: mov     eax, [rsi+9DCh]
 * 0000000140BBD51C: mov     r8d, 40h ; '@'
 * 0000000140BBD522: test    r8b, al
 * 0000000140BBD525: jz      loc_140BBD5CD
 * 0000000140BBD52B: mov     r15, cr8
 * 0000000140BBD52F: lea     eax, [r8-3Eh]
 * 0000000140BBD533: mov     cr8, rax
 * 0000000140BBD537: mov     r14, rdx
 * 0000000140BBD53A: lea     rax, [rcx-1]
 * 0000000140BBD53E: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BBD545: add     rax, rdx
 * 0000000140BBD548: or      rax, 0FFFh
 * 0000000140BBD54E: mov     [rbp+8D0h+var_950], rax
 * 0000000140BBD552: lea     r13, [r14-1]
 * 0000000140BBD556: mov     rax, [rsi+468h]
 * 0000000140BBD55D: xor     edx, edx
 * 0000000140BBD55F: mov     rcx, r14
 * 0000000140BBD562: call    KeGuardDispatchICall
 * 0000000140BBD567: cmp     eax, 0C000022Dh
 * 0000000140BBD56C: jnz     short loc_140BBD593
 * 0000000140BBD56E: test    r12d, r12d
 * 0000000140BBD571: jnz     short loc_140BBD5BD
 * 0000000140BBD573: lea     eax, [r12+1]
 * 0000000140BBD578: cmp     r15b, al
 * 0000000140BBD57B: ja      short loc_140BBD597
 * 0000000140BBD57D: movzx   eax, r15b
 * 0000000140BBD581: mov     cr8, rax
 * 0000000140BBD585: mov     al, [r14]
 * 0000000140BBD588: lea     eax, [r12+2]
 * 0000000140BBD58D: mov     cr8, rax
 * 0000000140BBD591: jmp     short loc_140BBD556
 * 0000000140BBD593: test    eax, eax
 * 0000000140BBD595: js      short loc_140BBD5BD
 * 0000000140BBD597: mov     r11d, 1000h
 * 0000000140BBD59D: add     r14, r11
 * 0000000140BBD5A0: add     r13, r11
 * 0000000140BBD5A3: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BBD5A7: jnz     short loc_140BBD556
 * 0000000140BBD5A9: movzx   eax, r15b
 * 0000000140BBD5AD: mov     cr8, rax
 * 0000000140BBD5B1: xor     r15d, r15d
 * 0000000140BBD5B4: lea     ebx, [r15+1]
 * 0000000140BBD5B8: jmp     loc_140BBD719
 * 0000000140BBD5BD: movzx   eax, r15b
 * 0000000140BBD5C1: mov     cr8, rax
 * 0000000140BBD5C5: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BBD5CA: xor     r15d, r15d
 * 0000000140BBD5CD: mov     eax, [r13+14h]
 * 0000000140BBD5D1: cmp     [rsi+918h], r15d
 * 0000000140BBD5D8: jnz     short loc_140BBD5EA
 * 0000000140BBD5DA: mov     ecx, ebx
 * 0000000140BBD5DC: xor     rcx, rax
 * 0000000140BBD5DF: mov     rax, [rsi+588h]
 * 0000000140BBD5E6: mov     [rax+18h], rcx
 * 0000000140BBD5EA: mov     ebx, 1
 * 0000000140BBD5EF: mov     rcx, [r13+8]
 * 0000000140BBD5F3: cmp     [rsi+918h], r15d
 * 0000000140BBD5FA: jnz     loc_140BBD713
 * 0000000140BBD600: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBD60A: add     rax, rsi
 * 0000000140BBD60D: mov     [rsi+920h], rax
 * 0000000140BBD614: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBD61E: add     rax, r13
 * 0000000140BBD621: mov     [rsi+928h], rax
 * 0000000140BBD628: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBD62C: mov     [rsi+930h], rax
 * 0000000140BBD633: mov     [rsi+938h], rcx
 * 0000000140BBD63A: mov     [rsi+918h], ebx
 * 0000000140BBD640: mov     ecx, [rsi+9D8h]
 * 0000000140BBD646: bt      ecx, 1Dh
 * 0000000140BBD64A: jb      loc_140BBD713
 * 0000000140BBD650: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBD65A: jz      loc_140BBD713
 * 0000000140BBD660: test    bl, cl
 * 0000000140BBD662: jz      loc_140BBD713
 * 0000000140BBD668: mov     ecx, [rsi+0A74h]
 * 0000000140BBD66E: mov     eax, [rsi+804h]
 * 0000000140BBD674: mov     r10, [rsi+838h]
 * 0000000140BBD67B: sub     eax, ecx
 * 0000000140BBD67D: mov     r8, [rsi+0A78h]
 * 0000000140BBD684: lea     rdx, [rcx+rsi]
 * 0000000140BBD688: mov     ecx, eax
 * 0000000140BBD68A: shr     rcx, 3
 * 0000000140BBD68E: lea     r9, [rdx+rcx*8]
 * 0000000140BBD692: jmp     short loc_140BBD6B5
 * 0000000140BBD694: xor     [rdx], r8
 * 0000000140BBD697: mov     rax, [rdx]
 * 0000000140BBD69A: movzx   ecx, r8b
 * 0000000140BBD69E: xor     rax, r10
 * 0000000140BBD6A1: and     ecx, 3Fh
 * 0000000140BBD6A4: ror     r8, cl
 * 0000000140BBD6A7: add     r8, rax
 * 0000000140BBD6AA: xor     r8, 0EFAh
 * 0000000140BBD6B1: add     rdx, 8
 * 0000000140BBD6B5: cmp     rdx, r9
 * 0000000140BBD6B8: jnz     short loc_140BBD694
 * 0000000140BBD6BA: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBD6C2: cmp     r8, [rsi+0A80h]
 * 0000000140BBD6C9: jz      short loc_140BBD713
 * 0000000140BBD6CB: mov     ecx, [rsi+804h]
 * 0000000140BBD6D1: mov     rax, [rsi+588h]
 * 0000000140BBD6D8: mov     [rax], rsi
 * 0000000140BBD6DB: mov     [rax+10h], ecx
 * 0000000140BBD6DE: mov     rcx, [rsi+0A80h]
 * 0000000140BBD6E5: cmp     [rsi+918h], r15d
 * 0000000140BBD6EC: jnz     short loc_140BBD6FC
 * 0000000140BBD6EE: mov     rax, [rsi+588h]
 * 0000000140BBD6F5: xor     rcx, r8
 * 0000000140BBD6F8: mov     [rax+18h], rcx
 * 0000000140BBD6FC: xor     edx, edx
 * 0000000140BBD6FE: mov     r9d, 100h
 * 0000000140BBD704: mov     rcx, rsi
 * 0000000140BBD707: call    sub_140BC7384
 * 0000000140BBD70C: jmp     short loc_140BBD713
 * 0000000140BBD70E: mov     ebx, 1
 * 0000000140BBD713: mov     r11d, 1000h
 * 0000000140BBD719: test    dword ptr [rsi+9DCh], 4000h
 * 0000000140BBD723: jz      loc_140BB1FA9
 * 0000000140BBD729: mov     ecx, [rsi+9D8h]
 * 0000000140BBD72F: mov     eax, ebx
 * 0000000140BBD731: mov     rdx, [rsi+4D8h]
 * 0000000140BBD738: shr     ecx, 9
 * 0000000140BBD73B: and     ecx, 1Fh
 * 0000000140BBD73E: shl     eax, cl
 * 0000000140BBD740: not     eax
 * 0000000140BBD742: lock and [rdx], eax
 * 0000000140BBD745: sti
 * 0000000140BBD746: jmp     loc_140BB1FA9
 * 0000000140BBD74B: mov     rcx, gs:20h
 * 0000000140BBD754: mov     rax, [rsi+658h]
 * 0000000140BBD75B: mov     rcx, [rax+rcx]
 * 0000000140BBD75F: mov     rax, [rsi+698h]
 * 0000000140BBD766: add     rcx, [rsi+6B8h]
 * 0000000140BBD76D: mov     rcx, [rcx+rax]
 * 0000000140BBD771: mov     [rbp+8D0h+var_8E8], rcx
 * 0000000140BBD775: mov     rax, [rsi+490h]
 * 0000000140BBD77C: call    KeGuardDispatchICall
 * 0000000140BBD781: mov     r9d, 0FFFFFFFFh
 * 0000000140BBD787: mov     r14, rax
 * 0000000140BBD78A: cmp     rax, r9
 * 0000000140BBD78D: jnz     loc_140BBD8C6
 * 0000000140BBD793: mov     [rbp+8D0h+var_8E8], r15
 * 0000000140BBD797: mov     rcx, [rsi+9D0h]
 * 0000000140BBD79E: test    rcx, rcx
 * 0000000140BBD7A1: jz      short loc_140BBD7C9
 * 0000000140BBD7A3: mov     rax, [rsi+480h]
 * 0000000140BBD7AA: lea     rdx, [rbp+8D0h+var_8E8]
 * 0000000140BBD7AE: call    KeGuardDispatchICall
 * 0000000140BBD7B3: test    eax, eax
 * 0000000140BBD7B5: jns     short loc_140BBD7C0
 * 0000000140BBD7B7: mov     rax, r15
 * 0000000140BBD7BA: mov     [rbp+8D0h+var_8E8], rax
 * 0000000140BBD7BE: jmp     short loc_140BBD7C4
 * 0000000140BBD7C0: mov     rax, [rbp+8D0h+var_8E8]
 * 0000000140BBD7C4: test    rax, rax
 * 0000000140BBD7C7: jnz     short loc_140BBD7DB
 * 0000000140BBD7C9: mov     rax, [rsi+3C0h]
 * 0000000140BBD7D0: xor     ecx, ecx
 * 0000000140BBD7D2: call    KeGuardDispatchICall
 * 0000000140BBD7D7: mov     [rbp+8D0h+var_8E8], rax
 * 0000000140BBD7DB: mov     [rsi+9D0h], r15
 * 0000000140BBD7E2: mov     ebx, r15d
 * 0000000140BBD7E5: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BBD7E9: test    rcx, rcx
 * 0000000140BBD7EC: jz      loc_140BBD8B3
 * 0000000140BBD7F2: mov     rax, [rsi+3A0h]
 * 0000000140BBD7F9: inc     ebx
 * 0000000140BBD7FB: call    KeGuardDispatchICall
 * 0000000140BBD800: test    eax, eax
 * 0000000140BBD802: js      short loc_140BBD85F
 * 0000000140BBD804: mov     rax, [rsi+438h]
 * 0000000140BBD80B: lea     rdx, [rbp+8D0h+var_A8]
 * 0000000140BBD812: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BBD816: call    KeGuardDispatchICall
 * 0000000140BBD81B: mov     rax, [rsi+490h]
 * 0000000140BBD822: call    KeGuardDispatchICall
 * 0000000140BBD827: mov     r14, rax
 * 0000000140BBD82A: lea     rcx, [rbp+8D0h+var_A8]
 * 0000000140BBD831: mov     rax, [rsi+440h]
 * 0000000140BBD838: call    KeGuardDispatchICall
 * 0000000140BBD83D: mov     rax, [rsi+3A8h]
 * 0000000140BBD844: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BBD848: call    KeGuardDispatchICall
 * 0000000140BBD84D: mov     eax, 0FFFFFFFFh
 * 0000000140BBD852: cmp     r14, rax
 * 0000000140BBD855: jnz     short loc_140BBD881
 * 0000000140BBD857: cmp     ebx, 100h
 * 0000000140BBD85D: ja      short loc_140BBD881
 * 0000000140BBD85F: mov     rax, [rsi+3C0h]
 * 0000000140BBD866: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BBD86A: call    KeGuardDispatchICall
 * 0000000140BBD86F: mov     [rbp+8D0h+var_8E8], rax
 * 0000000140BBD873: mov     rcx, rax
 * 0000000140BBD876: test    rax, rax
 * 0000000140BBD879: jnz     loc_140BBD7F2
 * 0000000140BBD87F: jmp     short loc_140BBD8B3
 * 0000000140BBD881: mov     rax, [rsi+488h]
 * 0000000140BBD888: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BBD88C: call    KeGuardDispatchICall
 * 0000000140BBD891: mov     [rsi+9D0h], rax
 * 0000000140BBD898: mov     rax, [rsi+1F0h]
 * 0000000140BBD89F: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BBD8A3: call    KeGuardDispatchICall
 * 0000000140BBD8A8: mov     r9d, 0FFFFFFFFh
 * 0000000140BBD8AE: cmp     r14, r9
 * 0000000140BBD8B1: jnz     short loc_140BBD8C1
 * 0000000140BBD8B3: shl     ebx, 0Ch
 * 0000000140BBD8B6: add     [rsi+848h], ebx
 * 0000000140BBD8BC: jmp     loc_140BB2D97
 * 0000000140BBD8C1: mov     ebx, 1
 * 0000000140BBD8C6: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140BBD8CE: jnb     short loc_140BBD912
 * 0000000140BBD8D0: mov     rcx, [rsi+0AC8h]
 * 0000000140BBD8D7: mov     edx, 30h ; '0'
 * 0000000140BBD8DC: mov     r8, r12
 * 0000000140BBD8DF: mov     rax, [r13+0]
 * 0000000140BBD8E3: add     edx, 0FFFFFFF8h
 * 0000000140BBD8E6: mov     [rcx], rax
 * 0000000140BBD8E9: add     r13, 8
 * 0000000140BBD8ED: add     rcx, 8
 * 0000000140BBD8F1: sub     r8, rbx
 * 0000000140BBD8F4: jnz     short loc_140BBD8DF
 * 0000000140BBD8F6: test    edx, edx
 * 0000000140BBD8F8: jz      short loc_140BBD90B
 * 0000000140BBD8FA: mov     al, [r13+0]
 * 0000000140BBD8FE: add     r13, rbx
 * 0000000140BBD901: mov     [rcx], al
 * 0000000140BBD903: add     rcx, rbx
 * 0000000140BBD906: add     edx, r9d
 * 0000000140BBD909: jnz     short loc_140BBD8FA
 * 0000000140BBD90B: mov     r13, [rsi+0AC8h]
 * 0000000140BBD912: mov     [r13+18h], r14
 * 0000000140BBD916: mov     rcx, [rbp+8D0h+var_8E8]
 * 0000000140BBD91A: cmp     [rsi+918h], r15d
 * 0000000140BBD921: jnz     loc_140BBD398
 * 0000000140BBD927: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBD931: add     rax, rsi
 * 0000000140BBD934: mov     [rsi+920h], rax
 * 0000000140BBD93B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBD945: add     rax, r13
 * 0000000140BBD948: mov     [rsi+928h], rax
 * 0000000140BBD94F: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBD953: mov     [rsi+930h], rax
 * 0000000140BBD95A: mov     [rsi+938h], rcx
 * 0000000140BBD961: mov     [rsi+918h], ebx
 * 0000000140BBD967: mov     ecx, [rsi+9D8h]
 * 0000000140BBD96D: bt      ecx, 1Dh
 * 0000000140BBD971: jb      loc_140BBD398
 * 0000000140BBD977: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBD981: jz      loc_140BBD398
 * 0000000140BBD987: test    bl, cl
 * 0000000140BBD989: jz      loc_140BBD398
 * 0000000140BBD98F: mov     ecx, [rsi+0A74h]
 * 0000000140BBD995: mov     eax, [rsi+804h]
 * 0000000140BBD99B: mov     r10, [rsi+838h]
 * 0000000140BBD9A2: sub     eax, ecx
 * 0000000140BBD9A4: mov     r8, [rsi+0A78h]
 * 0000000140BBD9AB: lea     rdx, [rcx+rsi]
 * 0000000140BBD9AF: mov     ecx, eax
 * 0000000140BBD9B1: shr     rcx, 3
 * 0000000140BBD9B5: lea     r9, [rdx+rcx*8]
 * 0000000140BBD9B9: jmp     short loc_140BBD9DC
 * 0000000140BBD9BB: xor     [rdx], r8
 * 0000000140BBD9BE: mov     rax, [rdx]
 * 0000000140BBD9C1: movzx   ecx, r8b
 * 0000000140BBD9C5: xor     rax, r10
 * 0000000140BBD9C8: and     ecx, 3Fh
 * 0000000140BBD9CB: ror     r8, cl
 * 0000000140BBD9CE: add     r8, rax
 * 0000000140BBD9D1: xor     r8, 0EFAh
 * 0000000140BBD9D8: add     rdx, 8
 * 0000000140BBD9DC: cmp     rdx, r9
 * 0000000140BBD9DF: jnz     short loc_140BBD9BB
 * 0000000140BBD9E1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBD9E9: cmp     r8, [rsi+0A80h]
 * 0000000140BBD9F0: jz      loc_140BBD398
 * 0000000140BBD9F6: mov     rax, [rsi+588h]
 * 0000000140BBD9FD: mov     ecx, [rsi+804h]
 * 0000000140BBDA03: mov     [rax], rsi
 * 0000000140BBDA06: mov     [rax+10h], ecx
 * 0000000140BBDA09: mov     rax, [rsi+0A80h]
 * 0000000140BBDA10: cmp     [rsi+918h], r15d
 * 0000000140BBDA17: jnz     loc_140BB8DB1
 * 0000000140BBDA1D: mov     rcx, r8
 * 0000000140BBDA20: xor     rcx, rax
 * 0000000140BBDA23: jmp     loc_140BB8DA6
 * 0000000140BBDA28: mov     eax, [rsi+850h]
 * 0000000140BBDA2E: test    bl, al
 * 0000000140BBDA30: jnz     loc_140BB1FAF
 * 0000000140BBDA36: mov     rax, [rsi+188h]
 * 0000000140BBDA3D: mov     r14d, r15d
 * 0000000140BBDA40: mov     r15, [rsi+540h]
 * 0000000140BBDA47: call    KeGuardDispatchICall
 * 0000000140BBDA4C: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BBDA56: jnz     short loc_140BBDA67
 * 0000000140BBDA58: mov     ecx, [rsi+978h]
 * 0000000140BBDA5E: cmp     ecx, 7
 * 0000000140BBDA61: jnb     short loc_140BBDA67
 * 0000000140BBDA63: shl     bl, cl
 * 0000000140BBDA65: jmp     short loc_140BBDA7E
 * 0000000140BBDA67: mov     rax, [rsi+138h]
 * 0000000140BBDA6E: xor     edx, edx
 * 0000000140BBDA70: mov     rcx, [rsi+0A48h]
 * 0000000140BBDA77: call    KeGuardDispatchICall
 * 0000000140BBDA7C: mov     bl, 80h
 * 0000000140BBDA7E: mov     rax, [rsi+148h]
 * 0000000140BBDA85: xor     edx, edx
 * 0000000140BBDA87: mov     rcx, r15
 * 0000000140BBDA8A: call    KeGuardDispatchICall
 * 0000000140BBDA8F: cmp     bl, 80h
 * 0000000140BBDA92: jz      short loc_140BBDAD3
 * 0000000140BBDA94: mov     r8, [rsi+518h]
 * 0000000140BBDA9B: mov     rdx, [r8]
 * 0000000140BBDA9E: cmp     rdx, r8
 * 0000000140BBDAA1: jz      short loc_140BBDAE8
 * 0000000140BBDAA3: not     bl
 * 0000000140BBDAA5: mov     edi, 1
 * 0000000140BBDAAA: mov     rax, [rsi+6C8h]
 * 0000000140BBDAB1: mov     rcx, rdx
 * 0000000140BBDAB4: sub     rcx, [rsi+6E0h]
 * 0000000140BBDABB: lock and [rcx+rax], bl
 * 0000000140BBDABF: mov     rdx, [rdx]
 * 0000000140BBDAC2: add     r14d, edi
 * 0000000140BBDAC5: cmp     rdx, r8
 * 0000000140BBDAC8: jnz     short loc_140BBDAAA
 * 0000000140BBDACA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BBDAD1: jmp     short loc_140BBDAE8
 * 0000000140BBDAD3: mov     rax, [rsi+140h]
 * 0000000140BBDADA: xor     edx, edx
 * 0000000140BBDADC: mov     rcx, [rsi+0A48h]
 * 0000000140BBDAE3: call    KeGuardDispatchICall
 * 0000000140BBDAE8: mov     rcx, [rsi+540h]
 * 0000000140BBDAEF: xor     edx, edx
 * 0000000140BBDAF1: mov     rax, [rsi+150h]
 * 0000000140BBDAF8: call    KeGuardDispatchICall
 * 0000000140BBDAFD: mov     rax, [rsi+190h]
 * 0000000140BBDB04: call    KeGuardDispatchICall
 * 0000000140BBDB09: shl     r14d, 7
 * 0000000140BBDB0D: mov     r11d, 1000h
 * 0000000140BBDB13: add     [rsi+848h], r14d
 * 0000000140BBDB1A: xor     r15d, r15d
 * 0000000140BBDB1D: lea     ebx, [r15+1]
 * 0000000140BBDB21: jmp     loc_140BB1FAF
 * 0000000140BBDB26: mov     r14, [r13+8]
 * 0000000140BBDB2A: mov     r12, rsi
 * 0000000140BBDB2D: mov     r8d, [r13+10h]
 * 0000000140BBDB31: mov     r9, r14
 * 0000000140BBDB34: add     [rsi+848h], r8d
 * 0000000140BBDB3B: mov     rax, r14
 * 0000000140BBDB3E: mov     r10d, [rsi+834h]
 * 0000000140BBDB45: mov     r15, [rsi+838h]
 * 0000000140BBDB4C: lea     rcx, [r14+r8]
 * 0000000140BBDB50: cmp     r14, rcx
 * 0000000140BBDB53: jnb     short loc_140BBDB65
 * 0000000140BBDB55: mov     edx, 40h ; '@'
 * 0000000140BBDB5A: prefetchnta byte ptr [rax]
 * 0000000140BBDB5D: add     rax, rdx
 * 0000000140BBDB60: cmp     rax, rcx
 * 0000000140BBDB63: jb      short loc_140BBDB5A
 * 0000000140BBDB65: mov     r11d, r8d
 * 0000000140BBDB68: mov     rbx, r15
 * 0000000140BBDB6B: shr     r11d, 7
 * 0000000140BBDB6F: mov     edx, 1
 * 0000000140BBDB74: mov     r13d, 0FFFFFFFFh
 * 0000000140BBDB7A: test    r11d, r11d
 * 0000000140BBDB7D: jz      short loc_140BBDBE4
 * 0000000140BBDB7F: mov     rsi, 7010008004002001h
 * 0000000140BBDB89: mov     eax, 8
 * 0000000140BBDB8E: xor     rbx, [r9]
 * 0000000140BBDB91: mov     ecx, r10d
 * 0000000140BBDB94: rol     rbx, cl
 * 0000000140BBDB97: xor     rbx, [r9+8]
 * 0000000140BBDB9B: add     r9, 10h
 * 0000000140BBDB9F: rol     rbx, cl
 * 0000000140BBDBA2: sub     rax, rdx
 * 0000000140BBDBA5: jnz     short loc_140BBDB8E
 * 0000000140BBDBA7: mov     rcx, r9
 * 0000000140BBDBAA: sub     rcx, r14
 * 0000000140BBDBAD: xor     rcx, r15
 * 0000000140BBDBB0: mov     rax, rcx
 * 0000000140BBDBB3: rol     rax, 11h
 * 0000000140BBDBB7: xor     rcx, rax
 * 0000000140BBDBBA: mov     rax, rsi
 * 0000000140BBDBBD: mul     rcx
 * 0000000140BBDBC0: xor     r10d, edx
 * 0000000140BBDBC3: mov     [rbp+8D0h+var_4E8], rdx
 * 0000000140BBDBCA: xor     r10d, eax
 * 0000000140BBDBCD: mov     edx, 1
 * 0000000140BBDBD2: and     r10d, 3Fh
 * 0000000140BBDBD6: cmovz   r10d, edx
 * 0000000140BBDBDA: add     r11d, r13d
 * 0000000140BBDBDD: jnz     short loc_140BBDB89
 * 0000000140BBDBDF: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBDBE4: and     r8d, 7Fh
 * 0000000140BBDBE8: cmp     r8d, 8
 * 0000000140BBDBEC: jb      short loc_140BBDC0B
 * 0000000140BBDBEE: mov     eax, r8d
 * 0000000140BBDBF1: shr     rax, 3
 * 0000000140BBDBF5: xor     rbx, [r9]
 * 0000000140BBDBF8: mov     ecx, r10d
 * 0000000140BBDBFB: rol     rbx, cl
 * 0000000140BBDBFE: add     r9, 8
 * 0000000140BBDC02: add     r8d, 0FFFFFFF8h
 * 0000000140BBDC06: sub     rax, rdx
 * 0000000140BBDC09: jnz     short loc_140BBDBF5
 * 0000000140BBDC0B: xor     r15d, r15d
 * 0000000140BBDC0E: test    r8d, r8d
 * 0000000140BBDC11: jz      short loc_140BBDC28
 * 0000000140BBDC13: movzx   eax, byte ptr [r9]
 * 0000000140BBDC17: mov     ecx, r10d
 * 0000000140BBDC1A: xor     rbx, rax
 * 0000000140BBDC1D: add     r9, rdx
 * 0000000140BBDC20: rol     rbx, cl
 * 0000000140BBDC23: add     r8d, r13d
 * 0000000140BBDC26: jnz     short loc_140BBDC13
 * 0000000140BBDC28: mov     rax, rbx
 * 0000000140BBDC2B: jmp     short loc_140BBDC2F
 * 0000000140BBDC2D: xor     ebx, eax
 * 0000000140BBDC2F: shr     rax, 1Fh
 * 0000000140BBDC33: test    rax, rax
 * 0000000140BBDC36: jnz     short loc_140BBDC2D
 * 0000000140BBDC38: mov     r14, [rsp+9D0h+var_980]
 * 0000000140BBDC3D: btr     ebx, 1Fh
 * 0000000140BBDC41: mov     r13d, r15d
 * 0000000140BBDC44: cmp     ebx, [r14+14h]
 * 0000000140BBDC48: jz      loc_140BBDE75
 * 0000000140BBDC4E: cmp     [r14], r15d
 * 0000000140BBDC51: jnz     short loc_140BBDC5B
 * 0000000140BBDC53: cmp     [r14+18h], r15d
 * 0000000140BBDC57: cmovnz  r13d, edx
 * 0000000140BBDC5B: mov     ecx, [r14+10h]
 * 0000000140BBDC5F: mov     rdx, [r14+8]
 * 0000000140BBDC63: test    rcx, rcx
 * 0000000140BBDC66: jz      loc_140BBDD35
 * 0000000140BBDC6C: mov     eax, [rsi+9DCh]
 * 0000000140BBDC72: mov     r8d, 40h ; '@'
 * 0000000140BBDC78: test    r8b, al
 * 0000000140BBDC7B: jz      loc_140BBDD35
 * 0000000140BBDC81: mov     r15, cr8
 * 0000000140BBDC85: lea     eax, [r8-3Eh]
 * 0000000140BBDC89: mov     cr8, rax
 * 0000000140BBDC8D: mov     r14, rdx
 * 0000000140BBDC90: lea     rax, [rcx-1]
 * 0000000140BBDC94: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BBDC9B: add     rax, rdx
 * 0000000140BBDC9E: or      rax, 0FFFh
 * 0000000140BBDCA4: mov     [rbp+8D0h+var_950], rax
 * 0000000140BBDCA8: lea     rax, [r14-1]
 * 0000000140BBDCAC: mov     [rsp+9D0h+var_978], rax
 * 0000000140BBDCB1: mov     rax, [rsi+468h]
 * 0000000140BBDCB8: xor     edx, edx
 * 0000000140BBDCBA: mov     rcx, r14
 * 0000000140BBDCBD: call    KeGuardDispatchICall
 * 0000000140BBDCC2: cmp     eax, 0C000022Dh
 * 0000000140BBDCC7: jnz     short loc_140BBDCEC
 * 0000000140BBDCC9: test    r13d, r13d
 * 0000000140BBDCCC: jnz     short loc_140BBDD25
 * 0000000140BBDCCE: lea     eax, [r13+1]
 * 0000000140BBDCD2: cmp     r15b, al
 * 0000000140BBDCD5: ja      short loc_140BBDCF0
 * 0000000140BBDCD7: movzx   eax, r15b
 * 0000000140BBDCDB: mov     cr8, rax
 * 0000000140BBDCDF: mov     al, [r14]
 * 0000000140BBDCE2: lea     eax, [r13+2]
 * 0000000140BBDCE6: mov     cr8, rax
 * 0000000140BBDCEA: jmp     short loc_140BBDCB1
 * 0000000140BBDCEC: test    eax, eax
 * 0000000140BBDCEE: js      short loc_140BBDD25
 * 0000000140BBDCF0: mov     rax, [rsp+9D0h+var_978]
 * 0000000140BBDCF5: mov     r11d, 1000h
 * 0000000140BBDCFB: add     rax, r11
 * 0000000140BBDCFE: add     r14, r11
 * 0000000140BBDD01: mov     [rsp+9D0h+var_978], rax
 * 0000000140BBDD06: cmp     rax, [rbp+8D0h+var_950]
 * 0000000140BBDD0A: jnz     short loc_140BBDCB1
 * 0000000140BBDD0C: movzx   eax, r15b
 * 0000000140BBDD10: mov     cr8, rax
 * 0000000140BBDD14: mov     r14, [rsp+9D0h+var_980]
 * 0000000140BBDD19: xor     r15d, r15d
 * 0000000140BBDD1C: lea     ebx, [r15+1]
 * 0000000140BBDD20: jmp     loc_140BBDE80
 * 0000000140BBDD25: movzx   eax, r15b
 * 0000000140BBDD29: mov     cr8, rax
 * 0000000140BBDD2D: mov     r14, [rsp+9D0h+var_980]
 * 0000000140BBDD32: xor     r15d, r15d
 * 0000000140BBDD35: mov     eax, [r14+14h]
 * 0000000140BBDD39: cmp     [rsi+918h], r15d
 * 0000000140BBDD40: jnz     short loc_140BBDD52
 * 0000000140BBDD42: mov     ecx, ebx
 * 0000000140BBDD44: xor     rcx, rax
 * 0000000140BBDD47: mov     rax, [rsi+588h]
 * 0000000140BBDD4E: mov     [rax+18h], rcx
 * 0000000140BBDD52: mov     ebx, 1
 * 0000000140BBDD57: mov     rcx, [r14+8]
 * 0000000140BBDD5B: cmp     [rsi+918h], r15d
 * 0000000140BBDD62: jnz     loc_140BBDE7A
 * 0000000140BBDD68: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBDD72: add     rax, rsi
 * 0000000140BBDD75: mov     [rsi+920h], rax
 * 0000000140BBDD7C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBDD86: add     rax, r14
 * 0000000140BBDD89: mov     [rsi+928h], rax
 * 0000000140BBDD90: movsxd  rax, dword ptr [r14]
 * 0000000140BBDD93: mov     [rsi+930h], rax
 * 0000000140BBDD9A: mov     [rsi+938h], rcx
 * 0000000140BBDDA1: mov     [rsi+918h], ebx
 * 0000000140BBDDA7: mov     ecx, [rsi+9D8h]
 * 0000000140BBDDAD: bt      ecx, 1Dh
 * 0000000140BBDDB1: jb      loc_140BBDE7A
 * 0000000140BBDDB7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBDDC1: jz      loc_140BBDE7A
 * 0000000140BBDDC7: test    bl, cl
 * 0000000140BBDDC9: jz      loc_140BBDE7A
 * 0000000140BBDDCF: mov     ecx, [rsi+0A74h]
 * 0000000140BBDDD5: mov     eax, [rsi+804h]
 * 0000000140BBDDDB: mov     r10, [rsi+838h]
 * 0000000140BBDDE2: sub     eax, ecx
 * 0000000140BBDDE4: mov     r8, [rsi+0A78h]
 * 0000000140BBDDEB: lea     rdx, [rcx+rsi]
 * 0000000140BBDDEF: mov     ecx, eax
 * 0000000140BBDDF1: shr     rcx, 3
 * 0000000140BBDDF5: lea     r9, [rdx+rcx*8]
 * 0000000140BBDDF9: jmp     short loc_140BBDE1C
 * 0000000140BBDDFB: xor     [rdx], r8
 * 0000000140BBDDFE: mov     rax, [rdx]
 * 0000000140BBDE01: movzx   ecx, r8b
 * 0000000140BBDE05: xor     rax, r10
 * 0000000140BBDE08: and     ecx, 3Fh
 * 0000000140BBDE0B: ror     r8, cl
 * 0000000140BBDE0E: add     r8, rax
 * 0000000140BBDE11: xor     r8, 0EFAh
 * 0000000140BBDE18: add     rdx, 8
 * 0000000140BBDE1C: cmp     rdx, r9
 * 0000000140BBDE1F: jnz     short loc_140BBDDFB
 * 0000000140BBDE21: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBDE29: cmp     r8, [rsi+0A80h]
 * 0000000140BBDE30: jz      short loc_140BBDE7A
 * 0000000140BBDE32: mov     ecx, [rsi+804h]
 * 0000000140BBDE38: mov     rax, [rsi+588h]
 * 0000000140BBDE3F: mov     [rax], rsi
 * 0000000140BBDE42: mov     [rax+10h], ecx
 * 0000000140BBDE45: mov     rcx, [rsi+0A80h]
 * 0000000140BBDE4C: cmp     [rsi+918h], r15d
 * 0000000140BBDE53: jnz     short loc_140BBDE63
 * 0000000140BBDE55: mov     rax, [rsi+588h]
 * 0000000140BBDE5C: xor     rcx, r8
 * 0000000140BBDE5F: mov     [rax+18h], rcx
 * 0000000140BBDE63: xor     edx, edx
 * 0000000140BBDE65: mov     r9d, 100h
 * 0000000140BBDE6B: mov     rcx, rsi
 * 0000000140BBDE6E: call    sub_140BC7384
 * 0000000140BBDE73: jmp     short loc_140BBDE7A
 * 0000000140BBDE75: mov     ebx, 1
 * 0000000140BBDE7A: mov     r11d, 1000h
 * 0000000140BBDE80: mov     eax, [r14+20h]
 * 0000000140BBDE84: test    bl, al
 * 0000000140BBDE86: jz      loc_140BB1FA9
 * 0000000140BBDE8C: mov     rbx, [r14+18h]
 * 0000000140BBDE90: mov     rax, [rsi+208h]
 * 0000000140BBDE97: mov     rcx, rbx
 * 0000000140BBDE9A: mov     [rbp+8D0h+var_950], rbx
 * 0000000140BBDE9E: call    KeGuardDispatchICall
 * 0000000140BBDEA3: mov     r11d, 1000h
 * 0000000140BBDEA9: movzx   r15d, word ptr [rax+14h]
 * 0000000140BBDEAE: add     r15, 18h
 * 0000000140BBDEB2: add     r15, rax
 * 0000000140BBDEB5: movzx   eax, word ptr [rax+6]
 * 0000000140BBDEB9: lea     rcx, [rax+rax*4]
 * 0000000140BBDEBD: lea     rax, [r15+rcx*8]
 * 0000000140BBDEC1: cmp     r15, rax
 * 0000000140BBDEC4: jz      loc_140BB1FA1
 * 0000000140BBDECA: mov     r13d, [rsi+844h]
 * 0000000140BBDED1: xor     edx, edx
 * 0000000140BBDED3: test    r13d, r13d
 * 0000000140BBDED6: jnz     short loc_140BBDEE2
 * 0000000140BBDED8: mov     [rsi+844h], r11d
 * 0000000140BBDEDF: mov     r13d, r11d
 * 0000000140BBDEE2: cmp     rbx, [rsi+5E0h]
 * 0000000140BBDEE9: jz      short loc_140BBDF02
 * 0000000140BBDEEB: cmp     rbx, [rsi+5E8h]
 * 0000000140BBDEF2: jz      short loc_140BBDF02
 * 0000000140BBDEF4: mov     dword ptr [rbp+8D0h+arg_8], edx
 * 0000000140BBDEFA: mov     r14d, 1
 * 0000000140BBDF00: jmp     short loc_140BBDF0F
 * 0000000140BBDF02: mov     r14d, 1
 * 0000000140BBDF08: mov     dword ptr [rbp+8D0h+arg_8], r14d
 * 0000000140BBDF0F: mov     esi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BBDF15: mov     rdi, rax
 * 0000000140BBDF18: mov     ecx, [r15+10h]
 * 0000000140BBDF1C: mov     eax, [r15+8]
 * 0000000140BBDF20: cmp     ecx, eax
 * 0000000140BBDF22: mov     r10d, [r15+0Ch]
 * 0000000140BBDF26: cmovbe  ecx, eax
 * 0000000140BBDF29: lea     ebx, [r10+0FFFh]
 * 0000000140BBDF30: add     ebx, ecx
 * 0000000140BBDF32: and     ebx, 0FFFFF000h
 * 0000000140BBDF38: mov     dword ptr [rsp+9D0h+var_960], ebx
 * 0000000140BBDF3C: cmp     r13d, ebx
 * 0000000140BBDF3F: jnb     loc_140BBE039
 * 0000000140BBDF45: test    dword ptr [r15+24h], 2000000h
 * 0000000140BBDF4D: jnz     loc_140BBE036
 * 0000000140BBDF53: mov     eax, [r15]
 * 0000000140BBDF56: cmp     eax, 54494E49h
 * 0000000140BBDF5B: jnz     short loc_140BBDFC5
 * 0000000140BBDF5D: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140BBDF65: jz      loc_140BBE036
 * 0000000140BBDF6B: cmp     eax, 41525245h
 * 0000000140BBDF70: jnz     short loc_140BBDF82
 * 0000000140BBDF72: mov     eax, 4154h
 * 0000000140BBDF77: cmp     [r15+4], ax
 * 0000000140BBDF7C: jz      loc_140BBE036
 * 0000000140BBDF82: test    r12, r12
 * 0000000140BBDF85: jz      short loc_140BBDFF1
 * 0000000140BBDF87: mov     rax, [r12+958h]
 * 0000000140BBDF8F: mov     rdx, [r12+950h]
 * 0000000140BBDF97: mov     qword ptr [rbp+8D0h+var_730+8], rax
 * 0000000140BBDF9E: mov     rax, [r12+960h]
 * 0000000140BBDFA6: mov     qword ptr [rbp+8D0h+var_720], rax
 * 0000000140BBDFAD: mov     rax, [r12+968h]
 * 0000000140BBDFB5: mov     qword ptr [rbp+8D0h+var_720+8], rax
 * 0000000140BBDFBC: mov     qword ptr [rbp+8D0h+var_730], rdx
 * 0000000140BBDFC3: jmp     short loc_140BBE012
 * 0000000140BBDFC5: cmp     eax, 45474150h
 * 0000000140BBDFCA: jnz     short loc_140BBDF6B
 * 0000000140BBDFCC: movzx   eax, word ptr [r15+4]
 * 0000000140BBDFD1: mov     ecx, 7877h
 * 0000000140BBDFD6: cmp     ax, cx
 * 0000000140BBDFD9: jz      short loc_140BBE036
 * 0000000140BBDFDB: mov     ecx, 7277h
 * 0000000140BBDFE0: cmp     ax, cx
 * 0000000140BBDFE3: jz      short loc_140BBE036
 * 0000000140BBDFE5: mov     ecx, 7777h
 * 0000000140BBDFEA: cmp     ax, cx
 * 0000000140BBDFED: jnz     short loc_140BBDF82
 * 0000000140BBDFEF: jmp     short loc_140BBE036
 * 0000000140BBDFF1: movups  xmm1, xmmword ptr cs:VfExcludeSections
 * 0000000140BBDFF8: movups  xmm0, xmmword ptr cs:off_140E09F88; "INIT"
 * 0000000140BBDFFF: movups  [rbp+8D0h+var_730], xmm1
 * 0000000140BBE006: movups  [rbp+8D0h+var_720], xmm0
 * 0000000140BBE00D: movq    rdx, xmm1
 * 0000000140BBE012: mov     r9d, 7
 * 0000000140BBE018: mov     r8, r15
 * 0000000140BBE01B: mov     cl, [r8]
 * 0000000140BBE01E: add     r8, r14
 * 0000000140BBE021: mov     al, [rdx]
 * 0000000140BBE023: add     rdx, r14
 * 0000000140BBE026: cmp     cl, al
 * 0000000140BBE028: jnz     short loc_140BBE07A
 * 0000000140BBE02A: mov     eax, 0FFFFFFFFh
 * 0000000140BBE02F: add     r9d, eax
 * 0000000140BBE032: jnz     short loc_140BBE01B
 * 0000000140BBE034: xor     edx, edx
 * 0000000140BBE036: mov     r13d, ebx
 * 0000000140BBE039: add     r15, 28h ; '('
 * 0000000140BBE03D: mov     r14d, 1
 * 0000000140BBE043: cmp     r15, rdi
 * 0000000140BBE046: jnz     loc_140BBDF18
 * 0000000140BBE04C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBE051: cmp     r15, rdi
 * 0000000140BBE054: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BBE05B: jnz     loc_140BBE4BC
 * 0000000140BBE061: cmp     r13d, ebx
 * 0000000140BBE064: jb      loc_140BBE4BC
 * 0000000140BBE06A: xor     r15d, r15d
 * 0000000140BBE06D: mov     [r12+844h], r15d
 * 0000000140BBE075: jmp     loc_140BB1FA4
 * 0000000140BBE07A: mov     r8, qword ptr [rbp+8D0h+var_730+8]
 * 0000000140BBE081: mov     edx, 8
 * 0000000140BBE086: mov     r9, r15
 * 0000000140BBE089: mov     rcx, [r9]
 * 0000000140BBE08C: add     r9, 8
 * 0000000140BBE090: mov     rax, [r8]
 * 0000000140BBE093: add     r8, 8
 * 0000000140BBE097: cmp     rcx, rax
 * 0000000140BBE09A: jnz     short loc_140BBE0C6
 * 0000000140BBE09C: add     edx, 0FFFFFFF8h
 * 0000000140BBE09F: cmp     edx, 8
 * 0000000140BBE0A2: jnb     short loc_140BBE089
 * 0000000140BBE0A4: test    edx, edx
 * 0000000140BBE0A6: jz      short loc_140BBE034
 * 0000000140BBE0A8: mov     cl, [r9]
 * 0000000140BBE0AB: add     r9, r14
 * 0000000140BBE0AE: mov     al, [r8]
 * 0000000140BBE0B1: add     r8, r14
 * 0000000140BBE0B4: cmp     cl, al
 * 0000000140BBE0B6: jnz     short loc_140BBE0C6
 * 0000000140BBE0B8: mov     eax, 0FFFFFFFFh
 * 0000000140BBE0BD: add     edx, eax
 * 0000000140BBE0BF: jnz     short loc_140BBE0A8
 * 0000000140BBE0C1: jmp     loc_140BBE034
 * 0000000140BBE0C6: mov     rdx, qword ptr [rbp+8D0h+var_720]
 * 0000000140BBE0CD: mov     r9d, 4
 * 0000000140BBE0D3: mov     r8, r15
 * 0000000140BBE0D6: mov     cl, [r8]
 * 0000000140BBE0D9: add     r8, r14
 * 0000000140BBE0DC: mov     al, [rdx]
 * 0000000140BBE0DE: add     rdx, r14
 * 0000000140BBE0E1: cmp     cl, al
 * 0000000140BBE0E3: jnz     short loc_140BBE0F4
 * 0000000140BBE0E5: mov     eax, 0FFFFFFFFh
 * 0000000140BBE0EA: add     r9d, eax
 * 0000000140BBE0ED: jnz     short loc_140BBE0D6
 * 0000000140BBE0EF: jmp     loc_140BBE034
 * 0000000140BBE0F4: mov     rdx, qword ptr [rbp+8D0h+var_720+8]
 * 0000000140BBE0FB: mov     r9d, 6
 * 0000000140BBE101: mov     r8, r15
 * 0000000140BBE104: mov     cl, [r8]
 * 0000000140BBE107: add     r8, r14
 * 0000000140BBE10A: mov     al, [rdx]
 * 0000000140BBE10C: add     rdx, r14
 * 0000000140BBE10F: cmp     cl, al
 * 0000000140BBE111: jnz     short loc_140BBE122
 * 0000000140BBE113: mov     eax, 0FFFFFFFFh
 * 0000000140BBE118: add     r9d, eax
 * 0000000140BBE11B: jnz     short loc_140BBE104
 * 0000000140BBE11D: jmp     loc_140BBE034
 * 0000000140BBE122: mov     eax, [r15+24h]
 * 0000000140BBE126: xor     edx, edx
 * 0000000140BBE128: test    eax, eax
 * 0000000140BBE12A: js      loc_140BBE036
 * 0000000140BBE130: bt      eax, 1Dh
 * 0000000140BBE134: jnb     loc_140BBE036
 * 0000000140BBE13A: test    esi, esi
 * 0000000140BBE13C: jz      short loc_140BBE151
 * 0000000140BBE13E: mov     eax, [r15]
 * 0000000140BBE141: cmp     eax, 2E656461h
 * 0000000140BBE146: jz      short loc_140BBE151
 * 0000000140BBE148: cmp     eax, 45474150h
 * 0000000140BBE14D: cmovnz  r14d, edx
 * 0000000140BBE151: cmp     r13d, r10d
 * 0000000140BBE154: cmovb   r13d, r10d
 * 0000000140BBE158: mov     ebx, r13d
 * 0000000140BBE15B: add     rbx, [rbp+8D0h+var_950]
 * 0000000140BBE15F: test    byte ptr [r12+89Bh], 4
 * 0000000140BBE168: jz      short loc_140BBE1D7
 * 0000000140BBE16A: mov     ecx, 0FFFFFFFFh
 * 0000000140BBE16F: mov     eax, ecx
 * 0000000140BBE171: xbegin  $+6
 * 0000000140BBE177: cmp     eax, ecx
 * 0000000140BBE179: jnz     short loc_140BBE182
 * 0000000140BBE17B: mov     al, [rbx]
 * 0000000140BBE17D: xend
 * 0000000140BBE180: jmp     short loc_140BBE1B6
 * 0000000140BBE182: rdtsc
 * 0000000140BBE184: shl     rdx, 20h
 * 0000000140BBE188: or      rax, rdx
 * 0000000140BBE18B: mov     rcx, rax
 * 0000000140BBE18E: ror     rax, 3
 * 0000000140BBE192: xor     rcx, rax
 * 0000000140BBE195: mov     rax, 7010008004002001h
 * 0000000140BBE19F: mul     rcx
 * 0000000140BBE1A2: mov     [rbp+8D0h+var_4E0], rdx
 * 0000000140BBE1A9: xor     dl, al
 * 0000000140BBE1AB: mov     eax, 0Fh
 * 0000000140BBE1B0: test    al, dl
 * 0000000140BBE1B2: jz      short loc_140BBE1D5
 * 0000000140BBE1B4: xor     edx, edx
 * 0000000140BBE1B6: mov     r8d, 1
 * 0000000140BBE1BC: add     [r12+85Ch], r8d
 * 0000000140BBE1C4: add     dword ptr [r12+848h], 100h
 * 0000000140BBE1D0: jmp     loc_140BBE365
 * 0000000140BBE1D5: xor     edx, edx
 * 0000000140BBE1D7: test    r14d, r14d
 * 0000000140BBE1DA: jz      loc_140BBE390
 * 0000000140BBE1E0: mov     rax, [r12+450h]
 * 0000000140BBE1E8: lea     rcx, [rbp+8D0h+var_630]
 * 0000000140BBE1EF: mov     rdx, rbx
 * 0000000140BBE1F2: call    KeGuardDispatchICall
 * 0000000140BBE1F7: xor     edx, edx
 * 0000000140BBE1F9: test    eax, eax
 * 0000000140BBE1FB: jns     loc_140BBE400
 * 0000000140BBE201: cmp     eax, 0C0000005h
 * 0000000140BBE206: jnz     loc_140BBE35F
 * 0000000140BBE20C: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BBE211: mov     eax, [rcx+20h]
 * 0000000140BBE214: test    al, 4
 * 0000000140BBE216: jz      short loc_140BBE222
 * 0000000140BBE218: cmp     [r15+24h], edx
 * 0000000140BBE21C: jge     loc_140BBE35F
 * 0000000140BBE222: cmp     [r12+918h], edx
 * 0000000140BBE22A: jnz     loc_140BBE35F
 * 0000000140BBE230: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBE23A: mov     r8d, 1
 * 0000000140BBE240: add     rax, r12
 * 0000000140BBE243: mov     [r12+920h], rax
 * 0000000140BBE24B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBE255: add     rax, rcx
 * 0000000140BBE258: mov     [r12+928h], rax
 * 0000000140BBE260: movsxd  rax, dword ptr [rcx]
 * 0000000140BBE263: mov     [r12+930h], rax
 * 0000000140BBE26B: mov     [r12+938h], rbx
 * 0000000140BBE273: mov     [r12+918h], r8d
 * 0000000140BBE27B: mov     ecx, [r12+9D8h]
 * 0000000140BBE283: bt      ecx, 1Dh
 * 0000000140BBE287: jb      loc_140BBE35F
 * 0000000140BBE28D: test    dword ptr [r12+9DCh], 200000h
 * 0000000140BBE299: jz      loc_140BBE35F
 * 0000000140BBE29F: test    r8b, cl
 * 0000000140BBE2A2: jz      loc_140BBE35F
 * 0000000140BBE2A8: mov     ecx, [r12+0A74h]
 * 0000000140BBE2B0: mov     eax, [r12+804h]
 * 0000000140BBE2B8: mov     r10, [r12+838h]
 * 0000000140BBE2C0: sub     eax, ecx
 * 0000000140BBE2C2: mov     r8, [r12+0A78h]
 * 0000000140BBE2CA: lea     rdx, [rcx+r12]
 * 0000000140BBE2CE: mov     ecx, eax
 * 0000000140BBE2D0: shr     rcx, 3
 * 0000000140BBE2D4: lea     r9, [rdx+rcx*8]
 * 0000000140BBE2D8: jmp     short loc_140BBE2FB
 * 0000000140BBE2DA: xor     [rdx], r8
 * 0000000140BBE2DD: mov     rax, [rdx]
 * 0000000140BBE2E0: movzx   ecx, r8b
 * 0000000140BBE2E4: xor     rax, r10
 * 0000000140BBE2E7: and     ecx, 3Fh
 * 0000000140BBE2EA: ror     r8, cl
 * 0000000140BBE2ED: add     r8, rax
 * 0000000140BBE2F0: xor     r8, 0EFAh
 * 0000000140BBE2F7: add     rdx, 8
 * 0000000140BBE2FB: cmp     rdx, r9
 * 0000000140BBE2FE: jnz     short loc_140BBE2DA
 * 0000000140BBE300: btr     dword ptr [r12+9DCh], 15h
 * 0000000140BBE30A: cmp     r8, [r12+0A80h]
 * 0000000140BBE312: jz      short loc_140BBE35D
 * 0000000140BBE314: mov     rax, [r12+588h]
 * 0000000140BBE31C: mov     ecx, [r12+804h]
 * 0000000140BBE324: mov     [rax], r12
 * 0000000140BBE327: mov     [rax+10h], ecx
 * 0000000140BBE32A: xor     eax, eax
 * 0000000140BBE32C: mov     rcx, [r12+0A80h]
 * 0000000140BBE334: cmp     [r12+918h], eax
 * 0000000140BBE33C: jnz     short loc_140BBE34D
 * 0000000140BBE33E: mov     rax, [r12+588h]
 * 0000000140BBE346: xor     rcx, r8
 * 0000000140BBE349: mov     [rax+18h], rcx
 * 0000000140BBE34D: xor     edx, edx
 * 0000000140BBE34F: mov     r9d, 100h
 * 0000000140BBE355: mov     rcx, r12
 * 0000000140BBE358: call    sub_140BC7384
 * 0000000140BBE35D: xor     edx, edx
 * 0000000140BBE35F: mov     r11d, 1000h
 * 0000000140BBE365: mov     ebx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BBE369: add     r13d, r11d
 * 0000000140BBE36C: mov     eax, [r12+84Ch]
 * 0000000140BBE374: cmp     r13d, ebx
 * 0000000140BBE377: jnb     loc_140BBE4A9
 * 0000000140BBE37D: cmp     [r12+848h], eax
 * 0000000140BBE385: jl      loc_140BBE158
 * 0000000140BBE38B: jmp     loc_140BBE04C
 * 0000000140BBE390: mov     r8d, 0FFFh
 * 0000000140BBE396: mov     [rbp+8D0h+var_630], rdx
 * 0000000140BBE39D: mov     [rbp+8D0h+var_626], dx
 * 0000000140BBE3A4: mov     rax, rbx
 * 0000000140BBE3A7: and     rax, r8
 * 0000000140BBE3AA: mov     [rbp+8D0h+var_608], r11d
 * 0000000140BBE3B1: add     rax, 1FFFh
 * 0000000140BBE3B7: mov     rcx, rbx
 * 0000000140BBE3BA: shr     rax, 0Ch
 * 0000000140BBE3BE: add     ax, 6
 * 0000000140BBE3C2: shl     ax, 3
 * 0000000140BBE3C6: mov     [rbp+8D0h+var_628], ax
 * 0000000140BBE3CD: mov     rax, rbx
 * 0000000140BBE3D0: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140BBE3D6: mov     [rbp+8D0h+var_610], rax
 * 0000000140BBE3DD: mov     eax, ebx
 * 0000000140BBE3DF: and     eax, r8d
 * 0000000140BBE3E2: mov     [rbp+8D0h+var_604], eax
 * 0000000140BBE3E8: mov     rax, [r12+458h]
 * 0000000140BBE3F0: call    KeGuardDispatchICall
 * 0000000140BBE3F5: shr     rax, 0Ch
 * 0000000140BBE3F9: mov     [rbp+8D0h+var_600], rax
 * 0000000140BBE400: mov     eax, 1
 * 0000000140BBE405: add     [r12+860h], eax
 * 0000000140BBE40D: mov     eax, [rbp+8D0h+var_604]
 * 0000000140BBE413: add     rax, [rbp+8D0h+var_610]
 * 0000000140BBE41A: mov     [r12+0AB0h], rax
 * 0000000140BBE422: mov     rax, [rsp+9D0h+var_980]
 * 0000000140BBE427: mov     [r12+0AA8h], rax
 * 0000000140BBE42F: mov     rbx, cr8
 * 0000000140BBE433: mov     eax, 2
 * 0000000140BBE438: mov     cr8, rax
 * 0000000140BBE43C: mov     rdx, [r12+5F0h]
 * 0000000140BBE444: lea     rcx, [r12+0A88h]
 * 0000000140BBE44C: xor     r8d, r8d
 * 0000000140BBE44F: mov     edx, [rdx]
 * 0000000140BBE451: call    RtlInitMinimalBarrier
 * 0000000140BBE456: mov     ecx, [r12+814h]
 * 0000000140BBE45E: mov     rdx, r12
 * 0000000140BBE461: mov     rax, [r12+448h]
 * 0000000140BBE469: add     rcx, r12
 * 0000000140BBE46C: call    KeGuardDispatchICall
 * 0000000140BBE471: mov     r12, rax
 * 0000000140BBE474: movzx   eax, bl
 * 0000000140BBE477: mov     cr8, rax
 * 0000000140BBE47B: xor     edx, edx
 * 0000000140BBE47D: test    r14d, r14d
 * 0000000140BBE480: jz      short loc_140BBE498
 * 0000000140BBE482: mov     rax, [r12+460h]
 * 0000000140BBE48A: lea     rcx, [rbp+8D0h+var_630]
 * 0000000140BBE491: call    KeGuardDispatchICall
 * 0000000140BBE496: xor     edx, edx
 * 0000000140BBE498: add     dword ptr [r12+848h], 14000h
 * 0000000140BBE4A4: jmp     loc_140BBE35F
 * 0000000140BBE4A9: cmp     [r12+848h], eax
 * 0000000140BBE4B1: jge     loc_140BBE04C
 * 0000000140BBE4B7: jmp     loc_140BBE039
 * 0000000140BBE4BC: mov     [r12+844h], r13d
 * 0000000140BBE4C4: jmp     loc_140BB1FA1
 * 0000000140BBE4C9: cmp     [rsi+844h], r15d
 * 0000000140BBE4D0: jnz     loc_140BBE810
 * 0000000140BBE4D6: mov     r14, [r13+8]
 * 0000000140BBE4DA: mov     r8d, [r13+10h]
 * 0000000140BBE4DE: mov     r9, r14
 * 0000000140BBE4E1: add     [rsi+848h], r8d
 * 0000000140BBE4E8: mov     rax, r14
 * 0000000140BBE4EB: mov     r10d, [rsi+834h]
 * 0000000140BBE4F2: mov     r15, [rsi+838h]
 * 0000000140BBE4F9: lea     rcx, [r14+r8]
 * 0000000140BBE4FD: cmp     r14, rcx
 * 0000000140BBE500: jnb     short loc_140BBE512
 * 0000000140BBE502: mov     edx, 40h ; '@'
 * 0000000140BBE507: prefetchnta byte ptr [rax]
 * 0000000140BBE50A: add     rax, rdx
 * 0000000140BBE50D: cmp     rax, rcx
 * 0000000140BBE510: jb      short loc_140BBE507
 * 0000000140BBE512: mov     r11d, r8d
 * 0000000140BBE515: mov     rbx, r15
 * 0000000140BBE518: shr     r11d, 7
 * 0000000140BBE51C: mov     edx, 1
 * 0000000140BBE521: mov     r12d, 0FFFFFFFFh
 * 0000000140BBE527: test    r11d, r11d
 * 0000000140BBE52A: jz      short loc_140BBE591
 * 0000000140BBE52C: mov     rsi, 7010008004002001h
 * 0000000140BBE536: mov     eax, 8
 * 0000000140BBE53B: xor     rbx, [r9]
 * 0000000140BBE53E: mov     ecx, r10d
 * 0000000140BBE541: rol     rbx, cl
 * 0000000140BBE544: xor     rbx, [r9+8]
 * 0000000140BBE548: add     r9, 10h
 * 0000000140BBE54C: rol     rbx, cl
 * 0000000140BBE54F: sub     rax, rdx
 * 0000000140BBE552: jnz     short loc_140BBE53B
 * 0000000140BBE554: mov     rcx, r9
 * 0000000140BBE557: sub     rcx, r14
 * 0000000140BBE55A: xor     rcx, r15
 * 0000000140BBE55D: mov     rax, rcx
 * 0000000140BBE560: rol     rax, 11h
 * 0000000140BBE564: xor     rcx, rax
 * 0000000140BBE567: mov     rax, rsi
 * 0000000140BBE56A: mul     rcx
 * 0000000140BBE56D: xor     r10d, eax
 * 0000000140BBE570: mov     [rbp+8D0h+var_4D8], rdx
 * 0000000140BBE577: xor     r10d, edx
 * 0000000140BBE57A: mov     edx, 1
 * 0000000140BBE57F: and     r10d, 3Fh
 * 0000000140BBE583: cmovz   r10d, edx
 * 0000000140BBE587: add     r11d, r12d
 * 0000000140BBE58A: jnz     short loc_140BBE536
 * 0000000140BBE58C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBE591: and     r8d, 7Fh
 * 0000000140BBE595: cmp     r8d, 8
 * 0000000140BBE599: jb      short loc_140BBE5B8
 * 0000000140BBE59B: mov     eax, r8d
 * 0000000140BBE59E: shr     rax, 3
 * 0000000140BBE5A2: xor     rbx, [r9]
 * 0000000140BBE5A5: mov     ecx, r10d
 * 0000000140BBE5A8: rol     rbx, cl
 * 0000000140BBE5AB: add     r9, 8
 * 0000000140BBE5AF: add     r8d, 0FFFFFFF8h
 * 0000000140BBE5B3: sub     rax, rdx
 * 0000000140BBE5B6: jnz     short loc_140BBE5A2
 * 0000000140BBE5B8: xor     r15d, r15d
 * 0000000140BBE5BB: test    r8d, r8d
 * 0000000140BBE5BE: jz      short loc_140BBE5D5
 * 0000000140BBE5C0: movzx   eax, byte ptr [r9]
 * 0000000140BBE5C4: mov     ecx, r10d
 * 0000000140BBE5C7: xor     rbx, rax
 * 0000000140BBE5CA: add     r9, rdx
 * 0000000140BBE5CD: rol     rbx, cl
 * 0000000140BBE5D0: add     r8d, r12d
 * 0000000140BBE5D3: jnz     short loc_140BBE5C0
 * 0000000140BBE5D5: mov     rax, rbx
 * 0000000140BBE5D8: jmp     short loc_140BBE5DC
 * 0000000140BBE5DA: xor     ebx, eax
 * 0000000140BBE5DC: shr     rax, 1Fh
 * 0000000140BBE5E0: test    rax, rax
 * 0000000140BBE5E3: jnz     short loc_140BBE5DA
 * 0000000140BBE5E5: btr     ebx, 1Fh
 * 0000000140BBE5E9: mov     r12d, r15d
 * 0000000140BBE5EC: cmp     ebx, [r13+14h]
 * 0000000140BBE5F0: jz      loc_140BBE80C
 * 0000000140BBE5F6: cmp     [r13+0], r15d
 * 0000000140BBE5FA: jnz     short loc_140BBE604
 * 0000000140BBE5FC: cmp     [r13+18h], r15d
 * 0000000140BBE600: cmovnz  r12d, edx
 * 0000000140BBE604: mov     ecx, [r13+10h]
 * 0000000140BBE608: mov     rdx, [r13+8]
 * 0000000140BBE60C: test    rcx, rcx
 * 0000000140BBE60F: jz      loc_140BBE6CD
 * 0000000140BBE615: mov     eax, [rsi+9DCh]
 * 0000000140BBE61B: mov     r8d, 40h ; '@'
 * 0000000140BBE621: test    r8b, al
 * 0000000140BBE624: jz      loc_140BBE6CD
 * 0000000140BBE62A: mov     r15, cr8
 * 0000000140BBE62E: lea     eax, [r8-3Eh]
 * 0000000140BBE632: mov     cr8, rax
 * 0000000140BBE636: mov     r14, rdx
 * 0000000140BBE639: lea     rax, [rcx-1]
 * 0000000140BBE63D: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140BBE644: add     rax, rdx
 * 0000000140BBE647: or      rax, 0FFFh
 * 0000000140BBE64D: mov     [rbp+8D0h+var_950], rax
 * 0000000140BBE651: lea     r13, [r14-1]
 * 0000000140BBE655: mov     rax, [rsi+468h]
 * 0000000140BBE65C: xor     edx, edx
 * 0000000140BBE65E: mov     rcx, r14
 * 0000000140BBE661: call    KeGuardDispatchICall
 * 0000000140BBE666: cmp     eax, 0C000022Dh
 * 0000000140BBE66B: jnz     short loc_140BBE692
 * 0000000140BBE66D: test    r12d, r12d
 * 0000000140BBE670: jnz     short loc_140BBE6BD
 * 0000000140BBE672: lea     eax, [r12+1]
 * 0000000140BBE677: cmp     r15b, al
 * 0000000140BBE67A: ja      short loc_140BBE696
 * 0000000140BBE67C: movzx   eax, r15b
 * 0000000140BBE680: mov     cr8, rax
 * 0000000140BBE684: mov     al, [r14]
 * 0000000140BBE687: lea     eax, [r12+2]
 * 0000000140BBE68C: mov     cr8, rax
 * 0000000140BBE690: jmp     short loc_140BBE655
 * 0000000140BBE692: test    eax, eax
 * 0000000140BBE694: js      short loc_140BBE6BD
 * 0000000140BBE696: mov     r11d, 1000h
 * 0000000140BBE69C: add     r14, r11
 * 0000000140BBE69F: add     r13, r11
 * 0000000140BBE6A2: cmp     r13, [rbp+8D0h+var_950]
 * 0000000140BBE6A6: jnz     short loc_140BBE655
 * 0000000140BBE6A8: movzx   eax, r15b
 * 0000000140BBE6AC: mov     cr8, rax
 * 0000000140BBE6B0: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BBE6B5: xor     r15d, r15d
 * 0000000140BBE6B8: jmp     loc_140BBE80C
 * 0000000140BBE6BD: movzx   eax, r15b
 * 0000000140BBE6C1: mov     cr8, rax
 * 0000000140BBE6C5: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BBE6CA: xor     r15d, r15d
 * 0000000140BBE6CD: mov     eax, [r13+14h]
 * 0000000140BBE6D1: cmp     [rsi+918h], r15d
 * 0000000140BBE6D8: jnz     short loc_140BBE6EA
 * 0000000140BBE6DA: mov     ecx, ebx
 * 0000000140BBE6DC: xor     rcx, rax
 * 0000000140BBE6DF: mov     rax, [rsi+588h]
 * 0000000140BBE6E6: mov     [rax+18h], rcx
 * 0000000140BBE6EA: mov     rcx, [r13+8]
 * 0000000140BBE6EE: cmp     [rsi+918h], r15d
 * 0000000140BBE6F5: jnz     loc_140BBE80C
 * 0000000140BBE6FB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBE705: mov     ebx, 1
 * 0000000140BBE70A: add     rax, rsi
 * 0000000140BBE70D: mov     [rsi+920h], rax
 * 0000000140BBE714: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBE71E: add     rax, r13
 * 0000000140BBE721: mov     [rsi+928h], rax
 * 0000000140BBE728: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBE72C: mov     [rsi+930h], rax
 * 0000000140BBE733: mov     [rsi+938h], rcx
 * 0000000140BBE73A: mov     [rsi+918h], ebx
 * 0000000140BBE740: mov     ecx, [rsi+9D8h]
 * 0000000140BBE746: bt      ecx, 1Dh
 * 0000000140BBE74A: jb      loc_140BBE80C
 * 0000000140BBE750: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBE75A: jz      loc_140BBE80C
 * 0000000140BBE760: test    bl, cl
 * 0000000140BBE762: jz      loc_140BBE80C
 * 0000000140BBE768: mov     ecx, [rsi+0A74h]
 * 0000000140BBE76E: mov     eax, [rsi+804h]
 * 0000000140BBE774: mov     r10, [rsi+838h]
 * 0000000140BBE77B: sub     eax, ecx
 * 0000000140BBE77D: mov     r8, [rsi+0A78h]
 * 0000000140BBE784: lea     rdx, [rcx+rsi]
 * 0000000140BBE788: mov     ecx, eax
 * 0000000140BBE78A: shr     rcx, 3
 * 0000000140BBE78E: lea     r9, [rdx+rcx*8]
 * 0000000140BBE792: jmp     short loc_140BBE7B5
 * 0000000140BBE794: xor     [rdx], r8
 * 0000000140BBE797: mov     rax, [rdx]
 * 0000000140BBE79A: movzx   ecx, r8b
 * 0000000140BBE79E: xor     rax, r10
 * 0000000140BBE7A1: and     ecx, 3Fh
 * 0000000140BBE7A4: ror     r8, cl
 * 0000000140BBE7A7: add     r8, rax
 * 0000000140BBE7AA: xor     r8, 0EFAh
 * 0000000140BBE7B1: add     rdx, 8
 * 0000000140BBE7B5: cmp     rdx, r9
 * 0000000140BBE7B8: jnz     short loc_140BBE794
 * 0000000140BBE7BA: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBE7C2: cmp     r8, [rsi+0A80h]
 * 0000000140BBE7C9: jz      short loc_140BBE80C
 * 0000000140BBE7CB: mov     ecx, [rsi+804h]
 * 0000000140BBE7D1: mov     rax, [rsi+588h]
 * 0000000140BBE7D8: mov     [rax], rsi
 * 0000000140BBE7DB: mov     [rax+10h], ecx
 * 0000000140BBE7DE: mov     rcx, [rsi+0A80h]
 * 0000000140BBE7E5: cmp     [rsi+918h], r15d
 * 0000000140BBE7EC: jnz     short loc_140BBE7FC
 * 0000000140BBE7EE: mov     rax, [rsi+588h]
 * 0000000140BBE7F5: xor     rcx, r8
 * 0000000140BBE7F8: mov     [rax+18h], rcx
 * 0000000140BBE7FC: xor     edx, edx
 * 0000000140BBE7FE: mov     r9d, 100h
 * 0000000140BBE804: mov     rcx, rsi
 * 0000000140BBE807: call    sub_140BC7384
 * 0000000140BBE80C: mov     r10d, [rbp+8D0h+var_948]
 * 0000000140BBE810: mov     r9, [r13+8]
 * 0000000140BBE814: mov     r8d, [rsi+844h]
 * 0000000140BBE81B: mov     ecx, [r13+10h]
 * 0000000140BBE81F: mov     [rbp+8D0h+var_900], r9
 * 0000000140BBE823: lea     rax, [r8+r8*2]
 * 0000000140BBE827: lea     r14, [r9+rax*4]
 * 0000000140BBE82B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BBE835: mul     rcx
 * 0000000140BBE838: mov     [rbp+8D0h+var_940], r14
 * 0000000140BBE83C: shr     rdx, 3
 * 0000000140BBE840: lea     rax, [rdx+rdx*2]
 * 0000000140BBE844: lea     r12, [r9+rax*4]
 * 0000000140BBE848: mov     [rsp+9D0h+var_978], r12
 * 0000000140BBE84D: lea     r12, ds:30h[r8*4]
 * 0000000140BBE855: add     r12, r13
 * 0000000140BBE858: mov     [rsp+9D0h+var_968], r12
 * 0000000140BBE85D: cmp     r14, [rsp+9D0h+var_978]
 * 0000000140BBE862: jz      loc_140BBEFA7
 * 0000000140BBE868: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BBE86D: cmp     [r12], r15d
 * 0000000140BBE871: jl      loc_140BBEDDC
 * 0000000140BBE877: mov     eax, [r14]
 * 0000000140BBE87A: mov     ebx, [r14+4]
 * 0000000140BBE87E: mov     r15d, eax
 * 0000000140BBE881: add     r15, [r13+20h]
 * 0000000140BBE885: sub     ebx, eax
 * 0000000140BBE887: mov     [rbp+8D0h+var_950], r15
 * 0000000140BBE88B: cmp     r10d, 2Bh ; '+'
 * 0000000140BBE88F: jz      loc_140BBE9B8
 * 0000000140BBE895: add     [rsi+848h], ebx
 * 0000000140BBE89B: mov     r8, r15
 * 0000000140BBE89E: mov     r9d, [rsi+834h]
 * 0000000140BBE8A5: mov     rax, r15
 * 0000000140BBE8A8: mov     r11, [rsi+838h]
 * 0000000140BBE8AF: mov     ecx, ebx
 * 0000000140BBE8B1: add     rcx, r15
 * 0000000140BBE8B4: cmp     r15, rcx
 * 0000000140BBE8B7: jnb     short loc_140BBE8C9
 * 0000000140BBE8B9: mov     edx, 40h ; '@'
 * 0000000140BBE8BE: prefetchnta byte ptr [rax]
 * 0000000140BBE8C1: add     rax, rdx
 * 0000000140BBE8C4: cmp     rax, rcx
 * 0000000140BBE8C7: jb      short loc_140BBE8BE
 * 0000000140BBE8C9: mov     r10d, ebx
 * 0000000140BBE8CC: mov     r13, r11
 * 0000000140BBE8CF: shr     r10d, 7
 * 0000000140BBE8D3: test    r10d, r10d
 * 0000000140BBE8D6: jz      short loc_140BBE94D
 * 0000000140BBE8D8: mov     edi, 1
 * 0000000140BBE8DD: mov     rsi, 7010008004002001h
 * 0000000140BBE8E7: mov     r12d, 0FFFFFFFFh
 * 0000000140BBE8ED: mov     eax, 8
 * 0000000140BBE8F2: xor     r13, [r8]
 * 0000000140BBE8F5: mov     ecx, r9d
 * 0000000140BBE8F8: rol     r13, cl
 * 0000000140BBE8FB: xor     r13, [r8+8]
 * 0000000140BBE8FF: add     r8, 10h
 * 0000000140BBE903: rol     r13, cl
 * 0000000140BBE906: sub     rax, rdi
 * 0000000140BBE909: jnz     short loc_140BBE8F2
 * 0000000140BBE90B: mov     rcx, r8
 * 0000000140BBE90E: sub     rcx, r15
 * 0000000140BBE911: xor     rcx, r11
 * 0000000140BBE914: mov     rax, rcx
 * 0000000140BBE917: rol     rax, 11h
 * 0000000140BBE91B: xor     rcx, rax
 * 0000000140BBE91E: mov     rax, rsi
 * 0000000140BBE921: mul     rcx
 * 0000000140BBE924: xor     r9d, edx
 * 0000000140BBE927: mov     [rbp+8D0h+var_4D0], rdx
 * 0000000140BBE92E: xor     r9d, eax
 * 0000000140BBE931: and     r9d, 3Fh
 * 0000000140BBE935: cmovz   r9d, edi
 * 0000000140BBE939: add     r10d, r12d
 * 0000000140BBE93C: jnz     short loc_140BBE8ED
 * 0000000140BBE93E: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBE943: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BBE948: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BBE94D: mov     edx, ebx
 * 0000000140BBE94F: mov     r10d, 1
 * 0000000140BBE955: and     edx, 7Fh
 * 0000000140BBE958: cmp     edx, 8
 * 0000000140BBE95B: jb      short loc_140BBE978
 * 0000000140BBE95D: mov     eax, edx
 * 0000000140BBE95F: shr     rax, 3
 * 0000000140BBE963: xor     r13, [r8]
 * 0000000140BBE966: mov     ecx, r9d
 * 0000000140BBE969: rol     r13, cl
 * 0000000140BBE96C: add     r8, 8
 * 0000000140BBE970: add     edx, 0FFFFFFF8h
 * 0000000140BBE973: sub     rax, r10
 * 0000000140BBE976: jnz     short loc_140BBE963
 * 0000000140BBE978: xor     r11d, r11d
 * 0000000140BBE97B: test    edx, edx
 * 0000000140BBE97D: jz      short loc_140BBE99D
 * 0000000140BBE97F: mov     edi, 0FFFFFFFFh
 * 0000000140BBE984: movzx   eax, byte ptr [r8]
 * 0000000140BBE988: mov     ecx, r9d
 * 0000000140BBE98B: xor     r13, rax
 * 0000000140BBE98E: add     r8, r10
 * 0000000140BBE991: rol     r13, cl
 * 0000000140BBE994: add     edx, edi
 * 0000000140BBE996: jnz     short loc_140BBE984
 * 0000000140BBE998: mov     rdi, [rsp+9D0h+var_978]
 * 0000000140BBE99D: mov     rax, r13
 * 0000000140BBE9A0: jmp     short loc_140BBE9A5
 * 0000000140BBE9A2: xor     r13d, eax
 * 0000000140BBE9A5: shr     rax, 1Fh
 * 0000000140BBE9A9: test    rax, rax
 * 0000000140BBE9AC: jnz     short loc_140BBE9A2
 * 0000000140BBE9AE: btr     r13d, 1Fh
 * 0000000140BBE9B3: jmp     loc_140BBED23
 * 0000000140BBE9B8: mov     r8d, ebx
 * 0000000140BBE9BB: mov     rdx, r15
 * 0000000140BBE9BE: mov     rcx, rsi
 * 0000000140BBE9C1: call    sub_140BC7680
 * 0000000140BBE9C6: mov     r13d, eax
 * 0000000140BBE9C9: xor     r11d, r11d
 * 0000000140BBE9CC: mov     eax, [rsi+848h]
 * 0000000140BBE9D2: lea     ecx, [rax+rbx*8]
 * 0000000140BBE9D5: mov     [rsi+848h], ecx
 * 0000000140BBE9DB: test    dword ptr [rsi+9DCh], 800h
 * 0000000140BBE9E5: jz      loc_140BBED23
 * 0000000140BBE9EB: mov     al, [r15-1]
 * 0000000140BBE9EF: cmp     byte ptr [r15-6], 4Ch ; 'L'
 * 0000000140BBE9F4: jnz     loc_140BBEBF7
 * 0000000140BBE9FA: cmp     byte ptr [r15-5], 87h
 * 0000000140BBE9FF: jnz     loc_140BBEBF7
 * 0000000140BBEA05: cmp     [r15-4], r11b
 * 0000000140BBEA09: jnz     loc_140BBEBF7
 * 0000000140BBEA0F: cmp     byte ptr [r15-3], 98h
 * 0000000140BBEA14: jnz     loc_140BBEBF7
 * 0000000140BBEA1A: cmp     byte ptr [r15-2], 0C3h
 * 0000000140BBEA1F: jnz     loc_140BBEBF7
 * 0000000140BBEA25: cmp     al, 90h
 * 0000000140BBEA27: jz      short loc_140BBEA31
 * 0000000140BBEA29: cmp     al, 0F1h
 * 0000000140BBEA2B: jnz     loc_140BBEBF7
 * 0000000140BBEA31: mov     rcx, [rsi+4D8h]
 * 0000000140BBEA38: cli
 * 0000000140BBEA39: mov     eax, [rsi+9D8h]
 * 0000000140BBEA3F: shr     eax, 9
 * 0000000140BBEA42: and     eax, 1Fh
 * 0000000140BBEA45: lock bts [rcx], eax
 * 0000000140BBEA49: jnb     short loc_140BBEA50
 * 0000000140BBEA4B: sti
 * 0000000140BBEA4C: pause
 * 0000000140BBEA4E: jmp     short loc_140BBEA38
 * 0000000140BBEA50: mov     rdx, [rsi+900h]
 * 0000000140BBEA57: mov     r8d, 26h ; '&'
 * 0000000140BBEA5D: mov     ecx, 130h
 * 0000000140BBEA62: mov     rax, rdx
 * 0000000140BBEA65: lea     r9d, [r8-25h]
 * 0000000140BBEA69: mov     [rax], r11
 * 0000000140BBEA6C: add     ecx, 0FFFFFFF8h
 * 0000000140BBEA6F: add     rax, 8
 * 0000000140BBEA73: sub     r8, r9
 * 0000000140BBEA76: jnz     short loc_140BBEA69
 * 0000000140BBEA78: test    ecx, ecx
 * 0000000140BBEA7A: jz      short loc_140BBEA8D
 * 0000000140BBEA7C: mov     r8d, 0FFFFFFFFh
 * 0000000140BBEA82: mov     [rax], r11b
 * 0000000140BBEA85: add     rax, r9
 * 0000000140BBEA88: add     ecx, r8d
 * 0000000140BBEA8B: jnz     short loc_140BBEA82
 * 0000000140BBEA8D: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140BBEA94: mov     eax, 12Fh
 * 0000000140BBEA99: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140BBEA9E: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140BBEAA5: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140BBEAAA: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140BBEAB1: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140BBEAB9: mov     word ptr [rbp+8D0h+var_740], ax
 * 0000000140BBEAC0: lea     rax, [rsi+8ACh]
 * 0000000140BBEAC7: mov     [rbp+192h], rdx
 * 0000000140BBEACE: mov     rcx, rax
 * 0000000140BBEAD1: mov     [rdx+10h], ax
 * 0000000140BBEAD5: shr     rcx, 10h
 * 0000000140BBEAD9: mov     [rbp+8D0h+var_4C8], rax
 * 0000000140BBEAE0: shr     rax, 20h
 * 0000000140BBEAE4: mov     [rdx+16h], cx
 * 0000000140BBEAE8: mov     [rdx+18h], eax
 * 0000000140BBEAEB: sidt    fword ptr [rbp+8D0h+var_688]
 * 0000000140BBEAF2: lidt    fword ptr [rbp+8D0h+var_740]
 * 0000000140BBEAF9: mov     byte ptr [r15-1], 0F1h
 * 0000000140BBEAFE: mov     al, [r15-1]
 * 0000000140BBEB02: cmp     al, 0F1h
 * 0000000140BBEB04: jnz     loc_140BBEBB0
 * 0000000140BBEB0A: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BBEB14: jnz     short loc_140BBEB58
 * 0000000140BBEB16: mov     rdx, gs:20h
 * 0000000140BBEB1F: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BBEB29: mov     rax, [rsi+4B8h]
 * 0000000140BBEB30: add     rcx, rsi
 * 0000000140BBEB33: mov     [rax], rcx
 * 0000000140BBEB36: mov     rax, [rsi+4C0h]
 * 0000000140BBEB3D: mov     [rax], rdx
 * 0000000140BBEB40: mov     rax, [rsi+4C8h]
 * 0000000140BBEB47: mov     [rax], r15
 * 0000000140BBEB4A: mov     rax, [rsi+4D0h]
 * 0000000140BBEB51: mov     qword ptr [rax], 113h
 * 0000000140BBEB58: lea     rax, [r15-1]
 * 0000000140BBEB5C: call    KeGuardDispatchICall
 * 0000000140BBEB61: xor     r11d, r11d
 * 0000000140BBEB64: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140BBEB6E: jnz     short loc_140BBEBA2
 * 0000000140BBEB70: mov     rax, [rsi+4B8h]
 * 0000000140BBEB77: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140BBEB81: mov     [rax], rcx
 * 0000000140BBEB84: mov     rax, [rsi+4C0h]
 * 0000000140BBEB8B: mov     [rax], r11
 * 0000000140BBEB8E: mov     rax, [rsi+4C8h]
 * 0000000140BBEB95: mov     [rax], r11
 * 0000000140BBEB98: mov     rax, [rsi+4D0h]
 * 0000000140BBEB9F: mov     [rax], r11
 * 0000000140BBEBA2: mov     al, [r15-1]
 * 0000000140BBEBA6: mov     r9d, 1
 * 0000000140BBEBAC: cmp     al, 0F1h
 * 0000000140BBEBAE: jz      short loc_140BBEBB5
 * 0000000140BBEBB0: mov     r8d, r11d
 * 0000000140BBEBB3: jmp     short loc_140BBEBC7
 * 0000000140BBEBB5: mov     byte ptr [r15-1], 90h
 * 0000000140BBEBBA: mov     r8d, r9d
 * 0000000140BBEBBD: mov     al, [r15-1]
 * 0000000140BBEBC1: cmp     al, 90h
 * 0000000140BBEBC3: cmovnz  r8d, r11d
 * 0000000140BBEBC7: lidt    fword ptr [rbp+8D0h+var_688]
 * 0000000140BBEBCE: mov     ecx, [rsi+9D8h]
 * 0000000140BBEBD4: mov     eax, r9d
 * 0000000140BBEBD7: mov     rdx, [rsi+4D8h]
 * 0000000140BBEBDE: shr     ecx, 9
 * 0000000140BBEBE1: and     ecx, 1Fh
 * 0000000140BBEBE4: shl     eax, cl
 * 0000000140BBEBE6: not     eax
 * 0000000140BBEBE8: lock and [rdx], eax
 * 0000000140BBEBEB: sti
 * 0000000140BBEBEC: test    r8d, r8d
 * 0000000140BBEBEF: jnz     loc_140BBED23
 * 0000000140BBEBF5: jmp     short loc_140BBEBFD
 * 0000000140BBEBF7: mov     r9d, 1
 * 0000000140BBEBFD: cmp     [rsi+918h], r11d
 * 0000000140BBEC04: jnz     loc_140BBED23
 * 0000000140BBEC0A: mov     rcx, [rsp+9D0h+var_980]
 * 0000000140BBEC0F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBEC19: add     rax, rsi
 * 0000000140BBEC1C: mov     [rsi+920h], rax
 * 0000000140BBEC23: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBEC2D: add     rax, rcx
 * 0000000140BBEC30: mov     [rsi+928h], rax
 * 0000000140BBEC37: movsxd  rax, dword ptr [rcx]
 * 0000000140BBEC3A: mov     [rsi+930h], rax
 * 0000000140BBEC41: lea     rax, [r15-6]
 * 0000000140BBEC45: mov     [rsi+938h], rax
 * 0000000140BBEC4C: mov     [rsi+918h], r9d
 * 0000000140BBEC53: mov     ecx, [rsi+9D8h]
 * 0000000140BBEC59: bt      ecx, 1Dh
 * 0000000140BBEC5D: jb      loc_140BBED23
 * 0000000140BBEC63: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBEC6D: jz      loc_140BBED23
 * 0000000140BBEC73: test    r9b, cl
 * 0000000140BBEC76: jz      loc_140BBED23
 * 0000000140BBEC7C: mov     ecx, [rsi+0A74h]
 * 0000000140BBEC82: mov     eax, [rsi+804h]
 * 0000000140BBEC88: mov     r10, [rsi+838h]
 * 0000000140BBEC8F: sub     eax, ecx
 * 0000000140BBEC91: mov     r8, [rsi+0A78h]
 * 0000000140BBEC98: lea     rdx, [rcx+rsi]
 * 0000000140BBEC9C: mov     ecx, eax
 * 0000000140BBEC9E: shr     rcx, 3
 * 0000000140BBECA2: lea     r9, [rdx+rcx*8]
 * 0000000140BBECA6: jmp     short loc_140BBECC9
 * 0000000140BBECA8: xor     [rdx], r8
 * 0000000140BBECAB: mov     rax, [rdx]
 * 0000000140BBECAE: movzx   ecx, r8b
 * 0000000140BBECB2: xor     rax, r10
 * 0000000140BBECB5: and     ecx, 3Fh
 * 0000000140BBECB8: ror     r8, cl
 * 0000000140BBECBB: add     r8, rax
 * 0000000140BBECBE: xor     r8, 0EFAh
 * 0000000140BBECC5: add     rdx, 8
 * 0000000140BBECC9: cmp     rdx, r9
 * 0000000140BBECCC: jnz     short loc_140BBECA8
 * 0000000140BBECCE: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBECD6: cmp     r8, [rsi+0A80h]
 * 0000000140BBECDD: jz      short loc_140BBED23
 * 0000000140BBECDF: mov     ecx, [rsi+804h]
 * 0000000140BBECE5: mov     rax, [rsi+588h]
 * 0000000140BBECEC: mov     [rax], rsi
 * 0000000140BBECEF: mov     [rax+10h], ecx
 * 0000000140BBECF2: mov     rcx, [rsi+0A80h]
 * 0000000140BBECF9: cmp     [rsi+918h], r11d
 * 0000000140BBED00: jnz     short loc_140BBED10
 * 0000000140BBED02: mov     rax, [rsi+588h]
 * 0000000140BBED09: xor     rcx, r8
 * 0000000140BBED0C: mov     [rax+18h], rcx
 * 0000000140BBED10: xor     edx, edx
 * 0000000140BBED12: mov     r9d, 100h
 * 0000000140BBED18: mov     rcx, rsi
 * 0000000140BBED1B: call    sub_140BC7384
 * 0000000140BBED20: xor     r11d, r11d
 * 0000000140BBED23: mov     eax, [r12]
 * 0000000140BBED27: btr     eax, 1Fh
 * 0000000140BBED2B: cmp     r13d, eax
 * 0000000140BBED2E: jz      loc_140BBEDD4
 * 0000000140BBED34: mov     ecx, ebx
 * 0000000140BBED36: test    ebx, ebx
 * 0000000140BBED38: jz      loc_140BBEE52
 * 0000000140BBED3E: mov     eax, [rsi+9DCh]
 * 0000000140BBED44: mov     edx, 40h ; '@'
 * 0000000140BBED49: test    dl, al
 * 0000000140BBED4B: jz      loc_140BBEE52
 * 0000000140BBED51: mov     r14, cr8
 * 0000000140BBED55: mov     rbx, r15
 * 0000000140BBED58: lea     r12, [r15-1]
 * 0000000140BBED5C: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140BBED63: add     r12, rcx
 * 0000000140BBED66: or      r12, 0FFFh
 * 0000000140BBED6D: lea     r15, [rbx-1]
 * 0000000140BBED71: mov     eax, 2
 * 0000000140BBED76: mov     cr8, rax
 * 0000000140BBED7A: mov     rax, [rsi+468h]
 * 0000000140BBED81: xor     edx, edx
 * 0000000140BBED83: mov     rcx, rbx
 * 0000000140BBED86: call    KeGuardDispatchICall
 * 0000000140BBED8B: cmp     eax, 0C000022Dh
 * 0000000140BBED90: jnz     short loc_140BBEDA8
 * 0000000140BBED92: mov     eax, 1
 * 0000000140BBED97: cmp     r14b, al
 * 0000000140BBED9A: ja      short loc_140BBEDB3
 * 0000000140BBED9C: movzx   eax, r14b
 * 0000000140BBEDA0: mov     cr8, rax
 * 0000000140BBEDA4: mov     al, [rbx]
 * 0000000140BBEDA6: jmp     short loc_140BBED71
 * 0000000140BBEDA8: xor     r11d, r11d
 * 0000000140BBEDAB: test    eax, eax
 * 0000000140BBEDAD: js      loc_140BBEE3D
 * 0000000140BBEDB3: mov     eax, 1000h
 * 0000000140BBEDB8: add     rbx, rax
 * 0000000140BBEDBB: add     r15, rax
 * 0000000140BBEDBE: cmp     r15, r12
 * 0000000140BBEDC1: jnz     short loc_140BBED7A
 * 0000000140BBEDC3: movzx   eax, r14b
 * 0000000140BBEDC7: mov     cr8, rax
 * 0000000140BBEDCB: mov     r14, [rbp+8D0h+var_940]
 * 0000000140BBEDCF: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BBEDD4: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BBEDD9: xor     r15d, r15d
 * 0000000140BBEDDC: add     r12, 4
 * 0000000140BBEDE0: add     r14, 0Ch
 * 0000000140BBEDE4: mov     [rsp+9D0h+var_968], r12
 * 0000000140BBEDE9: mov     [rbp+8D0h+var_940], r14
 * 0000000140BBEDED: cmp     r14, rdi
 * 0000000140BBEDF0: jnb     short loc_140BBEE08
 * 0000000140BBEDF2: mov     eax, [rsi+84Ch]
 * 0000000140BBEDF8: mov     r10d, [rbp+8D0h+var_948]
 * 0000000140BBEDFC: cmp     [rsi+848h], eax
 * 0000000140BBEE02: jl      loc_140BBE86D
 * 0000000140BBEE08: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BBEE0F: cmp     r14, [rsp+9D0h+var_978]
 * 0000000140BBEE14: jz      loc_140BBEFA7
 * 0000000140BBEE1A: sub     r14, [rbp+8D0h+var_900]
 * 0000000140BBEE1E: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140BBEE28: imul    r14
 * 0000000140BBEE2B: sar     rdx, 1
 * 0000000140BBEE2E: mov     rax, rdx
 * 0000000140BBEE31: shr     rax, 3Fh
 * 0000000140BBEE35: add     rdx, rax
 * 0000000140BBEE38: jmp     loc_140BBF1C2
 * 0000000140BBEE3D: movzx   eax, r14b
 * 0000000140BBEE41: mov     cr8, rax
 * 0000000140BBEE45: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BBEE49: mov     r14, [rbp+8D0h+var_940]
 * 0000000140BBEE4D: mov     r12, [rsp+9D0h+var_968]
 * 0000000140BBEE52: mov     eax, [r12]
 * 0000000140BBEE56: btr     eax, 1Fh
 * 0000000140BBEE5A: cmp     [rsi+918h], r11d
 * 0000000140BBEE61: jnz     loc_140BBEDD4
 * 0000000140BBEE67: mov     ecx, r13d
 * 0000000140BBEE6A: xor     rcx, rax
 * 0000000140BBEE6D: mov     rax, [rsi+588h]
 * 0000000140BBEE74: mov     [rax+18h], rcx
 * 0000000140BBEE78: cmp     [rsi+918h], r11d
 * 0000000140BBEE7F: jnz     loc_140BBEDD4
 * 0000000140BBEE85: mov     r13, [rsp+9D0h+var_980]
 * 0000000140BBEE8A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBEE94: add     rax, rsi
 * 0000000140BBEE97: mov     ebx, 1
 * 0000000140BBEE9C: mov     [rsi+920h], rax
 * 0000000140BBEEA3: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBEEAD: add     rax, r13
 * 0000000140BBEEB0: mov     [rsi+928h], rax
 * 0000000140BBEEB7: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBEEBB: mov     [rsi+930h], rax
 * 0000000140BBEEC2: mov     [rsi+938h], r15
 * 0000000140BBEEC9: mov     [rsi+918h], ebx
 * 0000000140BBEECF: mov     ecx, [rsi+9D8h]
 * 0000000140BBEED5: bt      ecx, 1Dh
 * 0000000140BBEED9: jb      loc_140BBEDD9
 * 0000000140BBEEDF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBEEE9: jz      loc_140BBEDD9
 * 0000000140BBEEEF: test    bl, cl
 * 0000000140BBEEF1: jz      loc_140BBEDD9
 * 0000000140BBEEF7: mov     ecx, [rsi+0A74h]
 * 0000000140BBEEFD: mov     eax, [rsi+804h]
 * 0000000140BBEF03: mov     r10, [rsi+838h]
 * 0000000140BBEF0A: sub     eax, ecx
 * 0000000140BBEF0C: mov     r8, [rsi+0A78h]
 * 0000000140BBEF13: lea     rdx, [rcx+rsi]
 * 0000000140BBEF17: mov     ecx, eax
 * 0000000140BBEF19: shr     rcx, 3
 * 0000000140BBEF1D: lea     r9, [rdx+rcx*8]
 * 0000000140BBEF21: jmp     short loc_140BBEF44
 * 0000000140BBEF23: xor     [rdx], r8
 * 0000000140BBEF26: mov     rax, [rdx]
 * 0000000140BBEF29: movzx   ecx, r8b
 * 0000000140BBEF2D: xor     rax, r10
 * 0000000140BBEF30: and     ecx, 3Fh
 * 0000000140BBEF33: ror     r8, cl
 * 0000000140BBEF36: add     r8, rax
 * 0000000140BBEF39: xor     r8, 0EFAh
 * 0000000140BBEF40: add     rdx, 8
 * 0000000140BBEF44: cmp     rdx, r9
 * 0000000140BBEF47: jnz     short loc_140BBEF23
 * 0000000140BBEF49: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBEF51: cmp     r8, [rsi+0A80h]
 * 0000000140BBEF58: jz      loc_140BBEDD9
 * 0000000140BBEF5E: mov     ecx, [rsi+804h]
 * 0000000140BBEF64: xor     r15d, r15d
 * 0000000140BBEF67: mov     rax, [rsi+588h]
 * 0000000140BBEF6E: mov     [rax], rsi
 * 0000000140BBEF71: mov     [rax+10h], ecx
 * 0000000140BBEF74: mov     rcx, [rsi+0A80h]
 * 0000000140BBEF7B: cmp     [rsi+918h], r15d
 * 0000000140BBEF82: jnz     short loc_140BBEF92
 * 0000000140BBEF84: mov     rax, [rsi+588h]
 * 0000000140BBEF8B: xor     rcx, r8
 * 0000000140BBEF8E: mov     [rax+18h], rcx
 * 0000000140BBEF92: xor     edx, edx
 * 0000000140BBEF94: mov     r9d, 100h
 * 0000000140BBEF9A: mov     rcx, rsi
 * 0000000140BBEF9D: call    sub_140BC7384
 * 0000000140BBEFA2: jmp     loc_140BBEDDC
 * 0000000140BBEFA7: mov     rcx, [rsi+538h]
 * 0000000140BBEFAE: mov     rbx, cr8
 * 0000000140BBEFB2: mov     eax, 0Fh
 * 0000000140BBEFB7: mov     cr8, rax
 * 0000000140BBEFBB: mov     rax, [rsi+160h]
 * 0000000140BBEFC2: call    KeGuardDispatchICall
 * 0000000140BBEFC7: mov     rax, [rsi+620h]
 * 0000000140BBEFCE: mov     rcx, [rax]
 * 0000000140BBEFD1: mov     eax, [rcx]
 * 0000000140BBEFD3: lea     r15, [rcx+10h]
 * 0000000140BBEFD7: mov     r14b, [rcx+0Ch]
 * 0000000140BBEFDB: lea     rcx, [rax+rax*2]
 * 0000000140BBEFDF: lea     r12, [r15+rcx*8]
 * 0000000140BBEFE3: mov     edx, 18h
 * 0000000140BBEFE8: lea     r8, [r13+18h]
 * 0000000140BBEFEC: mov     r9, r15
 * 0000000140BBEFEF: mov     rcx, [r9]
 * 0000000140BBEFF2: add     r9, 8
 * 0000000140BBEFF6: mov     rax, [r8]
 * 0000000140BBEFF9: add     r8, 8
 * 0000000140BBEFFD: cmp     rcx, rax
 * 0000000140BBF000: jnz     short loc_140BBF02F
 * 0000000140BBF002: add     edx, 0FFFFFFF8h
 * 0000000140BBF005: cmp     edx, 8
 * 0000000140BBF008: jnb     short loc_140BBEFEF
 * 0000000140BBF00A: test    edx, edx
 * 0000000140BBF00C: jz      short loc_140BBF038
 * 0000000140BBF00E: mov     r11d, 1
 * 0000000140BBF014: mov     cl, [r9]
 * 0000000140BBF017: add     r9, r11
 * 0000000140BBF01A: mov     al, [r8]
 * 0000000140BBF01D: add     r8, r11
 * 0000000140BBF020: cmp     cl, al
 * 0000000140BBF022: jnz     short loc_140BBF02F
 * 0000000140BBF024: mov     eax, 0FFFFFFFFh
 * 0000000140BBF029: add     edx, eax
 * 0000000140BBF02B: jnz     short loc_140BBF014
 * 0000000140BBF02D: jmp     short loc_140BBF038
 * 0000000140BBF02F: add     r15, 18h
 * 0000000140BBF033: cmp     r15, r12
 * 0000000140BBF036: jb      short loc_140BBEFE3
 * 0000000140BBF038: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBF03D: mov     rcx, [rsi+538h]
 * 0000000140BBF044: mov     rax, [rsi+1A0h]
 * 0000000140BBF04B: call    KeGuardDispatchICall
 * 0000000140BBF050: movzx   eax, bl
 * 0000000140BBF053: mov     cr8, rax
 * 0000000140BBF057: xor     r11d, r11d
 * 0000000140BBF05A: test    r14b, r14b
 * 0000000140BBF05D: jz      loc_140BBF1D2
 * 0000000140BBF063: mov     eax, [rsi+9DCh]
 * 0000000140BBF069: lea     ecx, [r11+10h]
 * 0000000140BBF06D: test    cl, al
 * 0000000140BBF06F: jz      loc_140BBF1B1
 * 0000000140BBF075: cmp     [rsi+918h], r11d
 * 0000000140BBF07C: jnz     loc_140BBF1B1
 * 0000000140BBF082: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBF08C: add     rax, rsi
 * 0000000140BBF08F: mov     [rsi+920h], rax
 * 0000000140BBF096: test    r13, r13
 * 0000000140BBF099: jz      short loc_140BBF0AA
 * 0000000140BBF09B: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140BBF0A5: add     rcx, r13
 * 0000000140BBF0A8: jmp     short loc_140BBF0AD
 * 0000000140BBF0AA: mov     rcx, r11
 * 0000000140BBF0AD: mov     [rsi+928h], rcx
 * 0000000140BBF0B4: mov     rcx, rsi
 * 0000000140BBF0B7: mov     edx, 930h
 * 0000000140BBF0BC: test    r13, r13
 * 0000000140BBF0BF: jz      short loc_140BBF0C7
 * 0000000140BBF0C1: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBF0C5: jmp     short loc_140BBF0CA
 * 0000000140BBF0C7: mov     rax, r11
 * 0000000140BBF0CA: mov     [rdx+rcx], rax
 * 0000000140BBF0CE: mov     ebx, 1
 * 0000000140BBF0D3: mov     [rsi+938h], rbx
 * 0000000140BBF0DA: mov     [rsi+918h], ebx
 * 0000000140BBF0E0: mov     ecx, [rsi+9D8h]
 * 0000000140BBF0E6: bt      ecx, 1Dh
 * 0000000140BBF0EA: jb      loc_140BBF1B6
 * 0000000140BBF0F0: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBF0FA: jz      loc_140BBF1B6
 * 0000000140BBF100: test    bl, cl
 * 0000000140BBF102: jz      loc_140BBF1B6
 * 0000000140BBF108: mov     ecx, [rsi+0A74h]
 * 0000000140BBF10E: mov     eax, [rsi+804h]
 * 0000000140BBF114: mov     r10, [rsi+838h]
 * 0000000140BBF11B: sub     eax, ecx
 * 0000000140BBF11D: mov     r8, [rsi+0A78h]
 * 0000000140BBF124: lea     rdx, [rcx+rsi]
 * 0000000140BBF128: mov     ecx, eax
 * 0000000140BBF12A: shr     rcx, 3
 * 0000000140BBF12E: lea     r9, [rdx+rcx*8]
 * 0000000140BBF132: jmp     short loc_140BBF155
 * 0000000140BBF134: xor     [rdx], r8
 * 0000000140BBF137: mov     rax, [rdx]
 * 0000000140BBF13A: movzx   ecx, r8b
 * 0000000140BBF13E: xor     rax, r10
 * 0000000140BBF141: and     ecx, 3Fh
 * 0000000140BBF144: ror     r8, cl
 * 0000000140BBF147: add     r8, rax
 * 0000000140BBF14A: xor     r8, 0EFAh
 * 0000000140BBF151: add     rdx, 8
 * 0000000140BBF155: cmp     rdx, r9
 * 0000000140BBF158: jnz     short loc_140BBF134
 * 0000000140BBF15A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBF162: cmp     r8, [rsi+0A80h]
 * 0000000140BBF169: jz      short loc_140BBF1B6
 * 0000000140BBF16B: mov     ecx, [rsi+804h]
 * 0000000140BBF171: mov     rax, [rsi+588h]
 * 0000000140BBF178: mov     [rax], rsi
 * 0000000140BBF17B: mov     [rax+10h], ecx
 * 0000000140BBF17E: mov     rcx, [rsi+0A80h]
 * 0000000140BBF185: cmp     [rsi+918h], r11d
 * 0000000140BBF18C: jnz     short loc_140BBF19C
 * 0000000140BBF18E: mov     rax, [rsi+588h]
 * 0000000140BBF195: xor     rcx, r8
 * 0000000140BBF198: mov     [rax+18h], rcx
 * 0000000140BBF19C: xor     edx, edx
 * 0000000140BBF19E: mov     r9d, 100h
 * 0000000140BBF1A4: mov     rcx, rsi
 * 0000000140BBF1A7: call    sub_140BC7384
 * 0000000140BBF1AC: xor     r11d, r11d
 * 0000000140BBF1AF: jmp     short loc_140BBF1B6
 * 0000000140BBF1B1: mov     ebx, 1
 * 0000000140BBF1B6: cmp     [r13+18h], rbx
 * 0000000140BBF1BA: jnz     short loc_140BBF1D7
 * 0000000140BBF1BC: xor     r15d, r15d
 * 0000000140BBF1BF: mov     edx, r15d
 * 0000000140BBF1C2: mov     ecx, 844h
 * 0000000140BBF1C7: mov     rax, rsi
 * 0000000140BBF1CA: mov     [rcx+rax], edx
 * 0000000140BBF1CD: jmp     loc_140BB2B58
 * 0000000140BBF1D2: mov     ebx, 1
 * 0000000140BBF1D7: cmp     r15, r12
 * 0000000140BBF1DA: jnz     short loc_140BBF1BC
 * 0000000140BBF1DC: cmp     [rsi+918h], r11d
 * 0000000140BBF1E3: jnz     short loc_140BBF1BC
 * 0000000140BBF1E5: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBF1EF: add     rax, rsi
 * 0000000140BBF1F2: mov     [rsi+920h], rax
 * 0000000140BBF1F9: test    r13, r13
 * 0000000140BBF1FC: jz      short loc_140BBF20D
 * 0000000140BBF1FE: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140BBF208: add     rcx, r13
 * 0000000140BBF20B: jmp     short loc_140BBF210
 * 0000000140BBF20D: mov     rcx, r11
 * 0000000140BBF210: mov     [rsi+928h], rcx
 * 0000000140BBF217: mov     rcx, rsi
 * 0000000140BBF21A: mov     edx, 930h
 * 0000000140BBF21F: test    r13, r13
 * 0000000140BBF222: jz      short loc_140BBF22A
 * 0000000140BBF224: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBF228: jmp     short loc_140BBF22D
 * 0000000140BBF22A: mov     rax, r11
 * 0000000140BBF22D: mov     [rcx+rdx], rax
 * 0000000140BBF231: mov     [rsi+938h], r15
 * 0000000140BBF238: mov     [rsi+918h], ebx
 * 0000000140BBF23E: mov     ecx, [rsi+9D8h]
 * 0000000140BBF244: bt      ecx, 1Dh
 * 0000000140BBF248: jb      loc_140BBF1BC
 * 0000000140BBF24E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBF258: jz      loc_140BBF1BC
 * 0000000140BBF25E: test    bl, cl
 * 0000000140BBF260: jz      loc_140BBF1BC
 * 0000000140BBF266: mov     ecx, [rsi+0A74h]
 * 0000000140BBF26C: mov     eax, [rsi+804h]
 * 0000000140BBF272: mov     r10, [rsi+838h]
 * 0000000140BBF279: sub     eax, ecx
 * 0000000140BBF27B: mov     r8, [rsi+0A78h]
 * 0000000140BBF282: lea     rdx, [rcx+rsi]
 * 0000000140BBF286: mov     ecx, eax
 * 0000000140BBF288: shr     rcx, 3
 * 0000000140BBF28C: lea     r9, [rdx+rcx*8]
 * 0000000140BBF290: jmp     short loc_140BBF2B3
 * 0000000140BBF292: xor     [rdx], r8
 * 0000000140BBF295: mov     rax, [rdx]
 * 0000000140BBF298: movzx   ecx, r8b
 * 0000000140BBF29C: xor     rax, r10
 * 0000000140BBF29F: and     ecx, 3Fh
 * 0000000140BBF2A2: ror     r8, cl
 * 0000000140BBF2A5: add     r8, rax
 * 0000000140BBF2A8: xor     r8, 0EFAh
 * 0000000140BBF2AF: add     rdx, 8
 * 0000000140BBF2B3: cmp     rdx, r9
 * 0000000140BBF2B6: jnz     short loc_140BBF292
 * 0000000140BBF2B8: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBF2C0: xor     r15d, r15d
 * 0000000140BBF2C3: cmp     r8, [rsi+0A80h]
 * 0000000140BBF2CA: jz      loc_140BBF1BF
 * 0000000140BBF2D0: mov     ecx, [rsi+804h]
 * 0000000140BBF2D6: mov     rax, [rsi+588h]
 * 0000000140BBF2DD: mov     [rax], rsi
 * 0000000140BBF2E0: mov     [rax+10h], ecx
 * 0000000140BBF2E3: mov     rcx, [rsi+0A80h]
 * 0000000140BBF2EA: cmp     [rsi+918h], r15d
 * 0000000140BBF2F1: jnz     short loc_140BBF301
 * 0000000140BBF2F3: mov     rax, [rsi+588h]
 * 0000000140BBF2FA: xor     rcx, r8
 * 0000000140BBF2FD: mov     [rax+18h], rcx
 * 0000000140BBF301: xor     edx, edx
 * 0000000140BBF303: mov     r9d, 100h
 * 0000000140BBF309: mov     rcx, rsi
 * 0000000140BBF30C: call    sub_140BC7384
 * 0000000140BBF311: jmp     loc_140BBF1BF
 * 0000000140BBF316: mov     edx, 0FFFFFFFFh
 * 0000000140BBF31B: and     r9d, 7Fh
 * 0000000140BBF31F: mov     ebx, 1
 * 0000000140BBF324: cmp     r9d, 8
 * 0000000140BBF328: jb      short loc_140BBF347
 * 0000000140BBF32A: mov     eax, r9d
 * 0000000140BBF32D: shr     rax, 3
 * 0000000140BBF331: xor     r8, [r10]
 * 0000000140BBF334: mov     ecx, r14d
 * 0000000140BBF337: rol     r8, cl
 * 0000000140BBF33A: add     r10, 8
 * 0000000140BBF33E: add     r9d, 0FFFFFFF8h
 * 0000000140BBF342: sub     rax, rbx
 * 0000000140BBF345: jnz     short loc_140BBF331
 * 0000000140BBF347: xor     r15d, r15d
 * 0000000140BBF34A: test    r9d, r9d
 * 0000000140BBF34D: jz      short loc_140BBF364
 * 0000000140BBF34F: movzx   eax, byte ptr [r10]
 * 0000000140BBF353: mov     ecx, r14d
 * 0000000140BBF356: xor     r8, rax
 * 0000000140BBF359: add     r10, rbx
 * 0000000140BBF35C: rol     r8, cl
 * 0000000140BBF35F: add     r9d, edx
 * 0000000140BBF362: jnz     short loc_140BBF34F
 * 0000000140BBF364: mov     rcx, [r13+18h]
 * 0000000140BBF368: cmp     r8, rcx
 * 0000000140BBF36B: jz      loc_140BBD398
 * 0000000140BBF371: cmp     [rsi+918h], r15d
 * 0000000140BBF378: jnz     short loc_140BBF388
 * 0000000140BBF37A: mov     rax, [rsi+588h]
 * 0000000140BBF381: xor     rcx, r8
 * 0000000140BBF384: mov     [rax+18h], rcx
 * 0000000140BBF388: mov     ecx, [r13+20h]
 * 0000000140BBF38C: add     rcx, rsi
 * 0000000140BBF38F: cmp     [rsi+918h], r15d
 * 0000000140BBF396: jnz     loc_140BBD398
 * 0000000140BBF39C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BBF3A6: add     rax, rsi
 * 0000000140BBF3A9: mov     [rsi+920h], rax
 * 0000000140BBF3B0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BBF3BA: add     rax, r13
 * 0000000140BBF3BD: mov     [rsi+928h], rax
 * 0000000140BBF3C4: movsxd  rax, dword ptr [r13+0]
 * 0000000140BBF3C8: mov     [rsi+930h], rax
 * 0000000140BBF3CF: mov     [rsi+938h], rcx
 * 0000000140BBF3D6: mov     [rsi+918h], ebx
 * 0000000140BBF3DC: mov     ecx, [rsi+9D8h]
 * 0000000140BBF3E2: bt      ecx, 1Dh
 * 0000000140BBF3E6: jb      loc_140BBD398
 * 0000000140BBF3EC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBF3F6: jz      loc_140BBD398
 * 0000000140BBF3FC: test    bl, cl
 * 0000000140BBF3FE: jz      loc_140BBD398
 * 0000000140BBF404: mov     ecx, [rsi+0A74h]
 * 0000000140BBF40A: mov     eax, [rsi+804h]
 * 0000000140BBF410: mov     r10, [rsi+838h]
 * 0000000140BBF417: sub     eax, ecx
 * 0000000140BBF419: mov     r8, [rsi+0A78h]
 * 0000000140BBF420: lea     rdx, [rcx+rsi]
 * 0000000140BBF424: mov     ecx, eax
 * 0000000140BBF426: shr     rcx, 3
 * 0000000140BBF42A: lea     r9, [rdx+rcx*8]
 * 0000000140BBF42E: jmp     short loc_140BBF451
 * 0000000140BBF430: xor     [rdx], r8
 * 0000000140BBF433: mov     rax, [rdx]
 * 0000000140BBF436: movzx   ecx, r8b
 * 0000000140BBF43A: xor     rax, r10
 * 0000000140BBF43D: and     ecx, 3Fh
 * 0000000140BBF440: ror     r8, cl
 * 0000000140BBF443: add     r8, rax
 * 0000000140BBF446: xor     r8, 0EFAh
 * 0000000140BBF44D: add     rdx, 8
 * 0000000140BBF451: cmp     rdx, r9
 * 0000000140BBF454: jnz     short loc_140BBF430
 * 0000000140BBF456: jmp     loc_140BB8D6B
 * 0000000140BBF45B: mov     r11d, 1000h
 * 0000000140BBF461: jmp     loc_140BB1FA4
 * 0000000140BBF466: mov     [rsi+840h], ecx
 * 0000000140BBF46C: cmp     [rbp+8D0h+var_8E0], r15d
 * 0000000140BBF470: jz      short loc_140BBF4E1
 * 0000000140BBF472: mov     rcx, gs:20h
 * 0000000140BBF47B: mov     rax, [rsi+658h]
 * 0000000140BBF482: mov     rdx, [rax+rcx]
 * 0000000140BBF486: lea     rcx, [rbp+8D0h+var_260]
 * 0000000140BBF48D: mov     rax, [rsi+698h]
 * 0000000140BBF494: add     rdx, [rsi+6B8h]
 * 0000000140BBF49B: mov     rbx, [rdx+rax]
 * 0000000140BBF49F: mov     rax, [rsi+1A8h]
 * 0000000140BBF4A6: call    KeGuardDispatchICall
 * 0000000140BBF4AB: mov     rax, [rsi+440h]
 * 0000000140BBF4B2: lea     rcx, [rbp+8D0h+var_78]
 * 0000000140BBF4B9: call    KeGuardDispatchICall
 * 0000000140BBF4BE: mov     rax, [rsi+3A8h]
 * 0000000140BBF4C5: mov     rcx, rbx
 * 0000000140BBF4C8: call    KeGuardDispatchICall
 * 0000000140BBF4CD: mov     rax, [rsi+3B8h]
 * 0000000140BBF4D4: mov     rcx, rbx
 * 0000000140BBF4D7: call    KeGuardDispatchICall
 * 0000000140BBF4DC: mov     ebx, 1
 * 0000000140BBF4E1: mov     eax, [rsi+9D8h]
 * 0000000140BBF4E7: mov     ecx, 400004h
 * 0000000140BBF4EC: and     eax, ecx
 * 0000000140BBF4EE: cmp     eax, ecx
 * 0000000140BBF4F0: jnz     loc_140BBF98F
 * 0000000140BBF4F6: mov     r10, [rsi+0AB8h]
 * 0000000140BBF4FD: mov     ecx, 2
 * 0000000140BBF502: mov     eax, [rsi+9DCh]
 * 0000000140BBF508: mov     r14d, [rsi+804h]
 * 0000000140BBF50F: mov     r11, [rsi+0A40h]
 * 0000000140BBF516: mov     r12d, [rsi+828h]
 * 0000000140BBF51D: mov     [rbp+8D0h+arg_8], r10
 * 0000000140BBF524: test    cl, al
 * 0000000140BBF526: jz      short loc_140BBF52F
 * 0000000140BBF528: mov     r11, [rsi+5D0h]
 * 0000000140BBF52F: mov     rax, [rsi+2C8h]
 * 0000000140BBF536: mov     r9, [rsi+170h]
 * 0000000140BBF53D: mov     [rbp+8D0h+var_8D8], rax
 * 0000000140BBF541: mov     rax, [rsi+340h]
 * 0000000140BBF548: mov     [rbp+8D0h+var_8F0], rax
 * 0000000140BBF54C: mov     [rbp+8D0h+var_950], r9
 * 0000000140BBF550: rdtsc
 * 0000000140BBF552: shl     rdx, 20h
 * 0000000140BBF556: mov     r13, 7010008004002001h
 * 0000000140BBF560: or      rax, rdx
 * 0000000140BBF563: mov     r8, rdi
 * 0000000140BBF566: mov     rcx, rax
 * 0000000140BBF569: ror     rax, 3
 * 0000000140BBF56D: xor     rcx, rax
 * 0000000140BBF570: mov     rax, r13
 * 0000000140BBF573: mul     rcx
 * 0000000140BBF576: mov     rcx, rdx
 * 0000000140BBF579: mov     [rbp+8D0h+var_4B8], rdx
 * 0000000140BBF580: xor     rcx, rax
 * 0000000140BBF583: mov     rax, 0ABCC77118461CEFDh
 * 0000000140BBF58D: mul     rcx
 * 0000000140BBF590: shr     rdx, 1Ah
 * 0000000140BBF594: imul    rax, rdx, 5F5E100h
 * 0000000140BBF59B: sub     rcx, rax
 * 0000000140BBF59E: sub     r8, rcx
 * 0000000140BBF5A1: mov     [rbp+8D0h+var_850], r8
 * 0000000140BBF5A8: test    dword ptr [rsi+9D8h], 2000000h
 * 0000000140BBF5B2: jz      loc_140BBF652
 * 0000000140BBF5B8: rdtsc
 * 0000000140BBF5BA: shl     rdx, 20h
 * 0000000140BBF5BE: or      rax, rdx
 * 0000000140BBF5C1: mov     rcx, rax
 * 0000000140BBF5C4: ror     rax, 3
 * 0000000140BBF5C8: xor     rcx, rax
 * 0000000140BBF5CB: mov     rax, r13
 * 0000000140BBF5CE: mul     rcx
 * 0000000140BBF5D1: mov     rcx, rdx
 * 0000000140BBF5D4: mov     [rbp+8D0h+var_4B0], rdx
 * 0000000140BBF5DB: xor     rcx, rax
 * 0000000140BBF5DE: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BBF5E8: mul     rcx
 * 0000000140BBF5EB: shr     rdx, 3
 * 0000000140BBF5EF: lea     rax, [rdx+rdx*4]
 * 0000000140BBF5F3: add     rax, rax
 * 0000000140BBF5F6: sub     rcx, rax
 * 0000000140BBF5F9: mov     eax, 2
 * 0000000140BBF5FE: cmp     rcx, rax
 * 0000000140BBF601: jnb     short loc_140BBF652
 * 0000000140BBF603: rdtsc
 * 0000000140BBF605: shl     rdx, 20h
 * 0000000140BBF609: or      rax, rdx
 * 0000000140BBF60C: mov     rcx, rax
 * 0000000140BBF60F: ror     rax, 3
 * 0000000140BBF613: xor     rcx, rax
 * 0000000140BBF616: mov     rax, r13
 * 0000000140BBF619: mul     rcx
 * 0000000140BBF61C: mov     rcx, rdx
 * 0000000140BBF61F: mov     [rbp+8D0h+var_4A8], rdx
 * 0000000140BBF626: xor     rcx, rax
 * 0000000140BBF629: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BBF633: mul     rcx
 * 0000000140BBF636: shr     rdx, 3
 * 0000000140BBF63A: lea     rax, [rdx+rdx*4]
 * 0000000140BBF63E: add     rax, rax
 * 0000000140BBF641: sub     rcx, rax
 * 0000000140BBF644: add     rcx, rbx
 * 0000000140BBF647: imul    rcx, r8
 * 0000000140BBF64B: mov     [rbp+8D0h+var_850], rcx
 * 0000000140BBF652: mov     eax, [rsi+9D8h]
 * 0000000140BBF658: mov     r8d, 1
 * 0000000140BBF65E: test    r8b, al
 * 0000000140BBF661: mov     rbx, r15
 * 0000000140BBF664: cmovz   r14d, r12d
 * 0000000140BBF668: lea     ecx, [r8+3Fh]
 * 0000000140BBF66C: test    cl, al
 * 0000000140BBF66E: jnz     short loc_140BBF67B
 * 0000000140BBF670: xor     r8d, r8d
 * 0000000140BBF673: mov     r13d, r8d
 * 0000000140BBF676: jmp     loc_140BBF74E
 * 0000000140BBF67B: mov     r13d, r8d
 * 0000000140BBF67E: rdtsc
 * 0000000140BBF680: shl     rdx, 20h
 * 0000000140BBF684: mov     r15, rsi
 * 0000000140BBF687: or      rax, rdx
 * 0000000140BBF68A: mov     rcx, rax
 * 0000000140BBF68D: ror     rax, 3
 * 0000000140BBF691: xor     rcx, rax
 * 0000000140BBF694: mov     rax, 7010008004002001h
 * 0000000140BBF69E: mul     rcx
 * 0000000140BBF6A1: mov     ecx, 15Dh
 * 0000000140BBF6A6: mov     rbx, rdx
 * 0000000140BBF6A9: mov     [rbp+8D0h+var_4A0], rdx
 * 0000000140BBF6B0: xor     rbx, rax
 * 0000000140BBF6B3: lea     rax, [rsi+0AE0h]
 * 0000000140BBF6BA: mov     r9, rbx
 * 0000000140BBF6BD: xor     r15, rbx
 * 0000000140BBF6C0: xor     [rax], r9
 * 0000000140BBF6C3: lea     rax, [rax-8]
 * 0000000140BBF6C7: ror     r9, cl
 * 0000000140BBF6CA: sub     ecx, r8d
 * 0000000140BBF6CD: jnz     short loc_140BBF6C0
 * 0000000140BBF6CF: lea     r8, [r12-0AE8h]
 * 0000000140BBF6D7: shr     r8, 3
 * 0000000140BBF6DB: test    r8d, r8d
 * 0000000140BBF6DE: jz      short loc_140BBF720
 * 0000000140BBF6E0: movsxd  r10, r8d
 * 0000000140BBF6E3: add     rsi, 0AE0h
 * 0000000140BBF6EA: mov     rdi, r13
 * 0000000140BBF6ED: lea     r10, [rsi+r10*8]
 * 0000000140BBF6F1: mov     rdx, [r10]
 * 0000000140BBF6F4: lea     rax, [r15+r15]
 * 0000000140BBF6F8: mov     ecx, r8d
 * 0000000140BBF6FB: lea     r10, [r10-8]
 * 0000000140BBF6FF: ror     rdx, cl
 * 0000000140BBF702: mov     r15, rdx
 * 0000000140BBF705: xor     r15, rax
 * 0000000140BBF708: sub     r8d, edi
 * 0000000140BBF70B: jnz     short loc_140BBF6F1
 * 0000000140BBF70D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBF712: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BBF719: mov     r10, [rbp+8D0h+arg_8]
 * 0000000140BBF720: mov     ecx, r14d
 * 0000000140BBF723: lea     rdx, [rsi+r12]
 * 0000000140BBF727: sub     ecx, r12d
 * 0000000140BBF72A: shr     ecx, 3
 * 0000000140BBF72D: test    ecx, ecx
 * 0000000140BBF72F: jz      short loc_140BBF74A
 * 0000000140BBF731: lea     rdx, [rdx+rcx*8]
 * 0000000140BBF735: mov     rax, r13
 * 0000000140BBF738: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140BBF73C: xor     [rdx], r9
 * 0000000140BBF73F: lea     rdx, [rdx-8]
 * 0000000140BBF743: ror     r9, cl
 * 0000000140BBF746: sub     ecx, eax
 * 0000000140BBF748: jnz     short loc_140BBF73C
 * 0000000140BBF74A: mov     r9, [rbp+8D0h+var_950]
 * 0000000140BBF74E: test    r10, r10
 * 0000000140BBF751: jz      short loc_140BBF770
 * 0000000140BBF753: mov     rax, [rbp+8D0h+var_8F0]
 * 0000000140BBF757: lea     r8, [rbp+8D0h+var_850]
 * 0000000140BBF75E: mov     edx, r14d
 * 0000000140BBF761: mov     [rsp+9D0h+BugCheckParameter4], r10
 * 0000000140BBF766: mov     rcx, rsi
 * 0000000140BBF769: call    KeGuardDispatchICall
 * 0000000140BBF76E: jmp     short loc_140BBF7A8
 * 0000000140BBF770: xor     edx, edx
 * 0000000140BBF772: test    r11, r11
 * 0000000140BBF775: jnz     short loc_140BBF78A
 * 0000000140BBF777: lea     r8, [rbp+8D0h+var_850]
 * 0000000140BBF77E: xor     ecx, ecx
 * 0000000140BBF780: mov     rax, r9
 * 0000000140BBF783: call    KeGuardDispatchICall
 * 0000000140BBF788: jmp     short loc_140BBF7A8
 * 0000000140BBF78A: lea     rax, [rbp+8D0h+var_850]
 * 0000000140BBF791: xor     r9d, r9d
 * 0000000140BBF794: mov     [rsp+9D0h+BugCheckParameter4], rax
 * 0000000140BBF799: xor     r8d, r8d
 * 0000000140BBF79C: mov     rax, [rbp+8D0h+var_8D8]
 * 0000000140BBF7A0: mov     rcx, r11
 * 0000000140BBF7A3: call    KeGuardDispatchICall
 * 0000000140BBF7A8: xor     r11d, r11d
 * 0000000140BBF7AB: test    r13d, r13d
 * 0000000140BBF7AE: lea     r13d, [r11+1]
 * 0000000140BBF7B2: jz      loc_140BBF98A
 * 0000000140BBF7B8: mov     r9, rsi
 * 0000000140BBF7BB: lea     rax, [rsi+0AE0h]
 * 0000000140BBF7C2: xor     r9, rbx
 * 0000000140BBF7C5: mov     ecx, 15Dh
 * 0000000140BBF7CA: xor     [rax], rbx
 * 0000000140BBF7CD: lea     rax, [rax-8]
 * 0000000140BBF7D1: ror     rbx, cl
 * 0000000140BBF7D4: sub     ecx, r13d
 * 0000000140BBF7D7: jnz     short loc_140BBF7CA
 * 0000000140BBF7D9: lea     r8, [r12-0AE8h]
 * 0000000140BBF7E1: shr     r8, 3
 * 0000000140BBF7E5: test    r8d, r8d
 * 0000000140BBF7E8: jz      short loc_140BBF814
 * 0000000140BBF7EA: movsxd  r10, r8d
 * 0000000140BBF7ED: add     r10, 15Ch
 * 0000000140BBF7F4: lea     r10, [rsi+r10*8]
 * 0000000140BBF7F8: mov     rdx, [r10]
 * 0000000140BBF7FB: lea     rax, [r9+r9]
 * 0000000140BBF7FF: mov     ecx, r8d
 * 0000000140BBF802: lea     r10, [r10-8]
 * 0000000140BBF806: ror     rdx, cl
 * 0000000140BBF809: mov     r9, rdx
 * 0000000140BBF80C: xor     r9, rax
 * 0000000140BBF80F: sub     r8d, r13d
 * 0000000140BBF812: jnz     short loc_140BBF7F8
 * 0000000140BBF814: sub     r14d, r12d
 * 0000000140BBF817: lea     rcx, [rsi+r12]
 * 0000000140BBF81B: shr     r14d, 3
 * 0000000140BBF81F: test    r14d, r14d
 * 0000000140BBF822: jz      short loc_140BBF840
 * 0000000140BBF824: mov     edx, r14d
 * 0000000140BBF827: dec     rdx
 * 0000000140BBF82A: lea     rdx, [rcx+rdx*8]
 * 0000000140BBF82E: xor     [rdx], rbx
 * 0000000140BBF831: mov     ecx, r14d
 * 0000000140BBF834: ror     rbx, cl
 * 0000000140BBF837: lea     rdx, [rdx-8]
 * 0000000140BBF83B: sub     r14d, r13d
 * 0000000140BBF83E: jnz     short loc_140BBF82E
 * 0000000140BBF840: cmp     r9, r15
 * 0000000140BBF843: jz      loc_140BBF98A
 * 0000000140BBF849: mov     rax, [rsi+588h]
 * 0000000140BBF850: mov     ecx, [rsi+804h]
 * 0000000140BBF856: mov     [rax], rsi
 * 0000000140BBF859: mov     [rax+10h], ecx
 * 0000000140BBF85C: cmp     [rsi+918h], r11d
 * 0000000140BBF863: jnz     short loc_140BBF876
 * 0000000140BBF865: mov     rax, [rsi+588h]
 * 0000000140BBF86C: mov     rcx, r9
 * 0000000140BBF86F: xor     rcx, r15
 * 0000000140BBF872: mov     [rax+18h], rcx
 * 0000000140BBF876: xor     r15d, r15d
 * 0000000140BBF879: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BBF883: cmp     [rsi+918h], r15d
 * 0000000140BBF88A: jnz     loc_140BBF99F
 * 0000000140BBF890: lea     rax, [rsi+r14]
 * 0000000140BBF894: mov     [rsi+920h], rax
 * 0000000140BBF89B: mov     [rsi+928h], r15
 * 0000000140BBF8A2: mov     qword ptr [rsi+930h], 10Eh
 * 0000000140BBF8AD: mov     [rsi+938h], r9
 * 0000000140BBF8B4: mov     [rsi+918h], r13d
 * 0000000140BBF8BB: mov     ecx, [rsi+9D8h]
 * 0000000140BBF8C1: bt      ecx, 1Dh
 * 0000000140BBF8C5: jb      loc_140BBF99F
 * 0000000140BBF8CB: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBF8D5: jz      loc_140BBF99F
 * 0000000140BBF8DB: test    r13b, cl
 * 0000000140BBF8DE: jz      loc_140BBF99F
 * 0000000140BBF8E4: mov     ecx, [rsi+0A74h]
 * 0000000140BBF8EA: mov     eax, [rsi+804h]
 * 0000000140BBF8F0: mov     r10, [rsi+838h]
 * 0000000140BBF8F7: sub     eax, ecx
 * 0000000140BBF8F9: mov     r8, [rsi+0A78h]
 * 0000000140BBF900: lea     rdx, [rcx+rsi]
 * 0000000140BBF904: mov     ecx, eax
 * 0000000140BBF906: shr     rcx, 3
 * 0000000140BBF90A: lea     r9, [rdx+rcx*8]
 * 0000000140BBF90E: jmp     short loc_140BBF931
 * 0000000140BBF910: xor     [rdx], r8
 * 0000000140BBF913: mov     rax, [rdx]
 * 0000000140BBF916: movzx   ecx, r8b
 * 0000000140BBF91A: xor     rax, r10
 * 0000000140BBF91D: and     ecx, 3Fh
 * 0000000140BBF920: ror     r8, cl
 * 0000000140BBF923: add     r8, rax
 * 0000000140BBF926: xor     r8, 0EFAh
 * 0000000140BBF92D: add     rdx, 8
 * 0000000140BBF931: cmp     rdx, r9
 * 0000000140BBF934: jnz     short loc_140BBF910
 * 0000000140BBF936: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBF93E: cmp     r8, [rsi+0A80h]
 * 0000000140BBF945: jz      short loc_140BBF99F
 * 0000000140BBF947: mov     ecx, [rsi+804h]
 * 0000000140BBF94D: mov     rax, [rsi+588h]
 * 0000000140BBF954: mov     [rax], rsi
 * 0000000140BBF957: mov     [rax+10h], ecx
 * 0000000140BBF95A: mov     rcx, [rsi+0A80h]
 * 0000000140BBF961: cmp     [rsi+918h], r15d
 * 0000000140BBF968: jnz     short loc_140BBF978
 * 0000000140BBF96A: mov     rax, [rsi+588h]
 * 0000000140BBF971: xor     rcx, r8
 * 0000000140BBF974: mov     [rax+18h], rcx
 * 0000000140BBF978: xor     edx, edx
 * 0000000140BBF97A: mov     r9d, 100h
 * 0000000140BBF980: mov     rcx, rsi
 * 0000000140BBF983: call    sub_140BC7384
 * 0000000140BBF988: jmp     short loc_140BBF99F
 * 0000000140BBF98A: xor     r15d, r15d
 * 0000000140BBF98D: jmp     short loc_140BBF995
 * 0000000140BBF98F: mov     r13d, 1
 * 0000000140BBF995: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140BBF99F: test    dword ptr [rsi+9D8h], 1000000h
 * 0000000140BBF9A9: jz      loc_140BBFAEE
 * 0000000140BBF9AF: mov     rbx, [rsi+9E0h]
 * 0000000140BBF9B6: mov     rax, [rsi+390h]
 * 0000000140BBF9BD: mov     rcx, rbx
 * 0000000140BBF9C0: call    KeGuardDispatchICall
 * 0000000140BBF9C5: test    eax, eax
 * 0000000140BBF9C7: jz      loc_140BBFAD2
 * 0000000140BBF9CD: cmp     [rsi+918h], r15d
 * 0000000140BBF9D4: jnz     loc_140BBFAD2
 * 0000000140BBF9DA: lea     rax, [rsi+r14]
 * 0000000140BBF9DE: mov     [rsi+920h], rax
 * 0000000140BBF9E5: mov     [rsi+928h], r15
 * 0000000140BBF9EC: mov     qword ptr [rsi+930h], 110h
 * 0000000140BBF9F7: mov     [rsi+938h], r15
 * 0000000140BBF9FE: mov     [rsi+918h], r13d
 * 0000000140BBFA05: mov     ecx, [rsi+9D8h]
 * 0000000140BBFA0B: bt      ecx, 1Dh
 * 0000000140BBFA0F: jb      loc_140BBFAD2
 * 0000000140BBFA15: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBFA1F: jz      loc_140BBFAD2
 * 0000000140BBFA25: test    r13b, cl
 * 0000000140BBFA28: jz      loc_140BBFAD2
 * 0000000140BBFA2E: mov     ecx, [rsi+0A74h]
 * 0000000140BBFA34: mov     eax, [rsi+804h]
 * 0000000140BBFA3A: mov     r10, [rsi+838h]
 * 0000000140BBFA41: sub     eax, ecx
 * 0000000140BBFA43: mov     r8, [rsi+0A78h]
 * 0000000140BBFA4A: lea     rdx, [rcx+rsi]
 * 0000000140BBFA4E: mov     ecx, eax
 * 0000000140BBFA50: shr     rcx, 3
 * 0000000140BBFA54: lea     r9, [rdx+rcx*8]
 * 0000000140BBFA58: jmp     short loc_140BBFA7B
 * 0000000140BBFA5A: xor     [rdx], r8
 * 0000000140BBFA5D: mov     rax, [rdx]
 * 0000000140BBFA60: movzx   ecx, r8b
 * 0000000140BBFA64: xor     rax, r10
 * 0000000140BBFA67: and     ecx, 3Fh
 * 0000000140BBFA6A: ror     r8, cl
 * 0000000140BBFA6D: add     r8, rax
 * 0000000140BBFA70: xor     r8, 0EFAh
 * 0000000140BBFA77: add     rdx, 8
 * 0000000140BBFA7B: cmp     rdx, r9
 * 0000000140BBFA7E: jnz     short loc_140BBFA5A
 * 0000000140BBFA80: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBFA88: cmp     r8, [rsi+0A80h]
 * 0000000140BBFA8F: jz      short loc_140BBFAD2
 * 0000000140BBFA91: mov     ecx, [rsi+804h]
 * 0000000140BBFA97: mov     rax, [rsi+588h]
 * 0000000140BBFA9E: mov     [rax], rsi
 * 0000000140BBFAA1: mov     [rax+10h], ecx
 * 0000000140BBFAA4: mov     rcx, [rsi+0A80h]
 * 0000000140BBFAAB: cmp     [rsi+918h], r15d
 * 0000000140BBFAB2: jnz     short loc_140BBFAC2
 * 0000000140BBFAB4: mov     rax, [rsi+588h]
 * 0000000140BBFABB: xor     rcx, r8
 * 0000000140BBFABE: mov     [rax+18h], rcx
 * 0000000140BBFAC2: xor     edx, edx
 * 0000000140BBFAC4: mov     r9d, 100h
 * 0000000140BBFACA: mov     rcx, rsi
 * 0000000140BBFACD: call    sub_140BC7384
 * 0000000140BBFAD2: mov     rax, [rsi+388h]
 * 0000000140BBFAD9: lea     rdx, sub_140BC9550
 * 0000000140BBFAE0: xor     r9d, r9d
 * 0000000140BBFAE3: mov     r8, rsi
 * 0000000140BBFAE6: mov     rcx, rbx
 * 0000000140BBFAE9: call    KeGuardDispatchICall
 * 0000000140BBFAEE: mov     ecx, [rsi+9D8h]
 * 0000000140BBFAF4: bt      ecx, 1Dh
 * 0000000140BBFAF8: jb      loc_140BBFBAC
 * 0000000140BBFAFE: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBFB08: jnz     loc_140BBFBAC
 * 0000000140BBFB0E: mov     rbx, 7010008004002001h
 * 0000000140BBFB18: test    r13b, cl
 * 0000000140BBFB1B: jz      loc_140BBFBB6
 * 0000000140BBFB21: mov     ecx, [rsi+0A74h]
 * 0000000140BBFB27: mov     eax, [rsi+804h]
 * 0000000140BBFB2D: mov     r11, [rsi+838h]
 * 0000000140BBFB34: sub     eax, ecx
 * 0000000140BBFB36: lea     r9, [rcx+rsi]
 * 0000000140BBFB3A: mov     ecx, eax
 * 0000000140BBFB3C: shr     rcx, 3
 * 0000000140BBFB40: lea     r10, [r9+rcx*8]
 * 0000000140BBFB44: rdtsc
 * 0000000140BBFB46: shl     rdx, 20h
 * 0000000140BBFB4A: or      rax, rdx
 * 0000000140BBFB4D: mov     rcx, rax
 * 0000000140BBFB50: ror     rax, 3
 * 0000000140BBFB54: xor     rcx, rax
 * 0000000140BBFB57: mov     rax, rbx
 * 0000000140BBFB5A: mul     rcx
 * 0000000140BBFB5D: mov     [rbp+8D0h+var_498], rdx
 * 0000000140BBFB64: xor     rdx, rax
 * 0000000140BBFB67: mov     [rsi+0A78h], rdx
 * 0000000140BBFB6E: jmp     short loc_140BBFB96
 * 0000000140BBFB70: mov     r8, [r9]
 * 0000000140BBFB73: mov     rax, rdx
 * 0000000140BBFB76: movzx   ecx, dl
 * 0000000140BBFB79: xor     rax, r8
 * 0000000140BBFB7C: and     ecx, 3Fh
 * 0000000140BBFB7F: mov     [r9], rax
 * 0000000140BBFB82: ror     rdx, cl
 * 0000000140BBFB85: xor     r8, r11
 * 0000000140BBFB88: add     rdx, r8
 * 0000000140BBFB8B: xor     rdx, 0EFAh
 * 0000000140BBFB92: add     r9, 8
 * 0000000140BBFB96: cmp     r9, r10
 * 0000000140BBFB99: jnz     short loc_140BBFB70
 * 0000000140BBFB9B: bts     dword ptr [rsi+9DCh], 15h
 * 0000000140BBFBA3: mov     [rsi+0A80h], rdx
 * 0000000140BBFBAA: jmp     short loc_140BBFBB6
 * 0000000140BBFBAC: mov     rbx, 7010008004002001h
 * 0000000140BBFBB6: test    dword ptr [rsi+9DCh], 100h
 * 0000000140BBFBC0: jz      short loc_140BBFBCD
 * 0000000140BBFBC2: mov     rax, [rbp+8D0h+var_8D0]
 * 0000000140BBFBC6: mov     [rbp+8D8h], rax
 * 0000000140BBFBCD: mov     r8d, [rsi+9D8h]
 * 0000000140BBFBD4: bt      r8d, 11h
 * 0000000140BBFBD9: jnb     loc_140BBFD31
 * 0000000140BBFBDF: rdtsc
 * 0000000140BBFBE1: shl     rdx, 20h
 * 0000000140BBFBE5: or      rax, rdx
 * 0000000140BBFBE8: mov     rcx, rax
 * 0000000140BBFBEB: mov     rdx, rax
 * 0000000140BBFBEE: ror     rcx, 3
 * 0000000140BBFBF2: mov     rax, rbx
 * 0000000140BBFBF5: xor     rdx, rcx
 * 0000000140BBFBF8: mul     rdx
 * 0000000140BBFBFB: mov     rcx, rdx
 * 0000000140BBFBFE: mov     [rbp+8D0h+var_490], rdx
 * 0000000140BBFC05: xor     rcx, rax
 * 0000000140BBFC08: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140BBFC12: mul     rcx
 * 0000000140BBFC15: shr     rdx, 3
 * 0000000140BBFC19: lea     rax, [rdx+rdx*4]
 * 0000000140BBFC1D: add     rax, rax
 * 0000000140BBFC20: sub     rcx, rax
 * 0000000140BBFC23: mov     eax, 2
 * 0000000140BBFC28: cmp     rcx, rax
 * 0000000140BBFC2B: jnb     loc_140BBFD31
 * 0000000140BBFC31: cmp     [rsi+918h], r15d
 * 0000000140BBFC38: jnz     loc_140BBFD31
 * 0000000140BBFC3E: lea     rax, [rsi+r14]
 * 0000000140BBFC42: mov     [rsi+920h], rax
 * 0000000140BBFC49: mov     [rsi+928h], r15
 * 0000000140BBFC50: mov     qword ptr [rsi+930h], 108h
 * 0000000140BBFC5B: mov     [rsi+938h], r15
 * 0000000140BBFC62: mov     [rsi+918h], r13d
 * 0000000140BBFC69: bt      r8d, 1Dh
 * 0000000140BBFC6E: jb      loc_140BBFD31
 * 0000000140BBFC74: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BBFC7E: jz      loc_140BBFD31
 * 0000000140BBFC84: test    r13b, r8b
 * 0000000140BBFC87: jz      loc_140BBFD31
 * 0000000140BBFC8D: mov     ecx, [rsi+0A74h]
 * 0000000140BBFC93: mov     eax, [rsi+804h]
 * 0000000140BBFC99: mov     r10, [rsi+838h]
 * 0000000140BBFCA0: sub     eax, ecx
 * 0000000140BBFCA2: mov     r8, [rsi+0A78h]
 * 0000000140BBFCA9: lea     rdx, [rcx+rsi]
 * 0000000140BBFCAD: mov     ecx, eax
 * 0000000140BBFCAF: shr     rcx, 3
 * 0000000140BBFCB3: lea     r9, [rdx+rcx*8]
 * 0000000140BBFCB7: jmp     short loc_140BBFCDA
 * 0000000140BBFCB9: xor     [rdx], r8
 * 0000000140BBFCBC: mov     rax, [rdx]
 * 0000000140BBFCBF: movzx   ecx, r8b
 * 0000000140BBFCC3: xor     rax, r10
 * 0000000140BBFCC6: and     ecx, 3Fh
 * 0000000140BBFCC9: ror     r8, cl
 * 0000000140BBFCCC: add     r8, rax
 * 0000000140BBFCCF: xor     r8, 0EFAh
 * 0000000140BBFCD6: add     rdx, 8
 * 0000000140BBFCDA: cmp     rdx, r9
 * 0000000140BBFCDD: jnz     short loc_140BBFCB9
 * 0000000140BBFCDF: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BBFCE7: cmp     r8, [rsi+0A80h]
 * 0000000140BBFCEE: jz      short loc_140BBFD31
 * 0000000140BBFCF0: mov     ecx, [rsi+804h]
 * 0000000140BBFCF6: mov     rax, [rsi+588h]
 * 0000000140BBFCFD: mov     [rax], rsi
 * 0000000140BBFD00: mov     [rax+10h], ecx
 * 0000000140BBFD03: mov     rcx, [rsi+0A80h]
 * 0000000140BBFD0A: cmp     [rsi+918h], r15d
 * 0000000140BBFD11: jnz     short loc_140BBFD21
 * 0000000140BBFD13: mov     rax, [rsi+588h]
 * 0000000140BBFD1A: xor     rcx, r8
 * 0000000140BBFD1D: mov     [rax+18h], rcx
 * 0000000140BBFD21: xor     edx, edx
 * 0000000140BBFD23: mov     r9d, 100h
 * 0000000140BBFD29: mov     rcx, rsi
 * 0000000140BBFD2C: call    sub_140BC7384
 * 0000000140BBFD31: mov     eax, [rsi+9D8h]
 * 0000000140BBFD37: bt      eax, 1Dh
 * 0000000140BBFD3B: jb      short loc_140BBFDB1
 * 0000000140BBFD3D: bt      eax, 0Eh
 * 0000000140BBFD41: jb      short loc_140BBFDB1
 * 0000000140BBFD43: lea     rcx, [rsi+918h]
 * 0000000140BBFD4A: cmp     [rcx], r15d
 * 0000000140BBFD4D: jz      short loc_140BBFDB1
 * 0000000140BBFD4F: mov     rdx, [rbp+8D0h+arg_0]
 * 0000000140BBFD56: test    dword ptr [rdx+9D8h], 4000h
 * 0000000140BBFD60: jnz     short loc_140BBFD6B
 * 0000000140BBFD62: cmp     [rdx+918h], r15d
 * 0000000140BBFD69: jnz     short loc_140BBFDB1
 * 0000000140BBFD6B: mov     r8d, 28h ; '('
 * 0000000140BBFD71: add     rdx, 918h
 * 0000000140BBFD78: lea     r9d, [r8-23h]
 * 0000000140BBFD7C: mov     rax, [rcx]
 * 0000000140BBFD7F: add     r8d, 0FFFFFFF8h
 * 0000000140BBFD83: mov     [rdx], rax
 * 0000000140BBFD86: add     rcx, 8
 * 0000000140BBFD8A: add     rdx, 8
 * 0000000140BBFD8E: sub     r9, r13
 * 0000000140BBFD91: jnz     short loc_140BBFD7C
 * 0000000140BBFD93: test    r8d, r8d
 * 0000000140BBFD96: jz      short loc_140BBFDB1
 * 0000000140BBFD98: mov     esi, 0FFFFFFFFh
 * 0000000140BBFD9D: mov     al, [rcx]
 * 0000000140BBFD9F: add     rcx, r13
 * 0000000140BBFDA2: mov     [rdx], al
 * 0000000140BBFDA4: add     rdx, r13
 * 0000000140BBFDA7: add     r8d, esi
 * 0000000140BBFDAA: jnz     short loc_140BBFD9D
 * 0000000140BBFDAC: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBFDB1: test    dword ptr [rsi+9D8h], 4000h
 * 0000000140BBFDBB: jnz     short loc_140BBFDCA
 * 0000000140BBFDBD: cmp     [rsi+918h], r15d
 * 0000000140BBFDC4: jnz     loc_140BC094B
 * 0000000140BBFDCA: mov     eax, [rsi+0A70h]
 * 0000000140BBFDD0: test    eax, eax
 * 0000000140BBFDD2: jz      loc_140BC094B
 * 0000000140BBFDD8: lea     r14, [rsi+rax]
 * 0000000140BBFDDC: mov     r11, [r14+8]
 * 0000000140BBFDE0: mov     [rsp+9D0h+var_968], r14
 * 0000000140BBFDE5: test    r11, r11
 * 0000000140BBFDE8: jz      loc_140BC016B
 * 0000000140BBFDEE: mov     r9d, [r14+10h]
 * 0000000140BBFDF2: mov     r8, r11
 * 0000000140BBFDF5: add     [rsi+848h], r9d
 * 0000000140BBFDFC: mov     rax, r11
 * 0000000140BBFDFF: mov     r10d, [rsi+834h]
 * 0000000140BBFE06: mov     r12, [rsi+838h]
 * 0000000140BBFE0D: lea     rcx, [r11+r9]
 * 0000000140BBFE11: cmp     r11, rcx
 * 0000000140BBFE14: jnb     short loc_140BBFE26
 * 0000000140BBFE16: mov     edx, 40h ; '@'
 * 0000000140BBFE1B: prefetchnta byte ptr [rax]
 * 0000000140BBFE1E: add     rax, rdx
 * 0000000140BBFE21: cmp     rax, rcx
 * 0000000140BBFE24: jb      short loc_140BBFE1B
 * 0000000140BBFE26: mov     r15d, r9d
 * 0000000140BBFE29: mov     rbx, r12
 * 0000000140BBFE2C: shr     r15d, 7
 * 0000000140BBFE30: test    r15d, r15d
 * 0000000140BBFE33: jz      short loc_140BBFE9C
 * 0000000140BBFE35: mov     rsi, 7010008004002001h
 * 0000000140BBFE3F: mov     eax, 8
 * 0000000140BBFE44: xor     rbx, [r8]
 * 0000000140BBFE47: mov     ecx, r10d
 * 0000000140BBFE4A: rol     rbx, cl
 * 0000000140BBFE4D: xor     rbx, [r8+8]
 * 0000000140BBFE51: add     r8, 10h
 * 0000000140BBFE55: rol     rbx, cl
 * 0000000140BBFE58: sub     rax, r13
 * 0000000140BBFE5B: jnz     short loc_140BBFE44
 * 0000000140BBFE5D: mov     rcx, r8
 * 0000000140BBFE60: sub     rcx, r11
 * 0000000140BBFE63: xor     rcx, r12
 * 0000000140BBFE66: mov     rax, rcx
 * 0000000140BBFE69: rol     rax, 11h
 * 0000000140BBFE6D: xor     rcx, rax
 * 0000000140BBFE70: mov     rax, rsi
 * 0000000140BBFE73: mul     rcx
 * 0000000140BBFE76: xor     r10d, eax
 * 0000000140BBFE79: mov     [rbp+8D0h+var_488], rdx
 * 0000000140BBFE80: xor     r10d, edx
 * 0000000140BBFE83: mov     edx, 0FFFFFFFFh
 * 0000000140BBFE88: and     r10d, 3Fh
 * 0000000140BBFE8C: cmovz   r10d, r13d
 * 0000000140BBFE90: add     r15d, edx
 * 0000000140BBFE93: jnz     short loc_140BBFE3F
 * 0000000140BBFE95: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BBFE9A: jmp     short loc_140BBFEA1
 * 0000000140BBFE9C: mov     edx, 0FFFFFFFFh
 * 0000000140BBFEA1: and     r9d, 7Fh
 * 0000000140BBFEA5: cmp     r9d, 8
 * 0000000140BBFEA9: jb      short loc_140BBFEC8
 * 0000000140BBFEAB: mov     eax, r9d
 * 0000000140BBFEAE: shr     rax, 3
 * 0000000140BBFEB2: xor     rbx, [r8]
 * 0000000140BBFEB5: mov     ecx, r10d
 * 0000000140BBFEB8: rol     rbx, cl
 * 0000000140BBFEBB: add     r8, 8
 * 0000000140BBFEBF: add     r9d, 0FFFFFFF8h
 * 0000000140BBFEC3: sub     rax, r13
 * 0000000140BBFEC6: jnz     short loc_140BBFEB2
 * 0000000140BBFEC8: xor     r15d, r15d
 * 0000000140BBFECB: test    r9d, r9d
 * 0000000140BBFECE: jz      short loc_140BBFEE5
 * 0000000140BBFED0: movzx   eax, byte ptr [r8]
 * 0000000140BBFED4: mov     ecx, r10d
 * 0000000140BBFED7: xor     rbx, rax
 * 0000000140BBFEDA: add     r8, r13
 * 0000000140BBFEDD: rol     rbx, cl
 * 0000000140BBFEE0: add     r9d, edx
 * 0000000140BBFEE3: jnz     short loc_140BBFED0
 * 0000000140BBFEE5: mov     rax, rbx
 * 0000000140BBFEE8: jmp     short loc_140BBFEEC
 * 0000000140BBFEEA: xor     ebx, eax
 * 0000000140BBFEEC: shr     rax, 1Fh
 * 0000000140BBFEF0: test    rax, rax
 * 0000000140BBFEF3: jnz     short loc_140BBFEEA
 * 0000000140BBFEF5: btr     ebx, 1Fh
 * 0000000140BBFEF9: mov     r12d, r15d
 * 0000000140BBFEFC: cmp     ebx, [r14+14h]
 * 0000000140BBFF00: jz      loc_140BC0128
 * 0000000140BBFF06: cmp     [r14], r15d
 * 0000000140BBFF09: jnz     short loc_140BBFF13
 * 0000000140BBFF0B: cmp     [r14+18h], r15d
 * 0000000140BBFF0F: cmovnz  r12d, r13d
 * 0000000140BBFF13: mov     ecx, [r14+10h]
 * 0000000140BBFF17: mov     rdx, [r14+8]
 * 0000000140BBFF1B: test    rcx, rcx
 * 0000000140BBFF1E: jz      loc_140BBFFEA
 * 0000000140BBFF24: mov     eax, [rsi+9DCh]
 * 0000000140BBFF2A: mov     r8d, 40h ; '@'
 * 0000000140BBFF30: test    r8b, al
 * 0000000140BBFF33: jz      loc_140BBFFEA
 * 0000000140BBFF39: mov     r13, cr8
 * 0000000140BBFF3D: lea     eax, [r8-3Eh]
 * 0000000140BBFF41: mov     cr8, rax
 * 0000000140BBFF45: mov     r15, rdx
 * 0000000140BBFF48: lea     rax, [rcx-1]
 * 0000000140BBFF4C: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140BBFF53: add     rax, rdx
 * 0000000140BBFF56: or      rax, 0FFFh
 * 0000000140BBFF5C: mov     [rbp+8D0h+var_950], rax
 * 0000000140BBFF60: lea     rax, [r15-1]
 * 0000000140BBFF64: mov     [rbp+8D0h+arg_8], rax
 * 0000000140BBFF6B: mov     rax, [rsi+468h]
 * 0000000140BBFF72: xor     edx, edx
 * 0000000140BBFF74: mov     rcx, r15
 * 0000000140BBFF77: call    KeGuardDispatchICall
 * 0000000140BBFF7C: cmp     eax, 0C000022Dh
 * 0000000140BBFF81: jnz     short loc_140BBFFAC
 * 0000000140BBFF83: test    r12d, r12d
 * 0000000140BBFF86: jnz     short loc_140BBFFDF
 * 0000000140BBFF88: lea     eax, [r12+1]
 * 0000000140BBFF8D: cmp     r13b, al
 * 0000000140BBFF90: ja      short loc_140BBFFB0
 * 0000000140BBFF92: movzx   eax, r13b
 * 0000000140BBFF96: mov     cr8, rax
 * 0000000140BBFF9A: mov     al, [r15]
 * 0000000140BBFF9D: mov     rax, cr8
 * 0000000140BBFFA1: lea     eax, [r12+2]
 * 0000000140BBFFA6: mov     cr8, rax
 * 0000000140BBFFAA: jmp     short loc_140BBFF6B
 * 0000000140BBFFAC: test    eax, eax
 * 0000000140BBFFAE: js      short loc_140BBFFDF
 * 0000000140BBFFB0: mov     rax, [rbp+8D0h+arg_8]
 * 0000000140BBFFB7: mov     ecx, 1000h
 * 0000000140BBFFBC: add     rax, rcx
 * 0000000140BBFFBF: add     r15, rcx
 * 0000000140BBFFC2: mov     [rbp+8D0h+arg_8], rax
 * 0000000140BBFFC9: cmp     rax, [rbp+8D0h+var_950]
 * 0000000140BBFFCD: jnz     short loc_140BBFF6B
 * 0000000140BBFFCF: movzx   eax, r13b
 * 0000000140BBFFD3: mov     cr8, rax
 * 0000000140BBFFD7: xor     r15d, r15d
 * 0000000140BBFFDA: jmp     loc_140BC0128
 * 0000000140BBFFDF: movzx   eax, r13b
 * 0000000140BBFFE3: mov     cr8, rax
 * 0000000140BBFFE7: xor     r15d, r15d
 * 0000000140BBFFEA: mov     eax, [r14+14h]
 * 0000000140BBFFEE: cmp     [rsi+918h], r15d
 * 0000000140BBFFF5: jnz     short loc_140BC0007
 * 0000000140BBFFF7: mov     ecx, ebx
 * 0000000140BBFFF9: xor     rcx, rax
 * 0000000140BBFFFC: mov     rax, [rsi+588h]
 * 0000000140BC0003: mov     [rax+18h], rcx
 * 0000000140BC0007: mov     rcx, [r14+8]
 * 0000000140BC000B: cmp     [rsi+918h], r15d
 * 0000000140BC0012: jnz     loc_140BC0128
 * 0000000140BC0018: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC0022: mov     edx, 1
 * 0000000140BC0027: add     rax, rsi
 * 0000000140BC002A: mov     [rsi+920h], rax
 * 0000000140BC0031: mov     rax, 0B3B74BDEE4453415h
 * 0000000140BC003B: add     rax, r14
 * 0000000140BC003E: mov     [rsi+928h], rax
 * 0000000140BC0045: movsxd  rax, dword ptr [r14]
 * 0000000140BC0048: mov     [rsi+930h], rax
 * 0000000140BC004F: mov     [rsi+938h], rcx
 * 0000000140BC0056: mov     [rsi+918h], edx
 * 0000000140BC005C: mov     ecx, [rsi+9D8h]
 * 0000000140BC0062: bt      ecx, 1Dh
 * 0000000140BC0066: jb      loc_140BC0128
 * 0000000140BC006C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140BC0076: jz      loc_140BC0128
 * 0000000140BC007C: test    dl, cl
 * 0000000140BC007E: jz      loc_140BC0128
 * 0000000140BC0084: mov     ecx, [rsi+0A74h]
 * 0000000140BC008A: mov     eax, [rsi+804h]
 * 0000000140BC0090: mov     r10, [rsi+838h]
 * 0000000140BC0097: sub     eax, ecx
 * 0000000140BC0099: mov     r8, [rsi+0A78h]
 * 0000000140BC00A0: lea     rdx, [rcx+rsi]
 * 0000000140BC00A4: mov     ecx, eax
 * 0000000140BC00A6: shr     rcx, 3
 * 0000000140BC00AA: lea     r9, [rdx+rcx*8]
 * 0000000140BC00AE: jmp     short loc_140BC00D1
 * 0000000140BC00B0: xor     [rdx], r8
 * 0000000140BC00B3: mov     rax, [rdx]
 * 0000000140BC00B6: movzx   ecx, r8b
 * 0000000140BC00BA: xor     rax, r10
 * 0000000140BC00BD: and     ecx, 3Fh
 * 0000000140BC00C0: ror     r8, cl
 * 0000000140BC00C3: add     r8, rax
 * 0000000140BC00C6: xor     r8, 0EFAh
 * 0000000140BC00CD: add     rdx, 8
 * 0000000140BC00D1: cmp     rdx, r9
 * 0000000140BC00D4: jnz     short loc_140BC00B0
 * 0000000140BC00D6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140BC00DE: cmp     r8, [rsi+0A80h]
 * 0000000140BC00E5: jz      short loc_140BC0128
 * 0000000140BC00E7: mov     ecx, [rsi+804h]
 * 0000000140BC00ED: mov     rax, [rsi+588h]
 * 0000000140BC00F4: mov     [rax], rsi
 * 0000000140BC00F7: mov     [rax+10h], ecx
 * 0000000140BC00FA: mov     rcx, [rsi+0A80h]
 * 0000000140BC0101: cmp     [rsi+918h], r15d
 * 0000000140BC0108: jnz     short loc_140BC0118
 * 0000000140BC010A: mov     rax, [rsi+588h]
 * 0000000140BC0111: xor     rcx, r8
 * 0000000140BC0114: mov     [rax+18h], rcx
 * 0000000140BC0118: xor     edx, edx
 * 0000000140BC011A: mov     r9d, 100h
 * 0000000140BC0120: mov     rcx, rsi
 * 0000000140BC0123: call    sub_140BC7384
 * 0000000140BC0128: mov     rcx, [r14+18h]
 * 0000000140BC012C: mov     rax, [rsi+108h]
 * 0000000140BC0133: call    KeGuardDispatchICall
 * 0000000140BC0138: mov     [r14+8], r15
 * 0000000140BC013C: mov     [r14+10h], r15d
 * 0000000140BC0140: mov     eax, [rsi+848h]
 * 0000000140BC0146: mov     [rsi+848h], eax
 * 0000000140BC014C: mov     rcx, [rsi+838h]
 * 0000000140BC0153: mov     rax, rcx
 * 0000000140BC0156: jmp     short loc_140BC015A
 * 0000000140BC0158: xor     ecx, eax
 * 0000000140BC015A: shr     rax, 1Fh
 * 0000000140BC015E: test    rax, rax
 * 0000000140BC0161: jnz     short loc_140BC0158
 * 0000000140BC0163: btr     ecx, 1Fh
 * 0000000140BC0167: mov     [r14+14h], ecx
 * 0000000140BC016B: rdtsc
 * 0000000140BC016D: shl     rdx, 20h
 * 0000000140BC0171: mov     r8, 7010008004002001h
 * 0000000140BC017B: or      rax, rdx
 * 0000000140BC017E: mov     rcx, rax
 * 0000000140BC0181: ror     rax, 3
 * 0000000140BC0185: xor     rcx, rax
 * 0000000140BC0188: mov     rax, r8
 * 0000000140BC018B: mul     rcx
 * 0000000140BC018E: mov     rcx, rdx
 * 0000000140BC0191: mov     [rbp+8D0h+var_480], rdx
 * 0000000140BC0198: xor     rcx, rax
 * 0000000140BC019B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BC01A5: mul     rcx
 * 0000000140BC01A8: shr     rdx, 1
 * 0000000140BC01AB: lea     rax, [rdx+rdx*2]
 * 0000000140BC01AF: cmp     rcx, rax
 * 0000000140BC01B2: jnz     loc_140BC0CE8
 * 0000000140BC01B8: lea     r12, [r14+18h]
 * 0000000140BC01BC: rdtsc
 * 0000000140BC01BE: shl     rdx, 20h
 * 0000000140BC01C2: or      rax, rdx
 * 0000000140BC01C5: mov     rcx, rax
 * 0000000140BC01C8: ror     rax, 3
 * 0000000140BC01CC: xor     rcx, rax
 * 0000000140BC01CF: mov     rax, r8
 * 0000000140BC01D2: mul     rcx
 * 0000000140BC01D5: mov     rbx, rdx
 * 0000000140BC01D8: mov     [rbp+8D0h+var_478], rdx
 * 0000000140BC01DF: xor     ebx, eax
 * 0000000140BC01E1: and     ebx, 7FFh
 * 0000000140BC01E7: rdtsc
 * 0000000140BC01E9: shl     rdx, 20h
 * 0000000140BC01ED: or      rax, rdx
 * 0000000140BC01F0: mov     rcx, rax
 * 0000000140BC01F3: ror     rax, 3
 * 0000000140BC01F7: xor     rcx, rax
 * 0000000140BC01FA: mov     rax, r8
 * 0000000140BC01FD: mul     rcx
 * 0000000140BC0200: lea     r8d, [rbx+1]
 * 0000000140BC0204: xor     rax, rdx
 * 0000000140BC0207: mov     [rbp+8D0h+var_470], rdx
 * 0000000140BC020E: xor     edx, edx
 * 0000000140BC0210: div     r8
 * 0000000140BC0213: mov     eax, [rsi+9D8h]
 * 0000000140BC0219: mov     r8d, [rsi+830h]
 * 0000000140BC0220: and     eax, 8000000h
 * 0000000140BC0225: neg     eax
 * 0000000140BC0227: mov     r15, rdx
 * 0000000140BC022A: mov     rax, [rsi+100h]
 * 0000000140BC0231: lea     edx, [rbx+0AE8h]
 * 0000000140BC0237: sbb     rcx, rcx
 * 0000000140BC023A: and     rcx, 0FFFFFFFFFFFFFFC0h
 * 0000000140BC023E: add     rcx, 82h
 * 0000000140BC0245: call    KeGuardDispatchICall
 * 0000000140BC024A: mov     r11, rax
 * 0000000140BC024D: test    rax, rax
 * 0000000140BC0250: jnz     short loc_140BC0260
 * 0000000140BC0252: lea     ebx, [rax+1]
 * 0000000140BC0255: add     [rsi+0A60h], ebx
 * 0000000140BC025B: jmp     loc_140BC0953
 * 0000000140BC0260: mov     r9d, r15d
 * 0000000140BC0263: mov     r8, r11
 * 0000000140BC0266: cmp     r15d, 8
 * 0000000140BC026A: jb      short loc_140BC02BE
 * 0000000140BC026C: mov     r10d, r15d
 * 0000000140BC026F: mov     esi, 1
 * 0000000140BC0274: shr     r10, 3
 * 0000000140BC0278: mov     r12, 7010008004002001h
 * 0000000140BC0282: rdtsc
 * 0000000140BC0284: shl     rdx, 20h
 * 0000000140BC0288: add     r9d, 0FFFFFFF8h
 * 0000000140BC028C: or      rax, rdx
 * 0000000140BC028F: mov     rcx, rax
 * 0000000140BC0292: ror     rax, 3
 * 0000000140BC0296: xor     rcx, rax
 * 0000000140BC0299: mov     rax, r12
 * 0000000140BC029C: mul     rcx
 * 0000000140BC029F: mov     [rbp+8D0h+var_468], rdx
 * 0000000140BC02A6: xor     rdx, rax
 * 0000000140BC02A9: mov     [r8], rdx
 * 0000000140BC02AC: add     r8, 8
 * 0000000140BC02B0: sub     r10, rsi
 * 0000000140BC02B3: jnz     short loc_140BC0282
 * 0000000140BC02B5: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC02BA: lea     r12, [r14+18h]
 * 0000000140BC02BE: mov     r10d, 1
 * 0000000140BC02C4: test    r9d, r9d
 * 0000000140BC02C7: jz      short loc_140BC0307
 * 0000000140BC02C9: rdtsc
 * 0000000140BC02CB: shl     rdx, 20h
 * 0000000140BC02CF: or      rax, rdx
 * 0000000140BC02D2: mov     rcx, rax
 * 0000000140BC02D5: ror     rax, 3
 * 0000000140BC02D9: xor     rcx, rax
 * 0000000140BC02DC: mov     rax, 7010008004002001h
 * 0000000140BC02E6: mul     rcx
 * 0000000140BC02E9: mov     [rbp+8D0h+var_460], rdx
 * 0000000140BC02F0: xor     rdx, rax
 * 0000000140BC02F3: mov     eax, 0FFFFFFFFh
 * 0000000140BC02F8: mov     [r8], dl
 * 0000000140BC02FB: add     r8, r10
 * 0000000140BC02FE: shr     rdx, 8
 * 0000000140BC0302: add     r9d, eax
 * 0000000140BC0305: jnz     short loc_140BC02F8
 * 0000000140BC0307: mov     r8d, r15d
 * 0000000140BC030A: sub     ebx, r15d
 * 0000000140BC030D: add     r8, 0AE8h
 * 0000000140BC0314: add     r8, r11
 * 0000000140BC0317: cmp     ebx, 8
 * 0000000140BC031A: jb      short loc_140BC0364
 * 0000000140BC031C: mov     r9d, ebx
 * 0000000140BC031F: mov     r14, 7010008004002001h
 * 0000000140BC0329: shr     r9, 3
 * 0000000140BC032D: rdtsc
 * 0000000140BC032F: shl     rdx, 20h
 * 0000000140BC0333: add     ebx, 0FFFFFFF8h
 * 0000000140BC0336: or      rax, rdx
 * 0000000140BC0339: mov     rcx, rax
 * 0000000140BC033C: ror     rax, 3
 * 0000000140BC0340: xor     rcx, rax
 * 0000000140BC0343: mov     rax, r14
 * 0000000140BC0346: mul     rcx
 * 0000000140BC0349: mov     [rbp+8D0h+var_458], rdx
 * 0000000140BC0350: xor     rdx, rax
 * 0000000140BC0353: mov     [r8], rdx
 * 0000000140BC0356: add     r8, 8
 * 0000000140BC035A: sub     r9, r10
 * 0000000140BC035D: jnz     short loc_140BC032D
 * 0000000140BC035F: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BC0364: test    ebx, ebx
 * 0000000140BC0366: jz      short loc_140BC03A5
 * 0000000140BC0368: rdtsc
 * 0000000140BC036A: shl     rdx, 20h
 * 0000000140BC036E: or      rax, rdx
 * 0000000140BC0371: mov     rcx, rax
 * 0000000140BC0374: ror     rax, 3
 * 0000000140BC0378: xor     rcx, rax
 * 0000000140BC037B: mov     rax, 7010008004002001h
 * 0000000140BC0385: mul     rcx
 * 0000000140BC0388: mov     [rbp+8D0h+var_450], rdx
 * 0000000140BC038F: xor     rdx, rax
 * 0000000140BC0392: mov     eax, 0FFFFFFFFh
 * 0000000140BC0397: mov     [r8], dl
 * 0000000140BC039A: add     r8, r10
 * 0000000140BC039D: shr     rdx, 8
 * 0000000140BC03A1: add     ebx, eax
 * 0000000140BC03A3: jnz     short loc_140BC0397
 * 0000000140BC03A5: test    r12, r12
 * 0000000140BC03A8: jz      short loc_140BC03AE
 * 0000000140BC03AA: mov     [r12], r11
 * 0000000140BC03AE: mov     ecx, r15d
 * 0000000140BC03B1: add     rcx, r11
 * 0000000140BC03B4: xor     r11d, r11d
 * 0000000140BC03B7: test    rcx, rcx
 * 0000000140BC03BA: jz      loc_140BC094E
 * 0000000140BC03C0: mov     r10d, 0AE8h
 * 0000000140BC03C6: mov     [r14+8], rcx
 * 0000000140BC03CA: mov     rdx, rsi
 * 0000000140BC03CD: mov     [r14+10h], r10d
 * 0000000140BC03D1: mov     r8d, r10d
 * 0000000140BC03D4: lea     r12d, [r11+1]
 * 0000000140BC03D8: mov     r9, rcx
 * 0000000140BC03DB: mov     esi, 15Dh
 * 0000000140BC03E0: mov     rax, [rdx]
 * 0000000140BC03E3: add     r8d, 0FFFFFFF8h
 * 0000000140BC03E7: mov     [rcx], rax
 * 0000000140BC03EA: add     rdx, 8
 * 0000000140BC03EE: add     rcx, 8
 * 0000000140BC03F2: sub     rsi, r12
 * 0000000140BC03F5: jnz     short loc_140BC03E0
 * 0000000140BC03F7: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC03FC: test    r8d, r8d
 * 0000000140BC03FF: jz      short loc_140BC0416
 * 0000000140BC0401: mov     r14d, 0FFFFFFFFh
 * 0000000140BC0407: mov     al, [rdx]
 * 0000000140BC0409: add     rdx, r12
 * 0000000140BC040C: mov     [rcx], al
 * 0000000140BC040E: add     rcx, r12
 * 0000000140BC0411: add     r8d, r14d
 * 0000000140BC0414: jnz     short loc_140BC0407
 * 0000000140BC0416: mov     r13d, [r9+9D8h]
 * 0000000140BC041D: mov     r14, 7010008004002001h
 * 0000000140BC0427: bts     r13d, 12h
 * 0000000140BC042C: mov     [r9+9D8h], r13d
 * 0000000140BC0433: and     r13d, 0FFFFFFFEh
 * 0000000140BC0437: mov     [r9+804h], r10d
 * 0000000140BC043E: mov     [r9+828h], r10d
 * 0000000140BC0445: mov     [r9+9D8h], r13d
 * 0000000140BC044C: mov     [r9+0A74h], r10d
 * 0000000140BC0453: mov     eax, [r9+97Ch]
 * 0000000140BC045A: mov     dword ptr [rsp+9D0h+var_960], eax
 * 0000000140BC045E: mov     rax, [r9+4E0h]
 * 0000000140BC0465: mov     [rbp+8D0h+var_8D8], rax
 * 0000000140BC0469: mov     rax, [r9+5B8h]
 * 0000000140BC0470: mov     [rbp+8D0h+var_8F0], rax
 * 0000000140BC0474: mov     dword ptr [r9+0C4h], 144h
 * 0000000140BC047F: rdtsc
 * 0000000140BC0481: shl     rdx, 20h
 * 0000000140BC0485: or      rax, rdx
 * 0000000140BC0488: mov     rcx, rax
 * 0000000140BC048B: ror     rax, 3
 * 0000000140BC048F: xor     rcx, rax
 * 0000000140BC0492: mov     rax, r14
 * 0000000140BC0495: mul     rcx
 * 0000000140BC0498: mov     r15, rdx
 * 0000000140BC049B: mov     [rbp+8D0h+var_448], rdx
 * 0000000140BC04A2: xor     r15, rax
 * 0000000140BC04A5: jz      short loc_140BC047F
 * 0000000140BC04A7: mov     rax, [r9+7D8h]
 * 0000000140BC04AE: lea     rcx, [r9+7B8h]
 * 0000000140BC04B5: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BC04BA: lea     rdx, [rbp+8D0h+var_128]
 * 0000000140BC04C1: mov     r11d, 20h ; ' '
 * 0000000140BC04C7: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BC04CB: mov     eax, [r9+848h]
 * 0000000140BC04D2: mov     r8d, r11d
 * 0000000140BC04D5: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BC04DB: lea     ebx, [r11-1Ch]
 * 0000000140BC04DF: mov     r10d, ebx
 * 0000000140BC04E2: mov     rax, [rcx]
 * 0000000140BC04E5: add     r8d, 0FFFFFFF8h
 * 0000000140BC04E9: mov     [rdx], rax
 * 0000000140BC04EC: add     rcx, 8
 * 0000000140BC04F0: add     rdx, 8
 * 0000000140BC04F4: sub     r10, r12
 * 0000000140BC04F7: jnz     short loc_140BC04E2
 * 0000000140BC04F9: test    r8d, r8d
 * 0000000140BC04FC: jz      short loc_140BC0517
 * 0000000140BC04FE: mov     esi, 0FFFFFFFFh
 * 0000000140BC0503: mov     al, [rcx]
 * 0000000140BC0505: add     rcx, r12
 * 0000000140BC0508: mov     [rdx], al
 * 0000000140BC050A: add     rdx, r12
 * 0000000140BC050D: add     r8d, esi
 * 0000000140BC0510: jnz     short loc_140BC0503
 * 0000000140BC0512: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC0517: mov     [r9+7D8h], r10
 * 0000000140BC051E: lea     rax, [r9+7B8h]
 * 0000000140BC0525: mov     [r9+848h], r10d
 * 0000000140BC052C: mov     ecx, r11d
 * 0000000140BC052F: mov     rdx, rbx
 * 0000000140BC0532: mov     [rax], r10
 * 0000000140BC0535: add     ecx, 0FFFFFFF8h
 * 0000000140BC0538: add     rax, 8
 * 0000000140BC053C: sub     rdx, r12
 * 0000000140BC053F: jnz     short loc_140BC0532
 * 0000000140BC0541: test    ecx, ecx
 * 0000000140BC0543: jz      short loc_140BC0554
 * 0000000140BC0545: mov     edx, 0FFFFFFFFh
 * 0000000140BC054A: mov     [rax], r10b
 * 0000000140BC054D: add     rax, r12
 * 0000000140BC0550: add     ecx, edx
 * 0000000140BC0552: jnz     short loc_140BC054A
 * 0000000140BC0554: mov     r11d, [r9+804h]
 * 0000000140BC055B: mov     r10, r9
 * 0000000140BC055E: add     [r9+848h], r11d
 * 0000000140BC0565: mov     rax, r9
 * 0000000140BC0568: mov     ebx, [r9+834h]
 * 0000000140BC056F: mov     r8, [r9+838h]
 * 0000000140BC0576: lea     rcx, [r9+r11]
 * 0000000140BC057A: cmp     r9, rcx
 * 0000000140BC057D: jnb     short loc_140BC058F
 * 0000000140BC057F: mov     edx, 40h ; '@'
 * 0000000140BC0584: prefetchnta byte ptr [rax]
 * 0000000140BC0587: add     rax, rdx
 * 0000000140BC058A: cmp     rax, rcx
 * 0000000140BC058D: jb      short loc_140BC0584
 * 0000000140BC058F: mov     r12d, r11d
 * 0000000140BC0592: mov     edx, 1
 * 0000000140BC0597: shr     r12d, 7
 * 0000000140BC059B: test    r12d, r12d
 * 0000000140BC059E: jz      short loc_140BC0615
 * 0000000140BC05A0: mov     rdi, r8
 * 0000000140BC05A3: mov     rsi, 7010008004002001h
 * 0000000140BC05AD: mov     r14d, 0FFFFFFFFh
 * 0000000140BC05B3: mov     eax, 8
 * 0000000140BC05B8: xor     r8, [r10]
 * 0000000140BC05BB: mov     ecx, ebx
 * 0000000140BC05BD: rol     r8, cl
 * 0000000140BC05C0: xor     r8, [r10+8]
 * 0000000140BC05C4: add     r10, 10h
 * 0000000140BC05C8: rol     r8, cl
 * 0000000140BC05CB: sub     rax, rdx
 * 0000000140BC05CE: jnz     short loc_140BC05B8
 * 0000000140BC05D0: mov     rcx, r10
 * 0000000140BC05D3: sub     rcx, r9
 * 0000000140BC05D6: xor     rcx, rdi
 * 0000000140BC05D9: mov     rax, rcx
 * 0000000140BC05DC: rol     rax, 11h
 * 0000000140BC05E0: xor     rcx, rax
 * 0000000140BC05E3: mov     rax, rsi
 * 0000000140BC05E6: mul     rcx
 * 0000000140BC05E9: xor     ebx, edx
 * 0000000140BC05EB: mov     [rbp+8D0h+var_440], rdx
 * 0000000140BC05F2: xor     ebx, eax
 * 0000000140BC05F4: mov     edx, 1
 * 0000000140BC05F9: and     ebx, 3Fh
 * 0000000140BC05FC: cmovz   ebx, edx
 * 0000000140BC05FF: add     r12d, r14d
 * 0000000140BC0602: jnz     short loc_140BC05B3
 * 0000000140BC0604: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC0609: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC0610: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BC0615: and     r11d, 7Fh
 * 0000000140BC0619: cmp     r11d, 8
 * 0000000140BC061D: jb      short loc_140BC063B
 * 0000000140BC061F: mov     eax, r11d
 * 0000000140BC0622: shr     rax, 3
 * 0000000140BC0626: xor     r8, [r10]
 * 0000000140BC0629: mov     ecx, ebx
 * 0000000140BC062B: rol     r8, cl
 * 0000000140BC062E: add     r10, 8
 * 0000000140BC0632: add     r11d, 0FFFFFFF8h
 * 0000000140BC0636: sub     rax, rdx
 * 0000000140BC0639: jnz     short loc_140BC0626
 * 0000000140BC063B: xor     r12d, r12d
 * 0000000140BC063E: test    r11d, r11d
 * 0000000140BC0641: jz      short loc_140BC0661
 * 0000000140BC0643: mov     esi, 0FFFFFFFFh
 * 0000000140BC0648: movzx   eax, byte ptr [r10]
 * 0000000140BC064C: mov     ecx, ebx
 * 0000000140BC064E: xor     r8, rax
 * 0000000140BC0651: add     r10, rdx
 * 0000000140BC0654: rol     r8, cl
 * 0000000140BC0657: add     r11d, esi
 * 0000000140BC065A: jnz     short loc_140BC0648
 * 0000000140BC065C: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC0661: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC0667: lea     rdx, [r9+7B8h]
 * 0000000140BC066E: mov     rax, [rbp+8D0h+var_8D0]
 * 0000000140BC0672: mov     r10d, 20h ; ' '
 * 0000000140BC0678: mov     [r9+7D8h], rax
 * 0000000140BC067F: add     [r9+848h], ecx
 * 0000000140BC0686: lea     rcx, [rbp+8D0h+var_128]
 * 0000000140BC068D: lea     ebx, [r10-1Fh]
 * 0000000140BC0691: lea     r11d, [r10-1Ch]
 * 0000000140BC0695: mov     rax, [rcx]
 * 0000000140BC0698: add     r10d, 0FFFFFFF8h
 * 0000000140BC069C: mov     [rdx], rax
 * 0000000140BC069F: add     rcx, 8
 * 0000000140BC06A3: add     rdx, 8
 * 0000000140BC06A7: sub     r11, rbx
 * 0000000140BC06AA: jnz     short loc_140BC0695
 * 0000000140BC06AC: test    r10d, r10d
 * 0000000140BC06AF: jz      short loc_140BC06CB
 * 0000000140BC06B1: mov     r14d, 0FFFFFFFFh
 * 0000000140BC06B7: mov     al, [rcx]
 * 0000000140BC06B9: add     rcx, rbx
 * 0000000140BC06BC: mov     [rdx], al
 * 0000000140BC06BE: add     rdx, rbx
 * 0000000140BC06C1: add     r10d, r14d
 * 0000000140BC06C4: jnz     short loc_140BC06B7
 * 0000000140BC06C6: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BC06CB: mov     [r9+7D8h], r8
 * 0000000140BC06D2: test    dword ptr [r9+9D8h], 20000000h
 * 0000000140BC06DD: jnz     loc_140BC081E
 * 0000000140BC06E3: mov     rax, r9
 * 0000000140BC06E6: mov     ecx, r12d
 * 0000000140BC06E9: xor     [rax], r15
 * 0000000140BC06EC: add     ecx, ebx
 * 0000000140BC06EE: add     rax, 8
 * 0000000140BC06F2: cmp     ecx, 19h
 * 0000000140BC06F5: jb      short loc_140BC06E9
 * 0000000140BC06F7: add     rax, 0A18h
 * 0000000140BC06FD: mov     ecx, 144h
 * 0000000140BC0702: xor     [rax], r15
 * 0000000140BC0705: lea     rdx, [rbp+8D0h+var_798]
 * 0000000140BC070C: ror     r15, cl
 * 0000000140BC070F: lea     rax, [rax-8]
 * 0000000140BC0713: mov     [rbp+8D0h+var_798], r15
 * 0000000140BC071A: and     r15d, 3Fh
 * 0000000140BC071E: btc     [rdx], r15
 * 0000000140BC0722: sub     ecx, ebx
 * 0000000140BC0724: jz      short loc_140BC072F
 * 0000000140BC0726: mov     r15, [rbp+8D0h+var_798]
 * 0000000140BC072D: jmp     short loc_140BC0702
 * 0000000140BC072F: rdtsc
 * 0000000140BC0731: shl     rdx, 20h
 * 0000000140BC0735: or      rax, rdx
 * 0000000140BC0738: mov     rcx, rax
 * 0000000140BC073B: ror     rax, 3
 * 0000000140BC073F: xor     rcx, rax
 * 0000000140BC0742: mov     rax, 7010008004002001h
 * 0000000140BC074C: mul     rcx
 * 0000000140BC074F: mov     rcx, rdx
 * 0000000140BC0752: mov     [rbp+8D0h+var_438], rdx
 * 0000000140BC0759: xor     rcx, rax
 * 0000000140BC075C: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BC0766: mul     rcx
 * 0000000140BC0769: shr     rdx, 1
 * 0000000140BC076C: lea     rax, [rdx+rdx*2]
 * 0000000140BC0770: cmp     rcx, rax
 * 0000000140BC0773: jnz     loc_140BC081E
 * 0000000140BC0779: mov     r15d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC077E: mov     ecx, r9d
 * 0000000140BC0781: mov     rdi, [rbp+8D0h+var_8D8]
 * 0000000140BC0785: mov     r10, r9
 * 0000000140BC0788: mov     r11d, r12d
 * 0000000140BC078B: ror     r10, cl
 * 0000000140BC078E: mov     r12, [rbp+8D0h+var_8F0]
 * 0000000140BC0792: mov     rbx, r9
 * 0000000140BC0795: mov     r14d, 1
 * 0000000140BC079B: mov     eax, r11d
 * 0000000140BC079E: add     rax, rbx
 * 0000000140BC07A1: sub     [r9], rax
 * 0000000140BC07A4: mov     rcx, [r9]
 * 0000000140BC07A7: bt      r13d, 8
 * 0000000140BC07AC: jb      short loc_140BC07C5
 * 0000000140BC07AE: mov     rax, rdi
 * 0000000140BC07B1: xor     rax, rcx
 * 0000000140BC07B4: mov     ecx, r12d
 * 0000000140BC07B7: bswap   rax
 * 0000000140BC07BA: xor     rax, r10
 * 0000000140BC07BD: ror     rax, cl
 * 0000000140BC07C0: xor     rax, r12
 * 0000000140BC07C3: jmp     short loc_140BC07CB
 * 0000000140BC07C5: mov     rax, r10
 * 0000000140BC07C8: xor     rax, rcx
 * 0000000140BC07CB: mov     rcx, r9
 * 0000000140BC07CE: mov     edx, 0C8h
 * 0000000140BC07D3: sub     edx, r11d
 * 0000000140BC07D6: mov     [rcx], rax
 * 0000000140BC07D9: mov     ecx, [r9]
 * 0000000140BC07DC: mov     r8d, ecx
 * 0000000140BC07DF: mov     eax, r11d
 * 0000000140BC07E2: not     ecx
 * 0000000140BC07E4: xor     rdx, rax
 * 0000000140BC07E7: xor     r8d, 0EFAh
 * 0000000140BC07EE: ror     rdx, cl
 * 0000000140BC07F1: add     r9, 8
 * 0000000140BC07F5: xor     r10, rdx
 * 0000000140BC07F8: mov     cl, r8b
 * 0000000140BC07FB: rol     r10, cl
 * 0000000140BC07FE: add     r11d, r14d
 * 0000000140BC0801: add     r10, rbx
 * 0000000140BC0804: xor     r10, r15
 * 0000000140BC0807: cmp     r11d, 19h
 * 0000000140BC080B: jb      short loc_140BC079B
 * 0000000140BC080D: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC0812: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC0819: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BC081E: mov     r15, [r14+8]
 * 0000000140BC0822: mov     r10d, [r14+10h]
 * 0000000140BC0826: mov     r9, r15
 * 0000000140BC0829: add     [rsi+848h], r10d
 * 0000000140BC0830: mov     rax, r15
 * 0000000140BC0833: mov     r11d, [rsi+834h]
 * 0000000140BC083A: mov     r12, [rsi+838h]
 * 0000000140BC0841: lea     rcx, [r15+r10]
 * 0000000140BC0845: cmp     r15, rcx
 * 0000000140BC0848: jnb     short loc_140BC085A
 * 0000000140BC084A: mov     edx, 40h ; '@'
 * 0000000140BC084F: prefetchnta byte ptr [rax]
 * 0000000140BC0852: add     rax, rdx
 * 0000000140BC0855: cmp     rax, rcx
 * 0000000140BC0858: jb      short loc_140BC084F
 * 0000000140BC085A: mov     ebx, r10d
 * 0000000140BC085D: mov     r8, r12
 * 0000000140BC0860: shr     ebx, 7
 * 0000000140BC0863: test    ebx, ebx
 * 0000000140BC0865: jz      short loc_140BC08D8
 * 0000000140BC0867: mov     rsi, 7010008004002001h
 * 0000000140BC0871: mov     r13d, 1
 * 0000000140BC0877: mov     r14d, 0FFFFFFFFh
 * 0000000140BC087D: mov     eax, 8
 * 0000000140BC0882: xor     r8, [r9]
 * 0000000140BC0885: mov     ecx, r11d
 * 0000000140BC0888: rol     r8, cl
 * 0000000140BC088B: xor     r8, [r9+8]
 * 0000000140BC088F: add     r9, 10h
 * 0000000140BC0893: rol     r8, cl
 * 0000000140BC0896: sub     rax, r13
 * 0000000140BC0899: jnz     short loc_140BC0882
 * 0000000140BC089B: mov     rcx, r9
 * 0000000140BC089E: sub     rcx, r15
 * 0000000140BC08A1: xor     rcx, r12
 * 0000000140BC08A4: mov     rax, rcx
 * 0000000140BC08A7: rol     rax, 11h
 * 0000000140BC08AB: xor     rcx, rax
 * 0000000140BC08AE: mov     rax, rsi
 * 0000000140BC08B1: mul     rcx
 * 0000000140BC08B4: xor     r11d, edx
 * 0000000140BC08B7: mov     [rbp+8D0h+var_430], rdx
 * 0000000140BC08BE: xor     r11d, eax
 * 0000000140BC08C1: and     r11d, 3Fh
 * 0000000140BC08C5: cmovz   r11d, r13d
 * 0000000140BC08C9: add     ebx, r14d
 * 0000000140BC08CC: jnz     short loc_140BC087D
 * 0000000140BC08CE: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC08D3: mov     r14, [rsp+9D0h+var_968]
 * 0000000140BC08D8: and     r10d, 7Fh
 * 0000000140BC08DC: mov     ebx, 1
 * 0000000140BC08E1: cmp     r10d, 8
 * 0000000140BC08E5: jb      short loc_140BC0904
 * 0000000140BC08E7: mov     eax, r10d
 * 0000000140BC08EA: shr     rax, 3
 * 0000000140BC08EE: xor     r8, [r9]
 * 0000000140BC08F1: mov     ecx, r11d
 * 0000000140BC08F4: rol     r8, cl
 * 0000000140BC08F7: add     r9, 8
 * 0000000140BC08FB: add     r10d, 0FFFFFFF8h
 * 0000000140BC08FF: sub     rax, rbx
 * 0000000140BC0902: jnz     short loc_140BC08EE
 * 0000000140BC0904: test    r10d, r10d
 * 0000000140BC0907: jz      short loc_140BC0928
 * 0000000140BC0909: mov     esi, 0FFFFFFFFh
 * 0000000140BC090E: movzx   eax, byte ptr [r9]
 * 0000000140BC0912: mov     ecx, r11d
 * 0000000140BC0915: xor     r8, rax
 * 0000000140BC0918: add     r9, rbx
 * 0000000140BC091B: rol     r8, cl
 * 0000000140BC091E: add     r10d, esi
 * 0000000140BC0921: jnz     short loc_140BC090E
 * 0000000140BC0923: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC0928: mov     rax, r8
 * 0000000140BC092B: shr     rax, 1Fh
 * 0000000140BC092F: xor     r11d, r11d
 * 0000000140BC0932: jmp     short loc_140BC093B
 * 0000000140BC0934: xor     r8d, eax
 * 0000000140BC0937: shr     rax, 1Fh
 * 0000000140BC093B: test    rax, rax
 * 0000000140BC093E: jnz     short loc_140BC0934
 * 0000000140BC0940: btr     r8d, 1Fh
 * 0000000140BC0945: mov     [r14+14h], r8d
 * 0000000140BC0949: jmp     short loc_140BC0953
 * 0000000140BC094B: xor     r11d, r11d
 * 0000000140BC094E: mov     ebx, 1
 * 0000000140BC0953: mov     r8, 7010008004002001h
 * 0000000140BC095D: mov     r12d, [rsi+9D8h]
 * 0000000140BC0964: mov     dword ptr [rbp+8D0h+arg_8], r11d
 * 0000000140BC096B: mov     [rsp+9D0h+var_978], r11
 * 0000000140BC0970: mov     dword ptr [rsp+9D0h+var_960], r12d
 * 0000000140BC0975: bt      r12d, 1Dh
 * 0000000140BC097A: jb      loc_140BC1026
 * 0000000140BC0980: mov     r13, [rbp+8D0h+arg_0]
 * 0000000140BC0987: cmp     rsi, r13
 * 0000000140BC098A: jnz     loc_140BC109B
 * 0000000140BC0990: bt      r12d, 0Eh
 * 0000000140BC0995: jb      short loc_140BC09A4
 * 0000000140BC0997: cmp     [rsi+918h], r11d
 * 0000000140BC099E: jnz     loc_140BC0E15
 * 0000000140BC09A4: mov     r8d, [r13+944h]
 * 0000000140BC09AB: mov     rcx, r13
 * 0000000140BC09AE: mov     edx, [r13+804h]
 * 0000000140BC09B5: call    sub_140BC6AF8
 * 0000000140BC09BA: xor     r14d, r14d
 * 0000000140BC09BD: mov     rsi, rax
 * 0000000140BC09C0: test    rax, rax
 * 0000000140BC09C3: jz      loc_140BC0E18
 * 0000000140BC09C9: mov     ecx, [rsi+97Ch]
 * 0000000140BC09CF: mov     r13d, [rsi+9D8h]
 * 0000000140BC09D6: mov     r15d, [rsi+0A74h]
 * 0000000140BC09DD: mov     rax, [rax+7E8h]
 * 0000000140BC09E4: add     r15d, 0FFFFFF38h
 * 0000000140BC09EB: mov     [rbp+8D0h+var_8F8], ecx
 * 0000000140BC09EE: mov     rcx, [rsi+4E0h]
 * 0000000140BC09F5: mov     [rbp+8D0h+var_8F0], rcx
 * 0000000140BC09F9: mov     rcx, [rsi+5B8h]
 * 0000000140BC0A00: shr     r15d, 3
 * 0000000140BC0A04: mov     dword ptr [rbp+8D0h+arg_8], r13d
 * 0000000140BC0A0B: mov     r13, 7010008004002001h
 * 0000000140BC0A15: mov     [rbp+8D0h+var_8D0], rcx
 * 0000000140BC0A19: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC0A1E: mov     [rsi+0C4h], r15d
 * 0000000140BC0A25: rdtsc
 * 0000000140BC0A27: shl     rdx, 20h
 * 0000000140BC0A2B: or      rax, rdx
 * 0000000140BC0A2E: mov     rcx, rax
 * 0000000140BC0A31: ror     rax, 3
 * 0000000140BC0A35: xor     rcx, rax
 * 0000000140BC0A38: mov     rax, r13
 * 0000000140BC0A3B: mul     rcx
 * 0000000140BC0A3E: mov     rbx, rdx
 * 0000000140BC0A41: mov     [rbp+8D0h+var_428], rdx
 * 0000000140BC0A48: xor     rbx, rax
 * 0000000140BC0A4B: jz      short loc_140BC0A25
 * 0000000140BC0A4D: mov     rax, [rsi+7D8h]
 * 0000000140BC0A54: lea     rcx, [rsi+7B8h]
 * 0000000140BC0A5B: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC0A62: lea     rdx, [rbp+8D0h+var_108]
 * 0000000140BC0A69: mov     r10d, 20h ; ' '
 * 0000000140BC0A6F: mov     [rbp+8D0h+var_950], rax
 * 0000000140BC0A73: mov     eax, [rsi+848h]
 * 0000000140BC0A79: mov     r8d, r10d
 * 0000000140BC0A7C: mov     dword ptr [rsp+9D0h+var_960], eax
 * 0000000140BC0A80: lea     r11d, [r10-1Ch]
 * 0000000140BC0A84: mov     r9d, r11d
 * 0000000140BC0A87: lea     r12d, [r10-1Fh]
 * 0000000140BC0A8B: mov     rax, [rcx]
 * 0000000140BC0A8E: add     r8d, 0FFFFFFF8h
 * 0000000140BC0A92: mov     [rdx], rax
 * 0000000140BC0A95: add     rcx, 8
 * 0000000140BC0A99: add     rdx, 8
 * 0000000140BC0A9D: sub     r9, r12
 * 0000000140BC0AA0: jnz     short loc_140BC0A8B
 * 0000000140BC0AA2: test    r8d, r8d
 * 0000000140BC0AA5: jz      short loc_140BC0AC3
 * 0000000140BC0AA7: mov     r13d, 0FFFFFFFFh
 * 0000000140BC0AAD: mov     al, [rcx]
 * 0000000140BC0AAF: add     rcx, r12
 * 0000000140BC0AB2: mov     [rdx], al
 * 0000000140BC0AB4: add     rdx, r12
 * 0000000140BC0AB7: add     r8d, r13d
 * 0000000140BC0ABA: jnz     short loc_140BC0AAD
 * 0000000140BC0ABC: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC0AC3: mov     [rsi+7D8h], r14
 * 0000000140BC0ACA: lea     rax, [rsi+7B8h]
 * 0000000140BC0AD1: mov     [rsi+848h], r14d
 * 0000000140BC0AD8: mov     ecx, r10d
 * 0000000140BC0ADB: mov     rdx, r11
 * 0000000140BC0ADE: mov     [rax], r14
 * 0000000140BC0AE1: add     ecx, 0FFFFFFF8h
 * 0000000140BC0AE4: add     rax, 8
 * 0000000140BC0AE8: sub     rdx, r12
 * 0000000140BC0AEB: jnz     short loc_140BC0ADE
 * 0000000140BC0AED: mov     edx, 0FFFFFFFFh
 * 0000000140BC0AF2: test    ecx, ecx
 * 0000000140BC0AF4: jz      short loc_140BC0B00
 * 0000000140BC0AF6: mov     [rax], r14b
 * 0000000140BC0AF9: add     rax, r12
 * 0000000140BC0AFC: add     ecx, edx
 * 0000000140BC0AFE: jnz     short loc_140BC0AF6
 * 0000000140BC0B00: mov     r10d, [rsi+804h]
 * 0000000140BC0B07: mov     r9, rsi
 * 0000000140BC0B0A: add     [rsi+848h], r10d
 * 0000000140BC0B11: mov     rax, rsi
 * 0000000140BC0B14: mov     r11d, [rsi+834h]
 * 0000000140BC0B1B: mov     r12, [rsi+838h]
 * 0000000140BC0B22: lea     rcx, [rsi+r10]
 * 0000000140BC0B26: cmp     rsi, rcx
 * 0000000140BC0B29: jnb     short loc_140BC0B3C
 * 0000000140BC0B2B: mov     r8d, 40h ; '@'
 * 0000000140BC0B31: prefetchnta byte ptr [rax]
 * 0000000140BC0B34: add     rax, r8
 * 0000000140BC0B37: cmp     rax, rcx
 * 0000000140BC0B3A: jb      short loc_140BC0B31
 * 0000000140BC0B3C: mov     r14d, r10d
 * 0000000140BC0B3F: mov     r8, r12
 * 0000000140BC0B42: shr     r14d, 7
 * 0000000140BC0B46: test    r14d, r14d
 * 0000000140BC0B49: jz      short loc_140BC0BBE
 * 0000000140BC0B4B: mov     edi, 1
 * 0000000140BC0B50: mov     r13, 7010008004002001h
 * 0000000140BC0B5A: mov     eax, 8
 * 0000000140BC0B5F: xor     r8, [r9]
 * 0000000140BC0B62: mov     ecx, r11d
 * 0000000140BC0B65: rol     r8, cl
 * 0000000140BC0B68: xor     r8, [r9+8]
 * 0000000140BC0B6C: add     r9, 10h
 * 0000000140BC0B70: rol     r8, cl
 * 0000000140BC0B73: sub     rax, rdi
 * 0000000140BC0B76: jnz     short loc_140BC0B5F
 * 0000000140BC0B78: mov     rcx, r9
 * 0000000140BC0B7B: sub     rcx, rsi
 * 0000000140BC0B7E: xor     rcx, r12
 * 0000000140BC0B81: mov     rax, rcx
 * 0000000140BC0B84: rol     rax, 11h
 * 0000000140BC0B88: xor     rcx, rax
 * 0000000140BC0B8B: mov     rax, r13
 * 0000000140BC0B8E: mul     rcx
 * 0000000140BC0B91: xor     r11d, edx
 * 0000000140BC0B94: mov     [rbp+8D0h+var_420], rdx
 * 0000000140BC0B9B: xor     r11d, eax
 * 0000000140BC0B9E: mov     edx, 0FFFFFFFFh
 * 0000000140BC0BA3: and     r11d, 3Fh
 * 0000000140BC0BA7: cmovz   r11d, edi
 * 0000000140BC0BAB: add     r14d, edx
 * 0000000140BC0BAE: jnz     short loc_140BC0B5A
 * 0000000140BC0BB0: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC0BB7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC0BBE: and     r10d, 7Fh
 * 0000000140BC0BC2: mov     r12d, 1
 * 0000000140BC0BC8: cmp     r10d, 8
 * 0000000140BC0BCC: jb      short loc_140BC0BEB
 * 0000000140BC0BCE: mov     eax, r10d
 * 0000000140BC0BD1: shr     rax, 3
 * 0000000140BC0BD5: xor     r8, [r9]
 * 0000000140BC0BD8: mov     ecx, r11d
 * 0000000140BC0BDB: rol     r8, cl
 * 0000000140BC0BDE: add     r9, 8
 * 0000000140BC0BE2: add     r10d, 0FFFFFFF8h
 * 0000000140BC0BE6: sub     rax, r12
 * 0000000140BC0BE9: jnz     short loc_140BC0BD5
 * 0000000140BC0BEB: xor     r14d, r14d
 * 0000000140BC0BEE: test    r10d, r10d
 * 0000000140BC0BF1: jz      short loc_140BC0C08
 * 0000000140BC0BF3: movzx   eax, byte ptr [r9]
 * 0000000140BC0BF7: mov     ecx, r11d
 * 0000000140BC0BFA: xor     r8, rax
 * 0000000140BC0BFD: add     r9, r12
 * 0000000140BC0C00: rol     r8, cl
 * 0000000140BC0C03: add     r10d, edx
 * 0000000140BC0C06: jnz     short loc_140BC0BF3
 * 0000000140BC0C08: mov     ecx, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC0C0C: lea     rdx, [rsi+7B8h]
 * 0000000140BC0C13: mov     rax, [rbp+8D0h+var_950]
 * 0000000140BC0C17: mov     r9d, 4
 * 0000000140BC0C1D: mov     [rsi+7D8h], rax
 * 0000000140BC0C24: add     [rsi+848h], ecx
 * 0000000140BC0C2A: lea     rcx, [rbp+8D0h+var_108]
 * 0000000140BC0C31: lea     r10d, [r9+1Ch]
 * 0000000140BC0C35: mov     rax, [rcx]
 * 0000000140BC0C38: add     r10d, 0FFFFFFF8h
 * 0000000140BC0C3C: mov     [rdx], rax
 * 0000000140BC0C3F: add     rcx, 8
 * 0000000140BC0C43: add     rdx, 8
 * 0000000140BC0C47: sub     r9, r12
 * 0000000140BC0C4A: jnz     short loc_140BC0C35
 * 0000000140BC0C4C: test    r10d, r10d
 * 0000000140BC0C4F: jz      short loc_140BC0C6D
 * 0000000140BC0C51: mov     r13d, 0FFFFFFFFh
 * 0000000140BC0C57: mov     al, [rcx]
 * 0000000140BC0C59: add     rcx, r12
 * 0000000140BC0C5C: mov     [rdx], al
 * 0000000140BC0C5E: add     rdx, r12
 * 0000000140BC0C61: add     r10d, r13d
 * 0000000140BC0C64: jnz     short loc_140BC0C57
 * 0000000140BC0C66: mov     r13d, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC0C6D: mov     [rsi+7D8h], r8
 * 0000000140BC0C74: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC0C7E: jnz     loc_140BC0E09
 * 0000000140BC0C84: mov     rcx, rsi
 * 0000000140BC0C87: mov     eax, r14d
 * 0000000140BC0C8A: mov     r11d, 19h
 * 0000000140BC0C90: xor     [rcx], rbx
 * 0000000140BC0C93: add     eax, r12d
 * 0000000140BC0C96: lea     rcx, [rcx+8]
 * 0000000140BC0C9A: cmp     eax, r11d
 * 0000000140BC0C9D: jb      short loc_140BC0C90
 * 0000000140BC0C9F: mov     [rbp+8D0h+var_800], rbx
 * 0000000140BC0CA6: mov     r8d, r15d
 * 0000000140BC0CA9: test    r15d, r15d
 * 0000000140BC0CAC: jz      short loc_140BC0CF4
 * 0000000140BC0CAE: mov     edx, r15d
 * 0000000140BC0CB1: dec     rdx
 * 0000000140BC0CB4: lea     rdx, [rcx+rdx*8]
 * 0000000140BC0CB8: xor     [rdx], rbx
 * 0000000140BC0CBB: lea     rax, [rbp+8D0h+var_800]
 * 0000000140BC0CC2: mov     ecx, r8d
 * 0000000140BC0CC5: lea     rdx, [rdx-8]
 * 0000000140BC0CC9: ror     rbx, cl
 * 0000000140BC0CCC: mov     [rbp+8D0h+var_800], rbx
 * 0000000140BC0CD3: and     ebx, 3Fh
 * 0000000140BC0CD6: btc     [rax], rbx
 * 0000000140BC0CDA: sub     r8d, r12d
 * 0000000140BC0CDD: jz      short loc_140BC0CF4
 * 0000000140BC0CDF: mov     rbx, [rbp+8D0h+var_800]
 * 0000000140BC0CE6: jmp     short loc_140BC0CB8
 * 0000000140BC0CE8: xor     r11d, r11d
 * 0000000140BC0CEB: lea     ebx, [r11+1]
 * 0000000140BC0CEF: jmp     loc_140BC095D
 * 0000000140BC0CF4: bt      r13d, 12h
 * 0000000140BC0CF9: jnb     short loc_140BC0D49
 * 0000000140BC0CFB: rdtsc
 * 0000000140BC0CFD: shl     rdx, 20h
 * 0000000140BC0D01: or      rax, rdx
 * 0000000140BC0D04: mov     rcx, rax
 * 0000000140BC0D07: mov     rdx, rax
 * 0000000140BC0D0A: ror     rcx, 3
 * 0000000140BC0D0E: mov     rax, 7010008004002001h
 * 0000000140BC0D18: xor     rdx, rcx
 * 0000000140BC0D1B: mul     rdx
 * 0000000140BC0D1E: mov     rcx, rdx
 * 0000000140BC0D21: mov     [rbp+8D0h+var_418], rdx
 * 0000000140BC0D28: xor     rcx, rax
 * 0000000140BC0D2B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BC0D35: mul     rcx
 * 0000000140BC0D38: shr     rdx, 1
 * 0000000140BC0D3B: lea     rax, [rdx+rdx*2]
 * 0000000140BC0D3F: cmp     rcx, rax
 * 0000000140BC0D42: jz      short loc_140BC0D52
 * 0000000140BC0D44: jmp     loc_140BC0E09
 * 0000000140BC0D49: test    r13b, r13b
 * 0000000140BC0D4C: js      loc_140BC0E09
 * 0000000140BC0D52: mov     r12, [rbp+8D0h+var_8D0]
 * 0000000140BC0D56: mov     ecx, esi
 * 0000000140BC0D58: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BC0D5C: mov     r9, rsi
 * 0000000140BC0D5F: mov     ebx, r11d
 * 0000000140BC0D62: ror     r9, cl
 * 0000000140BC0D65: mov     r11d, r14d
 * 0000000140BC0D68: mov     r10, rsi
 * 0000000140BC0D6B: mov     r14d, [rbp+8D0h+var_8F8]
 * 0000000140BC0D6F: mov     eax, r11d
 * 0000000140BC0D72: add     rax, rsi
 * 0000000140BC0D75: sub     [r10], rax
 * 0000000140BC0D78: mov     rcx, [r10]
 * 0000000140BC0D7B: bt      r13d, 8
 * 0000000140BC0D80: jb      short loc_140BC0D99
 * 0000000140BC0D82: mov     rax, rdi
 * 0000000140BC0D85: xor     rax, rcx
 * 0000000140BC0D88: mov     ecx, r12d
 * 0000000140BC0D8B: bswap   rax
 * 0000000140BC0D8E: xor     rax, r9
 * 0000000140BC0D91: ror     rax, cl
 * 0000000140BC0D94: xor     rax, r12
 * 0000000140BC0D97: jmp     short loc_140BC0D9F
 * 0000000140BC0D99: mov     rax, r9
 * 0000000140BC0D9C: xor     rax, rcx
 * 0000000140BC0D9F: mov     rcx, r10
 * 0000000140BC0DA2: mov     edx, 0C8h
 * 0000000140BC0DA7: sub     edx, r11d
 * 0000000140BC0DAA: mov     [rcx], rax
 * 0000000140BC0DAD: mov     ecx, [r10]
 * 0000000140BC0DB0: mov     r8d, ecx
 * 0000000140BC0DB3: mov     eax, r11d
 * 0000000140BC0DB6: not     ecx
 * 0000000140BC0DB8: xor     rdx, rax
 * 0000000140BC0DBB: xor     r8d, 0EFAh
 * 0000000140BC0DC2: ror     rdx, cl
 * 0000000140BC0DC5: lea     eax, [r11+1]
 * 0000000140BC0DC9: xor     r9, rdx
 * 0000000140BC0DCC: mov     cl, r8b
 * 0000000140BC0DCF: rol     r9, cl
 * 0000000140BC0DD2: add     r10, 8
 * 0000000140BC0DD6: add     r9, rsi
 * 0000000140BC0DD9: mov     r11d, eax
 * 0000000140BC0DDC: xor     r9, r14
 * 0000000140BC0DDF: cmp     eax, 19h
 * 0000000140BC0DE2: jnz     short loc_140BC0DF3
 * 0000000140BC0DE4: bt      r13d, 12h
 * 0000000140BC0DE9: lea     eax, [r11-19h]
 * 0000000140BC0DED: cmovnb  eax, r15d
 * 0000000140BC0DF1: add     ebx, eax
 * 0000000140BC0DF3: cmp     r11d, ebx
 * 0000000140BC0DF6: jb      loc_140BC0D6F
 * 0000000140BC0DFC: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC0E03: mov     r12d, 1
 * 0000000140BC0E09: mov     dword ptr [rbp+8D0h+arg_8], r12d
 * 0000000140BC0E10: jmp     loc_140BC14BB
 * 0000000140BC0E15: xor     r14d, r14d
 * 0000000140BC0E18: mov     r10d, 20h ; ' '
 * 0000000140BC0E1E: mov     [r13+0C4h], ebx
 * 0000000140BC0E25: mov     r15, [r13+7D8h]
 * 0000000140BC0E2C: lea     rcx, [r13+7B8h]
 * 0000000140BC0E33: mov     r12d, [r13+848h]
 * 0000000140BC0E3A: lea     rdx, [rbp+8D0h+var_E8]
 * 0000000140BC0E41: mov     rsi, r13
 * 0000000140BC0E44: mov     [rbp+8D0h+var_950], r15
 * 0000000140BC0E48: lea     r11d, [r10-1Ch]
 * 0000000140BC0E4C: mov     dword ptr [rsp+9D0h+var_960], r12d
 * 0000000140BC0E51: mov     r9d, r11d
 * 0000000140BC0E54: mov     r8d, r10d
 * 0000000140BC0E57: mov     rax, [rcx]
 * 0000000140BC0E5A: add     r8d, 0FFFFFFF8h
 * 0000000140BC0E5E: mov     [rdx], rax
 * 0000000140BC0E61: add     rcx, 8
 * 0000000140BC0E65: add     rdx, 8
 * 0000000140BC0E69: sub     r9, rbx
 * 0000000140BC0E6C: jnz     short loc_140BC0E57
 * 0000000140BC0E6E: mov     r9d, 0FFFFFFFFh
 * 0000000140BC0E74: test    r8d, r8d
 * 0000000140BC0E77: jz      short loc_140BC0E88
 * 0000000140BC0E79: mov     al, [rcx]
 * 0000000140BC0E7B: add     rcx, rbx
 * 0000000140BC0E7E: mov     [rdx], al
 * 0000000140BC0E80: add     rdx, rbx
 * 0000000140BC0E83: add     r8d, r9d
 * 0000000140BC0E86: jnz     short loc_140BC0E79
 * 0000000140BC0E88: mov     [r13+7D8h], r14
 * 0000000140BC0E8F: lea     rax, [r13+7B8h]
 * 0000000140BC0E96: mov     [r13+848h], r14d
 * 0000000140BC0E9D: mov     ecx, r10d
 * 0000000140BC0EA0: mov     rdx, r11
 * 0000000140BC0EA3: mov     [rax], r14
 * 0000000140BC0EA6: add     ecx, 0FFFFFFF8h
 * 0000000140BC0EA9: add     rax, 8
 * 0000000140BC0EAD: sub     rdx, rbx
 * 0000000140BC0EB0: jnz     short loc_140BC0EA3
 * 0000000140BC0EB2: test    ecx, ecx
 * 0000000140BC0EB4: jz      short loc_140BC0EC1
 * 0000000140BC0EB6: mov     [rax], r14b
 * 0000000140BC0EB9: add     rax, rbx
 * 0000000140BC0EBC: add     ecx, r9d
 * 0000000140BC0EBF: jnz     short loc_140BC0EB6
 * 0000000140BC0EC1: mov     r11d, [r13+804h]
 * 0000000140BC0EC8: mov     r9, r13
 * 0000000140BC0ECB: add     [r13+848h], r11d
 * 0000000140BC0ED2: mov     rax, r13
 * 0000000140BC0ED5: mov     r10d, [r13+834h]
 * 0000000140BC0EDC: mov     r14, [r13+838h]
 * 0000000140BC0EE3: lea     rcx, [r11+r13]
 * 0000000140BC0EE7: cmp     r13, rcx
 * 0000000140BC0EEA: jnb     short loc_140BC0EFC
 * 0000000140BC0EEC: mov     edx, 40h ; '@'
 * 0000000140BC0EF1: prefetchnta byte ptr [rax]
 * 0000000140BC0EF4: add     rax, rdx
 * 0000000140BC0EF7: cmp     rax, rcx
 * 0000000140BC0EFA: jb      short loc_140BC0EF1
 * 0000000140BC0EFC: mov     ebx, r11d
 * 0000000140BC0EFF: mov     r8, r14
 * 0000000140BC0F02: shr     ebx, 7
 * 0000000140BC0F05: test    ebx, ebx
 * 0000000140BC0F07: jz      short loc_140BC0F7F
 * 0000000140BC0F09: mov     edi, 1
 * 0000000140BC0F0E: mov     r12d, 0FFFFFFFFh
 * 0000000140BC0F14: mov     r15, 7010008004002001h
 * 0000000140BC0F1E: mov     eax, 8
 * 0000000140BC0F23: xor     r8, [r9]
 * 0000000140BC0F26: mov     ecx, r10d
 * 0000000140BC0F29: rol     r8, cl
 * 0000000140BC0F2C: xor     r8, [r9+8]
 * 0000000140BC0F30: add     r9, 10h
 * 0000000140BC0F34: rol     r8, cl
 * 0000000140BC0F37: sub     rax, rdi
 * 0000000140BC0F3A: jnz     short loc_140BC0F23
 * 0000000140BC0F3C: mov     rcx, r9
 * 0000000140BC0F3F: sub     rcx, r13
 * 0000000140BC0F42: xor     rcx, r14
 * 0000000140BC0F45: mov     rax, rcx
 * 0000000140BC0F48: rol     rax, 11h
 * 0000000140BC0F4C: xor     rcx, rax
 * 0000000140BC0F4F: mov     rax, r15
 * 0000000140BC0F52: mul     rcx
 * 0000000140BC0F55: xor     r10d, edx
 * 0000000140BC0F58: mov     [rbp+8D0h+var_410], rdx
 * 0000000140BC0F5F: xor     r10d, eax
 * 0000000140BC0F62: and     r10d, 3Fh
 * 0000000140BC0F66: cmovz   r10d, edi
 * 0000000140BC0F6A: add     ebx, r12d
 * 0000000140BC0F6D: jnz     short loc_140BC0F1E
 * 0000000140BC0F6F: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BC0F73: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC0F7A: mov     r12d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC0F7F: and     r11d, 7Fh
 * 0000000140BC0F83: mov     ebx, 1
 * 0000000140BC0F88: cmp     r11d, 8
 * 0000000140BC0F8C: jb      short loc_140BC0FAB
 * 0000000140BC0F8E: mov     eax, r11d
 * 0000000140BC0F91: shr     rax, 3
 * 0000000140BC0F95: xor     r8, [r9]
 * 0000000140BC0F98: mov     ecx, r10d
 * 0000000140BC0F9B: rol     r8, cl
 * 0000000140BC0F9E: add     r9, 8
 * 0000000140BC0FA2: add     r11d, 0FFFFFFF8h
 * 0000000140BC0FA6: sub     rax, rbx
 * 0000000140BC0FA9: jnz     short loc_140BC0F95
 * 0000000140BC0FAB: mov     r14d, 0FFFFFFFFh
 * 0000000140BC0FB1: test    r11d, r11d
 * 0000000140BC0FB4: jz      short loc_140BC0FCB
 * 0000000140BC0FB6: movzx   eax, byte ptr [r9]
 * 0000000140BC0FBA: mov     ecx, r10d
 * 0000000140BC0FBD: xor     r8, rax
 * 0000000140BC0FC0: add     r9, rbx
 * 0000000140BC0FC3: rol     r8, cl
 * 0000000140BC0FC6: add     r11d, r14d
 * 0000000140BC0FC9: jnz     short loc_140BC0FB6
 * 0000000140BC0FCB: mov     r9d, 4
 * 0000000140BC0FD1: mov     [r13+7D8h], r15
 * 0000000140BC0FD8: add     [r13+848h], r12d
 * 0000000140BC0FDF: lea     rcx, [rbp+8D0h+var_E8]
 * 0000000140BC0FE6: lea     rdx, [r13+7B8h]
 * 0000000140BC0FED: lea     r10d, [r9+1Ch]
 * 0000000140BC0FF1: mov     rax, [rcx]
 * 0000000140BC0FF4: add     r10d, 0FFFFFFF8h
 * 0000000140BC0FF8: mov     [rdx], rax
 * 0000000140BC0FFB: add     rcx, 8
 * 0000000140BC0FFF: add     rdx, 8
 * 0000000140BC1003: sub     r9, rbx
 * 0000000140BC1006: jnz     short loc_140BC0FF1
 * 0000000140BC1008: xor     r11d, r11d
 * 0000000140BC100B: test    r10d, r10d
 * 0000000140BC100E: jz      short loc_140BC101F
 * 0000000140BC1010: mov     al, [rcx]
 * 0000000140BC1012: add     rcx, rbx
 * 0000000140BC1015: mov     [rdx], al
 * 0000000140BC1017: add     rdx, rbx
 * 0000000140BC101A: add     r10d, r14d
 * 0000000140BC101D: jnz     short loc_140BC1010
 * 0000000140BC101F: mov     [r13+7D8h], r8
 * 0000000140BC1026: mov     r14d, [rsi+9D8h]
 * 0000000140BC102D: mov     r15, r11
 * 0000000140BC1030: bt      r14d, 1Dh
 * 0000000140BC1035: jb      loc_140BC1558
 * 0000000140BC103B: test    r14b, r14b
 * 0000000140BC103E: js      loc_140BC1542
 * 0000000140BC1044: mov     eax, [rsi+97Ch]
 * 0000000140BC104A: mov     ecx, esi
 * 0000000140BC104C: mov     r12, [rsi+5B8h]
 * 0000000140BC1053: mov     r9, rsi
 * 0000000140BC1056: mov     r13, [rsi+4E0h]
 * 0000000140BC105D: mov     r10, rsi
 * 0000000140BC1060: ror     r9, cl
 * 0000000140BC1063: mov     ebx, r11d
 * 0000000140BC1066: mov     [rbp+8D0h+var_950], rax
 * 0000000140BC106A: mov     rcx, [r10]
 * 0000000140BC106D: sub     rcx, r11
 * 0000000140BC1070: sub     rcx, rsi
 * 0000000140BC1073: mov     [r10], rcx
 * 0000000140BC1076: bt      r14d, 8
 * 0000000140BC107B: jb      loc_140BC14F3
 * 0000000140BC1081: mov     rax, r13
 * 0000000140BC1084: xor     rax, rcx
 * 0000000140BC1087: mov     ecx, r12d
 * 0000000140BC108A: bswap   rax
 * 0000000140BC108D: xor     rax, r9
 * 0000000140BC1090: ror     rax, cl
 * 0000000140BC1093: xor     rax, r12
 * 0000000140BC1096: jmp     loc_140BC14F9
 * 0000000140BC109B: mov     ecx, [rsi+97Ch]
 * 0000000140BC10A1: mov     r15d, [rsi+0A74h]
 * 0000000140BC10A8: mov     rax, [rsi+7E8h]
 * 0000000140BC10AF: add     r15d, 0FFFFFF38h
 * 0000000140BC10B6: mov     [rbp+8D0h+var_8F8], ecx
 * 0000000140BC10B9: mov     rcx, [rsi+4E0h]
 * 0000000140BC10C0: mov     [rbp+8D0h+var_8F0], rcx
 * 0000000140BC10C4: mov     rcx, [rsi+5B8h]
 * 0000000140BC10CB: shr     r15d, 3
 * 0000000140BC10CF: mov     [rbp+8D0h+var_8D0], rcx
 * 0000000140BC10D3: mov     [rsp+9D0h+var_978], rax
 * 0000000140BC10D8: mov     [rsi+0C4h], r15d
 * 0000000140BC10DF: rdtsc
 * 0000000140BC10E1: shl     rdx, 20h
 * 0000000140BC10E5: or      rax, rdx
 * 0000000140BC10E8: mov     rcx, rax
 * 0000000140BC10EB: mov     rdx, rax
 * 0000000140BC10EE: ror     rcx, 3
 * 0000000140BC10F2: mov     rax, r8
 * 0000000140BC10F5: xor     rdx, rcx
 * 0000000140BC10F8: mul     rdx
 * 0000000140BC10FB: mov     rbx, rdx
 * 0000000140BC10FE: mov     [rbp+8D0h+var_408], rdx
 * 0000000140BC1105: xor     rbx, rax
 * 0000000140BC1108: jz      short loc_140BC10DF
 * 0000000140BC110A: mov     rax, [rsi+7D8h]
 * 0000000140BC1111: lea     rcx, [rsi+7B8h]
 * 0000000140BC1118: mov     r10d, 20h ; ' '
 * 0000000140BC111E: mov     [rbp+8D0h+var_950], rax
 * 0000000140BC1122: mov     eax, [rsi+848h]
 * 0000000140BC1128: lea     rdx, [rbp+8D0h+var_C8]
 * 0000000140BC112F: mov     dword ptr [rbp+8D0h+arg_8], eax
 * 0000000140BC1135: mov     r8d, r10d
 * 0000000140BC1138: mov     r13d, 0FFFFFFF8h
 * 0000000140BC113E: lea     r11d, [r10-1Ch]
 * 0000000140BC1142: mov     r9d, r11d
 * 0000000140BC1145: lea     r14d, [r10-1Fh]
 * 0000000140BC1149: mov     rax, [rcx]
 * 0000000140BC114C: add     r8d, r13d
 * 0000000140BC114F: mov     [rdx], rax
 * 0000000140BC1152: add     rcx, 8
 * 0000000140BC1156: add     rdx, 8
 * 0000000140BC115A: sub     r9, r14
 * 0000000140BC115D: jnz     short loc_140BC1149
 * 0000000140BC115F: test    r8d, r8d
 * 0000000140BC1162: jz      short loc_140BC117D
 * 0000000140BC1164: mov     esi, 0FFFFFFFFh
 * 0000000140BC1169: mov     al, [rcx]
 * 0000000140BC116B: add     rcx, r14
 * 0000000140BC116E: mov     [rdx], al
 * 0000000140BC1170: add     rdx, r14
 * 0000000140BC1173: add     r8d, esi
 * 0000000140BC1176: jnz     short loc_140BC1169
 * 0000000140BC1178: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC117D: mov     [rsi+7D8h], r9
 * 0000000140BC1184: lea     rax, [rsi+7B8h]
 * 0000000140BC118B: mov     [rsi+848h], r9d
 * 0000000140BC1192: mov     ecx, r10d
 * 0000000140BC1195: mov     rdx, r11
 * 0000000140BC1198: mov     [rax], r9
 * 0000000140BC119B: add     ecx, r13d
 * 0000000140BC119E: add     rax, 8
 * 0000000140BC11A2: sub     rdx, r14
 * 0000000140BC11A5: jnz     short loc_140BC1198
 * 0000000140BC11A7: mov     edx, 0FFFFFFFFh
 * 0000000140BC11AC: test    ecx, ecx
 * 0000000140BC11AE: jz      short loc_140BC11BA
 * 0000000140BC11B0: mov     [rax], r9b
 * 0000000140BC11B3: add     rax, r14
 * 0000000140BC11B6: add     ecx, edx
 * 0000000140BC11B8: jnz     short loc_140BC11B0
 * 0000000140BC11BA: mov     r11d, [rsi+804h]
 * 0000000140BC11C1: mov     r9, rsi
 * 0000000140BC11C4: add     [rsi+848h], r11d
 * 0000000140BC11CB: mov     rax, rsi
 * 0000000140BC11CE: mov     r10d, [rsi+834h]
 * 0000000140BC11D5: mov     r13, [rsi+838h]
 * 0000000140BC11DC: lea     rcx, [rsi+r11]
 * 0000000140BC11E0: cmp     rsi, rcx
 * 0000000140BC11E3: jnb     short loc_140BC11F6
 * 0000000140BC11E5: mov     r8d, 40h ; '@'
 * 0000000140BC11EB: prefetchnta byte ptr [rax]
 * 0000000140BC11EE: add     rax, r8
 * 0000000140BC11F1: cmp     rax, rcx
 * 0000000140BC11F4: jb      short loc_140BC11EB
 * 0000000140BC11F6: mov     r14d, r11d
 * 0000000140BC11F9: mov     r8, r13
 * 0000000140BC11FC: shr     r14d, 7
 * 0000000140BC1200: test    r14d, r14d
 * 0000000140BC1203: jz      short loc_140BC1276
 * 0000000140BC1205: mov     edi, 1
 * 0000000140BC120A: mov     r12, 7010008004002001h
 * 0000000140BC1214: mov     eax, 8
 * 0000000140BC1219: xor     r8, [r9]
 * 0000000140BC121C: mov     ecx, r10d
 * 0000000140BC121F: rol     r8, cl
 * 0000000140BC1222: xor     r8, [r9+8]
 * 0000000140BC1226: add     r9, 10h
 * 0000000140BC122A: rol     r8, cl
 * 0000000140BC122D: sub     rax, rdi
 * 0000000140BC1230: jnz     short loc_140BC1219
 * 0000000140BC1232: mov     rcx, r9
 * 0000000140BC1235: sub     rcx, rsi
 * 0000000140BC1238: xor     rcx, r13
 * 0000000140BC123B: mov     rax, rcx
 * 0000000140BC123E: rol     rax, 11h
 * 0000000140BC1242: xor     rcx, rax
 * 0000000140BC1245: mov     rax, r12
 * 0000000140BC1248: mul     rcx
 * 0000000140BC124B: xor     r10d, edx
 * 0000000140BC124E: mov     [rbp+8D0h+var_400], rdx
 * 0000000140BC1255: xor     r10d, eax
 * 0000000140BC1258: mov     edx, 0FFFFFFFFh
 * 0000000140BC125D: and     r10d, 3Fh
 * 0000000140BC1261: cmovz   r10d, edi
 * 0000000140BC1265: add     r14d, edx
 * 0000000140BC1268: jnz     short loc_140BC1214
 * 0000000140BC126A: mov     r12d, dword ptr [rsp+9D0h+var_960]
 * 0000000140BC126F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC1276: and     r11d, 7Fh
 * 0000000140BC127A: mov     r13d, 1
 * 0000000140BC1280: cmp     r11d, 8
 * 0000000140BC1284: jb      short loc_140BC12A3
 * 0000000140BC1286: mov     eax, r11d
 * 0000000140BC1289: shr     rax, 3
 * 0000000140BC128D: xor     r8, [r9]
 * 0000000140BC1290: mov     ecx, r10d
 * 0000000140BC1293: rol     r8, cl
 * 0000000140BC1296: add     r9, 8
 * 0000000140BC129A: add     r11d, 0FFFFFFF8h
 * 0000000140BC129E: sub     rax, r13
 * 0000000140BC12A1: jnz     short loc_140BC128D
 * 0000000140BC12A3: xor     r14d, r14d
 * 0000000140BC12A6: test    r11d, r11d
 * 0000000140BC12A9: jz      short loc_140BC12C0
 * 0000000140BC12AB: movzx   eax, byte ptr [r9]
 * 0000000140BC12AF: mov     ecx, r10d
 * 0000000140BC12B2: xor     r8, rax
 * 0000000140BC12B5: add     r9, r13
 * 0000000140BC12B8: rol     r8, cl
 * 0000000140BC12BB: add     r11d, edx
 * 0000000140BC12BE: jnz     short loc_140BC12AB
 * 0000000140BC12C0: mov     ecx, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC12C6: lea     rdx, [rsi+7B8h]
 * 0000000140BC12CD: mov     rax, [rbp+8D0h+var_950]
 * 0000000140BC12D1: mov     r9d, 4
 * 0000000140BC12D7: mov     [rsi+7D8h], rax
 * 0000000140BC12DE: add     [rsi+848h], ecx
 * 0000000140BC12E4: lea     rcx, [rbp+8D0h+var_C8]
 * 0000000140BC12EB: lea     r10d, [r9+1Ch]
 * 0000000140BC12EF: mov     rax, [rcx]
 * 0000000140BC12F2: add     r10d, 0FFFFFFF8h
 * 0000000140BC12F6: mov     [rdx], rax
 * 0000000140BC12F9: add     rcx, 8
 * 0000000140BC12FD: add     rdx, 8
 * 0000000140BC1301: sub     r9, r13
 * 0000000140BC1304: jnz     short loc_140BC12EF
 * 0000000140BC1306: test    r10d, r10d
 * 0000000140BC1309: jz      short loc_140BC1324
 * 0000000140BC130B: mov     esi, 0FFFFFFFFh
 * 0000000140BC1310: mov     al, [rcx]
 * 0000000140BC1312: add     rcx, r13
 * 0000000140BC1315: mov     [rdx], al
 * 0000000140BC1317: add     rdx, r13
 * 0000000140BC131A: add     r10d, esi
 * 0000000140BC131D: jnz     short loc_140BC1310
 * 0000000140BC131F: mov     rsi, [rsp+9D0h+var_970]
 * 0000000140BC1324: mov     [rsi+7D8h], r8
 * 0000000140BC132B: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140BC1335: jnz     loc_140BC14B4
 * 0000000140BC133B: mov     rcx, rsi
 * 0000000140BC133E: mov     eax, r14d
 * 0000000140BC1341: mov     r11d, 19h
 * 0000000140BC1347: xor     [rcx], rbx
 * 0000000140BC134A: add     eax, r13d
 * 0000000140BC134D: lea     rcx, [rcx+8]
 * 0000000140BC1351: cmp     eax, r11d
 * 0000000140BC1354: jb      short loc_140BC1347
 * 0000000140BC1356: mov     [rbp+8D0h+var_7F8], rbx
 * 0000000140BC135D: mov     r8d, r15d
 * 0000000140BC1360: test    r15d, r15d
 * 0000000140BC1363: jz      short loc_140BC139F
 * 0000000140BC1365: mov     edx, r15d
 * 0000000140BC1368: dec     rdx
 * 0000000140BC136B: lea     rdx, [rcx+rdx*8]
 * 0000000140BC136F: xor     [rdx], rbx
 * 0000000140BC1372: lea     rax, [rbp+8D0h+var_7F8]
 * 0000000140BC1379: mov     ecx, r8d
 * 0000000140BC137C: lea     rdx, [rdx-8]
 * 0000000140BC1380: ror     rbx, cl
 * 0000000140BC1383: mov     [rbp+8D0h+var_7F8], rbx
 * 0000000140BC138A: and     ebx, 3Fh
 * 0000000140BC138D: btc     [rax], rbx
 * 0000000140BC1391: sub     r8d, r13d
 * 0000000140BC1394: jz      short loc_140BC139F
 * 0000000140BC1396: mov     rbx, [rbp+8D0h+var_7F8]
 * 0000000140BC139D: jmp     short loc_140BC136F
 * 0000000140BC139F: bt      r12d, 12h
 * 0000000140BC13A4: jnb     short loc_140BC13F4
 * 0000000140BC13A6: rdtsc
 * 0000000140BC13A8: shl     rdx, 20h
 * 0000000140BC13AC: or      rax, rdx
 * 0000000140BC13AF: mov     rcx, rax
 * 0000000140BC13B2: mov     rdx, rax
 * 0000000140BC13B5: ror     rcx, 3
 * 0000000140BC13B9: mov     rax, 7010008004002001h
 * 0000000140BC13C3: xor     rdx, rcx
 * 0000000140BC13C6: mul     rdx
 * 0000000140BC13C9: mov     rcx, rdx
 * 0000000140BC13CC: mov     [rbp+8D0h+var_3F8], rdx
 * 0000000140BC13D3: xor     rcx, rax
 * 0000000140BC13D6: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140BC13E0: mul     rcx
 * 0000000140BC13E3: shr     rdx, 1
 * 0000000140BC13E6: lea     rax, [rdx+rdx*2]
 * 0000000140BC13EA: cmp     rcx, rax
 * 0000000140BC13ED: jz      short loc_140BC13FD
 * 0000000140BC13EF: jmp     loc_140BC14B4
 * 0000000140BC13F4: test    r12b, r12b
 * 0000000140BC13F7: js      loc_140BC14B4
 * 0000000140BC13FD: mov     r13, [rbp+8D0h+var_8D0]
 * 0000000140BC1401: mov     ecx, esi
 * 0000000140BC1403: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BC1407: mov     r9, rsi
 * 0000000140BC140A: mov     ebx, r11d
 * 0000000140BC140D: ror     r9, cl
 * 0000000140BC1410: mov     r11d, r14d
 * 0000000140BC1413: mov     r10, rsi
 * 0000000140BC1416: mov     r14d, [rbp+8D0h+var_8F8]
 * 0000000140BC141A: mov     eax, r11d
 * 0000000140BC141D: add     rax, rsi
 * 0000000140BC1420: sub     [r10], rax
 * 0000000140BC1423: mov     rcx, [r10]
 * 0000000140BC1426: bt      r12d, 8
 * 0000000140BC142B: jb      short loc_140BC1444
 * 0000000140BC142D: mov     rax, rdi
 * 0000000140BC1430: xor     rax, rcx
 * 0000000140BC1433: mov     ecx, r13d
 * 0000000140BC1436: bswap   rax
 * 0000000140BC1439: xor     rax, r9
 * 0000000140BC143C: ror     rax, cl
 * 0000000140BC143F: xor     rax, r13
 * 0000000140BC1442: jmp     short loc_140BC144A
 * 0000000140BC1444: mov     rax, r9
 * 0000000140BC1447: xor     rax, rcx
 * 0000000140BC144A: mov     rcx, r10
 * 0000000140BC144D: mov     edx, 0C8h
 * 0000000140BC1452: sub     edx, r11d
 * 0000000140BC1455: mov     [rcx], rax
 * 0000000140BC1458: mov     ecx, [r10]
 * 0000000140BC145B: mov     r8d, ecx
 * 0000000140BC145E: mov     eax, r11d
 * 0000000140BC1461: not     ecx
 * 0000000140BC1463: xor     rdx, rax
 * 0000000140BC1466: xor     r8d, 0EFAh
 * 0000000140BC146D: ror     rdx, cl
 * 0000000140BC1470: lea     eax, [r11+1]
 * 0000000140BC1474: xor     r9, rdx
 * 0000000140BC1477: mov     cl, r8b
 * 0000000140BC147A: rol     r9, cl
 * 0000000140BC147D: add     r10, 8
 * 0000000140BC1481: add     r9, rsi
 * 0000000140BC1484: mov     r11d, eax
 * 0000000140BC1487: xor     r9, r14
 * 0000000140BC148A: cmp     eax, 19h
 * 0000000140BC148D: jnz     short loc_140BC149E
 * 0000000140BC148F: bt      r12d, 12h
 * 0000000140BC1494: lea     eax, [r11-19h]
 * 0000000140BC1498: cmovnb  eax, r15d
 * 0000000140BC149C: add     ebx, eax
 * 0000000140BC149E: cmp     r11d, ebx
 * 0000000140BC14A1: jb      loc_140BC141A
 * 0000000140BC14A7: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140BC14AE: mov     r13d, 1
 * 0000000140BC14B4: mov     dword ptr [rbp+8D0h+arg_8], r13d
 * 0000000140BC14BB: rdtsc
 * 0000000140BC14BD: shl     rdx, 20h
 * 0000000140BC14C1: mov     rbx, 7010008004002001h
 * 0000000140BC14CB: or      rax, rdx
 * 0000000140BC14CE: mov     rcx, rax
 * 0000000140BC14D1: mov     rdx, rax
 * 0000000140BC14D4: ror     rcx, 3
 * 0000000140BC14D8: mov     rax, rbx
 * 0000000140BC14DB: xor     rdx, rcx
 * 0000000140BC14DE: mul     rdx
 * 0000000140BC14E1: mov     r15, rax
 * 0000000140BC14E4: mov     [rbp+8D0h+var_3F0], rdx
 * 0000000140BC14EB: xor     r15, rdx
 * 0000000140BC14EE: xor     r11d, r11d
 * 0000000140BC14F1: jmp     short loc_140BC1562
 * 0000000140BC14F3: mov     rax, r9
 * 0000000140BC14F6: xor     rax, rcx
 * 0000000140BC14F9: mov     rcx, r10
 * 0000000140BC14FC: mov     edx, 0C8h
 * 0000000140BC1501: sub     edx, ebx
 * 0000000140BC1503: xor     rdx, r11
 * 0000000140BC1506: mov     [rcx], rax
 * 0000000140BC1509: mov     eax, 1
 * 0000000140BC150E: mov     ecx, [r10]
 * 0000000140BC1511: add     ebx, eax
 * 0000000140BC1513: mov     r8d, ecx
 * 0000000140BC1516: add     r10, 8
 * 0000000140BC151A: not     ecx
 * 0000000140BC151C: xor     r8d, 0EFAh
 * 0000000140BC1523: ror     rdx, cl
 * 0000000140BC1526: add     r11, rax
 * 0000000140BC1529: xor     r9, rdx
 * 0000000140BC152C: mov     cl, r8b
 * 0000000140BC152F: rol     r9, cl
 * 0000000140BC1532: add     r9, rsi
 * 0000000140BC1535: xor     r9, [rbp+8D0h+var_950]
 * 0000000140BC1539: cmp     ebx, 19h
 * 0000000140BC153C: jb      loc_140BC106A
 * 0000000140BC1542: mov     rax, [rsi+278h]
 * 0000000140BC1549: lea     rcx, [rsi+820h]
 * 0000000140BC1550: call    KeGuardDispatchICall
 * 0000000140BC1555: xor     r11d, r11d
 * 0000000140BC1558: mov     rbx, 7010008004002001h
 * 0000000140BC1562: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BC1569: test    dword ptr [r12+9D8h], 8000000h
 * 0000000140BC1575: mov     r14, [r12+7F8h]
 * 0000000140BC157D: jz      short loc_140BC15B8
 * 0000000140BC157F: rdtsc
 * 0000000140BC1581: shl     rdx, 20h
 * 0000000140BC1585: or      rax, rdx
 * 0000000140BC1588: mov     rcx, rax
 * 0000000140BC158B: mov     rdx, rax
 * 0000000140BC158E: ror     rcx, 3
 * 0000000140BC1592: mov     rax, rbx
 * 0000000140BC1595: xor     rdx, rcx
 * 0000000140BC1598: mul     rdx
 * 0000000140BC159B: mov     r14, rdx
 * 0000000140BC159E: mov     [rbp+8D0h+var_3E8], rdx
 * 0000000140BC15A5: xor     r14, rax
 * 0000000140BC15A8: and     r14, 0Fh
 * 0000000140BC15AC: shl     r14, 4
 * 0000000140BC15B0: add     r14, [r12+5C8h]
 * 0000000140BC15B8: mov     r13d, 28h ; '('
 * 0000000140BC15BE: lea     rcx, [r12+918h]
 * 0000000140BC15C6: mov     r8d, r13d
 * 0000000140BC15C9: lea     rdx, [rbp+8D0h+var_668]
 * 0000000140BC15D0: lea     r9d, [r13-23h]
 * 0000000140BC15D4: lea     r10d, [r13-27h]
 * 0000000140BC15D8: mov     rax, [rcx]
 * 0000000140BC15DB: add     r8d, 0FFFFFFF8h
 * 0000000140BC15DF: mov     [rdx], rax
 * 0000000140BC15E2: add     rcx, 8
 * 0000000140BC15E6: add     rdx, 8
 * 0000000140BC15EA: sub     r9, r10
 * 0000000140BC15ED: jnz     short loc_140BC15D8
 * 0000000140BC15EF: test    r8d, r8d
 * 0000000140BC15F2: jz      short loc_140BC1610
 * 0000000140BC15F4: mov     r12d, 0FFFFFFFFh
 * 0000000140BC15FA: mov     al, [rcx]
 * 0000000140BC15FC: add     rcx, r10
 * 0000000140BC15FF: mov     [rdx], al
 * 0000000140BC1601: add     rdx, r10
 * 0000000140BC1604: add     r8d, r12d
 * 0000000140BC1607: jnz     short loc_140BC15FA
 * 0000000140BC1609: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BC1610: mov     eax, [r12+9D8h]
 * 0000000140BC1618: bt      eax, 0Eh
 * 0000000140BC161C: jb      short loc_140BC162C
 * 0000000140BC161E: cmp     [r12+918h], r11d
 * 0000000140BC1626: jnz     loc_140BC1EA8
 * 0000000140BC162C: bt      eax, 1Dh
 * 0000000140BC1630: jb      loc_140BC242F
 * 0000000140BC1636: mov     al, [r12+940h]
 * 0000000140BC163E: mov     r9, r15
 * 0000000140BC1641: sub     al, r10b
 * 0000000140BC1644: xor     r9, rsi
 * 0000000140BC1647: movzx   r11d, al
 * 0000000140BC164B: mov     r8d, 3Fh ; '?'
 * 0000000140BC1651: sub     r8d, r11d
 * 0000000140BC1654: rdtsc
 * 0000000140BC1656: shl     rdx, 20h
 * 0000000140BC165A: mov     r12, 7010008004002001h
 * 0000000140BC1664: or      rax, rdx
 * 0000000140BC1667: mov     rcx, rax
 * 0000000140BC166A: mov     rdx, rax
 * 0000000140BC166D: ror     rcx, 3
 * 0000000140BC1671: mov     rax, rbx
 * 0000000140BC1674: xor     rdx, rcx
 * 0000000140BC1677: mov     ebx, r8d
 * 0000000140BC167A: mul     rdx
 * 0000000140BC167D: mov     [rbp+8D0h+var_3E0], rdx
 * 0000000140BC1684: xor     rax, rdx
 * 0000000140BC1687: xor     edx, edx
 * 0000000140BC1689: div     rbx
 * 0000000140BC168C: lea     r10d, [r11+rdx]
 * 0000000140BC1690: rdtsc
 * 0000000140BC1692: shl     rdx, 20h
 * 0000000140BC1696: or      rax, rdx
 * 0000000140BC1699: mov     rcx, rax
 * 0000000140BC169C: mov     r8, rax
 * 0000000140BC169F: ror     rcx, 3
 * 0000000140BC16A3: mov     rax, r12
 * 0000000140BC16A6: xor     r8, rcx
 * 0000000140BC16A9: mul     r8
 * 0000000140BC16AC: xor     rax, rdx
 * 0000000140BC16AF: mov     [rbp+8D0h+var_3D8], rdx
 * 0000000140BC16B6: xor     edx, edx
 * 0000000140BC16B8: div     rbx
 * 0000000140BC16BB: add     edx, r11d
 * 0000000140BC16BE: cmp     edx, r10d
 * 0000000140BC16C1: jz      short loc_140BC1690
 * 0000000140BC16C3: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BC16CA: xor     r11d, r11d
 * 0000000140BC16CD: mov     eax, r10d
 * 0000000140BC16D0: bts     r9, rax
 * 0000000140BC16D4: mov     eax, edx
 * 0000000140BC16D6: btr     r9, rax
 * 0000000140BC16DA: cmp     dword ptr [r12+944h], 3
 * 0000000140BC16E3: mov     rbx, [r12+7B0h]
 * 0000000140BC16EB: mov     rsi, [r12+7A8h]
 * 0000000140BC16F3: jnz     loc_140BC188B
 * 0000000140BC16F9: mov     r12, [rsp+9D0h+var_978]
 * 0000000140BC16FE: test    r12, r12
 * 0000000140BC1701: jz      loc_140BC1884
 * 0000000140BC1707: mov     rcx, [rbp+8D0h+arg_0]
 * 0000000140BC170E: mov     rax, [rcx+370h]
 * 0000000140BC1715: mov     byte ptr [rbx], 13h
 * 0000000140BC1718: mov     byte ptr [rbx+1], 1
 * 0000000140BC171C: mov     [rbx+2], r11w
 * 0000000140BC1721: mov     [rbx+18h], rax
 * 0000000140BC1725: mov     [rbx+20h], r12
 * 0000000140BC1729: mov     [rbx+38h], r11
 * 0000000140BC172D: mov     [rbx+10h], r11
 * 0000000140BC1731: mov     [rbx+28h], r9
 * 0000000140BC1735: mov     rax, [rcx+360h]
 * 0000000140BC173C: mov     rcx, [r12+8]
 * 0000000140BC1741: mov     r8, [r12]
 * 0000000140BC1745: mov     edx, [r12+10h]
 * 0000000140BC174A: call    KeGuardDispatchICall
 * 0000000140BC174F: mov     r9, [r12]
 * 0000000140BC1753: mov     rcx, r12
 * 0000000140BC1756: rol     rcx, 11h
 * 0000000140BC175A: mov     r10, 7010008004002001h
 * 0000000140BC1764: xor     rcx, r12
 * 0000000140BC1767: mov     rax, r10
 * 0000000140BC176A: mul     rcx
 * 0000000140BC176D: mov     ecx, 4
 * 0000000140BC1772: mov     [rbp+8D0h+var_3D0], rdx
 * 0000000140BC1779: xor     rdx, rax
 * 0000000140BC177C: lea     rax, [r12+18h]
 * 0000000140BC1781: mov     r8, rdx
 * 0000000140BC1784: xor     r11d, r11d
 * 0000000140BC1787: lea     r12d, [rcx-3]
 * 0000000140BC178B: xor     [rax], r8
 * 0000000140BC178E: lea     rax, [rax-8]
 * 0000000140BC1792: rol     r8, cl
 * 0000000140BC1795: sub     ecx, r12d
 * 0000000140BC1798: jnz     short loc_140BC178B
 * 0000000140BC179A: and     dl, 0Fh
 * 0000000140BC179D: cmp     dl, 7
 * 0000000140BC17A0: jnb     short loc_140BC1808
 * 0000000140BC17A2: mov     rax, r10
 * 0000000140BC17A5: mov     rcx, r9
 * 0000000140BC17A8: rol     rcx, 11h
 * 0000000140BC17AC: mov     r10d, 6
 * 0000000140BC17B2: xor     rcx, r9
 * 0000000140BC17B5: mul     rcx
 * 0000000140BC17B8: mov     [rbp+8D0h+var_3C8], rdx
 * 0000000140BC17BF: xor     rdx, rax
 * 0000000140BC17C2: add     r8, rdx
 * 0000000140BC17C5: lea     rax, [r9+28h]
 * 0000000140BC17C9: movsx   edx, word ptr [r9+8]
 * 0000000140BC17CE: xor     [rax], r8
 * 0000000140BC17D1: mov     ecx, r10d
 * 0000000140BC17D4: rol     r8, cl
 * 0000000140BC17D7: lea     rax, [rax-8]
 * 0000000140BC17DB: sub     r10d, r12d
 * 0000000140BC17DE: jnz     short loc_140BC17CE
 * 0000000140BC17E0: sub     rdx, 30h ; '0'
 * 0000000140BC17E4: shr     rdx, 3
 * 0000000140BC17E8: test    edx, edx
 * 0000000140BC17EA: jz      short loc_140BC1808
 * 0000000140BC17EC: movsxd  r10, edx
 * 0000000140BC17EF: add     r10, 5
 * 0000000140BC17F3: lea     r10, [r9+r10*8]
 * 0000000140BC17F7: xor     [r10], r8
 * 0000000140BC17FA: mov     ecx, edx
 * 0000000140BC17FC: rol     r8, cl
 * 0000000140BC17FF: lea     r10, [r10-8]
 * 0000000140BC1803: sub     edx, r12d
 * 0000000140BC1806: jnz     short loc_140BC17F7
 * 0000000140BC1808: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BC180F: mov     r8d, 1
 * 0000000140BC1815: mov     [rbx+40h], r15
 * 0000000140BC1819: mov     eax, [r12+9D8h]
 * 0000000140BC1821: test    al, al
 * 0000000140BC1823: jns     loc_140BC18B2
 * 0000000140BC1829: lea     r10, [r14-48h]
 * 0000000140BC182D: mov     [r10+40h], rbx
 * 0000000140BC1831: rdtsc
 * 0000000140BC1833: shl     rdx, 20h
 * 0000000140BC1837: mov     r14, 7010008004002001h
 * 0000000140BC1841: or      rax, rdx
 * 0000000140BC1844: mov     rcx, rax
 * 0000000140BC1847: mov     rdx, rax
 * 0000000140BC184A: ror     rcx, 3
 * 0000000140BC184E: mov     rax, r14
 * 0000000140BC1851: xor     rdx, rcx
 * 0000000140BC1854: mov     ecx, 19h
 * 0000000140BC1859: mul     rdx
 * 0000000140BC185C: mov     [rbp+8D0h+var_3C0], rdx
 * 0000000140BC1863: xor     rdx, rax
 * 0000000140BC1866: lea     rax, [r10+48h]
 * 0000000140BC186A: xor     [rax], rdx
 * 0000000140BC186D: lea     rax, [rax+8]
 * 0000000140BC1871: sub     rcx, r8
 * 0000000140BC1874: jnz     short loc_140BC186A
 * 0000000140BC1876: mov     dword ptr [r10+48h], 48513148h
 * 0000000140BC187E: mov     [r10+20h], rdx
 * 0000000140BC1882: jmp     short loc_140BC18BF
 * 0000000140BC1884: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BC188B: mov     byte ptr [rbx], 13h
 * 0000000140BC188E: mov     r8d, 1
 * 0000000140BC1894: mov     [rbx+1], r8b
 * 0000000140BC1898: mov     [rbx+2], r11w
 * 0000000140BC189D: mov     [rbx+18h], r14
 * 0000000140BC18A1: mov     [rbx+20h], r9
 * 0000000140BC18A5: mov     [rbx+38h], r11
 * 0000000140BC18A9: mov     [rbx+10h], r11
 * 0000000140BC18AD: jmp     loc_140BC1815
 * 0000000140BC18B2: mov     r10, rbx
 * 0000000140BC18B5: mov     r14, 7010008004002001h
 * 0000000140BC18BF: mov     rdx, [r12+0AE0h]
 * 0000000140BC18C7: test    rdx, rdx
 * 0000000140BC18CA: jz      loc_140BC1951
 * 0000000140BC18D0: mov     rdx, [rdx+20h]
 * 0000000140BC18D4: mov     eax, 0E04C2400h
 * 0000000140BC18D9: mov     rcx, rdx
 * 0000000140BC18DC: mov     r14d, 0Fh
 * 0000000140BC18E2: xor     rcx, rax
 * 0000000140BC18E5: shr     rcx, 4
 * 0000000140BC18E9: xor     rcx, rdx
 * 0000000140BC18EC: shr     rcx, 4
 * 0000000140BC18F0: xor     rcx, [r12+588h]
 * 0000000140BC18F8: mov     r9b, cl
 * 0000000140BC18FB: mov     r11, rcx
 * 0000000140BC18FE: and     r9b, r14b
 * 0000000140BC1901: jnz     short loc_140BC1906
 * 0000000140BC1903: mov     r9b, r8b
 * 0000000140BC1906: mov     r8, rcx
 * 0000000140BC1909: and     r8, r14
 * 0000000140BC190C: add     r8, rdx
 * 0000000140BC190F: mov     rdx, [r8]
 * 0000000140BC1912: mov     rax, rdx
 * 0000000140BC1915: xor     rax, 1DF400h
 * 0000000140BC191B: shr     rax, 4
 * 0000000140BC191F: xor     rax, rdx
 * 0000000140BC1922: shr     rax, 4
 * 0000000140BC1926: xor     rcx, rax
 * 0000000140BC1929: add     r9b, 0FFh
 * 0000000140BC192D: jnz     short loc_140BC1906
 * 0000000140BC192F: mov     r14, 7010008004002001h
 * 0000000140BC1939: bt      r11, 0Ch
 * 0000000140BC193E: jnb     short loc_140BC1943
 * 0000000140BC1940: xor     r10, r11
 * 0000000140BC1943: mov     [r8], r10
 * 0000000140BC1946: xor     r11d, r11d
 * 0000000140BC1949: mov     r10, [r12+0AE0h]
 * 0000000140BC1951: lock or [rsp+9D0h+var_9D0], r11d
 * 0000000140BC1956: mov     ecx, [r12+858h]
 * 0000000140BC195E: test    ecx, ecx
 * 0000000140BC1960: jz      loc_140BC1DF9
 * 0000000140BC1966: sub     ecx, 1
 * 0000000140BC1969: jz      loc_140BC1DE0
 * 0000000140BC196F: sub     ecx, 1
 * 0000000140BC1972: jz      loc_140BC1DCC
 * 0000000140BC1978: sub     ecx, 1
 * 0000000140BC197B: jz      loc_140BC1C0F
 * 0000000140BC1981: cmp     ecx, 1
 * 0000000140BC1984: jz      loc_140BC1A0C
 * 0000000140BC198A: mov     r8, [r12+9E0h]
 * 0000000140BC1992: mov     [r8+48h], r10
 * 0000000140BC1996: lock or [rsp+9D0h+var_9D0], r11d
 * 0000000140BC199B: rdtsc
 * 0000000140BC199D: shl     rdx, 20h
 * 0000000140BC19A1: or      rax, rdx
 * 0000000140BC19A4: mov     rcx, rax
 * 0000000140BC19A7: mov     rdx, rax
 * 0000000140BC19AA: ror     rcx, 3
 * 0000000140BC19AE: mov     rax, r14
 * 0000000140BC19B1: xor     rdx, rcx
 * 0000000140BC19B4: mul     rdx
 * 0000000140BC19B7: mov     rcx, rdx
 * 0000000140BC19BA: mov     [rbp+8D0h+var_2C8], rdx
 * 0000000140BC19C1: xor     rcx, rax
 * 0000000140BC19C4: mov     rax, 0ABCC77118461CEFDh
 * 0000000140BC19CE: mul     rcx
 * 0000000140BC19D1: shr     rdx, 1Ah
 * 0000000140BC19D5: imul    rax, rdx, 5F5E100h
 * 0000000140BC19DC: sub     rcx, rax
 * 0000000140BC19DF: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140BC19E9: add     rcx, 47868C00h
 * 0000000140BC19F0: imul    rcx
 * 0000000140BC19F3: add     rdx, rcx
 * 0000000140BC19F6: sar     rdx, 17h
 * 0000000140BC19FA: mov     rax, rdx
 * 0000000140BC19FD: shr     rax, 3Fh
 * 0000000140BC1A01: add     rdx, rax
 * 0000000140BC1A04: mov     [r8], edx
 * 0000000140BC1A07: jmp     loc_140BC1EA2
 * 0000000140BC1A0C: mov     r8, [r12+0A28h]
 * 0000000140BC1A14: xor     r9d, r9d
 * 0000000140BC1A17: mov     rcx, [r12+0A38h]
 * 0000000140BC1A1F: mov     rdx, rbx
 * 0000000140BC1A22: mov     rax, [r12+0A30h]
 * 0000000140BC1A2A: mov     rdi, [r12+9E0h]
 * 0000000140BC1A32: mov     byte ptr [r8], 12h
 * 0000000140BC1A36: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140BC1A3B: mov     [r8+50h], r11b
 * 0000000140BC1A3F: mov     [r8+8], rdi
 * 0000000140BC1A43: mov     [r8+20h], rax
 * 0000000140BC1A47: mov     [r8+28h], r11
 * 0000000140BC1A4B: mov     [r8+30h], rcx
 * 0000000140BC1A4F: mov     [r8+51h], r11b
 * 0000000140BC1A53: mov     [r8+38h], r11
 * 0000000140BC1A57: mov     [r8+52h], r11b
 * 0000000140BC1A5B: xor     r8d, r8d
 * 0000000140BC1A5E: mov     rax, [r12+2C0h]
 * 0000000140BC1A66: mov     rcx, [r12+0A28h]
 * 0000000140BC1A6E: call    KeGuardDispatchICall
 * 0000000140BC1A73: xor     r11d, r11d
 * 0000000140BC1A76: test    al, al
 * 0000000140BC1A78: jnz     loc_140BC1EA2
 * 0000000140BC1A7E: lea     r10d, [r11+1]
 * 0000000140BC1A82: cmp     [r12+918h], r11d
 * 0000000140BC1A8A: jnz     loc_140BC1BB2
 * 0000000140BC1A90: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC1A9A: add     rax, r12
 * 0000000140BC1A9D: mov     [r12+920h], rax
 * 0000000140BC1AA5: mov     [r12+928h], r11
 * 0000000140BC1AAD: mov     qword ptr [r12+930h], 104h
 * 0000000140BC1AB9: mov     [r12+938h], rdi
 * 0000000140BC1AC1: mov     [r12+918h], r10d
 * 0000000140BC1AC9: mov     ecx, [r12+9D8h]
 * 0000000140BC1AD1: bt      ecx, 1Dh
 * 0000000140BC1AD5: jb      loc_140BC1BB2
 * 0000000140BC1ADB: test    dword ptr [r12+9DCh], 200000h
 * 0000000140BC1AE7: jz      loc_140BC1BB2
 * 0000000140BC1AED: test    r10b, cl
 * 0000000140BC1AF0: jz      loc_140BC1BB2
 * 0000000140BC1AF6: mov     ecx, [r12+0A74h]
 * 0000000140BC1AFE: mov     eax, [r12+804h]
 * 0000000140BC1B06: mov     r10, [r12+838h]
 * 0000000140BC1B0E: sub     eax, ecx
 * 0000000140BC1B10: mov     r8, [r12+0A78h]
 * 0000000140BC1B18: lea     rdx, [rcx+r12]
 * 0000000140BC1B1C: mov     ecx, eax
 * 0000000140BC1B1E: shr     rcx, 3
 * 0000000140BC1B22: lea     r9, [rdx+rcx*8]
 * 0000000140BC1B26: jmp     short loc_140BC1B49
 * 0000000140BC1B28: xor     [rdx], r8
 * 0000000140BC1B2B: mov     rax, [rdx]
 * 0000000140BC1B2E: movzx   ecx, r8b
 * 0000000140BC1B32: xor     rax, r10
 * 0000000140BC1B35: and     ecx, 3Fh
 * 0000000140BC1B38: ror     r8, cl
 * 0000000140BC1B3B: add     r8, rax
 * 0000000140BC1B3E: xor     r8, 0EFAh
 * 0000000140BC1B45: add     rdx, 8
 * 0000000140BC1B49: cmp     rdx, r9
 * 0000000140BC1B4C: jnz     short loc_140BC1B28
 * 0000000140BC1B4E: btr     dword ptr [r12+9DCh], 15h
 * 0000000140BC1B58: cmp     r8, [r12+0A80h]
 * 0000000140BC1B60: jz      short loc_140BC1BAC
 * 0000000140BC1B62: mov     ecx, [r12+804h]
 * 0000000140BC1B6A: mov     rax, [r12+588h]
 * 0000000140BC1B72: mov     [rax], r12
 * 0000000140BC1B75: mov     [rax+10h], ecx
 * 0000000140BC1B78: mov     rcx, [r12+0A80h]
 * 0000000140BC1B80: cmp     [r12+918h], r11d
 * 0000000140BC1B88: jnz     short loc_140BC1B99
 * 0000000140BC1B8A: mov     rax, [r12+588h]
 * 0000000140BC1B92: xor     rcx, r8
 * 0000000140BC1B95: mov     [rax+18h], rcx
 * 0000000140BC1B99: xor     edx, edx
 * 0000000140BC1B9B: mov     r9d, 100h
 * 0000000140BC1BA1: mov     rcx, r12
 * 0000000140BC1BA4: call    sub_140BC7384
 * 0000000140BC1BA9: xor     r11d, r11d
 * 0000000140BC1BAC: mov     r10d, 1
 * 0000000140BC1BB2: lea     rcx, [r12+918h]
 * 0000000140BC1BBA: mov     r12d, 5
 * 0000000140BC1BC0: lea     rdx, [rbp+8D0h+var_668]
 * 0000000140BC1BC7: mov     rax, [rcx]
 * 0000000140BC1BCA: add     r13d, 0FFFFFFF8h
 * 0000000140BC1BCE: mov     [rdx], rax
 * 0000000140BC1BD1: add     rcx, 8
 * 0000000140BC1BD5: add     rdx, 8
 * 0000000140BC1BD9: sub     r12, r10
 * 0000000140BC1BDC: jnz     short loc_140BC1BC7
 * 0000000140BC1BDE: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BC1BE5: test    r13d, r13d
 * 0000000140BC1BE8: jz      loc_140BC1EA8
 * 0000000140BC1BEE: mov     r12d, 0FFFFFFFFh
 * 0000000140BC1BF4: mov     al, [rcx]
 * 0000000140BC1BF6: add     rcx, r10
 * 0000000140BC1BF9: mov     [rdx], al
 * 0000000140BC1BFB: add     rdx, r10
 * 0000000140BC1BFE: add     r13d, r12d
 * 0000000140BC1C01: jnz     short loc_140BC1BF4
 * 0000000140BC1C03: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BC1C0A: jmp     loc_140BC1EA8
 * 0000000140BC1C0F: mov     rdi, [r12+9E0h]
 * 0000000140BC1C17: mov     r10d, 1
 * 0000000140BC1C1D: mov     rax, [r12+6A8h]
 * 0000000140BC1C25: mov     rcx, [rdi+rax]
 * 0000000140BC1C29: test    rcx, rcx
 * 0000000140BC1C2C: jz      loc_140BC1DB6
 * 0000000140BC1C32: cmp     [r12+918h], r11d
 * 0000000140BC1C3A: jnz     loc_140BC1D62
 * 0000000140BC1C40: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140BC1C4A: add     rax, r12
 * 0000000140BC1C4D: mov     [r12+920h], rax
 * 0000000140BC1C55: mov     [r12+928h], r11
 * 0000000140BC1C5D: mov     qword ptr [r12+930h], 104h
 * 0000000140BC1C69: mov     [r12+938h], rcx
 * 0000000140BC1C71: mov     [r12+918h], r10d
 * 0000000140BC1C79: mov     ecx, [r12+9D8h]
 * 0000000140BC1C81: bt      ecx, 1Dh
 * 0000000140BC1C85: jb      loc_140BC1D62
 * 0000000140BC1C8B: test    dword ptr [r12+9DCh], 200000h
 * 0000000140BC1C97: jz      loc_140BC1D62
 * 0000000140BC1C9D: test    r10b, cl
 * 0000000140BC1CA0: jz      loc_140BC1D62
 * 0000000140BC1CA6: mov     ecx, [r12+0A74h]
 * 0000000140BC1CAE: mov     eax, [r12+804h]
 * 0000000140BC1CB6: mov     r10, [r12+838h]
 * 0000000140BC1CBE: sub     eax, ecx
 * 0000000140BC1CC0: mov     r8, [r12+0A78h]
 * 0000000140BC1CC8: lea     rdx, [rcx+r12]
 * 0000000140BC1CCC: mov     ecx, eax
 * 0000000140BC1CCE: shr     rcx, 3
 * 0000000140BC1CD2: lea     r9, [rdx+rcx*8]
 * 0000000140BC1CD6: jmp     short loc_140BC1CF9
 * 0000000140BC1CD8: xor     [rdx], r8
 * 0000000140BC1CDB: mov     rax, [rdx]
 * 0000000140BC1CDE: movzx   ecx, r8b
 * 0000000140BC1CE2: xor     rax, r10
 * 0000000140BC1CE5: and     ecx, 3Fh
 * 0000000140BC1CE8: ror     r8, cl
 * 0000000140BC1CEB: add     r8, rax
 * 0000000140BC1CEE: xor     r8, 0EFAh
 * 0000000140BC1CF5: add     rdx, 8
 * 0000000140BC1CF9: cmp     rdx, r9
 * 0000000140BC1CFC: jnz     short loc_140BC1CD8
 * 0000000140BC1CFE: btr     dword ptr [r12+9DCh], 15h
 * 0000000140BC1D08: cmp     r8, [r12+0A80h]
 * 0000000140BC1D10: jz      short loc_140BC1D5C
 * 0000000140BC1D12: mov     ecx, [r12+804h]
 * 0000000140BC1D1A: mov     rax, [r12+588h]
 * 0000000140BC1D22: mov     [rax], r12
 * 0000000140BC1D25: mov     [rax+10h], ecx
 * 0000000140BC1D28: mov     rcx, [r12+0A80h]
 * 0000000140BC1D30: cmp     [r12+918h], r11d
 * 0000000140BC1D38: jnz     short loc_140BC1D49
 * 0000000140BC1D3A: mov     rax, [r12+588h]
 * 0000000140BC1D42: xor     rcx, r8
 * 0000000140BC1D45: mov     [rax+18h], rcx
 * 0000000140BC1D49: xor     edx, edx
 * 0000000140BC1D4B: mov     r9d, 100h
 * 0000000140BC1D51: mov     rcx, r12
 * 0000000140BC1D54: call    sub_140BC7384
 * 0000000140BC1D59: xor     r11d, r11d
 * 0000000140BC1D5C: mov     r10d, 1
 * 0000000140BC1D62: lea     rcx, [r12+918h]
 * 0000000140BC1D6A: mov     r12d, 5
 * 0000000140BC1D70: lea     rdx, [rbp+8D0h+var_668]
 * 0000000140BC1D77: mov     rax, [rcx]
 * 0000000140BC1D7A: add     r13d, 0FFFFFFF8h
 * 0000000140BC1D7E: mov     [rdx], rax
 * 0000000140BC1D81: add     rcx, 8
 * 0000000140BC1D85: add     rdx, 8
 * 0000000140BC1D89: sub     r12, r10
 * 0000000140BC1D8C: jnz     short loc_140BC1D77
 * 0000000140BC1D8E: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BC1D95: test    r13d, r13d
 * 0000000140BC1D98: jz      short loc_140BC1DB6
 * 0000000140BC1D9A: mov     r12d, 0FFFFFFFFh
 * 0000000140BC1DA0: mov     al, [rcx]
 * 0000000140BC1DA2: add     rcx, r10
 * 0000000140BC1DA5: mov     [rdx], al
 * 0000000140BC1DA7: add     rdx, r10
 * 0000000140BC1DAA: add     r13d, r12d
 * 0000000140BC1DAD: jnz     short loc_140BC1DA0
 * 0000000140BC1DAF: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BC1DB6: lock or [rsp+9D0h+var_9D0], r11d
 * 0000000140BC1DBB: mov     rax, [r12+6A8h]
 * 0000000140BC1DC3: mov     [rdi+rax], rbx
 * 0000000140BC1DC7: jmp     loc_140BC1EA8
 * 0000000140BC1DCC: mov     rax, [r12+7E0h]
 * 0000000140BC1DD4: mov     [rax+80h], r10
 * 0000000140BC1DDB: jmp     loc_140BC1EA2
 * 0000000140BC1DE0: mov     rcx, [r12+7E0h]
 * 0000000140BC1DE8: mov     rax, [r12+638h]
 * 0000000140BC1DF0: mov     [rcx+rax], r10
 * 0000000140BC1DF4: jmp     loc_140BC1EA2
 * 0000000140BC1DF9: rdtsc
 * 0000000140BC1DFB: shl     rdx, 20h
 * 0000000140BC1DFF: or      rax, rdx
 * 0000000140BC1E02: mov     rcx, rax
 * 0000000140BC1E05: mov     rdx, rax
 * 0000000140BC1E08: ror     rcx, 3
 * 0000000140BC1E0C: mov     rax, r14
 * 0000000140BC1E0F: xor     rdx, rcx
 * 0000000140BC1E12: mul     rdx
 * 0000000140BC1E15: mov     rcx, rdx
 * 0000000140BC1E18: mov     [rbp+8D0h+var_3B0], rdx
 * 0000000140BC1E1F: xor     rcx, rax
 * 0000000140BC1E22: mov     rax, 0ABCC77118461CEFDh
 * 0000000140BC1E2C: mul     rcx
 * 0000000140BC1E2F: shr     rdx, 1Ah
 * 0000000140BC1E33: imul    rax, rdx, 5F5E100h
 * 0000000140BC1E3A: sub     rcx, rax
 * 0000000140BC1E3D: sub     rdi, rcx
 * 0000000140BC1E40: rdtsc
 * 0000000140BC1E42: shl     rdx, 20h
 * 0000000140BC1E46: xor     r8d, r8d
 * 0000000140BC1E49: or      rax, rdx
 * 0000000140BC1E4C: mov     [rsp+9D0h+BugCheckParameter4], r10
 * 0000000140BC1E51: mov     rcx, rax
 * 0000000140BC1E54: mov     rdx, rax
 * 0000000140BC1E57: ror     rcx, 3
 * 0000000140BC1E5B: mov     rax, r14
 * 0000000140BC1E5E: xor     rdx, rcx
 * 0000000140BC1E61: mov     rcx, rsi
 * 0000000140BC1E64: mul     rdx
 * 0000000140BC1E67: mov     r9, rdx
 * 0000000140BC1E6A: mov     [rbp+8D0h+var_3A8], rdx
 * 0000000140BC1E71: xor     r9, rax
 * 0000000140BC1E74: mov     rax, 346DC5D63886594Bh
 * 0000000140BC1E7E: mul     r9
 * 0000000140BC1E81: shr     rdx, 0Bh
 * 0000000140BC1E85: imul    rax, rdx, 2710h
 * 0000000140BC1E8C: mov     rdx, rdi
 * 0000000140BC1E8F: sub     r9, rax
 * 0000000140BC1E92: mov     rax, [r12+1E8h]
 * 0000000140BC1E9A: call    KeGuardDispatchICall
 * 0000000140BC1E9F: xor     r11d, r11d
 * 0000000140BC1EA2: mov     r10d, 1
 * 0000000140BC1EA8: cmp     [rbp+8D0h+var_668], r11d
 * 0000000140BC1EAF: jz      loc_140BC242F
 * 0000000140BC1EB5: mov     r9d, [r12+9D8h]
 * 0000000140BC1EBD: bt      r9d, 0Eh
 * 0000000140BC1EC2: jb      loc_140BC242F
 * 0000000140BC1EC8: mov     rdi, [rbp+8D0h+var_650]
 * 0000000140BC1ECF: mov     rsi, [rbp+8D0h+var_648]
 * 0000000140BC1ED6: mov     r14, [rbp+8D0h+var_658]
 * 0000000140BC1EDD: mov     r15, [rbp+8D0h+var_660]
 * 0000000140BC1EE4: mov     [rbp+8D0h+var_900], rdi
 * 0000000140BC1EE8: mov     [rbp+8D0h+var_920], rsi
 * 0000000140BC1EEC: mov     [rbp+8D0h+var_910], r14
 * 0000000140BC1EF0: mov     [rbp+8D0h+var_930], r15
 * 0000000140BC1EF4: mov     rax, cr8
 * 0000000140BC1EF8: mov     ecx, 2
 * 0000000140BC1EFD: cmp     al, cl
 * 0000000140BC1EFF: jnb     short loc_140BC1F11
 * 0000000140BC1F01: mov     rax, cr8
 * 0000000140BC1F05: mov     cr8, rcx
 * 0000000140BC1F09: mov     r9d, [r12+9D8h]
 * 0000000140BC1F11: mov     r8, gs:20h
 * 0000000140BC1F1A: mov     rax, [r12+640h]
 * 0000000140BC1F22: mov     rcx, gs:20h
 * 0000000140BC1F2B: mov     r13, [r8+rax]
 * 0000000140BC1F2F: mov     rax, [r12+648h]
 * 0000000140BC1F37: mov     [rsp+9D0h+var_968], r13
 * 0000000140BC1F3C: mov     rdx, [rax+r8]
 * 0000000140BC1F40: mov     rax, [r12+658h]
 * 0000000140BC1F48: add     rdx, [r12+788h]
 * 0000000140BC1F50: mov     rbx, [rcx+rax]
 * 0000000140BC1F54: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BC1F5B: mov     [rbp+8D0h+var_940], rbx
 * 0000000140BC1F5F: cmp     rax, r13
 * 0000000140BC1F62: ja      short loc_140BC1F7E
 * 0000000140BC1F64: mov     eax, [r12+5FCh]
 * 0000000140BC1F6C: mov     rcx, r13
 * 0000000140BC1F6F: sub     rcx, rax
 * 0000000140BC1F72: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BC1F79: cmp     rax, rcx
 * 0000000140BC1F7C: jnb     short loc_140BC1FCD
 * 0000000140BC1F7E: mov     rax, [r12+650h]
 * 0000000140BC1F86: cmp     [r8+rax], r11b
 * 0000000140BC1F8A: jz      short loc_140BC1FBC
 * 0000000140BC1F8C: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BC1F93: cmp     rax, rdx
 * 0000000140BC1F96: ja      short loc_140BC1FBC
 * 0000000140BC1F98: mov     eax, [r12+5F8h]
 * 0000000140BC1FA0: mov     rcx, rdx
 * 0000000140BC1FA3: sub     rcx, rax
 * 0000000140BC1FA6: lea     rax, [rbp+8D0h+var_848]
 * 0000000140BC1FAD: cmp     rax, rcx
 * 0000000140BC1FB0: jb      short loc_140BC1FBC
 * 0000000140BC1FB2: mov     r13, rdx
 * 0000000140BC1FB5: mov     [rsp+9D0h+var_968], rdx
 * 0000000140BC1FBA: jmp     short loc_140BC1FCD
 * 0000000140BC1FBC: mov     rax, [r12+688h]
 * 0000000140BC1FC4: mov     r13, [rbx+rax]
 * 0000000140BC1FC8: mov     [rsp+9D0h+var_968], r13
 * 0000000140BC1FCD: bt      r9d, 1Ah
 * 0000000140BC1FD2: jb      loc_140BC2658
 * 0000000140BC1FD8: test    dword ptr [r12+9DCh], 400000h
 * 0000000140BC1FE4: mov     [rbp+8D0h+var_908], r11
 * 0000000140BC1FE8: jnz     short loc_140BC1FFC
 * 0000000140BC1FEA: mov     rcx, cr0
 * 0000000140BC1FED: mov     rax, rcx
 * 0000000140BC1FF0: mov     [rbp+8D0h+var_908], rcx
 * 0000000140BC1FF4: btr     rax, 10h
 * 0000000140BC1FF9: mov     cr0, rax
 * 0000000140BC1FFC: mov     edi, [r12+0AE8h]
 * 0000000140BC2004: lea     rbx, [r12+0AF0h]
 * 0000000140BC200C: shl     rdi, 4
 * 0000000140BC2010: mov     edx, r11d
 * 0000000140BC2013: add     rdi, rbx
 * 0000000140BC2016: mov     [rsp+9D0h+var_978], rbx
 * 0000000140BC201B: mov     r9, rdi
 * 0000000140BC201E: mov     [rbp+8D0h+var_8F0], rdi
 * 0000000140BC2022: mov     [rbp+8D0h+var_8A8], rdi
 * 0000000140BC2026: cmp     [r12+0AECh], r11d
 * 0000000140BC202E: jbe     short loc_140BC2079
 * 0000000140BC2030: mov     esi, 10h
 * 0000000140BC2035: mov     rcx, [r9]
 * 0000000140BC2038: mov     rax, [r9+8]
 * 0000000140BC203C: mov     [rcx], rax
 * 0000000140BC203F: mov     rcx, cr4
 * 0000000140BC2042: test    rcx, 20080h
 * 0000000140BC2049: jz      short loc_140BC205B
 * 0000000140BC204B: mov     rax, rcx
 * 0000000140BC204E: btc     rax, 7
 * 0000000140BC2053: mov     cr4, rax
 * 0000000140BC2056: mov     cr4, rcx
 * 0000000140BC2059: jmp     short loc_140BC2061
 * 0000000140BC205B: mov     rax, cr3
 * 0000000140BC205E: mov     cr3, rax
 * 0000000140BC2061: add     r9, rsi
 * 0000000140BC2064: add     edx, r10d
 * 0000000140BC2067: cmp     edx, [r12+0AECh]
 * 0000000140BC206F: jb      short loc_140BC2035
 * 0000000140BC2071: mov     rsi, [rbp+8D0h+var_920]
 * 0000000140BC2075: mov     [rbp+8D0h+var_8A8], r9
 * 0000000140BC2079: mov     rcx, 7FFFFFFFF8h
 * 0000000140BC2083: cmp     rbx, rdi
 * 0000000140BC2086: jnb     loc_140BC22F7
 * 0000000140BC208C: mov     r13d, 4
 * 0000000140BC2092: test    dword ptr [r12+9DCh], 400000h
 * 0000000140BC209E: mov     esi, [rbx+8]
 * 0000000140BC20A1: mov     r8, [rbx]
 * 0000000140BC20A4: mov     dword ptr [rbp+8D0h+arg_8], esi
 * 0000000140BC20AA: jnz     short loc_140BC2109
 * 0000000140BC20AC: mov     edx, esi
 * 0000000140BC20AE: mov     rcx, r9
 * 0000000140BC20B1: cmp     esi, 8
 * 0000000140BC20B4: jb      short loc_140BC20DC
 * 0000000140BC20B6: mov     r10d, esi
 * 0000000140BC20B9: mov     edi, 1
 * 0000000140BC20BE: shr     r10, 3
 * 0000000140BC20C2: mov     rax, [rcx]
 * 0000000140BC20C5: add     edx, 0FFFFFFF8h
 * 0000000140BC20C8: mov     [r8], rax
 * 0000000140BC20CB: add     rcx, 8
 * 0000000140BC20CF: add     r8, 8
 * 0000000140BC20D3: sub     r10, rdi
 * 0000000140BC20D6: jnz     short loc_140BC20C2
 * 0000000140BC20D8: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BC20DC: test    edx, edx
 * 0000000140BC20DE: jz      loc_140BC22C1
 * 0000000140BC20E4: sub     r8, rcx
 * 0000000140BC20E7: mov     ebx, 0FFFFFFFFh
 * 0000000140BC20EC: mov     r10d, 1
 * 0000000140BC20F2: mov     al, [rcx]
 * 0000000140BC20F4: mov     [rcx+r8], al
 * 0000000140BC20F8: add     rcx, r10
 * 0000000140BC20FB: add     edx, ebx
 * 0000000140BC20FD: jnz     short loc_140BC20F2
 * 0000000140BC20FF: mov     rbx, [rsp+9D0h+var_978]
 * 0000000140BC2104: jmp     loc_140BC22C1
 * 0000000140BC2109: mov     rcx, r8
 * 0000000140BC210C: mov     [rbp+8D0h+var_8D8], r9
 * 0000000140BC2110: and     ecx, 0FFFh
 * 0000000140BC2116: lea     rdx, [rsi+0FFFh]
 * 0000000140BC211D: add     rdx, rcx
 * 0000000140BC2120: mov     r12d, esi
 * 0000000140BC2123: shr     rdx, 0Ch
 * 0000000140BC2127: test    edx, edx
 * 0000000140BC2129: jz      loc_140BC22BA
 * 0000000140BC212F: mov     rdi, [rbp+8D0h+arg_0]
 * 0000000140BC2136: mov     esi, 20080h
 * 0000000140BC213B: mov     eax, edx
 * 0000000140BC213D: mov     r9, 7FFFFFFFF8h
 * 0000000140BC2147: mov     [rbp+8D0h+var_8D0], rax
 * 0000000140BC214B: mov     r14d, 1
 * 0000000140BC2151: mov     r11, [rdi+5D8h]
 * 0000000140BC2158: lea     rcx, [rbp+8D0h+var_1D0]
 * 0000000140BC215F: mov     rax, r8
 * 0000000140BC2162: mov     rdx, r13
 * 0000000140BC2165: shr     rax, 9
 * 0000000140BC2169: mov     r10d, r13d
 * 0000000140BC216C: and     rax, r9
 * 0000000140BC216F: add     rax, r11
 * 0000000140BC2172: mov     [rcx], rax
 * 0000000140BC2175: lea     rcx, [rcx+8]
 * 0000000140BC2179: shr     rax, 9
 * 0000000140BC217D: and     rax, r9
 * 0000000140BC2180: add     rax, r11
 * 0000000140BC2183: sub     rdx, r14
 * 0000000140BC2186: jnz     short loc_140BC2172
 * 0000000140BC2188: mov     eax, 0FFFFFFFFh
 * 0000000140BC218D: add     r10d, eax
 * 0000000140BC2190: jz      short loc_140BC21A4
 * 0000000140BC2192: mov     rax, [rbp+r10*8+8D0h+var_1D0]
 * 0000000140BC219A: mov     ecx, [rax]
 * 0000000140BC219C: shr     cl, 7
 * 0000000140BC219F: test    r14b, cl
 * 0000000140BC21A2: jz      short loc_140BC2188
 * 0000000140BC21A4: mov     r15, [rbp+r10*8+8D0h+var_1D0]
 * 0000000140BC21AC: mov     [rbp+8D0h+var_950], r15
 * 0000000140BC21B0: mov     rax, [r15]
 * 0000000140BC21B3: or      rax, 62h
 * 0000000140BC21B7: mov     [r15], rax
 * 0000000140BC21BA: mov     rdx, cr4
 * 0000000140BC21BD: test    rsi, rdx
 * 0000000140BC21C0: jz      short loc_140BC21D2
 * 0000000140BC21C2: mov     rcx, rdx
 * 0000000140BC21C5: btc     rcx, 7
 * 0000000140BC21CA: mov     cr4, rcx
 * 0000000140BC21CD: mov     cr4, rdx
 * 0000000140BC21D0: jmp     short loc_140BC21D8
 * 0000000140BC21D2: mov     rcx, cr3
 * 0000000140BC21D5: mov     cr3, rcx
 * 0000000140BC21D8: mov     edx, 1000h
 * 0000000140BC21DD: mov     ecx, r8d
 * 0000000140BC21E0: and     ecx, 0FFFh
 * 0000000140BC21E6: mov     r10d, r12d
 * 0000000140BC21E9: sub     edx, ecx
 * 0000000140BC21EB: mov     r11, r8
 * 0000000140BC21EE: cmp     edx, r12d
 * 0000000140BC21F1: cmovb   r10d, edx
 * 0000000140BC21F5: mov     rdx, [rbp+8D0h+var_8D8]
 * 0000000140BC21F9: mov     r14d, r10d
 * 0000000140BC21FC: cmp     r10d, 8
 * 0000000140BC2200: jb      short loc_140BC2234
 * 0000000140BC2202: mov     r15d, r10d
 * 0000000140BC2205: mov     r9d, 1
 * 0000000140BC220B: shr     r15, 3
 * 0000000140BC220F: mov     rcx, [rdx]
 * 0000000140BC2212: add     r14d, 0FFFFFFF8h
 * 0000000140BC2216: mov     [r11], rcx
 * 0000000140BC2219: add     rdx, 8
 * 0000000140BC221D: add     r11, 8
 * 0000000140BC2221: sub     r15, r9
 * 0000000140BC2224: jnz     short loc_140BC220F
 * 0000000140BC2226: mov     r15, [rbp+8D0h+var_950]
 * 0000000140BC222A: mov     r9, 7FFFFFFFF8h
 * 0000000140BC2234: test    r14d, r14d
 * 0000000140BC2237: jz      short loc_140BC2266
 * 0000000140BC2239: sub     r11, rdx
 * 0000000140BC223C: mov     edi, 0FFFFFFFFh
 * 0000000140BC2241: mov     r9d, 1
 * 0000000140BC2247: mov     cl, [rdx]
 * 0000000140BC2249: mov     [rdx+r11], cl
 * 0000000140BC224D: add     rdx, r9
 * 0000000140BC2250: add     r14d, edi
 * 0000000140BC2253: jnz     short loc_140BC2247
 * 0000000140BC2255: mov     rdi, [rbp+8D0h+arg_0]
 * 0000000140BC225C: mov     r9, 7FFFFFFFF8h
 * 0000000140BC2266: mov     ecx, r10d
 * 0000000140BC2269: add     [rbp+8D0h+var_8D8], rcx
 * 0000000140BC226D: add     r8, rcx
 * 0000000140BC2270: sub     r12d, r10d
 * 0000000140BC2273: mov     [r15], rax
 * 0000000140BC2276: mov     rcx, cr4
 * 0000000140BC2279: test    rsi, rcx
 * 0000000140BC227C: jz      short loc_140BC228E
 * 0000000140BC227E: mov     rax, rcx
 * 0000000140BC2281: btc     rax, 7
 * 0000000140BC2286: mov     cr4, rax
 * 0000000140BC2289: mov     cr4, rcx
 * 0000000140BC228C: jmp     short loc_140BC2294
 * 0000000140BC228E: mov     rax, cr3
 * 0000000140BC2291: mov     cr3, rax
 * 0000000140BC2294: mov     r14d, 1
 * 0000000140BC229A: sub     [rbp+8D0h+var_8D0], r14
 * 0000000140BC229E: jnz     loc_140BC2151
 * 0000000140BC22A4: mov     r9, [rbp+8D0h+var_8A8]
 * 0000000140BC22A8: xor     r11d, r11d
 * 0000000140BC22AB: mov     rbx, [rsp+9D0h+var_978]
 * 0000000140BC22B0: mov     rdi, [rbp+8D0h+var_8F0]
 * 0000000140BC22B4: mov     esi, dword ptr [rbp+8D0h+arg_8]
 * 0000000140BC22BA: mov     r12, [rbp+8D0h+arg_0]
 * 0000000140BC22C1: add     rbx, 10h
 * 0000000140BC22C5: mov     eax, esi
 * 0000000140BC22C7: add     r9, rax
 * 0000000140BC22CA: mov     [rsp+9D0h+var_978], rbx
 * 0000000140BC22CF: mov     [rbp+8D0h+var_8A8], r9
 * 0000000140BC22D3: cmp     rbx, rdi
 * 0000000140BC22D6: jb      loc_140BC2092
 * 0000000140BC22DC: mov     r13, [rsp+9D0h+var_968]
 * 0000000140BC22E1: mov     rcx, 7FFFFFFFF8h
 * 0000000140BC22EB: mov     rsi, [rbp+8D0h+var_920]
 * 0000000140BC22EF: mov     r14, [rbp+8D0h+var_910]
 * 0000000140BC22F3: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BC22F7: test    dword ptr [r12+9DCh], 400000h
 * 0000000140BC2303: jnz     short loc_140BC231C
 * 0000000140BC2305: mov     rax, [r12+228h]
 * 0000000140BC230D: mov     byte ptr [rax], 0C3h
 * 0000000140BC2310: mov     rax, [rbp+8D0h+var_908]
 * 0000000140BC2314: mov     cr0, rax
 * 0000000140BC2317: jmp     loc_140BC2650
 * 0000000140BC231C: mov     [rbp+8D0h+arg_18], 0C3h
 * 0000000140BC2323: lea     r8, [rbp+8D0h+arg_18]
 * 0000000140BC232A: mov     r9, [r12+228h]
 * 0000000140BC2332: mov     r11d, 4
 * 0000000140BC2338: mov     rdx, [r12+5D8h]
 * 0000000140BC2340: mov     rax, r9
 * 0000000140BC2343: shr     rax, 9
 * 0000000140BC2347: mov     r10d, r11d
 * 0000000140BC234A: and     rax, rcx
 * 0000000140BC234D: mov     rbx, 7FFFFFFFF8h
 * 0000000140BC2357: add     rax, rdx
 * 0000000140BC235A: lea     rcx, [rbp+8D0h+var_1B0]
 * 0000000140BC2361: lea     edi, [r11-3]
 * 0000000140BC2365: mov     [rcx], rax
 * 0000000140BC2368: lea     rcx, [rcx+8]
 * 0000000140BC236C: shr     rax, 9
 * 0000000140BC2370: and     rax, rbx
 * 0000000140BC2373: add     rax, rdx
 * 0000000140BC2376: sub     r11, rdi
 * 0000000140BC2379: jnz     short loc_140BC2365
 * 0000000140BC237B: mov     eax, 0FFFFFFFFh
 * 0000000140BC2380: add     r10d, eax
 * 0000000140BC2383: jz      short loc_140BC2397
 * 0000000140BC2385: mov     rax, [rbp+r10*8+8D0h+var_1B0]
 * 0000000140BC238D: mov     ecx, [rax]
 * 0000000140BC238F: shr     cl, 7
 * 0000000140BC2392: test    dil, cl
 * 0000000140BC2395: jz      short loc_140BC237B
 * 0000000140BC2397: mov     r11, [rbp+r10*8+8D0h+var_1B0]
 * 0000000140BC239F: mov     rax, [r11]
 * 0000000140BC23A2: or      rax, 62h
 * 0000000140BC23A6: mov     [r11], rax
 * 0000000140BC23A9: mov     rdx, cr4
 * 0000000140BC23AC: mov     ebx, 20080h
 * 0000000140BC23B1: test    rbx, rdx
 * 0000000140BC23B4: jz      short loc_140BC23C6
 * 0000000140BC23B6: mov     rcx, rdx
 * 0000000140BC23B9: btc     rcx, 7
 * 0000000140BC23BE: mov     cr4, rcx
 * 0000000140BC23C1: mov     cr4, rdx
 * 0000000140BC23C4: jmp     short loc_140BC23CC
 * 0000000140BC23C6: mov     rcx, cr3
 * 0000000140BC23C9: mov     cr3, rcx
 * 0000000140BC23CC: mov     ecx, r9d
 * 0000000140BC23CF: mov     r10d, 1000h
 * 0000000140BC23D5: and     ecx, 0FFFh
 * 0000000140BC23DB: mov     edx, edi
 * 0000000140BC23DD: sub     r10d, ecx
 * 0000000140BC23E0: cmp     r10d, edi
 * 0000000140BC23E3: cmovb   edx, r10d
 * 0000000140BC23E7: cmp     edx, 8
 * 0000000140BC23EA: jb      short loc_140BC2409
 * 0000000140BC23EC: mov     r10d, edx
 * 0000000140BC23EF: shr     r10, 3
 * 0000000140BC23F3: mov     rcx, [r8]
 * 0000000140BC23F6: add     edx, 0FFFFFFF8h
 * 0000000140BC23F9: mov     [r9], rcx
 * 0000000140BC23FC: add     r8, 8
 * 0000000140BC2400: add     r9, 8
 * 0000000140BC2404: sub     r10, rdi
 * 0000000140BC2407: jnz     short loc_140BC23F3
 * 0000000140BC2409: test    edx, edx
 * 0000000140BC240B: jz      loc_140BC262F
 * 0000000140BC2411: sub     r9, r8
 * 0000000140BC2414: mov     r15d, 0FFFFFFFFh
 * 0000000140BC241A: mov     cl, [r8]
 * 0000000140BC241D: mov     [r8+r9], cl
 * 0000000140BC2421: add     r8, rdi
 * 0000000140BC2424: add     edx, r15d
 * 0000000140BC2427: jz      loc_140BC262B
 * 0000000140BC242D: jmp     short loc_140BC241A
 * 0000000140BC242F: test    dword ptr [r12+9D8h], 20000000h
 * 0000000140BC243B: jnz     short loc_140BC2499
 * 0000000140BC243D: cmp     dword ptr [rbp+8D0h+arg_8], r11d
 * 0000000140BC2444: jz      short loc_140BC2499
 * 0000000140BC2446: mov     ecx, [r12+944h]
 * 0000000140BC244E: sub     ecx, 1
 * 0000000140BC2451: jz      short loc_140BC246E
 * 0000000140BC2453: mov     eax, 2
 * 0000000140BC2458: cmp     ecx, eax
 * 0000000140BC245A: jnz     short loc_140BC2499
 * 0000000140BC245C: mov     rax, [r12+368h]
 * 0000000140BC2464: mov     [r12+108h], rax
 * 0000000140BC246C: jmp     short loc_140BC2499
 * 0000000140BC246E: add     qword ptr [r12+7E8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140BC2477: mov     rcx, [r12+7E8h]
 * 0000000140BC247F: mov     edx, [rcx]
 * 0000000140BC2481: mov     [r12+7F0h], edx
 * 0000000140BC2489: mov     rcx, [r12+238h]
 * 0000000140BC2491: mov     [r12+108h], rcx
 * 0000000140BC2499: mov     rax, r12
 * 0000000140BC249C: add     rsp, 998h
 * 0000000140BC24A3: pop     r15
 * 0000000140BC24A5: pop     r14
 * 0000000140BC24A7: pop     r13
 * 0000000140BC24A9: pop     r12
 * 0000000140BC24AB: pop     rdi
 * 0000000140BC24AC: pop     rsi
 * 0000000140BC24AD: pop     rbx
 * 0000000140BC24AE: pop     rbp
 * 0000000140BC24AF: retn
 * 0000000140BC24B1: mov     r9d, 5; BugCheckParameter3
 * 0000000140BC24B7: mov     [rbp+8D0h+var_82C], 0E8000009h
 * 0000000140BC24C1: mov     ecx, [rbp+8D0h+var_82C]
 * 0000000140BC24C7: mov     r8, rbx; BugCheckParameter2
 * 0000000140BC24CA: rol     ecx, 65h; BugCheckCode
 * 0000000140BC24CD: mov     [rsp+9D0h+BugCheckParameter4], r13; BugCheckParameter4
 * 0000000140BC24D2: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140BC24D6: call    KeBugCheckEx
 * 0000000140BC24DC: mov     r9d, 7; BugCheckParameter3
 * 0000000140BC24E2: mov     [rbp+8D0h+var_828], 0E8000009h
 * 0000000140BC24EC: mov     ecx, [rbp+8D0h+var_828]
 * 0000000140BC24F2: mov     r8, r15; BugCheckParameter2
 * 0000000140BC24F5: rol     ecx, 65h; BugCheckCode
 * 0000000140BC24F8: mov     [rsp+9D0h+BugCheckParameter4], r13; BugCheckParameter4
 * 0000000140BC24FD: lea     edx, [r9+3]; BugCheckParameter1
 * 0000000140BC2501: call    KeBugCheckEx
 * 0000000140BC2507: xor     r9d, r9d; BugCheckParameter3
 * 0000000140BC250A: mov     [rbp+8D0h+var_824], 0E8000009h
 * 0000000140BC2514: mov     ecx, [rbp+8D0h+var_824]
 * 0000000140BC251A: mov     r8, r14; BugCheckParameter2
 * 0000000140BC251D: rol     ecx, 65h; BugCheckCode
 * 0000000140BC2520: mov     [rsp+9D0h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140BC2525: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140BC2529: call    KeBugCheckEx
 * 0000000140BC252F: mov     r9d, 1; BugCheckParameter3
 * 0000000140BC2535: mov     [rbp+8D0h+var_80C], 0E8000009h
 * 0000000140BC253F: mov     ecx, [rbp+8D0h+var_80C]
 * 0000000140BC2545: mov     r8, r14; BugCheckParameter2
 * 0000000140BC2548: rol     ecx, 65h; BugCheckCode
 * 0000000140BC254B: mov     [rsp+9D0h+BugCheckParameter4], r15; BugCheckParameter4
 * 0000000140BC2550: lea     edx, [r9+9]; BugCheckParameter1
 * 0000000140BC2554: call    KeBugCheckEx
 * 0000000140BC255A: mov     r9d, eax; BugCheckParameter3
 * 0000000140BC255D: mov     r8, r14; BugCheckParameter2
 * 0000000140BC2560: xor     eax, eax
 * 0000000140BC2562: mov     [rbp+8D0h+var_7F0], 0E8000009h
 * 0000000140BC256C: mov     ecx, [rbp+8D0h+var_7F0]
 * 0000000140BC2572: rol     ecx, 65h; BugCheckCode
 * 0000000140BC2575: mov     [rsp+9D0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140BC257A: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140BC257D: call    KeBugCheckEx
 * 0000000140BC2583: mov     r9d, eax; BugCheckParameter3
 * 0000000140BC2586: xor     eax, eax
 * 0000000140BC2588: mov     [rbp+8D0h+var_7E8], 0E8000009h
 * 0000000140BC2592: mov     ecx, [rbp+8D0h+var_7E8]
 * 0000000140BC2598: rol     ecx, 65h; BugCheckCode
 * 0000000140BC259B: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140BC259E: mov     [rsp+9D0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140BC25A3: call    KeBugCheckEx
 * 0000000140BC25A9: mov     r9d, 2; BugCheckParameter3
 * 0000000140BC25AF: mov     [rbp+8D0h+var_7E4], 0E8000009h
 * 0000000140BC25B9: mov     ecx, [rbp+8D0h+var_7E4]
 * 0000000140BC25BF: mov     r8, r14; BugCheckParameter2
 * 0000000140BC25C2: rol     ecx, 65h; BugCheckCode
 * 0000000140BC25C5: mov     [rsp+9D0h+BugCheckParameter4], r15; BugCheckParameter4
 * 0000000140BC25CA: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140BC25CE: call    KeBugCheckEx
 * 0000000140BC25D4: mov     r9d, 3; BugCheckParameter3
 * 0000000140BC25DA: mov     [rbp+8D0h+var_7EC], 0E8000009h
 * 0000000140BC25E4: mov     ecx, [rbp+8D0h+var_7EC]
 * 0000000140BC25EA: mov     r8, r14; BugCheckParameter2
 * 0000000140BC25ED: rol     ecx, 65h; BugCheckCode
 * 0000000140BC25F0: mov     [rsp+9D0h+BugCheckParameter4], r11; BugCheckParameter4
 * 0000000140BC25F5: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140BC25F9: call    KeBugCheckEx
 * 0000000140BC25FF: mov     r8, [rbp+8D0h+var_910]; BugCheckParameter2
 * 0000000140BC2603: mov     r9d, 6; BugCheckParameter3
 * 0000000140BC2609: mov     [rbp+8D0h+var_810], 0E8000009h
 * 0000000140BC2613: mov     ecx, [rbp+8D0h+var_810]
 * 0000000140BC2619: rol     ecx, 65h; BugCheckCode
 * 0000000140BC261C: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140BC2620: mov     [rsp+9D0h+BugCheckParameter4], r10; BugCheckParameter4
 * 0000000140BC2625: call    KeBugCheckEx
 * 0000000140BC262B: mov     r15, [rbp+8D0h+var_930]
 * 0000000140BC262F: mov     [r11], rax
 * 0000000140BC2632: mov     rcx, cr4
 * 0000000140BC2635: test    rbx, rcx
 * 0000000140BC2638: jz      short loc_140BC264A
 * 0000000140BC263A: mov     rax, rcx
 * 0000000140BC263D: btc     rax, 7
 * 0000000140BC2642: mov     cr4, rax
 * 0000000140BC2645: mov     cr4, rcx
 * 0000000140BC2648: jmp     short loc_140BC2650
 * 0000000140BC264A: mov     rax, cr3
 * 0000000140BC264D: mov     cr3, rax
 * 0000000140BC2650: mov     rbx, [rbp+8D0h+var_940]
 * 0000000140BC2654: mov     rdi, [rbp+8D0h+var_900]
 * 0000000140BC2658: xor     r9d, r9d
 * 0000000140BC265B: cmp     [r12+948h], r9d
 * 0000000140BC2663: jz      short loc_140BC2679
 * 0000000140BC2665: mov     rax, cr8
 * 0000000140BC2669: lea     ecx, [r9+2]
 * 0000000140BC266D: cmp     al, cl
 * 0000000140BC266F: jnb     short loc_140BC2679
 * 0000000140BC2671: mov     rax, cr8
 * 0000000140BC2675: mov     cr8, rcx
 * 0000000140BC2679: mov     ecx, [r12+948h]
 * 0000000140BC2681: test    ecx, ecx
 * 0000000140BC2683: jz      loc_140BC2753
 * 0000000140BC2689: sub     ecx, 1
 * 0000000140BC268C: jz      loc_140BC2745
 * 0000000140BC2692: sub     ecx, 1
 * 0000000140BC2695: jz      loc_140BC273B
 * 0000000140BC269B: sub     ecx, 1
 * 0000000140BC269E: jz      loc_140BC2731
 * 0000000140BC26A4: sub     ecx, 1
 * 0000000140BC26A7: jz      short loc_140BC26F1
 * 0000000140BC26A9: cmp     ecx, 1
 * 0000000140BC26AC: jz      short loc_140BC26C8
 * 0000000140BC26AE: mov     rax, [r12+5B0h]
 * 0000000140BC26B6: mov     ecx, 1
 * 0000000140BC26BB: lock or [rax+340h], rcx
 * 0000000140BC26C3: jmp     loc_140BC2753
 * 0000000140BC26C8: mov     rcx, gs:20h
 * 0000000140BC26D1: mov     rax, [r12+658h]
 * 0000000140BC26D9: mov     edx, [r12+9D8h]
 * 0000000140BC26E1: shr     edx, 9
 * 0000000140BC26E4: and     edx, 1Fh
 * 0000000140BC26E7: mov     rcx, [rax+rcx]
 * 0000000140BC26EB: lock bts [rcx], edx
 * 0000000140BC26EF: jmp     short loc_140BC2753
 * 0000000140BC26F1: mov     rcx, gs:20h
 * 0000000140BC26FA: mov     rax, [r12+658h]
 * 0000000140BC2702: mov     r8d, [r12+9D8h]
 * 0000000140BC270A: shr     r8d, 9
 * 0000000140BC270E: and     r8d, 1Fh
 * 0000000140BC2712: mov     rcx, [rax+rcx]
 * 0000000140BC2716: add     rcx, [r12+6B8h]
 * 0000000140BC271E: mov     rax, [r12+698h]
 * 0000000140BC2726: mov     rdx, [rcx+rax]
 * 0000000140BC272A: lock bts [rdx], r8d
 * 0000000140BC272F: jmp     short loc_140BC2753
 * 0000000140BC2731: mov     rax, [r12+558h]
 * 0000000140BC2739: jmp     short loc_140BC274D
 * 0000000140BC273B: mov     rax, [r12+550h]
 * 0000000140BC2743: jmp     short loc_140BC274D
 * 0000000140BC2745: mov     rax, [r12+540h]
 * 0000000140BC274D: lock bts qword ptr [rax], 0
 * 0000000140BC2753: mov     rax, [r12+6A0h]
 * 0000000140BC275B: mov     [rbx+rax], r9
 * 0000000140BC275F: mov     rax, [r12+6B0h]
 * 0000000140BC2767: mov     [rbx+rax], r9
 * 0000000140BC276B: mov     rcx, [r12+168h]
 * 0000000140BC2773: call    KeGuardCheckICall
 * 0000000140BC2778: lea     rax, [r13-8]
 * 0000000140BC277C: mov     r9, rsi
 * 0000000140BC277F: mov     [rsp+9D0h+var_9A0], rax
 * 0000000140BC2784: mov     r8, r14
 * 0000000140BC2787: mov     rax, [r12+168h]
 * 0000000140BC278F: mov     rdx, r15
 * 0000000140BC2792: mov     [rsp+9D0h+var_9A8], rax
 * 0000000140BC2797: mov     ecx, 109h
 * 0000000140BC279C: mov     [rsp+9D0h+BugCheckParameter4], rdi
 * 0000000140BC27A1: call    SdbpCheckDll
 */
