/*
 * XREFs of KxStartUserThread @ 0x1406AD110
 * Callers:
 *     KyStartUserThread @ 0x1406ACDB0 (KyStartUserThread.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x1406AD110 (KxStartUserThread.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for KxStartUserThread @ 0x1406AD110
 * Reason: Hex-Rays returned no pseudocode for 0x1406AD110
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AD110: sub     rsp, 138h
 * 00000001406AD117: lea     rax, [rsp+138h+var_38]
 * 00000001406AD11F: movaps  [rsp+138h+var_108], xmm6
 * 00000001406AD124: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406AD129: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406AD12F: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406AD135: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406AD13B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406AD140: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406AD145: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406AD14A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406AD14F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406AD154: mov     [rax], rbx
 * 00000001406AD157: mov     [rax+8], rdi
 * 00000001406AD15B: mov     [rax+10h], rsi
 * 00000001406AD15F: mov     [rax+18h], r12
 * 00000001406AD163: mov     [rax+20h], r13
 * 00000001406AD167: mov     [rax+28h], r14
 * 00000001406AD16B: mov     [rax+30h], r15
 * 00000001406AD16F: nop
 * 00000001406AD170: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AD177: jz      short loc_1406AD17C
 * 00000001406AD179: stac
 * 00000001406AD17C: mov     ecx, 1
 * 00000001406AD181: mov     cr8, rcx
 * 00000001406AD185: mov     rdx, [rsp+138h+var_138]
 * 00000001406AD189: mov     rcx, [rsp+138h+var_130]
 * 00000001406AD18E: mov     rax, [rsp+138h+var_128]
 * 00000001406AD193: call    _guard_dispatch_icall_no_overrides
 * 00000001406AD198: lea     rcx, [rsp+138h+var_38]
 * 00000001406AD1A0: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406AD1A5: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406AD1AA: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406AD1B0: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406AD1B6: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406AD1BC: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406AD1C1: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406AD1C6: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406AD1CB: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406AD1D0: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406AD1D5: mov     rbx, [rcx]
 * 00000001406AD1D8: mov     rdi, [rcx+8]
 * 00000001406AD1DC: mov     rsi, [rcx+10h]
 * 00000001406AD1E0: mov     r12, [rcx+18h]
 * 00000001406AD1E4: mov     r13, [rcx+20h]
 * 00000001406AD1E8: mov     r14, [rcx+28h]
 * 00000001406AD1EC: mov     r15, [rcx+30h]
 * 00000001406AD1F0: cli
 * 00000001406AD1F1: test    byte ptr [rbp+0F0h], 1
 * 00000001406AD1F8: jz      loc_1406AD4F3
 * 00000001406AD1FE: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AD205: jz      short loc_1406AD20A
 * 00000001406AD207: stac
 * 00000001406AD20A: mov     rcx, gs:188h
 * 00000001406AD213: test    byte ptr [rcx+0C2h], 3
 * 00000001406AD21A: jz      short loc_1406AD237
 * 00000001406AD21C: mov     ecx, 1
 * 00000001406AD221: mov     cr8, rcx
 * 00000001406AD225: sti
 * 00000001406AD226: call    KiInitiateUserApc
 * 00000001406AD22B: cli
 * 00000001406AD22C: mov     ecx, 0
 * 00000001406AD231: mov     cr8, rcx
 * 00000001406AD235: jmp     short loc_1406AD20A
 * 00000001406AD237: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AD23C: test    eax, eax
 * 00000001406AD23E: mov     rax, [rbp-50h]
 * 00000001406AD242: jnz     short loc_1406AD20A
 * 00000001406AD244: test    byte ptr gs:860h, 2
 * 00000001406AD24D: jz      short loc_1406AD256
 * 00000001406AD24F: xor     ecx, ecx
 * 00000001406AD251: call    KiUpdateStibpPairing
 * 00000001406AD256: mov     rcx, gs:188h
 * 00000001406AD25F: test    dword ptr [rcx], 8000000h
 * 00000001406AD265: jz      short loc_1406AD26C
 * 00000001406AD267: call    KiRestoreSetContextState
 * 00000001406AD26C: mov     rcx, gs:188h
 * 00000001406AD275: test    dword ptr [rcx], 10000h
 * 00000001406AD27B: jz      short loc_1406AD291
 * 00000001406AD27D: test    byte ptr [rcx+2], 1
 * 00000001406AD281: jz      short loc_1406AD291
 * 00000001406AD283: call    KiCopyCounters
 * 00000001406AD288: mov     rcx, gs:188h
 * 00000001406AD291: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AD295: cmp     word ptr [rbp+80h], 0
 * 00000001406AD29D: jz      short loc_1406AD2A4
 * 00000001406AD29F: call    KiRestoreDebugRegisterState
 * 00000001406AD2A4: mov     rcx, gs:188h
 * 00000001406AD2AD: bt      dword ptr [rcx+74h], 16h
 * 00000001406AD2B2: jnb     short loc_1406AD2DE
 * 00000001406AD2B4: xor     ecx, ecx
 * 00000001406AD2B6: rdsspq  rcx
 * 00000001406AD2BB: mov     r8, gs:9D28h
 * 00000001406AD2C4: add     r8, 8
 * 00000001406AD2C8: cmp     rcx, r8
 * 00000001406AD2CB: jnz     short loc_1406AD2DE
 * 00000001406AD2CD: mov     rcx, gs:9D20h
 * 00000001406AD2D6: rstorssp qword ptr [rcx]
 * 00000001406AD2DA: saveprevssp
 * 00000001406AD2DE: mov     byte ptr gs:85Eh, 0
 * 00000001406AD2E7: movzx   eax, word ptr gs:86Ch
 * 00000001406AD2F0: cmp     gs:866h, ax
 * 00000001406AD2F9: jz      short loc_1406AD30D
 * 00000001406AD2FB: mov     gs:866h, ax
 * 00000001406AD304: mov     ecx, 48h ; 'H'
 * 00000001406AD309: xor     edx, edx
 * 00000001406AD30B: wrmsr
 * 00000001406AD30D: btr     word ptr gs:858h, 2
 * 00000001406AD318: jnb     short loc_1406AD328
 * 00000001406AD31A: mov     eax, 1
 * 00000001406AD31F: xor     edx, edx
 * 00000001406AD321: mov     ecx, 49h ; 'I'
 * 00000001406AD326: wrmsr
 * 00000001406AD328: btr     word ptr gs:858h, 5
 * 00000001406AD333: jnb     loc_1406AD470
 * 00000001406AD339: call    loc_1406AD44C
 * 00000001406AD33E: add     rsp, 8
 * 00000001406AD342: call    loc_1406AD455
 * 00000001406AD347: add     rsp, 8
 * 00000001406AD34B: call    loc_1406AD33E
 * 00000001406AD350: add     rsp, 8
 * 00000001406AD354: call    loc_1406AD347
 * 00000001406AD359: add     rsp, 8
 * 00000001406AD35D: call    loc_1406AD350
 * 00000001406AD362: add     rsp, 8
 * 00000001406AD366: call    loc_1406AD359
 * 00000001406AD36B: add     rsp, 8
 * 00000001406AD36F: call    loc_1406AD362
 * 00000001406AD374: add     rsp, 8
 * 00000001406AD378: call    loc_1406AD36B
 * 00000001406AD37D: add     rsp, 8
 * 00000001406AD381: call    loc_1406AD374
 * 00000001406AD386: add     rsp, 8
 * 00000001406AD38A: call    loc_1406AD37D
 * 00000001406AD38F: add     rsp, 8
 * 00000001406AD393: call    loc_1406AD386
 * 00000001406AD398: add     rsp, 8
 * 00000001406AD39C: call    loc_1406AD38F
 * 00000001406AD3A1: add     rsp, 8
 * 00000001406AD3A5: call    loc_1406AD398
 * 00000001406AD3AA: add     rsp, 8
 * 00000001406AD3AE: call    loc_1406AD3A1
 * 00000001406AD3B3: add     rsp, 8
 * 00000001406AD3B7: call    loc_1406AD3AA
 * 00000001406AD3BC: add     rsp, 8
 * 00000001406AD3C0: call    loc_1406AD3B3
 * 00000001406AD3C5: add     rsp, 8
 * 00000001406AD3C9: call    loc_1406AD3BC
 * 00000001406AD3CE: add     rsp, 8
 * 00000001406AD3D2: call    loc_1406AD3C5
 * 00000001406AD3D7: add     rsp, 8
 * 00000001406AD3DB: call    loc_1406AD3CE
 * 00000001406AD3E0: add     rsp, 8
 * 00000001406AD3E4: call    loc_1406AD3D7
 * 00000001406AD3E9: add     rsp, 8
 * 00000001406AD3ED: call    loc_1406AD3E0
 * 00000001406AD3F2: add     rsp, 8
 * 00000001406AD3F6: call    loc_1406AD3E9
 * 00000001406AD3FB: add     rsp, 8
 * 00000001406AD3FF: call    loc_1406AD3F2
 * 00000001406AD404: add     rsp, 8
 * 00000001406AD408: call    loc_1406AD3FB
 * 00000001406AD40D: add     rsp, 8
 * 00000001406AD411: call    loc_1406AD404
 * 00000001406AD416: add     rsp, 8
 * 00000001406AD41A: call    loc_1406AD40D
 * 00000001406AD41F: add     rsp, 8
 * 00000001406AD423: call    loc_1406AD416
 * 00000001406AD428: add     rsp, 8
 * 00000001406AD42C: call    loc_1406AD41F
 * 00000001406AD431: add     rsp, 8
 * 00000001406AD435: call    loc_1406AD428
 * 00000001406AD43A: add     rsp, 8
 * 00000001406AD43E: call    loc_1406AD431
 * 00000001406AD443: add     rsp, 8
 * 00000001406AD447: call    loc_1406AD43A
 * 00000001406AD44C: add     rsp, 8
 * 00000001406AD450: call    loc_1406AD443
 * 00000001406AD455: add     rsp, 8
 * 00000001406AD459: mov     eax, 0DADAh
 * 00000001406AD45E: test    byte ptr gs:85Ch, 8
 * 00000001406AD467: jz      short loc_1406AD470
 * 00000001406AD469: mov     al, 20h ; ' '
 * 00000001406AD46B: incsspq rax
 * 00000001406AD470: test    word ptr gs:858h, 100h
 * 00000001406AD47B: jz      short loc_1406AD489
 * 00000001406AD47D: xor     eax, eax
 * 00000001406AD47F: xor     edx, edx
 * 00000001406AD481: mov     ecx, 1
 * 00000001406AD486: div     rcx
 * 00000001406AD489: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AD48D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AD491: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AD495: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AD499: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AD49D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AD4A1: mov     r11, [rbp-20h]
 * 00000001406AD4A5: mov     r10, [rbp-28h]
 * 00000001406AD4A9: mov     r9, [rbp-30h]
 * 00000001406AD4AD: mov     r8, [rbp-38h]
 * 00000001406AD4B1: mov     rdx, [rbp-40h]
 * 00000001406AD4B5: mov     rcx, [rbp-48h]
 * 00000001406AD4B9: mov     rax, [rbp-50h]
 * 00000001406AD4BD: mov     rsp, rbp
 * 00000001406AD4C0: mov     rbp, [rbp+0D8h]
 * 00000001406AD4C7: add     rsp, 0E8h
 * 00000001406AD4CE: test    cs:KiKvaShadow, 1
 * 00000001406AD4D5: jz      short loc_1406AD4DC
 * 00000001406AD4D7: jmp     KiKernelExit
 * 00000001406AD4DC: test    word ptr gs:858h, 200h
 * 00000001406AD4E7: jz      short loc_1406AD4EE
 * 00000001406AD4E9: verw    [rsp-1E8h+arg_200]
 * 00000001406AD4EE: swapgs
 * 00000001406AD4F1: iretq
 * 00000001406AD4F3: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AD4F7: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AD4FB: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AD4FF: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AD503: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AD507: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AD50B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AD50F: mov     r11, [rbp-20h]
 * 00000001406AD513: mov     r10, [rbp-28h]
 * 00000001406AD517: mov     r9, [rbp-30h]
 * 00000001406AD51B: mov     r8, [rbp-38h]
 * 00000001406AD51F: mov     rdx, [rbp-40h]
 * 00000001406AD523: mov     rcx, [rbp-48h]
 * 00000001406AD527: mov     rax, [rbp-50h]
 * 00000001406AD52B: mov     rsp, rbp
 * 00000001406AD52E: mov     rbp, [rbp+0D8h]
 * 00000001406AD535: add     rsp, 0E8h
 * 00000001406AD53C: iretq
 */
