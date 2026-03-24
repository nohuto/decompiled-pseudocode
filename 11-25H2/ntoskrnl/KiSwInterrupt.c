/*
 * XREFs of KiSwInterrupt @ 0x1406A60C0
 * Callers:
 *     KiSwInterruptShadow @ 0x140BAACC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x14028E700 (KiStartInterruptCycleAccumulation.c)
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x14041A4A0 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiSwInterruptDispatch @ 0x140506170 (KiSwInterruptDispatch.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405B8E30 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1406A60C0
 * Reason: Hex-Rays returned no pseudocode for 0x1406A60C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A60C0: sub     rsp, 8
 * 00000001406A60C4: push    rbp
 * 00000001406A60C5: push    rsi
 * 00000001406A60C6: sub     rsp, 150h
 * 00000001406A60CD: lea     rbp, [rsp+80h]
 * 00000001406A60D5: mov     [rbp+0E8h+var_13D], 0
 * 00000001406A60D9: mov     [rbp+0E8h+var_138], rax
 * 00000001406A60DD: mov     [rbp+0E8h+var_130], rcx
 * 00000001406A60E1: mov     [rbp+0E8h+var_128], rdx
 * 00000001406A60E5: mov     [rbp+0E8h+var_120], r8
 * 00000001406A60E9: mov     [rbp+0E8h+var_118], r9
 * 00000001406A60ED: mov     [rbp+0E8h+var_110], r10
 * 00000001406A60F1: mov     [rbp+0E8h+var_108], r11
 * 00000001406A60F5: test    [rbp+0E8h+arg_0], 1
 * 00000001406A60FC: jnz     short loc_1406A6136
 * 00000001406A60FE: xor     edx, edx
 * 00000001406A6100: rdsspq  rdx
 * 00000001406A6105: mov     [rbp+0E8h+var_90], rdx
 * 00000001406A6109: lfence
 * 00000001406A610C: test    byte ptr gs:858h, 1
 * 00000001406A6115: jnz     short loc_1406A611F
 * 00000001406A6117: lfence
 * 00000001406A611A: jmp     loc_1406A63A7
 * 00000001406A611F: movzx   eax, word ptr gs:866h
 * 00000001406A6128: mov     ecx, 48h ; 'H'
 * 00000001406A612D: xor     edx, edx
 * 00000001406A612F: wrmsr
 * 00000001406A6131: jmp     loc_1406A63A7
 * 00000001406A6136: test    cs:KiKvaShadow, 1
 * 00000001406A613D: jnz     short loc_1406A6142
 * 00000001406A613F: swapgs
 * 00000001406A6142: lfence
 * 00000001406A6145: mov     rcx, gs:9D28h
 * 00000001406A614E: test    rcx, rcx
 * 00000001406A6151: jz      short loc_1406A6172
 * 00000001406A6153: rdsspq  rdx
 * 00000001406A6158: mov     r10, gs:9D20h
 * 00000001406A6161: add     r10, 8
 * 00000001406A6165: cmp     rdx, r10
 * 00000001406A6168: jnz     short loc_1406A6172
 * 00000001406A616A: rstorssp qword ptr [rcx]
 * 00000001406A616E: saveprevssp
 * 00000001406A6172: mov     r10, gs:188h
 * 00000001406A617B: mov     rcx, gs:188h
 * 00000001406A6184: mov     rcx, [rcx+220h]
 * 00000001406A618B: mov     rcx, [rcx+760h]
 * 00000001406A6192: mov     gs:850h, rcx
 * 00000001406A619B: mov     cx, gs:862h
 * 00000001406A61A4: mov     gs:864h, cx
 * 00000001406A61AD: mov     cl, gs:858h
 * 00000001406A61B5: mov     gs:85Ah, cl
 * 00000001406A61BD: movzx   eax, word ptr gs:868h
 * 00000001406A61C6: cmp     gs:866h, ax
 * 00000001406A61CF: jz      short loc_1406A61E3
 * 00000001406A61D1: mov     gs:866h, ax
 * 00000001406A61DA: mov     ecx, 48h ; 'H'
 * 00000001406A61DF: xor     edx, edx
 * 00000001406A61E1: wrmsr
 * 00000001406A61E3: movzx   edx, byte ptr gs:858h
 * 00000001406A61EC: test    edx, 8
 * 00000001406A61F2: jz      short loc_1406A620B
 * 00000001406A61F4: mov     eax, 1
 * 00000001406A61F9: xor     edx, edx
 * 00000001406A61FB: mov     ecx, 49h ; 'I'
 * 00000001406A6200: wrmsr
 * 00000001406A6202: movzx   edx, byte ptr gs:858h
 * 00000001406A620B: test    edx, 2
 * 00000001406A6211: jz      loc_1406A634E
 * 00000001406A6217: call    loc_1406A632A
 * 00000001406A621C: add     rsp, 8
 * 00000001406A6220: call    loc_1406A6333
 * 00000001406A6225: add     rsp, 8
 * 00000001406A6229: call    loc_1406A621C
 * 00000001406A622E: add     rsp, 8
 * 00000001406A6232: call    loc_1406A6225
 * 00000001406A6237: add     rsp, 8
 * 00000001406A623B: call    loc_1406A622E
 * 00000001406A6240: add     rsp, 8
 * 00000001406A6244: call    loc_1406A6237
 * 00000001406A6249: add     rsp, 8
 * 00000001406A624D: call    loc_1406A6240
 * 00000001406A6252: add     rsp, 8
 * 00000001406A6256: call    loc_1406A6249
 * 00000001406A625B: add     rsp, 8
 * 00000001406A625F: call    loc_1406A6252
 * 00000001406A6264: add     rsp, 8
 * 00000001406A6268: call    loc_1406A625B
 * 00000001406A626D: add     rsp, 8
 * 00000001406A6271: call    loc_1406A6264
 * 00000001406A6276: add     rsp, 8
 * 00000001406A627A: call    loc_1406A626D
 * 00000001406A627F: add     rsp, 8
 * 00000001406A6283: call    loc_1406A6276
 * 00000001406A6288: add     rsp, 8
 * 00000001406A628C: call    loc_1406A627F
 * 00000001406A6291: add     rsp, 8
 * 00000001406A6295: call    loc_1406A6288
 * 00000001406A629A: add     rsp, 8
 * 00000001406A629E: call    loc_1406A6291
 * 00000001406A62A3: add     rsp, 8
 * 00000001406A62A7: call    loc_1406A629A
 * 00000001406A62AC: add     rsp, 8
 * 00000001406A62B0: call    loc_1406A62A3
 * 00000001406A62B5: add     rsp, 8
 * 00000001406A62B9: call    loc_1406A62AC
 * 00000001406A62BE: add     rsp, 8
 * 00000001406A62C2: call    loc_1406A62B5
 * 00000001406A62C7: add     rsp, 8
 * 00000001406A62CB: call    loc_1406A62BE
 * 00000001406A62D0: add     rsp, 8
 * 00000001406A62D4: call    loc_1406A62C7
 * 00000001406A62D9: add     rsp, 8
 * 00000001406A62DD: call    loc_1406A62D0
 * 00000001406A62E2: add     rsp, 8
 * 00000001406A62E6: call    loc_1406A62D9
 * 00000001406A62EB: add     rsp, 8
 * 00000001406A62EF: call    loc_1406A62E2
 * 00000001406A62F4: add     rsp, 8
 * 00000001406A62F8: call    loc_1406A62EB
 * 00000001406A62FD: add     rsp, 8
 * 00000001406A6301: call    loc_1406A62F4
 * 00000001406A6306: add     rsp, 8
 * 00000001406A630A: call    loc_1406A62FD
 * 00000001406A630F: add     rsp, 8
 * 00000001406A6313: call    loc_1406A6306
 * 00000001406A6318: add     rsp, 8
 * 00000001406A631C: call    loc_1406A630F
 * 00000001406A6321: add     rsp, 8
 * 00000001406A6325: call    loc_1406A6318
 * 00000001406A632A: add     rsp, 8
 * 00000001406A632E: call    loc_1406A6321
 * 00000001406A6333: add     rsp, 8
 * 00000001406A6337: mov     eax, 0DADAh
 * 00000001406A633C: test    byte ptr gs:85Ch, 8
 * 00000001406A6345: jz      short loc_1406A634E
 * 00000001406A6347: mov     al, 20h ; ' '
 * 00000001406A6349: incsspq rax
 * 00000001406A634E: test    edx, 80h
 * 00000001406A6354: jz      short loc_1406A635E
 * 00000001406A6356: lfence
 * 00000001406A6359: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A635E: lfence
 * 00000001406A6361: mov     byte ptr gs:85Eh, 0
 * 00000001406A636A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A6371: jz      short loc_1406A6392
 * 00000001406A6373: mov     ecx, 6A7h
 * 00000001406A6378: rdmsr
 * 00000001406A637A: cmp     edx, 0
 * 00000001406A637D: jz      short loc_1406A6392
 * 00000001406A637F: mov     ecx, edx
 * 00000001406A6381: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A6387: cmp     edx, ecx
 * 00000001406A6389: jz      short loc_1406A6392
 * 00000001406A638B: mov     ecx, 6A7h
 * 00000001406A6390: wrmsr
 * 00000001406A6392: test    byte ptr [r10+3], 3
 * 00000001406A6397: mov     [rbp+0E8h+var_68], 0
 * 00000001406A63A0: jz      short loc_1406A63A7
 * 00000001406A63A2: call    KiSaveDebugRegisterState
 * 00000001406A63A7: cld
 * 00000001406A63A8: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406A63AC: ldmxcsr dword ptr gs:180h
 * 00000001406A63B5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406A63B9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406A63BD: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406A63C1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406A63C5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406A63C9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406A63CD: test    [rbp+0E8h+arg_0], 1
 * 00000001406A63D4: jz      short loc_1406A63DB
 * 00000001406A63D6: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A63DB: cmp     byte ptr gs:87DAh, 0
 * 00000001406A63E4: jz      short loc_1406A63EB
 * 00000001406A63E6: call    KeWakeProcessor
 * 00000001406A63EB: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406A63F2: cmp     rax, [rbp+0E8h]
 * 00000001406A63F9: jnb     short loc_1406A6414
 * 00000001406A63FB: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406A6402: cmp     rax, [rbp+0E8h]
 * 00000001406A6409: jb      short loc_1406A6414
 * 00000001406A640B: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406A640F: call    KiCheckForSListAddress
 * 00000001406A6414: xor     esi, esi
 * 00000001406A6416: inc     dword ptr gs:87C0h
 * 00000001406A641E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A6425: jz      short loc_1406A642A
 * 00000001406A6427: clac
 * 00000001406A642A: mov     ecx, 2
 * 00000001406A642F: cmp     cs:KiIrqlFlags, 0
 * 00000001406A6436: jz      short loc_1406A643F
 * 00000001406A6438: call    KzSetIrqlUnsafe
 * 00000001406A643D: jmp     short loc_1406A6447
 * 00000001406A643F: mov     rax, cr8
 * 00000001406A6443: mov     cr8, rcx
 * 00000001406A6447: mov     [rbp+0E8h+var_13F], al
 * 00000001406A644A: mov     rcx, gs:20h
 * 00000001406A6453: xor     edx, edx
 * 00000001406A6455: call    KiStartInterruptCycleAccumulation
 * 00000001406A645A: sti
 * 00000001406A645B: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406A645F: call    KiSwInterruptDispatch
 * 00000001406A6464: cli
 * 00000001406A6465: mov     rcx, rsi
 * 00000001406A6468: call    HalPerformEndOfInterrupt
 * 00000001406A646D: mov     rcx, gs:20h
 * 00000001406A6476: movzx   edx, [rbp+0E8h+var_13F]
 * 00000001406A647A: call    KiEndInterruptCycleAccumulation
 * 00000001406A647F: test    al, al
 * 00000001406A6481: jz      short loc_1406A6488
 * 00000001406A6483: call    KiDpcInterruptBypass
 * 00000001406A6488: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001406A648C: cmp     cs:KiIrqlFlags, 0
 * 00000001406A6493: jz      short loc_1406A649C
 * 00000001406A6495: call    KzSetIrqlUnsafe
 * 00000001406A649A: jmp     short loc_1406A64A0
 * 00000001406A649C: mov     cr8, rcx
 * 00000001406A64A0: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406A64A7: cli
 * 00000001406A64A8: test    [rbp+0E8h+arg_0], 1
 * 00000001406A64AF: jz      loc_1406A67AA
 * 00000001406A64B5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A64BC: jz      short loc_1406A64C1
 * 00000001406A64BE: stac
 * 00000001406A64C1: mov     rcx, gs:188h
 * 00000001406A64CA: test    byte ptr [rcx+0C2h], 3
 * 00000001406A64D1: jz      short loc_1406A64EE
 * 00000001406A64D3: mov     ecx, 1
 * 00000001406A64D8: mov     cr8, rcx
 * 00000001406A64DC: sti
 * 00000001406A64DD: call    KiInitiateUserApc
 * 00000001406A64E2: cli
 * 00000001406A64E3: mov     ecx, 0
 * 00000001406A64E8: mov     cr8, rcx
 * 00000001406A64EC: jmp     short loc_1406A64C1
 * 00000001406A64EE: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A64F3: test    eax, eax
 * 00000001406A64F5: mov     rax, [rbp+0E8h+var_138]
 * 00000001406A64F9: jnz     short loc_1406A64C1
 * 00000001406A64FB: test    byte ptr gs:860h, 2
 * 00000001406A6504: jz      short loc_1406A650D
 * 00000001406A6506: xor     ecx, ecx
 * 00000001406A6508: call    KiUpdateStibpPairing
 * 00000001406A650D: mov     rcx, gs:188h
 * 00000001406A6516: test    dword ptr [rcx], 8000000h
 * 00000001406A651C: jz      short loc_1406A6523
 * 00000001406A651E: call    KiRestoreSetContextState
 * 00000001406A6523: mov     rcx, gs:188h
 * 00000001406A652C: test    dword ptr [rcx], 10000h
 * 00000001406A6532: jz      short loc_1406A6548
 * 00000001406A6534: test    byte ptr [rcx+2], 1
 * 00000001406A6538: jz      short loc_1406A6548
 * 00000001406A653A: call    KiCopyCounters
 * 00000001406A653F: mov     rcx, gs:188h
 * 00000001406A6548: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406A654C: cmp     [rbp+0E8h+var_68], 0
 * 00000001406A6554: jz      short loc_1406A655B
 * 00000001406A6556: call    KiRestoreDebugRegisterState
 * 00000001406A655B: mov     rcx, gs:188h
 * 00000001406A6564: bt      dword ptr [rcx+74h], 16h
 * 00000001406A6569: jnb     short loc_1406A6595
 * 00000001406A656B: xor     ecx, ecx
 * 00000001406A656D: rdsspq  rcx
 * 00000001406A6572: mov     r8, gs:9D28h
 * 00000001406A657B: add     r8, 8
 * 00000001406A657F: cmp     rcx, r8
 * 00000001406A6582: jnz     short loc_1406A6595
 * 00000001406A6584: mov     rcx, gs:9D20h
 * 00000001406A658D: rstorssp qword ptr [rcx]
 * 00000001406A6591: saveprevssp
 * 00000001406A6595: mov     byte ptr gs:85Eh, 0
 * 00000001406A659E: movzx   eax, word ptr gs:86Ch
 * 00000001406A65A7: cmp     gs:866h, ax
 * 00000001406A65B0: jz      short loc_1406A65C4
 * 00000001406A65B2: mov     gs:866h, ax
 * 00000001406A65BB: mov     ecx, 48h ; 'H'
 * 00000001406A65C0: xor     edx, edx
 * 00000001406A65C2: wrmsr
 * 00000001406A65C4: btr     word ptr gs:858h, 2
 * 00000001406A65CF: jnb     short loc_1406A65DF
 * 00000001406A65D1: mov     eax, 1
 * 00000001406A65D6: xor     edx, edx
 * 00000001406A65D8: mov     ecx, 49h ; 'I'
 * 00000001406A65DD: wrmsr
 * 00000001406A65DF: btr     word ptr gs:858h, 5
 * 00000001406A65EA: jnb     loc_1406A6727
 * 00000001406A65F0: call    loc_1406A6703
 * 00000001406A65F5: add     rsp, 8
 * 00000001406A65F9: call    loc_1406A670C
 * 00000001406A65FE: add     rsp, 8
 * 00000001406A6602: call    loc_1406A65F5
 * 00000001406A6607: add     rsp, 8
 * 00000001406A660B: call    loc_1406A65FE
 * 00000001406A6610: add     rsp, 8
 * 00000001406A6614: call    loc_1406A6607
 * 00000001406A6619: add     rsp, 8
 * 00000001406A661D: call    loc_1406A6610
 * 00000001406A6622: add     rsp, 8
 * 00000001406A6626: call    loc_1406A6619
 * 00000001406A662B: add     rsp, 8
 * 00000001406A662F: call    loc_1406A6622
 * 00000001406A6634: add     rsp, 8
 * 00000001406A6638: call    loc_1406A662B
 * 00000001406A663D: add     rsp, 8
 * 00000001406A6641: call    loc_1406A6634
 * 00000001406A6646: add     rsp, 8
 * 00000001406A664A: call    loc_1406A663D
 * 00000001406A664F: add     rsp, 8
 * 00000001406A6653: call    loc_1406A6646
 * 00000001406A6658: add     rsp, 8
 * 00000001406A665C: call    loc_1406A664F
 * 00000001406A6661: add     rsp, 8
 * 00000001406A6665: call    loc_1406A6658
 * 00000001406A666A: add     rsp, 8
 * 00000001406A666E: call    loc_1406A6661
 * 00000001406A6673: add     rsp, 8
 * 00000001406A6677: call    loc_1406A666A
 * 00000001406A667C: add     rsp, 8
 * 00000001406A6680: call    loc_1406A6673
 * 00000001406A6685: add     rsp, 8
 * 00000001406A6689: call    loc_1406A667C
 * 00000001406A668E: add     rsp, 8
 * 00000001406A6692: call    loc_1406A6685
 * 00000001406A6697: add     rsp, 8
 * 00000001406A669B: call    loc_1406A668E
 * 00000001406A66A0: add     rsp, 8
 * 00000001406A66A4: call    loc_1406A6697
 * 00000001406A66A9: add     rsp, 8
 * 00000001406A66AD: call    loc_1406A66A0
 * 00000001406A66B2: add     rsp, 8
 * 00000001406A66B6: call    loc_1406A66A9
 * 00000001406A66BB: add     rsp, 8
 * 00000001406A66BF: call    loc_1406A66B2
 * 00000001406A66C4: add     rsp, 8
 * 00000001406A66C8: call    loc_1406A66BB
 * 00000001406A66CD: add     rsp, 8
 * 00000001406A66D1: call    loc_1406A66C4
 * 00000001406A66D6: add     rsp, 8
 * 00000001406A66DA: call    loc_1406A66CD
 * 00000001406A66DF: add     rsp, 8
 * 00000001406A66E3: call    loc_1406A66D6
 * 00000001406A66E8: add     rsp, 8
 * 00000001406A66EC: call    loc_1406A66DF
 * 00000001406A66F1: add     rsp, 8
 * 00000001406A66F5: call    loc_1406A66E8
 * 00000001406A66FA: add     rsp, 8
 * 00000001406A66FE: call    loc_1406A66F1
 * 00000001406A6703: add     rsp, 8
 * 00000001406A6707: call    loc_1406A66FA
 * 00000001406A670C: add     rsp, 8
 * 00000001406A6710: mov     eax, 0DADAh
 * 00000001406A6715: test    byte ptr gs:85Ch, 8
 * 00000001406A671E: jz      short loc_1406A6727
 * 00000001406A6720: mov     al, 20h ; ' '
 * 00000001406A6722: incsspq rax
 * 00000001406A6727: test    word ptr gs:858h, 100h
 * 00000001406A6732: jz      short loc_1406A6740
 * 00000001406A6734: xor     eax, eax
 * 00000001406A6736: xor     edx, edx
 * 00000001406A6738: mov     ecx, 1
 * 00000001406A673D: div     rcx
 * 00000001406A6740: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406A6744: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406A6748: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406A674C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406A6750: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406A6754: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406A6758: mov     r11, [rbp+0E8h+var_108]
 * 00000001406A675C: mov     r10, [rbp+0E8h+var_110]
 * 00000001406A6760: mov     r9, [rbp+0E8h+var_118]
 * 00000001406A6764: mov     r8, [rbp+0E8h+var_120]
 * 00000001406A6768: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406A676C: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406A6770: mov     rax, [rbp+0E8h+var_138]
 * 00000001406A6774: mov     rsp, rbp
 * 00000001406A6777: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406A677E: add     rsp, 0E8h
 * 00000001406A6785: test    cs:KiKvaShadow, 1
 * 00000001406A678C: jz      short loc_1406A6793
 * 00000001406A678E: jmp     KiKernelExit
 * 00000001406A6793: test    word ptr gs:858h, 200h
 * 00000001406A679E: jz      short loc_1406A67A5
 * 00000001406A67A0: verw    [rsp+arg_18]
 * 00000001406A67A5: swapgs
 * 00000001406A67A8: iretq
 * 00000001406A67AA: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406A67AE: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406A67B2: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406A67B6: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406A67BA: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406A67BE: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406A67C2: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406A67C6: mov     r11, [rbp+0E8h+var_108]
 * 00000001406A67CA: mov     r10, [rbp+0E8h+var_110]
 * 00000001406A67CE: mov     r9, [rbp+0E8h+var_118]
 * 00000001406A67D2: mov     r8, [rbp+0E8h+var_120]
 * 00000001406A67D6: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406A67DA: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406A67DE: mov     rax, [rbp+0E8h+var_138]
 * 00000001406A67E2: mov     rsp, rbp
 * 00000001406A67E5: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406A67EC: add     rsp, 0E8h
 * 00000001406A67F3: iretq
 */
