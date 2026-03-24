/*
 * XREFs of NtContinueEx @ 0x1406AA3F0
 * Callers:
 *     NtContinue @ 0x1406AA3E0 (NtContinue.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiContinueEx @ 0x1403E6A90 (KiContinueEx.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     NtContinueEx @ 0x1406AA3F0 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 */

/*
 * Hex-Rays decompilation failed for NtContinueEx @ 0x1406AA3F0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AA3F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AA3F0: mov     rbx, [rbp+0C0h]
 * 00000001406AA3F7: mov     rdi, [rbp+0C8h]
 * 00000001406AA3FE: mov     rsi, [rbp+0D0h]
 * 00000001406AA405: xor     eax, eax
 * 00000001406AA407: mov     [rbp-50h], rax
 * 00000001406AA40B: sub     rsp, 138h
 * 00000001406AA412: lea     rax, [rsp+138h+var_38]
 * 00000001406AA41A: movaps  [rsp+138h+var_108], xmm6
 * 00000001406AA41F: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406AA424: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406AA42A: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406AA430: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406AA436: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406AA43B: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406AA440: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406AA445: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406AA44A: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406AA44F: mov     [rax], rbx
 * 00000001406AA452: mov     [rax+8], rdi
 * 00000001406AA456: mov     [rax+10h], rsi
 * 00000001406AA45A: mov     [rax+18h], r12
 * 00000001406AA45E: mov     [rax+20h], r13
 * 00000001406AA462: mov     [rax+28h], r14
 * 00000001406AA466: mov     [rax+30h], r15
 * 00000001406AA46A: mov     r8, rsp
 * 00000001406AA46D: lea     r9, [rbp-80h]
 * 00000001406AA471: call    KiContinueEx
 * 00000001406AA476: test    eax, eax
 * 00000001406AA478: jle     loc_1406AA863
 * 00000001406AA47E: mov     rcx, gs:188h
 * 00000001406AA487: test    byte ptr [rbp+0F0h], 1
 * 00000001406AA48E: jnz     short loc_1406AA4A7
 * 00000001406AA490: mov     rdx, [rbp+0B8h]
 * 00000001406AA497: mov     [rcx+90h], rdx
 * 00000001406AA49E: mov     dl, [rbp-58h]
 * 00000001406AA4A1: mov     [rcx+232h], dl
 * 00000001406AA4A7: lea     rcx, [rsp+138h+var_38]
 * 00000001406AA4AF: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406AA4B4: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406AA4B9: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406AA4BF: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406AA4C5: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406AA4CB: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406AA4D0: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406AA4D5: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406AA4DA: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406AA4DF: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406AA4E4: mov     rbx, [rcx]
 * 00000001406AA4E7: mov     rdi, [rcx+8]
 * 00000001406AA4EB: mov     rsi, [rcx+10h]
 * 00000001406AA4EF: mov     r12, [rcx+18h]
 * 00000001406AA4F3: mov     r13, [rcx+20h]
 * 00000001406AA4F7: mov     r14, [rcx+28h]
 * 00000001406AA4FB: mov     r15, [rcx+30h]
 * 00000001406AA4FF: cli
 * 00000001406AA500: xor     ecx, ecx
 * 00000001406AA502: rdsspq  rcx
 * 00000001406AA507: test    rcx, rcx
 * 00000001406AA50A: jz      short loc_1406AA516
 * 00000001406AA50C: mov     ecx, 1
 * 00000001406AA511: incsspq rcx
 * 00000001406AA516: test    byte ptr [rbp+0F0h], 1
 * 00000001406AA51D: jz      loc_1406AA818
 * 00000001406AA523: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AA52A: jz      short loc_1406AA52F
 * 00000001406AA52C: stac
 * 00000001406AA52F: mov     rcx, gs:188h
 * 00000001406AA538: test    byte ptr [rcx+0C2h], 3
 * 00000001406AA53F: jz      short loc_1406AA55C
 * 00000001406AA541: mov     ecx, 1
 * 00000001406AA546: mov     cr8, rcx
 * 00000001406AA54A: sti
 * 00000001406AA54B: call    KiInitiateUserApc
 * 00000001406AA550: cli
 * 00000001406AA551: mov     ecx, 0
 * 00000001406AA556: mov     cr8, rcx
 * 00000001406AA55A: jmp     short loc_1406AA52F
 * 00000001406AA55C: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AA561: test    eax, eax
 * 00000001406AA563: mov     rax, [rbp-50h]
 * 00000001406AA567: jnz     short loc_1406AA52F
 * 00000001406AA569: test    byte ptr gs:860h, 2
 * 00000001406AA572: jz      short loc_1406AA57B
 * 00000001406AA574: xor     ecx, ecx
 * 00000001406AA576: call    KiUpdateStibpPairing
 * 00000001406AA57B: mov     rcx, gs:188h
 * 00000001406AA584: test    dword ptr [rcx], 8000000h
 * 00000001406AA58A: jz      short loc_1406AA591
 * 00000001406AA58C: call    KiRestoreSetContextState
 * 00000001406AA591: mov     rcx, gs:188h
 * 00000001406AA59A: test    dword ptr [rcx], 10000h
 * 00000001406AA5A0: jz      short loc_1406AA5B6
 * 00000001406AA5A2: test    byte ptr [rcx+2], 1
 * 00000001406AA5A6: jz      short loc_1406AA5B6
 * 00000001406AA5A8: call    KiCopyCounters
 * 00000001406AA5AD: mov     rcx, gs:188h
 * 00000001406AA5B6: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AA5BA: cmp     word ptr [rbp+80h], 0
 * 00000001406AA5C2: jz      short loc_1406AA5C9
 * 00000001406AA5C4: call    KiRestoreDebugRegisterState
 * 00000001406AA5C9: mov     rcx, gs:188h
 * 00000001406AA5D2: bt      dword ptr [rcx+74h], 16h
 * 00000001406AA5D7: jnb     short loc_1406AA603
 * 00000001406AA5D9: xor     ecx, ecx
 * 00000001406AA5DB: rdsspq  rcx
 * 00000001406AA5E0: mov     r8, gs:9D28h
 * 00000001406AA5E9: add     r8, 8
 * 00000001406AA5ED: cmp     rcx, r8
 * 00000001406AA5F0: jnz     short loc_1406AA603
 * 00000001406AA5F2: mov     rcx, gs:9D20h
 * 00000001406AA5FB: rstorssp qword ptr [rcx]
 * 00000001406AA5FF: saveprevssp
 * 00000001406AA603: mov     byte ptr gs:85Eh, 0
 * 00000001406AA60C: movzx   eax, word ptr gs:86Ch
 * 00000001406AA615: cmp     gs:866h, ax
 * 00000001406AA61E: jz      short loc_1406AA632
 * 00000001406AA620: mov     gs:866h, ax
 * 00000001406AA629: mov     ecx, 48h ; 'H'
 * 00000001406AA62E: xor     edx, edx
 * 00000001406AA630: wrmsr
 * 00000001406AA632: btr     word ptr gs:858h, 2
 * 00000001406AA63D: jnb     short loc_1406AA64D
 * 00000001406AA63F: mov     eax, 1
 * 00000001406AA644: xor     edx, edx
 * 00000001406AA646: mov     ecx, 49h ; 'I'
 * 00000001406AA64B: wrmsr
 * 00000001406AA64D: btr     word ptr gs:858h, 5
 * 00000001406AA658: jnb     loc_1406AA795
 * 00000001406AA65E: call    loc_1406AA771
 * 00000001406AA663: add     rsp, 8
 * 00000001406AA667: call    loc_1406AA77A
 * 00000001406AA66C: add     rsp, 8
 * 00000001406AA670: call    loc_1406AA663
 * 00000001406AA675: add     rsp, 8
 * 00000001406AA679: call    loc_1406AA66C
 * 00000001406AA67E: add     rsp, 8
 * 00000001406AA682: call    loc_1406AA675
 * 00000001406AA687: add     rsp, 8
 * 00000001406AA68B: call    loc_1406AA67E
 * 00000001406AA690: add     rsp, 8
 * 00000001406AA694: call    loc_1406AA687
 * 00000001406AA699: add     rsp, 8
 * 00000001406AA69D: call    loc_1406AA690
 * 00000001406AA6A2: add     rsp, 8
 * 00000001406AA6A6: call    loc_1406AA699
 * 00000001406AA6AB: add     rsp, 8
 * 00000001406AA6AF: call    loc_1406AA6A2
 * 00000001406AA6B4: add     rsp, 8
 * 00000001406AA6B8: call    loc_1406AA6AB
 * 00000001406AA6BD: add     rsp, 8
 * 00000001406AA6C1: call    loc_1406AA6B4
 * 00000001406AA6C6: add     rsp, 8
 * 00000001406AA6CA: call    loc_1406AA6BD
 * 00000001406AA6CF: add     rsp, 8
 * 00000001406AA6D3: call    loc_1406AA6C6
 * 00000001406AA6D8: add     rsp, 8
 * 00000001406AA6DC: call    loc_1406AA6CF
 * 00000001406AA6E1: add     rsp, 8
 * 00000001406AA6E5: call    loc_1406AA6D8
 * 00000001406AA6EA: add     rsp, 8
 * 00000001406AA6EE: call    loc_1406AA6E1
 * 00000001406AA6F3: add     rsp, 8
 * 00000001406AA6F7: call    loc_1406AA6EA
 * 00000001406AA6FC: add     rsp, 8
 * 00000001406AA700: call    loc_1406AA6F3
 * 00000001406AA705: add     rsp, 8
 * 00000001406AA709: call    loc_1406AA6FC
 * 00000001406AA70E: add     rsp, 8
 * 00000001406AA712: call    loc_1406AA705
 * 00000001406AA717: add     rsp, 8
 * 00000001406AA71B: call    loc_1406AA70E
 * 00000001406AA720: add     rsp, 8
 * 00000001406AA724: call    loc_1406AA717
 * 00000001406AA729: add     rsp, 8
 * 00000001406AA72D: call    loc_1406AA720
 * 00000001406AA732: add     rsp, 8
 * 00000001406AA736: call    loc_1406AA729
 * 00000001406AA73B: add     rsp, 8
 * 00000001406AA73F: call    loc_1406AA732
 * 00000001406AA744: add     rsp, 8
 * 00000001406AA748: call    loc_1406AA73B
 * 00000001406AA74D: add     rsp, 8
 * 00000001406AA751: call    loc_1406AA744
 * 00000001406AA756: add     rsp, 8
 * 00000001406AA75A: call    loc_1406AA74D
 * 00000001406AA75F: add     rsp, 8
 * 00000001406AA763: call    loc_1406AA756
 * 00000001406AA768: add     rsp, 8
 * 00000001406AA76C: call    loc_1406AA75F
 * 00000001406AA771: add     rsp, 8
 * 00000001406AA775: call    loc_1406AA768
 * 00000001406AA77A: add     rsp, 8
 * 00000001406AA77E: mov     eax, 0DADAh
 * 00000001406AA783: test    byte ptr gs:85Ch, 8
 * 00000001406AA78C: jz      short loc_1406AA795
 * 00000001406AA78E: mov     al, 20h ; ' '
 * 00000001406AA790: incsspq rax
 * 00000001406AA795: test    word ptr gs:858h, 100h
 * 00000001406AA7A0: jz      short loc_1406AA7AE
 * 00000001406AA7A2: xor     eax, eax
 * 00000001406AA7A4: xor     edx, edx
 * 00000001406AA7A6: mov     ecx, 1
 * 00000001406AA7AB: div     rcx
 * 00000001406AA7AE: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AA7B2: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AA7B6: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AA7BA: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AA7BE: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AA7C2: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AA7C6: mov     r11, [rbp-20h]
 * 00000001406AA7CA: mov     r10, [rbp-28h]
 * 00000001406AA7CE: mov     r9, [rbp-30h]
 * 00000001406AA7D2: mov     r8, [rbp-38h]
 * 00000001406AA7D6: mov     rdx, [rbp-40h]
 * 00000001406AA7DA: mov     rcx, [rbp-48h]
 * 00000001406AA7DE: mov     rax, [rbp-50h]
 * 00000001406AA7E2: mov     rsp, rbp
 * 00000001406AA7E5: mov     rbp, [rbp+0D8h]
 * 00000001406AA7EC: add     rsp, 0E8h
 * 00000001406AA7F3: test    cs:KiKvaShadow, 1
 * 00000001406AA7FA: jz      short loc_1406AA801
 * 00000001406AA7FC: jmp     KiKernelExit
 * 00000001406AA801: test    word ptr gs:858h, 200h
 * 00000001406AA80C: jz      short loc_1406AA813
 * 00000001406AA80E: verw    [rsp-1E8h+arg_200]
 * 00000001406AA813: swapgs
 * 00000001406AA816: iretq
 * 00000001406AA818: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AA81C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AA820: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AA824: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AA828: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AA82C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AA830: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AA834: mov     r11, [rbp-20h]
 * 00000001406AA838: mov     r10, [rbp-28h]
 * 00000001406AA83C: mov     r9, [rbp-30h]
 * 00000001406AA840: mov     r8, [rbp-38h]
 * 00000001406AA844: mov     rdx, [rbp-40h]
 * 00000001406AA848: mov     rcx, [rbp-48h]
 * 00000001406AA84C: mov     rax, [rbp-50h]
 * 00000001406AA850: mov     rsp, rbp
 * 00000001406AA853: mov     rbp, [rbp+0D8h]
 * 00000001406AA85A: add     rsp, 0E8h
 * 00000001406AA861: iretq
 * 00000001406AA863: add     rsp, 138h
 * 00000001406AA86A: retn
 */
