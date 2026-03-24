/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1406AD230
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x14034A8A0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140418370 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ACD50 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x1406AD230 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1406AD230
 * Reason: Hex-Rays returned no pseudocode for 0x1406AD230
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AD230: mov     rcx, gs:9158h
 * 00000001406AD239: mov     rax, rcx
 * 00000001406AD23C: mov     edx, cs:KeIsrStackSize
 * 00000001406AD242: sub     rax, rdx
 * 00000001406AD245: mov     rdx, rsp
 * 00000001406AD248: cmp     rax, rsp
 * 00000001406AD24B: ja      short loc_1406AD252
 * 00000001406AD24D: cmp     rsp, rcx
 * 00000001406AD250: jb      short loc_1406AD25E
 * 00000001406AD252: cmp     cs:KiBugCheckActive, 0
 * 00000001406AD259: jnz     short loc_1406AD25E
 * 00000001406AD25B: mov     rsp, rcx
 * 00000001406AD25E: sub     rsp, 20h
 * 00000001406AD262: mov     [rsp+20h+var_10], rdx
 * 00000001406AD267: call    KiInterruptSubDispatchNoLock
 * 00000001406AD26C: mov     rsp, [rsp+20h+var_10]
 * 00000001406AD271: mov     rcx, rsi
 * 00000001406AD274: call    HalPerformEndOfInterrupt
 * 00000001406AD279: mov     rcx, gs:20h
 * 00000001406AD282: movzx   edx, byte ptr [rbp-57h]
 * 00000001406AD286: call    KiEndInterruptCycleAccumulation
 * 00000001406AD28B: test    al, al
 * 00000001406AD28D: jz      short loc_1406AD294
 * 00000001406AD28F: call    KiDpcInterruptBypass
 * 00000001406AD294: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406AD298: cmp     cs:KiIrqlFlags, 0
 * 00000001406AD29F: jz      short loc_1406AD2A8
 * 00000001406AD2A1: call    KzSetIrqlUnsafe
 * 00000001406AD2A6: jmp     short loc_1406AD2AC
 * 00000001406AD2A8: mov     cr8, rcx
 * 00000001406AD2AC: mov     rsi, [rbp+0D0h]
 * 00000001406AD2B3: test    byte ptr [rbp+0F0h], 1
 * 00000001406AD2BA: jz      loc_1406AD5B5
 * 00000001406AD2C0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AD2C7: jz      short loc_1406AD2CC
 * 00000001406AD2C9: stac
 * 00000001406AD2CC: mov     rcx, gs:188h
 * 00000001406AD2D5: test    byte ptr [rcx+0C2h], 3
 * 00000001406AD2DC: jz      short loc_1406AD2F9
 * 00000001406AD2DE: mov     ecx, 1
 * 00000001406AD2E3: mov     cr8, rcx
 * 00000001406AD2E7: sti
 * 00000001406AD2E8: call    KiInitiateUserApc
 * 00000001406AD2ED: cli
 * 00000001406AD2EE: mov     ecx, 0
 * 00000001406AD2F3: mov     cr8, rcx
 * 00000001406AD2F7: jmp     short loc_1406AD2CC
 * 00000001406AD2F9: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AD2FE: test    eax, eax
 * 00000001406AD300: mov     rax, [rbp-50h]
 * 00000001406AD304: jnz     short loc_1406AD2CC
 * 00000001406AD306: test    byte ptr gs:860h, 2
 * 00000001406AD30F: jz      short loc_1406AD318
 * 00000001406AD311: xor     ecx, ecx
 * 00000001406AD313: call    KiUpdateStibpPairing
 * 00000001406AD318: mov     rcx, gs:188h
 * 00000001406AD321: test    dword ptr [rcx], 8000000h
 * 00000001406AD327: jz      short loc_1406AD32E
 * 00000001406AD329: call    KiRestoreSetContextState
 * 00000001406AD32E: mov     rcx, gs:188h
 * 00000001406AD337: test    dword ptr [rcx], 10000h
 * 00000001406AD33D: jz      short loc_1406AD353
 * 00000001406AD33F: test    byte ptr [rcx+2], 1
 * 00000001406AD343: jz      short loc_1406AD353
 * 00000001406AD345: call    KiCopyCounters
 * 00000001406AD34A: mov     rcx, gs:188h
 * 00000001406AD353: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AD357: cmp     word ptr [rbp+80h], 0
 * 00000001406AD35F: jz      short loc_1406AD366
 * 00000001406AD361: call    KiRestoreDebugRegisterState
 * 00000001406AD366: mov     rcx, gs:188h
 * 00000001406AD36F: bt      dword ptr [rcx+74h], 16h
 * 00000001406AD374: jnb     short loc_1406AD3A0
 * 00000001406AD376: xor     ecx, ecx
 * 00000001406AD378: rdsspq  rcx
 * 00000001406AD37D: mov     r8, gs:9D28h
 * 00000001406AD386: add     r8, 8
 * 00000001406AD38A: cmp     rcx, r8
 * 00000001406AD38D: jnz     short loc_1406AD3A0
 * 00000001406AD38F: mov     rcx, gs:9D20h
 * 00000001406AD398: rstorssp qword ptr [rcx]
 * 00000001406AD39C: saveprevssp
 * 00000001406AD3A0: mov     byte ptr gs:85Eh, 0
 * 00000001406AD3A9: movzx   eax, word ptr gs:86Ch
 * 00000001406AD3B2: cmp     gs:866h, ax
 * 00000001406AD3BB: jz      short loc_1406AD3CF
 * 00000001406AD3BD: mov     gs:866h, ax
 * 00000001406AD3C6: mov     ecx, 48h ; 'H'
 * 00000001406AD3CB: xor     edx, edx
 * 00000001406AD3CD: wrmsr
 * 00000001406AD3CF: btr     word ptr gs:858h, 2
 * 00000001406AD3DA: jnb     short loc_1406AD3EA
 * 00000001406AD3DC: mov     eax, 1
 * 00000001406AD3E1: xor     edx, edx
 * 00000001406AD3E3: mov     ecx, 49h ; 'I'
 * 00000001406AD3E8: wrmsr
 * 00000001406AD3EA: btr     word ptr gs:858h, 5
 * 00000001406AD3F5: jnb     loc_1406AD532
 * 00000001406AD3FB: call    loc_1406AD50E
 * 00000001406AD400: add     rsp, 8
 * 00000001406AD404: call    loc_1406AD517
 * 00000001406AD409: add     rsp, 8
 * 00000001406AD40D: call    loc_1406AD400
 * 00000001406AD412: add     rsp, 8
 * 00000001406AD416: call    loc_1406AD409
 * 00000001406AD41B: add     rsp, 8
 * 00000001406AD41F: call    loc_1406AD412
 * 00000001406AD424: add     rsp, 8
 * 00000001406AD428: call    loc_1406AD41B
 * 00000001406AD42D: add     rsp, 8
 * 00000001406AD431: call    loc_1406AD424
 * 00000001406AD436: add     rsp, 8
 * 00000001406AD43A: call    loc_1406AD42D
 * 00000001406AD43F: add     rsp, 8
 * 00000001406AD443: call    loc_1406AD436
 * 00000001406AD448: add     rsp, 8
 * 00000001406AD44C: call    loc_1406AD43F
 * 00000001406AD451: add     rsp, 8
 * 00000001406AD455: call    loc_1406AD448
 * 00000001406AD45A: add     rsp, 8
 * 00000001406AD45E: call    loc_1406AD451
 * 00000001406AD463: add     rsp, 8
 * 00000001406AD467: call    loc_1406AD45A
 * 00000001406AD46C: add     rsp, 8
 * 00000001406AD470: call    loc_1406AD463
 * 00000001406AD475: add     rsp, 8
 * 00000001406AD479: call    loc_1406AD46C
 * 00000001406AD47E: add     rsp, 8
 * 00000001406AD482: call    loc_1406AD475
 * 00000001406AD487: add     rsp, 8
 * 00000001406AD48B: call    loc_1406AD47E
 * 00000001406AD490: add     rsp, 8
 * 00000001406AD494: call    loc_1406AD487
 * 00000001406AD499: add     rsp, 8
 * 00000001406AD49D: call    loc_1406AD490
 * 00000001406AD4A2: add     rsp, 8
 * 00000001406AD4A6: call    loc_1406AD499
 * 00000001406AD4AB: add     rsp, 8
 * 00000001406AD4AF: call    loc_1406AD4A2
 * 00000001406AD4B4: add     rsp, 8
 * 00000001406AD4B8: call    loc_1406AD4AB
 * 00000001406AD4BD: add     rsp, 8
 * 00000001406AD4C1: call    loc_1406AD4B4
 * 00000001406AD4C6: add     rsp, 8
 * 00000001406AD4CA: call    loc_1406AD4BD
 * 00000001406AD4CF: add     rsp, 8
 * 00000001406AD4D3: call    loc_1406AD4C6
 * 00000001406AD4D8: add     rsp, 8
 * 00000001406AD4DC: call    loc_1406AD4CF
 * 00000001406AD4E1: add     rsp, 8
 * 00000001406AD4E5: call    loc_1406AD4D8
 * 00000001406AD4EA: add     rsp, 8
 * 00000001406AD4EE: call    loc_1406AD4E1
 * 00000001406AD4F3: add     rsp, 8
 * 00000001406AD4F7: call    loc_1406AD4EA
 * 00000001406AD4FC: add     rsp, 8
 * 00000001406AD500: call    loc_1406AD4F3
 * 00000001406AD505: add     rsp, 8
 * 00000001406AD509: call    loc_1406AD4FC
 * 00000001406AD50E: add     rsp, 8
 * 00000001406AD512: call    loc_1406AD505
 * 00000001406AD517: add     rsp, 8
 * 00000001406AD51B: mov     eax, 0DADAh
 * 00000001406AD520: test    byte ptr gs:85Ch, 8
 * 00000001406AD529: jz      short loc_1406AD532
 * 00000001406AD52B: mov     al, 20h ; ' '
 * 00000001406AD52D: incsspq rax
 * 00000001406AD532: test    word ptr gs:858h, 100h
 * 00000001406AD53D: jz      short loc_1406AD54B
 * 00000001406AD53F: xor     eax, eax
 * 00000001406AD541: xor     edx, edx
 * 00000001406AD543: mov     ecx, 1
 * 00000001406AD548: div     rcx
 * 00000001406AD54B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AD54F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AD553: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AD557: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AD55B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AD55F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AD563: mov     r11, [rbp-20h]
 * 00000001406AD567: mov     r10, [rbp-28h]
 * 00000001406AD56B: mov     r9, [rbp-30h]
 * 00000001406AD56F: mov     r8, [rbp-38h]
 * 00000001406AD573: mov     rdx, [rbp-40h]
 * 00000001406AD577: mov     rcx, [rbp-48h]
 * 00000001406AD57B: mov     rax, [rbp-50h]
 * 00000001406AD57F: mov     rsp, rbp
 * 00000001406AD582: mov     rbp, [rbp+0D8h]
 * 00000001406AD589: add     rsp, 0E8h
 * 00000001406AD590: test    cs:KiKvaShadow, 1
 * 00000001406AD597: jz      short loc_1406AD59E
 * 00000001406AD599: jmp     KiKernelExit
 * 00000001406AD59E: test    word ptr gs:858h, 200h
 * 00000001406AD5A9: jz      short loc_1406AD5B0
 * 00000001406AD5AB: verw    [rsp-1C8h+arg_1E0]
 * 00000001406AD5B0: swapgs
 * 00000001406AD5B3: iretq
 * 00000001406AD5B5: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AD5B9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AD5BD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AD5C1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AD5C5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AD5C9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AD5CD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AD5D1: mov     r11, [rbp-20h]
 * 00000001406AD5D5: mov     r10, [rbp-28h]
 * 00000001406AD5D9: mov     r9, [rbp-30h]
 * 00000001406AD5DD: mov     r8, [rbp-38h]
 * 00000001406AD5E1: mov     rdx, [rbp-40h]
 * 00000001406AD5E5: mov     rcx, [rbp-48h]
 * 00000001406AD5E9: mov     rax, [rbp-50h]
 * 00000001406AD5ED: mov     rsp, rbp
 * 00000001406AD5F0: mov     rbp, [rbp+0D8h]
 * 00000001406AD5F7: add     rsp, 0E8h
 * 00000001406AD5FE: iretq
 */
