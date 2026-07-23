/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1406AE1D0
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140408120 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ADCF0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x1406AE1D0 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1406AE1D0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AE1D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AE1D0: mov     rcx, gs:9158h
 * 00000001406AE1D9: mov     rax, rcx
 * 00000001406AE1DC: mov     edx, cs:KeIsrStackSize
 * 00000001406AE1E2: sub     rax, rdx
 * 00000001406AE1E5: mov     rdx, rsp
 * 00000001406AE1E8: cmp     rax, rsp
 * 00000001406AE1EB: ja      short loc_1406AE1F2
 * 00000001406AE1ED: cmp     rsp, rcx
 * 00000001406AE1F0: jb      short loc_1406AE1FE
 * 00000001406AE1F2: cmp     cs:KiBugCheckActive, 0
 * 00000001406AE1F9: jnz     short loc_1406AE1FE
 * 00000001406AE1FB: mov     rsp, rcx
 * 00000001406AE1FE: sub     rsp, 20h
 * 00000001406AE202: mov     [rsp+20h+var_10], rdx
 * 00000001406AE207: call    KiInterruptSubDispatchNoLock
 * 00000001406AE20C: mov     rsp, [rsp+20h+var_10]
 * 00000001406AE211: mov     rcx, rsi
 * 00000001406AE214: call    HalPerformEndOfInterrupt
 * 00000001406AE219: mov     rcx, gs:20h
 * 00000001406AE222: movzx   edx, byte ptr [rbp-57h]
 * 00000001406AE226: call    KiEndInterruptCycleAccumulation
 * 00000001406AE22B: test    al, al
 * 00000001406AE22D: jz      short loc_1406AE234
 * 00000001406AE22F: call    KiDpcInterruptBypass
 * 00000001406AE234: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406AE238: cmp     cs:KiIrqlFlags, 0
 * 00000001406AE23F: jz      short loc_1406AE248
 * 00000001406AE241: call    KzSetIrqlUnsafe
 * 00000001406AE246: jmp     short loc_1406AE24C
 * 00000001406AE248: mov     cr8, rcx
 * 00000001406AE24C: mov     rsi, [rbp+0D0h]
 * 00000001406AE253: test    byte ptr [rbp+0F0h], 1
 * 00000001406AE25A: jz      loc_1406AE555
 * 00000001406AE260: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AE267: jz      short loc_1406AE26C
 * 00000001406AE269: stac
 * 00000001406AE26C: mov     rcx, gs:188h
 * 00000001406AE275: test    byte ptr [rcx+0C2h], 3
 * 00000001406AE27C: jz      short loc_1406AE299
 * 00000001406AE27E: mov     ecx, 1
 * 00000001406AE283: mov     cr8, rcx
 * 00000001406AE287: sti
 * 00000001406AE288: call    KiInitiateUserApc
 * 00000001406AE28D: cli
 * 00000001406AE28E: mov     ecx, 0
 * 00000001406AE293: mov     cr8, rcx
 * 00000001406AE297: jmp     short loc_1406AE26C
 * 00000001406AE299: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AE29E: test    eax, eax
 * 00000001406AE2A0: mov     rax, [rbp-50h]
 * 00000001406AE2A4: jnz     short loc_1406AE26C
 * 00000001406AE2A6: test    byte ptr gs:860h, 2
 * 00000001406AE2AF: jz      short loc_1406AE2B8
 * 00000001406AE2B1: xor     ecx, ecx
 * 00000001406AE2B3: call    KiUpdateStibpPairing
 * 00000001406AE2B8: mov     rcx, gs:188h
 * 00000001406AE2C1: test    dword ptr [rcx], 8000000h
 * 00000001406AE2C7: jz      short loc_1406AE2CE
 * 00000001406AE2C9: call    KiRestoreSetContextState
 * 00000001406AE2CE: mov     rcx, gs:188h
 * 00000001406AE2D7: test    dword ptr [rcx], 10000h
 * 00000001406AE2DD: jz      short loc_1406AE2F3
 * 00000001406AE2DF: test    byte ptr [rcx+2], 1
 * 00000001406AE2E3: jz      short loc_1406AE2F3
 * 00000001406AE2E5: call    KiCopyCounters
 * 00000001406AE2EA: mov     rcx, gs:188h
 * 00000001406AE2F3: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AE2F7: cmp     word ptr [rbp+80h], 0
 * 00000001406AE2FF: jz      short loc_1406AE306
 * 00000001406AE301: call    KiRestoreDebugRegisterState
 * 00000001406AE306: mov     rcx, gs:188h
 * 00000001406AE30F: bt      dword ptr [rcx+74h], 16h
 * 00000001406AE314: jnb     short loc_1406AE340
 * 00000001406AE316: xor     ecx, ecx
 * 00000001406AE318: rdsspq  rcx
 * 00000001406AE31D: mov     r8, gs:9D28h
 * 00000001406AE326: add     r8, 8
 * 00000001406AE32A: cmp     rcx, r8
 * 00000001406AE32D: jnz     short loc_1406AE340
 * 00000001406AE32F: mov     rcx, gs:9D20h
 * 00000001406AE338: rstorssp qword ptr [rcx]
 * 00000001406AE33C: saveprevssp
 * 00000001406AE340: mov     byte ptr gs:85Eh, 0
 * 00000001406AE349: movzx   eax, word ptr gs:86Ch
 * 00000001406AE352: cmp     gs:866h, ax
 * 00000001406AE35B: jz      short loc_1406AE36F
 * 00000001406AE35D: mov     gs:866h, ax
 * 00000001406AE366: mov     ecx, 48h ; 'H'
 * 00000001406AE36B: xor     edx, edx
 * 00000001406AE36D: wrmsr
 * 00000001406AE36F: btr     word ptr gs:858h, 2
 * 00000001406AE37A: jnb     short loc_1406AE38A
 * 00000001406AE37C: mov     eax, 1
 * 00000001406AE381: xor     edx, edx
 * 00000001406AE383: mov     ecx, 49h ; 'I'
 * 00000001406AE388: wrmsr
 * 00000001406AE38A: btr     word ptr gs:858h, 5
 * 00000001406AE395: jnb     loc_1406AE4D2
 * 00000001406AE39B: call    loc_1406AE4AE
 * 00000001406AE3A0: add     rsp, 8
 * 00000001406AE3A4: call    loc_1406AE4B7
 * 00000001406AE3A9: add     rsp, 8
 * 00000001406AE3AD: call    loc_1406AE3A0
 * 00000001406AE3B2: add     rsp, 8
 * 00000001406AE3B6: call    loc_1406AE3A9
 * 00000001406AE3BB: add     rsp, 8
 * 00000001406AE3BF: call    loc_1406AE3B2
 * 00000001406AE3C4: add     rsp, 8
 * 00000001406AE3C8: call    loc_1406AE3BB
 * 00000001406AE3CD: add     rsp, 8
 * 00000001406AE3D1: call    loc_1406AE3C4
 * 00000001406AE3D6: add     rsp, 8
 * 00000001406AE3DA: call    loc_1406AE3CD
 * 00000001406AE3DF: add     rsp, 8
 * 00000001406AE3E3: call    loc_1406AE3D6
 * 00000001406AE3E8: add     rsp, 8
 * 00000001406AE3EC: call    loc_1406AE3DF
 * 00000001406AE3F1: add     rsp, 8
 * 00000001406AE3F5: call    loc_1406AE3E8
 * 00000001406AE3FA: add     rsp, 8
 * 00000001406AE3FE: call    loc_1406AE3F1
 * 00000001406AE403: add     rsp, 8
 * 00000001406AE407: call    loc_1406AE3FA
 * 00000001406AE40C: add     rsp, 8
 * 00000001406AE410: call    loc_1406AE403
 * 00000001406AE415: add     rsp, 8
 * 00000001406AE419: call    loc_1406AE40C
 * 00000001406AE41E: add     rsp, 8
 * 00000001406AE422: call    loc_1406AE415
 * 00000001406AE427: add     rsp, 8
 * 00000001406AE42B: call    loc_1406AE41E
 * 00000001406AE430: add     rsp, 8
 * 00000001406AE434: call    loc_1406AE427
 * 00000001406AE439: add     rsp, 8
 * 00000001406AE43D: call    loc_1406AE430
 * 00000001406AE442: add     rsp, 8
 * 00000001406AE446: call    loc_1406AE439
 * 00000001406AE44B: add     rsp, 8
 * 00000001406AE44F: call    loc_1406AE442
 * 00000001406AE454: add     rsp, 8
 * 00000001406AE458: call    loc_1406AE44B
 * 00000001406AE45D: add     rsp, 8
 * 00000001406AE461: call    loc_1406AE454
 * 00000001406AE466: add     rsp, 8
 * 00000001406AE46A: call    loc_1406AE45D
 * 00000001406AE46F: add     rsp, 8
 * 00000001406AE473: call    loc_1406AE466
 * 00000001406AE478: add     rsp, 8
 * 00000001406AE47C: call    loc_1406AE46F
 * 00000001406AE481: add     rsp, 8
 * 00000001406AE485: call    loc_1406AE478
 * 00000001406AE48A: add     rsp, 8
 * 00000001406AE48E: call    loc_1406AE481
 * 00000001406AE493: add     rsp, 8
 * 00000001406AE497: call    loc_1406AE48A
 * 00000001406AE49C: add     rsp, 8
 * 00000001406AE4A0: call    loc_1406AE493
 * 00000001406AE4A5: add     rsp, 8
 * 00000001406AE4A9: call    loc_1406AE49C
 * 00000001406AE4AE: add     rsp, 8
 * 00000001406AE4B2: call    loc_1406AE4A5
 * 00000001406AE4B7: add     rsp, 8
 * 00000001406AE4BB: mov     eax, 0DADAh
 * 00000001406AE4C0: test    byte ptr gs:85Ch, 8
 * 00000001406AE4C9: jz      short loc_1406AE4D2
 * 00000001406AE4CB: mov     al, 20h ; ' '
 * 00000001406AE4CD: incsspq rax
 * 00000001406AE4D2: test    word ptr gs:858h, 100h
 * 00000001406AE4DD: jz      short loc_1406AE4EB
 * 00000001406AE4DF: xor     eax, eax
 * 00000001406AE4E1: xor     edx, edx
 * 00000001406AE4E3: mov     ecx, 1
 * 00000001406AE4E8: div     rcx
 * 00000001406AE4EB: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AE4EF: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AE4F3: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AE4F7: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AE4FB: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AE4FF: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AE503: mov     r11, [rbp-20h]
 * 00000001406AE507: mov     r10, [rbp-28h]
 * 00000001406AE50B: mov     r9, [rbp-30h]
 * 00000001406AE50F: mov     r8, [rbp-38h]
 * 00000001406AE513: mov     rdx, [rbp-40h]
 * 00000001406AE517: mov     rcx, [rbp-48h]
 * 00000001406AE51B: mov     rax, [rbp-50h]
 * 00000001406AE51F: mov     rsp, rbp
 * 00000001406AE522: mov     rbp, [rbp+0D8h]
 * 00000001406AE529: add     rsp, 0E8h
 * 00000001406AE530: test    cs:KiKvaShadow, 1
 * 00000001406AE537: jz      short loc_1406AE53E
 * 00000001406AE539: jmp     KiKernelExit
 * 00000001406AE53E: test    word ptr gs:858h, 200h
 * 00000001406AE549: jz      short loc_1406AE550
 * 00000001406AE54B: verw    [rsp-1C8h+arg_1E0]
 * 00000001406AE550: swapgs
 * 00000001406AE553: iretq
 * 00000001406AE555: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AE559: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AE55D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AE561: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AE565: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AE569: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AE56D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AE571: mov     r11, [rbp-20h]
 * 00000001406AE575: mov     r10, [rbp-28h]
 * 00000001406AE579: mov     r9, [rbp-30h]
 * 00000001406AE57D: mov     r8, [rbp-38h]
 * 00000001406AE581: mov     rdx, [rbp-40h]
 * 00000001406AE585: mov     rcx, [rbp-48h]
 * 00000001406AE589: mov     rax, [rbp-50h]
 * 00000001406AE58D: mov     rsp, rbp
 * 00000001406AE590: mov     rbp, [rbp+0D8h]
 * 00000001406AE597: add     rsp, 0E8h
 * 00000001406AE59E: iretq
 */
