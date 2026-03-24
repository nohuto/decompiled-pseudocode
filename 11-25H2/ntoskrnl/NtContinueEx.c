/*
 * XREFs of NtContinueEx @ 0x14069F120
 * Callers:
 *     NtContinue @ 0x14069F110 (NtContinue.c)
 * Callees:
 *     KiContinueEx @ 0x140260E20 (KiContinueEx.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     NtContinueEx @ 0x14069F120 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 */

/*
 * Hex-Rays decompilation failed for NtContinueEx @ 0x14069F120
 * Reason: Hex-Rays returned no pseudocode for 0x14069F120
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014069F120: mov     rbx, [rbp+0C0h]
 * 000000014069F127: mov     rdi, [rbp+0C8h]
 * 000000014069F12E: mov     rsi, [rbp+0D0h]
 * 000000014069F135: xor     eax, eax
 * 000000014069F137: mov     [rbp-50h], rax
 * 000000014069F13B: sub     rsp, 138h
 * 000000014069F142: lea     rax, [rsp+138h+var_38]
 * 000000014069F14A: movaps  [rsp+138h+var_108], xmm6
 * 000000014069F14F: movaps  [rsp+138h+var_F8], xmm7
 * 000000014069F154: movaps  [rsp+138h+var_E8], xmm8
 * 000000014069F15A: movaps  [rsp+138h+var_D8], xmm9
 * 000000014069F160: movaps  [rsp+138h+var_C8], xmm10
 * 000000014069F166: movaps  xmmword ptr [rax-80h], xmm11
 * 000000014069F16B: movaps  xmmword ptr [rax-70h], xmm12
 * 000000014069F170: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014069F175: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014069F17A: movaps  xmmword ptr [rax-40h], xmm15
 * 000000014069F17F: mov     [rax], rbx
 * 000000014069F182: mov     [rax+8], rdi
 * 000000014069F186: mov     [rax+10h], rsi
 * 000000014069F18A: mov     [rax+18h], r12
 * 000000014069F18E: mov     [rax+20h], r13
 * 000000014069F192: mov     [rax+28h], r14
 * 000000014069F196: mov     [rax+30h], r15
 * 000000014069F19A: mov     r8, rsp
 * 000000014069F19D: lea     r9, [rbp-80h]
 * 000000014069F1A1: call    KiContinueEx
 * 000000014069F1A6: test    eax, eax
 * 000000014069F1A8: jle     loc_14069F593
 * 000000014069F1AE: mov     rcx, gs:188h
 * 000000014069F1B7: test    byte ptr [rbp+0F0h], 1
 * 000000014069F1BE: jnz     short loc_14069F1D7
 * 000000014069F1C0: mov     rdx, [rbp+0B8h]
 * 000000014069F1C7: mov     [rcx+90h], rdx
 * 000000014069F1CE: mov     dl, [rbp-58h]
 * 000000014069F1D1: mov     [rcx+232h], dl
 * 000000014069F1D7: lea     rcx, [rsp+138h+var_38]
 * 000000014069F1DF: movaps  xmm6, [rsp+138h+var_108]
 * 000000014069F1E4: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014069F1E9: movaps  xmm8, [rsp+138h+var_E8]
 * 000000014069F1EF: movaps  xmm9, [rsp+138h+var_D8]
 * 000000014069F1F5: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014069F1FB: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014069F200: movaps  xmm12, xmmword ptr [rcx-70h]
 * 000000014069F205: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014069F20A: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014069F20F: movaps  xmm15, xmmword ptr [rcx-40h]
 * 000000014069F214: mov     rbx, [rcx]
 * 000000014069F217: mov     rdi, [rcx+8]
 * 000000014069F21B: mov     rsi, [rcx+10h]
 * 000000014069F21F: mov     r12, [rcx+18h]
 * 000000014069F223: mov     r13, [rcx+20h]
 * 000000014069F227: mov     r14, [rcx+28h]
 * 000000014069F22B: mov     r15, [rcx+30h]
 * 000000014069F22F: cli
 * 000000014069F230: xor     ecx, ecx
 * 000000014069F232: rdsspq  rcx
 * 000000014069F237: test    rcx, rcx
 * 000000014069F23A: jz      short loc_14069F246
 * 000000014069F23C: mov     ecx, 1
 * 000000014069F241: incsspq rcx
 * 000000014069F246: test    byte ptr [rbp+0F0h], 1
 * 000000014069F24D: jz      loc_14069F548
 * 000000014069F253: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014069F25A: jz      short loc_14069F25F
 * 000000014069F25C: stac
 * 000000014069F25F: mov     rcx, gs:188h
 * 000000014069F268: test    byte ptr [rcx+0C2h], 3
 * 000000014069F26F: jz      short loc_14069F28C
 * 000000014069F271: mov     ecx, 1
 * 000000014069F276: mov     cr8, rcx
 * 000000014069F27A: sti
 * 000000014069F27B: call    KiInitiateUserApc
 * 000000014069F280: cli
 * 000000014069F281: mov     ecx, 0
 * 000000014069F286: mov     cr8, rcx
 * 000000014069F28A: jmp     short loc_14069F25F
 * 000000014069F28C: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014069F291: test    eax, eax
 * 000000014069F293: mov     rax, [rbp-50h]
 * 000000014069F297: jnz     short loc_14069F25F
 * 000000014069F299: test    byte ptr gs:860h, 2
 * 000000014069F2A2: jz      short loc_14069F2AB
 * 000000014069F2A4: xor     ecx, ecx
 * 000000014069F2A6: call    KiUpdateStibpPairing
 * 000000014069F2AB: mov     rcx, gs:188h
 * 000000014069F2B4: test    dword ptr [rcx], 8000000h
 * 000000014069F2BA: jz      short loc_14069F2C1
 * 000000014069F2BC: call    KiRestoreSetContextState
 * 000000014069F2C1: mov     rcx, gs:188h
 * 000000014069F2CA: test    dword ptr [rcx], 10000h
 * 000000014069F2D0: jz      short loc_14069F2E6
 * 000000014069F2D2: test    byte ptr [rcx+2], 1
 * 000000014069F2D6: jz      short loc_14069F2E6
 * 000000014069F2D8: call    KiCopyCounters
 * 000000014069F2DD: mov     rcx, gs:188h
 * 000000014069F2E6: ldmxcsr dword ptr [rbp-54h]
 * 000000014069F2EA: cmp     word ptr [rbp+80h], 0
 * 000000014069F2F2: jz      short loc_14069F2F9
 * 000000014069F2F4: call    KiRestoreDebugRegisterState
 * 000000014069F2F9: mov     rcx, gs:188h
 * 000000014069F302: bt      dword ptr [rcx+74h], 16h
 * 000000014069F307: jnb     short loc_14069F333
 * 000000014069F309: xor     ecx, ecx
 * 000000014069F30B: rdsspq  rcx
 * 000000014069F310: mov     r8, gs:9D28h
 * 000000014069F319: add     r8, 8
 * 000000014069F31D: cmp     rcx, r8
 * 000000014069F320: jnz     short loc_14069F333
 * 000000014069F322: mov     rcx, gs:9D20h
 * 000000014069F32B: rstorssp qword ptr [rcx]
 * 000000014069F32F: saveprevssp
 * 000000014069F333: mov     byte ptr gs:85Eh, 0
 * 000000014069F33C: movzx   eax, word ptr gs:86Ch
 * 000000014069F345: cmp     gs:866h, ax
 * 000000014069F34E: jz      short loc_14069F362
 * 000000014069F350: mov     gs:866h, ax
 * 000000014069F359: mov     ecx, 48h ; 'H'
 * 000000014069F35E: xor     edx, edx
 * 000000014069F360: wrmsr
 * 000000014069F362: btr     word ptr gs:858h, 2
 * 000000014069F36D: jnb     short loc_14069F37D
 * 000000014069F36F: mov     eax, 1
 * 000000014069F374: xor     edx, edx
 * 000000014069F376: mov     ecx, 49h ; 'I'
 * 000000014069F37B: wrmsr
 * 000000014069F37D: btr     word ptr gs:858h, 5
 * 000000014069F388: jnb     loc_14069F4C5
 * 000000014069F38E: call    loc_14069F4A1
 * 000000014069F393: add     rsp, 8
 * 000000014069F397: call    loc_14069F4AA
 * 000000014069F39C: add     rsp, 8
 * 000000014069F3A0: call    loc_14069F393
 * 000000014069F3A5: add     rsp, 8
 * 000000014069F3A9: call    loc_14069F39C
 * 000000014069F3AE: add     rsp, 8
 * 000000014069F3B2: call    loc_14069F3A5
 * 000000014069F3B7: add     rsp, 8
 * 000000014069F3BB: call    loc_14069F3AE
 * 000000014069F3C0: add     rsp, 8
 * 000000014069F3C4: call    loc_14069F3B7
 * 000000014069F3C9: add     rsp, 8
 * 000000014069F3CD: call    loc_14069F3C0
 * 000000014069F3D2: add     rsp, 8
 * 000000014069F3D6: call    loc_14069F3C9
 * 000000014069F3DB: add     rsp, 8
 * 000000014069F3DF: call    loc_14069F3D2
 * 000000014069F3E4: add     rsp, 8
 * 000000014069F3E8: call    loc_14069F3DB
 * 000000014069F3ED: add     rsp, 8
 * 000000014069F3F1: call    loc_14069F3E4
 * 000000014069F3F6: add     rsp, 8
 * 000000014069F3FA: call    loc_14069F3ED
 * 000000014069F3FF: add     rsp, 8
 * 000000014069F403: call    loc_14069F3F6
 * 000000014069F408: add     rsp, 8
 * 000000014069F40C: call    loc_14069F3FF
 * 000000014069F411: add     rsp, 8
 * 000000014069F415: call    loc_14069F408
 * 000000014069F41A: add     rsp, 8
 * 000000014069F41E: call    loc_14069F411
 * 000000014069F423: add     rsp, 8
 * 000000014069F427: call    loc_14069F41A
 * 000000014069F42C: add     rsp, 8
 * 000000014069F430: call    loc_14069F423
 * 000000014069F435: add     rsp, 8
 * 000000014069F439: call    loc_14069F42C
 * 000000014069F43E: add     rsp, 8
 * 000000014069F442: call    loc_14069F435
 * 000000014069F447: add     rsp, 8
 * 000000014069F44B: call    loc_14069F43E
 * 000000014069F450: add     rsp, 8
 * 000000014069F454: call    loc_14069F447
 * 000000014069F459: add     rsp, 8
 * 000000014069F45D: call    loc_14069F450
 * 000000014069F462: add     rsp, 8
 * 000000014069F466: call    loc_14069F459
 * 000000014069F46B: add     rsp, 8
 * 000000014069F46F: call    loc_14069F462
 * 000000014069F474: add     rsp, 8
 * 000000014069F478: call    loc_14069F46B
 * 000000014069F47D: add     rsp, 8
 * 000000014069F481: call    loc_14069F474
 * 000000014069F486: add     rsp, 8
 * 000000014069F48A: call    loc_14069F47D
 * 000000014069F48F: add     rsp, 8
 * 000000014069F493: call    loc_14069F486
 * 000000014069F498: add     rsp, 8
 * 000000014069F49C: call    loc_14069F48F
 * 000000014069F4A1: add     rsp, 8
 * 000000014069F4A5: call    loc_14069F498
 * 000000014069F4AA: add     rsp, 8
 * 000000014069F4AE: mov     eax, 0DADAh
 * 000000014069F4B3: test    byte ptr gs:85Ch, 8
 * 000000014069F4BC: jz      short loc_14069F4C5
 * 000000014069F4BE: mov     al, 20h ; ' '
 * 000000014069F4C0: incsspq rax
 * 000000014069F4C5: test    word ptr gs:858h, 100h
 * 000000014069F4D0: jz      short loc_14069F4DE
 * 000000014069F4D2: xor     eax, eax
 * 000000014069F4D4: xor     edx, edx
 * 000000014069F4D6: mov     ecx, 1
 * 000000014069F4DB: div     rcx
 * 000000014069F4DE: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014069F4E2: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014069F4E6: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014069F4EA: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014069F4EE: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014069F4F2: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014069F4F6: mov     r11, [rbp-20h]
 * 000000014069F4FA: mov     r10, [rbp-28h]
 * 000000014069F4FE: mov     r9, [rbp-30h]
 * 000000014069F502: mov     r8, [rbp-38h]
 * 000000014069F506: mov     rdx, [rbp-40h]
 * 000000014069F50A: mov     rcx, [rbp-48h]
 * 000000014069F50E: mov     rax, [rbp-50h]
 * 000000014069F512: mov     rsp, rbp
 * 000000014069F515: mov     rbp, [rbp+0D8h]
 * 000000014069F51C: add     rsp, 0E8h
 * 000000014069F523: test    cs:KiKvaShadow, 1
 * 000000014069F52A: jz      short loc_14069F531
 * 000000014069F52C: jmp     KiKernelExit
 * 000000014069F531: test    word ptr gs:858h, 200h
 * 000000014069F53C: jz      short loc_14069F543
 * 000000014069F53E: verw    [rsp-1E8h+arg_200]
 * 000000014069F543: swapgs
 * 000000014069F546: iretq
 * 000000014069F548: ldmxcsr dword ptr [rbp-54h]
 * 000000014069F54C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014069F550: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014069F554: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014069F558: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014069F55C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014069F560: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014069F564: mov     r11, [rbp-20h]
 * 000000014069F568: mov     r10, [rbp-28h]
 * 000000014069F56C: mov     r9, [rbp-30h]
 * 000000014069F570: mov     r8, [rbp-38h]
 * 000000014069F574: mov     rdx, [rbp-40h]
 * 000000014069F578: mov     rcx, [rbp-48h]
 * 000000014069F57C: mov     rax, [rbp-50h]
 * 000000014069F580: mov     rsp, rbp
 * 000000014069F583: mov     rbp, [rbp+0D8h]
 * 000000014069F58A: add     rsp, 0E8h
 * 000000014069F591: iretq
 * 000000014069F593: add     rsp, 138h
 * 000000014069F59A: retn
 */
