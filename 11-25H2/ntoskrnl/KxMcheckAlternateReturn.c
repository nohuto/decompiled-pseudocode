/*
 * XREFs of KxMcheckAlternateReturn @ 0x1406AFF00
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140BAAA40 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x1405C5660 (KiMcheckAlternateReturn.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x1406AFF00 (KxMcheckAlternateReturn.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxMcheckAlternateReturn @ 0x1406AFF00
 * Reason: Hex-Rays returned no pseudocode for 0x1406AFF00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AFF00: test    cs:KiKernelCetEnabled, 1
 * 00000001406AFF07: jz      short loc_1406AFF19
 * 00000001406AFF09: push    rdx
 * 00000001406AFF0A: rdsspq  rdx
 * 00000001406AFF0F: test    rdx, rdx
 * 00000001406AFF12: pop     rdx
 * 00000001406AFF13: jnz     short loc_1406AFF19
 * 00000001406AFF15: setssbsy
 * 00000001406AFF19: sub     rsp, 8
 * 00000001406AFF1D: push    rbp
 * 00000001406AFF1E: sub     rsp, 158h
 * 00000001406AFF25: lea     rbp, [rsp+168h+var_E8]
 * 00000001406AFF2D: mov     byte ptr [rbp-55h], 1
 * 00000001406AFF31: mov     [rbp-50h], rax
 * 00000001406AFF35: mov     [rbp-48h], rcx
 * 00000001406AFF39: mov     [rbp-40h], rdx
 * 00000001406AFF3D: mov     [rbp-38h], r8
 * 00000001406AFF41: mov     [rbp-30h], r9
 * 00000001406AFF45: mov     [rbp-28h], r10
 * 00000001406AFF49: mov     [rbp-20h], r11
 * 00000001406AFF4D: test    byte ptr [rbp+0F0h], 1
 * 00000001406AFF54: jnz     short loc_1406AFF8E
 * 00000001406AFF56: xor     edx, edx
 * 00000001406AFF58: rdsspq  rdx
 * 00000001406AFF5D: mov     [rbp+58h], rdx
 * 00000001406AFF61: lfence
 * 00000001406AFF64: test    byte ptr gs:858h, 1
 * 00000001406AFF6D: jnz     short loc_1406AFF77
 * 00000001406AFF6F: lfence
 * 00000001406AFF72: jmp     loc_1406B01FF
 * 00000001406AFF77: movzx   eax, word ptr gs:866h
 * 00000001406AFF80: mov     ecx, 48h ; 'H'
 * 00000001406AFF85: xor     edx, edx
 * 00000001406AFF87: wrmsr
 * 00000001406AFF89: jmp     loc_1406B01FF
 * 00000001406AFF8E: test    cs:KiKvaShadow, 1
 * 00000001406AFF95: jnz     short loc_1406AFF9A
 * 00000001406AFF97: swapgs
 * 00000001406AFF9A: lfence
 * 00000001406AFF9D: mov     rcx, gs:9D28h
 * 00000001406AFFA6: test    rcx, rcx
 * 00000001406AFFA9: jz      short loc_1406AFFCA
 * 00000001406AFFAB: rdsspq  rdx
 * 00000001406AFFB0: mov     r10, gs:9D20h
 * 00000001406AFFB9: add     r10, 8
 * 00000001406AFFBD: cmp     rdx, r10
 * 00000001406AFFC0: jnz     short loc_1406AFFCA
 * 00000001406AFFC2: rstorssp qword ptr [rcx]
 * 00000001406AFFC6: saveprevssp
 * 00000001406AFFCA: mov     r10, gs:188h
 * 00000001406AFFD3: mov     rcx, gs:188h
 * 00000001406AFFDC: mov     rcx, [rcx+220h]
 * 00000001406AFFE3: mov     rcx, [rcx+760h]
 * 00000001406AFFEA: mov     gs:850h, rcx
 * 00000001406AFFF3: mov     cx, gs:862h
 * 00000001406AFFFC: mov     gs:864h, cx
 * 00000001406B0005: mov     cl, gs:858h
 * 00000001406B000D: mov     gs:85Ah, cl
 * 00000001406B0015: movzx   eax, word ptr gs:868h
 * 00000001406B001E: cmp     gs:866h, ax
 * 00000001406B0027: jz      short loc_1406B003B
 * 00000001406B0029: mov     gs:866h, ax
 * 00000001406B0032: mov     ecx, 48h ; 'H'
 * 00000001406B0037: xor     edx, edx
 * 00000001406B0039: wrmsr
 * 00000001406B003B: movzx   edx, byte ptr gs:858h
 * 00000001406B0044: test    edx, 8
 * 00000001406B004A: jz      short loc_1406B0063
 * 00000001406B004C: mov     eax, 1
 * 00000001406B0051: xor     edx, edx
 * 00000001406B0053: mov     ecx, 49h ; 'I'
 * 00000001406B0058: wrmsr
 * 00000001406B005A: movzx   edx, byte ptr gs:858h
 * 00000001406B0063: test    edx, 2
 * 00000001406B0069: jz      loc_1406B01A6
 * 00000001406B006F: call    loc_1406B0182
 * 00000001406B0074: add     rsp, 8
 * 00000001406B0078: call    loc_1406B018B
 * 00000001406B007D: add     rsp, 8
 * 00000001406B0081: call    loc_1406B0074
 * 00000001406B0086: add     rsp, 8
 * 00000001406B008A: call    loc_1406B007D
 * 00000001406B008F: add     rsp, 8
 * 00000001406B0093: call    loc_1406B0086
 * 00000001406B0098: add     rsp, 8
 * 00000001406B009C: call    loc_1406B008F
 * 00000001406B00A1: add     rsp, 8
 * 00000001406B00A5: call    loc_1406B0098
 * 00000001406B00AA: add     rsp, 8
 * 00000001406B00AE: call    loc_1406B00A1
 * 00000001406B00B3: add     rsp, 8
 * 00000001406B00B7: call    loc_1406B00AA
 * 00000001406B00BC: add     rsp, 8
 * 00000001406B00C0: call    loc_1406B00B3
 * 00000001406B00C5: add     rsp, 8
 * 00000001406B00C9: call    loc_1406B00BC
 * 00000001406B00CE: add     rsp, 8
 * 00000001406B00D2: call    loc_1406B00C5
 * 00000001406B00D7: add     rsp, 8
 * 00000001406B00DB: call    loc_1406B00CE
 * 00000001406B00E0: add     rsp, 8
 * 00000001406B00E4: call    loc_1406B00D7
 * 00000001406B00E9: add     rsp, 8
 * 00000001406B00ED: call    loc_1406B00E0
 * 00000001406B00F2: add     rsp, 8
 * 00000001406B00F6: call    loc_1406B00E9
 * 00000001406B00FB: add     rsp, 8
 * 00000001406B00FF: call    loc_1406B00F2
 * 00000001406B0104: add     rsp, 8
 * 00000001406B0108: call    loc_1406B00FB
 * 00000001406B010D: add     rsp, 8
 * 00000001406B0111: call    loc_1406B0104
 * 00000001406B0116: add     rsp, 8
 * 00000001406B011A: call    loc_1406B010D
 * 00000001406B011F: add     rsp, 8
 * 00000001406B0123: call    loc_1406B0116
 * 00000001406B0128: add     rsp, 8
 * 00000001406B012C: call    loc_1406B011F
 * 00000001406B0131: add     rsp, 8
 * 00000001406B0135: call    loc_1406B0128
 * 00000001406B013A: add     rsp, 8
 * 00000001406B013E: call    loc_1406B0131
 * 00000001406B0143: add     rsp, 8
 * 00000001406B0147: call    loc_1406B013A
 * 00000001406B014C: add     rsp, 8
 * 00000001406B0150: call    loc_1406B0143
 * 00000001406B0155: add     rsp, 8
 * 00000001406B0159: call    loc_1406B014C
 * 00000001406B015E: add     rsp, 8
 * 00000001406B0162: call    loc_1406B0155
 * 00000001406B0167: add     rsp, 8
 * 00000001406B016B: call    loc_1406B015E
 * 00000001406B0170: add     rsp, 8
 * 00000001406B0174: call    loc_1406B0167
 * 00000001406B0179: add     rsp, 8
 * 00000001406B017D: call    loc_1406B0170
 * 00000001406B0182: add     rsp, 8
 * 00000001406B0186: call    loc_1406B0179
 * 00000001406B018B: add     rsp, 8
 * 00000001406B018F: mov     eax, 0DADAh
 * 00000001406B0194: test    byte ptr gs:85Ch, 8
 * 00000001406B019D: jz      short loc_1406B01A6
 * 00000001406B019F: mov     al, 20h ; ' '
 * 00000001406B01A1: incsspq rax
 * 00000001406B01A6: test    edx, 80h
 * 00000001406B01AC: jz      short loc_1406B01B6
 * 00000001406B01AE: lfence
 * 00000001406B01B1: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B01B6: lfence
 * 00000001406B01B9: mov     byte ptr gs:85Eh, 0
 * 00000001406B01C2: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B01C9: jz      short loc_1406B01EA
 * 00000001406B01CB: mov     ecx, 6A7h
 * 00000001406B01D0: rdmsr
 * 00000001406B01D2: cmp     edx, 0
 * 00000001406B01D5: jz      short loc_1406B01EA
 * 00000001406B01D7: mov     ecx, edx
 * 00000001406B01D9: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B01DF: cmp     edx, ecx
 * 00000001406B01E1: jz      short loc_1406B01EA
 * 00000001406B01E3: mov     ecx, 6A7h
 * 00000001406B01E8: wrmsr
 * 00000001406B01EA: test    byte ptr [r10+3], 3
 * 00000001406B01EF: mov     word ptr [rbp+80h], 0
 * 00000001406B01F8: jz      short loc_1406B01FF
 * 00000001406B01FA: call    KiSaveDebugRegisterState
 * 00000001406B01FF: cld
 * 00000001406B0200: stmxcsr dword ptr [rbp-54h]
 * 00000001406B0204: ldmxcsr dword ptr gs:180h
 * 00000001406B020D: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B0211: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B0215: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B0219: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B021D: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B0221: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B0225: test    byte ptr [rbp+0F0h], 1
 * 00000001406B022C: jz      short loc_1406B0233
 * 00000001406B022E: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B0233: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B023A: jz      short loc_1406B0248
 * 00000001406B023C: test    byte ptr [rbp+0F0h], 1
 * 00000001406B0243: jz      short loc_1406B0248
 * 00000001406B0245: stac
 * 00000001406B0248: sub     rsp, 30h
 * 00000001406B024C: movdqa  xmm0, xmmword ptr gs:8860h
 * 00000001406B0256: movdqa  [rsp+198h+var_178], xmm0
 * 00000001406B025C: pxor    xmm0, xmm0
 * 00000001406B0260: movdqa  xmmword ptr gs:8860h, xmm0
 * 00000001406B026A: bt      dword ptr [rbp+0F8h], 9
 * 00000001406B0272: jnb     short loc_1406B0275
 * 00000001406B0274: sti
 * 00000001406B0275: lea     rcx, [rsp+198h+var_178]
 * 00000001406B027A: call    KiMcheckAlternateReturn
 * 00000001406B027F: cli
 * 00000001406B0280: test    byte ptr [rbp+0F0h], 1
 * 00000001406B0287: jz      loc_1406B0582
 * 00000001406B028D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B0294: jz      short loc_1406B0299
 * 00000001406B0296: stac
 * 00000001406B0299: mov     rcx, gs:188h
 * 00000001406B02A2: test    byte ptr [rcx+0C2h], 3
 * 00000001406B02A9: jz      short loc_1406B02C6
 * 00000001406B02AB: mov     ecx, 1
 * 00000001406B02B0: mov     cr8, rcx
 * 00000001406B02B4: sti
 * 00000001406B02B5: call    KiInitiateUserApc
 * 00000001406B02BA: cli
 * 00000001406B02BB: mov     ecx, 0
 * 00000001406B02C0: mov     cr8, rcx
 * 00000001406B02C4: jmp     short loc_1406B0299
 * 00000001406B02C6: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B02CB: test    eax, eax
 * 00000001406B02CD: mov     rax, [rbp-50h]
 * 00000001406B02D1: jnz     short loc_1406B0299
 * 00000001406B02D3: test    byte ptr gs:860h, 2
 * 00000001406B02DC: jz      short loc_1406B02E5
 * 00000001406B02DE: xor     ecx, ecx
 * 00000001406B02E0: call    KiUpdateStibpPairing
 * 00000001406B02E5: mov     rcx, gs:188h
 * 00000001406B02EE: test    dword ptr [rcx], 8000000h
 * 00000001406B02F4: jz      short loc_1406B02FB
 * 00000001406B02F6: call    KiRestoreSetContextState
 * 00000001406B02FB: mov     rcx, gs:188h
 * 00000001406B0304: test    dword ptr [rcx], 10000h
 * 00000001406B030A: jz      short loc_1406B0320
 * 00000001406B030C: test    byte ptr [rcx+2], 1
 * 00000001406B0310: jz      short loc_1406B0320
 * 00000001406B0312: call    KiCopyCounters
 * 00000001406B0317: mov     rcx, gs:188h
 * 00000001406B0320: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B0324: cmp     word ptr [rbp+80h], 0
 * 00000001406B032C: jz      short loc_1406B0333
 * 00000001406B032E: call    KiRestoreDebugRegisterState
 * 00000001406B0333: mov     rcx, gs:188h
 * 00000001406B033C: bt      dword ptr [rcx+74h], 16h
 * 00000001406B0341: jnb     short loc_1406B036D
 * 00000001406B0343: xor     ecx, ecx
 * 00000001406B0345: rdsspq  rcx
 * 00000001406B034A: mov     r8, gs:9D28h
 * 00000001406B0353: add     r8, 8
 * 00000001406B0357: cmp     rcx, r8
 * 00000001406B035A: jnz     short loc_1406B036D
 * 00000001406B035C: mov     rcx, gs:9D20h
 * 00000001406B0365: rstorssp qword ptr [rcx]
 * 00000001406B0369: saveprevssp
 * 00000001406B036D: mov     byte ptr gs:85Eh, 0
 * 00000001406B0376: movzx   eax, word ptr gs:86Ch
 * 00000001406B037F: cmp     gs:866h, ax
 * 00000001406B0388: jz      short loc_1406B039C
 * 00000001406B038A: mov     gs:866h, ax
 * 00000001406B0393: mov     ecx, 48h ; 'H'
 * 00000001406B0398: xor     edx, edx
 * 00000001406B039A: wrmsr
 * 00000001406B039C: btr     word ptr gs:858h, 2
 * 00000001406B03A7: jnb     short loc_1406B03B7
 * 00000001406B03A9: mov     eax, 1
 * 00000001406B03AE: xor     edx, edx
 * 00000001406B03B0: mov     ecx, 49h ; 'I'
 * 00000001406B03B5: wrmsr
 * 00000001406B03B7: btr     word ptr gs:858h, 5
 * 00000001406B03C2: jnb     loc_1406B04FF
 * 00000001406B03C8: call    loc_1406B04DB
 * 00000001406B03CD: add     rsp, 8
 * 00000001406B03D1: call    loc_1406B04E4
 * 00000001406B03D6: add     rsp, 8
 * 00000001406B03DA: call    loc_1406B03CD
 * 00000001406B03DF: add     rsp, 8
 * 00000001406B03E3: call    loc_1406B03D6
 * 00000001406B03E8: add     rsp, 8
 * 00000001406B03EC: call    loc_1406B03DF
 * 00000001406B03F1: add     rsp, 8
 * 00000001406B03F5: call    loc_1406B03E8
 * 00000001406B03FA: add     rsp, 8
 * 00000001406B03FE: call    loc_1406B03F1
 * 00000001406B0403: add     rsp, 8
 * 00000001406B0407: call    loc_1406B03FA
 * 00000001406B040C: add     rsp, 8
 * 00000001406B0410: call    loc_1406B0403
 * 00000001406B0415: add     rsp, 8
 * 00000001406B0419: call    loc_1406B040C
 * 00000001406B041E: add     rsp, 8
 * 00000001406B0422: call    loc_1406B0415
 * 00000001406B0427: add     rsp, 8
 * 00000001406B042B: call    loc_1406B041E
 * 00000001406B0430: add     rsp, 8
 * 00000001406B0434: call    loc_1406B0427
 * 00000001406B0439: add     rsp, 8
 * 00000001406B043D: call    loc_1406B0430
 * 00000001406B0442: add     rsp, 8
 * 00000001406B0446: call    loc_1406B0439
 * 00000001406B044B: add     rsp, 8
 * 00000001406B044F: call    loc_1406B0442
 * 00000001406B0454: add     rsp, 8
 * 00000001406B0458: call    loc_1406B044B
 * 00000001406B045D: add     rsp, 8
 * 00000001406B0461: call    loc_1406B0454
 * 00000001406B0466: add     rsp, 8
 * 00000001406B046A: call    loc_1406B045D
 * 00000001406B046F: add     rsp, 8
 * 00000001406B0473: call    loc_1406B0466
 * 00000001406B0478: add     rsp, 8
 * 00000001406B047C: call    loc_1406B046F
 * 00000001406B0481: add     rsp, 8
 * 00000001406B0485: call    loc_1406B0478
 * 00000001406B048A: add     rsp, 8
 * 00000001406B048E: call    loc_1406B0481
 * 00000001406B0493: add     rsp, 8
 * 00000001406B0497: call    loc_1406B048A
 * 00000001406B049C: add     rsp, 8
 * 00000001406B04A0: call    loc_1406B0493
 * 00000001406B04A5: add     rsp, 8
 * 00000001406B04A9: call    loc_1406B049C
 * 00000001406B04AE: add     rsp, 8
 * 00000001406B04B2: call    loc_1406B04A5
 * 00000001406B04B7: add     rsp, 8
 * 00000001406B04BB: call    loc_1406B04AE
 * 00000001406B04C0: add     rsp, 8
 * 00000001406B04C4: call    loc_1406B04B7
 * 00000001406B04C9: add     rsp, 8
 * 00000001406B04CD: call    loc_1406B04C0
 * 00000001406B04D2: add     rsp, 8
 * 00000001406B04D6: call    loc_1406B04C9
 * 00000001406B04DB: add     rsp, 8
 * 00000001406B04DF: call    loc_1406B04D2
 * 00000001406B04E4: add     rsp, 8
 * 00000001406B04E8: mov     eax, 0DADAh
 * 00000001406B04ED: test    byte ptr gs:85Ch, 8
 * 00000001406B04F6: jz      short loc_1406B04FF
 * 00000001406B04F8: mov     al, 20h ; ' '
 * 00000001406B04FA: incsspq rax
 * 00000001406B04FF: test    word ptr gs:858h, 100h
 * 00000001406B050A: jz      short loc_1406B0518
 * 00000001406B050C: xor     eax, eax
 * 00000001406B050E: xor     edx, edx
 * 00000001406B0510: mov     ecx, 1
 * 00000001406B0515: div     rcx
 * 00000001406B0518: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B051C: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B0520: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B0524: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B0528: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B052C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B0530: mov     r11, [rbp-20h]
 * 00000001406B0534: mov     r10, [rbp-28h]
 * 00000001406B0538: mov     r9, [rbp-30h]
 * 00000001406B053C: mov     r8, [rbp-38h]
 * 00000001406B0540: mov     rdx, [rbp-40h]
 * 00000001406B0544: mov     rcx, [rbp-48h]
 * 00000001406B0548: mov     rax, [rbp-50h]
 * 00000001406B054C: mov     rsp, rbp
 * 00000001406B054F: mov     rbp, [rbp+0D8h]
 * 00000001406B0556: add     rsp, 0E8h
 * 00000001406B055D: test    cs:KiKvaShadow, 1
 * 00000001406B0564: jz      short loc_1406B056B
 * 00000001406B0566: jmp     KiKernelExit
 * 00000001406B056B: test    word ptr gs:858h, 200h
 * 00000001406B0576: jz      short loc_1406B057D
 * 00000001406B0578: verw    [rsp-50h+arg_68]
 * 00000001406B057D: swapgs
 * 00000001406B0580: iretq
 * 00000001406B0582: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B0586: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B058A: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B058E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B0592: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B0596: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B059A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B059E: mov     r11, [rbp-20h]
 * 00000001406B05A2: mov     r10, [rbp-28h]
 * 00000001406B05A6: mov     r9, [rbp-30h]
 * 00000001406B05AA: mov     r8, [rbp-38h]
 * 00000001406B05AE: mov     rdx, [rbp-40h]
 * 00000001406B05B2: mov     rcx, [rbp-48h]
 * 00000001406B05B6: mov     rax, [rbp-50h]
 * 00000001406B05BA: mov     rsp, rbp
 * 00000001406B05BD: mov     rbp, [rbp+0D8h]
 * 00000001406B05C4: add     rsp, 0E8h
 * 00000001406B05CB: iretq
 */
