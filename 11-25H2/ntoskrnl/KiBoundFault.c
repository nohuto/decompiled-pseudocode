/*
 * XREFs of KiBoundFault @ 0x1406AC140
 * Callers:
 *     KiBoundFaultShadow @ 0x140BAA3C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiHandleBound @ 0x1405AD5D0 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x1406B3980 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406B3F40 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x1406AC140
 * Reason: Hex-Rays returned no pseudocode for 0x1406AC140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AC140: sub     rsp, 8
 * 00000001406AC144: push    rbp
 * 00000001406AC145: sub     rsp, 158h
 * 00000001406AC14C: lea     rbp, [rsp+80h]
 * 00000001406AC154: mov     [rbp+0E8h+var_13D], 1
 * 00000001406AC158: mov     [rbp+0E8h+var_138], rax
 * 00000001406AC15C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406AC160: mov     [rbp+0E8h+var_128], rdx
 * 00000001406AC164: mov     [rbp+0E8h+var_120], r8
 * 00000001406AC168: mov     [rbp+0E8h+var_118], r9
 * 00000001406AC16C: mov     [rbp+0E8h+var_110], r10
 * 00000001406AC170: mov     [rbp+0E8h+var_108], r11
 * 00000001406AC174: test    [rbp+0E8h+arg_0], 1
 * 00000001406AC17B: jnz     short loc_1406AC1B5
 * 00000001406AC17D: xor     edx, edx
 * 00000001406AC17F: rdsspq  rdx
 * 00000001406AC184: mov     [rbp+0E8h+var_90], rdx
 * 00000001406AC188: lfence
 * 00000001406AC18B: test    byte ptr gs:858h, 1
 * 00000001406AC194: jnz     short loc_1406AC19E
 * 00000001406AC196: lfence
 * 00000001406AC199: jmp     loc_1406AC426
 * 00000001406AC19E: movzx   eax, word ptr gs:866h
 * 00000001406AC1A7: mov     ecx, 48h ; 'H'
 * 00000001406AC1AC: xor     edx, edx
 * 00000001406AC1AE: wrmsr
 * 00000001406AC1B0: jmp     loc_1406AC426
 * 00000001406AC1B5: test    cs:KiKvaShadow, 1
 * 00000001406AC1BC: jnz     short loc_1406AC1C1
 * 00000001406AC1BE: swapgs
 * 00000001406AC1C1: lfence
 * 00000001406AC1C4: mov     rcx, gs:9D28h
 * 00000001406AC1CD: test    rcx, rcx
 * 00000001406AC1D0: jz      short loc_1406AC1F1
 * 00000001406AC1D2: rdsspq  rdx
 * 00000001406AC1D7: mov     r10, gs:9D20h
 * 00000001406AC1E0: add     r10, 8
 * 00000001406AC1E4: cmp     rdx, r10
 * 00000001406AC1E7: jnz     short loc_1406AC1F1
 * 00000001406AC1E9: rstorssp qword ptr [rcx]
 * 00000001406AC1ED: saveprevssp
 * 00000001406AC1F1: mov     r10, gs:188h
 * 00000001406AC1FA: mov     rcx, gs:188h
 * 00000001406AC203: mov     rcx, [rcx+220h]
 * 00000001406AC20A: mov     rcx, [rcx+760h]
 * 00000001406AC211: mov     gs:850h, rcx
 * 00000001406AC21A: mov     cx, gs:862h
 * 00000001406AC223: mov     gs:864h, cx
 * 00000001406AC22C: mov     cl, gs:858h
 * 00000001406AC234: mov     gs:85Ah, cl
 * 00000001406AC23C: movzx   eax, word ptr gs:868h
 * 00000001406AC245: cmp     gs:866h, ax
 * 00000001406AC24E: jz      short loc_1406AC262
 * 00000001406AC250: mov     gs:866h, ax
 * 00000001406AC259: mov     ecx, 48h ; 'H'
 * 00000001406AC25E: xor     edx, edx
 * 00000001406AC260: wrmsr
 * 00000001406AC262: movzx   edx, byte ptr gs:858h
 * 00000001406AC26B: test    edx, 8
 * 00000001406AC271: jz      short loc_1406AC28A
 * 00000001406AC273: mov     eax, 1
 * 00000001406AC278: xor     edx, edx
 * 00000001406AC27A: mov     ecx, 49h ; 'I'
 * 00000001406AC27F: wrmsr
 * 00000001406AC281: movzx   edx, byte ptr gs:858h
 * 00000001406AC28A: test    edx, 2
 * 00000001406AC290: jz      loc_1406AC3CD
 * 00000001406AC296: call    loc_1406AC3A9
 * 00000001406AC29B: add     rsp, 8
 * 00000001406AC29F: call    loc_1406AC3B2
 * 00000001406AC2A4: add     rsp, 8
 * 00000001406AC2A8: call    loc_1406AC29B
 * 00000001406AC2AD: add     rsp, 8
 * 00000001406AC2B1: call    loc_1406AC2A4
 * 00000001406AC2B6: add     rsp, 8
 * 00000001406AC2BA: call    loc_1406AC2AD
 * 00000001406AC2BF: add     rsp, 8
 * 00000001406AC2C3: call    loc_1406AC2B6
 * 00000001406AC2C8: add     rsp, 8
 * 00000001406AC2CC: call    loc_1406AC2BF
 * 00000001406AC2D1: add     rsp, 8
 * 00000001406AC2D5: call    loc_1406AC2C8
 * 00000001406AC2DA: add     rsp, 8
 * 00000001406AC2DE: call    loc_1406AC2D1
 * 00000001406AC2E3: add     rsp, 8
 * 00000001406AC2E7: call    loc_1406AC2DA
 * 00000001406AC2EC: add     rsp, 8
 * 00000001406AC2F0: call    loc_1406AC2E3
 * 00000001406AC2F5: add     rsp, 8
 * 00000001406AC2F9: call    loc_1406AC2EC
 * 00000001406AC2FE: add     rsp, 8
 * 00000001406AC302: call    loc_1406AC2F5
 * 00000001406AC307: add     rsp, 8
 * 00000001406AC30B: call    loc_1406AC2FE
 * 00000001406AC310: add     rsp, 8
 * 00000001406AC314: call    loc_1406AC307
 * 00000001406AC319: add     rsp, 8
 * 00000001406AC31D: call    loc_1406AC310
 * 00000001406AC322: add     rsp, 8
 * 00000001406AC326: call    loc_1406AC319
 * 00000001406AC32B: add     rsp, 8
 * 00000001406AC32F: call    loc_1406AC322
 * 00000001406AC334: add     rsp, 8
 * 00000001406AC338: call    loc_1406AC32B
 * 00000001406AC33D: add     rsp, 8
 * 00000001406AC341: call    loc_1406AC334
 * 00000001406AC346: add     rsp, 8
 * 00000001406AC34A: call    loc_1406AC33D
 * 00000001406AC34F: add     rsp, 8
 * 00000001406AC353: call    loc_1406AC346
 * 00000001406AC358: add     rsp, 8
 * 00000001406AC35C: call    loc_1406AC34F
 * 00000001406AC361: add     rsp, 8
 * 00000001406AC365: call    loc_1406AC358
 * 00000001406AC36A: add     rsp, 8
 * 00000001406AC36E: call    loc_1406AC361
 * 00000001406AC373: add     rsp, 8
 * 00000001406AC377: call    loc_1406AC36A
 * 00000001406AC37C: add     rsp, 8
 * 00000001406AC380: call    loc_1406AC373
 * 00000001406AC385: add     rsp, 8
 * 00000001406AC389: call    loc_1406AC37C
 * 00000001406AC38E: add     rsp, 8
 * 00000001406AC392: call    loc_1406AC385
 * 00000001406AC397: add     rsp, 8
 * 00000001406AC39B: call    loc_1406AC38E
 * 00000001406AC3A0: add     rsp, 8
 * 00000001406AC3A4: call    loc_1406AC397
 * 00000001406AC3A9: add     rsp, 8
 * 00000001406AC3AD: call    loc_1406AC3A0
 * 00000001406AC3B2: add     rsp, 8
 * 00000001406AC3B6: mov     eax, 0DADAh
 * 00000001406AC3BB: test    byte ptr gs:85Ch, 8
 * 00000001406AC3C4: jz      short loc_1406AC3CD
 * 00000001406AC3C6: mov     al, 20h ; ' '
 * 00000001406AC3C8: incsspq rax
 * 00000001406AC3CD: test    edx, 80h
 * 00000001406AC3D3: jz      short loc_1406AC3DD
 * 00000001406AC3D5: lfence
 * 00000001406AC3D8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AC3DD: lfence
 * 00000001406AC3E0: mov     byte ptr gs:85Eh, 0
 * 00000001406AC3E9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AC3F0: jz      short loc_1406AC411
 * 00000001406AC3F2: mov     ecx, 6A7h
 * 00000001406AC3F7: rdmsr
 * 00000001406AC3F9: cmp     edx, 0
 * 00000001406AC3FC: jz      short loc_1406AC411
 * 00000001406AC3FE: mov     ecx, edx
 * 00000001406AC400: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AC406: cmp     edx, ecx
 * 00000001406AC408: jz      short loc_1406AC411
 * 00000001406AC40A: mov     ecx, 6A7h
 * 00000001406AC40F: wrmsr
 * 00000001406AC411: test    byte ptr [r10+3], 3
 * 00000001406AC416: mov     [rbp+0E8h+var_68], 0
 * 00000001406AC41F: jz      short loc_1406AC426
 * 00000001406AC421: call    KiSaveDebugRegisterState
 * 00000001406AC426: cld
 * 00000001406AC427: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406AC42B: ldmxcsr dword ptr gs:180h
 * 00000001406AC434: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406AC438: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406AC43C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406AC440: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406AC444: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406AC448: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406AC44C: test    [rbp+0E8h+arg_0], 1
 * 00000001406AC453: jz      short loc_1406AC45A
 * 00000001406AC455: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AC45A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AC461: jz      short loc_1406AC46F
 * 00000001406AC463: test    [rbp+0E8h+arg_0], 1
 * 00000001406AC46A: jz      short loc_1406AC46F
 * 00000001406AC46C: stac
 * 00000001406AC46F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406AC479: jz      short loc_1406AC47C
 * 00000001406AC47B: sti
 * 00000001406AC47C: test    [rbp+0E8h+arg_0], 1
 * 00000001406AC483: jz      short loc_1406AC4C6
 * 00000001406AC485: call    KiHandleBound
 * 00000001406AC48A: cmp     eax, 0
 * 00000001406AC48D: jz      short loc_1406AC4C6
 * 00000001406AC48F: cmp     eax, 1
 * 00000001406AC492: jz      short loc_1406AC4DA
 * 00000001406AC494: cmp     eax, 2
 * 00000001406AC497: jz      short loc_1406AC4A8
 * 00000001406AC499: mov     edx, 5
 * 00000001406AC49E: mov     ecx, 7Fh
 * 00000001406AC4A3: call    KiBugCheckDispatch
 * 00000001406AC4A8: mov     r9, 1Ch
 * 00000001406AC4AF: mov     ecx, 0C0000409h
 * 00000001406AC4B4: mov     edx, 1
 * 00000001406AC4B9: mov     r8, [rbp+0E8h]
 * 00000001406AC4C0: call    KiFastFailDispatch
 * 00000001406AC4C5: nop
 * 00000001406AC4C6: mov     ecx, 0C000008Ch
 * 00000001406AC4CB: xor     edx, edx
 * 00000001406AC4CD: mov     r8, [rbp+0E8h]
 * 00000001406AC4D4: call    KiExceptionDispatch
 * 00000001406AC4D9: nop
 * 00000001406AC4DA: cli
 * 00000001406AC4DB: test    [rbp+0E8h+arg_0], 1
 * 00000001406AC4E2: jz      loc_1406AC7DD
 * 00000001406AC4E8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AC4EF: jz      short loc_1406AC4F4
 * 00000001406AC4F1: stac
 * 00000001406AC4F4: mov     rcx, gs:188h
 * 00000001406AC4FD: test    byte ptr [rcx+0C2h], 3
 * 00000001406AC504: jz      short loc_1406AC521
 * 00000001406AC506: mov     ecx, 1
 * 00000001406AC50B: mov     cr8, rcx
 * 00000001406AC50F: sti
 * 00000001406AC510: call    KiInitiateUserApc
 * 00000001406AC515: cli
 * 00000001406AC516: mov     ecx, 0
 * 00000001406AC51B: mov     cr8, rcx
 * 00000001406AC51F: jmp     short loc_1406AC4F4
 * 00000001406AC521: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AC526: test    eax, eax
 * 00000001406AC528: mov     rax, [rbp+0E8h+var_138]
 * 00000001406AC52C: jnz     short loc_1406AC4F4
 * 00000001406AC52E: test    byte ptr gs:860h, 2
 * 00000001406AC537: jz      short loc_1406AC540
 * 00000001406AC539: xor     ecx, ecx
 * 00000001406AC53B: call    KiUpdateStibpPairing
 * 00000001406AC540: mov     rcx, gs:188h
 * 00000001406AC549: test    dword ptr [rcx], 8000000h
 * 00000001406AC54F: jz      short loc_1406AC556
 * 00000001406AC551: call    KiRestoreSetContextState
 * 00000001406AC556: mov     rcx, gs:188h
 * 00000001406AC55F: test    dword ptr [rcx], 10000h
 * 00000001406AC565: jz      short loc_1406AC57B
 * 00000001406AC567: test    byte ptr [rcx+2], 1
 * 00000001406AC56B: jz      short loc_1406AC57B
 * 00000001406AC56D: call    KiCopyCounters
 * 00000001406AC572: mov     rcx, gs:188h
 * 00000001406AC57B: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406AC57F: cmp     [rbp+0E8h+var_68], 0
 * 00000001406AC587: jz      short loc_1406AC58E
 * 00000001406AC589: call    KiRestoreDebugRegisterState
 * 00000001406AC58E: mov     rcx, gs:188h
 * 00000001406AC597: bt      dword ptr [rcx+74h], 16h
 * 00000001406AC59C: jnb     short loc_1406AC5C8
 * 00000001406AC59E: xor     ecx, ecx
 * 00000001406AC5A0: rdsspq  rcx
 * 00000001406AC5A5: mov     r8, gs:9D28h
 * 00000001406AC5AE: add     r8, 8
 * 00000001406AC5B2: cmp     rcx, r8
 * 00000001406AC5B5: jnz     short loc_1406AC5C8
 * 00000001406AC5B7: mov     rcx, gs:9D20h
 * 00000001406AC5C0: rstorssp qword ptr [rcx]
 * 00000001406AC5C4: saveprevssp
 * 00000001406AC5C8: mov     byte ptr gs:85Eh, 0
 * 00000001406AC5D1: movzx   eax, word ptr gs:86Ch
 * 00000001406AC5DA: cmp     gs:866h, ax
 * 00000001406AC5E3: jz      short loc_1406AC5F7
 * 00000001406AC5E5: mov     gs:866h, ax
 * 00000001406AC5EE: mov     ecx, 48h ; 'H'
 * 00000001406AC5F3: xor     edx, edx
 * 00000001406AC5F5: wrmsr
 * 00000001406AC5F7: btr     word ptr gs:858h, 2
 * 00000001406AC602: jnb     short loc_1406AC612
 * 00000001406AC604: mov     eax, 1
 * 00000001406AC609: xor     edx, edx
 * 00000001406AC60B: mov     ecx, 49h ; 'I'
 * 00000001406AC610: wrmsr
 * 00000001406AC612: btr     word ptr gs:858h, 5
 * 00000001406AC61D: jnb     loc_1406AC75A
 * 00000001406AC623: call    loc_1406AC736
 * 00000001406AC628: add     rsp, 8
 * 00000001406AC62C: call    loc_1406AC73F
 * 00000001406AC631: add     rsp, 8
 * 00000001406AC635: call    loc_1406AC628
 * 00000001406AC63A: add     rsp, 8
 * 00000001406AC63E: call    loc_1406AC631
 * 00000001406AC643: add     rsp, 8
 * 00000001406AC647: call    loc_1406AC63A
 * 00000001406AC64C: add     rsp, 8
 * 00000001406AC650: call    loc_1406AC643
 * 00000001406AC655: add     rsp, 8
 * 00000001406AC659: call    loc_1406AC64C
 * 00000001406AC65E: add     rsp, 8
 * 00000001406AC662: call    loc_1406AC655
 * 00000001406AC667: add     rsp, 8
 * 00000001406AC66B: call    loc_1406AC65E
 * 00000001406AC670: add     rsp, 8
 * 00000001406AC674: call    loc_1406AC667
 * 00000001406AC679: add     rsp, 8
 * 00000001406AC67D: call    loc_1406AC670
 * 00000001406AC682: add     rsp, 8
 * 00000001406AC686: call    loc_1406AC679
 * 00000001406AC68B: add     rsp, 8
 * 00000001406AC68F: call    loc_1406AC682
 * 00000001406AC694: add     rsp, 8
 * 00000001406AC698: call    loc_1406AC68B
 * 00000001406AC69D: add     rsp, 8
 * 00000001406AC6A1: call    loc_1406AC694
 * 00000001406AC6A6: add     rsp, 8
 * 00000001406AC6AA: call    loc_1406AC69D
 * 00000001406AC6AF: add     rsp, 8
 * 00000001406AC6B3: call    loc_1406AC6A6
 * 00000001406AC6B8: add     rsp, 8
 * 00000001406AC6BC: call    loc_1406AC6AF
 * 00000001406AC6C1: add     rsp, 8
 * 00000001406AC6C5: call    loc_1406AC6B8
 * 00000001406AC6CA: add     rsp, 8
 * 00000001406AC6CE: call    loc_1406AC6C1
 * 00000001406AC6D3: add     rsp, 8
 * 00000001406AC6D7: call    loc_1406AC6CA
 * 00000001406AC6DC: add     rsp, 8
 * 00000001406AC6E0: call    loc_1406AC6D3
 * 00000001406AC6E5: add     rsp, 8
 * 00000001406AC6E9: call    loc_1406AC6DC
 * 00000001406AC6EE: add     rsp, 8
 * 00000001406AC6F2: call    loc_1406AC6E5
 * 00000001406AC6F7: add     rsp, 8
 * 00000001406AC6FB: call    loc_1406AC6EE
 * 00000001406AC700: add     rsp, 8
 * 00000001406AC704: call    loc_1406AC6F7
 * 00000001406AC709: add     rsp, 8
 * 00000001406AC70D: call    loc_1406AC700
 * 00000001406AC712: add     rsp, 8
 * 00000001406AC716: call    loc_1406AC709
 * 00000001406AC71B: add     rsp, 8
 * 00000001406AC71F: call    loc_1406AC712
 * 00000001406AC724: add     rsp, 8
 * 00000001406AC728: call    loc_1406AC71B
 * 00000001406AC72D: add     rsp, 8
 * 00000001406AC731: call    loc_1406AC724
 * 00000001406AC736: add     rsp, 8
 * 00000001406AC73A: call    loc_1406AC72D
 * 00000001406AC73F: add     rsp, 8
 * 00000001406AC743: mov     eax, 0DADAh
 * 00000001406AC748: test    byte ptr gs:85Ch, 8
 * 00000001406AC751: jz      short loc_1406AC75A
 * 00000001406AC753: mov     al, 20h ; ' '
 * 00000001406AC755: incsspq rax
 * 00000001406AC75A: test    word ptr gs:858h, 100h
 * 00000001406AC765: jz      short loc_1406AC773
 * 00000001406AC767: xor     eax, eax
 * 00000001406AC769: xor     edx, edx
 * 00000001406AC76B: mov     ecx, 1
 * 00000001406AC770: div     rcx
 * 00000001406AC773: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406AC777: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406AC77B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406AC77F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406AC783: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406AC787: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406AC78B: mov     r11, [rbp+0E8h+var_108]
 * 00000001406AC78F: mov     r10, [rbp+0E8h+var_110]
 * 00000001406AC793: mov     r9, [rbp+0E8h+var_118]
 * 00000001406AC797: mov     r8, [rbp+0E8h+var_120]
 * 00000001406AC79B: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406AC79F: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406AC7A3: mov     rax, [rbp+0E8h+var_138]
 * 00000001406AC7A7: mov     rsp, rbp
 * 00000001406AC7AA: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406AC7B1: add     rsp, 0E8h
 * 00000001406AC7B8: test    cs:KiKvaShadow, 1
 * 00000001406AC7BF: jz      short loc_1406AC7C6
 * 00000001406AC7C1: jmp     KiKernelExit
 * 00000001406AC7C6: test    word ptr gs:858h, 200h
 * 00000001406AC7D1: jz      short loc_1406AC7D8
 * 00000001406AC7D3: verw    [rsp+arg_18]
 * 00000001406AC7D8: swapgs
 * 00000001406AC7DB: iretq
 * 00000001406AC7DD: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406AC7E1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406AC7E5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406AC7E9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406AC7ED: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406AC7F1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406AC7F5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406AC7F9: mov     r11, [rbp+0E8h+var_108]
 * 00000001406AC7FD: mov     r10, [rbp+0E8h+var_110]
 * 00000001406AC801: mov     r9, [rbp+0E8h+var_118]
 * 00000001406AC805: mov     r8, [rbp+0E8h+var_120]
 * 00000001406AC809: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406AC80D: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406AC811: mov     rax, [rbp+0E8h+var_138]
 * 00000001406AC815: mov     rsp, rbp
 * 00000001406AC818: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406AC81F: add     rsp, 0E8h
 * 00000001406AC826: iretq
 */
