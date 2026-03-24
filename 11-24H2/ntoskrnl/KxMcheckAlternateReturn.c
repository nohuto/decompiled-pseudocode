/*
 * XREFs of KxMcheckAlternateReturn @ 0x1406BB200
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140BBBA40 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x1405C9C80 (KiMcheckAlternateReturn.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x1406BB200 (KxMcheckAlternateReturn.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxMcheckAlternateReturn @ 0x1406BB200
 * Reason: Hex-Rays returned no pseudocode for 0x1406BB200
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BB200: test    cs:KiKernelCetEnabled, 1
 * 00000001406BB207: jz      short loc_1406BB219
 * 00000001406BB209: push    rdx
 * 00000001406BB20A: rdsspq  rdx
 * 00000001406BB20F: test    rdx, rdx
 * 00000001406BB212: pop     rdx
 * 00000001406BB213: jnz     short loc_1406BB219
 * 00000001406BB215: setssbsy
 * 00000001406BB219: sub     rsp, 8
 * 00000001406BB21D: push    rbp
 * 00000001406BB21E: sub     rsp, 158h
 * 00000001406BB225: lea     rbp, [rsp+168h+var_E8]
 * 00000001406BB22D: mov     byte ptr [rbp-55h], 1
 * 00000001406BB231: mov     [rbp-50h], rax
 * 00000001406BB235: mov     [rbp-48h], rcx
 * 00000001406BB239: mov     [rbp-40h], rdx
 * 00000001406BB23D: mov     [rbp-38h], r8
 * 00000001406BB241: mov     [rbp-30h], r9
 * 00000001406BB245: mov     [rbp-28h], r10
 * 00000001406BB249: mov     [rbp-20h], r11
 * 00000001406BB24D: test    byte ptr [rbp+0F0h], 1
 * 00000001406BB254: jnz     short loc_1406BB28E
 * 00000001406BB256: xor     edx, edx
 * 00000001406BB258: rdsspq  rdx
 * 00000001406BB25D: mov     [rbp+58h], rdx
 * 00000001406BB261: lfence
 * 00000001406BB264: test    byte ptr gs:858h, 1
 * 00000001406BB26D: jnz     short loc_1406BB277
 * 00000001406BB26F: lfence
 * 00000001406BB272: jmp     loc_1406BB4FF
 * 00000001406BB277: movzx   eax, word ptr gs:866h
 * 00000001406BB280: mov     ecx, 48h ; 'H'
 * 00000001406BB285: xor     edx, edx
 * 00000001406BB287: wrmsr
 * 00000001406BB289: jmp     loc_1406BB4FF
 * 00000001406BB28E: test    cs:KiKvaShadow, 1
 * 00000001406BB295: jnz     short loc_1406BB29A
 * 00000001406BB297: swapgs
 * 00000001406BB29A: lfence
 * 00000001406BB29D: mov     rcx, gs:9D28h
 * 00000001406BB2A6: test    rcx, rcx
 * 00000001406BB2A9: jz      short loc_1406BB2CA
 * 00000001406BB2AB: rdsspq  rdx
 * 00000001406BB2B0: mov     r10, gs:9D20h
 * 00000001406BB2B9: add     r10, 8
 * 00000001406BB2BD: cmp     rdx, r10
 * 00000001406BB2C0: jnz     short loc_1406BB2CA
 * 00000001406BB2C2: rstorssp qword ptr [rcx]
 * 00000001406BB2C6: saveprevssp
 * 00000001406BB2CA: mov     r10, gs:188h
 * 00000001406BB2D3: mov     rcx, gs:188h
 * 00000001406BB2DC: mov     rcx, [rcx+220h]
 * 00000001406BB2E3: mov     rcx, [rcx+760h]
 * 00000001406BB2EA: mov     gs:850h, rcx
 * 00000001406BB2F3: mov     cx, gs:862h
 * 00000001406BB2FC: mov     gs:864h, cx
 * 00000001406BB305: mov     cl, gs:858h
 * 00000001406BB30D: mov     gs:85Ah, cl
 * 00000001406BB315: movzx   eax, word ptr gs:868h
 * 00000001406BB31E: cmp     gs:866h, ax
 * 00000001406BB327: jz      short loc_1406BB33B
 * 00000001406BB329: mov     gs:866h, ax
 * 00000001406BB332: mov     ecx, 48h ; 'H'
 * 00000001406BB337: xor     edx, edx
 * 00000001406BB339: wrmsr
 * 00000001406BB33B: movzx   edx, byte ptr gs:858h
 * 00000001406BB344: test    edx, 8
 * 00000001406BB34A: jz      short loc_1406BB363
 * 00000001406BB34C: mov     eax, 1
 * 00000001406BB351: xor     edx, edx
 * 00000001406BB353: mov     ecx, 49h ; 'I'
 * 00000001406BB358: wrmsr
 * 00000001406BB35A: movzx   edx, byte ptr gs:858h
 * 00000001406BB363: test    edx, 2
 * 00000001406BB369: jz      loc_1406BB4A6
 * 00000001406BB36F: call    loc_1406BB482
 * 00000001406BB374: add     rsp, 8
 * 00000001406BB378: call    loc_1406BB48B
 * 00000001406BB37D: add     rsp, 8
 * 00000001406BB381: call    loc_1406BB374
 * 00000001406BB386: add     rsp, 8
 * 00000001406BB38A: call    loc_1406BB37D
 * 00000001406BB38F: add     rsp, 8
 * 00000001406BB393: call    loc_1406BB386
 * 00000001406BB398: add     rsp, 8
 * 00000001406BB39C: call    loc_1406BB38F
 * 00000001406BB3A1: add     rsp, 8
 * 00000001406BB3A5: call    loc_1406BB398
 * 00000001406BB3AA: add     rsp, 8
 * 00000001406BB3AE: call    loc_1406BB3A1
 * 00000001406BB3B3: add     rsp, 8
 * 00000001406BB3B7: call    loc_1406BB3AA
 * 00000001406BB3BC: add     rsp, 8
 * 00000001406BB3C0: call    loc_1406BB3B3
 * 00000001406BB3C5: add     rsp, 8
 * 00000001406BB3C9: call    loc_1406BB3BC
 * 00000001406BB3CE: add     rsp, 8
 * 00000001406BB3D2: call    loc_1406BB3C5
 * 00000001406BB3D7: add     rsp, 8
 * 00000001406BB3DB: call    loc_1406BB3CE
 * 00000001406BB3E0: add     rsp, 8
 * 00000001406BB3E4: call    loc_1406BB3D7
 * 00000001406BB3E9: add     rsp, 8
 * 00000001406BB3ED: call    loc_1406BB3E0
 * 00000001406BB3F2: add     rsp, 8
 * 00000001406BB3F6: call    loc_1406BB3E9
 * 00000001406BB3FB: add     rsp, 8
 * 00000001406BB3FF: call    loc_1406BB3F2
 * 00000001406BB404: add     rsp, 8
 * 00000001406BB408: call    loc_1406BB3FB
 * 00000001406BB40D: add     rsp, 8
 * 00000001406BB411: call    loc_1406BB404
 * 00000001406BB416: add     rsp, 8
 * 00000001406BB41A: call    loc_1406BB40D
 * 00000001406BB41F: add     rsp, 8
 * 00000001406BB423: call    loc_1406BB416
 * 00000001406BB428: add     rsp, 8
 * 00000001406BB42C: call    loc_1406BB41F
 * 00000001406BB431: add     rsp, 8
 * 00000001406BB435: call    loc_1406BB428
 * 00000001406BB43A: add     rsp, 8
 * 00000001406BB43E: call    loc_1406BB431
 * 00000001406BB443: add     rsp, 8
 * 00000001406BB447: call    loc_1406BB43A
 * 00000001406BB44C: add     rsp, 8
 * 00000001406BB450: call    loc_1406BB443
 * 00000001406BB455: add     rsp, 8
 * 00000001406BB459: call    loc_1406BB44C
 * 00000001406BB45E: add     rsp, 8
 * 00000001406BB462: call    loc_1406BB455
 * 00000001406BB467: add     rsp, 8
 * 00000001406BB46B: call    loc_1406BB45E
 * 00000001406BB470: add     rsp, 8
 * 00000001406BB474: call    loc_1406BB467
 * 00000001406BB479: add     rsp, 8
 * 00000001406BB47D: call    loc_1406BB470
 * 00000001406BB482: add     rsp, 8
 * 00000001406BB486: call    loc_1406BB479
 * 00000001406BB48B: add     rsp, 8
 * 00000001406BB48F: mov     eax, 0DADAh
 * 00000001406BB494: test    byte ptr gs:85Ch, 8
 * 00000001406BB49D: jz      short loc_1406BB4A6
 * 00000001406BB49F: mov     al, 20h ; ' '
 * 00000001406BB4A1: incsspq rax
 * 00000001406BB4A6: test    edx, 80h
 * 00000001406BB4AC: jz      short loc_1406BB4B6
 * 00000001406BB4AE: lfence
 * 00000001406BB4B1: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BB4B6: lfence
 * 00000001406BB4B9: mov     byte ptr gs:85Eh, 0
 * 00000001406BB4C2: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BB4C9: jz      short loc_1406BB4EA
 * 00000001406BB4CB: mov     ecx, 6A7h
 * 00000001406BB4D0: rdmsr
 * 00000001406BB4D2: cmp     edx, 0
 * 00000001406BB4D5: jz      short loc_1406BB4EA
 * 00000001406BB4D7: mov     ecx, edx
 * 00000001406BB4D9: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BB4DF: cmp     edx, ecx
 * 00000001406BB4E1: jz      short loc_1406BB4EA
 * 00000001406BB4E3: mov     ecx, 6A7h
 * 00000001406BB4E8: wrmsr
 * 00000001406BB4EA: test    byte ptr [r10+3], 3
 * 00000001406BB4EF: mov     word ptr [rbp+80h], 0
 * 00000001406BB4F8: jz      short loc_1406BB4FF
 * 00000001406BB4FA: call    KiSaveDebugRegisterState
 * 00000001406BB4FF: cld
 * 00000001406BB500: stmxcsr dword ptr [rbp-54h]
 * 00000001406BB504: ldmxcsr dword ptr gs:180h
 * 00000001406BB50D: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BB511: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BB515: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BB519: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BB51D: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BB521: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BB525: test    byte ptr [rbp+0F0h], 1
 * 00000001406BB52C: jz      short loc_1406BB533
 * 00000001406BB52E: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BB533: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BB53A: jz      short loc_1406BB548
 * 00000001406BB53C: test    byte ptr [rbp+0F0h], 1
 * 00000001406BB543: jz      short loc_1406BB548
 * 00000001406BB545: stac
 * 00000001406BB548: sub     rsp, 30h
 * 00000001406BB54C: movdqa  xmm0, xmmword ptr gs:8860h
 * 00000001406BB556: movdqa  [rsp+198h+var_178], xmm0
 * 00000001406BB55C: pxor    xmm0, xmm0
 * 00000001406BB560: movdqa  xmmword ptr gs:8860h, xmm0
 * 00000001406BB56A: bt      dword ptr [rbp+0F8h], 9
 * 00000001406BB572: jnb     short loc_1406BB575
 * 00000001406BB574: sti
 * 00000001406BB575: lea     rcx, [rsp+198h+var_178]
 * 00000001406BB57A: call    KiMcheckAlternateReturn
 * 00000001406BB57F: cli
 * 00000001406BB580: test    byte ptr [rbp+0F0h], 1
 * 00000001406BB587: jz      loc_1406BB882
 * 00000001406BB58D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BB594: jz      short loc_1406BB599
 * 00000001406BB596: stac
 * 00000001406BB599: mov     rcx, gs:188h
 * 00000001406BB5A2: test    byte ptr [rcx+0C2h], 3
 * 00000001406BB5A9: jz      short loc_1406BB5C6
 * 00000001406BB5AB: mov     ecx, 1
 * 00000001406BB5B0: mov     cr8, rcx
 * 00000001406BB5B4: sti
 * 00000001406BB5B5: call    KiInitiateUserApc
 * 00000001406BB5BA: cli
 * 00000001406BB5BB: mov     ecx, 0
 * 00000001406BB5C0: mov     cr8, rcx
 * 00000001406BB5C4: jmp     short loc_1406BB599
 * 00000001406BB5C6: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BB5CB: test    eax, eax
 * 00000001406BB5CD: mov     rax, [rbp-50h]
 * 00000001406BB5D1: jnz     short loc_1406BB599
 * 00000001406BB5D3: test    byte ptr gs:860h, 2
 * 00000001406BB5DC: jz      short loc_1406BB5E5
 * 00000001406BB5DE: xor     ecx, ecx
 * 00000001406BB5E0: call    KiUpdateStibpPairing
 * 00000001406BB5E5: mov     rcx, gs:188h
 * 00000001406BB5EE: test    dword ptr [rcx], 8000000h
 * 00000001406BB5F4: jz      short loc_1406BB5FB
 * 00000001406BB5F6: call    KiRestoreSetContextState
 * 00000001406BB5FB: mov     rcx, gs:188h
 * 00000001406BB604: test    dword ptr [rcx], 10000h
 * 00000001406BB60A: jz      short loc_1406BB620
 * 00000001406BB60C: test    byte ptr [rcx+2], 1
 * 00000001406BB610: jz      short loc_1406BB620
 * 00000001406BB612: call    KiCopyCounters
 * 00000001406BB617: mov     rcx, gs:188h
 * 00000001406BB620: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BB624: cmp     word ptr [rbp+80h], 0
 * 00000001406BB62C: jz      short loc_1406BB633
 * 00000001406BB62E: call    KiRestoreDebugRegisterState
 * 00000001406BB633: mov     rcx, gs:188h
 * 00000001406BB63C: bt      dword ptr [rcx+74h], 16h
 * 00000001406BB641: jnb     short loc_1406BB66D
 * 00000001406BB643: xor     ecx, ecx
 * 00000001406BB645: rdsspq  rcx
 * 00000001406BB64A: mov     r8, gs:9D28h
 * 00000001406BB653: add     r8, 8
 * 00000001406BB657: cmp     rcx, r8
 * 00000001406BB65A: jnz     short loc_1406BB66D
 * 00000001406BB65C: mov     rcx, gs:9D20h
 * 00000001406BB665: rstorssp qword ptr [rcx]
 * 00000001406BB669: saveprevssp
 * 00000001406BB66D: mov     byte ptr gs:85Eh, 0
 * 00000001406BB676: movzx   eax, word ptr gs:86Ch
 * 00000001406BB67F: cmp     gs:866h, ax
 * 00000001406BB688: jz      short loc_1406BB69C
 * 00000001406BB68A: mov     gs:866h, ax
 * 00000001406BB693: mov     ecx, 48h ; 'H'
 * 00000001406BB698: xor     edx, edx
 * 00000001406BB69A: wrmsr
 * 00000001406BB69C: btr     word ptr gs:858h, 2
 * 00000001406BB6A7: jnb     short loc_1406BB6B7
 * 00000001406BB6A9: mov     eax, 1
 * 00000001406BB6AE: xor     edx, edx
 * 00000001406BB6B0: mov     ecx, 49h ; 'I'
 * 00000001406BB6B5: wrmsr
 * 00000001406BB6B7: btr     word ptr gs:858h, 5
 * 00000001406BB6C2: jnb     loc_1406BB7FF
 * 00000001406BB6C8: call    loc_1406BB7DB
 * 00000001406BB6CD: add     rsp, 8
 * 00000001406BB6D1: call    loc_1406BB7E4
 * 00000001406BB6D6: add     rsp, 8
 * 00000001406BB6DA: call    loc_1406BB6CD
 * 00000001406BB6DF: add     rsp, 8
 * 00000001406BB6E3: call    loc_1406BB6D6
 * 00000001406BB6E8: add     rsp, 8
 * 00000001406BB6EC: call    loc_1406BB6DF
 * 00000001406BB6F1: add     rsp, 8
 * 00000001406BB6F5: call    loc_1406BB6E8
 * 00000001406BB6FA: add     rsp, 8
 * 00000001406BB6FE: call    loc_1406BB6F1
 * 00000001406BB703: add     rsp, 8
 * 00000001406BB707: call    loc_1406BB6FA
 * 00000001406BB70C: add     rsp, 8
 * 00000001406BB710: call    loc_1406BB703
 * 00000001406BB715: add     rsp, 8
 * 00000001406BB719: call    loc_1406BB70C
 * 00000001406BB71E: add     rsp, 8
 * 00000001406BB722: call    loc_1406BB715
 * 00000001406BB727: add     rsp, 8
 * 00000001406BB72B: call    loc_1406BB71E
 * 00000001406BB730: add     rsp, 8
 * 00000001406BB734: call    loc_1406BB727
 * 00000001406BB739: add     rsp, 8
 * 00000001406BB73D: call    loc_1406BB730
 * 00000001406BB742: add     rsp, 8
 * 00000001406BB746: call    loc_1406BB739
 * 00000001406BB74B: add     rsp, 8
 * 00000001406BB74F: call    loc_1406BB742
 * 00000001406BB754: add     rsp, 8
 * 00000001406BB758: call    loc_1406BB74B
 * 00000001406BB75D: add     rsp, 8
 * 00000001406BB761: call    loc_1406BB754
 * 00000001406BB766: add     rsp, 8
 * 00000001406BB76A: call    loc_1406BB75D
 * 00000001406BB76F: add     rsp, 8
 * 00000001406BB773: call    loc_1406BB766
 * 00000001406BB778: add     rsp, 8
 * 00000001406BB77C: call    loc_1406BB76F
 * 00000001406BB781: add     rsp, 8
 * 00000001406BB785: call    loc_1406BB778
 * 00000001406BB78A: add     rsp, 8
 * 00000001406BB78E: call    loc_1406BB781
 * 00000001406BB793: add     rsp, 8
 * 00000001406BB797: call    loc_1406BB78A
 * 00000001406BB79C: add     rsp, 8
 * 00000001406BB7A0: call    loc_1406BB793
 * 00000001406BB7A5: add     rsp, 8
 * 00000001406BB7A9: call    loc_1406BB79C
 * 00000001406BB7AE: add     rsp, 8
 * 00000001406BB7B2: call    loc_1406BB7A5
 * 00000001406BB7B7: add     rsp, 8
 * 00000001406BB7BB: call    loc_1406BB7AE
 * 00000001406BB7C0: add     rsp, 8
 * 00000001406BB7C4: call    loc_1406BB7B7
 * 00000001406BB7C9: add     rsp, 8
 * 00000001406BB7CD: call    loc_1406BB7C0
 * 00000001406BB7D2: add     rsp, 8
 * 00000001406BB7D6: call    loc_1406BB7C9
 * 00000001406BB7DB: add     rsp, 8
 * 00000001406BB7DF: call    loc_1406BB7D2
 * 00000001406BB7E4: add     rsp, 8
 * 00000001406BB7E8: mov     eax, 0DADAh
 * 00000001406BB7ED: test    byte ptr gs:85Ch, 8
 * 00000001406BB7F6: jz      short loc_1406BB7FF
 * 00000001406BB7F8: mov     al, 20h ; ' '
 * 00000001406BB7FA: incsspq rax
 * 00000001406BB7FF: test    word ptr gs:858h, 100h
 * 00000001406BB80A: jz      short loc_1406BB818
 * 00000001406BB80C: xor     eax, eax
 * 00000001406BB80E: xor     edx, edx
 * 00000001406BB810: mov     ecx, 1
 * 00000001406BB815: div     rcx
 * 00000001406BB818: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406BB81C: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406BB820: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406BB824: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406BB828: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406BB82C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406BB830: mov     r11, [rbp-20h]
 * 00000001406BB834: mov     r10, [rbp-28h]
 * 00000001406BB838: mov     r9, [rbp-30h]
 * 00000001406BB83C: mov     r8, [rbp-38h]
 * 00000001406BB840: mov     rdx, [rbp-40h]
 * 00000001406BB844: mov     rcx, [rbp-48h]
 * 00000001406BB848: mov     rax, [rbp-50h]
 * 00000001406BB84C: mov     rsp, rbp
 * 00000001406BB84F: mov     rbp, [rbp+0D8h]
 * 00000001406BB856: add     rsp, 0E8h
 * 00000001406BB85D: test    cs:KiKvaShadow, 1
 * 00000001406BB864: jz      short loc_1406BB86B
 * 00000001406BB866: jmp     KiKernelExit
 * 00000001406BB86B: test    word ptr gs:858h, 200h
 * 00000001406BB876: jz      short loc_1406BB87D
 * 00000001406BB878: verw    [rsp-50h+arg_68]
 * 00000001406BB87D: swapgs
 * 00000001406BB880: iretq
 * 00000001406BB882: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BB886: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406BB88A: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406BB88E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406BB892: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406BB896: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406BB89A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406BB89E: mov     r11, [rbp-20h]
 * 00000001406BB8A2: mov     r10, [rbp-28h]
 * 00000001406BB8A6: mov     r9, [rbp-30h]
 * 00000001406BB8AA: mov     r8, [rbp-38h]
 * 00000001406BB8AE: mov     rdx, [rbp-40h]
 * 00000001406BB8B2: mov     rcx, [rbp-48h]
 * 00000001406BB8B6: mov     rax, [rbp-50h]
 * 00000001406BB8BA: mov     rsp, rbp
 * 00000001406BB8BD: mov     rbp, [rbp+0D8h]
 * 00000001406BB8C4: add     rsp, 0E8h
 * 00000001406BB8CB: iretq
 */
