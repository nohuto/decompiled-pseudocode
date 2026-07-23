/*
 * XREFs of KiApcInterrupt @ 0x1406B00E0
 * Callers:
 *     KiApcInterruptShadow @ 0x140BBDC40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140408120 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1406B00E0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x1406B00E0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B00E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B00E0: sub     rsp, 8
 * 00000001406B00E4: push    rbp
 * 00000001406B00E5: push    rsi
 * 00000001406B00E6: sub     rsp, 150h
 * 00000001406B00ED: lea     rbp, [rsp+80h]
 * 00000001406B00F5: mov     [rbp+0E8h+var_13D], 0
 * 00000001406B00F9: mov     [rbp+0E8h+var_138], rax
 * 00000001406B00FD: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B0101: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B0105: mov     [rbp+0E8h+var_120], r8
 * 00000001406B0109: mov     [rbp+0E8h+var_118], r9
 * 00000001406B010D: mov     [rbp+0E8h+var_110], r10
 * 00000001406B0111: mov     [rbp+0E8h+var_108], r11
 * 00000001406B0115: test    [rbp+0E8h+arg_0], 1
 * 00000001406B011C: jnz     short loc_1406B0156
 * 00000001406B011E: xor     edx, edx
 * 00000001406B0120: rdsspq  rdx
 * 00000001406B0125: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B0129: lfence
 * 00000001406B012C: test    byte ptr gs:858h, 1
 * 00000001406B0135: jnz     short loc_1406B013F
 * 00000001406B0137: lfence
 * 00000001406B013A: jmp     loc_1406B03C7
 * 00000001406B013F: movzx   eax, word ptr gs:866h
 * 00000001406B0148: mov     ecx, 48h ; 'H'
 * 00000001406B014D: xor     edx, edx
 * 00000001406B014F: wrmsr
 * 00000001406B0151: jmp     loc_1406B03C7
 * 00000001406B0156: test    cs:KiKvaShadow, 1
 * 00000001406B015D: jnz     short loc_1406B0162
 * 00000001406B015F: swapgs
 * 00000001406B0162: lfence
 * 00000001406B0165: mov     rcx, gs:9D28h
 * 00000001406B016E: test    rcx, rcx
 * 00000001406B0171: jz      short loc_1406B0192
 * 00000001406B0173: rdsspq  rdx
 * 00000001406B0178: mov     r10, gs:9D20h
 * 00000001406B0181: add     r10, 8
 * 00000001406B0185: cmp     rdx, r10
 * 00000001406B0188: jnz     short loc_1406B0192
 * 00000001406B018A: rstorssp qword ptr [rcx]
 * 00000001406B018E: saveprevssp
 * 00000001406B0192: mov     r10, gs:188h
 * 00000001406B019B: mov     rcx, gs:188h
 * 00000001406B01A4: mov     rcx, [rcx+220h]
 * 00000001406B01AB: mov     rcx, [rcx+760h]
 * 00000001406B01B2: mov     gs:850h, rcx
 * 00000001406B01BB: mov     cx, gs:862h
 * 00000001406B01C4: mov     gs:864h, cx
 * 00000001406B01CD: mov     cl, gs:858h
 * 00000001406B01D5: mov     gs:85Ah, cl
 * 00000001406B01DD: movzx   eax, word ptr gs:868h
 * 00000001406B01E6: cmp     gs:866h, ax
 * 00000001406B01EF: jz      short loc_1406B0203
 * 00000001406B01F1: mov     gs:866h, ax
 * 00000001406B01FA: mov     ecx, 48h ; 'H'
 * 00000001406B01FF: xor     edx, edx
 * 00000001406B0201: wrmsr
 * 00000001406B0203: movzx   edx, byte ptr gs:858h
 * 00000001406B020C: test    edx, 8
 * 00000001406B0212: jz      short loc_1406B022B
 * 00000001406B0214: mov     eax, 1
 * 00000001406B0219: xor     edx, edx
 * 00000001406B021B: mov     ecx, 49h ; 'I'
 * 00000001406B0220: wrmsr
 * 00000001406B0222: movzx   edx, byte ptr gs:858h
 * 00000001406B022B: test    edx, 2
 * 00000001406B0231: jz      loc_1406B036E
 * 00000001406B0237: call    loc_1406B034A
 * 00000001406B023C: add     rsp, 8
 * 00000001406B0240: call    loc_1406B0353
 * 00000001406B0245: add     rsp, 8
 * 00000001406B0249: call    loc_1406B023C
 * 00000001406B024E: add     rsp, 8
 * 00000001406B0252: call    loc_1406B0245
 * 00000001406B0257: add     rsp, 8
 * 00000001406B025B: call    loc_1406B024E
 * 00000001406B0260: add     rsp, 8
 * 00000001406B0264: call    loc_1406B0257
 * 00000001406B0269: add     rsp, 8
 * 00000001406B026D: call    loc_1406B0260
 * 00000001406B0272: add     rsp, 8
 * 00000001406B0276: call    loc_1406B0269
 * 00000001406B027B: add     rsp, 8
 * 00000001406B027F: call    loc_1406B0272
 * 00000001406B0284: add     rsp, 8
 * 00000001406B0288: call    loc_1406B027B
 * 00000001406B028D: add     rsp, 8
 * 00000001406B0291: call    loc_1406B0284
 * 00000001406B0296: add     rsp, 8
 * 00000001406B029A: call    loc_1406B028D
 * 00000001406B029F: add     rsp, 8
 * 00000001406B02A3: call    loc_1406B0296
 * 00000001406B02A8: add     rsp, 8
 * 00000001406B02AC: call    loc_1406B029F
 * 00000001406B02B1: add     rsp, 8
 * 00000001406B02B5: call    loc_1406B02A8
 * 00000001406B02BA: add     rsp, 8
 * 00000001406B02BE: call    loc_1406B02B1
 * 00000001406B02C3: add     rsp, 8
 * 00000001406B02C7: call    loc_1406B02BA
 * 00000001406B02CC: add     rsp, 8
 * 00000001406B02D0: call    loc_1406B02C3
 * 00000001406B02D5: add     rsp, 8
 * 00000001406B02D9: call    loc_1406B02CC
 * 00000001406B02DE: add     rsp, 8
 * 00000001406B02E2: call    loc_1406B02D5
 * 00000001406B02E7: add     rsp, 8
 * 00000001406B02EB: call    loc_1406B02DE
 * 00000001406B02F0: add     rsp, 8
 * 00000001406B02F4: call    loc_1406B02E7
 * 00000001406B02F9: add     rsp, 8
 * 00000001406B02FD: call    loc_1406B02F0
 * 00000001406B0302: add     rsp, 8
 * 00000001406B0306: call    loc_1406B02F9
 * 00000001406B030B: add     rsp, 8
 * 00000001406B030F: call    loc_1406B0302
 * 00000001406B0314: add     rsp, 8
 * 00000001406B0318: call    loc_1406B030B
 * 00000001406B031D: add     rsp, 8
 * 00000001406B0321: call    loc_1406B0314
 * 00000001406B0326: add     rsp, 8
 * 00000001406B032A: call    loc_1406B031D
 * 00000001406B032F: add     rsp, 8
 * 00000001406B0333: call    loc_1406B0326
 * 00000001406B0338: add     rsp, 8
 * 00000001406B033C: call    loc_1406B032F
 * 00000001406B0341: add     rsp, 8
 * 00000001406B0345: call    loc_1406B0338
 * 00000001406B034A: add     rsp, 8
 * 00000001406B034E: call    loc_1406B0341
 * 00000001406B0353: add     rsp, 8
 * 00000001406B0357: mov     eax, 0DADAh
 * 00000001406B035C: test    byte ptr gs:85Ch, 8
 * 00000001406B0365: jz      short loc_1406B036E
 * 00000001406B0367: mov     al, 20h ; ' '
 * 00000001406B0369: incsspq rax
 * 00000001406B036E: test    edx, 80h
 * 00000001406B0374: jz      short loc_1406B037E
 * 00000001406B0376: lfence
 * 00000001406B0379: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B037E: lfence
 * 00000001406B0381: mov     byte ptr gs:85Eh, 0
 * 00000001406B038A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B0391: jz      short loc_1406B03B2
 * 00000001406B0393: mov     ecx, 6A7h
 * 00000001406B0398: rdmsr
 * 00000001406B039A: cmp     edx, 0
 * 00000001406B039D: jz      short loc_1406B03B2
 * 00000001406B039F: mov     ecx, edx
 * 00000001406B03A1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B03A7: cmp     edx, ecx
 * 00000001406B03A9: jz      short loc_1406B03B2
 * 00000001406B03AB: mov     ecx, 6A7h
 * 00000001406B03B0: wrmsr
 * 00000001406B03B2: test    byte ptr [r10+3], 3
 * 00000001406B03B7: mov     [rbp+0E8h+var_68], 0
 * 00000001406B03C0: jz      short loc_1406B03C7
 * 00000001406B03C2: call    KiSaveDebugRegisterState
 * 00000001406B03C7: cld
 * 00000001406B03C8: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B03CC: ldmxcsr dword ptr gs:180h
 * 00000001406B03D5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B03D9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B03DD: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B03E1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B03E5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B03E9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B03ED: test    [rbp+0E8h+arg_0], 1
 * 00000001406B03F4: jz      short loc_1406B03FB
 * 00000001406B03F6: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B03FB: xor     esi, esi
 * 00000001406B03FD: inc     dword ptr gs:87C0h
 * 00000001406B0405: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B040C: jz      short loc_1406B041A
 * 00000001406B040E: test    [rbp+0E8h+arg_0], 1
 * 00000001406B0415: jz      short loc_1406B041A
 * 00000001406B0417: stac
 * 00000001406B041A: test    cs:KiAmdTprLowerInterruptDelayDynamicWorkaround, 1
 * 00000001406B0421: jz      short loc_1406B0447
 * 00000001406B0423: btr     dword ptr gs:228h, 1
 * 00000001406B042D: cmp     dword ptr gs:228h, 0
 * 00000001406B0436: jnz     short loc_1406B0447
 * 00000001406B0438: mov     ecx, 0C0010015h
 * 00000001406B043D: rdmsr
 * 00000001406B043F: btr     edx, 0
 * 00000001406B0443: jnb     short loc_1406B0447
 * 00000001406B0445: wrmsr
 * 00000001406B0447: mov     ecx, 1
 * 00000001406B044C: cmp     cs:KiIrqlFlags, 0
 * 00000001406B0453: jz      short loc_1406B045C
 * 00000001406B0455: call    KzSetIrqlUnsafe
 * 00000001406B045A: jmp     short loc_1406B0464
 * 00000001406B045C: mov     rax, cr8
 * 00000001406B0460: mov     cr8, rcx
 * 00000001406B0464: mov     [rbp+0E8h+var_13F], al
 * 00000001406B0467: mov     rcx, rsi
 * 00000001406B046A: call    HalPerformEndOfInterrupt
 * 00000001406B046F: sti
 * 00000001406B0470: cmp     byte ptr gs:187h, 0
 * 00000001406B0479: jnz     short loc_1406B048B
 * 00000001406B047B: mov     ecx, 0
 * 00000001406B0480: xor     edx, edx
 * 00000001406B0482: lea     r8, [rbp+0E8h+var_168]
 * 00000001406B0486: call    KiDeliverApc
 * 00000001406B048B: cli
 * 00000001406B048C: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001406B0490: cmp     cs:KiIrqlFlags, 0
 * 00000001406B0497: jz      short loc_1406B04A0
 * 00000001406B0499: call    KzSetIrqlUnsafe
 * 00000001406B049E: jmp     short loc_1406B04A4
 * 00000001406B04A0: mov     cr8, rcx
 * 00000001406B04A4: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406B04AB: cli
 * 00000001406B04AC: test    [rbp+0E8h+arg_0], 1
 * 00000001406B04B3: jz      loc_1406B07AE
 * 00000001406B04B9: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B04C0: jz      short loc_1406B04C5
 * 00000001406B04C2: stac
 * 00000001406B04C5: mov     rcx, gs:188h
 * 00000001406B04CE: test    byte ptr [rcx+0C2h], 3
 * 00000001406B04D5: jz      short loc_1406B04F2
 * 00000001406B04D7: mov     ecx, 1
 * 00000001406B04DC: mov     cr8, rcx
 * 00000001406B04E0: sti
 * 00000001406B04E1: call    KiInitiateUserApc
 * 00000001406B04E6: cli
 * 00000001406B04E7: mov     ecx, 0
 * 00000001406B04EC: mov     cr8, rcx
 * 00000001406B04F0: jmp     short loc_1406B04C5
 * 00000001406B04F2: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B04F7: test    eax, eax
 * 00000001406B04F9: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B04FD: jnz     short loc_1406B04C5
 * 00000001406B04FF: test    byte ptr gs:860h, 2
 * 00000001406B0508: jz      short loc_1406B0511
 * 00000001406B050A: xor     ecx, ecx
 * 00000001406B050C: call    KiUpdateStibpPairing
 * 00000001406B0511: mov     rcx, gs:188h
 * 00000001406B051A: test    dword ptr [rcx], 8000000h
 * 00000001406B0520: jz      short loc_1406B0527
 * 00000001406B0522: call    KiRestoreSetContextState
 * 00000001406B0527: mov     rcx, gs:188h
 * 00000001406B0530: test    dword ptr [rcx], 10000h
 * 00000001406B0536: jz      short loc_1406B054C
 * 00000001406B0538: test    byte ptr [rcx+2], 1
 * 00000001406B053C: jz      short loc_1406B054C
 * 00000001406B053E: call    KiCopyCounters
 * 00000001406B0543: mov     rcx, gs:188h
 * 00000001406B054C: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B0550: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B0558: jz      short loc_1406B055F
 * 00000001406B055A: call    KiRestoreDebugRegisterState
 * 00000001406B055F: mov     rcx, gs:188h
 * 00000001406B0568: bt      dword ptr [rcx+74h], 16h
 * 00000001406B056D: jnb     short loc_1406B0599
 * 00000001406B056F: xor     ecx, ecx
 * 00000001406B0571: rdsspq  rcx
 * 00000001406B0576: mov     r8, gs:9D28h
 * 00000001406B057F: add     r8, 8
 * 00000001406B0583: cmp     rcx, r8
 * 00000001406B0586: jnz     short loc_1406B0599
 * 00000001406B0588: mov     rcx, gs:9D20h
 * 00000001406B0591: rstorssp qword ptr [rcx]
 * 00000001406B0595: saveprevssp
 * 00000001406B0599: mov     byte ptr gs:85Eh, 0
 * 00000001406B05A2: movzx   eax, word ptr gs:86Ch
 * 00000001406B05AB: cmp     gs:866h, ax
 * 00000001406B05B4: jz      short loc_1406B05C8
 * 00000001406B05B6: mov     gs:866h, ax
 * 00000001406B05BF: mov     ecx, 48h ; 'H'
 * 00000001406B05C4: xor     edx, edx
 * 00000001406B05C6: wrmsr
 * 00000001406B05C8: btr     word ptr gs:858h, 2
 * 00000001406B05D3: jnb     short loc_1406B05E3
 * 00000001406B05D5: mov     eax, 1
 * 00000001406B05DA: xor     edx, edx
 * 00000001406B05DC: mov     ecx, 49h ; 'I'
 * 00000001406B05E1: wrmsr
 * 00000001406B05E3: btr     word ptr gs:858h, 5
 * 00000001406B05EE: jnb     loc_1406B072B
 * 00000001406B05F4: call    loc_1406B0707
 * 00000001406B05F9: add     rsp, 8
 * 00000001406B05FD: call    loc_1406B0710
 * 00000001406B0602: add     rsp, 8
 * 00000001406B0606: call    loc_1406B05F9
 * 00000001406B060B: add     rsp, 8
 * 00000001406B060F: call    loc_1406B0602
 * 00000001406B0614: add     rsp, 8
 * 00000001406B0618: call    loc_1406B060B
 * 00000001406B061D: add     rsp, 8
 * 00000001406B0621: call    loc_1406B0614
 * 00000001406B0626: add     rsp, 8
 * 00000001406B062A: call    loc_1406B061D
 * 00000001406B062F: add     rsp, 8
 * 00000001406B0633: call    loc_1406B0626
 * 00000001406B0638: add     rsp, 8
 * 00000001406B063C: call    loc_1406B062F
 * 00000001406B0641: add     rsp, 8
 * 00000001406B0645: call    loc_1406B0638
 * 00000001406B064A: add     rsp, 8
 * 00000001406B064E: call    loc_1406B0641
 * 00000001406B0653: add     rsp, 8
 * 00000001406B0657: call    loc_1406B064A
 * 00000001406B065C: add     rsp, 8
 * 00000001406B0660: call    loc_1406B0653
 * 00000001406B0665: add     rsp, 8
 * 00000001406B0669: call    loc_1406B065C
 * 00000001406B066E: add     rsp, 8
 * 00000001406B0672: call    loc_1406B0665
 * 00000001406B0677: add     rsp, 8
 * 00000001406B067B: call    loc_1406B066E
 * 00000001406B0680: add     rsp, 8
 * 00000001406B0684: call    loc_1406B0677
 * 00000001406B0689: add     rsp, 8
 * 00000001406B068D: call    loc_1406B0680
 * 00000001406B0692: add     rsp, 8
 * 00000001406B0696: call    loc_1406B0689
 * 00000001406B069B: add     rsp, 8
 * 00000001406B069F: call    loc_1406B0692
 * 00000001406B06A4: add     rsp, 8
 * 00000001406B06A8: call    loc_1406B069B
 * 00000001406B06AD: add     rsp, 8
 * 00000001406B06B1: call    loc_1406B06A4
 * 00000001406B06B6: add     rsp, 8
 * 00000001406B06BA: call    loc_1406B06AD
 * 00000001406B06BF: add     rsp, 8
 * 00000001406B06C3: call    loc_1406B06B6
 * 00000001406B06C8: add     rsp, 8
 * 00000001406B06CC: call    loc_1406B06BF
 * 00000001406B06D1: add     rsp, 8
 * 00000001406B06D5: call    loc_1406B06C8
 * 00000001406B06DA: add     rsp, 8
 * 00000001406B06DE: call    loc_1406B06D1
 * 00000001406B06E3: add     rsp, 8
 * 00000001406B06E7: call    loc_1406B06DA
 * 00000001406B06EC: add     rsp, 8
 * 00000001406B06F0: call    loc_1406B06E3
 * 00000001406B06F5: add     rsp, 8
 * 00000001406B06F9: call    loc_1406B06EC
 * 00000001406B06FE: add     rsp, 8
 * 00000001406B0702: call    loc_1406B06F5
 * 00000001406B0707: add     rsp, 8
 * 00000001406B070B: call    loc_1406B06FE
 * 00000001406B0710: add     rsp, 8
 * 00000001406B0714: mov     eax, 0DADAh
 * 00000001406B0719: test    byte ptr gs:85Ch, 8
 * 00000001406B0722: jz      short loc_1406B072B
 * 00000001406B0724: mov     al, 20h ; ' '
 * 00000001406B0726: incsspq rax
 * 00000001406B072B: test    word ptr gs:858h, 100h
 * 00000001406B0736: jz      short loc_1406B0744
 * 00000001406B0738: xor     eax, eax
 * 00000001406B073A: xor     edx, edx
 * 00000001406B073C: mov     ecx, 1
 * 00000001406B0741: div     rcx
 * 00000001406B0744: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B0748: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B074C: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B0750: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B0754: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B0758: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B075C: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B0760: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B0764: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B0768: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B076C: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B0770: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B0774: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B0778: mov     rsp, rbp
 * 00000001406B077B: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B0782: add     rsp, 0E8h
 * 00000001406B0789: test    cs:KiKvaShadow, 1
 * 00000001406B0790: jz      short loc_1406B0797
 * 00000001406B0792: jmp     KiKernelExit
 * 00000001406B0797: test    word ptr gs:858h, 200h
 * 00000001406B07A2: jz      short loc_1406B07A9
 * 00000001406B07A4: verw    [rsp+arg_18]
 * 00000001406B07A9: swapgs
 * 00000001406B07AC: iretq
 * 00000001406B07AE: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B07B2: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B07B6: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B07BA: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B07BE: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B07C2: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B07C6: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B07CA: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B07CE: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B07D2: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B07D6: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B07DA: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B07DE: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B07E2: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B07E6: mov     rsp, rbp
 * 00000001406B07E9: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B07F0: add     rsp, 0E8h
 * 00000001406B07F7: iretq
 */
