/*
 * XREFs of KiVmbusInterrupt1 @ 0x1406B0020
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140BBC0C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1404038C0 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405BCCD0 (KeWakeProcessor.c)
 *     KiVmbusInterrupt1 @ 0x1406B0020 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1406B0020
 * Reason: Hex-Rays returned no pseudocode for 0x1406B0020
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B0020: push    2
 * 00000001406B0022: push    rbp
 * 00000001406B0023: push    rsi
 * 00000001406B0024: sub     rsp, 150h
 * 00000001406B002B: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B0033: mov     byte ptr [rbp-55h], 0
 * 00000001406B0037: mov     [rbp-50h], rax
 * 00000001406B003B: mov     [rbp-48h], rcx
 * 00000001406B003F: mov     [rbp-40h], rdx
 * 00000001406B0043: mov     [rbp-38h], r8
 * 00000001406B0047: mov     [rbp-30h], r9
 * 00000001406B004B: mov     [rbp-28h], r10
 * 00000001406B004F: mov     [rbp-20h], r11
 * 00000001406B0053: test    byte ptr [rbp+0F0h], 1
 * 00000001406B005A: jnz     short loc_1406B0094
 * 00000001406B005C: xor     edx, edx
 * 00000001406B005E: rdsspq  rdx
 * 00000001406B0063: mov     [rbp+58h], rdx
 * 00000001406B0067: lfence
 * 00000001406B006A: test    byte ptr gs:858h, 1
 * 00000001406B0073: jnz     short loc_1406B007D
 * 00000001406B0075: lfence
 * 00000001406B0078: jmp     loc_1406B0305
 * 00000001406B007D: movzx   eax, word ptr gs:866h
 * 00000001406B0086: mov     ecx, 48h ; 'H'
 * 00000001406B008B: xor     edx, edx
 * 00000001406B008D: wrmsr
 * 00000001406B008F: jmp     loc_1406B0305
 * 00000001406B0094: test    cs:KiKvaShadow, 1
 * 00000001406B009B: jnz     short loc_1406B00A0
 * 00000001406B009D: swapgs
 * 00000001406B00A0: lfence
 * 00000001406B00A3: mov     rcx, gs:9D28h
 * 00000001406B00AC: test    rcx, rcx
 * 00000001406B00AF: jz      short loc_1406B00D0
 * 00000001406B00B1: rdsspq  rdx
 * 00000001406B00B6: mov     r10, gs:9D20h
 * 00000001406B00BF: add     r10, 8
 * 00000001406B00C3: cmp     rdx, r10
 * 00000001406B00C6: jnz     short loc_1406B00D0
 * 00000001406B00C8: rstorssp qword ptr [rcx]
 * 00000001406B00CC: saveprevssp
 * 00000001406B00D0: mov     r10, gs:188h
 * 00000001406B00D9: mov     rcx, gs:188h
 * 00000001406B00E2: mov     rcx, [rcx+220h]
 * 00000001406B00E9: mov     rcx, [rcx+760h]
 * 00000001406B00F0: mov     gs:850h, rcx
 * 00000001406B00F9: mov     cx, gs:862h
 * 00000001406B0102: mov     gs:864h, cx
 * 00000001406B010B: mov     cl, gs:858h
 * 00000001406B0113: mov     gs:85Ah, cl
 * 00000001406B011B: movzx   eax, word ptr gs:868h
 * 00000001406B0124: cmp     gs:866h, ax
 * 00000001406B012D: jz      short loc_1406B0141
 * 00000001406B012F: mov     gs:866h, ax
 * 00000001406B0138: mov     ecx, 48h ; 'H'
 * 00000001406B013D: xor     edx, edx
 * 00000001406B013F: wrmsr
 * 00000001406B0141: movzx   edx, byte ptr gs:858h
 * 00000001406B014A: test    edx, 8
 * 00000001406B0150: jz      short loc_1406B0169
 * 00000001406B0152: mov     eax, 1
 * 00000001406B0157: xor     edx, edx
 * 00000001406B0159: mov     ecx, 49h ; 'I'
 * 00000001406B015E: wrmsr
 * 00000001406B0160: movzx   edx, byte ptr gs:858h
 * 00000001406B0169: test    edx, 2
 * 00000001406B016F: jz      loc_1406B02AC
 * 00000001406B0175: call    loc_1406B0288
 * 00000001406B017A: add     rsp, 8
 * 00000001406B017E: call    loc_1406B0291
 * 00000001406B0183: add     rsp, 8
 * 00000001406B0187: call    loc_1406B017A
 * 00000001406B018C: add     rsp, 8
 * 00000001406B0190: call    loc_1406B0183
 * 00000001406B0195: add     rsp, 8
 * 00000001406B0199: call    loc_1406B018C
 * 00000001406B019E: add     rsp, 8
 * 00000001406B01A2: call    loc_1406B0195
 * 00000001406B01A7: add     rsp, 8
 * 00000001406B01AB: call    loc_1406B019E
 * 00000001406B01B0: add     rsp, 8
 * 00000001406B01B4: call    loc_1406B01A7
 * 00000001406B01B9: add     rsp, 8
 * 00000001406B01BD: call    loc_1406B01B0
 * 00000001406B01C2: add     rsp, 8
 * 00000001406B01C6: call    loc_1406B01B9
 * 00000001406B01CB: add     rsp, 8
 * 00000001406B01CF: call    loc_1406B01C2
 * 00000001406B01D4: add     rsp, 8
 * 00000001406B01D8: call    loc_1406B01CB
 * 00000001406B01DD: add     rsp, 8
 * 00000001406B01E1: call    loc_1406B01D4
 * 00000001406B01E6: add     rsp, 8
 * 00000001406B01EA: call    loc_1406B01DD
 * 00000001406B01EF: add     rsp, 8
 * 00000001406B01F3: call    loc_1406B01E6
 * 00000001406B01F8: add     rsp, 8
 * 00000001406B01FC: call    loc_1406B01EF
 * 00000001406B0201: add     rsp, 8
 * 00000001406B0205: call    loc_1406B01F8
 * 00000001406B020A: add     rsp, 8
 * 00000001406B020E: call    loc_1406B0201
 * 00000001406B0213: add     rsp, 8
 * 00000001406B0217: call    loc_1406B020A
 * 00000001406B021C: add     rsp, 8
 * 00000001406B0220: call    loc_1406B0213
 * 00000001406B0225: add     rsp, 8
 * 00000001406B0229: call    loc_1406B021C
 * 00000001406B022E: add     rsp, 8
 * 00000001406B0232: call    loc_1406B0225
 * 00000001406B0237: add     rsp, 8
 * 00000001406B023B: call    loc_1406B022E
 * 00000001406B0240: add     rsp, 8
 * 00000001406B0244: call    loc_1406B0237
 * 00000001406B0249: add     rsp, 8
 * 00000001406B024D: call    loc_1406B0240
 * 00000001406B0252: add     rsp, 8
 * 00000001406B0256: call    loc_1406B0249
 * 00000001406B025B: add     rsp, 8
 * 00000001406B025F: call    loc_1406B0252
 * 00000001406B0264: add     rsp, 8
 * 00000001406B0268: call    loc_1406B025B
 * 00000001406B026D: add     rsp, 8
 * 00000001406B0271: call    loc_1406B0264
 * 00000001406B0276: add     rsp, 8
 * 00000001406B027A: call    loc_1406B026D
 * 00000001406B027F: add     rsp, 8
 * 00000001406B0283: call    loc_1406B0276
 * 00000001406B0288: add     rsp, 8
 * 00000001406B028C: call    loc_1406B027F
 * 00000001406B0291: add     rsp, 8
 * 00000001406B0295: mov     eax, 0DADAh
 * 00000001406B029A: test    byte ptr gs:85Ch, 8
 * 00000001406B02A3: jz      short loc_1406B02AC
 * 00000001406B02A5: mov     al, 20h ; ' '
 * 00000001406B02A7: incsspq rax
 * 00000001406B02AC: test    edx, 80h
 * 00000001406B02B2: jz      short loc_1406B02BC
 * 00000001406B02B4: lfence
 * 00000001406B02B7: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B02BC: lfence
 * 00000001406B02BF: mov     byte ptr gs:85Eh, 0
 * 00000001406B02C8: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B02CF: jz      short loc_1406B02F0
 * 00000001406B02D1: mov     ecx, 6A7h
 * 00000001406B02D6: rdmsr
 * 00000001406B02D8: cmp     edx, 0
 * 00000001406B02DB: jz      short loc_1406B02F0
 * 00000001406B02DD: mov     ecx, edx
 * 00000001406B02DF: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B02E5: cmp     edx, ecx
 * 00000001406B02E7: jz      short loc_1406B02F0
 * 00000001406B02E9: mov     ecx, 6A7h
 * 00000001406B02EE: wrmsr
 * 00000001406B02F0: test    byte ptr [r10+3], 3
 * 00000001406B02F5: mov     word ptr [rbp+80h], 0
 * 00000001406B02FE: jz      short loc_1406B0305
 * 00000001406B0300: call    KiSaveDebugRegisterState
 * 00000001406B0305: cld
 * 00000001406B0306: stmxcsr dword ptr [rbp-54h]
 * 00000001406B030A: ldmxcsr dword ptr gs:180h
 * 00000001406B0313: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B0317: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B031B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B031F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B0323: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B0327: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B032B: test    byte ptr [rbp+0F0h], 1
 * 00000001406B0332: jz      short loc_1406B0339
 * 00000001406B0334: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B0339: cmp     byte ptr gs:87DAh, 0
 * 00000001406B0342: jz      short loc_1406B0349
 * 00000001406B0344: call    KeWakeProcessor
 * 00000001406B0349: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B0350: cmp     rax, [rbp+0E8h]
 * 00000001406B0357: jnb     short loc_1406B0372
 * 00000001406B0359: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B0360: cmp     rax, [rbp+0E8h]
 * 00000001406B0367: jb      short loc_1406B0372
 * 00000001406B0369: lea     rcx, [rbp-80h]
 * 00000001406B036D: call    KiCheckForSListAddress
 * 00000001406B0372: xor     esi, esi
 * 00000001406B0374: inc     dword ptr gs:87C0h
 * 00000001406B037C: jmp     KiVmbusInterruptDispatch
 */
