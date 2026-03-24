/*
 * XREFs of KiInterruptDispatch @ 0x1406ACE50
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
 *     KiInterruptSubDispatch @ 0x1406ACCB0 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x1406ACE50 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1406ACE50
 * Reason: Hex-Rays returned no pseudocode for 0x1406ACE50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406ACE50: mov     rcx, gs:9158h
 * 00000001406ACE59: mov     rax, rcx
 * 00000001406ACE5C: mov     edx, cs:KeIsrStackSize
 * 00000001406ACE62: sub     rax, rdx
 * 00000001406ACE65: mov     rdx, rsp
 * 00000001406ACE68: cmp     rax, rsp
 * 00000001406ACE6B: ja      short loc_1406ACE72
 * 00000001406ACE6D: cmp     rsp, rcx
 * 00000001406ACE70: jb      short loc_1406ACE7E
 * 00000001406ACE72: cmp     cs:KiBugCheckActive, 0
 * 00000001406ACE79: jnz     short loc_1406ACE7E
 * 00000001406ACE7B: mov     rsp, rcx
 * 00000001406ACE7E: sub     rsp, 20h
 * 00000001406ACE82: mov     [rsp+20h+var_10], rdx
 * 00000001406ACE87: call    KiInterruptSubDispatch
 * 00000001406ACE8C: mov     rsp, [rsp+20h+var_10]
 * 00000001406ACE91: mov     rcx, rsi
 * 00000001406ACE94: call    HalPerformEndOfInterrupt
 * 00000001406ACE99: mov     rcx, gs:20h
 * 00000001406ACEA2: movzx   edx, byte ptr [rbp-57h]
 * 00000001406ACEA6: call    KiEndInterruptCycleAccumulation
 * 00000001406ACEAB: test    al, al
 * 00000001406ACEAD: jz      short loc_1406ACEB4
 * 00000001406ACEAF: call    KiDpcInterruptBypass
 * 00000001406ACEB4: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406ACEB8: cmp     cs:KiIrqlFlags, 0
 * 00000001406ACEBF: jz      short loc_1406ACEC8
 * 00000001406ACEC1: call    KzSetIrqlUnsafe
 * 00000001406ACEC6: jmp     short loc_1406ACECC
 * 00000001406ACEC8: mov     cr8, rcx
 * 00000001406ACECC: mov     rsi, [rbp+0D0h]
 * 00000001406ACED3: test    byte ptr [rbp+0F0h], 1
 * 00000001406ACEDA: jz      loc_1406AD1D5
 * 00000001406ACEE0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406ACEE7: jz      short loc_1406ACEEC
 * 00000001406ACEE9: stac
 * 00000001406ACEEC: mov     rcx, gs:188h
 * 00000001406ACEF5: test    byte ptr [rcx+0C2h], 3
 * 00000001406ACEFC: jz      short loc_1406ACF19
 * 00000001406ACEFE: mov     ecx, 1
 * 00000001406ACF03: mov     cr8, rcx
 * 00000001406ACF07: sti
 * 00000001406ACF08: call    KiInitiateUserApc
 * 00000001406ACF0D: cli
 * 00000001406ACF0E: mov     ecx, 0
 * 00000001406ACF13: mov     cr8, rcx
 * 00000001406ACF17: jmp     short loc_1406ACEEC
 * 00000001406ACF19: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406ACF1E: test    eax, eax
 * 00000001406ACF20: mov     rax, [rbp-50h]
 * 00000001406ACF24: jnz     short loc_1406ACEEC
 * 00000001406ACF26: test    byte ptr gs:860h, 2
 * 00000001406ACF2F: jz      short loc_1406ACF38
 * 00000001406ACF31: xor     ecx, ecx
 * 00000001406ACF33: call    KiUpdateStibpPairing
 * 00000001406ACF38: mov     rcx, gs:188h
 * 00000001406ACF41: test    dword ptr [rcx], 8000000h
 * 00000001406ACF47: jz      short loc_1406ACF4E
 * 00000001406ACF49: call    KiRestoreSetContextState
 * 00000001406ACF4E: mov     rcx, gs:188h
 * 00000001406ACF57: test    dword ptr [rcx], 10000h
 * 00000001406ACF5D: jz      short loc_1406ACF73
 * 00000001406ACF5F: test    byte ptr [rcx+2], 1
 * 00000001406ACF63: jz      short loc_1406ACF73
 * 00000001406ACF65: call    KiCopyCounters
 * 00000001406ACF6A: mov     rcx, gs:188h
 * 00000001406ACF73: ldmxcsr dword ptr [rbp-54h]
 * 00000001406ACF77: cmp     word ptr [rbp+80h], 0
 * 00000001406ACF7F: jz      short loc_1406ACF86
 * 00000001406ACF81: call    KiRestoreDebugRegisterState
 * 00000001406ACF86: mov     rcx, gs:188h
 * 00000001406ACF8F: bt      dword ptr [rcx+74h], 16h
 * 00000001406ACF94: jnb     short loc_1406ACFC0
 * 00000001406ACF96: xor     ecx, ecx
 * 00000001406ACF98: rdsspq  rcx
 * 00000001406ACF9D: mov     r8, gs:9D28h
 * 00000001406ACFA6: add     r8, 8
 * 00000001406ACFAA: cmp     rcx, r8
 * 00000001406ACFAD: jnz     short loc_1406ACFC0
 * 00000001406ACFAF: mov     rcx, gs:9D20h
 * 00000001406ACFB8: rstorssp qword ptr [rcx]
 * 00000001406ACFBC: saveprevssp
 * 00000001406ACFC0: mov     byte ptr gs:85Eh, 0
 * 00000001406ACFC9: movzx   eax, word ptr gs:86Ch
 * 00000001406ACFD2: cmp     gs:866h, ax
 * 00000001406ACFDB: jz      short loc_1406ACFEF
 * 00000001406ACFDD: mov     gs:866h, ax
 * 00000001406ACFE6: mov     ecx, 48h ; 'H'
 * 00000001406ACFEB: xor     edx, edx
 * 00000001406ACFED: wrmsr
 * 00000001406ACFEF: btr     word ptr gs:858h, 2
 * 00000001406ACFFA: jnb     short loc_1406AD00A
 * 00000001406ACFFC: mov     eax, 1
 * 00000001406AD001: xor     edx, edx
 * 00000001406AD003: mov     ecx, 49h ; 'I'
 * 00000001406AD008: wrmsr
 * 00000001406AD00A: btr     word ptr gs:858h, 5
 * 00000001406AD015: jnb     loc_1406AD152
 * 00000001406AD01B: call    loc_1406AD12E
 * 00000001406AD020: add     rsp, 8
 * 00000001406AD024: call    loc_1406AD137
 * 00000001406AD029: add     rsp, 8
 * 00000001406AD02D: call    loc_1406AD020
 * 00000001406AD032: add     rsp, 8
 * 00000001406AD036: call    loc_1406AD029
 * 00000001406AD03B: add     rsp, 8
 * 00000001406AD03F: call    loc_1406AD032
 * 00000001406AD044: add     rsp, 8
 * 00000001406AD048: call    loc_1406AD03B
 * 00000001406AD04D: add     rsp, 8
 * 00000001406AD051: call    loc_1406AD044
 * 00000001406AD056: add     rsp, 8
 * 00000001406AD05A: call    loc_1406AD04D
 * 00000001406AD05F: add     rsp, 8
 * 00000001406AD063: call    loc_1406AD056
 * 00000001406AD068: add     rsp, 8
 * 00000001406AD06C: call    loc_1406AD05F
 * 00000001406AD071: add     rsp, 8
 * 00000001406AD075: call    loc_1406AD068
 * 00000001406AD07A: add     rsp, 8
 * 00000001406AD07E: call    loc_1406AD071
 * 00000001406AD083: add     rsp, 8
 * 00000001406AD087: call    loc_1406AD07A
 * 00000001406AD08C: add     rsp, 8
 * 00000001406AD090: call    loc_1406AD083
 * 00000001406AD095: add     rsp, 8
 * 00000001406AD099: call    loc_1406AD08C
 * 00000001406AD09E: add     rsp, 8
 * 00000001406AD0A2: call    loc_1406AD095
 * 00000001406AD0A7: add     rsp, 8
 * 00000001406AD0AB: call    loc_1406AD09E
 * 00000001406AD0B0: add     rsp, 8
 * 00000001406AD0B4: call    loc_1406AD0A7
 * 00000001406AD0B9: add     rsp, 8
 * 00000001406AD0BD: call    loc_1406AD0B0
 * 00000001406AD0C2: add     rsp, 8
 * 00000001406AD0C6: call    loc_1406AD0B9
 * 00000001406AD0CB: add     rsp, 8
 * 00000001406AD0CF: call    loc_1406AD0C2
 * 00000001406AD0D4: add     rsp, 8
 * 00000001406AD0D8: call    loc_1406AD0CB
 * 00000001406AD0DD: add     rsp, 8
 * 00000001406AD0E1: call    loc_1406AD0D4
 * 00000001406AD0E6: add     rsp, 8
 * 00000001406AD0EA: call    loc_1406AD0DD
 * 00000001406AD0EF: add     rsp, 8
 * 00000001406AD0F3: call    loc_1406AD0E6
 * 00000001406AD0F8: add     rsp, 8
 * 00000001406AD0FC: call    loc_1406AD0EF
 * 00000001406AD101: add     rsp, 8
 * 00000001406AD105: call    loc_1406AD0F8
 * 00000001406AD10A: add     rsp, 8
 * 00000001406AD10E: call    loc_1406AD101
 * 00000001406AD113: add     rsp, 8
 * 00000001406AD117: call    loc_1406AD10A
 * 00000001406AD11C: add     rsp, 8
 * 00000001406AD120: call    loc_1406AD113
 * 00000001406AD125: add     rsp, 8
 * 00000001406AD129: call    loc_1406AD11C
 * 00000001406AD12E: add     rsp, 8
 * 00000001406AD132: call    loc_1406AD125
 * 00000001406AD137: add     rsp, 8
 * 00000001406AD13B: mov     eax, 0DADAh
 * 00000001406AD140: test    byte ptr gs:85Ch, 8
 * 00000001406AD149: jz      short loc_1406AD152
 * 00000001406AD14B: mov     al, 20h ; ' '
 * 00000001406AD14D: incsspq rax
 * 00000001406AD152: test    word ptr gs:858h, 100h
 * 00000001406AD15D: jz      short loc_1406AD16B
 * 00000001406AD15F: xor     eax, eax
 * 00000001406AD161: xor     edx, edx
 * 00000001406AD163: mov     ecx, 1
 * 00000001406AD168: div     rcx
 * 00000001406AD16B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AD16F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AD173: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AD177: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AD17B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AD17F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AD183: mov     r11, [rbp-20h]
 * 00000001406AD187: mov     r10, [rbp-28h]
 * 00000001406AD18B: mov     r9, [rbp-30h]
 * 00000001406AD18F: mov     r8, [rbp-38h]
 * 00000001406AD193: mov     rdx, [rbp-40h]
 * 00000001406AD197: mov     rcx, [rbp-48h]
 * 00000001406AD19B: mov     rax, [rbp-50h]
 * 00000001406AD19F: mov     rsp, rbp
 * 00000001406AD1A2: mov     rbp, [rbp+0D8h]
 * 00000001406AD1A9: add     rsp, 0E8h
 * 00000001406AD1B0: test    cs:KiKvaShadow, 1
 * 00000001406AD1B7: jz      short loc_1406AD1BE
 * 00000001406AD1B9: jmp     KiKernelExit
 * 00000001406AD1BE: test    word ptr gs:858h, 200h
 * 00000001406AD1C9: jz      short loc_1406AD1D0
 * 00000001406AD1CB: verw    [rsp-1C8h+arg_1E0]
 * 00000001406AD1D0: swapgs
 * 00000001406AD1D3: iretq
 * 00000001406AD1D5: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AD1D9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AD1DD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AD1E1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AD1E5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AD1E9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AD1ED: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AD1F1: mov     r11, [rbp-20h]
 * 00000001406AD1F5: mov     r10, [rbp-28h]
 * 00000001406AD1F9: mov     r9, [rbp-30h]
 * 00000001406AD1FD: mov     r8, [rbp-38h]
 * 00000001406AD201: mov     rdx, [rbp-40h]
 * 00000001406AD205: mov     rcx, [rbp-48h]
 * 00000001406AD209: mov     rax, [rbp-50h]
 * 00000001406AD20D: mov     rsp, rbp
 * 00000001406AD210: mov     rbp, [rbp+0D8h]
 * 00000001406AD217: add     rsp, 0E8h
 * 00000001406AD21E: iretq
 */
