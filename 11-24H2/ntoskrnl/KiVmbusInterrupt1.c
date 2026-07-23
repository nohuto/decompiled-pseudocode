/*
 * XREFs of KiVmbusInterrupt1 @ 0x1406B0FC0
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140BBE0C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405BA300 (KeWakeProcessor.c)
 *     KiVmbusInterrupt1 @ 0x1406B0FC0 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1406B0FC0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B0FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B0FC0: push    2
 * 00000001406B0FC2: push    rbp
 * 00000001406B0FC3: push    rsi
 * 00000001406B0FC4: sub     rsp, 150h
 * 00000001406B0FCB: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B0FD3: mov     byte ptr [rbp-55h], 0
 * 00000001406B0FD7: mov     [rbp-50h], rax
 * 00000001406B0FDB: mov     [rbp-48h], rcx
 * 00000001406B0FDF: mov     [rbp-40h], rdx
 * 00000001406B0FE3: mov     [rbp-38h], r8
 * 00000001406B0FE7: mov     [rbp-30h], r9
 * 00000001406B0FEB: mov     [rbp-28h], r10
 * 00000001406B0FEF: mov     [rbp-20h], r11
 * 00000001406B0FF3: test    byte ptr [rbp+0F0h], 1
 * 00000001406B0FFA: jnz     short loc_1406B1034
 * 00000001406B0FFC: xor     edx, edx
 * 00000001406B0FFE: rdsspq  rdx
 * 00000001406B1003: mov     [rbp+58h], rdx
 * 00000001406B1007: lfence
 * 00000001406B100A: test    byte ptr gs:858h, 1
 * 00000001406B1013: jnz     short loc_1406B101D
 * 00000001406B1015: lfence
 * 00000001406B1018: jmp     loc_1406B12A5
 * 00000001406B101D: movzx   eax, word ptr gs:866h
 * 00000001406B1026: mov     ecx, 48h ; 'H'
 * 00000001406B102B: xor     edx, edx
 * 00000001406B102D: wrmsr
 * 00000001406B102F: jmp     loc_1406B12A5
 * 00000001406B1034: test    cs:KiKvaShadow, 1
 * 00000001406B103B: jnz     short loc_1406B1040
 * 00000001406B103D: swapgs
 * 00000001406B1040: lfence
 * 00000001406B1043: mov     rcx, gs:9D28h
 * 00000001406B104C: test    rcx, rcx
 * 00000001406B104F: jz      short loc_1406B1070
 * 00000001406B1051: rdsspq  rdx
 * 00000001406B1056: mov     r10, gs:9D20h
 * 00000001406B105F: add     r10, 8
 * 00000001406B1063: cmp     rdx, r10
 * 00000001406B1066: jnz     short loc_1406B1070
 * 00000001406B1068: rstorssp qword ptr [rcx]
 * 00000001406B106C: saveprevssp
 * 00000001406B1070: mov     r10, gs:188h
 * 00000001406B1079: mov     rcx, gs:188h
 * 00000001406B1082: mov     rcx, [rcx+220h]
 * 00000001406B1089: mov     rcx, [rcx+760h]
 * 00000001406B1090: mov     gs:850h, rcx
 * 00000001406B1099: mov     cx, gs:862h
 * 00000001406B10A2: mov     gs:864h, cx
 * 00000001406B10AB: mov     cl, gs:858h
 * 00000001406B10B3: mov     gs:85Ah, cl
 * 00000001406B10BB: movzx   eax, word ptr gs:868h
 * 00000001406B10C4: cmp     gs:866h, ax
 * 00000001406B10CD: jz      short loc_1406B10E1
 * 00000001406B10CF: mov     gs:866h, ax
 * 00000001406B10D8: mov     ecx, 48h ; 'H'
 * 00000001406B10DD: xor     edx, edx
 * 00000001406B10DF: wrmsr
 * 00000001406B10E1: movzx   edx, byte ptr gs:858h
 * 00000001406B10EA: test    edx, 8
 * 00000001406B10F0: jz      short loc_1406B1109
 * 00000001406B10F2: mov     eax, 1
 * 00000001406B10F7: xor     edx, edx
 * 00000001406B10F9: mov     ecx, 49h ; 'I'
 * 00000001406B10FE: wrmsr
 * 00000001406B1100: movzx   edx, byte ptr gs:858h
 * 00000001406B1109: test    edx, 2
 * 00000001406B110F: jz      loc_1406B124C
 * 00000001406B1115: call    loc_1406B1228
 * 00000001406B111A: add     rsp, 8
 * 00000001406B111E: call    loc_1406B1231
 * 00000001406B1123: add     rsp, 8
 * 00000001406B1127: call    loc_1406B111A
 * 00000001406B112C: add     rsp, 8
 * 00000001406B1130: call    loc_1406B1123
 * 00000001406B1135: add     rsp, 8
 * 00000001406B1139: call    loc_1406B112C
 * 00000001406B113E: add     rsp, 8
 * 00000001406B1142: call    loc_1406B1135
 * 00000001406B1147: add     rsp, 8
 * 00000001406B114B: call    loc_1406B113E
 * 00000001406B1150: add     rsp, 8
 * 00000001406B1154: call    loc_1406B1147
 * 00000001406B1159: add     rsp, 8
 * 00000001406B115D: call    loc_1406B1150
 * 00000001406B1162: add     rsp, 8
 * 00000001406B1166: call    loc_1406B1159
 * 00000001406B116B: add     rsp, 8
 * 00000001406B116F: call    loc_1406B1162
 * 00000001406B1174: add     rsp, 8
 * 00000001406B1178: call    loc_1406B116B
 * 00000001406B117D: add     rsp, 8
 * 00000001406B1181: call    loc_1406B1174
 * 00000001406B1186: add     rsp, 8
 * 00000001406B118A: call    loc_1406B117D
 * 00000001406B118F: add     rsp, 8
 * 00000001406B1193: call    loc_1406B1186
 * 00000001406B1198: add     rsp, 8
 * 00000001406B119C: call    loc_1406B118F
 * 00000001406B11A1: add     rsp, 8
 * 00000001406B11A5: call    loc_1406B1198
 * 00000001406B11AA: add     rsp, 8
 * 00000001406B11AE: call    loc_1406B11A1
 * 00000001406B11B3: add     rsp, 8
 * 00000001406B11B7: call    loc_1406B11AA
 * 00000001406B11BC: add     rsp, 8
 * 00000001406B11C0: call    loc_1406B11B3
 * 00000001406B11C5: add     rsp, 8
 * 00000001406B11C9: call    loc_1406B11BC
 * 00000001406B11CE: add     rsp, 8
 * 00000001406B11D2: call    loc_1406B11C5
 * 00000001406B11D7: add     rsp, 8
 * 00000001406B11DB: call    loc_1406B11CE
 * 00000001406B11E0: add     rsp, 8
 * 00000001406B11E4: call    loc_1406B11D7
 * 00000001406B11E9: add     rsp, 8
 * 00000001406B11ED: call    loc_1406B11E0
 * 00000001406B11F2: add     rsp, 8
 * 00000001406B11F6: call    loc_1406B11E9
 * 00000001406B11FB: add     rsp, 8
 * 00000001406B11FF: call    loc_1406B11F2
 * 00000001406B1204: add     rsp, 8
 * 00000001406B1208: call    loc_1406B11FB
 * 00000001406B120D: add     rsp, 8
 * 00000001406B1211: call    loc_1406B1204
 * 00000001406B1216: add     rsp, 8
 * 00000001406B121A: call    loc_1406B120D
 * 00000001406B121F: add     rsp, 8
 * 00000001406B1223: call    loc_1406B1216
 * 00000001406B1228: add     rsp, 8
 * 00000001406B122C: call    loc_1406B121F
 * 00000001406B1231: add     rsp, 8
 * 00000001406B1235: mov     eax, 0DADAh
 * 00000001406B123A: test    byte ptr gs:85Ch, 8
 * 00000001406B1243: jz      short loc_1406B124C
 * 00000001406B1245: mov     al, 20h ; ' '
 * 00000001406B1247: incsspq rax
 * 00000001406B124C: test    edx, 80h
 * 00000001406B1252: jz      short loc_1406B125C
 * 00000001406B1254: lfence
 * 00000001406B1257: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B125C: lfence
 * 00000001406B125F: mov     byte ptr gs:85Eh, 0
 * 00000001406B1268: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B126F: jz      short loc_1406B1290
 * 00000001406B1271: mov     ecx, 6A7h
 * 00000001406B1276: rdmsr
 * 00000001406B1278: cmp     edx, 0
 * 00000001406B127B: jz      short loc_1406B1290
 * 00000001406B127D: mov     ecx, edx
 * 00000001406B127F: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B1285: cmp     edx, ecx
 * 00000001406B1287: jz      short loc_1406B1290
 * 00000001406B1289: mov     ecx, 6A7h
 * 00000001406B128E: wrmsr
 * 00000001406B1290: test    byte ptr [r10+3], 3
 * 00000001406B1295: mov     word ptr [rbp+80h], 0
 * 00000001406B129E: jz      short loc_1406B12A5
 * 00000001406B12A0: call    KiSaveDebugRegisterState
 * 00000001406B12A5: cld
 * 00000001406B12A6: stmxcsr dword ptr [rbp-54h]
 * 00000001406B12AA: ldmxcsr dword ptr gs:180h
 * 00000001406B12B3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B12B7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B12BB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B12BF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B12C3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B12C7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B12CB: test    byte ptr [rbp+0F0h], 1
 * 00000001406B12D2: jz      short loc_1406B12D9
 * 00000001406B12D4: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B12D9: cmp     byte ptr gs:87DAh, 0
 * 00000001406B12E2: jz      short loc_1406B12E9
 * 00000001406B12E4: call    KeWakeProcessor
 * 00000001406B12E9: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406B12F0: cmp     rax, [rbp+0E8h]
 * 00000001406B12F7: jnb     short loc_1406B1312
 * 00000001406B12F9: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406B1300: cmp     rax, [rbp+0E8h]
 * 00000001406B1307: jb      short loc_1406B1312
 * 00000001406B1309: lea     rcx, [rbp-80h]
 * 00000001406B130D: call    KiCheckForSListAddress
 * 00000001406B1312: xor     esi, esi
 * 00000001406B1314: inc     dword ptr gs:87C0h
 * 00000001406B131C: jmp     KiVmbusInterruptDispatch
 */
