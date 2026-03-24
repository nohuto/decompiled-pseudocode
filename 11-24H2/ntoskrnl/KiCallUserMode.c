/*
 * XREFs of KiCallUserMode @ 0x1406AB4A0
 * Callers:
 *     KeUserModeCallback @ 0x1408BF150 (KeUserModeCallback.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1406AB4A0 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1406AB4A0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AB4A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AB4A0: sub     rsp, 138h
 * 00000001406AB4A7: lea     rax, [rsp+138h+var_38]
 * 00000001406AB4AF: movaps  [rsp+138h+var_108], xmm6
 * 00000001406AB4B4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406AB4B9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406AB4BF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406AB4C5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406AB4CB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406AB4D0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406AB4D5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406AB4DA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406AB4DF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406AB4E4: mov     [rax-8], rbp
 * 00000001406AB4E8: mov     rbp, rsp
 * 00000001406AB4EB: mov     [rax], rbx
 * 00000001406AB4EE: mov     [rax+8], rdi
 * 00000001406AB4F2: mov     [rax+10h], rsi
 * 00000001406AB4F6: mov     [rax+18h], r12
 * 00000001406AB4FA: mov     [rax+20h], r13
 * 00000001406AB4FE: mov     [rax+28h], r14
 * 00000001406AB502: mov     [rax+30h], r15
 * 00000001406AB506: xor     r10, r10
 * 00000001406AB509: xor     r12, r12
 * 00000001406AB50C: xor     r13, r13
 * 00000001406AB50F: xor     r14, r14
 * 00000001406AB512: xor     r15, r15
 * 00000001406AB515: pxor    xmm6, xmm6
 * 00000001406AB519: pxor    xmm7, xmm7
 * 00000001406AB51D: pxor    xmm8, xmm8
 * 00000001406AB522: pxor    xmm9, xmm9
 * 00000001406AB527: pxor    xmm10, xmm10
 * 00000001406AB52C: pxor    xmm11, xmm11
 * 00000001406AB531: pxor    xmm12, xmm12
 * 00000001406AB536: pxor    xmm13, xmm13
 * 00000001406AB53B: pxor    xmm14, xmm14
 * 00000001406AB540: pxor    xmm15, xmm15
 * 00000001406AB545: mov     [rbp+0D8h], rcx
 * 00000001406AB54C: mov     [rbp+0E0h], rdx
 * 00000001406AB553: mov     rbx, gs:188h
 * 00000001406AB55C: mov     [r8+20h], rsp
 * 00000001406AB560: mov     rsi, [rbx+90h]
 * 00000001406AB567: mov     [rbp+0D0h], rsi
 * 00000001406AB56E: cli
 * 00000001406AB56F: mov     [rbx+28h], r8
 * 00000001406AB573: mov     [rbx+38h], r9
 * 00000001406AB577: test    cs:KiKvaShadow, 1
 * 00000001406AB57E: jnz     short loc_1406AB58F
 * 00000001406AB580: mov     rdi, gs:8
 * 00000001406AB589: mov     [rdi+4], r8
 * 00000001406AB58D: jmp     short loc_1406AB598
 * 00000001406AB58F: mov     gs:0B008h, r8
 * 00000001406AB598: mov     ecx, cs:KeKernelStackSize
 * 00000001406AB59E: sub     r9, rcx
 * 00000001406AB5A1: mov     gs:1A8h, r8
 * 00000001406AB5AA: mov     [rbx+30h], r9
 * 00000001406AB5AE: mov     rcx, [rsp+138h+arg_20]
 * 00000001406AB5B6: test    rcx, rcx
 * 00000001406AB5B9: jz      short loc_1406AB605
 * 00000001406AB5BB: mov     [rbx+418h], rcx
 * 00000001406AB5C2: sub     rcx, 3000h
 * 00000001406AB5C9: mov     [rbx+420h], rcx
 * 00000001406AB5D0: or      qword ptr [rbx+420h], 2
 * 00000001406AB5D8: mov     rcx, [rsp+138h+arg_28]
 * 00000001406AB5E0: mov     [rbx+410h], rcx
 * 00000001406AB5E7: mov     gs:9D28h, rcx
 * 00000001406AB5F0: rdsspq  rdx
 * 00000001406AB5F5: rstorssp qword ptr [rcx]
 * 00000001406AB5F9: saveprevssp
 * 00000001406AB5FD: sub     rdx, 8
 * 00000001406AB601: mov     [r8+40h], rdx
 * 00000001406AB605: lea     rsp, [r8-190h]
 * 00000001406AB60C: mov     rdi, rsp
 * 00000001406AB60F: mov     ecx, 32h ; '2'
 * 00000001406AB614: rep movsq
 * 00000001406AB617: xor     edi, edi
 * 00000001406AB619: test    byte ptr [rbx+0C2h], 3
 * 00000001406AB620: jnz     loc_1406AB8F6
 * 00000001406AB626: test    dword ptr [rbx], 8010000h
 * 00000001406AB62C: jnz     loc_1406AB8F6
 * 00000001406AB632: test    byte ptr gs:860h, 2
 * 00000001406AB63B: jnz     loc_1406AB8F6
 * 00000001406AB641: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AB646: test    eax, eax
 * 00000001406AB648: jnz     loc_1406AB8F6
 * 00000001406AB64E: lea     rbp, [rsi-110h]
 * 00000001406AB655: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AB659: xor     esi, esi
 * 00000001406AB65B: test    byte ptr [rbx+3], 3
 * 00000001406AB65F: jnz     loc_1406AB8CB
 * 00000001406AB665: mov     r9, cs:qword_140FC6460
 * 00000001406AB66C: mov     rcx, gs:188h
 * 00000001406AB675: bt      dword ptr [rcx+74h], 16h
 * 00000001406AB67A: jnb     short loc_1406AB6A6
 * 00000001406AB67C: xor     ecx, ecx
 * 00000001406AB67E: rdsspq  rcx
 * 00000001406AB683: mov     r8, gs:9D28h
 * 00000001406AB68C: add     r8, 8
 * 00000001406AB690: cmp     rcx, r8
 * 00000001406AB693: jnz     short loc_1406AB6A6
 * 00000001406AB695: mov     rcx, gs:9D20h
 * 00000001406AB69E: rstorssp qword ptr [rcx]
 * 00000001406AB6A2: saveprevssp
 * 00000001406AB6A6: mov     byte ptr gs:85Eh, 0
 * 00000001406AB6AF: movzx   eax, word ptr gs:86Ch
 * 00000001406AB6B8: cmp     gs:866h, ax
 * 00000001406AB6C1: jz      short loc_1406AB6D5
 * 00000001406AB6C3: mov     gs:866h, ax
 * 00000001406AB6CC: mov     ecx, 48h ; 'H'
 * 00000001406AB6D1: xor     edx, edx
 * 00000001406AB6D3: wrmsr
 * 00000001406AB6D5: btr     word ptr gs:858h, 2
 * 00000001406AB6E0: jnb     short loc_1406AB6F0
 * 00000001406AB6E2: mov     eax, 1
 * 00000001406AB6E7: xor     edx, edx
 * 00000001406AB6E9: mov     ecx, 49h ; 'I'
 * 00000001406AB6EE: wrmsr
 * 00000001406AB6F0: btr     word ptr gs:858h, 5
 * 00000001406AB6FB: jnb     loc_1406AB838
 * 00000001406AB701: call    loc_1406AB814
 * 00000001406AB706: add     rsp, 8
 * 00000001406AB70A: call    loc_1406AB81D
 * 00000001406AB70F: add     rsp, 8
 * 00000001406AB713: call    loc_1406AB706
 * 00000001406AB718: add     rsp, 8
 * 00000001406AB71C: call    loc_1406AB70F
 * 00000001406AB721: add     rsp, 8
 * 00000001406AB725: call    loc_1406AB718
 * 00000001406AB72A: add     rsp, 8
 * 00000001406AB72E: call    loc_1406AB721
 * 00000001406AB733: add     rsp, 8
 * 00000001406AB737: call    loc_1406AB72A
 * 00000001406AB73C: add     rsp, 8
 * 00000001406AB740: call    loc_1406AB733
 * 00000001406AB745: add     rsp, 8
 * 00000001406AB749: call    loc_1406AB73C
 * 00000001406AB74E: add     rsp, 8
 * 00000001406AB752: call    loc_1406AB745
 * 00000001406AB757: add     rsp, 8
 * 00000001406AB75B: call    loc_1406AB74E
 * 00000001406AB760: add     rsp, 8
 * 00000001406AB764: call    loc_1406AB757
 * 00000001406AB769: add     rsp, 8
 * 00000001406AB76D: call    loc_1406AB760
 * 00000001406AB772: add     rsp, 8
 * 00000001406AB776: call    loc_1406AB769
 * 00000001406AB77B: add     rsp, 8
 * 00000001406AB77F: call    loc_1406AB772
 * 00000001406AB784: add     rsp, 8
 * 00000001406AB788: call    loc_1406AB77B
 * 00000001406AB78D: add     rsp, 8
 * 00000001406AB791: call    loc_1406AB784
 * 00000001406AB796: add     rsp, 8
 * 00000001406AB79A: call    loc_1406AB78D
 * 00000001406AB79F: add     rsp, 8
 * 00000001406AB7A3: call    loc_1406AB796
 * 00000001406AB7A8: add     rsp, 8
 * 00000001406AB7AC: call    loc_1406AB79F
 * 00000001406AB7B1: add     rsp, 8
 * 00000001406AB7B5: call    loc_1406AB7A8
 * 00000001406AB7BA: add     rsp, 8
 * 00000001406AB7BE: call    loc_1406AB7B1
 * 00000001406AB7C3: add     rsp, 8
 * 00000001406AB7C7: call    loc_1406AB7BA
 * 00000001406AB7CC: add     rsp, 8
 * 00000001406AB7D0: call    loc_1406AB7C3
 * 00000001406AB7D5: add     rsp, 8
 * 00000001406AB7D9: call    loc_1406AB7CC
 * 00000001406AB7DE: add     rsp, 8
 * 00000001406AB7E2: call    loc_1406AB7D5
 * 00000001406AB7E7: add     rsp, 8
 * 00000001406AB7EB: call    loc_1406AB7DE
 * 00000001406AB7F0: add     rsp, 8
 * 00000001406AB7F4: call    loc_1406AB7E7
 * 00000001406AB7F9: add     rsp, 8
 * 00000001406AB7FD: call    loc_1406AB7F0
 * 00000001406AB802: add     rsp, 8
 * 00000001406AB806: call    loc_1406AB7F9
 * 00000001406AB80B: add     rsp, 8
 * 00000001406AB80F: call    loc_1406AB802
 * 00000001406AB814: add     rsp, 8
 * 00000001406AB818: call    loc_1406AB80B
 * 00000001406AB81D: add     rsp, 8
 * 00000001406AB821: mov     eax, 0DADAh
 * 00000001406AB826: test    byte ptr gs:85Ch, 8
 * 00000001406AB82F: jz      short loc_1406AB838
 * 00000001406AB831: mov     al, 20h ; ' '
 * 00000001406AB833: incsspq rax
 * 00000001406AB838: test    word ptr gs:858h, 100h
 * 00000001406AB843: jz      short loc_1406AB851
 * 00000001406AB845: xor     eax, eax
 * 00000001406AB847: xor     edx, edx
 * 00000001406AB849: mov     ecx, 1
 * 00000001406AB84E: div     rcx
 * 00000001406AB851: mov     rcx, r9
 * 00000001406AB854: xor     eax, eax
 * 00000001406AB856: xor     edx, edx
 * 00000001406AB858: mov     r8, [rbp+100h]
 * 00000001406AB85F: mov     r9, [rbp+0D8h]
 * 00000001406AB866: pxor    xmm0, xmm0
 * 00000001406AB86A: pxor    xmm1, xmm1
 * 00000001406AB86E: pxor    xmm2, xmm2
 * 00000001406AB872: pxor    xmm3, xmm3
 * 00000001406AB876: pxor    xmm4, xmm4
 * 00000001406AB87A: pxor    xmm5, xmm5
 * 00000001406AB87E: mov     r11, [rbp+0F8h]
 * 00000001406AB885: xor     ebx, ebx
 * 00000001406AB887: test    cs:KiKvaShadow, 1
 * 00000001406AB88E: jnz     KiKernelSysretExit
 * 00000001406AB894: mov     rbp, r9
 * 00000001406AB897: mov     rsp, r8
 * 00000001406AB89A: xor     r9, r9
 * 00000001406AB89D: rdsspq  r9
 * 00000001406AB8A2: test    r9, r9
 * 00000001406AB8A5: jz      short loc_1406AB8AF
 * 00000001406AB8A7: clrssbsy qword ptr [r9]
 * 00000001406AB8AC: xor     r9, r9
 * 00000001406AB8AF: test    word ptr gs:858h, 200h
 * 00000001406AB8BA: jz      short loc_1406AB8C5
 * 00000001406AB8BC: verw    word ptr gs:0B02Ah
 * 00000001406AB8C5: swapgs
 * 00000001406AB8C8: sysret
 * 00000001406AB8CB: call    KiRestoreDebugRegisterState
 * 00000001406AB8D0: mov     r10, cs:qword_140FC6460
 * 00000001406AB8D7: mov     r9, [rbx+0B8h]
 * 00000001406AB8DE: mov     r9, [r9+168h]
 * 00000001406AB8E5: or      r9, r9
 * 00000001406AB8E8: jnz     loc_1406AB66C
 * 00000001406AB8EE: xchg    r9, r10
 * 00000001406AB8F1: jmp     loc_1406AB66C
 * 00000001406AB8F6: lea     rbp, [rsp+138h+var_B8]
 * 00000001406AB8FE: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001406AB907: mov     rax, cs:qword_140FC6460
 * 00000001406AB90E: mov     [rbp+0E8h], rax
 * 00000001406AB915: lea     rcx, KiSystemServiceExit
 * 00000001406AB91C: jmp     rcx
 * 00000001406AB922: retn
 */
