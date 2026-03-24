/*
 * XREFs of KiHvInterruptDispatch @ 0x1406A57A0
 * Callers:
 *     KiHvInterrupt @ 0x1406A4670 (KiHvInterrupt.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     HalPerformEndOfInterrupt @ 0x14041A4A0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x1406A57A0 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1406A5F60 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x1406A57A0
 * Reason: Hex-Rays returned no pseudocode for 0x1406A57A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A57A0: mov     rcx, gs:9158h
 * 00000001406A57A9: mov     rax, rcx
 * 00000001406A57AC: mov     edx, cs:KeIsrStackSize
 * 00000001406A57B2: sub     rax, rdx
 * 00000001406A57B5: mov     rdx, rsp
 * 00000001406A57B8: cmp     rax, rsp
 * 00000001406A57BB: ja      short loc_1406A57C2
 * 00000001406A57BD: cmp     rsp, rcx
 * 00000001406A57C0: jb      short loc_1406A57CE
 * 00000001406A57C2: cmp     cs:KiBugCheckActive, 0
 * 00000001406A57C9: jnz     short loc_1406A57CE
 * 00000001406A57CB: mov     rsp, rcx
 * 00000001406A57CE: sub     rsp, 20h
 * 00000001406A57D2: mov     [rsp+20h+var_10], rdx
 * 00000001406A57D7: call    KiHvInterruptSubDispatch
 * 00000001406A57DC: mov     rsp, [rsp+20h+var_10]
 * 00000001406A57E1: test    cs:HvlEnlightenments, 1000h
 * 00000001406A57EB: jz      short loc_1406A57F5
 * 00000001406A57ED: mov     rcx, rsi
 * 00000001406A57F0: call    HalPerformEndOfInterrupt
 * 00000001406A57F5: cli
 * 00000001406A57F6: mov     rcx, gs:20h
 * 00000001406A57FF: movzx   edx, byte ptr [rbp-57h]
 * 00000001406A5803: call    KiEndInterruptCycleAccumulation
 * 00000001406A5808: test    al, al
 * 00000001406A580A: jz      short loc_1406A5811
 * 00000001406A580C: call    KiDpcInterruptBypass
 * 00000001406A5811: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406A5815: cmp     cs:KiIrqlFlags, 0
 * 00000001406A581C: jz      short loc_1406A5825
 * 00000001406A581E: call    KzSetIrqlUnsafe
 * 00000001406A5823: jmp     short loc_1406A5829
 * 00000001406A5825: mov     cr8, rcx
 * 00000001406A5829: mov     rsi, [rbp+0D0h]
 * 00000001406A5830: cli
 * 00000001406A5831: test    byte ptr [rbp+0F0h], 1
 * 00000001406A5838: jz      loc_1406A5B33
 * 00000001406A583E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A5845: jz      short loc_1406A584A
 * 00000001406A5847: stac
 * 00000001406A584A: mov     rcx, gs:188h
 * 00000001406A5853: test    byte ptr [rcx+0C2h], 3
 * 00000001406A585A: jz      short loc_1406A5877
 * 00000001406A585C: mov     ecx, 1
 * 00000001406A5861: mov     cr8, rcx
 * 00000001406A5865: sti
 * 00000001406A5866: call    KiInitiateUserApc
 * 00000001406A586B: cli
 * 00000001406A586C: mov     ecx, 0
 * 00000001406A5871: mov     cr8, rcx
 * 00000001406A5875: jmp     short loc_1406A584A
 * 00000001406A5877: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A587C: test    eax, eax
 * 00000001406A587E: mov     rax, [rbp-50h]
 * 00000001406A5882: jnz     short loc_1406A584A
 * 00000001406A5884: test    byte ptr gs:860h, 2
 * 00000001406A588D: jz      short loc_1406A5896
 * 00000001406A588F: xor     ecx, ecx
 * 00000001406A5891: call    KiUpdateStibpPairing
 * 00000001406A5896: mov     rcx, gs:188h
 * 00000001406A589F: test    dword ptr [rcx], 8000000h
 * 00000001406A58A5: jz      short loc_1406A58AC
 * 00000001406A58A7: call    KiRestoreSetContextState
 * 00000001406A58AC: mov     rcx, gs:188h
 * 00000001406A58B5: test    dword ptr [rcx], 10000h
 * 00000001406A58BB: jz      short loc_1406A58D1
 * 00000001406A58BD: test    byte ptr [rcx+2], 1
 * 00000001406A58C1: jz      short loc_1406A58D1
 * 00000001406A58C3: call    KiCopyCounters
 * 00000001406A58C8: mov     rcx, gs:188h
 * 00000001406A58D1: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A58D5: cmp     word ptr [rbp+80h], 0
 * 00000001406A58DD: jz      short loc_1406A58E4
 * 00000001406A58DF: call    KiRestoreDebugRegisterState
 * 00000001406A58E4: mov     rcx, gs:188h
 * 00000001406A58ED: bt      dword ptr [rcx+74h], 16h
 * 00000001406A58F2: jnb     short loc_1406A591E
 * 00000001406A58F4: xor     ecx, ecx
 * 00000001406A58F6: rdsspq  rcx
 * 00000001406A58FB: mov     r8, gs:9D28h
 * 00000001406A5904: add     r8, 8
 * 00000001406A5908: cmp     rcx, r8
 * 00000001406A590B: jnz     short loc_1406A591E
 * 00000001406A590D: mov     rcx, gs:9D20h
 * 00000001406A5916: rstorssp qword ptr [rcx]
 * 00000001406A591A: saveprevssp
 * 00000001406A591E: mov     byte ptr gs:85Eh, 0
 * 00000001406A5927: movzx   eax, word ptr gs:86Ch
 * 00000001406A5930: cmp     gs:866h, ax
 * 00000001406A5939: jz      short loc_1406A594D
 * 00000001406A593B: mov     gs:866h, ax
 * 00000001406A5944: mov     ecx, 48h ; 'H'
 * 00000001406A5949: xor     edx, edx
 * 00000001406A594B: wrmsr
 * 00000001406A594D: btr     word ptr gs:858h, 2
 * 00000001406A5958: jnb     short loc_1406A5968
 * 00000001406A595A: mov     eax, 1
 * 00000001406A595F: xor     edx, edx
 * 00000001406A5961: mov     ecx, 49h ; 'I'
 * 00000001406A5966: wrmsr
 * 00000001406A5968: btr     word ptr gs:858h, 5
 * 00000001406A5973: jnb     loc_1406A5AB0
 * 00000001406A5979: call    loc_1406A5A8C
 * 00000001406A597E: add     rsp, 8
 * 00000001406A5982: call    loc_1406A5A95
 * 00000001406A5987: add     rsp, 8
 * 00000001406A598B: call    loc_1406A597E
 * 00000001406A5990: add     rsp, 8
 * 00000001406A5994: call    loc_1406A5987
 * 00000001406A5999: add     rsp, 8
 * 00000001406A599D: call    loc_1406A5990
 * 00000001406A59A2: add     rsp, 8
 * 00000001406A59A6: call    loc_1406A5999
 * 00000001406A59AB: add     rsp, 8
 * 00000001406A59AF: call    loc_1406A59A2
 * 00000001406A59B4: add     rsp, 8
 * 00000001406A59B8: call    loc_1406A59AB
 * 00000001406A59BD: add     rsp, 8
 * 00000001406A59C1: call    loc_1406A59B4
 * 00000001406A59C6: add     rsp, 8
 * 00000001406A59CA: call    loc_1406A59BD
 * 00000001406A59CF: add     rsp, 8
 * 00000001406A59D3: call    loc_1406A59C6
 * 00000001406A59D8: add     rsp, 8
 * 00000001406A59DC: call    loc_1406A59CF
 * 00000001406A59E1: add     rsp, 8
 * 00000001406A59E5: call    loc_1406A59D8
 * 00000001406A59EA: add     rsp, 8
 * 00000001406A59EE: call    loc_1406A59E1
 * 00000001406A59F3: add     rsp, 8
 * 00000001406A59F7: call    loc_1406A59EA
 * 00000001406A59FC: add     rsp, 8
 * 00000001406A5A00: call    loc_1406A59F3
 * 00000001406A5A05: add     rsp, 8
 * 00000001406A5A09: call    loc_1406A59FC
 * 00000001406A5A0E: add     rsp, 8
 * 00000001406A5A12: call    loc_1406A5A05
 * 00000001406A5A17: add     rsp, 8
 * 00000001406A5A1B: call    loc_1406A5A0E
 * 00000001406A5A20: add     rsp, 8
 * 00000001406A5A24: call    loc_1406A5A17
 * 00000001406A5A29: add     rsp, 8
 * 00000001406A5A2D: call    loc_1406A5A20
 * 00000001406A5A32: add     rsp, 8
 * 00000001406A5A36: call    loc_1406A5A29
 * 00000001406A5A3B: add     rsp, 8
 * 00000001406A5A3F: call    loc_1406A5A32
 * 00000001406A5A44: add     rsp, 8
 * 00000001406A5A48: call    loc_1406A5A3B
 * 00000001406A5A4D: add     rsp, 8
 * 00000001406A5A51: call    loc_1406A5A44
 * 00000001406A5A56: add     rsp, 8
 * 00000001406A5A5A: call    loc_1406A5A4D
 * 00000001406A5A5F: add     rsp, 8
 * 00000001406A5A63: call    loc_1406A5A56
 * 00000001406A5A68: add     rsp, 8
 * 00000001406A5A6C: call    loc_1406A5A5F
 * 00000001406A5A71: add     rsp, 8
 * 00000001406A5A75: call    loc_1406A5A68
 * 00000001406A5A7A: add     rsp, 8
 * 00000001406A5A7E: call    loc_1406A5A71
 * 00000001406A5A83: add     rsp, 8
 * 00000001406A5A87: call    loc_1406A5A7A
 * 00000001406A5A8C: add     rsp, 8
 * 00000001406A5A90: call    loc_1406A5A83
 * 00000001406A5A95: add     rsp, 8
 * 00000001406A5A99: mov     eax, 0DADAh
 * 00000001406A5A9E: test    byte ptr gs:85Ch, 8
 * 00000001406A5AA7: jz      short loc_1406A5AB0
 * 00000001406A5AA9: mov     al, 20h ; ' '
 * 00000001406A5AAB: incsspq rax
 * 00000001406A5AB0: test    word ptr gs:858h, 100h
 * 00000001406A5ABB: jz      short loc_1406A5AC9
 * 00000001406A5ABD: xor     eax, eax
 * 00000001406A5ABF: xor     edx, edx
 * 00000001406A5AC1: mov     ecx, 1
 * 00000001406A5AC6: div     rcx
 * 00000001406A5AC9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A5ACD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A5AD1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A5AD5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A5AD9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A5ADD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A5AE1: mov     r11, [rbp-20h]
 * 00000001406A5AE5: mov     r10, [rbp-28h]
 * 00000001406A5AE9: mov     r9, [rbp-30h]
 * 00000001406A5AED: mov     r8, [rbp-38h]
 * 00000001406A5AF1: mov     rdx, [rbp-40h]
 * 00000001406A5AF5: mov     rcx, [rbp-48h]
 * 00000001406A5AF9: mov     rax, [rbp-50h]
 * 00000001406A5AFD: mov     rsp, rbp
 * 00000001406A5B00: mov     rbp, [rbp+0D8h]
 * 00000001406A5B07: add     rsp, 0E8h
 * 00000001406A5B0E: test    cs:KiKvaShadow, 1
 * 00000001406A5B15: jz      short loc_1406A5B1C
 * 00000001406A5B17: jmp     KiKernelExit
 * 00000001406A5B1C: test    word ptr gs:858h, 200h
 * 00000001406A5B27: jz      short loc_1406A5B2E
 * 00000001406A5B29: verw    [rsp-1C8h+arg_1E0]
 * 00000001406A5B2E: swapgs
 * 00000001406A5B31: iretq
 * 00000001406A5B33: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A5B37: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A5B3B: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A5B3F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A5B43: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A5B47: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A5B4B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A5B4F: mov     r11, [rbp-20h]
 * 00000001406A5B53: mov     r10, [rbp-28h]
 * 00000001406A5B57: mov     r9, [rbp-30h]
 * 00000001406A5B5B: mov     r8, [rbp-38h]
 * 00000001406A5B5F: mov     rdx, [rbp-40h]
 * 00000001406A5B63: mov     rcx, [rbp-48h]
 * 00000001406A5B67: mov     rax, [rbp-50h]
 * 00000001406A5B6B: mov     rsp, rbp
 * 00000001406A5B6E: mov     rbp, [rbp+0D8h]
 * 00000001406A5B75: add     rsp, 0E8h
 * 00000001406A5B7C: iretq
 */
