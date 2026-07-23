/*
 * XREFs of KxMcheckAlternateReturn @ 0x1406BC100
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140BBDA40 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x1405C73B0 (KiMcheckAlternateReturn.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x1406BC100 (KxMcheckAlternateReturn.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxMcheckAlternateReturn @ 0x1406BC100
 * Reason: Hex-Rays returned no pseudocode for 0x1406BC100
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BC100: test    cs:KiKernelCetEnabled, 1
 * 00000001406BC107: jz      short loc_1406BC119
 * 00000001406BC109: push    rdx
 * 00000001406BC10A: rdsspq  rdx
 * 00000001406BC10F: test    rdx, rdx
 * 00000001406BC112: pop     rdx
 * 00000001406BC113: jnz     short loc_1406BC119
 * 00000001406BC115: setssbsy
 * 00000001406BC119: sub     rsp, 8
 * 00000001406BC11D: push    rbp
 * 00000001406BC11E: sub     rsp, 158h
 * 00000001406BC125: lea     rbp, [rsp+168h+var_E8]
 * 00000001406BC12D: mov     byte ptr [rbp-55h], 1
 * 00000001406BC131: mov     [rbp-50h], rax
 * 00000001406BC135: mov     [rbp-48h], rcx
 * 00000001406BC139: mov     [rbp-40h], rdx
 * 00000001406BC13D: mov     [rbp-38h], r8
 * 00000001406BC141: mov     [rbp-30h], r9
 * 00000001406BC145: mov     [rbp-28h], r10
 * 00000001406BC149: mov     [rbp-20h], r11
 * 00000001406BC14D: test    byte ptr [rbp+0F0h], 1
 * 00000001406BC154: jnz     short loc_1406BC18E
 * 00000001406BC156: xor     edx, edx
 * 00000001406BC158: rdsspq  rdx
 * 00000001406BC15D: mov     [rbp+58h], rdx
 * 00000001406BC161: lfence
 * 00000001406BC164: test    byte ptr gs:858h, 1
 * 00000001406BC16D: jnz     short loc_1406BC177
 * 00000001406BC16F: lfence
 * 00000001406BC172: jmp     loc_1406BC3FF
 * 00000001406BC177: movzx   eax, word ptr gs:866h
 * 00000001406BC180: mov     ecx, 48h ; 'H'
 * 00000001406BC185: xor     edx, edx
 * 00000001406BC187: wrmsr
 * 00000001406BC189: jmp     loc_1406BC3FF
 * 00000001406BC18E: test    cs:KiKvaShadow, 1
 * 00000001406BC195: jnz     short loc_1406BC19A
 * 00000001406BC197: swapgs
 * 00000001406BC19A: lfence
 * 00000001406BC19D: mov     rcx, gs:9D28h
 * 00000001406BC1A6: test    rcx, rcx
 * 00000001406BC1A9: jz      short loc_1406BC1CA
 * 00000001406BC1AB: rdsspq  rdx
 * 00000001406BC1B0: mov     r10, gs:9D20h
 * 00000001406BC1B9: add     r10, 8
 * 00000001406BC1BD: cmp     rdx, r10
 * 00000001406BC1C0: jnz     short loc_1406BC1CA
 * 00000001406BC1C2: rstorssp qword ptr [rcx]
 * 00000001406BC1C6: saveprevssp
 * 00000001406BC1CA: mov     r10, gs:188h
 * 00000001406BC1D3: mov     rcx, gs:188h
 * 00000001406BC1DC: mov     rcx, [rcx+220h]
 * 00000001406BC1E3: mov     rcx, [rcx+760h]
 * 00000001406BC1EA: mov     gs:850h, rcx
 * 00000001406BC1F3: mov     cx, gs:862h
 * 00000001406BC1FC: mov     gs:864h, cx
 * 00000001406BC205: mov     cl, gs:858h
 * 00000001406BC20D: mov     gs:85Ah, cl
 * 00000001406BC215: movzx   eax, word ptr gs:868h
 * 00000001406BC21E: cmp     gs:866h, ax
 * 00000001406BC227: jz      short loc_1406BC23B
 * 00000001406BC229: mov     gs:866h, ax
 * 00000001406BC232: mov     ecx, 48h ; 'H'
 * 00000001406BC237: xor     edx, edx
 * 00000001406BC239: wrmsr
 * 00000001406BC23B: movzx   edx, byte ptr gs:858h
 * 00000001406BC244: test    edx, 8
 * 00000001406BC24A: jz      short loc_1406BC263
 * 00000001406BC24C: mov     eax, 1
 * 00000001406BC251: xor     edx, edx
 * 00000001406BC253: mov     ecx, 49h ; 'I'
 * 00000001406BC258: wrmsr
 * 00000001406BC25A: movzx   edx, byte ptr gs:858h
 * 00000001406BC263: test    edx, 2
 * 00000001406BC269: jz      loc_1406BC3A6
 * 00000001406BC26F: call    loc_1406BC382
 * 00000001406BC274: add     rsp, 8
 * 00000001406BC278: call    loc_1406BC38B
 * 00000001406BC27D: add     rsp, 8
 * 00000001406BC281: call    loc_1406BC274
 * 00000001406BC286: add     rsp, 8
 * 00000001406BC28A: call    loc_1406BC27D
 * 00000001406BC28F: add     rsp, 8
 * 00000001406BC293: call    loc_1406BC286
 * 00000001406BC298: add     rsp, 8
 * 00000001406BC29C: call    loc_1406BC28F
 * 00000001406BC2A1: add     rsp, 8
 * 00000001406BC2A5: call    loc_1406BC298
 * 00000001406BC2AA: add     rsp, 8
 * 00000001406BC2AE: call    loc_1406BC2A1
 * 00000001406BC2B3: add     rsp, 8
 * 00000001406BC2B7: call    loc_1406BC2AA
 * 00000001406BC2BC: add     rsp, 8
 * 00000001406BC2C0: call    loc_1406BC2B3
 * 00000001406BC2C5: add     rsp, 8
 * 00000001406BC2C9: call    loc_1406BC2BC
 * 00000001406BC2CE: add     rsp, 8
 * 00000001406BC2D2: call    loc_1406BC2C5
 * 00000001406BC2D7: add     rsp, 8
 * 00000001406BC2DB: call    loc_1406BC2CE
 * 00000001406BC2E0: add     rsp, 8
 * 00000001406BC2E4: call    loc_1406BC2D7
 * 00000001406BC2E9: add     rsp, 8
 * 00000001406BC2ED: call    loc_1406BC2E0
 * 00000001406BC2F2: add     rsp, 8
 * 00000001406BC2F6: call    loc_1406BC2E9
 * 00000001406BC2FB: add     rsp, 8
 * 00000001406BC2FF: call    loc_1406BC2F2
 * 00000001406BC304: add     rsp, 8
 * 00000001406BC308: call    loc_1406BC2FB
 * 00000001406BC30D: add     rsp, 8
 * 00000001406BC311: call    loc_1406BC304
 * 00000001406BC316: add     rsp, 8
 * 00000001406BC31A: call    loc_1406BC30D
 * 00000001406BC31F: add     rsp, 8
 * 00000001406BC323: call    loc_1406BC316
 * 00000001406BC328: add     rsp, 8
 * 00000001406BC32C: call    loc_1406BC31F
 * 00000001406BC331: add     rsp, 8
 * 00000001406BC335: call    loc_1406BC328
 * 00000001406BC33A: add     rsp, 8
 * 00000001406BC33E: call    loc_1406BC331
 * 00000001406BC343: add     rsp, 8
 * 00000001406BC347: call    loc_1406BC33A
 * 00000001406BC34C: add     rsp, 8
 * 00000001406BC350: call    loc_1406BC343
 * 00000001406BC355: add     rsp, 8
 * 00000001406BC359: call    loc_1406BC34C
 * 00000001406BC35E: add     rsp, 8
 * 00000001406BC362: call    loc_1406BC355
 * 00000001406BC367: add     rsp, 8
 * 00000001406BC36B: call    loc_1406BC35E
 * 00000001406BC370: add     rsp, 8
 * 00000001406BC374: call    loc_1406BC367
 * 00000001406BC379: add     rsp, 8
 * 00000001406BC37D: call    loc_1406BC370
 * 00000001406BC382: add     rsp, 8
 * 00000001406BC386: call    loc_1406BC379
 * 00000001406BC38B: add     rsp, 8
 * 00000001406BC38F: mov     eax, 0DADAh
 * 00000001406BC394: test    byte ptr gs:85Ch, 8
 * 00000001406BC39D: jz      short loc_1406BC3A6
 * 00000001406BC39F: mov     al, 20h ; ' '
 * 00000001406BC3A1: incsspq rax
 * 00000001406BC3A6: test    edx, 80h
 * 00000001406BC3AC: jz      short loc_1406BC3B6
 * 00000001406BC3AE: lfence
 * 00000001406BC3B1: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BC3B6: lfence
 * 00000001406BC3B9: mov     byte ptr gs:85Eh, 0
 * 00000001406BC3C2: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BC3C9: jz      short loc_1406BC3EA
 * 00000001406BC3CB: mov     ecx, 6A7h
 * 00000001406BC3D0: rdmsr
 * 00000001406BC3D2: cmp     edx, 0
 * 00000001406BC3D5: jz      short loc_1406BC3EA
 * 00000001406BC3D7: mov     ecx, edx
 * 00000001406BC3D9: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BC3DF: cmp     edx, ecx
 * 00000001406BC3E1: jz      short loc_1406BC3EA
 * 00000001406BC3E3: mov     ecx, 6A7h
 * 00000001406BC3E8: wrmsr
 * 00000001406BC3EA: test    byte ptr [r10+3], 3
 * 00000001406BC3EF: mov     word ptr [rbp+80h], 0
 * 00000001406BC3F8: jz      short loc_1406BC3FF
 * 00000001406BC3FA: call    KiSaveDebugRegisterState
 * 00000001406BC3FF: cld
 * 00000001406BC400: stmxcsr dword ptr [rbp-54h]
 * 00000001406BC404: ldmxcsr dword ptr gs:180h
 * 00000001406BC40D: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BC411: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BC415: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BC419: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BC41D: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BC421: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BC425: test    byte ptr [rbp+0F0h], 1
 * 00000001406BC42C: jz      short loc_1406BC433
 * 00000001406BC42E: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BC433: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BC43A: jz      short loc_1406BC448
 * 00000001406BC43C: test    byte ptr [rbp+0F0h], 1
 * 00000001406BC443: jz      short loc_1406BC448
 * 00000001406BC445: stac
 * 00000001406BC448: sub     rsp, 30h
 * 00000001406BC44C: movdqa  xmm0, xmmword ptr gs:8860h
 * 00000001406BC456: movdqa  [rsp+198h+var_178], xmm0
 * 00000001406BC45C: pxor    xmm0, xmm0
 * 00000001406BC460: movdqa  xmmword ptr gs:8860h, xmm0
 * 00000001406BC46A: bt      dword ptr [rbp+0F8h], 9
 * 00000001406BC472: jnb     short loc_1406BC475
 * 00000001406BC474: sti
 * 00000001406BC475: lea     rcx, [rsp+198h+var_178]
 * 00000001406BC47A: call    KiMcheckAlternateReturn
 * 00000001406BC47F: cli
 * 00000001406BC480: test    byte ptr [rbp+0F0h], 1
 * 00000001406BC487: jz      loc_1406BC782
 * 00000001406BC48D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BC494: jz      short loc_1406BC499
 * 00000001406BC496: stac
 * 00000001406BC499: mov     rcx, gs:188h
 * 00000001406BC4A2: test    byte ptr [rcx+0C2h], 3
 * 00000001406BC4A9: jz      short loc_1406BC4C6
 * 00000001406BC4AB: mov     ecx, 1
 * 00000001406BC4B0: mov     cr8, rcx
 * 00000001406BC4B4: sti
 * 00000001406BC4B5: call    KiInitiateUserApc
 * 00000001406BC4BA: cli
 * 00000001406BC4BB: mov     ecx, 0
 * 00000001406BC4C0: mov     cr8, rcx
 * 00000001406BC4C4: jmp     short loc_1406BC499
 * 00000001406BC4C6: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BC4CB: test    eax, eax
 * 00000001406BC4CD: mov     rax, [rbp-50h]
 * 00000001406BC4D1: jnz     short loc_1406BC499
 * 00000001406BC4D3: test    byte ptr gs:860h, 2
 * 00000001406BC4DC: jz      short loc_1406BC4E5
 * 00000001406BC4DE: xor     ecx, ecx
 * 00000001406BC4E0: call    KiUpdateStibpPairing
 * 00000001406BC4E5: mov     rcx, gs:188h
 * 00000001406BC4EE: test    dword ptr [rcx], 8000000h
 * 00000001406BC4F4: jz      short loc_1406BC4FB
 * 00000001406BC4F6: call    KiRestoreSetContextState
 * 00000001406BC4FB: mov     rcx, gs:188h
 * 00000001406BC504: test    dword ptr [rcx], 10000h
 * 00000001406BC50A: jz      short loc_1406BC520
 * 00000001406BC50C: test    byte ptr [rcx+2], 1
 * 00000001406BC510: jz      short loc_1406BC520
 * 00000001406BC512: call    KiCopyCounters
 * 00000001406BC517: mov     rcx, gs:188h
 * 00000001406BC520: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BC524: cmp     word ptr [rbp+80h], 0
 * 00000001406BC52C: jz      short loc_1406BC533
 * 00000001406BC52E: call    KiRestoreDebugRegisterState
 * 00000001406BC533: mov     rcx, gs:188h
 * 00000001406BC53C: bt      dword ptr [rcx+74h], 16h
 * 00000001406BC541: jnb     short loc_1406BC56D
 * 00000001406BC543: xor     ecx, ecx
 * 00000001406BC545: rdsspq  rcx
 * 00000001406BC54A: mov     r8, gs:9D28h
 * 00000001406BC553: add     r8, 8
 * 00000001406BC557: cmp     rcx, r8
 * 00000001406BC55A: jnz     short loc_1406BC56D
 * 00000001406BC55C: mov     rcx, gs:9D20h
 * 00000001406BC565: rstorssp qword ptr [rcx]
 * 00000001406BC569: saveprevssp
 * 00000001406BC56D: mov     byte ptr gs:85Eh, 0
 * 00000001406BC576: movzx   eax, word ptr gs:86Ch
 * 00000001406BC57F: cmp     gs:866h, ax
 * 00000001406BC588: jz      short loc_1406BC59C
 * 00000001406BC58A: mov     gs:866h, ax
 * 00000001406BC593: mov     ecx, 48h ; 'H'
 * 00000001406BC598: xor     edx, edx
 * 00000001406BC59A: wrmsr
 * 00000001406BC59C: btr     word ptr gs:858h, 2
 * 00000001406BC5A7: jnb     short loc_1406BC5B7
 * 00000001406BC5A9: mov     eax, 1
 * 00000001406BC5AE: xor     edx, edx
 * 00000001406BC5B0: mov     ecx, 49h ; 'I'
 * 00000001406BC5B5: wrmsr
 * 00000001406BC5B7: btr     word ptr gs:858h, 5
 * 00000001406BC5C2: jnb     loc_1406BC6FF
 * 00000001406BC5C8: call    loc_1406BC6DB
 * 00000001406BC5CD: add     rsp, 8
 * 00000001406BC5D1: call    loc_1406BC6E4
 * 00000001406BC5D6: add     rsp, 8
 * 00000001406BC5DA: call    loc_1406BC5CD
 * 00000001406BC5DF: add     rsp, 8
 * 00000001406BC5E3: call    loc_1406BC5D6
 * 00000001406BC5E8: add     rsp, 8
 * 00000001406BC5EC: call    loc_1406BC5DF
 * 00000001406BC5F1: add     rsp, 8
 * 00000001406BC5F5: call    loc_1406BC5E8
 * 00000001406BC5FA: add     rsp, 8
 * 00000001406BC5FE: call    loc_1406BC5F1
 * 00000001406BC603: add     rsp, 8
 * 00000001406BC607: call    loc_1406BC5FA
 * 00000001406BC60C: add     rsp, 8
 * 00000001406BC610: call    loc_1406BC603
 * 00000001406BC615: add     rsp, 8
 * 00000001406BC619: call    loc_1406BC60C
 * 00000001406BC61E: add     rsp, 8
 * 00000001406BC622: call    loc_1406BC615
 * 00000001406BC627: add     rsp, 8
 * 00000001406BC62B: call    loc_1406BC61E
 * 00000001406BC630: add     rsp, 8
 * 00000001406BC634: call    loc_1406BC627
 * 00000001406BC639: add     rsp, 8
 * 00000001406BC63D: call    loc_1406BC630
 * 00000001406BC642: add     rsp, 8
 * 00000001406BC646: call    loc_1406BC639
 * 00000001406BC64B: add     rsp, 8
 * 00000001406BC64F: call    loc_1406BC642
 * 00000001406BC654: add     rsp, 8
 * 00000001406BC658: call    loc_1406BC64B
 * 00000001406BC65D: add     rsp, 8
 * 00000001406BC661: call    loc_1406BC654
 * 00000001406BC666: add     rsp, 8
 * 00000001406BC66A: call    loc_1406BC65D
 * 00000001406BC66F: add     rsp, 8
 * 00000001406BC673: call    loc_1406BC666
 * 00000001406BC678: add     rsp, 8
 * 00000001406BC67C: call    loc_1406BC66F
 * 00000001406BC681: add     rsp, 8
 * 00000001406BC685: call    loc_1406BC678
 * 00000001406BC68A: add     rsp, 8
 * 00000001406BC68E: call    loc_1406BC681
 * 00000001406BC693: add     rsp, 8
 * 00000001406BC697: call    loc_1406BC68A
 * 00000001406BC69C: add     rsp, 8
 * 00000001406BC6A0: call    loc_1406BC693
 * 00000001406BC6A5: add     rsp, 8
 * 00000001406BC6A9: call    loc_1406BC69C
 * 00000001406BC6AE: add     rsp, 8
 * 00000001406BC6B2: call    loc_1406BC6A5
 * 00000001406BC6B7: add     rsp, 8
 * 00000001406BC6BB: call    loc_1406BC6AE
 * 00000001406BC6C0: add     rsp, 8
 * 00000001406BC6C4: call    loc_1406BC6B7
 * 00000001406BC6C9: add     rsp, 8
 * 00000001406BC6CD: call    loc_1406BC6C0
 * 00000001406BC6D2: add     rsp, 8
 * 00000001406BC6D6: call    loc_1406BC6C9
 * 00000001406BC6DB: add     rsp, 8
 * 00000001406BC6DF: call    loc_1406BC6D2
 * 00000001406BC6E4: add     rsp, 8
 * 00000001406BC6E8: mov     eax, 0DADAh
 * 00000001406BC6ED: test    byte ptr gs:85Ch, 8
 * 00000001406BC6F6: jz      short loc_1406BC6FF
 * 00000001406BC6F8: mov     al, 20h ; ' '
 * 00000001406BC6FA: incsspq rax
 * 00000001406BC6FF: test    word ptr gs:858h, 100h
 * 00000001406BC70A: jz      short loc_1406BC718
 * 00000001406BC70C: xor     eax, eax
 * 00000001406BC70E: xor     edx, edx
 * 00000001406BC710: mov     ecx, 1
 * 00000001406BC715: div     rcx
 * 00000001406BC718: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406BC71C: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406BC720: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406BC724: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406BC728: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406BC72C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406BC730: mov     r11, [rbp-20h]
 * 00000001406BC734: mov     r10, [rbp-28h]
 * 00000001406BC738: mov     r9, [rbp-30h]
 * 00000001406BC73C: mov     r8, [rbp-38h]
 * 00000001406BC740: mov     rdx, [rbp-40h]
 * 00000001406BC744: mov     rcx, [rbp-48h]
 * 00000001406BC748: mov     rax, [rbp-50h]
 * 00000001406BC74C: mov     rsp, rbp
 * 00000001406BC74F: mov     rbp, [rbp+0D8h]
 * 00000001406BC756: add     rsp, 0E8h
 * 00000001406BC75D: test    cs:KiKvaShadow, 1
 * 00000001406BC764: jz      short loc_1406BC76B
 * 00000001406BC766: jmp     KiKernelExit
 * 00000001406BC76B: test    word ptr gs:858h, 200h
 * 00000001406BC776: jz      short loc_1406BC77D
 * 00000001406BC778: verw    [rsp-50h+arg_68]
 * 00000001406BC77D: swapgs
 * 00000001406BC780: iretq
 * 00000001406BC782: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BC786: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406BC78A: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406BC78E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406BC792: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406BC796: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406BC79A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406BC79E: mov     r11, [rbp-20h]
 * 00000001406BC7A2: mov     r10, [rbp-28h]
 * 00000001406BC7A6: mov     r9, [rbp-30h]
 * 00000001406BC7AA: mov     r8, [rbp-38h]
 * 00000001406BC7AE: mov     rdx, [rbp-40h]
 * 00000001406BC7B2: mov     rcx, [rbp-48h]
 * 00000001406BC7B6: mov     rax, [rbp-50h]
 * 00000001406BC7BA: mov     rsp, rbp
 * 00000001406BC7BD: mov     rbp, [rbp+0D8h]
 * 00000001406BC7C4: add     rsp, 0E8h
 * 00000001406BC7CB: iretq
 */
