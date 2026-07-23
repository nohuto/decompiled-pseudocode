/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1406AE5B0
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
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1406ADD90 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AE5B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1406AE5B0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AE5B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AE5B0: mov     rcx, gs:9158h
 * 00000001406AE5B9: mov     rax, rcx
 * 00000001406AE5BC: mov     edx, cs:KeIsrStackSize
 * 00000001406AE5C2: sub     rax, rdx
 * 00000001406AE5C5: mov     rdx, rsp
 * 00000001406AE5C8: cmp     rax, rsp
 * 00000001406AE5CB: ja      short loc_1406AE5D2
 * 00000001406AE5CD: cmp     rsp, rcx
 * 00000001406AE5D0: jb      short loc_1406AE5DE
 * 00000001406AE5D2: cmp     cs:KiBugCheckActive, 0
 * 00000001406AE5D9: jnz     short loc_1406AE5DE
 * 00000001406AE5DB: mov     rsp, rcx
 * 00000001406AE5DE: sub     rsp, 20h
 * 00000001406AE5E2: mov     [rsp+20h+var_10], rdx
 * 00000001406AE5E7: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001406AE5EC: mov     rsp, [rsp+20h+var_10]
 * 00000001406AE5F1: mov     rcx, rsi
 * 00000001406AE5F4: call    HalPerformEndOfInterrupt
 * 00000001406AE5F9: mov     rcx, gs:20h
 * 00000001406AE602: movzx   edx, byte ptr [rbp-57h]
 * 00000001406AE606: call    KiEndInterruptCycleAccumulation
 * 00000001406AE60B: test    al, al
 * 00000001406AE60D: jz      short loc_1406AE614
 * 00000001406AE60F: call    KiDpcInterruptBypass
 * 00000001406AE614: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406AE618: cmp     cs:KiIrqlFlags, 0
 * 00000001406AE61F: jz      short loc_1406AE628
 * 00000001406AE621: call    KzSetIrqlUnsafe
 * 00000001406AE626: jmp     short loc_1406AE62C
 * 00000001406AE628: mov     cr8, rcx
 * 00000001406AE62C: mov     rsi, [rbp+0D0h]
 * 00000001406AE633: test    byte ptr [rbp+0F0h], 1
 * 00000001406AE63A: jz      loc_1406AE935
 * 00000001406AE640: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AE647: jz      short loc_1406AE64C
 * 00000001406AE649: stac
 * 00000001406AE64C: mov     rcx, gs:188h
 * 00000001406AE655: test    byte ptr [rcx+0C2h], 3
 * 00000001406AE65C: jz      short loc_1406AE679
 * 00000001406AE65E: mov     ecx, 1
 * 00000001406AE663: mov     cr8, rcx
 * 00000001406AE667: sti
 * 00000001406AE668: call    KiInitiateUserApc
 * 00000001406AE66D: cli
 * 00000001406AE66E: mov     ecx, 0
 * 00000001406AE673: mov     cr8, rcx
 * 00000001406AE677: jmp     short loc_1406AE64C
 * 00000001406AE679: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AE67E: test    eax, eax
 * 00000001406AE680: mov     rax, [rbp-50h]
 * 00000001406AE684: jnz     short loc_1406AE64C
 * 00000001406AE686: test    byte ptr gs:860h, 2
 * 00000001406AE68F: jz      short loc_1406AE698
 * 00000001406AE691: xor     ecx, ecx
 * 00000001406AE693: call    KiUpdateStibpPairing
 * 00000001406AE698: mov     rcx, gs:188h
 * 00000001406AE6A1: test    dword ptr [rcx], 8000000h
 * 00000001406AE6A7: jz      short loc_1406AE6AE
 * 00000001406AE6A9: call    KiRestoreSetContextState
 * 00000001406AE6AE: mov     rcx, gs:188h
 * 00000001406AE6B7: test    dword ptr [rcx], 10000h
 * 00000001406AE6BD: jz      short loc_1406AE6D3
 * 00000001406AE6BF: test    byte ptr [rcx+2], 1
 * 00000001406AE6C3: jz      short loc_1406AE6D3
 * 00000001406AE6C5: call    KiCopyCounters
 * 00000001406AE6CA: mov     rcx, gs:188h
 * 00000001406AE6D3: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AE6D7: cmp     word ptr [rbp+80h], 0
 * 00000001406AE6DF: jz      short loc_1406AE6E6
 * 00000001406AE6E1: call    KiRestoreDebugRegisterState
 * 00000001406AE6E6: mov     rcx, gs:188h
 * 00000001406AE6EF: bt      dword ptr [rcx+74h], 16h
 * 00000001406AE6F4: jnb     short loc_1406AE720
 * 00000001406AE6F6: xor     ecx, ecx
 * 00000001406AE6F8: rdsspq  rcx
 * 00000001406AE6FD: mov     r8, gs:9D28h
 * 00000001406AE706: add     r8, 8
 * 00000001406AE70A: cmp     rcx, r8
 * 00000001406AE70D: jnz     short loc_1406AE720
 * 00000001406AE70F: mov     rcx, gs:9D20h
 * 00000001406AE718: rstorssp qword ptr [rcx]
 * 00000001406AE71C: saveprevssp
 * 00000001406AE720: mov     byte ptr gs:85Eh, 0
 * 00000001406AE729: movzx   eax, word ptr gs:86Ch
 * 00000001406AE732: cmp     gs:866h, ax
 * 00000001406AE73B: jz      short loc_1406AE74F
 * 00000001406AE73D: mov     gs:866h, ax
 * 00000001406AE746: mov     ecx, 48h ; 'H'
 * 00000001406AE74B: xor     edx, edx
 * 00000001406AE74D: wrmsr
 * 00000001406AE74F: btr     word ptr gs:858h, 2
 * 00000001406AE75A: jnb     short loc_1406AE76A
 * 00000001406AE75C: mov     eax, 1
 * 00000001406AE761: xor     edx, edx
 * 00000001406AE763: mov     ecx, 49h ; 'I'
 * 00000001406AE768: wrmsr
 * 00000001406AE76A: btr     word ptr gs:858h, 5
 * 00000001406AE775: jnb     loc_1406AE8B2
 * 00000001406AE77B: call    loc_1406AE88E
 * 00000001406AE780: add     rsp, 8
 * 00000001406AE784: call    loc_1406AE897
 * 00000001406AE789: add     rsp, 8
 * 00000001406AE78D: call    loc_1406AE780
 * 00000001406AE792: add     rsp, 8
 * 00000001406AE796: call    loc_1406AE789
 * 00000001406AE79B: add     rsp, 8
 * 00000001406AE79F: call    loc_1406AE792
 * 00000001406AE7A4: add     rsp, 8
 * 00000001406AE7A8: call    loc_1406AE79B
 * 00000001406AE7AD: add     rsp, 8
 * 00000001406AE7B1: call    loc_1406AE7A4
 * 00000001406AE7B6: add     rsp, 8
 * 00000001406AE7BA: call    loc_1406AE7AD
 * 00000001406AE7BF: add     rsp, 8
 * 00000001406AE7C3: call    loc_1406AE7B6
 * 00000001406AE7C8: add     rsp, 8
 * 00000001406AE7CC: call    loc_1406AE7BF
 * 00000001406AE7D1: add     rsp, 8
 * 00000001406AE7D5: call    loc_1406AE7C8
 * 00000001406AE7DA: add     rsp, 8
 * 00000001406AE7DE: call    loc_1406AE7D1
 * 00000001406AE7E3: add     rsp, 8
 * 00000001406AE7E7: call    loc_1406AE7DA
 * 00000001406AE7EC: add     rsp, 8
 * 00000001406AE7F0: call    loc_1406AE7E3
 * 00000001406AE7F5: add     rsp, 8
 * 00000001406AE7F9: call    loc_1406AE7EC
 * 00000001406AE7FE: add     rsp, 8
 * 00000001406AE802: call    loc_1406AE7F5
 * 00000001406AE807: add     rsp, 8
 * 00000001406AE80B: call    loc_1406AE7FE
 * 00000001406AE810: add     rsp, 8
 * 00000001406AE814: call    loc_1406AE807
 * 00000001406AE819: add     rsp, 8
 * 00000001406AE81D: call    loc_1406AE810
 * 00000001406AE822: add     rsp, 8
 * 00000001406AE826: call    loc_1406AE819
 * 00000001406AE82B: add     rsp, 8
 * 00000001406AE82F: call    loc_1406AE822
 * 00000001406AE834: add     rsp, 8
 * 00000001406AE838: call    loc_1406AE82B
 * 00000001406AE83D: add     rsp, 8
 * 00000001406AE841: call    loc_1406AE834
 * 00000001406AE846: add     rsp, 8
 * 00000001406AE84A: call    loc_1406AE83D
 * 00000001406AE84F: add     rsp, 8
 * 00000001406AE853: call    loc_1406AE846
 * 00000001406AE858: add     rsp, 8
 * 00000001406AE85C: call    loc_1406AE84F
 * 00000001406AE861: add     rsp, 8
 * 00000001406AE865: call    loc_1406AE858
 * 00000001406AE86A: add     rsp, 8
 * 00000001406AE86E: call    loc_1406AE861
 * 00000001406AE873: add     rsp, 8
 * 00000001406AE877: call    loc_1406AE86A
 * 00000001406AE87C: add     rsp, 8
 * 00000001406AE880: call    loc_1406AE873
 * 00000001406AE885: add     rsp, 8
 * 00000001406AE889: call    loc_1406AE87C
 * 00000001406AE88E: add     rsp, 8
 * 00000001406AE892: call    loc_1406AE885
 * 00000001406AE897: add     rsp, 8
 * 00000001406AE89B: mov     eax, 0DADAh
 * 00000001406AE8A0: test    byte ptr gs:85Ch, 8
 * 00000001406AE8A9: jz      short loc_1406AE8B2
 * 00000001406AE8AB: mov     al, 20h ; ' '
 * 00000001406AE8AD: incsspq rax
 * 00000001406AE8B2: test    word ptr gs:858h, 100h
 * 00000001406AE8BD: jz      short loc_1406AE8CB
 * 00000001406AE8BF: xor     eax, eax
 * 00000001406AE8C1: xor     edx, edx
 * 00000001406AE8C3: mov     ecx, 1
 * 00000001406AE8C8: div     rcx
 * 00000001406AE8CB: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AE8CF: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AE8D3: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AE8D7: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AE8DB: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AE8DF: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AE8E3: mov     r11, [rbp-20h]
 * 00000001406AE8E7: mov     r10, [rbp-28h]
 * 00000001406AE8EB: mov     r9, [rbp-30h]
 * 00000001406AE8EF: mov     r8, [rbp-38h]
 * 00000001406AE8F3: mov     rdx, [rbp-40h]
 * 00000001406AE8F7: mov     rcx, [rbp-48h]
 * 00000001406AE8FB: mov     rax, [rbp-50h]
 * 00000001406AE8FF: mov     rsp, rbp
 * 00000001406AE902: mov     rbp, [rbp+0D8h]
 * 00000001406AE909: add     rsp, 0E8h
 * 00000001406AE910: test    cs:KiKvaShadow, 1
 * 00000001406AE917: jz      short loc_1406AE91E
 * 00000001406AE919: jmp     KiKernelExit
 * 00000001406AE91E: test    word ptr gs:858h, 200h
 * 00000001406AE929: jz      short loc_1406AE930
 * 00000001406AE92B: verw    [rsp-1C8h+arg_1E0]
 * 00000001406AE930: swapgs
 * 00000001406AE933: iretq
 * 00000001406AE935: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AE939: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AE93D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AE941: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AE945: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AE949: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AE94D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AE951: mov     r11, [rbp-20h]
 * 00000001406AE955: mov     r10, [rbp-28h]
 * 00000001406AE959: mov     r9, [rbp-30h]
 * 00000001406AE95D: mov     r8, [rbp-38h]
 * 00000001406AE961: mov     rdx, [rbp-40h]
 * 00000001406AE965: mov     rcx, [rbp-48h]
 * 00000001406AE969: mov     rax, [rbp-50h]
 * 00000001406AE96D: mov     rsp, rbp
 * 00000001406AE970: mov     rbp, [rbp+0D8h]
 * 00000001406AE977: add     rsp, 0E8h
 * 00000001406AE97E: iretq
 */
