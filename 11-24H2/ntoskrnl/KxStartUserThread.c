/*
 * XREFs of KxStartUserThread @ 0x1406AC170
 * Callers:
 *     KyStartUserThread @ 0x1406ABE10 (KyStartUserThread.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x1406AC170 (KxStartUserThread.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for KxStartUserThread @ 0x1406AC170
 * Reason: Hex-Rays returned no pseudocode for 0x1406AC170
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AC170: sub     rsp, 138h
 * 00000001406AC177: lea     rax, [rsp+138h+var_38]
 * 00000001406AC17F: movaps  [rsp+138h+var_108], xmm6
 * 00000001406AC184: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406AC189: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406AC18F: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406AC195: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406AC19B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406AC1A0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406AC1A5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406AC1AA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406AC1AF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406AC1B4: mov     [rax], rbx
 * 00000001406AC1B7: mov     [rax+8], rdi
 * 00000001406AC1BB: mov     [rax+10h], rsi
 * 00000001406AC1BF: mov     [rax+18h], r12
 * 00000001406AC1C3: mov     [rax+20h], r13
 * 00000001406AC1C7: mov     [rax+28h], r14
 * 00000001406AC1CB: mov     [rax+30h], r15
 * 00000001406AC1CF: nop
 * 00000001406AC1D0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AC1D7: jz      short loc_1406AC1DC
 * 00000001406AC1D9: stac
 * 00000001406AC1DC: mov     ecx, 1
 * 00000001406AC1E1: mov     cr8, rcx
 * 00000001406AC1E5: mov     rdx, [rsp+138h+var_138]
 * 00000001406AC1E9: mov     rcx, [rsp+138h+var_130]
 * 00000001406AC1EE: mov     rax, [rsp+138h+var_128]
 * 00000001406AC1F3: call    _guard_dispatch_icall_no_overrides
 * 00000001406AC1F8: lea     rcx, [rsp+138h+var_38]
 * 00000001406AC200: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406AC205: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406AC20A: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406AC210: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406AC216: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406AC21C: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406AC221: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406AC226: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406AC22B: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406AC230: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406AC235: mov     rbx, [rcx]
 * 00000001406AC238: mov     rdi, [rcx+8]
 * 00000001406AC23C: mov     rsi, [rcx+10h]
 * 00000001406AC240: mov     r12, [rcx+18h]
 * 00000001406AC244: mov     r13, [rcx+20h]
 * 00000001406AC248: mov     r14, [rcx+28h]
 * 00000001406AC24C: mov     r15, [rcx+30h]
 * 00000001406AC250: cli
 * 00000001406AC251: test    byte ptr [rbp+0F0h], 1
 * 00000001406AC258: jz      loc_1406AC553
 * 00000001406AC25E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AC265: jz      short loc_1406AC26A
 * 00000001406AC267: stac
 * 00000001406AC26A: mov     rcx, gs:188h
 * 00000001406AC273: test    byte ptr [rcx+0C2h], 3
 * 00000001406AC27A: jz      short loc_1406AC297
 * 00000001406AC27C: mov     ecx, 1
 * 00000001406AC281: mov     cr8, rcx
 * 00000001406AC285: sti
 * 00000001406AC286: call    KiInitiateUserApc
 * 00000001406AC28B: cli
 * 00000001406AC28C: mov     ecx, 0
 * 00000001406AC291: mov     cr8, rcx
 * 00000001406AC295: jmp     short loc_1406AC26A
 * 00000001406AC297: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AC29C: test    eax, eax
 * 00000001406AC29E: mov     rax, [rbp-50h]
 * 00000001406AC2A2: jnz     short loc_1406AC26A
 * 00000001406AC2A4: test    byte ptr gs:860h, 2
 * 00000001406AC2AD: jz      short loc_1406AC2B6
 * 00000001406AC2AF: xor     ecx, ecx
 * 00000001406AC2B1: call    KiUpdateStibpPairing
 * 00000001406AC2B6: mov     rcx, gs:188h
 * 00000001406AC2BF: test    dword ptr [rcx], 8000000h
 * 00000001406AC2C5: jz      short loc_1406AC2CC
 * 00000001406AC2C7: call    KiRestoreSetContextState
 * 00000001406AC2CC: mov     rcx, gs:188h
 * 00000001406AC2D5: test    dword ptr [rcx], 10000h
 * 00000001406AC2DB: jz      short loc_1406AC2F1
 * 00000001406AC2DD: test    byte ptr [rcx+2], 1
 * 00000001406AC2E1: jz      short loc_1406AC2F1
 * 00000001406AC2E3: call    KiCopyCounters
 * 00000001406AC2E8: mov     rcx, gs:188h
 * 00000001406AC2F1: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AC2F5: cmp     word ptr [rbp+80h], 0
 * 00000001406AC2FD: jz      short loc_1406AC304
 * 00000001406AC2FF: call    KiRestoreDebugRegisterState
 * 00000001406AC304: mov     rcx, gs:188h
 * 00000001406AC30D: bt      dword ptr [rcx+74h], 16h
 * 00000001406AC312: jnb     short loc_1406AC33E
 * 00000001406AC314: xor     ecx, ecx
 * 00000001406AC316: rdsspq  rcx
 * 00000001406AC31B: mov     r8, gs:9D28h
 * 00000001406AC324: add     r8, 8
 * 00000001406AC328: cmp     rcx, r8
 * 00000001406AC32B: jnz     short loc_1406AC33E
 * 00000001406AC32D: mov     rcx, gs:9D20h
 * 00000001406AC336: rstorssp qword ptr [rcx]
 * 00000001406AC33A: saveprevssp
 * 00000001406AC33E: mov     byte ptr gs:85Eh, 0
 * 00000001406AC347: movzx   eax, word ptr gs:86Ch
 * 00000001406AC350: cmp     gs:866h, ax
 * 00000001406AC359: jz      short loc_1406AC36D
 * 00000001406AC35B: mov     gs:866h, ax
 * 00000001406AC364: mov     ecx, 48h ; 'H'
 * 00000001406AC369: xor     edx, edx
 * 00000001406AC36B: wrmsr
 * 00000001406AC36D: btr     word ptr gs:858h, 2
 * 00000001406AC378: jnb     short loc_1406AC388
 * 00000001406AC37A: mov     eax, 1
 * 00000001406AC37F: xor     edx, edx
 * 00000001406AC381: mov     ecx, 49h ; 'I'
 * 00000001406AC386: wrmsr
 * 00000001406AC388: btr     word ptr gs:858h, 5
 * 00000001406AC393: jnb     loc_1406AC4D0
 * 00000001406AC399: call    loc_1406AC4AC
 * 00000001406AC39E: add     rsp, 8
 * 00000001406AC3A2: call    loc_1406AC4B5
 * 00000001406AC3A7: add     rsp, 8
 * 00000001406AC3AB: call    loc_1406AC39E
 * 00000001406AC3B0: add     rsp, 8
 * 00000001406AC3B4: call    loc_1406AC3A7
 * 00000001406AC3B9: add     rsp, 8
 * 00000001406AC3BD: call    loc_1406AC3B0
 * 00000001406AC3C2: add     rsp, 8
 * 00000001406AC3C6: call    loc_1406AC3B9
 * 00000001406AC3CB: add     rsp, 8
 * 00000001406AC3CF: call    loc_1406AC3C2
 * 00000001406AC3D4: add     rsp, 8
 * 00000001406AC3D8: call    loc_1406AC3CB
 * 00000001406AC3DD: add     rsp, 8
 * 00000001406AC3E1: call    loc_1406AC3D4
 * 00000001406AC3E6: add     rsp, 8
 * 00000001406AC3EA: call    loc_1406AC3DD
 * 00000001406AC3EF: add     rsp, 8
 * 00000001406AC3F3: call    loc_1406AC3E6
 * 00000001406AC3F8: add     rsp, 8
 * 00000001406AC3FC: call    loc_1406AC3EF
 * 00000001406AC401: add     rsp, 8
 * 00000001406AC405: call    loc_1406AC3F8
 * 00000001406AC40A: add     rsp, 8
 * 00000001406AC40E: call    loc_1406AC401
 * 00000001406AC413: add     rsp, 8
 * 00000001406AC417: call    loc_1406AC40A
 * 00000001406AC41C: add     rsp, 8
 * 00000001406AC420: call    loc_1406AC413
 * 00000001406AC425: add     rsp, 8
 * 00000001406AC429: call    loc_1406AC41C
 * 00000001406AC42E: add     rsp, 8
 * 00000001406AC432: call    loc_1406AC425
 * 00000001406AC437: add     rsp, 8
 * 00000001406AC43B: call    loc_1406AC42E
 * 00000001406AC440: add     rsp, 8
 * 00000001406AC444: call    loc_1406AC437
 * 00000001406AC449: add     rsp, 8
 * 00000001406AC44D: call    loc_1406AC440
 * 00000001406AC452: add     rsp, 8
 * 00000001406AC456: call    loc_1406AC449
 * 00000001406AC45B: add     rsp, 8
 * 00000001406AC45F: call    loc_1406AC452
 * 00000001406AC464: add     rsp, 8
 * 00000001406AC468: call    loc_1406AC45B
 * 00000001406AC46D: add     rsp, 8
 * 00000001406AC471: call    loc_1406AC464
 * 00000001406AC476: add     rsp, 8
 * 00000001406AC47A: call    loc_1406AC46D
 * 00000001406AC47F: add     rsp, 8
 * 00000001406AC483: call    loc_1406AC476
 * 00000001406AC488: add     rsp, 8
 * 00000001406AC48C: call    loc_1406AC47F
 * 00000001406AC491: add     rsp, 8
 * 00000001406AC495: call    loc_1406AC488
 * 00000001406AC49A: add     rsp, 8
 * 00000001406AC49E: call    loc_1406AC491
 * 00000001406AC4A3: add     rsp, 8
 * 00000001406AC4A7: call    loc_1406AC49A
 * 00000001406AC4AC: add     rsp, 8
 * 00000001406AC4B0: call    loc_1406AC4A3
 * 00000001406AC4B5: add     rsp, 8
 * 00000001406AC4B9: mov     eax, 0DADAh
 * 00000001406AC4BE: test    byte ptr gs:85Ch, 8
 * 00000001406AC4C7: jz      short loc_1406AC4D0
 * 00000001406AC4C9: mov     al, 20h ; ' '
 * 00000001406AC4CB: incsspq rax
 * 00000001406AC4D0: test    word ptr gs:858h, 100h
 * 00000001406AC4DB: jz      short loc_1406AC4E9
 * 00000001406AC4DD: xor     eax, eax
 * 00000001406AC4DF: xor     edx, edx
 * 00000001406AC4E1: mov     ecx, 1
 * 00000001406AC4E6: div     rcx
 * 00000001406AC4E9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AC4ED: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AC4F1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AC4F5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AC4F9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AC4FD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AC501: mov     r11, [rbp-20h]
 * 00000001406AC505: mov     r10, [rbp-28h]
 * 00000001406AC509: mov     r9, [rbp-30h]
 * 00000001406AC50D: mov     r8, [rbp-38h]
 * 00000001406AC511: mov     rdx, [rbp-40h]
 * 00000001406AC515: mov     rcx, [rbp-48h]
 * 00000001406AC519: mov     rax, [rbp-50h]
 * 00000001406AC51D: mov     rsp, rbp
 * 00000001406AC520: mov     rbp, [rbp+0D8h]
 * 00000001406AC527: add     rsp, 0E8h
 * 00000001406AC52E: test    cs:KiKvaShadow, 1
 * 00000001406AC535: jz      short loc_1406AC53C
 * 00000001406AC537: jmp     KiKernelExit
 * 00000001406AC53C: test    word ptr gs:858h, 200h
 * 00000001406AC547: jz      short loc_1406AC54E
 * 00000001406AC549: verw    [rsp-1E8h+arg_200]
 * 00000001406AC54E: swapgs
 * 00000001406AC551: iretq
 * 00000001406AC553: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AC557: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AC55B: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AC55F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AC563: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AC567: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AC56B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AC56F: mov     r11, [rbp-20h]
 * 00000001406AC573: mov     r10, [rbp-28h]
 * 00000001406AC577: mov     r9, [rbp-30h]
 * 00000001406AC57B: mov     r8, [rbp-38h]
 * 00000001406AC57F: mov     rdx, [rbp-40h]
 * 00000001406AC583: mov     rcx, [rbp-48h]
 * 00000001406AC587: mov     rax, [rbp-50h]
 * 00000001406AC58B: mov     rsp, rbp
 * 00000001406AC58E: mov     rbp, [rbp+0D8h]
 * 00000001406AC595: add     rsp, 0E8h
 * 00000001406AC59C: iretq
 */
