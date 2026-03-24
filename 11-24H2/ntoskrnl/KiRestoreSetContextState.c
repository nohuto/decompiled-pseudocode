/*
 * XREFs of KiRestoreSetContextState @ 0x1406AAFC0
 * Callers:
 *     NtContinueEx @ 0x1406AA3F0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1406AA880 (NtRaiseException.c)
 *     KxStartUserThread @ 0x1406AC170 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x1406AC7A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406ACE50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406AD230 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AD610 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AD9F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406ADDC0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AE9A0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406AF140 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406B0A70 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406B0E60 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406B1390 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406B1AE0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B2240 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1406B3EC0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B7B40 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1406BB200 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406BF240 (KiFastFailDispatch.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x1404FBAC0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 */

/*
 * Hex-Rays decompilation failed for KiRestoreSetContextState @ 0x1406AAFC0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AAFC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AAFC0: sub     rsp, 138h
 * 00000001406AAFC7: lea     rax, [rsp+138h+var_38]
 * 00000001406AAFCF: movaps  [rsp+138h+var_108], xmm6
 * 00000001406AAFD4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406AAFD9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406AAFDF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406AAFE5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406AAFEB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406AAFF0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406AAFF5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406AAFFA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406AAFFF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406AB004: mov     [rax], rbx
 * 00000001406AB007: mov     [rax+8], rdi
 * 00000001406AB00B: mov     [rax+10h], rsi
 * 00000001406AB00F: mov     [rax+18h], r12
 * 00000001406AB013: mov     [rax+20h], r13
 * 00000001406AB017: mov     [rax+28h], r14
 * 00000001406AB01B: mov     [rax+30h], r15
 * 00000001406AB01F: mov     ecx, 1
 * 00000001406AB024: mov     cr8, rcx
 * 00000001406AB028: sti
 * 00000001406AB029: mov     rcx, gs:188h
 * 00000001406AB032: mov     rcx, [rcx+6A8h]
 * 00000001406AB039: mov     [rsp+138h+var_118], 1
 * 00000001406AB042: mov     r9d, [rcx+30h]
 * 00000001406AB046: mov     r8, rcx
 * 00000001406AB049: mov     rdx, rsp
 * 00000001406AB04C: lea     rcx, [rbp-80h]
 * 00000001406AB050: call    KeContextToKframes
 * 00000001406AB055: cli
 * 00000001406AB056: mov     ecx, 0
 * 00000001406AB05B: mov     cr8, rcx
 * 00000001406AB05F: mov     rcx, gs:188h
 * 00000001406AB068: lock btr dword ptr [rcx], 1Bh
 * 00000001406AB06D: lea     rcx, [rsp+138h+var_38]
 * 00000001406AB075: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406AB07A: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406AB07F: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406AB085: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406AB08B: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406AB091: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406AB096: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406AB09B: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406AB0A0: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406AB0A5: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406AB0AA: mov     rbx, [rcx]
 * 00000001406AB0AD: mov     rdi, [rcx+8]
 * 00000001406AB0B1: mov     rsi, [rcx+10h]
 * 00000001406AB0B5: mov     r12, [rcx+18h]
 * 00000001406AB0B9: mov     r13, [rcx+20h]
 * 00000001406AB0BD: mov     r14, [rcx+28h]
 * 00000001406AB0C1: mov     r15, [rcx+30h]
 * 00000001406AB0C5: test    byte ptr gs:860h, 2
 * 00000001406AB0CE: jz      short loc_1406AB0D7
 * 00000001406AB0D0: xor     ecx, ecx
 * 00000001406AB0D2: call    KiUpdateStibpPairing
 * 00000001406AB0D7: xor     ecx, ecx
 * 00000001406AB0D9: rdsspq  rcx
 * 00000001406AB0DE: test    rcx, rcx
 * 00000001406AB0E1: jz      short loc_1406AB0ED
 * 00000001406AB0E3: mov     ecx, 1
 * 00000001406AB0E8: incsspq rcx
 * 00000001406AB0ED: test    byte ptr [rbp+0F0h], 1
 * 00000001406AB0F4: jz      loc_1406AB38D
 * 00000001406AB0FA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AB101: jz      short loc_1406AB106
 * 00000001406AB103: stac
 * 00000001406AB106: mov     rcx, gs:188h
 * 00000001406AB10F: test    dword ptr [rcx], 10000h
 * 00000001406AB115: jz      short loc_1406AB12B
 * 00000001406AB117: test    byte ptr [rcx+2], 1
 * 00000001406AB11B: jz      short loc_1406AB12B
 * 00000001406AB11D: call    KiCopyCounters
 * 00000001406AB122: mov     rcx, gs:188h
 * 00000001406AB12B: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AB12F: cmp     word ptr [rbp+80h], 0
 * 00000001406AB137: jz      short loc_1406AB13E
 * 00000001406AB139: call    KiRestoreDebugRegisterState
 * 00000001406AB13E: mov     rcx, gs:188h
 * 00000001406AB147: bt      dword ptr [rcx+74h], 16h
 * 00000001406AB14C: jnb     short loc_1406AB178
 * 00000001406AB14E: xor     ecx, ecx
 * 00000001406AB150: rdsspq  rcx
 * 00000001406AB155: mov     r8, gs:9D28h
 * 00000001406AB15E: add     r8, 8
 * 00000001406AB162: cmp     rcx, r8
 * 00000001406AB165: jnz     short loc_1406AB178
 * 00000001406AB167: mov     rcx, gs:9D20h
 * 00000001406AB170: rstorssp qword ptr [rcx]
 * 00000001406AB174: saveprevssp
 * 00000001406AB178: mov     byte ptr gs:85Eh, 0
 * 00000001406AB181: movzx   eax, word ptr gs:86Ch
 * 00000001406AB18A: cmp     gs:866h, ax
 * 00000001406AB193: jz      short loc_1406AB1A7
 * 00000001406AB195: mov     gs:866h, ax
 * 00000001406AB19E: mov     ecx, 48h ; 'H'
 * 00000001406AB1A3: xor     edx, edx
 * 00000001406AB1A5: wrmsr
 * 00000001406AB1A7: btr     word ptr gs:858h, 2
 * 00000001406AB1B2: jnb     short loc_1406AB1C2
 * 00000001406AB1B4: mov     eax, 1
 * 00000001406AB1B9: xor     edx, edx
 * 00000001406AB1BB: mov     ecx, 49h ; 'I'
 * 00000001406AB1C0: wrmsr
 * 00000001406AB1C2: btr     word ptr gs:858h, 5
 * 00000001406AB1CD: jnb     loc_1406AB30A
 * 00000001406AB1D3: call    loc_1406AB2E6
 * 00000001406AB1D8: add     rsp, 8
 * 00000001406AB1DC: call    loc_1406AB2EF
 * 00000001406AB1E1: add     rsp, 8
 * 00000001406AB1E5: call    loc_1406AB1D8
 * 00000001406AB1EA: add     rsp, 8
 * 00000001406AB1EE: call    loc_1406AB1E1
 * 00000001406AB1F3: add     rsp, 8
 * 00000001406AB1F7: call    loc_1406AB1EA
 * 00000001406AB1FC: add     rsp, 8
 * 00000001406AB200: call    loc_1406AB1F3
 * 00000001406AB205: add     rsp, 8
 * 00000001406AB209: call    loc_1406AB1FC
 * 00000001406AB20E: add     rsp, 8
 * 00000001406AB212: call    loc_1406AB205
 * 00000001406AB217: add     rsp, 8
 * 00000001406AB21B: call    loc_1406AB20E
 * 00000001406AB220: add     rsp, 8
 * 00000001406AB224: call    loc_1406AB217
 * 00000001406AB229: add     rsp, 8
 * 00000001406AB22D: call    loc_1406AB220
 * 00000001406AB232: add     rsp, 8
 * 00000001406AB236: call    loc_1406AB229
 * 00000001406AB23B: add     rsp, 8
 * 00000001406AB23F: call    loc_1406AB232
 * 00000001406AB244: add     rsp, 8
 * 00000001406AB248: call    loc_1406AB23B
 * 00000001406AB24D: add     rsp, 8
 * 00000001406AB251: call    loc_1406AB244
 * 00000001406AB256: add     rsp, 8
 * 00000001406AB25A: call    loc_1406AB24D
 * 00000001406AB25F: add     rsp, 8
 * 00000001406AB263: call    loc_1406AB256
 * 00000001406AB268: add     rsp, 8
 * 00000001406AB26C: call    loc_1406AB25F
 * 00000001406AB271: add     rsp, 8
 * 00000001406AB275: call    loc_1406AB268
 * 00000001406AB27A: add     rsp, 8
 * 00000001406AB27E: call    loc_1406AB271
 * 00000001406AB283: add     rsp, 8
 * 00000001406AB287: call    loc_1406AB27A
 * 00000001406AB28C: add     rsp, 8
 * 00000001406AB290: call    loc_1406AB283
 * 00000001406AB295: add     rsp, 8
 * 00000001406AB299: call    loc_1406AB28C
 * 00000001406AB29E: add     rsp, 8
 * 00000001406AB2A2: call    loc_1406AB295
 * 00000001406AB2A7: add     rsp, 8
 * 00000001406AB2AB: call    loc_1406AB29E
 * 00000001406AB2B0: add     rsp, 8
 * 00000001406AB2B4: call    loc_1406AB2A7
 * 00000001406AB2B9: add     rsp, 8
 * 00000001406AB2BD: call    loc_1406AB2B0
 * 00000001406AB2C2: add     rsp, 8
 * 00000001406AB2C6: call    loc_1406AB2B9
 * 00000001406AB2CB: add     rsp, 8
 * 00000001406AB2CF: call    loc_1406AB2C2
 * 00000001406AB2D4: add     rsp, 8
 * 00000001406AB2D8: call    loc_1406AB2CB
 * 00000001406AB2DD: add     rsp, 8
 * 00000001406AB2E1: call    loc_1406AB2D4
 * 00000001406AB2E6: add     rsp, 8
 * 00000001406AB2EA: call    loc_1406AB2DD
 * 00000001406AB2EF: add     rsp, 8
 * 00000001406AB2F3: mov     eax, 0DADAh
 * 00000001406AB2F8: test    byte ptr gs:85Ch, 8
 * 00000001406AB301: jz      short loc_1406AB30A
 * 00000001406AB303: mov     al, 20h ; ' '
 * 00000001406AB305: incsspq rax
 * 00000001406AB30A: test    word ptr gs:858h, 100h
 * 00000001406AB315: jz      short loc_1406AB323
 * 00000001406AB317: xor     eax, eax
 * 00000001406AB319: xor     edx, edx
 * 00000001406AB31B: mov     ecx, 1
 * 00000001406AB320: div     rcx
 * 00000001406AB323: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AB327: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AB32B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AB32F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AB333: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AB337: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AB33B: mov     r11, [rbp-20h]
 * 00000001406AB33F: mov     r10, [rbp-28h]
 * 00000001406AB343: mov     r9, [rbp-30h]
 * 00000001406AB347: mov     r8, [rbp-38h]
 * 00000001406AB34B: mov     rdx, [rbp-40h]
 * 00000001406AB34F: mov     rcx, [rbp-48h]
 * 00000001406AB353: mov     rax, [rbp-50h]
 * 00000001406AB357: mov     rsp, rbp
 * 00000001406AB35A: mov     rbp, [rbp+0D8h]
 * 00000001406AB361: add     rsp, 0E8h
 * 00000001406AB368: test    cs:KiKvaShadow, 1
 * 00000001406AB36F: jz      short loc_1406AB376
 * 00000001406AB371: jmp     KiKernelExit
 * 00000001406AB376: test    word ptr gs:858h, 200h
 * 00000001406AB381: jz      short loc_1406AB388
 * 00000001406AB383: verw    [rsp-1E8h+arg_200]
 * 00000001406AB388: swapgs
 * 00000001406AB38B: iretq
 * 00000001406AB38D: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AB391: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AB395: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AB399: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AB39D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AB3A1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AB3A5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AB3A9: mov     r11, [rbp-20h]
 * 00000001406AB3AD: mov     r10, [rbp-28h]
 * 00000001406AB3B1: mov     r9, [rbp-30h]
 * 00000001406AB3B5: mov     r8, [rbp-38h]
 * 00000001406AB3B9: mov     rdx, [rbp-40h]
 * 00000001406AB3BD: mov     rcx, [rbp-48h]
 * 00000001406AB3C1: mov     rax, [rbp-50h]
 * 00000001406AB3C5: mov     rsp, rbp
 * 00000001406AB3C8: mov     rbp, [rbp+0D8h]
 * 00000001406AB3CF: add     rsp, 0E8h
 * 00000001406AB3D6: iretq
 * 00000001406AB3D8: retn
 */
